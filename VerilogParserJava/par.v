////////////////////////////////////////////////////////////////////////////////
// Copyright (c) 1995-2013 Xilinx, Inc.  All rights reserved.
////////////////////////////////////////////////////////////////////////////////
//   ____  ____
//  /   /\/   /
// /___/  \  /    Vendor: Xilinx
// \   \   \/     Version: P.20131013
//  \   \         Application: netgen
//  /   /         Filename: dut_top_timesim.v
// /___/   /\     Timestamp: Wed Mar 23 14:44:15 2016
// \   \  /  \ 
//  \___\/\___\
//             
// Command	: -intstyle ise -s 3 -pcf dut_top.pcf -sdf_anno true -sdf_path netgen/par -insert_glbl true -insert_pp_buffers true -w -dir netgen/par -ofmt verilog -sim dut_top.ncd dut_top_timesim.v 
// Device	: 6slx9tqg144-3 (PRODUCTION 1.23 2013-10-13)
// Input file	: dut_top.ncd
// Output file	: /home/ebenera/bme/onlab2/iseproj/post_fit_test/netgen/par/dut_top_timesim.v
// # of Modules	: 1
// Design Name	: dut_top
// Xilinx        : /afs/sunrise.ericsson.se/se/app/vbuild/RHEL5-x86_64/xilinx/14.7/14.7/ISE_DS/ISE/
//             
// Purpose:    
//     This verilog netlist is a verification model and uses simulation 
//     primitives which may not represent the true implementation of the 
//     device, however the netlist is functionally correct and should not 
//     be modified. This file cannot be synthesized and should only be used 
//     with supported simulation tools.
//             
// Reference:  
//     Command Line Tools User Guide, Chapter 23 and Synthesis and Simulation Design Guide, Chapter 6
//             
////////////////////////////////////////////////////////////////////////////////

//`timescale 1 ns/1 ps

module dut_top (
  enable, clk, rst, q, out
);
  input enable;
  input clk;
  input rst;
  output q;
  output [7 : 0] out;
  wire out_6_OBUF_115;
  wire out_5_OBUF_0;
  wire out_1_OBUF_121;
  wire out_0_OBUF_0;
  wire out_3_OBUF_126;
  wire out_2_OBUF_0;
  wire enable_IBUF_0;
  wire clk_BUFGP;
  wire \cntr_inst/cntr_133 ;
  wire \clk_BUFGP/IBUFG_0 ;
  wire out_4_OBUF_135;
  wire \gray_inst/count<1>_rt_17 ;
  wire \gray_inst/count<2>_rt_13 ;
  wire \ProtoComp1.CYINITGND.0 ;
  wire \gray_inst/count<3>_rt_1 ;
  wire \gray_inst/count<4>_rt_47 ;
  wire \gray_inst/count<5>_rt_43 ;
  wire \gray_inst/count<6>_rt_39 ;
  wire \gray_inst/count<7>_rt_29 ;
  wire \clk_BUFGP/IBUFG_56 ;
  wire enable_IBUF_59;
  wire out_2_OBUF_84;
  wire out_5_OBUF_90;
  wire out_0_OBUF_99;
  wire \NlwBufferSignal_gray_inst/count_3/CLK ;
  wire \NlwBufferSignal_gray_inst/count_2/CLK ;
  wire \NlwBufferSignal_gray_inst/count_1/CLK ;
  wire \NlwBufferSignal_gray_inst/count_0/CLK ;
  wire \NlwBufferSignal_gray_inst/count_7/CLK ;
  wire \NlwBufferSignal_gray_inst/count_6/CLK ;
  wire \NlwBufferSignal_gray_inst/count_5/CLK ;
  wire \NlwBufferSignal_gray_inst/count_4/CLK ;
  wire \NlwBufferSignal_q_OBUF/I ;
  wire \NlwBufferSignal_out_0_OBUF/I ;
  wire \NlwBufferSignal_out_1_OBUF/I ;
  wire \NlwBufferSignal_out_2_OBUF/I ;
  wire \NlwBufferSignal_out_3_OBUF/I ;
  wire \NlwBufferSignal_out_4_OBUF/I ;
  wire \NlwBufferSignal_out_5_OBUF/I ;
  wire \NlwBufferSignal_out_6_OBUF/I ;
  wire \NlwBufferSignal_out_7_OBUF/I ;
  wire \NlwBufferSignal_clk_BUFGP/BUFG/IN ;
  wire \NlwBufferSignal_cntr_inst/cntr/CLK ;
  wire GND;
  wire \NLW_reset_4.D5LUT_O_UNCONNECTED ;
  wire \NLW_gray_inst/Mcount_count_cy<3>_CO[0]_UNCONNECTED ;
  wire \NLW_gray_inst/Mcount_count_cy<3>_CO[1]_UNCONNECTED ;
  wire \NLW_gray_inst/Mcount_count_cy<3>_CO[2]_UNCONNECTED ;
  wire \NLW_reset_5.C5LUT_O_UNCONNECTED ;
  wire \NLW_reset_6.B5LUT_O_UNCONNECTED ;
  wire \NLW_N0_2.A5LUT_O_UNCONNECTED ;
  wire \NLW_gray_inst/Mcount_count_xor<7>_CO[0]_UNCONNECTED ;
  wire \NLW_gray_inst/Mcount_count_xor<7>_CO[1]_UNCONNECTED ;
  wire \NLW_gray_inst/Mcount_count_xor<7>_CO[2]_UNCONNECTED ;
  wire \NLW_gray_inst/Mcount_count_xor<7>_CO[3]_UNCONNECTED ;
  wire \NLW_gray_inst/Mcount_count_xor<7>_DI[3]_UNCONNECTED ;
  wire \NLW_reset.C5LUT_O_UNCONNECTED ;
  wire \NLW_reset_2.B5LUT_O_UNCONNECTED ;
  wire \NLW_reset_3.A5LUT_O_UNCONNECTED ;
  wire VCC;
  wire [7 : 0] \gray_inst/count ;
  wire [3 : 3] \gray_inst/Mcount_count_cy ;
  wire [0 : 0] \gray_inst/Mcount_count_lut ;
  wire [7 : 0] \gray_inst/Result ;
  initial $sdf_annotate("netgen/par/dut_top_timesim.sdf");
  X_FF #(
    .LOC ( "SLICE_X6Y2" ),
    .INIT ( 1'b0 ))
  \gray_inst/count_3  (
    .CE(enable_IBUF_0),
    .CLK(\NlwBufferSignal_gray_inst/count_3/CLK ),
    .I(\gray_inst/Result [3]),
    .O(\gray_inst/count [3]),
    .RST(GND),
    .SET(GND)
  );
  X_LUT6 #(
    .LOC ( "SLICE_X6Y2" ),
    .INIT ( 64'hFFFF0000FFFF0000 ))
  \gray_inst/count<3>_rt  (
    .ADR0(1'b1),
    .ADR1(1'b1),
    .ADR2(1'b1),
    .ADR4(\gray_inst/count [3]),
    .ADR3(1'b1),
    .ADR5(1'b1),
    .O(\gray_inst/count<3>_rt_1 )
  );
  X_LUT5 #(
    .LOC ( "SLICE_X6Y2" ),
    .INIT ( 32'h00000000 ))
  \reset_4.D5LUT  (
    .ADR0(1'b1),
    .ADR1(1'b1),
    .ADR2(1'b1),
    .ADR3(1'b1),
    .ADR4(1'b1),
    .O(\NLW_reset_4.D5LUT_O_UNCONNECTED )
  );
  X_ZERO #(
    .LOC ( "SLICE_X6Y2" ))
  \ProtoComp1.CYINITGND  (
    .O(\ProtoComp1.CYINITGND.0 )
  );
  X_FF #(
    .LOC ( "SLICE_X6Y2" ),
    .INIT ( 1'b0 ))
  \gray_inst/count_2  (
    .CE(enable_IBUF_0),
    .CLK(\NlwBufferSignal_gray_inst/count_2/CLK ),
    .I(\gray_inst/Result [2]),
    .O(\gray_inst/count [2]),
    .RST(GND),
    .SET(GND)
  );
  X_CARRY4 #(
    .LOC ( "SLICE_X6Y2" ))
  \gray_inst/Mcount_count_cy<3>  (
    .CI(1'b0),
    .CYINIT(\ProtoComp1.CYINITGND.0 ),
    .CO({\gray_inst/Mcount_count_cy [3], \NLW_gray_inst/Mcount_count_cy<3>_CO[2]_UNCONNECTED , \NLW_gray_inst/Mcount_count_cy<3>_CO[1]_UNCONNECTED , 
\NLW_gray_inst/Mcount_count_cy<3>_CO[0]_UNCONNECTED }),
    .DI({1'b0, 1'b0, 1'b0, 1'b1}),
    .O({\gray_inst/Result [3], \gray_inst/Result [2], \gray_inst/Result [1], \gray_inst/Result [0]}),
    .S({\gray_inst/count<3>_rt_1 , \gray_inst/count<2>_rt_13 , \gray_inst/count<1>_rt_17 , \gray_inst/Mcount_count_lut [0]})
  );
  X_LUT6 #(
    .LOC ( "SLICE_X6Y2" ),
    .INIT ( 64'hFFFF0000FFFF0000 ))
  \gray_inst/count<2>_rt  (
    .ADR0(1'b1),
    .ADR1(1'b1),
    .ADR2(1'b1),
    .ADR4(\gray_inst/count [2]),
    .ADR3(1'b1),
    .ADR5(1'b1),
    .O(\gray_inst/count<2>_rt_13 )
  );
  X_LUT5 #(
    .LOC ( "SLICE_X6Y2" ),
    .INIT ( 32'h00000000 ))
  \reset_5.C5LUT  (
    .ADR0(1'b1),
    .ADR1(1'b1),
    .ADR2(1'b1),
    .ADR3(1'b1),
    .ADR4(1'b1),
    .O(\NLW_reset_5.C5LUT_O_UNCONNECTED )
  );
  X_FF #(
    .LOC ( "SLICE_X6Y2" ),
    .INIT ( 1'b0 ))
  \gray_inst/count_1  (
    .CE(enable_IBUF_0),
    .CLK(\NlwBufferSignal_gray_inst/count_1/CLK ),
    .I(\gray_inst/Result [1]),
    .O(\gray_inst/count [1]),
    .RST(GND),
    .SET(GND)
  );
  X_LUT6 #(
    .LOC ( "SLICE_X6Y2" ),
    .INIT ( 64'hFFFF0000FFFF0000 ))
  \gray_inst/count<1>_rt  (
    .ADR0(1'b1),
    .ADR1(1'b1),
    .ADR2(1'b1),
    .ADR4(\gray_inst/count [1]),
    .ADR3(1'b1),
    .ADR5(1'b1),
    .O(\gray_inst/count<1>_rt_17 )
  );
  X_LUT5 #(
    .LOC ( "SLICE_X6Y2" ),
    .INIT ( 32'h00000000 ))
  \reset_6.B5LUT  (
    .ADR0(1'b1),
    .ADR1(1'b1),
    .ADR2(1'b1),
    .ADR3(1'b1),
    .ADR4(1'b1),
    .O(\NLW_reset_6.B5LUT_O_UNCONNECTED )
  );
  X_FF #(
    .LOC ( "SLICE_X6Y2" ),
    .INIT ( 1'b0 ))
  \gray_inst/count_0  (
    .CE(enable_IBUF_0),
    .CLK(\NlwBufferSignal_gray_inst/count_0/CLK ),
    .I(\gray_inst/Result [0]),
    .O(\gray_inst/count [0]),
    .RST(GND),
    .SET(GND)
  );
  X_LUT6 #(
    .LOC ( "SLICE_X6Y2" ),
    .INIT ( 64'h0000FFFF0000FFFF ))
  \gray_inst/Mcount_count_lut<0>_INV_0  (
    .ADR0(1'b1),
    .ADR1(1'b1),
    .ADR2(1'b1),
    .ADR4(\gray_inst/count [0]),
    .ADR3(1'b1),
    .ADR5(1'b1),
    .O(\gray_inst/Mcount_count_lut [0])
  );
  X_LUT5 #(
    .LOC ( "SLICE_X6Y2" ),
    .INIT ( 32'hFFFFFFFF ))
  \N0_2.A5LUT  (
    .ADR0(1'b1),
    .ADR1(1'b1),
    .ADR2(1'b1),
    .ADR3(1'b1),
    .ADR4(1'b1),
    .O(\NLW_N0_2.A5LUT_O_UNCONNECTED )
  );
  X_FF #(
    .LOC ( "SLICE_X6Y3" ),
    .INIT ( 1'b0 ))
  \gray_inst/count_7  (
    .CE(enable_IBUF_0),
    .CLK(\NlwBufferSignal_gray_inst/count_7/CLK ),
    .I(\gray_inst/Result [7]),
    .O(\gray_inst/count [7]),
    .RST(GND),
    .SET(GND)
  );
  X_LUT6 #(
    .LOC ( "SLICE_X6Y3" ),
    .INIT ( 64'hFFFFFFFF00000000 ))
  \gray_inst/count<7>_rt  (
    .ADR0(1'b1),
    .ADR1(1'b1),
    .ADR2(1'b1),
    .ADR5(\gray_inst/count [7]),
    .ADR4(1'b1),
    .ADR3(1'b1),
    .O(\gray_inst/count<7>_rt_29 )
  );
  X_FF #(
    .LOC ( "SLICE_X6Y3" ),
    .INIT ( 1'b0 ))
  \gray_inst/count_6  (
    .CE(enable_IBUF_0),
    .CLK(\NlwBufferSignal_gray_inst/count_6/CLK ),
    .I(\gray_inst/Result [6]),
    .O(\gray_inst/count [6]),
    .RST(GND),
    .SET(GND)
  );
  X_CARRY4 #(
    .LOC ( "SLICE_X6Y3" ))
  \gray_inst/Mcount_count_xor<7>  (
    .CI(\gray_inst/Mcount_count_cy [3]),
    .CYINIT(1'b0),
    .CO({\NLW_gray_inst/Mcount_count_xor<7>_CO[3]_UNCONNECTED , \NLW_gray_inst/Mcount_count_xor<7>_CO[2]_UNCONNECTED , 
\NLW_gray_inst/Mcount_count_xor<7>_CO[1]_UNCONNECTED , \NLW_gray_inst/Mcount_count_xor<7>_CO[0]_UNCONNECTED }),
    .DI({\NLW_gray_inst/Mcount_count_xor<7>_DI[3]_UNCONNECTED , 1'b0, 1'b0, 1'b0}),
    .O({\gray_inst/Result [7], \gray_inst/Result [6], \gray_inst/Result [5], \gray_inst/Result [4]}),
    .S({\gray_inst/count<7>_rt_29 , \gray_inst/count<6>_rt_39 , \gray_inst/count<5>_rt_43 , \gray_inst/count<4>_rt_47 })
  );
  X_LUT6 #(
    .LOC ( "SLICE_X6Y3" ),
    .INIT ( 64'hFFFF0000FFFF0000 ))
  \gray_inst/count<6>_rt  (
    .ADR0(1'b1),
    .ADR1(1'b1),
    .ADR2(1'b1),
    .ADR4(\gray_inst/count [6]),
    .ADR3(1'b1),
    .ADR5(1'b1),
    .O(\gray_inst/count<6>_rt_39 )
  );
  X_LUT5 #(
    .LOC ( "SLICE_X6Y3" ),
    .INIT ( 32'h00000000 ))
  \reset.C5LUT  (
    .ADR0(1'b1),
    .ADR1(1'b1),
    .ADR2(1'b1),
    .ADR3(1'b1),
    .ADR4(1'b1),
    .O(\NLW_reset.C5LUT_O_UNCONNECTED )
  );
  X_FF #(
    .LOC ( "SLICE_X6Y3" ),
    .INIT ( 1'b0 ))
  \gray_inst/count_5  (
    .CE(enable_IBUF_0),
    .CLK(\NlwBufferSignal_gray_inst/count_5/CLK ),
    .I(\gray_inst/Result [5]),
    .O(\gray_inst/count [5]),
    .RST(GND),
    .SET(GND)
  );
  X_LUT6 #(
    .LOC ( "SLICE_X6Y3" ),
    .INIT ( 64'hFFFF0000FFFF0000 ))
  \gray_inst/count<5>_rt  (
    .ADR0(1'b1),
    .ADR1(1'b1),
    .ADR2(1'b1),
    .ADR4(\gray_inst/count [5]),
    .ADR3(1'b1),
    .ADR5(1'b1),
    .O(\gray_inst/count<5>_rt_43 )
  );
  X_LUT5 #(
    .LOC ( "SLICE_X6Y3" ),
    .INIT ( 32'h00000000 ))
  \reset_2.B5LUT  (
    .ADR0(1'b1),
    .ADR1(1'b1),
    .ADR2(1'b1),
    .ADR3(1'b1),
    .ADR4(1'b1),
    .O(\NLW_reset_2.B5LUT_O_UNCONNECTED )
  );
  X_FF #(
    .LOC ( "SLICE_X6Y3" ),
    .INIT ( 1'b0 ))
  \gray_inst/count_4  (
    .CE(enable_IBUF_0),
    .CLK(\NlwBufferSignal_gray_inst/count_4/CLK ),
    .I(\gray_inst/Result [4]),
    .O(\gray_inst/count [4]),
    .RST(GND),
    .SET(GND)
  );
  X_LUT6 #(
    .LOC ( "SLICE_X6Y3" ),
    .INIT ( 64'hFFFF0000FFFF0000 ))
  \gray_inst/count<4>_rt  (
    .ADR0(1'b1),
    .ADR1(1'b1),
    .ADR2(1'b1),
    .ADR4(\gray_inst/count [4]),
    .ADR3(1'b1),
    .ADR5(1'b1),
    .O(\gray_inst/count<4>_rt_47 )
  );
  X_LUT5 #(
    .LOC ( "SLICE_X6Y3" ),
    .INIT ( 32'h00000000 ))
  \reset_3.A5LUT  (
    .ADR0(1'b1),
    .ADR1(1'b1),
    .ADR2(1'b1),
    .ADR3(1'b1),
    .ADR4(1'b1),
    .O(\NLW_reset_3.A5LUT_O_UNCONNECTED )
  );
  X_OPAD #(
    .LOC ( "PAD143" ))
  q_31 (
    .PAD(q)
  );
  X_OBUF #(
    .LOC ( "PAD143" ))
  q_OBUF (
    .I(\NlwBufferSignal_q_OBUF/I ),
    .O(q)
  );
  X_IPAD #(
    .LOC ( "PAD172" ))
  clk_35 (
    .PAD(clk)
  );
  X_BUF #(
    .LOC ( "PAD172" ))
  \clk_BUFGP/IBUFG  (
    .O(\clk_BUFGP/IBUFG_56 ),
    .I(clk)
  );
  X_BUF #(
    .LOC ( "PAD172" ))
  \ProtoComp4.IMUX  (
    .I(\clk_BUFGP/IBUFG_56 ),
    .O(\clk_BUFGP/IBUFG_0 )
  );
  X_IPAD #(
    .LOC ( "PAD144" ))
  enable_39 (
    .PAD(enable)
  );
  X_BUF #(
    .LOC ( "PAD144" ))
  enable_IBUF (
    .O(enable_IBUF_59),
    .I(enable)
  );
  X_BUF #(
    .LOC ( "PAD144" ))
  \ProtoComp4.IMUX.1  (
    .I(enable_IBUF_59),
    .O(enable_IBUF_0)
  );
  X_OPAD #(
    .LOC ( "PAD121" ))
  \out<0>  (
    .PAD(out[0])
  );
  X_OBUF #(
    .LOC ( "PAD121" ))
  out_0_OBUF (
    .I(\NlwBufferSignal_out_0_OBUF/I ),
    .O(out[0])
  );
  X_OPAD #(
    .LOC ( "PAD122" ))
  \out<1>  (
    .PAD(out[1])
  );
  X_OBUF #(
    .LOC ( "PAD122" ))
  out_1_OBUF (
    .I(\NlwBufferSignal_out_1_OBUF/I ),
    .O(out[1])
  );
  X_OPAD #(
    .LOC ( "PAD133" ))
  \out<2>  (
    .PAD(out[2])
  );
  X_OBUF #(
    .LOC ( "PAD133" ))
  out_2_OBUF (
    .I(\NlwBufferSignal_out_2_OBUF/I ),
    .O(out[2])
  );
  X_OPAD #(
    .LOC ( "PAD134" ))
  \out<3>  (
    .PAD(out[3])
  );
  X_OBUF #(
    .LOC ( "PAD134" ))
  out_3_OBUF (
    .I(\NlwBufferSignal_out_3_OBUF/I ),
    .O(out[3])
  );
  X_OPAD #(
    .LOC ( "PAD135" ))
  \out<4>  (
    .PAD(out[4])
  );
  X_OBUF #(
    .LOC ( "PAD135" ))
  out_4_OBUF (
    .I(\NlwBufferSignal_out_4_OBUF/I ),
    .O(out[4])
  );
  X_OPAD #(
    .LOC ( "PAD136" ))
  \out<5>  (
    .PAD(out[5])
  );
  X_OBUF #(
    .LOC ( "PAD136" ))
  out_5_OBUF (
    .I(\NlwBufferSignal_out_5_OBUF/I ),
    .O(out[5])
  );
  X_OPAD #(
    .LOC ( "PAD137" ))
  \out<6>  (
    .PAD(out[6])
  );
  X_OBUF #(
    .LOC ( "PAD137" ))
  out_6_OBUF (
    .I(\NlwBufferSignal_out_6_OBUF/I ),
    .O(out[6])
  );
  X_OPAD #(
    .LOC ( "PAD138" ))
  \out<7>  (
    .PAD(out[7])
  );
  X_OBUF #(
    .LOC ( "PAD138" ))
  out_7_OBUF (
    .I(\NlwBufferSignal_out_7_OBUF/I ),
    .O(out[7])
  );
  X_CKBUF #(
    .LOC ( "BUFGMUX_X3Y13" ))
  \clk_BUFGP/BUFG  (
    .I(\NlwBufferSignal_clk_BUFGP/BUFG/IN ),
    .O(clk_BUFGP)
  );
  X_SFF #(
    .LOC ( "SLICE_X1Y2" ),
    .INIT ( 1'b0 ))
  \cntr_inst/cntr  (
    .CE(VCC),
    .CLK(\NlwBufferSignal_cntr_inst/cntr/CLK ),
    .I(1'b1),
    .O(\cntr_inst/cntr_133 ),
    .SRST(\cntr_inst/cntr_133 ),
    .SET(GND),
    .RST(GND),
    .SSET(GND)
  );
  X_BUF   \out_3_OBUF/out_3_OBUF_DMUX_Delay  (
    .I(out_2_OBUF_84),
    .O(out_2_OBUF_0)
  );
  X_LUT6 #(
    .LOC ( "SLICE_X4Y2" ),
    .INIT ( 64'h0FF00FF00FF00FF0 ))
  \gray_inst/Mxor_out<3>_xo<0>1  (
    .ADR0(1'b1),
    .ADR1(1'b1),
    .ADR4(1'b1),
    .ADR2(\gray_inst/count [3]),
    .ADR3(\gray_inst/count [4]),
    .ADR5(1'b1),
    .O(out_3_OBUF_126)
  );
  X_LUT5 #(
    .LOC ( "SLICE_X4Y2" ),
    .INIT ( 32'h3C3C3C3C ))
  \gray_inst/Mxor_out<2>_xo<0>1  (
    .ADR0(1'b1),
    .ADR3(1'b1),
    .ADR1(\gray_inst/count [2]),
    .ADR2(\gray_inst/count [3]),
    .ADR4(1'b1),
    .O(out_2_OBUF_84)
  );
  X_BUF   \out_6_OBUF/out_6_OBUF_BMUX_Delay  (
    .I(out_5_OBUF_90),
    .O(out_5_OBUF_0)
  );
  X_LUT6 #(
    .LOC ( "SLICE_X4Y3" ),
    .INIT ( 64'h3C3C3C3C3C3C3C3C ))
  \gray_inst/Mxor_out<6>_xo<0>1  (
    .ADR0(1'b1),
    .ADR4(1'b1),
    .ADR3(1'b1),
    .ADR2(\gray_inst/count [6]),
    .ADR1(\gray_inst/count [7]),
    .ADR5(1'b1),
    .O(out_6_OBUF_115)
  );
  X_LUT5 #(
    .LOC ( "SLICE_X4Y3" ),
    .INIT ( 32'h0FF00FF0 ))
  \gray_inst/Mxor_out<5>_xo<0>1  (
    .ADR0(1'b1),
    .ADR1(1'b1),
    .ADR3(\gray_inst/count [5]),
    .ADR2(\gray_inst/count [6]),
    .ADR4(1'b1),
    .O(out_5_OBUF_90)
  );
  X_LUT6 #(
    .LOC ( "SLICE_X4Y3" ),
    .INIT ( 64'h0000FFFFFFFF0000 ))
  \gray_inst/Mxor_out<4>_xo<0>1  (
    .ADR0(1'b1),
    .ADR1(1'b1),
    .ADR2(1'b1),
    .ADR3(1'b1),
    .ADR5(\gray_inst/count [4]),
    .ADR4(\gray_inst/count [5]),
    .O(out_4_OBUF_135)
  );
  X_BUF   \out_1_OBUF/out_1_OBUF_DMUX_Delay  (
    .I(out_0_OBUF_99),
    .O(out_0_OBUF_0)
  );
  X_LUT6 #(
    .LOC ( "SLICE_X7Y2" ),
    .INIT ( 64'h3333CCCC3333CCCC ))
  \gray_inst/Mxor_out<1>_xo<0>1  (
    .ADR0(1'b1),
    .ADR3(1'b1),
    .ADR2(1'b1),
    .ADR1(\gray_inst/count [1]),
    .ADR4(\gray_inst/count [2]),
    .ADR5(1'b1),
    .O(out_1_OBUF_121)
  );
  X_LUT5 #(
    .LOC ( "SLICE_X7Y2" ),
    .INIT ( 32'h3C3C3C3C ))
  \gray_inst/Mxor_out<0>_xo<0>1  (
    .ADR0(1'b1),
    .ADR3(1'b1),
    .ADR2(\gray_inst/count [0]),
    .ADR1(\gray_inst/count [1]),
    .ADR4(1'b1),
    .O(out_0_OBUF_99)
  );
  X_BUF   \NlwBufferBlock_gray_inst/count_3/CLK  (
    .I(clk_BUFGP),
    .O(\NlwBufferSignal_gray_inst/count_3/CLK )
  );
  X_BUF   \NlwBufferBlock_gray_inst/count_2/CLK  (
    .I(clk_BUFGP),
    .O(\NlwBufferSignal_gray_inst/count_2/CLK )
  );
  X_BUF   \NlwBufferBlock_gray_inst/count_1/CLK  (
    .I(clk_BUFGP),
    .O(\NlwBufferSignal_gray_inst/count_1/CLK )
  );
  X_BUF   \NlwBufferBlock_gray_inst/count_0/CLK  (
    .I(clk_BUFGP),
    .O(\NlwBufferSignal_gray_inst/count_0/CLK )
  );
  X_BUF   \NlwBufferBlock_gray_inst/count_7/CLK  (
    .I(clk_BUFGP),
    .O(\NlwBufferSignal_gray_inst/count_7/CLK )
  );
  X_BUF   \NlwBufferBlock_gray_inst/count_6/CLK  (
    .I(clk_BUFGP),
    .O(\NlwBufferSignal_gray_inst/count_6/CLK )
  );
  X_BUF   \NlwBufferBlock_gray_inst/count_5/CLK  (
    .I(clk_BUFGP),
    .O(\NlwBufferSignal_gray_inst/count_5/CLK )
  );
  X_BUF   \NlwBufferBlock_gray_inst/count_4/CLK  (
    .I(clk_BUFGP),
    .O(\NlwBufferSignal_gray_inst/count_4/CLK )
  );
  X_BUF   \NlwBufferBlock_q_OBUF/I  (
    .I(\cntr_inst/cntr_133 ),
    .O(\NlwBufferSignal_q_OBUF/I )
  );
  X_BUF   \NlwBufferBlock_out_0_OBUF/I  (
    .I(out_0_OBUF_0),
    .O(\NlwBufferSignal_out_0_OBUF/I )
  );
  X_BUF   \NlwBufferBlock_out_1_OBUF/I  (
    .I(out_1_OBUF_121),
    .O(\NlwBufferSignal_out_1_OBUF/I )
  );
  X_BUF   \NlwBufferBlock_out_2_OBUF/I  (
    .I(out_2_OBUF_0),
    .O(\NlwBufferSignal_out_2_OBUF/I )
  );
  X_BUF   \NlwBufferBlock_out_3_OBUF/I  (
    .I(out_3_OBUF_126),
    .O(\NlwBufferSignal_out_3_OBUF/I )
  );
  X_BUF   \NlwBufferBlock_out_4_OBUF/I  (
    .I(out_4_OBUF_135),
    .O(\NlwBufferSignal_out_4_OBUF/I )
  );
  X_BUF   \NlwBufferBlock_out_5_OBUF/I  (
    .I(out_5_OBUF_0),
    .O(\NlwBufferSignal_out_5_OBUF/I )
  );
  X_BUF   \NlwBufferBlock_out_6_OBUF/I  (
    .I(out_6_OBUF_115),
    .O(\NlwBufferSignal_out_6_OBUF/I )
  );
  X_BUF   \NlwBufferBlock_out_7_OBUF/I  (
    .I(\gray_inst/count [7]),
    .O(\NlwBufferSignal_out_7_OBUF/I )
  );
  X_BUF   \NlwBufferBlock_clk_BUFGP/BUFG/IN  (
    .I(\clk_BUFGP/IBUFG_0 ),
    .O(\NlwBufferSignal_clk_BUFGP/BUFG/IN )
  );
  X_BUF   \NlwBufferBlock_cntr_inst/cntr/CLK  (
    .I(clk_BUFGP),
    .O(\NlwBufferSignal_cntr_inst/cntr/CLK )
  );
  X_ZERO   NlwBlock_dut_top_GND (
    .O(GND)
  );
  X_ONE   NlwBlock_dut_top_VCC (
    .O(VCC)
  );
endmodule


module glbl ();

    parameter ROC_WIDTH = 100000;
    parameter TOC_WIDTH = 0;

//--------   STARTUP Globals --------------
    wire GSR;
    wire GTS;
    wire GWE;
    wire PRLD;
    tri1 p_up_tmp;
    tri (weak1, strong0) PLL_LOCKG = p_up_tmp;

    wire PROGB_GLBL;
    wire CCLKO_GLBL;

    reg GSR_int;
    reg GTS_int;
    reg PRLD_int;

//--------   JTAG Globals --------------
    wire JTAG_TDO_GLBL;
    wire JTAG_TCK_GLBL;
    wire JTAG_TDI_GLBL;
    wire JTAG_TMS_GLBL;
    wire JTAG_TRST_GLBL;

    reg JTAG_CAPTURE_GLBL;
    reg JTAG_RESET_GLBL;
    reg JTAG_SHIFT_GLBL;
    reg JTAG_UPDATE_GLBL;
    reg JTAG_RUNTEST_GLBL;

    reg JTAG_SEL1_GLBL = 0;
    reg JTAG_SEL2_GLBL = 0 ;
    reg JTAG_SEL3_GLBL = 0;
    reg JTAG_SEL4_GLBL = 0;

    reg JTAG_USER_TDO1_GLBL = 1'bz;
    reg JTAG_USER_TDO2_GLBL = 1'bz;
    reg JTAG_USER_TDO3_GLBL = 1'bz;
    reg JTAG_USER_TDO4_GLBL = 1'bz;

    assign (weak1, weak0) GSR = GSR_int;
    assign (weak1, weak0) GTS = GTS_int;
    assign (weak1, weak0) PRLD = PRLD_int;

    initial begin
	GSR_int = 1'b1;
	PRLD_int = 1'b1;
	#(ROC_WIDTH)
	GSR_int = 1'b0;
	PRLD_int = 1'b0;
    end

    initial begin
	GTS_int = 1'b1;
	#(TOC_WIDTH)
	GTS_int = 1'b0;
    end

endmodule

`endif

