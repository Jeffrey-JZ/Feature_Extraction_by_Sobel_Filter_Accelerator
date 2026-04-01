// Running the Sobel filter on the RVfpga and printing the results via UART
// Author: Junze Jiang
// 2026.4.1

// Uplode the bitstream of the board and build the code to check sobel.c, main.c, image_data.h are normal
// Click "upload" or "debug"

// Software-Only Sobel — with mtime cycle counting
#if defined(D_NEXYS_A7)
   #include <bsp_printf.h>
   #include <bsp_mem_map.h>
   #include <bsp_version.h>
#else
   PRE_COMPILED_MSG("no platform was defined")
#endif
#include <psp_api.h>

#include <stdint.h>
#include <stdio.h>
#include "sobel.h"
#include "image_data.h"

//  mtime register addresses (SweRVolf syscon)
#define MTIME_LOW   (*(volatile uint32_t *)0x80001020)
#define MTIME_HIGH  (*(volatile uint32_t *)0x80001024)

static inline uint64_t read_mtime(void) {
    uint32_t lo, hi1, hi2;
    do {
        hi1 = MTIME_HIGH;
        lo  = MTIME_LOW;
        hi2 = MTIME_HIGH;
    } while (hi1 != hi2);
    return ((uint64_t)hi1 << 32) | lo;
}

//  Buffers
static uint8_t src_buf[IMG_W * IMG_H];
static uint8_t edges_sw[IMG_W * IMG_H];

int main(void) {
    int i;
    const uint8_t threshold = 60;

    uartInit();

    printfNexys("\n");
    printfNexys("========================================\n");
    printfNexys("  Sobel Benchmark: CPU-only\n");
    printfNexys("  Image: %d x %d, threshold=%d\n",
                (int)IMG_W, (int)IMG_H, (int)threshold);
    printfNexys("========================================\n");

    // Copy input image into writable RAM buffer
    for (i = 0; i < IMG_W * IMG_H; i++) {
        src_buf[i] = input[i];
    }

    // CPU-only software Sobel
    printfNexys("\n--- CPU-only software Sobel ---\n");

    uint64_t t0_sw = read_mtime();

    sobel_edge(src_buf, edges_sw, IMG_W, IMG_H, threshold);

    uint64_t t1_sw = read_mtime();
    uint32_t cycles_sw = (uint32_t)(t1_sw - t0_sw);

    printfNexys("CPU-only cycles: %u\n", cycles_sw);

    printfNexys("========================================\n");
    printfNexys("=== Test Complete ===\n");

    while (1) {
        for (i = 0; i < 10000000; i++) {}
    }

    return 0;
}