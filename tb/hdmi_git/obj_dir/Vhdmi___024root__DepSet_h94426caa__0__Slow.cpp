// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhdmi.h for the primary calling header

#include "Vhdmi__pch.h"
#include "Vhdmi___024root.h"

VL_ATTR_COLD void Vhdmi___024root___eval_static__TOP(Vhdmi___024root* vlSelf);

VL_ATTR_COLD void Vhdmi___024root___eval_static(Vhdmi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhdmi___024root___eval_static\n"); );
    Vhdmi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vhdmi___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vhdmi___024root___eval_static__TOP(Vhdmi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhdmi___024root___eval_static__TOP\n"); );
    Vhdmi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tmds = 0x354U;
    vlSelfRef.tmds_channel__DOT__acc = 0U;
}

VL_ATTR_COLD void Vhdmi___024root___eval_initial__TOP(Vhdmi___024root* vlSelf);
VL_ATTR_COLD void Vhdmi___024root____Vm_traceActivitySetAll(Vhdmi___024root* vlSelf);

VL_ATTR_COLD void Vhdmi___024root___eval_initial(Vhdmi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhdmi___024root___eval_initial\n"); );
    Vhdmi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vhdmi___024root___eval_initial__TOP(vlSelf);
    Vhdmi___024root____Vm_traceActivitySetAll(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tmds_channel__DOT__q_m__0 
        = vlSelfRef.tmds_channel__DOT__q_m;
    vlSelfRef.__Vtrigprevexpr___TOP__tmds_channel__DOT__q_m__1 
        = vlSelfRef.tmds_channel__DOT__q_m;
    vlSelfRef.__Vtrigprevexpr___TOP__clk_pixel__0 = vlSelfRef.clk_pixel;
}

VL_ATTR_COLD void Vhdmi___024root___eval_initial__TOP(Vhdmi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhdmi___024root___eval_initial__TOP\n"); );
    Vhdmi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tmds_channel__DOT__i = 7U;
}

VL_ATTR_COLD void Vhdmi___024root___eval_final(Vhdmi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhdmi___024root___eval_final\n"); );
    Vhdmi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhdmi___024root___dump_triggers__stl(Vhdmi___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vhdmi___024root___eval_phase__stl(Vhdmi___024root* vlSelf);

VL_ATTR_COLD void Vhdmi___024root___eval_settle(Vhdmi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhdmi___024root___eval_settle\n"); );
    Vhdmi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vhdmi___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("hdmi.sv", 4, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vhdmi___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhdmi___024root___dump_triggers__stl(Vhdmi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhdmi___024root___dump_triggers__stl\n"); );
    Vhdmi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] tmds_channel.q_m)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vhdmi___024root___stl_sequent__TOP__0(Vhdmi___024root* vlSelf);
VL_ATTR_COLD void Vhdmi___024root___stl_sequent__TOP__1(Vhdmi___024root* vlSelf);
VL_ATTR_COLD void Vhdmi___024root___stl_comb__TOP__0(Vhdmi___024root* vlSelf);

VL_ATTR_COLD void Vhdmi___024root___eval_stl(Vhdmi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhdmi___024root___eval_stl\n"); );
    Vhdmi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vhdmi___024root___stl_sequent__TOP__0(vlSelf);
        Vhdmi___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vhdmi___024root___stl_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vhdmi___024root___stl_comb__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<SData/*9:0*/, 4> Vhdmi__ConstPool__TABLE_h04576c92_0;
extern const VlUnpacked<SData/*9:0*/, 16> Vhdmi__ConstPool__TABLE_h368da323_0;

VL_ATTR_COLD void Vhdmi___024root___stl_sequent__TOP__0(Vhdmi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhdmi___024root___stl_sequent__TOP__0\n"); );
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
}

VL_ATTR_COLD void Vhdmi___024root___stl_sequent__TOP__1(Vhdmi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhdmi___024root___stl_sequent__TOP__1\n"); );
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
}

VL_ATTR_COLD void Vhdmi___024root___stl_comb__TOP__0(Vhdmi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhdmi___024root___stl_comb__TOP__0\n"); );
    Vhdmi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_ATTR_COLD void Vhdmi___024root___eval_triggers__stl(Vhdmi___024root* vlSelf);

VL_ATTR_COLD bool Vhdmi___024root___eval_phase__stl(Vhdmi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhdmi___024root___eval_phase__stl\n"); );
    Vhdmi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vhdmi___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vhdmi___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhdmi___024root___dump_triggers__ico(Vhdmi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhdmi___024root___dump_triggers__ico\n"); );
    Vhdmi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhdmi___024root___dump_triggers__act(Vhdmi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhdmi___024root___dump_triggers__act\n"); );
    Vhdmi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] tmds_channel.q_m)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk_pixel)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhdmi___024root___dump_triggers__nba(Vhdmi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhdmi___024root___dump_triggers__nba\n"); );
    Vhdmi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] tmds_channel.q_m)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk_pixel)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vhdmi___024root____Vm_traceActivitySetAll(Vhdmi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhdmi___024root____Vm_traceActivitySetAll\n"); );
    Vhdmi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void Vhdmi___024root___ctor_var_reset(Vhdmi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhdmi___024root___ctor_var_reset\n"); );
    Vhdmi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk_pixel = VL_RAND_RESET_I(1);
    vlSelf->video_data = VL_RAND_RESET_I(8);
    vlSelf->data_island_data = VL_RAND_RESET_I(4);
    vlSelf->control_data = VL_RAND_RESET_I(2);
    vlSelf->mode = VL_RAND_RESET_I(3);
    vlSelf->tmds = VL_RAND_RESET_I(10);
    vlSelf->tmds_channel__DOT__acc = VL_RAND_RESET_I(5);
    vlSelf->tmds_channel__DOT__q_m = VL_RAND_RESET_I(9);
    vlSelf->tmds_channel__DOT__q_out = VL_RAND_RESET_I(10);
    vlSelf->tmds_channel__DOT__N1D = VL_RAND_RESET_I(4);
    vlSelf->tmds_channel__DOT__N1q_m07 = VL_RAND_RESET_I(5);
    vlSelf->tmds_channel__DOT__N0q_m07 = VL_RAND_RESET_I(5);
    vlSelf->tmds_channel__DOT__acc_add = VL_RAND_RESET_I(5);
    vlSelf->tmds_channel__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->tmds_channel__DOT__control_coding = VL_RAND_RESET_I(10);
    vlSelf->tmds_channel__DOT__terc4_coding = VL_RAND_RESET_I(10);
    vlSelf->tmds_channel__DOT____Vlvbound_h3f0da199__0 = VL_RAND_RESET_I(1);
    vlSelf->tmds_channel__DOT____Vlvbound_h3f0da199__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tmds_channel__DOT__q_m__0 = VL_RAND_RESET_I(9);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__tmds_channel__DOT__q_m__1 = VL_RAND_RESET_I(9);
    vlSelf->__Vtrigprevexpr___TOP__clk_pixel__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
