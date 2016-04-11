/******************************************************************************
 * Net instancer.
 * This file instantiate all nets in the simulation.
 * This file was generated by a verilog parser.
 ******************************************************************************/

 
#include <stdio.h>
#include "NetFlow.h"
#include "netinstatiation.h"
#include "SimulatorEngine.h"

void instance_nets(SimulatorEngine engine){

	engine.register_primitive(
		new X_FF("\gray_inst/count_3",
		//Module parameters:
		0x0, // 
		"SLICE_X6Y2", // 
		TRUE, // 
		TRUE, // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX__BGRAY__INST_SCOUNT_A3_B), // O
		engine.get_net(NET_INDEX_ENABLE__IBUF__0_A0_B), // CE
		engine.get_net(NET_INDEX__BNLWBUFFERSIGNAL__GRAY__INST_SCOUNT__3_SCLK_A0_B), // CLK
		engine.get_net(NET_INDEX__BGRAY__INST_SRESULT_A3_B), // I
		engine.get_net(NET_INDEX_GND_A0_B), // RST
		engine.get_net(NET_INDEX_GND_A0_B), // SET
		)
	)

	engine.register_primitive(
		new X_LUT6("\gray_inst/count<3>_rt",
		//Module parameters:
		0xffff0000ffff0000, // 
		"SLICE_X6Y2", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX__BGRAY__INST_SCOUNT_L3_G__RT__1_A0_B), // O
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR0
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR1
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR2
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR3
		engine.get_net(NET_INDEX__BGRAY__INST_SCOUNT_A3_B), // ADR4
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR5
		)
	)

	engine.register_primitive(
		new X_LUT5("\reset_4.D5LUT",
		//Module parameters:
		0x0, // 
		"SLICE_X6Y2", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX__BNLW__RESET__4_DD5LUT__O__UNCONNECTED_A0_B), // O
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR0
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR1
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR2
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR3
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR4
		)
	)

	engine.register_primitive(
		new X_ZERO("\ProtoComp1.CYINITGND",
		//Module parameters:
		"SLICE_X6Y2", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX__BPROTOCOMP1_DCYINITGND_D0_A0_B), // O
		)
	)

	engine.register_primitive(
		new X_FF("\gray_inst/count_2",
		//Module parameters:
		0x0, // 
		"SLICE_X6Y2", // 
		TRUE, // 
		TRUE, // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX__BGRAY__INST_SCOUNT_A2_B), // O
		engine.get_net(NET_INDEX_ENABLE__IBUF__0_A0_B), // CE
		engine.get_net(NET_INDEX__BNLWBUFFERSIGNAL__GRAY__INST_SCOUNT__2_SCLK_A0_B), // CLK
		engine.get_net(NET_INDEX__BGRAY__INST_SRESULT_A2_B), // I
		engine.get_net(NET_INDEX_GND_A0_B), // RST
		engine.get_net(NET_INDEX_GND_A0_B), // SET
		)
	)

	engine.register_primitive(
		new X_CARRY4("\gray_inst/Mcount_count_cy<3>",
		//Module parameters:
		"SLICE_X6Y2", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX__BGRAY__INST_SMCOUNT__COUNT__CY_A3_B), // CO
		engine.get_net(NET_INDEX__BGRAY__INST_SRESULT_A3_B), // O
		engine.get_net(NET_INDEX_CONST__ZERO_A0_B), // CI
		engine.get_net(NET_INDEX__BPROTOCOMP1_DCYINITGND_D0_A0_B), // CYINIT
		engine.get_net(NET_INDEX_CONST__ZERO_A0_B), // DI
		engine.get_net(NET_INDEX_CONST__ZERO_A0_B), // DI
		engine.get_net(NET_INDEX_CONST__ZERO_A0_B), // DI
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // DI
		engine.get_net(NET_INDEX__BGRAY__INST_SCOUNT_L3_G__RT__1_A0_B), // S
		engine.get_net(NET_INDEX__BGRAY__INST_SCOUNT_L2_G__RT__13_A0_B), // S
		engine.get_net(NET_INDEX__BGRAY__INST_SCOUNT_L1_G__RT__17_A0_B), // S
		engine.get_net(NET_INDEX__BGRAY__INST_SMCOUNT__COUNT__LUT_A0_B), // S
		)
	)

	engine.register_primitive(
		new X_LUT6("\gray_inst/count<2>_rt",
		//Module parameters:
		0xffff0000ffff0000, // 
		"SLICE_X6Y2", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX__BGRAY__INST_SCOUNT_L2_G__RT__13_A0_B), // O
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR0
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR1
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR2
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR3
		engine.get_net(NET_INDEX__BGRAY__INST_SCOUNT_A2_B), // ADR4
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR5
		)
	)

	engine.register_primitive(
		new X_LUT5("\reset_5.C5LUT",
		//Module parameters:
		0x0, // 
		"SLICE_X6Y2", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX__BNLW__RESET__5_DC5LUT__O__UNCONNECTED_A0_B), // O
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR0
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR1
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR2
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR3
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR4
		)
	)

	engine.register_primitive(
		new X_FF("\gray_inst/count_1",
		//Module parameters:
		0x0, // 
		"SLICE_X6Y2", // 
		TRUE, // 
		TRUE, // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX__BGRAY__INST_SCOUNT_A1_B), // O
		engine.get_net(NET_INDEX_ENABLE__IBUF__0_A0_B), // CE
		engine.get_net(NET_INDEX__BNLWBUFFERSIGNAL__GRAY__INST_SCOUNT__1_SCLK_A0_B), // CLK
		engine.get_net(NET_INDEX__BGRAY__INST_SRESULT_A1_B), // I
		engine.get_net(NET_INDEX_GND_A0_B), // RST
		engine.get_net(NET_INDEX_GND_A0_B), // SET
		)
	)

	engine.register_primitive(
		new X_LUT6("\gray_inst/count<1>_rt",
		//Module parameters:
		0xffff0000ffff0000, // 
		"SLICE_X6Y2", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX__BGRAY__INST_SCOUNT_L1_G__RT__17_A0_B), // O
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR0
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR1
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR2
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR3
		engine.get_net(NET_INDEX__BGRAY__INST_SCOUNT_A1_B), // ADR4
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR5
		)
	)

	engine.register_primitive(
		new X_LUT5("\reset_6.B5LUT",
		//Module parameters:
		0x0, // 
		"SLICE_X6Y2", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX__BNLW__RESET__6_DB5LUT__O__UNCONNECTED_A0_B), // O
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR0
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR1
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR2
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR3
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR4
		)
	)

	engine.register_primitive(
		new X_FF("\gray_inst/count_0",
		//Module parameters:
		0x0, // 
		"SLICE_X6Y2", // 
		TRUE, // 
		TRUE, // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX__BGRAY__INST_SCOUNT_A0_B), // O
		engine.get_net(NET_INDEX_ENABLE__IBUF__0_A0_B), // CE
		engine.get_net(NET_INDEX__BNLWBUFFERSIGNAL__GRAY__INST_SCOUNT__0_SCLK_A0_B), // CLK
		engine.get_net(NET_INDEX__BGRAY__INST_SRESULT_A0_B), // I
		engine.get_net(NET_INDEX_GND_A0_B), // RST
		engine.get_net(NET_INDEX_GND_A0_B), // SET
		)
	)

	engine.register_primitive(
		new X_LUT6("\gray_inst/Mcount_count_lut<0>_INV_0",
		//Module parameters:
		0xffff0000ffff, // 
		"SLICE_X6Y2", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX__BGRAY__INST_SMCOUNT__COUNT__LUT_A0_B), // O
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR0
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR1
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR2
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR3
		engine.get_net(NET_INDEX__BGRAY__INST_SCOUNT_A0_B), // ADR4
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR5
		)
	)

	engine.register_primitive(
		new X_LUT5("\N0_2.A5LUT",
		//Module parameters:
		0xffffffff, // 
		"SLICE_X6Y2", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX__BNLW__N0__2_DA5LUT__O__UNCONNECTED_A0_B), // O
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR0
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR1
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR2
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR3
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR4
		)
	)

	engine.register_primitive(
		new X_FF("\gray_inst/count_7",
		//Module parameters:
		0x0, // 
		"SLICE_X6Y3", // 
		TRUE, // 
		TRUE, // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX__BGRAY__INST_SCOUNT_A7_B), // O
		engine.get_net(NET_INDEX_ENABLE__IBUF__0_A0_B), // CE
		engine.get_net(NET_INDEX__BNLWBUFFERSIGNAL__GRAY__INST_SCOUNT__7_SCLK_A0_B), // CLK
		engine.get_net(NET_INDEX__BGRAY__INST_SRESULT_A7_B), // I
		engine.get_net(NET_INDEX_GND_A0_B), // RST
		engine.get_net(NET_INDEX_GND_A0_B), // SET
		)
	)

	engine.register_primitive(
		new X_LUT6("\gray_inst/count<7>_rt",
		//Module parameters:
		0xffffffff00000000, // 
		"SLICE_X6Y3", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX__BGRAY__INST_SCOUNT_L7_G__RT__29_A0_B), // O
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR0
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR1
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR2
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR3
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR4
		engine.get_net(NET_INDEX__BGRAY__INST_SCOUNT_A7_B), // ADR5
		)
	)

	engine.register_primitive(
		new X_FF("\gray_inst/count_6",
		//Module parameters:
		0x0, // 
		"SLICE_X6Y3", // 
		TRUE, // 
		TRUE, // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX__BGRAY__INST_SCOUNT_A6_B), // O
		engine.get_net(NET_INDEX_ENABLE__IBUF__0_A0_B), // CE
		engine.get_net(NET_INDEX__BNLWBUFFERSIGNAL__GRAY__INST_SCOUNT__6_SCLK_A0_B), // CLK
		engine.get_net(NET_INDEX__BGRAY__INST_SRESULT_A6_B), // I
		engine.get_net(NET_INDEX_GND_A0_B), // RST
		engine.get_net(NET_INDEX_GND_A0_B), // SET
		)
	)

	engine.register_primitive(
		new X_CARRY4("\gray_inst/Mcount_count_xor<7>",
		//Module parameters:
		"SLICE_X6Y3", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX__BNLW__GRAY__INST_SMCOUNT__COUNT__XOR_L7_G__CO_A3_B__UNCONNECTED_A0_B), // CO
		engine.get_net(NET_INDEX__BGRAY__INST_SRESULT_A7_B), // O
		engine.get_net(NET_INDEX__BGRAY__INST_SMCOUNT__COUNT__CY_A3_B), // CI
		engine.get_net(NET_INDEX_CONST__ZERO_A0_B), // CYINIT
		engine.get_net(NET_INDEX__BNLW__GRAY__INST_SMCOUNT__COUNT__XOR_L7_G__DI_A3_B__UNCONNECTED_A0_B), // DI
		engine.get_net(NET_INDEX_CONST__ZERO_A0_B), // DI
		engine.get_net(NET_INDEX_CONST__ZERO_A0_B), // DI
		engine.get_net(NET_INDEX_CONST__ZERO_A0_B), // DI
		engine.get_net(NET_INDEX__BGRAY__INST_SCOUNT_L7_G__RT__29_A0_B), // S
		engine.get_net(NET_INDEX__BGRAY__INST_SCOUNT_L6_G__RT__39_A0_B), // S
		engine.get_net(NET_INDEX__BGRAY__INST_SCOUNT_L5_G__RT__43_A0_B), // S
		engine.get_net(NET_INDEX__BGRAY__INST_SCOUNT_L4_G__RT__47_A0_B), // S
		)
	)

	engine.register_primitive(
		new X_LUT6("\gray_inst/count<6>_rt",
		//Module parameters:
		0xffff0000ffff0000, // 
		"SLICE_X6Y3", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX__BGRAY__INST_SCOUNT_L6_G__RT__39_A0_B), // O
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR0
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR1
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR2
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR3
		engine.get_net(NET_INDEX__BGRAY__INST_SCOUNT_A6_B), // ADR4
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR5
		)
	)

	engine.register_primitive(
		new X_LUT5("\reset.C5LUT",
		//Module parameters:
		0x0, // 
		"SLICE_X6Y3", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX__BNLW__RESET_DC5LUT__O__UNCONNECTED_A0_B), // O
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR0
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR1
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR2
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR3
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR4
		)
	)

	engine.register_primitive(
		new X_FF("\gray_inst/count_5",
		//Module parameters:
		0x0, // 
		"SLICE_X6Y3", // 
		TRUE, // 
		TRUE, // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX__BGRAY__INST_SCOUNT_A5_B), // O
		engine.get_net(NET_INDEX_ENABLE__IBUF__0_A0_B), // CE
		engine.get_net(NET_INDEX__BNLWBUFFERSIGNAL__GRAY__INST_SCOUNT__5_SCLK_A0_B), // CLK
		engine.get_net(NET_INDEX__BGRAY__INST_SRESULT_A5_B), // I
		engine.get_net(NET_INDEX_GND_A0_B), // RST
		engine.get_net(NET_INDEX_GND_A0_B), // SET
		)
	)

	engine.register_primitive(
		new X_LUT6("\gray_inst/count<5>_rt",
		//Module parameters:
		0xffff0000ffff0000, // 
		"SLICE_X6Y3", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX__BGRAY__INST_SCOUNT_L5_G__RT__43_A0_B), // O
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR0
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR1
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR2
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR3
		engine.get_net(NET_INDEX__BGRAY__INST_SCOUNT_A5_B), // ADR4
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR5
		)
	)

	engine.register_primitive(
		new X_LUT5("\reset_2.B5LUT",
		//Module parameters:
		0x0, // 
		"SLICE_X6Y3", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX__BNLW__RESET__2_DB5LUT__O__UNCONNECTED_A0_B), // O
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR0
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR1
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR2
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR3
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR4
		)
	)

	engine.register_primitive(
		new X_FF("\gray_inst/count_4",
		//Module parameters:
		0x0, // 
		"SLICE_X6Y3", // 
		TRUE, // 
		TRUE, // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX__BGRAY__INST_SCOUNT_A4_B), // O
		engine.get_net(NET_INDEX_ENABLE__IBUF__0_A0_B), // CE
		engine.get_net(NET_INDEX__BNLWBUFFERSIGNAL__GRAY__INST_SCOUNT__4_SCLK_A0_B), // CLK
		engine.get_net(NET_INDEX__BGRAY__INST_SRESULT_A4_B), // I
		engine.get_net(NET_INDEX_GND_A0_B), // RST
		engine.get_net(NET_INDEX_GND_A0_B), // SET
		)
	)

	engine.register_primitive(
		new X_LUT6("\gray_inst/count<4>_rt",
		//Module parameters:
		0xffff0000ffff0000, // 
		"SLICE_X6Y3", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX__BGRAY__INST_SCOUNT_L4_G__RT__47_A0_B), // O
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR0
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR1
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR2
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR3
		engine.get_net(NET_INDEX__BGRAY__INST_SCOUNT_A4_B), // ADR4
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR5
		)
	)

	engine.register_primitive(
		new X_LUT5("\reset_3.A5LUT",
		//Module parameters:
		0x0, // 
		"SLICE_X6Y3", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX__BNLW__RESET__3_DA5LUT__O__UNCONNECTED_A0_B), // O
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR0
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR1
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR2
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR3
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR4
		)
	)

	engine.register_primitive(
		new X_OPAD("q_31",
		//Module parameters:
		"PAD143", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX_Q_A0_B), // PAD
		)
	)

	engine.register_primitive(
		new X_OBUF("q_OBUF",
		//Module parameters:
		"PAD143", // 
		"DONT_CARE", // 
		12, // 
		"DEFAULT", // 
		"SLOW", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX_Q_A0_B), // O
		engine.get_net(NET_INDEX__BNLWBUFFERSIGNAL__Q__OBUF_SI_A0_B), // I
		)
	)

	engine.register_primitive(
		new X_IPAD("clk_35",
		//Module parameters:
		"PAD172", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX_CLK_A0_B), // PAD
		)
	)

	engine.register_primitive(
		new X_BUF("\clk_BUFGP/IBUFG",
		//Module parameters:
		"PAD172", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX__BCLK__BUFGP_SIBUFG__56_A0_B), // O
		engine.get_net(NET_INDEX_CLK_A0_B), // I
		)
	)

	engine.register_primitive(
		new X_BUF("\ProtoComp4.IMUX",
		//Module parameters:
		"PAD172", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX__BCLK__BUFGP_SIBUFG__0_A0_B), // O
		engine.get_net(NET_INDEX__BCLK__BUFGP_SIBUFG__56_A0_B), // I
		)
	)

	engine.register_primitive(
		new X_IPAD("enable_39",
		//Module parameters:
		"PAD144", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX_ENABLE_A0_B), // PAD
		)
	)

	engine.register_primitive(
		new X_BUF("enable_IBUF",
		//Module parameters:
		"PAD144", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX_ENABLE__IBUF__59_A0_B), // O
		engine.get_net(NET_INDEX_ENABLE_A0_B), // I
		)
	)

	engine.register_primitive(
		new X_BUF("\ProtoComp4.IMUX.1",
		//Module parameters:
		"PAD144", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX_ENABLE__IBUF__0_A0_B), // O
		engine.get_net(NET_INDEX_ENABLE__IBUF__59_A0_B), // I
		)
	)

	engine.register_primitive(
		new X_OPAD("\out<0>",
		//Module parameters:
		"PAD121", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX_OUT_A0_B), // PAD
		)
	)

	engine.register_primitive(
		new X_OBUF("out_0_OBUF",
		//Module parameters:
		"PAD121", // 
		"DONT_CARE", // 
		12, // 
		"DEFAULT", // 
		"SLOW", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX_OUT_A0_B), // O
		engine.get_net(NET_INDEX__BNLWBUFFERSIGNAL__OUT__0__OBUF_SI_A0_B), // I
		)
	)

	engine.register_primitive(
		new X_OPAD("\out<1>",
		//Module parameters:
		"PAD122", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX_OUT_A1_B), // PAD
		)
	)

	engine.register_primitive(
		new X_OBUF("out_1_OBUF",
		//Module parameters:
		"PAD122", // 
		"DONT_CARE", // 
		12, // 
		"DEFAULT", // 
		"SLOW", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX_OUT_A1_B), // O
		engine.get_net(NET_INDEX__BNLWBUFFERSIGNAL__OUT__1__OBUF_SI_A0_B), // I
		)
	)

	engine.register_primitive(
		new X_OPAD("\out<2>",
		//Module parameters:
		"PAD133", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX_OUT_A2_B), // PAD
		)
	)

	engine.register_primitive(
		new X_OBUF("out_2_OBUF",
		//Module parameters:
		"PAD133", // 
		"DONT_CARE", // 
		12, // 
		"DEFAULT", // 
		"SLOW", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX_OUT_A2_B), // O
		engine.get_net(NET_INDEX__BNLWBUFFERSIGNAL__OUT__2__OBUF_SI_A0_B), // I
		)
	)

	engine.register_primitive(
		new X_OPAD("\out<3>",
		//Module parameters:
		"PAD134", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX_OUT_A3_B), // PAD
		)
	)

	engine.register_primitive(
		new X_OBUF("out_3_OBUF",
		//Module parameters:
		"PAD134", // 
		"DONT_CARE", // 
		12, // 
		"DEFAULT", // 
		"SLOW", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX_OUT_A3_B), // O
		engine.get_net(NET_INDEX__BNLWBUFFERSIGNAL__OUT__3__OBUF_SI_A0_B), // I
		)
	)

	engine.register_primitive(
		new X_OPAD("\out<4>",
		//Module parameters:
		"PAD135", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX_OUT_A4_B), // PAD
		)
	)

	engine.register_primitive(
		new X_OBUF("out_4_OBUF",
		//Module parameters:
		"PAD135", // 
		"DONT_CARE", // 
		12, // 
		"DEFAULT", // 
		"SLOW", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX_OUT_A4_B), // O
		engine.get_net(NET_INDEX__BNLWBUFFERSIGNAL__OUT__4__OBUF_SI_A0_B), // I
		)
	)

	engine.register_primitive(
		new X_OPAD("\out<5>",
		//Module parameters:
		"PAD136", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX_OUT_A5_B), // PAD
		)
	)

	engine.register_primitive(
		new X_OBUF("out_5_OBUF",
		//Module parameters:
		"PAD136", // 
		"DONT_CARE", // 
		12, // 
		"DEFAULT", // 
		"SLOW", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX_OUT_A5_B), // O
		engine.get_net(NET_INDEX__BNLWBUFFERSIGNAL__OUT__5__OBUF_SI_A0_B), // I
		)
	)

	engine.register_primitive(
		new X_OPAD("\out<6>",
		//Module parameters:
		"PAD137", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX_OUT_A6_B), // PAD
		)
	)

	engine.register_primitive(
		new X_OBUF("out_6_OBUF",
		//Module parameters:
		"PAD137", // 
		"DONT_CARE", // 
		12, // 
		"DEFAULT", // 
		"SLOW", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX_OUT_A6_B), // O
		engine.get_net(NET_INDEX__BNLWBUFFERSIGNAL__OUT__6__OBUF_SI_A0_B), // I
		)
	)

	engine.register_primitive(
		new X_OPAD("\out<7>",
		//Module parameters:
		"PAD138", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX_OUT_A7_B), // PAD
		)
	)

	engine.register_primitive(
		new X_OBUF("out_7_OBUF",
		//Module parameters:
		"PAD138", // 
		"DONT_CARE", // 
		12, // 
		"DEFAULT", // 
		"SLOW", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX_OUT_A7_B), // O
		engine.get_net(NET_INDEX__BNLWBUFFERSIGNAL__OUT__7__OBUF_SI_A0_B), // I
		)
	)

	engine.register_primitive(
		new X_CKBUF("\clk_BUFGP/BUFG",
		//Module parameters:
		"BUFGMUX_X3Y13", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX_CLK__BUFGP_A0_B), // O
		engine.get_net(NET_INDEX__BNLWBUFFERSIGNAL__CLK__BUFGP_SBUFG_SIN_A0_B), // I
		)
	)

	engine.register_primitive(
		new X_SFF("\cntr_inst/cntr",
		//Module parameters:
		0x0, // 
		"SLICE_X1Y2", // 
		TRUE, // 
		TRUE, // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX__BCNTR__INST_SCNTR__133_A0_B), // O
		engine.get_net(NET_INDEX_VCC_A0_B), // CE
		engine.get_net(NET_INDEX__BNLWBUFFERSIGNAL__CNTR__INST_SCNTR_SCLK_A0_B), // CLK
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // I
		engine.get_net(NET_INDEX_GND_A0_B), // RST
		engine.get_net(NET_INDEX_GND_A0_B), // SET
		engine.get_net(NET_INDEX__BCNTR__INST_SCNTR__133_A0_B), // SRST
		engine.get_net(NET_INDEX_GND_A0_B), // SSET
		)
	)

	engine.register_primitive(
		new X_BUF("\out_3_OBUF/out_3_OBUF_DMUX_Delay",
		//Module parameters:
		"UNPLACED", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX_OUT__2__OBUF__0_A0_B), // O
		engine.get_net(NET_INDEX_OUT__2__OBUF__84_A0_B), // I
		)
	)

	engine.register_primitive(
		new X_LUT6("\gray_inst/Mxor_out<3>_xo<0>1",
		//Module parameters:
		0xff00ff00ff00ff0, // 
		"SLICE_X4Y2", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX_OUT__3__OBUF__126_A0_B), // O
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR0
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR1
		engine.get_net(NET_INDEX__BGRAY__INST_SCOUNT_A3_B), // ADR2
		engine.get_net(NET_INDEX__BGRAY__INST_SCOUNT_A4_B), // ADR3
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR4
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR5
		)
	)

	engine.register_primitive(
		new X_LUT5("\gray_inst/Mxor_out<2>_xo<0>1",
		//Module parameters:
		0x3c3c3c3c, // 
		"SLICE_X4Y2", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX_OUT__2__OBUF__84_A0_B), // O
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR0
		engine.get_net(NET_INDEX__BGRAY__INST_SCOUNT_A2_B), // ADR1
		engine.get_net(NET_INDEX__BGRAY__INST_SCOUNT_A3_B), // ADR2
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR3
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR4
		)
	)

	engine.register_primitive(
		new X_BUF("\out_6_OBUF/out_6_OBUF_BMUX_Delay",
		//Module parameters:
		"UNPLACED", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX_OUT__5__OBUF__0_A0_B), // O
		engine.get_net(NET_INDEX_OUT__5__OBUF__90_A0_B), // I
		)
	)

	engine.register_primitive(
		new X_LUT6("\gray_inst/Mxor_out<6>_xo<0>1",
		//Module parameters:
		0x3c3c3c3c3c3c3c3c, // 
		"SLICE_X4Y3", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX_OUT__6__OBUF__115_A0_B), // O
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR0
		engine.get_net(NET_INDEX__BGRAY__INST_SCOUNT_A7_B), // ADR1
		engine.get_net(NET_INDEX__BGRAY__INST_SCOUNT_A6_B), // ADR2
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR3
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR4
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR5
		)
	)

	engine.register_primitive(
		new X_LUT5("\gray_inst/Mxor_out<5>_xo<0>1",
		//Module parameters:
		0xff00ff0, // 
		"SLICE_X4Y3", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX_OUT__5__OBUF__90_A0_B), // O
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR0
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR1
		engine.get_net(NET_INDEX__BGRAY__INST_SCOUNT_A6_B), // ADR2
		engine.get_net(NET_INDEX__BGRAY__INST_SCOUNT_A5_B), // ADR3
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR4
		)
	)

	engine.register_primitive(
		new X_LUT6("\gray_inst/Mxor_out<4>_xo<0>1",
		//Module parameters:
		0xffffffff0000, // 
		"SLICE_X4Y3", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX_OUT__4__OBUF__135_A0_B), // O
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR0
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR1
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR2
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR3
		engine.get_net(NET_INDEX__BGRAY__INST_SCOUNT_A5_B), // ADR4
		engine.get_net(NET_INDEX__BGRAY__INST_SCOUNT_A4_B), // ADR5
		)
	)

	engine.register_primitive(
		new X_BUF("\out_1_OBUF/out_1_OBUF_DMUX_Delay",
		//Module parameters:
		"UNPLACED", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX_OUT__0__OBUF__0_A0_B), // O
		engine.get_net(NET_INDEX_OUT__0__OBUF__99_A0_B), // I
		)
	)

	engine.register_primitive(
		new X_LUT6("\gray_inst/Mxor_out<1>_xo<0>1",
		//Module parameters:
		0x3333cccc3333cccc, // 
		"SLICE_X7Y2", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX_OUT__1__OBUF__121_A0_B), // O
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR0
		engine.get_net(NET_INDEX__BGRAY__INST_SCOUNT_A1_B), // ADR1
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR2
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR3
		engine.get_net(NET_INDEX__BGRAY__INST_SCOUNT_A2_B), // ADR4
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR5
		)
	)

	engine.register_primitive(
		new X_LUT5("\gray_inst/Mxor_out<0>_xo<0>1",
		//Module parameters:
		0x3c3c3c3c, // 
		"SLICE_X7Y2", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX_OUT__0__OBUF__99_A0_B), // O
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR0
		engine.get_net(NET_INDEX__BGRAY__INST_SCOUNT_A1_B), // ADR1
		engine.get_net(NET_INDEX__BGRAY__INST_SCOUNT_A0_B), // ADR2
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR3
		engine.get_net(NET_INDEX_CONST__ONE_A0_B), // ADR4
		)
	)

	engine.register_primitive(
		new X_BUF("\NlwBufferBlock_gray_inst/count_3/CLK",
		//Module parameters:
		"UNPLACED", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX__BNLWBUFFERSIGNAL__GRAY__INST_SCOUNT__3_SCLK_A0_B), // O
		engine.get_net(NET_INDEX_CLK__BUFGP_A0_B), // I
		)
	)

	engine.register_primitive(
		new X_BUF("\NlwBufferBlock_gray_inst/count_2/CLK",
		//Module parameters:
		"UNPLACED", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX__BNLWBUFFERSIGNAL__GRAY__INST_SCOUNT__2_SCLK_A0_B), // O
		engine.get_net(NET_INDEX_CLK__BUFGP_A0_B), // I
		)
	)

	engine.register_primitive(
		new X_BUF("\NlwBufferBlock_gray_inst/count_1/CLK",
		//Module parameters:
		"UNPLACED", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX__BNLWBUFFERSIGNAL__GRAY__INST_SCOUNT__1_SCLK_A0_B), // O
		engine.get_net(NET_INDEX_CLK__BUFGP_A0_B), // I
		)
	)

	engine.register_primitive(
		new X_BUF("\NlwBufferBlock_gray_inst/count_0/CLK",
		//Module parameters:
		"UNPLACED", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX__BNLWBUFFERSIGNAL__GRAY__INST_SCOUNT__0_SCLK_A0_B), // O
		engine.get_net(NET_INDEX_CLK__BUFGP_A0_B), // I
		)
	)

	engine.register_primitive(
		new X_BUF("\NlwBufferBlock_gray_inst/count_7/CLK",
		//Module parameters:
		"UNPLACED", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX__BNLWBUFFERSIGNAL__GRAY__INST_SCOUNT__7_SCLK_A0_B), // O
		engine.get_net(NET_INDEX_CLK__BUFGP_A0_B), // I
		)
	)

	engine.register_primitive(
		new X_BUF("\NlwBufferBlock_gray_inst/count_6/CLK",
		//Module parameters:
		"UNPLACED", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX__BNLWBUFFERSIGNAL__GRAY__INST_SCOUNT__6_SCLK_A0_B), // O
		engine.get_net(NET_INDEX_CLK__BUFGP_A0_B), // I
		)
	)

	engine.register_primitive(
		new X_BUF("\NlwBufferBlock_gray_inst/count_5/CLK",
		//Module parameters:
		"UNPLACED", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX__BNLWBUFFERSIGNAL__GRAY__INST_SCOUNT__5_SCLK_A0_B), // O
		engine.get_net(NET_INDEX_CLK__BUFGP_A0_B), // I
		)
	)

	engine.register_primitive(
		new X_BUF("\NlwBufferBlock_gray_inst/count_4/CLK",
		//Module parameters:
		"UNPLACED", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX__BNLWBUFFERSIGNAL__GRAY__INST_SCOUNT__4_SCLK_A0_B), // O
		engine.get_net(NET_INDEX_CLK__BUFGP_A0_B), // I
		)
	)

	engine.register_primitive(
		new X_BUF("\NlwBufferBlock_q_OBUF/I",
		//Module parameters:
		"UNPLACED", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX__BNLWBUFFERSIGNAL__Q__OBUF_SI_A0_B), // O
		engine.get_net(NET_INDEX__BCNTR__INST_SCNTR__133_A0_B), // I
		)
	)

	engine.register_primitive(
		new X_BUF("\NlwBufferBlock_out_0_OBUF/I",
		//Module parameters:
		"UNPLACED", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX__BNLWBUFFERSIGNAL__OUT__0__OBUF_SI_A0_B), // O
		engine.get_net(NET_INDEX_OUT__0__OBUF__0_A0_B), // I
		)
	)

	engine.register_primitive(
		new X_BUF("\NlwBufferBlock_out_1_OBUF/I",
		//Module parameters:
		"UNPLACED", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX__BNLWBUFFERSIGNAL__OUT__1__OBUF_SI_A0_B), // O
		engine.get_net(NET_INDEX_OUT__1__OBUF__121_A0_B), // I
		)
	)

	engine.register_primitive(
		new X_BUF("\NlwBufferBlock_out_2_OBUF/I",
		//Module parameters:
		"UNPLACED", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX__BNLWBUFFERSIGNAL__OUT__2__OBUF_SI_A0_B), // O
		engine.get_net(NET_INDEX_OUT__2__OBUF__0_A0_B), // I
		)
	)

	engine.register_primitive(
		new X_BUF("\NlwBufferBlock_out_3_OBUF/I",
		//Module parameters:
		"UNPLACED", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX__BNLWBUFFERSIGNAL__OUT__3__OBUF_SI_A0_B), // O
		engine.get_net(NET_INDEX_OUT__3__OBUF__126_A0_B), // I
		)
	)

	engine.register_primitive(
		new X_BUF("\NlwBufferBlock_out_4_OBUF/I",
		//Module parameters:
		"UNPLACED", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX__BNLWBUFFERSIGNAL__OUT__4__OBUF_SI_A0_B), // O
		engine.get_net(NET_INDEX_OUT__4__OBUF__135_A0_B), // I
		)
	)

	engine.register_primitive(
		new X_BUF("\NlwBufferBlock_out_5_OBUF/I",
		//Module parameters:
		"UNPLACED", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX__BNLWBUFFERSIGNAL__OUT__5__OBUF_SI_A0_B), // O
		engine.get_net(NET_INDEX_OUT__5__OBUF__0_A0_B), // I
		)
	)

	engine.register_primitive(
		new X_BUF("\NlwBufferBlock_out_6_OBUF/I",
		//Module parameters:
		"UNPLACED", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX__BNLWBUFFERSIGNAL__OUT__6__OBUF_SI_A0_B), // O
		engine.get_net(NET_INDEX_OUT__6__OBUF__115_A0_B), // I
		)
	)

	engine.register_primitive(
		new X_BUF("\NlwBufferBlock_out_7_OBUF/I",
		//Module parameters:
		"UNPLACED", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX__BNLWBUFFERSIGNAL__OUT__7__OBUF_SI_A0_B), // O
		engine.get_net(NET_INDEX__BGRAY__INST_SCOUNT_A7_B), // I
		)
	)

	engine.register_primitive(
		new X_BUF("\NlwBufferBlock_clk_BUFGP/BUFG/IN",
		//Module parameters:
		"UNPLACED", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX__BNLWBUFFERSIGNAL__CLK__BUFGP_SBUFG_SIN_A0_B), // O
		engine.get_net(NET_INDEX__BCLK__BUFGP_SIBUFG__0_A0_B), // I
		)
	)

	engine.register_primitive(
		new X_BUF("\NlwBufferBlock_cntr_inst/cntr/CLK",
		//Module parameters:
		"UNPLACED", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX__BNLWBUFFERSIGNAL__CNTR__INST_SCNTR_SCLK_A0_B), // O
		engine.get_net(NET_INDEX_CLK__BUFGP_A0_B), // I
		)
	)

	engine.register_primitive(
		new X_ZERO("NlwBlock_dut_top_GND",
		//Module parameters:
		"UNPLACED", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX_GND_A0_B), // O
		)
	)

	engine.register_primitive(
		new X_ONE("NlwBlock_dut_top_VCC",
		//Module parameters:
		"UNPLACED", // 
		
		//Module port assignments:
		engine.get_net(NET_INDEX_VCC_A0_B), // O
		)
	)


}
