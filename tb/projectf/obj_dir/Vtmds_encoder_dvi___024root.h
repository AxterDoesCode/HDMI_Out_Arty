// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtmds_encoder_dvi.h for the primary calling header

#ifndef VERILATED_VTMDS_ENCODER_DVI___024ROOT_H_
#define VERILATED_VTMDS_ENCODER_DVI___024ROOT_H_  // guard

#include "verilated.h"


class Vtmds_encoder_dvi__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtmds_encoder_dvi___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(i_clk,0,0);
    VL_IN8(i_rst,0,0);
    VL_IN8(i_data,7,0);
    VL_IN8(i_ctrl,1,0);
    VL_IN8(i_de,0,0);
    CData/*3:0*/ tmds_encoder_dvi__DOT__d_ones;
    CData/*0:0*/ tmds_encoder_dvi__DOT__use_xnor;
    CData/*4:0*/ tmds_encoder_dvi__DOT__ones;
    CData/*4:0*/ tmds_encoder_dvi__DOT__balance;
    CData/*4:0*/ tmds_encoder_dvi__DOT__bias;
    CData/*0:0*/ __VstlDidInit;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoDidInit;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__i_clk__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    VL_OUT16(o_tmds,9,0);
    SData/*8:0*/ tmds_encoder_dvi__DOT__enc_qm;
    SData/*8:0*/ __Vtrigprevexpr___TOP__tmds_encoder_dvi__DOT__enc_qm__0;
    SData/*8:0*/ __Vtrigprevexpr___TOP__tmds_encoder_dvi__DOT__enc_qm__1;
    SData/*8:0*/ __Vtrigprevexpr___TOP__tmds_encoder_dvi__DOT__enc_qm__2;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<2> __VstlTriggered;
    VlTriggerVec<2> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtmds_encoder_dvi__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtmds_encoder_dvi___024root(Vtmds_encoder_dvi__Syms* symsp, const char* v__name);
    ~Vtmds_encoder_dvi___024root();
    VL_UNCOPYABLE(Vtmds_encoder_dvi___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
