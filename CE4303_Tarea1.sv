module CE4303_Tarea1(
	input clk, 
	output [6:0] hex0, hex1, hex2, hex3, hex4, hex5,
	input [3:0]  pio_btn_sw,
	input reset_reset_n

);

logic [23:0] pio_7_seg;

platform instancia_nios(
		.clk_clk(clk),
		.pio_7seg_external_connection_export(pio_7_seg),
		.pio_btn_sw_external_connection_export(pio_btn_sw),
		.reset_reset_n(reset_reset_n));

seven_segment_driver seg0(.data_in(pio_7_seg[3:0]), .data_out(hex0));
seven_segment_driver seg1(.data_in(pio_7_seg[7:4]), .data_out(hex1));
seven_segment_driver seg2(.data_in(pio_7_seg[11:8]), .data_out(hex2));
seven_segment_driver seg3(.data_in(pio_7_seg[15:12]), .data_out(hex3));
seven_segment_driver seg4(.data_in(pio_7_seg[19:16]), .data_out(hex4));
seven_segment_driver seg5(.data_in(pio_7_seg[23:20]), .data_out(hex5));

		
endmodule
