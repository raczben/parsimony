/******************************************************************************
 * Net instancer.
 * This file instantiate all nets in the simulation.
 * This file was generated by a verilog parser.
 ******************************************************************************/

 
#include <stdio.h>
#include "NetFlow.h"
#include "netinstatiation.h"
#include "SimulatorEngine.h"

void instance_nets(SimulatorEngine* engine){

	engine->register_net(new NetFlow("\\NlwBufferSignal_gray_inst/count_0/CLK[0]"));
	engine->register_net(new NetFlow("\\gray_inst/count<1>_rt_18[0]"));
	engine->register_net(new NetFlow("\\NLW_N0.C5LUT_O_UNCONNECTED[0]"));
	engine->register_net(new NetFlow("\\gray_inst/count<2>_rt_14[0]"));
	engine->register_net(new NetFlow("out_3_OBUF_133[0]"));
	engine->register_net(new NetFlow("clk_BUFGP[0]"));
	engine->register_net(new NetFlow("\\gray_inst/Mcount_count_lut[0]"));
	engine->register_net(new NetFlow("\\cntr_inst/cntr_141[0]"));
	engine->register_net(new NetFlow("\\NLW_N0_5.C5LUT_O_UNCONNECTED[0]"));
	engine->register_net(new NetFlow("\\NlwBufferSignal_gray_inst/count_1/CLK[0]"));
	engine->register_net(new NetFlow("\\NlwBufferSignal_out_1_OBUF/I[0]"));
	engine->register_net(new NetFlow("\\NlwBufferSignal_out_2_OBUF/I[0]"));
	engine->register_net(new NetFlow("out_2_OBUF_94[0]"));
	engine->register_net(new NetFlow("\\NLW_N0_3.A5LUT_O_UNCONNECTED[0]"));
	engine->register_net(new NetFlow("\\ProtoComp1.CYINITGND.0[0]"));
	engine->register_net(new NetFlow("rst_IBUF_76[0]"));
	engine->register_net(new NetFlow("enable[0]"));
	engine->register_net(new NetFlow("\\NlwBufferSignal_out_5_OBUF/I[0]"));
	engine->register_net(new NetFlow("out_0_OBUF_99[0]"));
	engine->register_net(new NetFlow("enable_IBUF_0[0]"));
	engine->register_net(new NetFlow("\\NlwBufferSignal_out_3_OBUF/I[0]"));
	engine->register_net(new NetFlow("\\NlwBufferSignal_out_7_OBUF/I[0]"));
	engine->register_net(new NetFlow("\\NlwBufferSignal_out_0_OBUF/I[0]"));
	engine->register_net(new NetFlow("\\NlwBufferSignal_out_4_OBUF/I[0]"));
	engine->register_net(new NetFlow("\\NlwBufferSignal_out_6_OBUF/I[0]"));
	engine->register_net(new NetFlow("\\NLW_gray_inst/Mcount_count_xor<7>_CO[1]_UNCONNECTED[0]"));
	engine->register_net(new NetFlow("clk[0]"));
	engine->register_net(new NetFlow("\\NlwBufferSignal_gray_inst/count_7/CLK[0]"));
	engine->register_net(new NetFlow("out_6_OBUF_122[0]"));
	engine->register_net(new NetFlow("\\NLW_gray_inst/Mcount_count_xor<7>_CO[0]_UNCONNECTED[0]"));
	engine->register_net(new NetFlow("out_5_OBUF_0[0]"));
	engine->register_net(new NetFlow("CONST_ONE[0]"));
	engine->register_net(new NetFlow("\\NlwBufferSignal_gray_inst/count_6/CLK[0]"));
	engine->register_net(new NetFlow("\\NLW_gray_inst/Mcount_count_xor<7>_DI[3]_UNCONNECTED[0]"));
	engine->register_net(new NetFlow("out_4_OBUF_143[0]"));
	engine->register_net(new NetFlow("\\NLW_gray_inst/Mcount_count_cy<3>_CO[1]_UNCONNECTED[0]"));
	engine->register_net(new NetFlow("VCC[0]"));
	engine->register_net(new NetFlow("\\NLW_gray_inst/Mcount_count_cy<3>_CO[0]_UNCONNECTED[0]"));
	engine->register_net(new NetFlow("out_1_OBUF_128[0]"));
	engine->register_net(new NetFlow("GND[0]"));
	engine->register_net(new NetFlow("\\NLW_gray_inst/Mcount_count_xor<7>_CO[2]_UNCONNECTED[0]"));
	engine->register_net(new NetFlow("\\NLW_gray_inst/Mcount_count_xor<7>_CO[3]_UNCONNECTED[0]"));
	engine->register_net(new NetFlow("enable_IBUF_61[0]"));
	engine->register_net(new NetFlow("rst_IBUF_0[0]"));
	engine->register_net(new NetFlow("\\NLW_N0_6.B5LUT_O_UNCONNECTED[0]"));
	engine->register_net(new NetFlow("\\NlwBufferSignal_gray_inst/count_5/CLK[0]"));
	engine->register_net(new NetFlow("\\gray_inst/count[0]"));
	engine->register_net(new NetFlow("\\gray_inst/count[1]"));
	engine->register_net(new NetFlow("\\gray_inst/count[2]"));
	engine->register_net(new NetFlow("\\gray_inst/count[3]"));
	engine->register_net(new NetFlow("\\gray_inst/count[4]"));
	engine->register_net(new NetFlow("\\gray_inst/count[5]"));
	engine->register_net(new NetFlow("\\gray_inst/count[6]"));
	engine->register_net(new NetFlow("\\gray_inst/count[7]"));
	engine->register_net(new NetFlow("\\gray_inst/Result[0]"));
	engine->register_net(new NetFlow("\\gray_inst/Result[1]"));
	engine->register_net(new NetFlow("\\gray_inst/Result[2]"));
	engine->register_net(new NetFlow("\\gray_inst/Result[3]"));
	engine->register_net(new NetFlow("\\gray_inst/Result[4]"));
	engine->register_net(new NetFlow("\\gray_inst/Result[5]"));
	engine->register_net(new NetFlow("\\gray_inst/Result[6]"));
	engine->register_net(new NetFlow("\\gray_inst/Result[7]"));
	engine->register_net(new NetFlow("\\gray_inst/count<6>_rt_41[0]"));
	engine->register_net(new NetFlow("\\NLW_gray_inst/Mcount_count_cy<3>_CO[2]_UNCONNECTED[0]"));
	engine->register_net(new NetFlow("out[0]"));
	engine->register_net(new NetFlow("out[1]"));
	engine->register_net(new NetFlow("out[2]"));
	engine->register_net(new NetFlow("out[3]"));
	engine->register_net(new NetFlow("out[4]"));
	engine->register_net(new NetFlow("out[5]"));
	engine->register_net(new NetFlow("out[6]"));
	engine->register_net(new NetFlow("out[7]"));
	engine->register_net(new NetFlow("\\cntr_inst/cntr_INV_1_o[0]"));
	engine->register_net(new NetFlow("\\gray_inst/count<5>_rt_45[0]"));
	engine->register_net(new NetFlow("\\clk_BUFGP/IBUFG_58[0]"));
	engine->register_net(new NetFlow("rst[0]"));
	engine->register_net(new NetFlow("\\NlwBufferSignal_gray_inst/count_4/CLK[0]"));
	engine->register_net(new NetFlow("out_5_OBUF_88[0]"));
	engine->register_net(new NetFlow("\\NLW_N1.A5LUT_O_UNCONNECTED[0]"));
	engine->register_net(new NetFlow("\\NLW_N0_2.B5LUT_O_UNCONNECTED[0]"));
	engine->register_net(new NetFlow("\\NlwBufferSignal_gray_inst/count_2/CLK[0]"));
	engine->register_net(new NetFlow("\\clk_BUFGP/IBUFG_0[0]"));
	engine->register_net(new NetFlow("\\gray_inst/count<7>_rt_31[0]"));
	engine->register_net(new NetFlow("\\NlwBufferSignal_q_OBUF/I[0]"));
	engine->register_net(new NetFlow("out_0_OBUF_0[0]"));
	engine->register_net(new NetFlow("\\gray_inst/count<4>_rt_49[0]"));
	engine->register_net(new NetFlow("\\NLW_N0_4.D5LUT_O_UNCONNECTED[0]"));
	engine->register_net(new NetFlow("out_2_OBUF_0[0]"));
	engine->register_net(new NetFlow("q[0]"));
	engine->register_net(new NetFlow("\\NlwBufferSignal_cntr_inst/cntr/CLK[0]"));
	engine->register_net(new NetFlow("\\gray_inst/count<3>_rt_2[0]"));
	engine->register_net(new NetFlow("CONST_ZERO[0]"));
	engine->register_net(new NetFlow("\\NlwBufferSignal_gray_inst/count_3/CLK[0]"));
	engine->register_net(new NetFlow("\\NlwBufferSignal_clk_BUFGP/BUFG/IN[0]"));
	engine->register_net(new NetFlow("\\gray_inst/Mcount_count_cy[3]"));

}

