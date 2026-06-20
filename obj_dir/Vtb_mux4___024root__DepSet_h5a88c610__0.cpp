// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mux4.h for the primary calling header

#include "Vtb_mux4__pch.h"
#include "Vtb_mux4__Syms.h"
#include "Vtb_mux4___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_mux4___024root___eval_initial__TOP__Vtiming__0(Vtb_mux4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_mux4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mux4___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"mux.vcd"});
    VL_PRINTF_MT("-Info: tb_mux4.v:14: $dumpvar ignored, as Verilated without --trace\n");
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb_mux4.v", 
                                         18);
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb_mux4.v", 
                                         19);
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb_mux4.v", 
                                         20);
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb_mux4.v", 
                                         21);
    VL_FINISH_MT("tb_mux4.v", 22, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_mux4___024root___dump_triggers__act(Vtb_mux4___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_mux4___024root___eval_triggers__act(Vtb_mux4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_mux4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mux4___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, vlSelfRef.__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_mux4___024root___dump_triggers__act(vlSelf);
    }
#endif
}
