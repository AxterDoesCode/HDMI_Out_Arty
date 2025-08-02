// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vhdmi__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vhdmi::Vhdmi(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vhdmi__Syms(contextp(), _vcname__, this)}
    , clk_pixel{vlSymsp->TOP.clk_pixel}
    , video_data{vlSymsp->TOP.video_data}
    , data_island_data{vlSymsp->TOP.data_island_data}
    , control_data{vlSymsp->TOP.control_data}
    , mode{vlSymsp->TOP.mode}
    , tmds{vlSymsp->TOP.tmds}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vhdmi::Vhdmi(const char* _vcname__)
    : Vhdmi(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vhdmi::~Vhdmi() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vhdmi___024root___eval_debug_assertions(Vhdmi___024root* vlSelf);
#endif  // VL_DEBUG
void Vhdmi___024root___eval_static(Vhdmi___024root* vlSelf);
void Vhdmi___024root___eval_initial(Vhdmi___024root* vlSelf);
void Vhdmi___024root___eval_settle(Vhdmi___024root* vlSelf);
void Vhdmi___024root___eval(Vhdmi___024root* vlSelf);

void Vhdmi::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vhdmi::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vhdmi___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vhdmi___024root___eval_static(&(vlSymsp->TOP));
        Vhdmi___024root___eval_initial(&(vlSymsp->TOP));
        Vhdmi___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vhdmi___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vhdmi::eventsPending() { return false; }

uint64_t Vhdmi::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vhdmi::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vhdmi___024root___eval_final(Vhdmi___024root* vlSelf);

VL_ATTR_COLD void Vhdmi::final() {
    Vhdmi___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vhdmi::hierName() const { return vlSymsp->name(); }
const char* Vhdmi::modelName() const { return "Vhdmi"; }
unsigned Vhdmi::threads() const { return 1; }
void Vhdmi::prepareClone() const { contextp()->prepareClone(); }
void Vhdmi::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vhdmi::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vhdmi___024root__trace_decl_types(VerilatedVcd* tracep);

void Vhdmi___024root__trace_init_top(Vhdmi___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vhdmi___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhdmi___024root*>(voidSelf);
    Vhdmi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vhdmi___024root__trace_decl_types(tracep);
    Vhdmi___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vhdmi___024root__trace_register(Vhdmi___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vhdmi::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vhdmi::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vhdmi___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
