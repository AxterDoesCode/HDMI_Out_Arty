// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhdmi.h for the primary calling header

#ifndef VERILATED_VHDMI___024ROOT_H_
#define VERILATED_VHDMI___024ROOT_H_  // guard

#include "verilated.h"


class Vhdmi__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhdmi___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_pixel,0,0);
    VL_IN8(video_data,7,0);
    VL_IN8(data_island_data,3,0);
    VL_IN8(control_data,1,0);
    VL_IN8(mode,2,0);
    CData/*4:0*/ tmds_channel__DOT__acc;
    CData/*3:0*/ tmds_channel__DOT__N1D;
    CData/*4:0*/ tmds_channel__DOT__N1q_m07;
    CData/*4:0*/ tmds_channel__DOT__N0q_m07;
    CData/*4:0*/ tmds_channel__DOT__acc_add;
    CData/*0:0*/ tmds_channel__DOT____Vlvbound_h3f0da199__0;
    CData/*0:0*/ tmds_channel__DOT____Vlvbound_h3f0da199__1;
    CData/*0:0*/ __VstlDidInit;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk_pixel__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    VL_OUT16(tmds,9,0);
    SData/*8:0*/ tmds_channel__DOT__q_m;
    SData/*9:0*/ tmds_channel__DOT__q_out;
    SData/*9:0*/ tmds_channel__DOT__control_coding;
    SData/*9:0*/ tmds_channel__DOT__terc4_coding;
    SData/*8:0*/ __Vtrigprevexpr___TOP__tmds_channel__DOT__q_m__0;
    SData/*8:0*/ __Vtrigprevexpr___TOP__tmds_channel__DOT__q_m__1;
    IData/*31:0*/ tmds_channel__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<2> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vhdmi__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vhdmi___024root(Vhdmi__Syms* symsp, const char* v__name);
    ~Vhdmi___024root();
    VL_UNCOPYABLE(Vhdmi___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
