// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtmds_encoder_dvi.h for the primary calling header

#include "Vtmds_encoder_dvi__pch.h"
#include "Vtmds_encoder_dvi__Syms.h"
#include "Vtmds_encoder_dvi___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtmds_encoder_dvi___024root___dump_triggers__stl(Vtmds_encoder_dvi___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtmds_encoder_dvi___024root___eval_triggers__stl(Vtmds_encoder_dvi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtmds_encoder_dvi___024root___eval_triggers__stl\n"); );
    Vtmds_encoder_dvi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
    vlSelfRef.__VstlTriggered.set(1U, ((IData)(vlSelfRef.tmds_encoder_dvi__DOT__enc_qm) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tmds_encoder_dvi__DOT__enc_qm__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__tmds_encoder_dvi__DOT__enc_qm__0 
        = vlSelfRef.tmds_encoder_dvi__DOT__enc_qm;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VstlDidInit)))))) {
        vlSelfRef.__VstlDidInit = 1U;
        vlSelfRef.__VstlTriggered.set(1U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtmds_encoder_dvi___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
