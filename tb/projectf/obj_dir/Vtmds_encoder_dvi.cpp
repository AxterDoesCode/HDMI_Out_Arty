// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtmds_encoder_dvi__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtmds_encoder_dvi::Vtmds_encoder_dvi(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtmds_encoder_dvi__Syms(contextp(), _vcname__, this)}
    , i_clk{vlSymsp->TOP.i_clk}
    , i_rst{vlSymsp->TOP.i_rst}
    , i_data{vlSymsp->TOP.i_data}
    , i_ctrl{vlSymsp->TOP.i_ctrl}
    , i_de{vlSymsp->TOP.i_de}
    , o_tmds{vlSymsp->TOP.o_tmds}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vtmds_encoder_dvi::Vtmds_encoder_dvi(const char* _vcname__)
    : Vtmds_encoder_dvi(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtmds_encoder_dvi::~Vtmds_encoder_dvi() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtmds_encoder_dvi___024root___eval_debug_assertions(Vtmds_encoder_dvi___024root* vlSelf);
#endif  // VL_DEBUG
void Vtmds_encoder_dvi___024root___eval_static(Vtmds_encoder_dvi___024root* vlSelf);
void Vtmds_encoder_dvi___024root___eval_initial(Vtmds_encoder_dvi___024root* vlSelf);
void Vtmds_encoder_dvi___024root___eval_settle(Vtmds_encoder_dvi___024root* vlSelf);
void Vtmds_encoder_dvi___024root___eval(Vtmds_encoder_dvi___024root* vlSelf);

void Vtmds_encoder_dvi::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtmds_encoder_dvi::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtmds_encoder_dvi___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtmds_encoder_dvi___024root___eval_static(&(vlSymsp->TOP));
        Vtmds_encoder_dvi___024root___eval_initial(&(vlSymsp->TOP));
        Vtmds_encoder_dvi___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtmds_encoder_dvi___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtmds_encoder_dvi::eventsPending() { return false; }

uint64_t Vtmds_encoder_dvi::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtmds_encoder_dvi::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtmds_encoder_dvi___024root___eval_final(Vtmds_encoder_dvi___024root* vlSelf);

VL_ATTR_COLD void Vtmds_encoder_dvi::final() {
    Vtmds_encoder_dvi___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtmds_encoder_dvi::hierName() const { return vlSymsp->name(); }
const char* Vtmds_encoder_dvi::modelName() const { return "Vtmds_encoder_dvi"; }
unsigned Vtmds_encoder_dvi::threads() const { return 1; }
void Vtmds_encoder_dvi::prepareClone() const { contextp()->prepareClone(); }
void Vtmds_encoder_dvi::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vtmds_encoder_dvi::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtmds_encoder_dvi___024root__trace_decl_types(VerilatedVcd* tracep);

void Vtmds_encoder_dvi___024root__trace_init_top(Vtmds_encoder_dvi___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtmds_encoder_dvi___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtmds_encoder_dvi___024root*>(voidSelf);
    Vtmds_encoder_dvi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vtmds_encoder_dvi___024root__trace_decl_types(tracep);
    Vtmds_encoder_dvi___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtmds_encoder_dvi___024root__trace_register(Vtmds_encoder_dvi___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtmds_encoder_dvi::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtmds_encoder_dvi::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtmds_encoder_dvi___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
