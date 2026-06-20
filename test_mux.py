import cocotb
from cocotb.triggers import Timer

@cocotb.test()
async def test_mux(dut):

    dut.d.value = 0b1010

    dut.sel.value = 0
    await Timer(10, units="ns")
    assert dut.y.value == 0, "sel=00 FAILED"

    dut.sel.value = 1
    await Timer(10, units="ns")
    assert dut.y.value == 1, "sel=01 FAILED"

    dut.sel.value = 2
    await Timer(10, units="ns")
    assert dut.y.value == 0, "sel=10 FAILED"

    dut.sel.value = 3
    await Timer(10, units="ns")
    assert dut.y.value == 1, "sel=11 FAILED"

    cocotb.log.info("All tests PASSED!")
