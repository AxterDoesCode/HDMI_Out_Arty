// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtmds_encoder_dvi.h for the primary calling header

#include "Vtmds_encoder_dvi__pch.h"
#include "Vtmds_encoder_dvi__Syms.h"
#include "Vtmds_encoder_dvi___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtmds_encoder_dvi___024root___dump_triggers__ico(Vtmds_encoder_dvi___024root* vlSelf);
#endif  // VL_DEBUG

void Vtmds_encoder_dvi___024root___eval_triggers__ico(Vtmds_encoder_dvi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtmds_encoder_dvi___024root___eval_triggers__ico\n"); );
    Vtmds_encoder_dvi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.set(0U, (IData)(vlSelfRef.__VicoFirstIteration));
    vlSelfRef.__VicoTriggered.set(1U, ((IData)(vlSelfRef.tmds_encoder_dvi__DOT__enc_qm) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tmds_encoder_dvi__DOT__enc_qm__1)));
    vlSelfRef.__Vtrigprevexpr___TOP__tmds_encoder_dvi__DOT__enc_qm__1 
        = vlSelfRef.tmds_encoder_dvi__DOT__enc_qm;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VicoDidInit)))))) {
        vlSelfRef.__VicoDidInit = 1U;
        vlSelfRef.__VicoTriggered.set(1U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtmds_encoder_dvi___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtmds_encoder_dvi___024root___dump_triggers__act(Vtmds_encoder_dvi___024root* vlSelf);
#endif  // VL_DEBUG

void Vtmds_encoder_dvi___024root___eval_triggers__act(Vtmds_encoder_dvi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtmds_encoder_dvi___024root___eval_triggers__act\n"); );
    Vtmds_encoder_dvi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.tmds_encoder_dvi__DOT__enc_qm) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tmds_encoder_dvi__DOT__enc_qm__2)));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.i_clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__i_clk__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__tmds_encoder_dvi__DOT__enc_qm__2 
        = vlSelfRef.tmds_encoder_dvi__DOT__enc_qm;
    vlSelfRef.__Vtrigprevexpr___TOP__i_clk__0 = vlSelfRef.i_clk;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(0U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtmds_encoder_dvi___024root___dump_triggers__act(vlSelf);
    }
#endif
}
