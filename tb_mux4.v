`timescale 1ns/1ps
module tb_mux4;
reg [3:0] d;
reg [1:0] sel;
wire y;

mux4 dut(
	.d(d),
	.sel(sel),
	.y(y)
);
initial begin
	$dumpfile("mux.vcd");
	$dumpvars(0,tb_mux4);
	
	d = 4'b1010;

	sel = 2'b00; #10;
	sel = 2'b01; #10;
	sel = 2'b10; #10;
	sel = 2'b11; #10;
	$finish;
	end
endmodule
