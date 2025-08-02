// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtmds_encoder_dvi.h for the primary calling header

#include "Vtmds_encoder_dvi__pch.h"
#include "Vtmds_encoder_dvi___024root.h"

VL_ATTR_COLD void Vtmds_encoder_dvi___024root___eval_static(Vtmds_encoder_dvi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtmds_encoder_dvi___024root___eval_static\n"); );
    Vtmds_encoder_dvi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtmds_encoder_dvi___024root___eval_initial(Vtmds_encoder_dvi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtmds_encoder_dvi___024root___eval_initial\n"); );
    Vtmds_encoder_dvi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__tmds_encoder_dvi__DOT__enc_qm__0 
        = vlSelfRef.tmds_encoder_dvi__DOT__enc_qm;
    vlSelfRef.__Vtrigprevexpr___TOP__tmds_encoder_dvi__DOT__enc_qm__1 
        = vlSelfRef.tmds_encoder_dvi__DOT__enc_qm;
    vlSelfRef.__Vtrigprevexpr___TOP__tmds_encoder_dvi__DOT__enc_qm__2 
        = vlSelfRef.tmds_encoder_dvi__DOT__enc_qm;
    vlSelfRef.__Vtrigprevexpr___TOP__i_clk__0 = vlSelfRef.i_clk;
}

VL_ATTR_COLD void Vtmds_encoder_dvi___024root___eval_final(Vtmds_encoder_dvi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtmds_encoder_dvi___024root___eval_final\n"); );
    Vtmds_encoder_dvi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtmds_encoder_dvi___024root___dump_triggers__stl(Vtmds_encoder_dvi___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtmds_encoder_dvi___024root___eval_phase__stl(Vtmds_encoder_dvi___024root* vlSelf);

VL_ATTR_COLD void Vtmds_encoder_dvi___024root___eval_settle(Vtmds_encoder_dvi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtmds_encoder_dvi___024root___eval_settle\n"); );
    Vtmds_encoder_dvi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtmds_encoder_dvi___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tmds_encoder_dvi.v", 8, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtmds_encoder_dvi___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtmds_encoder_dvi___024root___dump_triggers__stl(Vtmds_encoder_dvi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtmds_encoder_dvi___024root___dump_triggers__stl\n"); );
    Vtmds_encoder_dvi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] tmds_encoder_dvi.enc_qm)\n");
    }
}
#endif  // VL_DEBUG

void Vtmds_encoder_dvi___024root___ico_sequent__TOP__0(Vtmds_encoder_dvi___024root* vlSelf);
void Vtmds_encoder_dvi___024root___ico_comb__TOP__0(Vtmds_encoder_dvi___024root* vlSelf);

VL_ATTR_COLD void Vtmds_encoder_dvi___024root___eval_stl(Vtmds_encoder_dvi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtmds_encoder_dvi___024root___eval_stl\n"); );
    Vtmds_encoder_dvi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtmds_encoder_dvi___024root___ico_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtmds_encoder_dvi___024root___ico_comb__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtmds_encoder_dvi___024root___eval_triggers__stl(Vtmds_encoder_dvi___024root* vlSelf);

VL_ATTR_COLD bool Vtmds_encoder_dvi___024root___eval_phase__stl(Vtmds_encoder_dvi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtmds_encoder_dvi___024root___eval_phase__stl\n"); );
    Vtmds_encoder_dvi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtmds_encoder_dvi___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtmds_encoder_dvi___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtmds_encoder_dvi___024root___dump_triggers__ico(Vtmds_encoder_dvi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtmds_encoder_dvi___024root___dump_triggers__ico\n"); );
    Vtmds_encoder_dvi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
    if ((2ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 1 is active: @([hybrid] tmds_encoder_dvi.enc_qm)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtmds_encoder_dvi___024root___dump_triggers__act(Vtmds_encoder_dvi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtmds_encoder_dvi___024root___dump_triggers__act\n"); );
    Vtmds_encoder_dvi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] tmds_encoder_dvi.enc_qm)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge i_clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtmds_encoder_dvi___024root___dump_triggers__nba(Vtmds_encoder_dvi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtmds_encoder_dvi___024root___dump_triggers__nba\n"); );
    Vtmds_encoder_dvi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] tmds_encoder_dvi.enc_qm)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge i_clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtmds_encoder_dvi___024root___ctor_var_reset(Vtmds_encoder_dvi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtmds_encoder_dvi___024root___ctor_var_reset\n"); );
    Vtmds_encoder_dvi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->i_clk = VL_RAND_RESET_I(1);
    vlSelf->i_rst = VL_RAND_RESET_I(1);
    vlSelf->i_data = VL_RAND_RESET_I(8);
    vlSelf->i_ctrl = VL_RAND_RESET_I(2);
    vlSelf->i_de = VL_RAND_RESET_I(1);
    vlSelf->o_tmds = VL_RAND_RESET_I(10);
    vlSelf->tmds_encoder_dvi__DOT__d_ones = VL_RAND_RESET_I(4);
    vlSelf->tmds_encoder_dvi__DOT__use_xnor = VL_RAND_RESET_I(1);
    vlSelf->tmds_encoder_dvi__DOT__enc_qm = VL_RAND_RESET_I(9);
    vlSelf->tmds_encoder_dvi__DOT__ones = VL_RAND_RESET_I(5);
    vlSelf->tmds_encoder_dvi__DOT__balance = VL_RAND_RESET_I(5);
    vlSelf->tmds_encoder_dvi__DOT__bias = VL_RAND_RESET_I(5);
    vlSelf->__Vtrigprevexpr___TOP__tmds_encoder_dvi__DOT__enc_qm__0 = VL_RAND_RESET_I(9);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__tmds_encoder_dvi__DOT__enc_qm__1 = VL_RAND_RESET_I(9);
    vlSelf->__VicoDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__tmds_encoder_dvi__DOT__enc_qm__2 = VL_RAND_RESET_I(9);
    vlSelf->__Vtrigprevexpr___TOP__i_clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
}
