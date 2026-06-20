// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_mux4__pch.h"

//============================================================
// Constructors

Vtb_mux4::Vtb_mux4(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_mux4__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_mux4::Vtb_mux4(const char* _vcname__)
    : Vtb_mux4(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_mux4::~Vtb_mux4() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_mux4___024root___eval_debug_assertions(Vtb_mux4___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_mux4___024root___eval_static(Vtb_mux4___024root* vlSelf);
void Vtb_mux4___024root___eval_initial(Vtb_mux4___024root* vlSelf);
void Vtb_mux4___024root___eval_settle(Vtb_mux4___024root* vlSelf);
void Vtb_mux4___024root___eval(Vtb_mux4___024root* vlSelf);

void Vtb_mux4::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_mux4::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_mux4___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_mux4___024root___eval_static(&(vlSymsp->TOP));
        Vtb_mux4___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_mux4___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_mux4___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_mux4::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtb_mux4::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_mux4::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_mux4___024root___eval_final(Vtb_mux4___024root* vlSelf);

VL_ATTR_COLD void Vtb_mux4::final() {
    Vtb_mux4___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_mux4::hierName() const { return vlSymsp->name(); }
const char* Vtb_mux4::modelName() const { return "Vtb_mux4"; }
unsigned Vtb_mux4::threads() const { return 1; }
void Vtb_mux4::prepareClone() const { contextp()->prepareClone(); }
void Vtb_mux4::atClone() const {
    contextp()->threadPoolpOnClone();
}
