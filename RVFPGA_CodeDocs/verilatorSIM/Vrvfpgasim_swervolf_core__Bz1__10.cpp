// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "Vrvfpgasim_swervolf_core__Bz1.h"
#include "Vrvfpgasim__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__80(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__80\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) {
        if ((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__spcr))) {
            if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfre) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfifo__DOT__rp 
                    = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfifo__DOT__rp_p1;
            }
        } else {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfifo__DOT__rp = 0U;
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfifo__DOT__rp = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) {
        if ((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__spcr))) {
            if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfre) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfifo__DOT__rp 
                    = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfifo__DOT__rp_p1;
            }
        } else {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfifo__DOT__rp = 0U;
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfifo__DOT__rp = 0U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfifo__DOT__rp_p1 
        = (3U & ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfifo__DOT__rp)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfempty 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfifo__DOT__wp) 
            == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfifo__DOT__rp)) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfifo__DOT__gb)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wffull 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfifo__DOT__wp) 
            == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfifo__DOT__rp)) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfifo__DOT__gb));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfifo__DOT__rp_p1 
        = (3U & ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfifo__DOT__rp)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfempty 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfifo__DOT__wp) 
            == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfifo__DOT__rp)) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfifo__DOT__gb)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wffull 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfifo__DOT__wp) 
            == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfifo__DOT__rp)) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfifo__DOT__gb));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__spsr 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__spif) 
            << 7U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wcol) 
                       << 6U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wffull) 
                                  << 3U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfempty) 
                                             << 2U) 
                                            | (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__rfifo__DOT__wp) 
                                                  == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__rfifo__DOT__rp)) 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__rfifo__DOT__gb)) 
                                                << 1U) 
                                               | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__rfifo__DOT__wp) 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__rfifo__DOT__rp)) 
                                                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__rfifo__DOT__gb))))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__spsr 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__spif) 
            << 7U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wcol) 
                       << 6U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wffull) 
                                  << 3U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfempty) 
                                             << 2U) 
                                            | (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__rfifo__DOT__wp) 
                                                  == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__rfifo__DOT__rp)) 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__rfifo__DOT__gb)) 
                                                << 1U) 
                                               | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__rfifo__DOT__wp) 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__rfifo__DOT__rp)) 
                                                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__rfifo__DOT__gb))))))));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_multiclk__TOP__rvfpgasim__swervolf__81(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_multiclk__TOP__rvfpgasim__swervolf__81\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_hit 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_hit)) 
           | (((0xfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[0U]) 
               == (0xfffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_rw_addr_ff 
                               >> 8U))) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_tag_valid)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_hit 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_hit)) 
           | (0xfffffffeU & ((((0xfffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[1U] 
                                             << 0xbU) 
                                            | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[0U] 
                                               >> 0x15U))) 
                               == (0xfffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_rw_addr_ff 
                                               >> 8U))) 
                              << 1U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_tag_valid))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_hit 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_hit)) 
           | (0xfffffffcU & ((((0xfffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[2U] 
                                             << 0x16U) 
                                            | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[1U] 
                                               >> 0xaU))) 
                               == (0xfffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_rw_addr_ff 
                                               >> 8U))) 
                              << 2U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_tag_valid))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_hit 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_hit)) 
           | (0xfffffff8U & ((((0xfffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[2U] 
                                             << 1U) 
                                            | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[1U] 
                                               >> 0x1fU))) 
                               == (0xfffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_rw_addr_ff 
                                               >> 8U))) 
                              << 3U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_tag_valid))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc_data_in 
        = (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__sel_ic_data)) 
            << 0x31U) | (((QData)((IData)(((((0U != 
                                              ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_way_perr) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_tag_valid))) 
                                             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__sel_ic_data)) 
                                            << 0x1fU) 
                                           | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_btb_target_f2))) 
                          << 0x11U) | (QData)((IData)(
                                                      ((0x1ffe0U 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_data_f2) 
                                                           << 1U)) 
                                                       | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fghr))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_w_debug 
        = (7U & ((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt) 
                        & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                                   >> 0x12U)))) ? (IData)(
                                                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                                                           >> 0x17U))
                  : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_en_new_q)
                      ? (((((- (IData)((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__replace_way_mb_any)))) 
                            & (3U | (4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_mb_ff)))) 
                           | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__replace_way_mb_any) 
                                                >> 1U)))) 
                              & (1U | (4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_mb_ff))))) 
                          | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__replace_way_mb_any) 
                                               >> 2U)))) 
                             & (4U | (2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_mb_ff))))) 
                         | (2U & ((- (IData)((1U & 
                                              ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__replace_way_mb_any) 
                                               >> 3U)))) 
                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_mb_ff))))
                      : (((((- (IData)((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_hit)))) 
                            & (3U | (4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status)))) 
                           | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_hit) 
                                                >> 1U)))) 
                              & (1U | (4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status))))) 
                          | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_hit) 
                                               >> 2U)))) 
                             & (4U | (2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status))))) 
                         | (2U & ((- (IData)((1U & 
                                              ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_hit) 
                                               >> 3U)))) 
                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status)))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q 
        = (0xfU & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__debug_rd_wy_ff__dout))
                    ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__debug_rd_wy_ff__dout) 
                       >> 1U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_hit)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_under_miss_f2 
        = ((((~ (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_hit)))) 
             | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)) 
            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_icache_f2)) 
           & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2 
        = (((((~ (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_hit)))) 
              | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)) 
             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_icache_f2)) 
            & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_region_acc_fault_f2)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_hit_f2 
        = (((((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_hit)) 
              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_icache_f2)) 
             & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
            & ((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
               | (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__sel_mb_addr_ff)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_byp_data_first_half_valid_in 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_byp_first_data) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_byp_data_first_half_valid) 
              & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_byp_data_second_half_valid_in 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_byp_second_data) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_byp_data_second_half_valid) 
              & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_byp_data_error_first_half_in 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_byp_first_data)
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_data_error)
            : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_byp_data_error_first_half) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_byp_data_error_second_half_in 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_byp_second_data)
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_data_error)
            : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_byp_data_error_second_half) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__miss_state_en 
        = ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
            ? ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout) 
                   >> 1U)) & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
                               ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_en_new) 
                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_last_data_beat))
                               : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final) 
                                   | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__flush_final_f2)) 
                                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_hit_f2))))
            : ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
                ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
                    ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final) 
                       | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_en_new) 
                          & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_last_data_beat)))
                    : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_en_new) 
                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_last_data_beat)) 
                       | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_under_miss_f2)))
                : ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
                    ? (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final) 
                        | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_hit_f2)) 
                       | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_en_new) 
                          & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_last_data_beat)))
                    : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_reset_data_beat_cnt 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_en_new) 
              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_last_data_beat)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__miss_nxtstate 
        = ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
            ? 0U : ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
                     ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
                         ? (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final) 
                             & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_en_new) 
                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_last_data_beat))))
                             ? 2U : 0U) : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_under_miss_f2) 
                                            & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_en_new) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_last_data_beat))))
                                            ? 5U : 0U))
                     : ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
                         ? (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_hit_f2) 
                               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final))) 
                              & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_en_new) 
                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_last_data_beat)))) 
                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff)))
                             ? 3U : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_hit_f2) 
                                      & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff))
                                      ? 0U : (((((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_hit_f2)) 
                                                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final))) 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_en_new) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_last_data_beat))) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff))
                                               ? 4U
                                               : ((
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_en_new) 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_last_data_beat)) 
                                                   & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff)))
                                                   ? 0U
                                                   : 
                                                  (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final) 
                                                    & (~ 
                                                       ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_en_new) 
                                                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_last_data_beat))))
                                                    ? 2U
                                                    : 0U)))))
                         : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2) 
                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)))
                             ? 1U : 2U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_hit_f2 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_hit_f2) 
             | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_hit_f2)) 
            | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_iccm_f2) 
               & ((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
                  | (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))))) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_region_acc_fault_f2) 
               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_fetch_req_f2)) 
              & (~ ((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
                    | (5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_wr_cumulative_err 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_data_error) 
            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_wr_data_comb_err_ff)) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_reset_data_beat_cnt)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_new_data_beat_count 
        = (7U & (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_inc_data_beat_cnt))) 
                  & ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_data_beat_count))) 
                 | ((- (IData)((1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_inc_data_beat_cnt)) 
                                      & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_reset_data_beat_cnt)))))) 
                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_data_beat_count))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__miss_state_ff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__miss_state_en)
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__miss_nxtstate)
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__sel_hold_imb 
        = (((((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
              & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_en_new) 
                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_last_data_beat)))) 
             & (~ ((4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)))) 
            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2)) 
           | ((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
              & (4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__miss_nxtstate))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__faddrf2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (0xfffffffU & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f2) 
                           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_kill_next_f2))) 
                          & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_hit_f2))
                          ? (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                             >> 3U) : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__faddrf2_ff__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_f2 
        = (((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)) 
            & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_hit_f2))) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f2));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_f2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f2) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_hit_f2)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_f2_qual 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_hit_f2) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__imb_f2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_f1_f2_c1_clken)
            ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__sel_hold_imb)
                ? vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f2_ff__dout
                : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_addr_f1)
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f2_ff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_in 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__sel_hold_imb)
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff)
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_uncacheable_f1));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_f1 
        = ((((((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_f2))) 
              & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f1))) 
             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f2)) 
            & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__iccrit_ff__dout))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_kill_next_f2)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__next_state 
        = ((2U & (((((((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fsm_ff__dout) 
                           >> 1U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fsm_ff__dout)) 
                      & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__reset_delayed))) 
                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_f2)) 
                    & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__goto_idle))) 
                   << 1U) | (0xfffffffeU & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fsm_ff__dout) 
                                              & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__reset_delayed)) 
                                                 << 1U)) 
                                             & ((~ 
                                                 (((((((2U 
                                                        == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
                                                       & (~ 
                                                          ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_en_new) 
                                                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_last_data_beat)))) 
                                                      | (0U 
                                                         == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))) 
                                                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)) 
                                                    & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__dma_stall))) 
                                                   & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_f2))) 
                                                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__ran_ff__dout)))) 
                                                << 1U)) 
                                            & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__goto_idle)) 
                                               << 1U))))) 
           | (1U & ((((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__goto_idle)) 
                      & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_flush_noredir_wb))) 
                         & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fsm_ff__dout)))) 
                     | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fsm_ff__dout) 
                        & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__goto_idle)))) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__reset_delayed))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_right3 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume2) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_f2));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_right 
        = (((((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume1)) 
              & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume2))) 
             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_f2)) 
            | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume1) 
                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume2))) 
                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f1))) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_f2)))) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume2) 
               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f1)) 
              & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_f2))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_right2 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume1) 
             & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume2))) 
            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_f2)) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume2) 
              & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f1))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_left 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f1) 
            & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume1) 
                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume2)))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_f2)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_fetch_val_f2 
        = ((0xffffff80U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_f2_qual) 
                             << 7U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_inst_mask_f2) 
                                       << 1U)) & ((
                                                   ((~ 
                                                     (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout 
                                                      >> 2U)) 
                                                    & (~ 
                                                       (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout 
                                                        >> 1U))) 
                                                   & (~ vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout)) 
                                                  << 7U))) 
           | ((0xffffffc0U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_f2_qual) 
                                << 6U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_inst_mask_f2) 
                                          << 1U)) & 
                              (((~ (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout 
                                    >> 2U)) & (~ (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout 
                                                  >> 1U))) 
                               << 6U))) | ((0xffffffe0U 
                                            & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_f2_qual) 
                                                 << 5U) 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_inst_mask_f2) 
                                                   << 1U)) 
                                               & ((((~ 
                                                     (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout 
                                                      >> 2U)) 
                                                    & (~ vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout)) 
                                                   | ((~ 
                                                       (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout 
                                                        >> 2U)) 
                                                      & (~ 
                                                         (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout 
                                                          >> 1U)))) 
                                                  << 5U))) 
                                           | ((0xfffffff0U 
                                               & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_f2_qual) 
                                                    << 4U) 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_inst_mask_f2) 
                                                      << 1U)) 
                                                  & ((~ 
                                                      (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout 
                                                       >> 2U)) 
                                                     << 4U))) 
                                              | ((0xfffffff8U 
                                                  & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_f2_qual) 
                                                       << 3U) 
                                                      & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_inst_mask_f2) 
                                                         << 1U)) 
                                                     & ((((~ 
                                                           (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout 
                                                            >> 1U)) 
                                                          & (~ vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout)) 
                                                         | (~ 
                                                            (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout 
                                                             >> 2U))) 
                                                        << 3U))) 
                                                 | ((0xfffffffcU 
                                                     & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_f2_qual) 
                                                          << 2U) 
                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_inst_mask_f2) 
                                                            << 1U)) 
                                                        & (((~ 
                                                             (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout 
                                                              >> 1U)) 
                                                            | (~ 
                                                               (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout 
                                                                >> 2U))) 
                                                           << 2U))) 
                                                    | (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_f2_qual) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_inst_mask_f2)) 
                                                         & (((~ vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout) 
                                                             | (~ 
                                                                (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout 
                                                                 >> 1U))) 
                                                            | (~ 
                                                               (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout 
                                                                >> 2U)))) 
                                                        << 1U) 
                                                       | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_f2_qual))))))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__unc_miss_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_f1_f2_c1_clken)
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_in)
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__faddmiss_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & ((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final) 
                      | ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_hit_f2)) 
                         & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f2))) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_kill_next_f2)) 
                    | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__iccrit_ff__dout) 
                       >> 1U)) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_kill_next_f2)) 
                  | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f2) 
                      & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f1))) 
                     & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__iccrit_ff__dout)))))
            ? (((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_flush))) 
                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_path_final) 
                 | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_f2))) 
                    & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout)) 
                | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_f1))) 
                   & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_addr_f1)) 
               | ((- (IData)((1U & (((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_f2)) 
                                     & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_f1))) 
                                    & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_flush)))))) 
                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fetch_addr_bf))
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddmiss_ff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__faddrf1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__next_state)) 
            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fetch_crit_word))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fetch_addr_bf
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_write_ns 
        = (0xfU & (((((((1U & (- (IData)(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final) 
                                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f1)))))) 
                        | (2U & (- (IData)(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final) 
                                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f1)))))) 
                       | (7U & ((- (IData)(((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)) 
                                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_right)))) 
                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                                   >> 1U)))) | (3U 
                                                & ((- (IData)(
                                                              ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)) 
                                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_right2)))) 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                                                      >> 2U)))) 
                     | (1U & ((- (IData)(((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)) 
                                          & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_right3)))) 
                              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                                 >> 3U)))) | (0xeU 
                                              & ((- (IData)(
                                                            ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)) 
                                                             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_left)))) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                                                    << 1U)))) 
                   | ((- (IData)((1U & (((((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)) 
                                           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_right))) 
                                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_right2))) 
                                         & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_left))) 
                                        & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_right3)))))) 
                      & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__wrptr_in 
        = ((((1U & (- (IData)(((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__wrptr)) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_fetch_val_f2))))) 
             | (2U & (- (IData)(((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__wrptr)) 
                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_fetch_val_f2)))))) 
            | ((- (IData)((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_fetch_val_f2))))) 
               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__wrptr))) 
           & (~ (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__fetch_to_f1 
        = (1U & ((((((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf0val)) 
                     & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf1val))) 
                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f2val)) 
                   | (((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf0val)) 
                       & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf1val)) 
                      & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f2val)))) 
                  | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf0val) 
                      & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf1val))) 
                     & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f2val)))) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_fetch_val_f2)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__fetch_to_f0 
        = (1U & ((((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf0val)) 
                   & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf1val))) 
                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f2val))) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_fetch_val_f2)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__fetch_to_f2 
        = (1U & (((((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf0val)) 
                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf1val)) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f2val)) 
                  | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf0val) 
                      & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf1val)) 
                     & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f2val)))) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_fetch_val_f2)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen 
        = ((((2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__wrptr)) 
             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_fetch_val_f2)) 
            << 2U) | ((((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__wrptr)) 
                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_fetch_val_f2)) 
                       << 1U) | ((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__wrptr)) 
                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_fetch_val_f2))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__fetch_to_f1) 
               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_f2_f1)) 
              | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1_shift_2B)) 
             | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1_shift_4B)) 
            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1_shift_6B))
            ? ((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__fetch_to_f1))) 
                 & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout) 
                | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_f2_f1))) 
                   & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f2pcff__dout)) 
               | ((- (IData)((1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__fetch_to_f1)) 
                                    & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_f2_f1)))))) 
                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf1pc))
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f1pcff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (0x7fffffffU & ((((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__fetch_to_f0) 
                                | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_f2_f0)) 
                               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_f1_f0)) 
                              | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_2B)) 
                             | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_4B)) 
                            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_6B)) 
                           | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_8B))
                           ? (((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__fetch_to_f0))) 
                                 & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout) 
                                | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_f2_f0))) 
                                   & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f2pcff__dout)) 
                               | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_f1_f0))) 
                                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf1pc)) 
                              | ((- (IData)((1U & (
                                                   ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__fetch_to_f0)) 
                                                    & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_f2_f0))) 
                                                   & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_f1_f0)))))) 
                                 & (((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_2B))) 
                                       & ((IData)(1U) 
                                          + vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f0pcff__dout)) 
                                      | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_4B))) 
                                         & ((IData)(2U) 
                                            + vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f0pcff__dout))) 
                                     | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_6B))) 
                                        & ((IData)(3U) 
                                           + vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f0pcff__dout))) 
                                    | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_8B))) 
                                       & ((IData)(4U) 
                                          + vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f0pcff__dout)))))
                           : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f0pcff__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f2pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__fetch_to_f2)
            ? vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f2pcff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f2val_in 
        = ((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__fetch_to_f2))) 
             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_fetch_val_f2)) 
            | ((- (IData)((1U & (((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__fetch_to_f2)) 
                                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_f2_f1))) 
                                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_f2_f0)))))) 
               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f2val))) 
           & (~ (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc_data_in
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc2);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc_data_in
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc1);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc_data_in
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc0);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata_in
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata2);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata_in
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata1);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata_in
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata0);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2off_in 
        = (7U & ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))
                  ? vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout
                  : ((2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr))
                      ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2off) 
                         + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__first_offset))
                      : ((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr))
                          ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2off) 
                             + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__second_offset))
                          : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2off)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1off_in 
        = (7U & ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))
                  ? vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout
                  : ((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr))
                      ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1off) 
                         + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__first_offset))
                      : ((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr))
                          ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1off) 
                             + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__second_offset))
                          : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1off)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0off_in 
        = (7U & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))
                  ? vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout
                  : ((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr))
                      ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0off) 
                         + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__first_offset))
                      : ((2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr))
                          ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0off) 
                             + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__second_offset))
                          : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0off)))));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_multiclk__TOP__rvfpgasim__swervolf__82(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_multiclk__TOP__rvfpgasim__swervolf__82\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_sbaddress0_reg__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren0) 
            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren1))
            ? (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren0))) 
                & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                           >> 2U))) | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren1))) 
                                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg 
                                          + ((((1U 
                                                & (- (IData)(
                                                             (0U 
                                                              == 
                                                              (7U 
                                                               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                                                                  >> 0x11U)))))) 
                                               | (2U 
                                                  & (- (IData)(
                                                               (1U 
                                                                == 
                                                                (7U 
                                                                 & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                                                                    >> 0x11U))))))) 
                                              | (4U 
                                                 & (- (IData)(
                                                              (2U 
                                                               == 
                                                               (7U 
                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                                                                   >> 0x11U))))))) 
                                             | (8U 
                                                & (- (IData)(
                                                             (3U 
                                                              == 
                                                              (7U 
                                                               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                                                                  >> 0x11U))))))))))
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrolff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_wren)
            ? ((0xcU & ((IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                 >> 0x20U)) << 2U)) 
               | ((2U & ((IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                  >> 0x1eU)) << 1U)) 
                  | (1U & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                   >> 3U))))) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcontrolff__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_din 
        = ((0xff000000U & ((IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                    >> 0x1aU)) << 0x18U)) 
           | (((0x780000U & ((IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                      >> 0x15U)) << 0x13U)) 
               | ((((0U == (0xffU & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                             >> 0x1aU)))) 
                    & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                               >> 0x14U))) << 0x12U) 
                  | ((((0U == (0xffU & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                >> 0x1aU)))) 
                       & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                  >> 0x13U))) << 0x11U) 
                     | (0x10000U & ((IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                             >> 0x12U)) 
                                    << 0x10U))))) | 
              (0xffffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_wren)
                           ? (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                      >> 2U)) : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_cmd_next_addr))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcommand_reg__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (0xffffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_wren)
                       ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_din 
                          >> 0x10U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout)));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__83(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__83\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfre 
        = vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__spi__DOT__wfre;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfre 
        = vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__spi2__DOT__wfre;
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) {
        if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wb_wr) {
            if ((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vcellinp__spi__adr_i))) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__spcr 
                    = (0xffU & (0x10U | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat));
            }
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__spcr = 0x10U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) {
        if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wb_wr) {
            if ((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vcellinp__spi__adr_i))) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__spcr 
                    = (0xffU & (0x10U | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat));
            }
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__spcr = 0x10U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__espr 
        = ((0xcU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__sper) 
                    << 2U)) | (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__spcr)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__espr 
        = ((0xcU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__sper) 
                    << 2U)) | (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__spcr)));
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_awready = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_wready = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_arready = 0U;
        if ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi2wb__DOT__cs))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_awready = 0U;
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_wready = 0U;
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_arready = 0U;
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_rvalid = 0U;
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_bvalid = 0U;
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr = 0U;
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_cyc = 0U;
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb = 0U;
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel = 0U;
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_we = 0U;
            vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__axi2wb__DOT__arbiter = 1U;
            vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__axi2wb__DOT__cs = 0U;
        } else {
            if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi2wb__DOT__cs))) {
                if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi2wb__DOT__cs))) {
                    if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi2wb__DOT__cs))) {
                        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_rvalid = 1U;
                        if ((1U & vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0U])) {
                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_rvalid = 0U;
                            vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__axi2wb__DOT__cs = 0U;
                        }
                    } else {
                        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_bvalid = 1U;
                        if ((0x40U & vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[2U])) {
                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_bvalid = 0U;
                            vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__axi2wb__DOT__cs = 0U;
                        }
                    }
                } else {
                    if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi2wb__DOT__cs))) {
                        if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_io_err) 
                             | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_io_ack))) {
                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_cyc = 0U;
                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb = 0U;
                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel = 0U;
                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_rvalid = 1U;
                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_rdata 
                                = (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_io_dat)) 
                                    << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi2wb__DOT__wb_rdt_low)));
                            vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__axi2wb__DOT__cs = 7U;
                        }
                    } else {
                        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr 
                            = (1U | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr));
                        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel = 0xfU;
                        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_cyc = 1U;
                        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb = 1U;
                        vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__axi2wb__DOT__cs = 5U;
                    }
                }
            } else {
                if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi2wb__DOT__cs))) {
                    if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi2wb__DOT__cs))) {
                        if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_io_err) 
                             | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_io_ack))) {
                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_cyc = 0U;
                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb = 0U;
                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel = 0U;
                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi2wb__DOT__wb_rdt_low 
                                = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_io_dat;
                            vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__axi2wb__DOT__cs = 4U;
                        }
                    } else {
                        if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_io_err) 
                             | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_io_ack))) {
                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_cyc = 0U;
                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb = 0U;
                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel = 0U;
                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_we = 0U;
                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_bvalid = 1U;
                            vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__axi2wb__DOT__cs = 6U;
                        }
                    }
                } else {
                    if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi2wb__DOT__cs))) {
                        if ((0x80U & vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[2U])) {
                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi2wb__DOT__hi_32b_w 
                                = (0U == (0xfU & ((
                                                   vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[3U] 
                                                   << 0x16U) 
                                                  | (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[2U] 
                                                     >> 0xaU))));
                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr 
                                = ((0x3ffeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)) 
                                   | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi2wb__DOT__hi_32b_w));
                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_cyc = 1U;
                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb = 1U;
                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_we = 1U;
                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_wready = 1U;
                            vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__axi2wb__DOT__cs = 2U;
                            if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi2wb__DOT__hi_32b_w) {
                                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel 
                                    = (0xfU & ((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[3U] 
                                                << 0x12U) 
                                               | (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[2U] 
                                                  >> 0xeU)));
                                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat 
                                    = ((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[4U] 
                                        << 0xeU) | 
                                       (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[3U] 
                                        >> 0x12U));
                            } else {
                                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel 
                                    = (0xfU & ((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[3U] 
                                                << 0x16U) 
                                               | (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[2U] 
                                                  >> 0xaU)));
                                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat 
                                    = ((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[3U] 
                                        << 0xeU) | 
                                       (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[2U] 
                                        >> 0x12U));
                            }
                        }
                    } else {
                        vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__axi2wb__DOT__arbiter = 1U;
                        if (((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[4U] 
                              >> 0x12U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi2wb__DOT__arbiter))) {
                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr 
                                = ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)) 
                                   | (0x3ffeU & ((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[6U] 
                                                  << 7U) 
                                                 | (0x7eU 
                                                    & (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[5U] 
                                                       >> 0x19U)))));
                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_awready = 1U;
                            vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__axi2wb__DOT__arbiter = 0U;
                            if ((0x80U & vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[2U])) {
                                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi2wb__DOT__hi_32b_w 
                                    = (0U == (0xfU 
                                              & ((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[3U] 
                                                  << 0x16U) 
                                                 | (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[2U] 
                                                    >> 0xaU))));
                                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr 
                                    = ((0x3ffeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)) 
                                       | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi2wb__DOT__hi_32b_w));
                                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_cyc = 1U;
                                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb = 1U;
                                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_we = 1U;
                                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_wready = 1U;
                                vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__axi2wb__DOT__cs = 2U;
                                if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi2wb__DOT__hi_32b_w) {
                                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel 
                                        = (0xfU & (
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[3U] 
                                                    << 0x12U) 
                                                   | (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[2U] 
                                                      >> 0xeU)));
                                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat 
                                        = ((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[4U] 
                                            << 0xeU) 
                                           | (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[3U] 
                                              >> 0x12U));
                                } else {
                                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel 
                                        = (0xfU & (
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[3U] 
                                                    << 0x16U) 
                                                   | (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[2U] 
                                                      >> 0xaU)));
                                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat 
                                        = ((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[3U] 
                                            << 0xeU) 
                                           | (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[2U] 
                                              >> 0x12U));
                                }
                            } else {
                                vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__axi2wb__DOT__cs = 1U;
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0U])) {
                                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr 
                                    = (0x3fffU & ((
                                                   vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[2U] 
                                                   << 0x1eU) 
                                                  | (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[1U] 
                                                     >> 2U)));
                                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel = 0xfU;
                                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_cyc = 1U;
                                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb = 1U;
                                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_arready = 1U;
                                vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__axi2wb__DOT__cs = 3U;
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__axi2wb__DOT__arbiter = 1U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_awready = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_wready = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_arready = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_rvalid = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_bvalid = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_cyc = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_we = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi2wb__DOT__wb_rdt_low = 0xdeadbeefU;
        vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__axi2wb__DOT__cs = 0U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi2wb__DOT__arbiter 
        = vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__axi2wb__DOT__arbiter;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi2wb__DOT__cs 
        = vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__axi2wb__DOT__cs;
    vlSymsp->TOP__rvfpgasim__swervolf.__Vcellinp__spi__adr_i 
        = ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))
            ? 0U : (7U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                          >> 1U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match 
        = ((0x7eU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match)) 
           | (0x2000U == (0xfffff000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                                         << 2U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match 
        = ((0x7dU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match)) 
           | ((0x1400U == (0xffffffc0U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                                          << 2U))) 
              << 1U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match 
        = ((0x7bU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match)) 
           | ((0x1200U == (0xffffffc0U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                                          << 2U))) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match 
        = ((0x77U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match)) 
           | ((0x1100U == (0xffffffc0U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                                          << 2U))) 
              << 3U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match 
        = ((0x6fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match)) 
           | ((0x1040U == (0xffffffc0U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                                          << 2U))) 
              << 4U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match 
        = ((0x5fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match)) 
           | ((0x1000U == (0xffffffc0U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                                          << 2U))) 
              << 5U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match 
        = ((0x3fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match)) 
           | ((0U == (0xfffff000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                                     << 2U))) << 6U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
        = ((0xfffffbffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[2U]) 
           | (0xfffffc00U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_rvalid) 
                             << 0xaU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
        = ((0xffefffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[2U]) 
           | (0xfff00000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_bvalid) 
                             << 0x14U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[0U] 
        = ((1U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[0U]) 
           | (0xfffffffeU & (2U | (0xfffffff0U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_rdata) 
                                                  << 4U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[1U] 
        = ((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_rdata) 
                  >> 0x1cU)) | (0xfffffffeU & ((0xeU 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_rdata) 
                                                   >> 0x1cU)) 
                                               | (0xfffffff0U 
                                                  & ((IData)(
                                                             (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_rdata 
                                                              >> 0x20U)) 
                                                     << 4U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
        = ((0xfffffc00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[2U]) 
           | ((1U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_rdata 
                              >> 0x20U)) >> 0x1cU)) 
              | (0xfffffffeU & ((0xfffffff0U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_rid) 
                                                << 4U)) 
                                | (0xeU & ((IData)(
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_rdata 
                                                    >> 0x20U)) 
                                           >> 0x1cU))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
        = ((0xff1fffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[2U]) 
           | (0xffe00000U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_awready) 
                              << 0x17U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_arready) 
                                            << 0x16U) 
                                           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_wready) 
                                              << 0x15U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__in 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match;
    vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout = 0U;
    if ((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__in))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout = 6U;
    }
    if ((0x20U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__in))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout = 5U;
    }
    if ((0x10U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__in))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout = 4U;
    }
    if ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__in))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout = 3U;
    }
    if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__in))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout = 2U;
    }
    if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__in))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout = 1U;
    }
    if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__in))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout = 0U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel 
        = vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout;
    vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match) 
           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_cyc) 
              << (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__wb_err = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wb_acc 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
            >> 4U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wb_acc 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
            >> 3U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfwe 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wb_acc) 
             & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vcellinp__spi__adr_i))) 
            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_spi_flash_ack)) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_we));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__rfre 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wb_acc) 
             & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vcellinp__spi__adr_i))) 
            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_spi_flash_ack)) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_we)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wb_wr 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wb_acc) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_we));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfwe 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wb_acc) 
             & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vcellinp__spi__adr_i))) 
            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_spi_accel_ack)) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_we));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__rfre 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wb_acc) 
             & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vcellinp__spi__adr_i))) 
            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_spi_accel_ack)) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_we)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wb_wr 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wb_acc) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_we));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wr_spsr 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wb_wr) 
           & (1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vcellinp__spi__adr_i)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wr_spsr 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wb_wr) 
           & (1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vcellinp__spi__adr_i)));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_multiclk__TOP__rvfpgasim__swervolf__84(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_multiclk__TOP__rvfpgasim__swervolf__84\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*159:0*/ __Vtemp1674[5];
    // Body
    __Vtemp1674[0U] = (((((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                          & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0U]) 
                         | ((- (IData)((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                               >> 1U) 
                                              | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                            & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[5U] 
                                << 0x18U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[4U] 
                                             >> 8U)))) 
                        | ((- (IData)((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                              >> 2U) 
                                             | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                           & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[9U] 
                               << 0x10U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[8U] 
                                            >> 0x10U)))) 
                       | ((- (IData)((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                             >> 3U) 
                                            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                          & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xdU] 
                              << 8U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xcU] 
                                        >> 0x18U))));
    __Vtemp1674[1U] = (((((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                          & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[1U]) 
                         | ((- (IData)((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                               >> 1U) 
                                              | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                            & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[6U] 
                                << 0x18U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[5U] 
                                             >> 8U)))) 
                        | ((- (IData)((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                              >> 2U) 
                                             | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                           & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xaU] 
                               << 0x10U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[9U] 
                                            >> 0x10U)))) 
                       | ((- (IData)((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                             >> 3U) 
                                            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                          & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xeU] 
                              << 8U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xdU] 
                                        >> 0x18U))));
    __Vtemp1674[2U] = (((((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                          & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[2U]) 
                         | ((- (IData)((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                               >> 1U) 
                                              | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                            & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[7U] 
                                << 0x18U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[6U] 
                                             >> 8U)))) 
                        | ((- (IData)((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                              >> 2U) 
                                             | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                           & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xbU] 
                               << 0x10U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xaU] 
                                            >> 0x10U)))) 
                       | ((- (IData)((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                             >> 3U) 
                                            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                          & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xfU] 
                              << 8U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xeU] 
                                        >> 0x18U))));
    __Vtemp1674[3U] = (((((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                          & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[3U]) 
                         | ((- (IData)((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                               >> 1U) 
                                              | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                            & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[8U] 
                                << 0x18U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[7U] 
                                             >> 8U)))) 
                        | ((- (IData)((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                              >> 2U) 
                                             | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                           & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xcU] 
                               << 0x10U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xbU] 
                                            >> 0x10U)))) 
                       | ((- (IData)((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                             >> 3U) 
                                            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                          & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0x10U] 
                              << 8U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xfU] 
                                        >> 0x18U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[0U] 
        = __Vtemp1674[0U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[1U] 
        = __Vtemp1674[1U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[2U] 
        = __Vtemp1674[2U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[3U] 
        = __Vtemp1674[3U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[4U] 
        = (0xffU & (((((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                         | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                       & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[4U]) 
                      | ((- (IData)((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                            >> 1U) 
                                           | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                         & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[9U] 
                             << 0x18U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[8U] 
                                          >> 8U)))) 
                     | ((- (IData)((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                           >> 2U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                        & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xdU] 
                            << 0x10U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xcU] 
                                         >> 0x10U)))) 
                    | ((- (IData)((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                          >> 3U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0x10U] 
                          >> 0x18U))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_debug_data_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (0x3ffffffffULL & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_debug_rd_en_ff)
                              ? ((((((- (QData)((IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_debug_sel_ff__dout) 
                                                            >> 4U))))) 
                                     & (((QData)((IData)(
                                                         (1U 
                                                          & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ictag_debug_rd_data 
                                                             >> 0x14U)))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((0xfffff000U 
                                                            & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ictag_debug_rd_data 
                                                               << 0xcU)) 
                                                           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status) 
                                                               << 4U) 
                                                              | (0U 
                                                                 != 
                                                                 (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq) 
                                                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_debug_sel_ff__dout)) 
                                                                  & (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_debug_rd_en_ff))))))))))) 
                                    | ((- (QData)((IData)(
                                                          (1U 
                                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_debug_sel_ff__dout) 
                                                              >> 8U))))) 
                                       & (((QData)((IData)(
                                                           vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[0U]))))) 
                                   | ((- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_debug_sel_ff__dout) 
                                                             >> 7U))))) 
                                      & (((QData)((IData)(
                                                          vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[3U])) 
                                          << 0x3eU) 
                                         | (((QData)((IData)(
                                                             vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[2U])) 
                                             << 0x1eU) 
                                            | ((QData)((IData)(
                                                               vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[1U])) 
                                               >> 2U))))) 
                                  | ((- (QData)((IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_debug_sel_ff__dout) 
                                                            >> 6U))))) 
                                     & (((QData)((IData)(
                                                         vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[4U])) 
                                         << 0x3cU) 
                                        | (((QData)((IData)(
                                                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[3U])) 
                                            << 0x1cU) 
                                           | ((QData)((IData)(
                                                              vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[2U])) 
                                              >> 4U))))) 
                                 | ((- (QData)((IData)(
                                                       (1U 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_debug_sel_ff__dout) 
                                                           >> 5U))))) 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[4U])) 
                                        << 0x1aU) | 
                                       ((QData)((IData)(
                                                        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[3U])) 
                                        >> 6U)))) : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu_ic_debug_rd_data));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_error_f2 
        = ((0xc0U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[4U]) 
           | ((0x30U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[3U]) 
              | ((0xcU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[2U]) 
                 | (3U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[1U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[0U] 
        = ((- (IData)(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff) 
                       | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__sel_ic_data)))) 
           & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[0U]);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[1U] 
        = ((- (IData)(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff) 
                       | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__sel_ic_data)))) 
           & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[2U] 
               << 0x1eU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[1U] 
                            >> 2U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[2U] 
        = ((- (IData)(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff) 
                       | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__sel_ic_data)))) 
           & (IData)((((QData)((IData)(((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[4U] 
                                         << 0x1aU) 
                                        | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[3U] 
                                           >> 6U)))) 
                       << 0x20U) | (QData)((IData)(
                                                   ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[3U] 
                                                     << 0x1cU) 
                                                    | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[2U] 
                                                       >> 4U)))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[3U] 
        = ((- (IData)(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff) 
                       | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__sel_ic_data)))) 
           & (IData)(((((QData)((IData)(((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[4U] 
                                          << 0x1aU) 
                                         | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[3U] 
                                            >> 6U)))) 
                        << 0x20U) | (QData)((IData)(
                                                    ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[3U] 
                                                      << 0x1cU) 
                                                     | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[2U] 
                                                        >> 4U))))) 
                      >> 0x20U)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2parityff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_error_f2)
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2parity));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1parityff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_error_f2)
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1parity));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0parityff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_error_f2)
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0parity));
    if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[2U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[3U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[3U];
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2[2U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[3U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2[3U];
    }
    if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[2U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[3U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[3U];
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1[2U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[3U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1[3U];
    }
    if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[2U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[3U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[3U];
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0[2U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[3U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0[3U];
    }
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_multiclk__TOP__rvfpgasim__swervolf__85(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_multiclk__TOP__rvfpgasim__swervolf__85\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcommand_regno_reg__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (0xffffU & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_wren) 
                       | ((((0U == (0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                                             >> 0x18U))) 
                            & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                               >> 0x13U)) & (8U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) 
                          & (~ (IData)((0U != (7U & 
                                               (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
                                                >> 8U)))))))
                       ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_din
                       : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_regno_reg__dout)));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_combo__TOP__rvfpgasim__swervolf__86(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_combo__TOP__rvfpgasim__swervolf__86\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*223:0*/ __Vtemp1690[7];
    // Body
    __Vtemp1690[0U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart_rdt;
    __Vtemp1690[1U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_gpio_dat;
    __Vtemp1690[2U] = ((1U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))
                        ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__rptc_hrc
                        : ((2U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))
                            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__rptc_lrc
                            : ((3U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))
                                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__rptc_ctrl)
                                : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__rptc_cntr)));
    __Vtemp1690[3U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2_rdt;
    __Vtemp1690[4U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi_rdt;
    __Vtemp1690[5U] = (IData)((((QData)((IData)(((1U 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))
                                                  ? (IData)(
                                                            (vlSymsp->TOP__rvfpgasim__swervolf__bootrom__ram.__PVT__dout 
                                                             >> 0x20U))
                                                  : (IData)(vlSymsp->TOP__rvfpgasim__swervolf__bootrom__ram.__PVT__dout)))) 
                                << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_sys_dat))));
    __Vtemp1690[6U] = (IData)(((((QData)((IData)(((1U 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))
                                                   ? (IData)(
                                                             (vlSymsp->TOP__rvfpgasim__swervolf__bootrom__ram.__PVT__dout 
                                                              >> 0x20U))
                                                   : (IData)(vlSymsp->TOP__rvfpgasim__swervolf__bootrom__ram.__PVT__dout)))) 
                                 << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_sys_dat))) 
                               >> 0x20U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_io_dat 
        = ((0xdfU >= (0xffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel) 
                               << 5U))) ? (((0U == 
                                             (0x1fU 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel) 
                                                 << 5U)))
                                             ? 0U : 
                                            (__Vtemp1690[
                                             ((IData)(1U) 
                                              + (7U 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel) 
                                                     << 5U))))) 
                                           | (__Vtemp1690[
                                              (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel))] 
                                              >> (0x1fU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel) 
                                                     << 5U))))
            : 0U);
    vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[0U];
    vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[1U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[1U];
    vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[2U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U];
    vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[3U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[3U];
    vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[4U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[4U];
    vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[5U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[5U];
    vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[6U] 
        = ((0xe0000000U & vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[6U]) 
           | vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[6U]);
    vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[6U] 
        = ((0x1fffffffU & vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[6U]) 
           | (0xe0000000U & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[0U] 
                             << 0x1dU)));
    vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[7U] 
        = ((0x1fffffffU & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[0U] 
                           >> 3U)) | (0xe0000000U & 
                                      (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[1U] 
                                       << 0x1dU)));
    vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[8U] 
        = ((0x1fffffffU & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[1U] 
                           >> 3U)) | (0xe0000000U & 
                                      (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
                                       << 0x1dU)));
    vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U] 
        = ((0x1fffffffU & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
                           >> 3U)) | (0xe0000000U & 
                                      (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[3U] 
                                       << 0x1dU)));
    vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xaU] 
        = ((0x1fffffffU & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[3U] 
                           >> 3U)) | (0xe0000000U & 
                                      (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[4U] 
                                       << 0x1dU)));
    vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xbU] 
        = ((0x1fffffffU & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[4U] 
                           >> 3U)) | (0xe0000000U & 
                                      (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[5U] 
                                       << 0x1dU)));
    vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xcU] 
        = ((0x1fffffffU & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[5U] 
                           >> 3U)) | (0xe0000000U & 
                                      (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[6U] 
                                       << 0x1dU)));
    vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xdU] 
        = (0x1fffffffU & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[6U] 
                          >> 3U));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__87(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_sequent__TOP__rvfpgasim__swervolf__87\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__wb_dat 
            = ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))
                ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_in
                : ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))
                    ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_in
                    : ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))
                        ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_nec
                        : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_eclk)));
    } else {
        if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))) {
            if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))) {
                if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))) {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__wb_dat 
                        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_ints;
                } else {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__wb_dat 
                        = ((0xfffffffcU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__wb_dat) 
                           | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_ctrl));
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__wb_dat 
                        = (3U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__wb_dat);
                }
            } else {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__wb_dat 
                    = ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))
                        ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_aux
                        : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_ptrig);
            }
        } else {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__wb_dat 
                = ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))
                    ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))
                        ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_inte
                        : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_oe)
                    : ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))
                        ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_out
                        : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_in));
        }
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_io_err 
        = (((6U >= (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel)) 
            & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_spi_accel_err) 
                 << 3U) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_gpio_err) 
                           << 1U)) >> (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel))) 
           | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__wbm_err));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_io_ack 
        = ((6U >= (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel)) 
           & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf__bootrom.__PVT__o_wb_ack) 
                << 6U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_sys_ack) 
                           << 5U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_spi_flash_ack) 
                                      << 4U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_spi_accel_ack) 
                                                 << 3U) 
                                                | ((0xfffffffcU 
                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb) 
                                                          << 2U))) 
                                                   | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_gpio_ack) 
                                                       << 1U) 
                                                      | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_uart_ack))))))) 
              >> (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel)));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1::_combo__TOP__rvfpgasim__swervolf__88(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_combo__TOP__rvfpgasim__swervolf__88\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__slv_resps_o[0U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[1U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__slv_resps_o[1U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[2U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__slv_resps_o[2U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[3U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__slv_resps_o[3U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[4U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__slv_resps_o[4U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[5U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__slv_resps_o[5U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[6U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__slv_resps_o[6U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[7U] 
        = ((0xf0000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[7U]) 
           | vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__slv_resps_o[7U]);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[7U] 
        = ((0xfffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[7U]) 
           | (0xf0000000U & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[0U] 
                             << 0x1cU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[8U] 
        = ((0xfffffffU & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[0U] 
                          >> 4U)) | (0xf0000000U & 
                                     (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[1U] 
                                      << 0x1cU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[9U] 
        = ((0xfffffffU & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[1U] 
                          >> 4U)) | (0xf0000000U & 
                                     (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[2U] 
                                      << 0x1cU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xaU] 
        = ((0xfffffffU & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[2U] 
                          >> 4U)) | (0xf0000000U & 
                                     (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[3U] 
                                      << 0x1cU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xbU] 
        = ((0xfffffffU & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[3U] 
                          >> 4U)) | (0xf0000000U & 
                                     (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[4U] 
                                      << 0x1cU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xcU] 
        = ((0xfffffffU & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[4U] 
                          >> 4U)) | (0xf0000000U & 
                                     (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[5U] 
                                      << 0x1cU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xdU] 
        = ((0xfffffffU & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[5U] 
                          >> 4U)) | (0xf0000000U & 
                                     (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[6U] 
                                      << 0x1cU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xeU] 
        = ((0xfffffffU & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[6U] 
                          >> 4U)) | (0xf0000000U & 
                                     (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[7U] 
                                      << 0x1cU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xfU] 
        = (0xfffffffU & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[7U] 
                         >> 4U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[1U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[1U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[2U] 
        = ((0xfff00000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[2U]) 
           | (0xfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[2U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[2U] 
        = ((0xfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[2U]) 
           | (0xfff00000U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[8U] 
                              << 0x18U) | (0xf00000U 
                                           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[7U] 
                                              >> 8U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[3U] 
        = ((0xfffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[8U] 
                        >> 8U)) | (0xfff00000U & ((
                                                   vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[9U] 
                                                   << 0x18U) 
                                                  | (0xf00000U 
                                                     & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[8U] 
                                                        >> 8U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[4U] 
        = ((0xfffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[9U] 
                        >> 8U)) | (0xfff00000U & ((
                                                   vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xaU] 
                                                   << 0x18U) 
                                                  | (0xf00000U 
                                                     & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[9U] 
                                                        >> 8U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[5U] 
        = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[5U]) 
           | (0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xaU] 
                       >> 8U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[7U] 
        = ((0xfffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[7U]) 
           | (0xf0000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[2U] 
                             << 8U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[8U] 
        = ((0xfffffffU & ((0xfffff00U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[3U] 
                                         << 8U)) | 
                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[2U] 
                           >> 0x18U))) | (0xf0000000U 
                                          & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[3U] 
                                             << 8U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[9U] 
        = ((0xfffffffU & ((0xfffff00U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[4U] 
                                         << 8U)) | 
                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[3U] 
                           >> 0x18U))) | (0xf0000000U 
                                          & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[4U] 
                                             << 8U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xaU] 
        = ((0xffff0000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xaU]) 
           | (0xffffU & ((0xfffff00U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[5U] 
                                        << 8U)) | (
                                                   vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[4U] 
                                                   >> 0x18U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xaU] 
        = ((0xffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xaU]) 
           | (0xffff0000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xaU]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xbU] 
        = ((0xffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xbU]) 
           | (0xffff0000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xbU]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xcU] 
        = ((0xffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xcU]) 
           | (0xffff0000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xcU]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xdU] 
        = ((0xfffffff0U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xdU]) 
           | (0xfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xdU]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xfU] 
        = ((0xffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xfU]) 
           | (0xff000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[5U] 
                             << 0x10U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x10U] 
        = ((0xffffffU & ((0xff0000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[6U] 
                                       << 0x10U)) | 
                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[5U] 
                          >> 0x10U))) | (0xff000000U 
                                         & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[6U] 
                                            << 0x10U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x11U] 
        = ((0xffffffU & ((0xff0000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[7U] 
                                       << 0x10U)) | 
                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[6U] 
                          >> 0x10U))) | (0xff000000U 
                                         & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[7U] 
                                            << 0x10U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x12U] 
        = ((0xfffff000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x12U]) 
           | (0xfffU & ((0xff0000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[8U] 
                                      << 0x10U)) | 
                        (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[7U] 
                         >> 0x10U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x12U] 
        = ((0xfffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x12U]) 
           | (0xfffff000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xdU] 
                             << 8U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x13U] 
        = ((0xfffU & ((0xf00U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xeU] 
                                 << 8U)) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xdU] 
                                            >> 0x18U))) 
           | (0xfffff000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xeU] 
                             << 8U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x14U] 
        = ((0xfffU & ((0xf00U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xfU] 
                                 << 8U)) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xeU] 
                                            >> 0x18U))) 
           | (0xfffff000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xfU] 
                             << 8U)));
}
