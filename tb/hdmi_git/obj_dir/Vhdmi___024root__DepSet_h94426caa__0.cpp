// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhdmi.h for the primary calling header

#include "Vhdmi__pch.h"
#include "Vhdmi___024root.h"

void Vhdmi___024root___ico_sequent__TOP__0(Vhdmi___024root* vlSelf);

void Vhdmi___024root___eval_ico(Vhdmi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhdmi___024root___eval_ico\n"); );
    Vhdmi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vhdmi___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

extern const VlUnpacked<SData/*9:0*/, 4> Vhdmi__ConstPool__TABLE_h04576c92_0;
extern const VlUnpacked<SData/*9:0*/, 16> Vhdmi__ConstPool__TABLE_h368da323_0;

VL_INLINE_OPT void Vhdmi___024root___ico_sequent__TOP__0(Vhdmi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhdmi___024root___ico_sequent__TOP__0\n"); );
    Vhdmi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    __Vtableidx1 = vlSelfRef.control_data;
    vlSelfRef.tmds_channel__DOT__control_coding = Vhdmi__ConstPool__TABLE_h04576c92_0
        [__Vtableidx1];
    __Vtableidx2 = vlSelfRef.data_island_data;
    vlSelfRef.tmds_channel__DOT__terc4_coding = Vhdmi__ConstPool__TABLE_h368da323_0
        [__Vtableidx2];
    vlSelfRef.tmds_channel__DOT__N1D = (0xfU & ((((
                                                   ((((1U 
                                                       & (IData)(vlSelfRef.video_data)) 
                                                      + 
                                                      (1U 
                                                       & ((IData)(vlSelfRef.video_data) 
                                                          >> 1U))) 
                                                     + 
                                                     (1U 
                                                      & ((IData)(vlSelfRef.video_data) 
                                                         >> 2U))) 
                                                    + 
                                                    (1U 
                                                     & ((IData)(vlSelfRef.video_data) 
                                                        >> 3U))) 
                                                   + 
                                                   (1U 
                                                    & ((IData)(vlSelfRef.video_data) 
                                                       >> 4U))) 
                                                  + 
                                                  (1U 
                                                   & ((IData)(vlSelfRef.video_data) 
                                                      >> 5U))) 
                                                 + 
                                                 (1U 
                                                  & ((IData)(vlSelfRef.video_data) 
                                                     >> 6U))) 
                                                + (1U 
                                                   & ((IData)(vlSelfRef.video_data) 
                                                      >> 7U))));
    if (((4U < (IData)(vlSelfRef.tmds_channel__DOT__N1D)) 
         | ((4U == (IData)(vlSelfRef.tmds_channel__DOT__N1D)) 
            & (~ (IData)(vlSelfRef.video_data))))) {
        vlSelfRef.tmds_channel__DOT__q_m = ((0x1feU 
                                             & (IData)(vlSelfRef.tmds_channel__DOT__q_m)) 
                                            | (1U & (IData)(vlSelfRef.video_data)));
        vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__0 
            = (1U & (~ ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                        ^ ((IData)(vlSelfRef.video_data) 
                           >> 1U))));
        vlSelfRef.tmds_channel__DOT__q_m = ((0x1fdU 
                                             & (IData)(vlSelfRef.tmds_channel__DOT__q_m)) 
                                            | ((IData)(vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__0) 
                                               << 1U));
        vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__0 
            = (1U & (~ (((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                         >> 1U) ^ ((IData)(vlSelfRef.video_data) 
                                   >> 2U))));
        vlSelfRef.tmds_channel__DOT__q_m = ((0x1fbU 
                                             & (IData)(vlSelfRef.tmds_channel__DOT__q_m)) 
                                            | ((IData)(vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__0) 
                                               << 2U));
        vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__0 
            = (1U & (~ (((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                         >> 2U) ^ ((IData)(vlSelfRef.video_data) 
                                   >> 3U))));
        vlSelfRef.tmds_channel__DOT__q_m = ((0x1f7U 
                                             & (IData)(vlSelfRef.tmds_channel__DOT__q_m)) 
                                            | ((IData)(vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__0) 
                                               << 3U));
        vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__0 
            = (1U & (~ (((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                         >> 3U) ^ ((IData)(vlSelfRef.video_data) 
                                   >> 4U))));
        vlSelfRef.tmds_channel__DOT__q_m = ((0x1efU 
                                             & (IData)(vlSelfRef.tmds_channel__DOT__q_m)) 
                                            | ((IData)(vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__0) 
                                               << 4U));
        vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__0 
            = (1U & (~ (((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                         >> 4U) ^ ((IData)(vlSelfRef.video_data) 
                                   >> 5U))));
        vlSelfRef.tmds_channel__DOT__q_m = ((0x1dfU 
                                             & (IData)(vlSelfRef.tmds_channel__DOT__q_m)) 
                                            | ((IData)(vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__0) 
                                               << 5U));
        vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__0 
            = (1U & (~ (((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                         >> 5U) ^ ((IData)(vlSelfRef.video_data) 
                                   >> 6U))));
        vlSelfRef.tmds_channel__DOT__q_m = ((0x1bfU 
                                             & (IData)(vlSelfRef.tmds_channel__DOT__q_m)) 
                                            | ((IData)(vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__0) 
                                               << 6U));
        vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__0 
            = (1U & (~ (((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                         >> 6U) ^ ((IData)(vlSelfRef.video_data) 
                                   >> 7U))));
        vlSelfRef.tmds_channel__DOT__q_m = ((0x7fU 
                                             & (IData)(vlSelfRef.tmds_channel__DOT__q_m)) 
                                            | ((IData)(vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__0) 
                                               << 7U));
    } else {
        vlSelfRef.tmds_channel__DOT__q_m = ((0x1feU 
                                             & (IData)(vlSelfRef.tmds_channel__DOT__q_m)) 
                                            | (1U & (IData)(vlSelfRef.video_data)));
        vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__1 
            = (1U & ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                     ^ ((IData)(vlSelfRef.video_data) 
                        >> 1U)));
        vlSelfRef.tmds_channel__DOT__q_m = ((0x1fdU 
                                             & (IData)(vlSelfRef.tmds_channel__DOT__q_m)) 
                                            | ((IData)(vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__1) 
                                               << 1U));
        vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__1 
            = (1U & (((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                      >> 1U) ^ ((IData)(vlSelfRef.video_data) 
                                >> 2U)));
        vlSelfRef.tmds_channel__DOT__q_m = ((0x1fbU 
                                             & (IData)(vlSelfRef.tmds_channel__DOT__q_m)) 
                                            | ((IData)(vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__1) 
                                               << 2U));
        vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__1 
            = (1U & (((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                      >> 2U) ^ ((IData)(vlSelfRef.video_data) 
                                >> 3U)));
        vlSelfRef.tmds_channel__DOT__q_m = ((0x1f7U 
                                             & (IData)(vlSelfRef.tmds_channel__DOT__q_m)) 
                                            | ((IData)(vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__1) 
                                               << 3U));
        vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__1 
            = (1U & (((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                      >> 3U) ^ ((IData)(vlSelfRef.video_data) 
                                >> 4U)));
        vlSelfRef.tmds_channel__DOT__q_m = ((0x1efU 
                                             & (IData)(vlSelfRef.tmds_channel__DOT__q_m)) 
                                            | ((IData)(vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__1) 
                                               << 4U));
        vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__1 
            = (1U & (((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                      >> 4U) ^ ((IData)(vlSelfRef.video_data) 
                                >> 5U)));
        vlSelfRef.tmds_channel__DOT__q_m = ((0x1dfU 
                                             & (IData)(vlSelfRef.tmds_channel__DOT__q_m)) 
                                            | ((IData)(vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__1) 
                                               << 5U));
        vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__1 
            = (1U & (((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                      >> 5U) ^ ((IData)(vlSelfRef.video_data) 
                                >> 6U)));
        vlSelfRef.tmds_channel__DOT__q_m = ((0x1bfU 
                                             & (IData)(vlSelfRef.tmds_channel__DOT__q_m)) 
                                            | ((IData)(vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__1) 
                                               << 6U));
        vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__1 
            = (1U & (((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                      >> 6U) ^ ((IData)(vlSelfRef.video_data) 
                                >> 7U)));
        vlSelfRef.tmds_channel__DOT__q_m = ((0x7fU 
                                             & (IData)(vlSelfRef.tmds_channel__DOT__q_m)) 
                                            | (0x100U 
                                               | ((IData)(vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__1) 
                                                  << 7U)));
    }
    if (((0U == (IData)(vlSelfRef.tmds_channel__DOT__acc)) 
         | ((IData)(vlSelfRef.tmds_channel__DOT__N1q_m07) 
            == (IData)(vlSelfRef.tmds_channel__DOT__N0q_m07)))) {
        if ((0x100U & (IData)(vlSelfRef.tmds_channel__DOT__q_m))) {
            vlSelfRef.tmds_channel__DOT__acc_add = 
                (0x1fU & ((IData)(vlSelfRef.tmds_channel__DOT__N1q_m07) 
                          - (IData)(vlSelfRef.tmds_channel__DOT__N0q_m07)));
            vlSelfRef.tmds_channel__DOT__q_out = ((0x200U 
                                                   & ((~ 
                                                       ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                        >> 8U)) 
                                                      << 9U)) 
                                                  | (IData)(vlSelfRef.tmds_channel__DOT__q_m));
        } else {
            vlSelfRef.tmds_channel__DOT__acc_add = 
                (0x1fU & ((IData)(vlSelfRef.tmds_channel__DOT__N0q_m07) 
                          - (IData)(vlSelfRef.tmds_channel__DOT__N1q_m07)));
            vlSelfRef.tmds_channel__DOT__q_out = ((0x200U 
                                                   & ((~ 
                                                       ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                        >> 8U)) 
                                                      << 9U)) 
                                                  | ((0x100U 
                                                      & (IData)(vlSelfRef.tmds_channel__DOT__q_m)) 
                                                     | (0xffU 
                                                        & (~ (IData)(vlSelfRef.tmds_channel__DOT__q_m)))));
        }
    } else if (((VL_LTS_III(5, 0U, (IData)(vlSelfRef.tmds_channel__DOT__acc)) 
                 & VL_GTS_III(5, (IData)(vlSelfRef.tmds_channel__DOT__N1q_m07), (IData)(vlSelfRef.tmds_channel__DOT__N0q_m07))) 
                | (VL_GTS_III(5, 0U, (IData)(vlSelfRef.tmds_channel__DOT__acc)) 
                   & VL_LTS_III(5, (IData)(vlSelfRef.tmds_channel__DOT__N1q_m07), (IData)(vlSelfRef.tmds_channel__DOT__N0q_m07))))) {
        vlSelfRef.tmds_channel__DOT__q_out = (0x200U 
                                              | ((0x100U 
                                                  & (IData)(vlSelfRef.tmds_channel__DOT__q_m)) 
                                                 | (0xffU 
                                                    & (~ (IData)(vlSelfRef.tmds_channel__DOT__q_m)))));
        vlSelfRef.tmds_channel__DOT__acc_add = (0x1fU 
                                                & (((IData)(vlSelfRef.tmds_channel__DOT__N0q_m07) 
                                                    - (IData)(vlSelfRef.tmds_channel__DOT__N1q_m07)) 
                                                   + 
                                                   ((0x100U 
                                                     & (IData)(vlSelfRef.tmds_channel__DOT__q_m))
                                                     ? 2U
                                                     : 0U)));
    } else {
        vlSelfRef.tmds_channel__DOT__q_out = (0x1ffU 
                                              & (IData)(vlSelfRef.tmds_channel__DOT__q_m));
        vlSelfRef.tmds_channel__DOT__acc_add = (0x1fU 
                                                & (((IData)(vlSelfRef.tmds_channel__DOT__N1q_m07) 
                                                    - (IData)(vlSelfRef.tmds_channel__DOT__N0q_m07)) 
                                                   - 
                                                   ((0x100U 
                                                     & (IData)(vlSelfRef.tmds_channel__DOT__q_m))
                                                     ? 0U
                                                     : 2U)));
    }
}

void Vhdmi___024root___eval_triggers__ico(Vhdmi___024root* vlSelf);

bool Vhdmi___024root___eval_phase__ico(Vhdmi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhdmi___024root___eval_phase__ico\n"); );
    Vhdmi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vhdmi___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vhdmi___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vhdmi___024root___act_sequent__TOP__0(Vhdmi___024root* vlSelf);

void Vhdmi___024root___eval_act(Vhdmi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhdmi___024root___eval_act\n"); );
    Vhdmi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vhdmi___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vhdmi___024root___act_sequent__TOP__0(Vhdmi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhdmi___024root___act_sequent__TOP__0\n"); );
    Vhdmi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tmds_channel__DOT__N1q_m07 = ((8U & (
                                                   (((((((1U 
                                                          & (IData)(vlSelfRef.tmds_channel__DOT__q_m)) 
                                                         + 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                             >> 1U))) 
                                                        + 
                                                        (1U 
                                                         & ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                            >> 2U))) 
                                                       + 
                                                       (1U 
                                                        & ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                           >> 3U))) 
                                                      + 
                                                      (1U 
                                                       & ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                          >> 4U))) 
                                                     + 
                                                     (1U 
                                                      & ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                         >> 5U))) 
                                                    + 
                                                    (1U 
                                                     & ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                        >> 6U))) 
                                                   + 
                                                   (1U 
                                                    & ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                       >> 7U))))
                                             ? ((4U 
                                                 & ((((((((1U 
                                                           & (IData)(vlSelfRef.tmds_channel__DOT__q_m)) 
                                                          + 
                                                          (1U 
                                                           & ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                              >> 1U))) 
                                                         + 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                             >> 2U))) 
                                                        + 
                                                        (1U 
                                                         & ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                            >> 3U))) 
                                                       + 
                                                       (1U 
                                                        & ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                           >> 4U))) 
                                                      + 
                                                      (1U 
                                                       & ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                          >> 5U))) 
                                                     + 
                                                     (1U 
                                                      & ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                         >> 6U))) 
                                                    + 
                                                    (1U 
                                                     & ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                        >> 7U))))
                                                 ? 0U
                                                 : 
                                                ((2U 
                                                  & ((((((((1U 
                                                            & (IData)(vlSelfRef.tmds_channel__DOT__q_m)) 
                                                           + 
                                                           (1U 
                                                            & ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                               >> 1U))) 
                                                          + 
                                                          (1U 
                                                           & ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                              >> 2U))) 
                                                         + 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                             >> 3U))) 
                                                        + 
                                                        (1U 
                                                         & ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                            >> 4U))) 
                                                       + 
                                                       (1U 
                                                        & ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                           >> 5U))) 
                                                      + 
                                                      (1U 
                                                       & ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                          >> 6U))) 
                                                     + 
                                                     (1U 
                                                      & ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                         >> 7U))))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & ((((((((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                            + 
                                                            ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                             >> 1U)) 
                                                           + 
                                                           ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                            >> 2U)) 
                                                          + 
                                                          ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                           >> 3U)) 
                                                         + 
                                                         ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                          >> 4U)) 
                                                        + 
                                                        ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                         >> 5U)) 
                                                       + 
                                                       ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                        >> 6U)) 
                                                      + 
                                                      ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                       >> 7U)))
                                                   ? 0U
                                                   : 8U)))
                                             : ((4U 
                                                 & ((((((((1U 
                                                           & (IData)(vlSelfRef.tmds_channel__DOT__q_m)) 
                                                          + 
                                                          (1U 
                                                           & ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                              >> 1U))) 
                                                         + 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                             >> 2U))) 
                                                        + 
                                                        (1U 
                                                         & ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                            >> 3U))) 
                                                       + 
                                                       (1U 
                                                        & ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                           >> 4U))) 
                                                      + 
                                                      (1U 
                                                       & ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                          >> 5U))) 
                                                     + 
                                                     (1U 
                                                      & ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                         >> 6U))) 
                                                    + 
                                                    (1U 
                                                     & ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                        >> 7U))))
                                                 ? 
                                                ((2U 
                                                  & ((((((((1U 
                                                            & (IData)(vlSelfRef.tmds_channel__DOT__q_m)) 
                                                           + 
                                                           (1U 
                                                            & ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                               >> 1U))) 
                                                          + 
                                                          (1U 
                                                           & ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                              >> 2U))) 
                                                         + 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                             >> 3U))) 
                                                        + 
                                                        (1U 
                                                         & ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                            >> 4U))) 
                                                       + 
                                                       (1U 
                                                        & ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                           >> 5U))) 
                                                      + 
                                                      (1U 
                                                       & ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                          >> 6U))) 
                                                     + 
                                                     (1U 
                                                      & ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                         >> 7U))))
                                                  ? 
                                                 ((1U 
                                                   & ((((((((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                            + 
                                                            ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                             >> 1U)) 
                                                           + 
                                                           ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                            >> 2U)) 
                                                          + 
                                                          ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                           >> 3U)) 
                                                         + 
                                                         ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                          >> 4U)) 
                                                        + 
                                                        ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                         >> 5U)) 
                                                       + 
                                                       ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                        >> 6U)) 
                                                      + 
                                                      ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                       >> 7U)))
                                                   ? 7U
                                                   : 6U)
                                                  : 
                                                 ((1U 
                                                   & ((((((((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                            + 
                                                            ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                             >> 1U)) 
                                                           + 
                                                           ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                            >> 2U)) 
                                                          + 
                                                          ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                           >> 3U)) 
                                                         + 
                                                         ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                          >> 4U)) 
                                                        + 
                                                        ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                         >> 5U)) 
                                                       + 
                                                       ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                        >> 6U)) 
                                                      + 
                                                      ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                       >> 7U)))
                                                   ? 5U
                                                   : 4U))
                                                 : 
                                                ((2U 
                                                  & ((((((((1U 
                                                            & (IData)(vlSelfRef.tmds_channel__DOT__q_m)) 
                                                           + 
                                                           (1U 
                                                            & ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                               >> 1U))) 
                                                          + 
                                                          (1U 
                                                           & ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                              >> 2U))) 
                                                         + 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                             >> 3U))) 
                                                        + 
                                                        (1U 
                                                         & ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                            >> 4U))) 
                                                       + 
                                                       (1U 
                                                        & ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                           >> 5U))) 
                                                      + 
                                                      (1U 
                                                       & ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                          >> 6U))) 
                                                     + 
                                                     (1U 
                                                      & ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                         >> 7U))))
                                                  ? 
                                                 ((1U 
                                                   & ((((((((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                            + 
                                                            ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                             >> 1U)) 
                                                           + 
                                                           ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                            >> 2U)) 
                                                          + 
                                                          ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                           >> 3U)) 
                                                         + 
                                                         ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                          >> 4U)) 
                                                        + 
                                                        ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                         >> 5U)) 
                                                       + 
                                                       ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                        >> 6U)) 
                                                      + 
                                                      ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                       >> 7U)))
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((1U 
                                                   & ((((((((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                            + 
                                                            ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                             >> 1U)) 
                                                           + 
                                                           ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                            >> 2U)) 
                                                          + 
                                                          ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                           >> 3U)) 
                                                         + 
                                                         ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                          >> 4U)) 
                                                        + 
                                                        ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                         >> 5U)) 
                                                       + 
                                                       ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                        >> 6U)) 
                                                      + 
                                                      ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                       >> 7U)))
                                                   ? 1U
                                                   : 0U))));
    vlSelfRef.tmds_channel__DOT__N0q_m07 = (0x1fU & 
                                            ((IData)(8U) 
                                             - (IData)(vlSelfRef.tmds_channel__DOT__N1q_m07)));
    if (((4U < (IData)(vlSelfRef.tmds_channel__DOT__N1D)) 
         | ((4U == (IData)(vlSelfRef.tmds_channel__DOT__N1D)) 
            & (~ (IData)(vlSelfRef.video_data))))) {
        vlSelfRef.tmds_channel__DOT__q_m = ((0x1feU 
                                             & (IData)(vlSelfRef.tmds_channel__DOT__q_m)) 
                                            | (1U & (IData)(vlSelfRef.video_data)));
        vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__0 
            = (1U & (~ ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                        ^ ((IData)(vlSelfRef.video_data) 
                           >> 1U))));
        vlSelfRef.tmds_channel__DOT__q_m = ((0x1fdU 
                                             & (IData)(vlSelfRef.tmds_channel__DOT__q_m)) 
                                            | ((IData)(vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__0) 
                                               << 1U));
        vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__0 
            = (1U & (~ (((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                         >> 1U) ^ ((IData)(vlSelfRef.video_data) 
                                   >> 2U))));
        vlSelfRef.tmds_channel__DOT__q_m = ((0x1fbU 
                                             & (IData)(vlSelfRef.tmds_channel__DOT__q_m)) 
                                            | ((IData)(vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__0) 
                                               << 2U));
        vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__0 
            = (1U & (~ (((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                         >> 2U) ^ ((IData)(vlSelfRef.video_data) 
                                   >> 3U))));
        vlSelfRef.tmds_channel__DOT__q_m = ((0x1f7U 
                                             & (IData)(vlSelfRef.tmds_channel__DOT__q_m)) 
                                            | ((IData)(vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__0) 
                                               << 3U));
        vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__0 
            = (1U & (~ (((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                         >> 3U) ^ ((IData)(vlSelfRef.video_data) 
                                   >> 4U))));
        vlSelfRef.tmds_channel__DOT__q_m = ((0x1efU 
                                             & (IData)(vlSelfRef.tmds_channel__DOT__q_m)) 
                                            | ((IData)(vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__0) 
                                               << 4U));
        vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__0 
            = (1U & (~ (((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                         >> 4U) ^ ((IData)(vlSelfRef.video_data) 
                                   >> 5U))));
        vlSelfRef.tmds_channel__DOT__q_m = ((0x1dfU 
                                             & (IData)(vlSelfRef.tmds_channel__DOT__q_m)) 
                                            | ((IData)(vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__0) 
                                               << 5U));
        vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__0 
            = (1U & (~ (((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                         >> 5U) ^ ((IData)(vlSelfRef.video_data) 
                                   >> 6U))));
        vlSelfRef.tmds_channel__DOT__q_m = ((0x1bfU 
                                             & (IData)(vlSelfRef.tmds_channel__DOT__q_m)) 
                                            | ((IData)(vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__0) 
                                               << 6U));
        vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__0 
            = (1U & (~ (((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                         >> 6U) ^ ((IData)(vlSelfRef.video_data) 
                                   >> 7U))));
        vlSelfRef.tmds_channel__DOT__q_m = ((0x7fU 
                                             & (IData)(vlSelfRef.tmds_channel__DOT__q_m)) 
                                            | ((IData)(vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__0) 
                                               << 7U));
    } else {
        vlSelfRef.tmds_channel__DOT__q_m = ((0x1feU 
                                             & (IData)(vlSelfRef.tmds_channel__DOT__q_m)) 
                                            | (1U & (IData)(vlSelfRef.video_data)));
        vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__1 
            = (1U & ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                     ^ ((IData)(vlSelfRef.video_data) 
                        >> 1U)));
        vlSelfRef.tmds_channel__DOT__q_m = ((0x1fdU 
                                             & (IData)(vlSelfRef.tmds_channel__DOT__q_m)) 
                                            | ((IData)(vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__1) 
                                               << 1U));
        vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__1 
            = (1U & (((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                      >> 1U) ^ ((IData)(vlSelfRef.video_data) 
                                >> 2U)));
        vlSelfRef.tmds_channel__DOT__q_m = ((0x1fbU 
                                             & (IData)(vlSelfRef.tmds_channel__DOT__q_m)) 
                                            | ((IData)(vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__1) 
                                               << 2U));
        vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__1 
            = (1U & (((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                      >> 2U) ^ ((IData)(vlSelfRef.video_data) 
                                >> 3U)));
        vlSelfRef.tmds_channel__DOT__q_m = ((0x1f7U 
                                             & (IData)(vlSelfRef.tmds_channel__DOT__q_m)) 
                                            | ((IData)(vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__1) 
                                               << 3U));
        vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__1 
            = (1U & (((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                      >> 3U) ^ ((IData)(vlSelfRef.video_data) 
                                >> 4U)));
        vlSelfRef.tmds_channel__DOT__q_m = ((0x1efU 
                                             & (IData)(vlSelfRef.tmds_channel__DOT__q_m)) 
                                            | ((IData)(vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__1) 
                                               << 4U));
        vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__1 
            = (1U & (((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                      >> 4U) ^ ((IData)(vlSelfRef.video_data) 
                                >> 5U)));
        vlSelfRef.tmds_channel__DOT__q_m = ((0x1dfU 
                                             & (IData)(vlSelfRef.tmds_channel__DOT__q_m)) 
                                            | ((IData)(vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__1) 
                                               << 5U));
        vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__1 
            = (1U & (((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                      >> 5U) ^ ((IData)(vlSelfRef.video_data) 
                                >> 6U)));
        vlSelfRef.tmds_channel__DOT__q_m = ((0x1bfU 
                                             & (IData)(vlSelfRef.tmds_channel__DOT__q_m)) 
                                            | ((IData)(vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__1) 
                                               << 6U));
        vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__1 
            = (1U & (((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                      >> 6U) ^ ((IData)(vlSelfRef.video_data) 
                                >> 7U)));
        vlSelfRef.tmds_channel__DOT__q_m = ((0x7fU 
                                             & (IData)(vlSelfRef.tmds_channel__DOT__q_m)) 
                                            | (0x100U 
                                               | ((IData)(vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__1) 
                                                  << 7U)));
    }
    if (((0U == (IData)(vlSelfRef.tmds_channel__DOT__acc)) 
         | ((IData)(vlSelfRef.tmds_channel__DOT__N1q_m07) 
            == (IData)(vlSelfRef.tmds_channel__DOT__N0q_m07)))) {
        if ((0x100U & (IData)(vlSelfRef.tmds_channel__DOT__q_m))) {
            vlSelfRef.tmds_channel__DOT__acc_add = 
                (0x1fU & ((IData)(vlSelfRef.tmds_channel__DOT__N1q_m07) 
                          - (IData)(vlSelfRef.tmds_channel__DOT__N0q_m07)));
            vlSelfRef.tmds_channel__DOT__q_out = ((0x200U 
                                                   & ((~ 
                                                       ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                        >> 8U)) 
                                                      << 9U)) 
                                                  | (IData)(vlSelfRef.tmds_channel__DOT__q_m));
        } else {
            vlSelfRef.tmds_channel__DOT__acc_add = 
                (0x1fU & ((IData)(vlSelfRef.tmds_channel__DOT__N0q_m07) 
                          - (IData)(vlSelfRef.tmds_channel__DOT__N1q_m07)));
            vlSelfRef.tmds_channel__DOT__q_out = ((0x200U 
                                                   & ((~ 
                                                       ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                        >> 8U)) 
                                                      << 9U)) 
                                                  | ((0x100U 
                                                      & (IData)(vlSelfRef.tmds_channel__DOT__q_m)) 
                                                     | (0xffU 
                                                        & (~ (IData)(vlSelfRef.tmds_channel__DOT__q_m)))));
        }
    } else if (((VL_LTS_III(5, 0U, (IData)(vlSelfRef.tmds_channel__DOT__acc)) 
                 & VL_GTS_III(5, (IData)(vlSelfRef.tmds_channel__DOT__N1q_m07), (IData)(vlSelfRef.tmds_channel__DOT__N0q_m07))) 
                | (VL_GTS_III(5, 0U, (IData)(vlSelfRef.tmds_channel__DOT__acc)) 
                   & VL_LTS_III(5, (IData)(vlSelfRef.tmds_channel__DOT__N1q_m07), (IData)(vlSelfRef.tmds_channel__DOT__N0q_m07))))) {
        vlSelfRef.tmds_channel__DOT__q_out = (0x200U 
                                              | ((0x100U 
                                                  & (IData)(vlSelfRef.tmds_channel__DOT__q_m)) 
                                                 | (0xffU 
                                                    & (~ (IData)(vlSelfRef.tmds_channel__DOT__q_m)))));
        vlSelfRef.tmds_channel__DOT__acc_add = (0x1fU 
                                                & (((IData)(vlSelfRef.tmds_channel__DOT__N0q_m07) 
                                                    - (IData)(vlSelfRef.tmds_channel__DOT__N1q_m07)) 
                                                   + 
                                                   ((0x100U 
                                                     & (IData)(vlSelfRef.tmds_channel__DOT__q_m))
                                                     ? 2U
                                                     : 0U)));
    } else {
        vlSelfRef.tmds_channel__DOT__q_out = (0x1ffU 
                                              & (IData)(vlSelfRef.tmds_channel__DOT__q_m));
        vlSelfRef.tmds_channel__DOT__acc_add = (0x1fU 
                                                & (((IData)(vlSelfRef.tmds_channel__DOT__N1q_m07) 
                                                    - (IData)(vlSelfRef.tmds_channel__DOT__N0q_m07)) 
                                                   - 
                                                   ((0x100U 
                                                     & (IData)(vlSelfRef.tmds_channel__DOT__q_m))
                                                     ? 0U
                                                     : 2U)));
    }
}

void Vhdmi___024root___nba_sequent__TOP__0(Vhdmi___024root* vlSelf);

void Vhdmi___024root___eval_nba(Vhdmi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhdmi___024root___eval_nba\n"); );
    Vhdmi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vhdmi___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vhdmi___024root___nba_sequent__TOP__0(Vhdmi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhdmi___024root___nba_sequent__TOP__0\n"); );
    Vhdmi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tmds_channel__DOT__acc = ((1U != (IData)(vlSelfRef.mode))
                                         ? 0U : (0x1fU 
                                                 & ((IData)(vlSelfRef.tmds_channel__DOT__acc) 
                                                    + (IData)(vlSelfRef.tmds_channel__DOT__acc_add))));
    if ((0U == (IData)(vlSelfRef.mode))) {
        vlSelfRef.tmds = vlSelfRef.tmds_channel__DOT__control_coding;
    } else if ((1U == (IData)(vlSelfRef.mode))) {
        vlSelfRef.tmds = vlSelfRef.tmds_channel__DOT__q_out;
    } else if ((2U == (IData)(vlSelfRef.mode))) {
        vlSelfRef.tmds = 0x2ccU;
    } else if ((3U == (IData)(vlSelfRef.mode))) {
        vlSelfRef.tmds = vlSelfRef.tmds_channel__DOT__terc4_coding;
    } else if ((4U == (IData)(vlSelfRef.mode))) {
        vlSelfRef.tmds = ((0U == (IData)(vlSelfRef.control_data))
                           ? 0x28eU : ((1U == (IData)(vlSelfRef.control_data))
                                        ? 0x271U : 
                                       ((2U == (IData)(vlSelfRef.control_data))
                                         ? 0x163U : 0x2c3U)));
    }
    if (((4U < (IData)(vlSelfRef.tmds_channel__DOT__N1D)) 
         | ((4U == (IData)(vlSelfRef.tmds_channel__DOT__N1D)) 
            & (~ (IData)(vlSelfRef.video_data))))) {
        vlSelfRef.tmds_channel__DOT__q_m = ((0x1feU 
                                             & (IData)(vlSelfRef.tmds_channel__DOT__q_m)) 
                                            | (1U & (IData)(vlSelfRef.video_data)));
        vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__0 
            = (1U & (~ ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                        ^ ((IData)(vlSelfRef.video_data) 
                           >> 1U))));
        vlSelfRef.tmds_channel__DOT__q_m = ((0x1fdU 
                                             & (IData)(vlSelfRef.tmds_channel__DOT__q_m)) 
                                            | ((IData)(vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__0) 
                                               << 1U));
        vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__0 
            = (1U & (~ (((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                         >> 1U) ^ ((IData)(vlSelfRef.video_data) 
                                   >> 2U))));
        vlSelfRef.tmds_channel__DOT__q_m = ((0x1fbU 
                                             & (IData)(vlSelfRef.tmds_channel__DOT__q_m)) 
                                            | ((IData)(vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__0) 
                                               << 2U));
        vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__0 
            = (1U & (~ (((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                         >> 2U) ^ ((IData)(vlSelfRef.video_data) 
                                   >> 3U))));
        vlSelfRef.tmds_channel__DOT__q_m = ((0x1f7U 
                                             & (IData)(vlSelfRef.tmds_channel__DOT__q_m)) 
                                            | ((IData)(vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__0) 
                                               << 3U));
        vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__0 
            = (1U & (~ (((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                         >> 3U) ^ ((IData)(vlSelfRef.video_data) 
                                   >> 4U))));
        vlSelfRef.tmds_channel__DOT__q_m = ((0x1efU 
                                             & (IData)(vlSelfRef.tmds_channel__DOT__q_m)) 
                                            | ((IData)(vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__0) 
                                               << 4U));
        vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__0 
            = (1U & (~ (((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                         >> 4U) ^ ((IData)(vlSelfRef.video_data) 
                                   >> 5U))));
        vlSelfRef.tmds_channel__DOT__q_m = ((0x1dfU 
                                             & (IData)(vlSelfRef.tmds_channel__DOT__q_m)) 
                                            | ((IData)(vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__0) 
                                               << 5U));
        vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__0 
            = (1U & (~ (((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                         >> 5U) ^ ((IData)(vlSelfRef.video_data) 
                                   >> 6U))));
        vlSelfRef.tmds_channel__DOT__q_m = ((0x1bfU 
                                             & (IData)(vlSelfRef.tmds_channel__DOT__q_m)) 
                                            | ((IData)(vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__0) 
                                               << 6U));
        vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__0 
            = (1U & (~ (((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                         >> 6U) ^ ((IData)(vlSelfRef.video_data) 
                                   >> 7U))));
        vlSelfRef.tmds_channel__DOT__q_m = ((0x7fU 
                                             & (IData)(vlSelfRef.tmds_channel__DOT__q_m)) 
                                            | ((IData)(vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__0) 
                                               << 7U));
    } else {
        vlSelfRef.tmds_channel__DOT__q_m = ((0x1feU 
                                             & (IData)(vlSelfRef.tmds_channel__DOT__q_m)) 
                                            | (1U & (IData)(vlSelfRef.video_data)));
        vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__1 
            = (1U & ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                     ^ ((IData)(vlSelfRef.video_data) 
                        >> 1U)));
        vlSelfRef.tmds_channel__DOT__q_m = ((0x1fdU 
                                             & (IData)(vlSelfRef.tmds_channel__DOT__q_m)) 
                                            | ((IData)(vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__1) 
                                               << 1U));
        vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__1 
            = (1U & (((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                      >> 1U) ^ ((IData)(vlSelfRef.video_data) 
                                >> 2U)));
        vlSelfRef.tmds_channel__DOT__q_m = ((0x1fbU 
                                             & (IData)(vlSelfRef.tmds_channel__DOT__q_m)) 
                                            | ((IData)(vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__1) 
                                               << 2U));
        vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__1 
            = (1U & (((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                      >> 2U) ^ ((IData)(vlSelfRef.video_data) 
                                >> 3U)));
        vlSelfRef.tmds_channel__DOT__q_m = ((0x1f7U 
                                             & (IData)(vlSelfRef.tmds_channel__DOT__q_m)) 
                                            | ((IData)(vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__1) 
                                               << 3U));
        vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__1 
            = (1U & (((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                      >> 3U) ^ ((IData)(vlSelfRef.video_data) 
                                >> 4U)));
        vlSelfRef.tmds_channel__DOT__q_m = ((0x1efU 
                                             & (IData)(vlSelfRef.tmds_channel__DOT__q_m)) 
                                            | ((IData)(vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__1) 
                                               << 4U));
        vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__1 
            = (1U & (((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                      >> 4U) ^ ((IData)(vlSelfRef.video_data) 
                                >> 5U)));
        vlSelfRef.tmds_channel__DOT__q_m = ((0x1dfU 
                                             & (IData)(vlSelfRef.tmds_channel__DOT__q_m)) 
                                            | ((IData)(vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__1) 
                                               << 5U));
        vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__1 
            = (1U & (((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                      >> 5U) ^ ((IData)(vlSelfRef.video_data) 
                                >> 6U)));
        vlSelfRef.tmds_channel__DOT__q_m = ((0x1bfU 
                                             & (IData)(vlSelfRef.tmds_channel__DOT__q_m)) 
                                            | ((IData)(vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__1) 
                                               << 6U));
        vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__1 
            = (1U & (((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                      >> 6U) ^ ((IData)(vlSelfRef.video_data) 
                                >> 7U)));
        vlSelfRef.tmds_channel__DOT__q_m = ((0x7fU 
                                             & (IData)(vlSelfRef.tmds_channel__DOT__q_m)) 
                                            | (0x100U 
                                               | ((IData)(vlSelfRef.tmds_channel__DOT____Vlvbound_h3f0da199__1) 
                                                  << 7U)));
    }
    if (((0U == (IData)(vlSelfRef.tmds_channel__DOT__acc)) 
         | ((IData)(vlSelfRef.tmds_channel__DOT__N1q_m07) 
            == (IData)(vlSelfRef.tmds_channel__DOT__N0q_m07)))) {
        if ((0x100U & (IData)(vlSelfRef.tmds_channel__DOT__q_m))) {
            vlSelfRef.tmds_channel__DOT__acc_add = 
                (0x1fU & ((IData)(vlSelfRef.tmds_channel__DOT__N1q_m07) 
                          - (IData)(vlSelfRef.tmds_channel__DOT__N0q_m07)));
            vlSelfRef.tmds_channel__DOT__q_out = ((0x200U 
                                                   & ((~ 
                                                       ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                        >> 8U)) 
                                                      << 9U)) 
                                                  | (IData)(vlSelfRef.tmds_channel__DOT__q_m));
        } else {
            vlSelfRef.tmds_channel__DOT__acc_add = 
                (0x1fU & ((IData)(vlSelfRef.tmds_channel__DOT__N0q_m07) 
                          - (IData)(vlSelfRef.tmds_channel__DOT__N1q_m07)));
            vlSelfRef.tmds_channel__DOT__q_out = ((0x200U 
                                                   & ((~ 
                                                       ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                                        >> 8U)) 
                                                      << 9U)) 
                                                  | ((0x100U 
                                                      & (IData)(vlSelfRef.tmds_channel__DOT__q_m)) 
                                                     | (0xffU 
                                                        & (~ (IData)(vlSelfRef.tmds_channel__DOT__q_m)))));
        }
    } else if (((VL_LTS_III(5, 0U, (IData)(vlSelfRef.tmds_channel__DOT__acc)) 
                 & VL_GTS_III(5, (IData)(vlSelfRef.tmds_channel__DOT__N1q_m07), (IData)(vlSelfRef.tmds_channel__DOT__N0q_m07))) 
                | (VL_GTS_III(5, 0U, (IData)(vlSelfRef.tmds_channel__DOT__acc)) 
                   & VL_LTS_III(5, (IData)(vlSelfRef.tmds_channel__DOT__N1q_m07), (IData)(vlSelfRef.tmds_channel__DOT__N0q_m07))))) {
        vlSelfRef.tmds_channel__DOT__q_out = (0x200U 
                                              | ((0x100U 
                                                  & (IData)(vlSelfRef.tmds_channel__DOT__q_m)) 
                                                 | (0xffU 
                                                    & (~ (IData)(vlSelfRef.tmds_channel__DOT__q_m)))));
        vlSelfRef.tmds_channel__DOT__acc_add = (0x1fU 
                                                & (((IData)(vlSelfRef.tmds_channel__DOT__N0q_m07) 
                                                    - (IData)(vlSelfRef.tmds_channel__DOT__N1q_m07)) 
                                                   + 
                                                   ((0x100U 
                                                     & (IData)(vlSelfRef.tmds_channel__DOT__q_m))
                                                     ? 2U
                                                     : 0U)));
    } else {
        vlSelfRef.tmds_channel__DOT__q_out = (0x1ffU 
                                              & (IData)(vlSelfRef.tmds_channel__DOT__q_m));
        vlSelfRef.tmds_channel__DOT__acc_add = (0x1fU 
                                                & (((IData)(vlSelfRef.tmds_channel__DOT__N1q_m07) 
                                                    - (IData)(vlSelfRef.tmds_channel__DOT__N0q_m07)) 
                                                   - 
                                                   ((0x100U 
                                                     & (IData)(vlSelfRef.tmds_channel__DOT__q_m))
                                                     ? 0U
                                                     : 2U)));
    }
}

void Vhdmi___024root___eval_triggers__act(Vhdmi___024root* vlSelf);

bool Vhdmi___024root___eval_phase__act(Vhdmi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhdmi___024root___eval_phase__act\n"); );
    Vhdmi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vhdmi___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vhdmi___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vhdmi___024root___eval_phase__nba(Vhdmi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhdmi___024root___eval_phase__nba\n"); );
    Vhdmi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vhdmi___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhdmi___024root___dump_triggers__ico(Vhdmi___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vhdmi___024root___dump_triggers__nba(Vhdmi___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vhdmi___024root___dump_triggers__act(Vhdmi___024root* vlSelf);
#endif  // VL_DEBUG

void Vhdmi___024root___eval(Vhdmi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhdmi___024root___eval\n"); );
    Vhdmi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vhdmi___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("hdmi.sv", 4, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vhdmi___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vhdmi___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("hdmi.sv", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vhdmi___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("hdmi.sv", 4, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vhdmi___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vhdmi___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vhdmi___024root___eval_debug_assertions(Vhdmi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhdmi___024root___eval_debug_assertions\n"); );
    Vhdmi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk_pixel & 0xfeU)))) {
        Verilated::overWidthError("clk_pixel");}
    if (VL_UNLIKELY(((vlSelfRef.data_island_data & 0xf0U)))) {
        Verilated::overWidthError("data_island_data");}
    if (VL_UNLIKELY(((vlSelfRef.control_data & 0xfcU)))) {
        Verilated::overWidthError("control_data");}
    if (VL_UNLIKELY(((vlSelfRef.mode & 0xf8U)))) {
        Verilated::overWidthError("mode");}
}
#endif  // VL_DEBUG
