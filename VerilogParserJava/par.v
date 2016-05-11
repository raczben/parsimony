////////////////////////////////////////////////////////////////////////////////
// Copyright (c) 1995-2013 Xilinx, Inc.  All rights reserved.
////////////////////////////////////////////////////////////////////////////////
//   ____  ____
//  /   /\/   /
// /___/  \  /    Vendor: Xilinx
// \   \   \/     Version: P.20131013
//  \   \         Application: netgen
//  /   /         Filename: dut_top_timesim.v
// /___/   /\     Timestamp: Mon May  9 16:06:46 2016
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

// `timescale 1 ns/1 ps

module dut_top (
  enable, clk, rst, q, out
);
  input enable;
  input clk;
  input rst;
  output q;
  output [7 : 0] out;
  wire out_6_OBUF_122;
  wire out_5_OBUF_0;
  wire out_1_OBUF_128;
  wire out_0_OBUF_0;
  wire out_3_OBUF_133;
  wire out_2_OBUF_0;
  wire enable_IBUF_0;
  wire clk_BUFGP;
  wire rst_IBUF_0;
  wire \cntr_inst/cntr_141 ;
  wire \clk_BUFGP/IBUFG_0 ;
  wire out_4_OBUF_143;
  wire \gray_inst/count<1>_rt_18 ;
  wire \gray_inst/count<2>_rt_14 ;
  wire \ProtoComp1.CYINITGND.0 ;
  wire \gray_inst/count<3>_rt_2 ;
  wire \gray_inst/count<4>_rt_49 ;
  wire \gray_inst/count<5>_rt_45 ;
  wire \gray_inst/count<6>_rt_41 ;
  wire \gray_inst/count<7>_rt_31 ;
  wire \clk_BUFGP/IBUFG_58 ;
  wire enable_IBUF_61;
  wire rst_IBUF_76;
  wire out_5_OBUF_88;
  wire out_0_OBUF_99;
  wire out_2_OBUF_94;
  wire \cntr_inst/cntr_INV_1_o ;
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
  wire \NLW_N0_4.D5LUT_O_UNCONNECTED ;
  wire \NLW_gray_inst/Mcount_count_cy<3>_CO[0]_UNCONNECTED ;
  wire \NLW_gray_inst/Mcount_count_cy<3>_CO[1]_UNCONNECTED ;
  wire \NLW_gray_inst/Mcount_count_cy<3>_CO[2]_UNCONNECTED ;
  wire \NLW_N0_5.C5LUT_O_UNCONNECTED ;
  wire \NLW_N0_6.B5LUT_O_UNCONNECTED ;
  wire \NLW_N1.A5LUT_O_UNCONNECTED ;
  wire \NLW_gray_inst/Mcount_count_xor<7>_CO[0]_UNCONNECTED ;
  wire \NLW_gray_inst/Mcount_count_xor<7>_CO[1]_UNCONNECTED ;
  wire \NLW_gray_inst/Mcount_count_xor<7>_CO[2]_UNCONNECTED ;
  wire \NLW_gray_inst/Mcount_count_xor<7>_CO[3]_UNCONNECTED ;
  wire \NLW_gray_inst/Mcount_count_xor<7>_DI[3]_UNCONNECTED ;
  wire \NLW_N0.C5LUT_O_UNCONNECTED ;
  wire \NLW_N0_2.B5LUT_O_UNCONNECTED ;
  wire \NLW_N0_3.A5LUT_O_UNCONNECTED ;
  wire VCC;
  wire [7 : 0] \gray_inst/count ;
  wire [3 : 3] \gray_inst/Mcount_count_cy ;
  wire [0 : 0] \gray_inst/Mcount_count_lut ;
  wire [7 : 0] \gray_inst/Result ;
  initial $sdf_annotate("netgen/par/dut_top_timesim.sdf");
  X_SFF #(
    .LOC ( "SLICE_X4Y4" ),
    .INIT ( 1'b0 ))
  \gray_inst/count_3  (
    .CE(enable_IBUF_0),
    .CLK(\NlwBufferSignal_gray_inst/count_3/CLK ),
    .I(\gray_inst/Result [3]),
    .O(\gray_inst/count [3]),
    .SRST(rst_IBUF_0),
    .SET(GND),
    .RST(GND),
    .SSET(GND)
  );
  X_LUT6 #(
    .LOC ( "SLICE_X4Y4" ),
    .INIT ( 64'hFFFF0000FFFF0000 ))
  \gray_inst/count<3>_rt  (
    .ADR0(1'b1),
    .ADR1(1'b1),
    .ADR2(1'b1),
    .ADR4(\gray_inst/count [3]),
    .ADR3(1'b1),
    .ADR5(1'b1),
    .O(\gray_inst/count<3>_rt_2 )
  );
  X_LUT5 #(
    .LOC ( "SLICE_X4Y4" ),
    .INIT ( 32'h00000000 ))
  \N0_4.D5LUT  (
    .ADR0(1'b1),
    .ADR1(1'b1),
    .ADR2(1'b1),
    .ADR3(1'b1),
    .ADR4(1'b1),
    .O(\NLW_N0_4.D5LUT_O_UNCONNECTED )
  );
  X_ZERO #(
    .LOC ( "SLICE_X4Y4" ))
  \ProtoComp1.CYINITGND  (
    .O(\ProtoComp1.CYINITGND.0 )
  );
  X_SFF #(
    .LOC ( "SLICE_X4Y4" ),
    .INIT ( 1'b0 ))
  \gray_inst/count_2  (
    .CE(enable_IBUF_0),
    .CLK(\NlwBufferSignal_gray_inst/count_2/CLK ),
    .I(\gray_inst/Result [2]),
    .O(\gray_inst/count [2]),
    .SRST(rst_IBUF_0),
    .SET(GND),
    .RST(GND),
    .SSET(GND)
  );
  X_CARRY4 #(
    .LOC ( "SLICE_X4Y4" ))
  \gray_inst/Mcount_count_cy<3>  (
    .CI(1'b0),
    .CYINIT(\ProtoComp1.CYINITGND.0 ),
    .CO({\gray_inst/Mcount_count_cy [3], \NLW_gray_inst/Mcount_count_cy<3>_CO[2]_UNCONNECTED , \NLW_gray_inst/Mcount_count_cy<3>_CO[1]_UNCONNECTED , 
\NLW_gray_inst/Mcount_count_cy<3>_CO[0]_UNCONNECTED }),
    .DI({1'b0, 1'b0, 1'b0, 1'b1}),
    .O({\gray_inst/Result [3], \gray_inst/Result [2], \gray_inst/Result [1], \gray_inst/Result [0]}),
    .S({\gray_inst/count<3>_rt_2 , \gray_inst/count<2>_rt_14 , \gray_inst/count<1>_rt_18 , \gray_inst/Mcount_count_lut [0]})
  );
  X_LUT6 #(
    .LOC ( "SLICE_X4Y4" ),
    .INIT ( 64'hFFFF0000FFFF0000 ))
  \gray_inst/count<2>_rt  (
    .ADR0(1'b1),
    .ADR1(1'b1),
    .ADR2(1'b1),
    .ADR4(\gray_inst/count [2]),
    .ADR3(1'b1),
    .ADR5(1'b1),
    .O(\gray_inst/count<2>_rt_14 )
  );
  X_LUT5 #(
    .LOC ( "SLICE_X4Y4" ),
    .INIT ( 32'h00000000 ))
  \N0_5.C5LUT  (
    .ADR0(1'b1),
    .ADR1(1'b1),
    .ADR2(1'b1),
    .ADR3(1'b1),
    .ADR4(1'b1),
    .O(\NLW_N0_5.C5LUT_O_UNCONNECTED )
  );
  X_SFF #(
    .LOC ( "SLICE_X4Y4" ),
    .INIT ( 1'b0 ))
  \gray_inst/count_1  (
    .CE(enable_IBUF_0),
    .CLK(\NlwBufferSignal_gray_inst/count_1/CLK ),
    .I(\gray_inst/Result [1]),
    .O(\gray_inst/count [1]),
    .SRST(rst_IBUF_0),
    .SET(GND),
    .RST(GND),
    .SSET(GND)
  );
  X_LUT6 #(
    .LOC ( "SLICE_X4Y4" ),
    .INIT ( 64'hFFFF0000FFFF0000 ))
  \gray_inst/count<1>_rt  (
    .ADR0(1'b1),
    .ADR1(1'b1),
    .ADR2(1'b1),
    .ADR4(\gray_inst/count [1]),
    .ADR3(1'b1),
    .ADR5(1'b1),
    .O(\gray_inst/count<1>_rt_18 )
  );
  X_LUT5 #(
    .LOC ( "SLICE_X4Y4" ),
    .INIT ( 32'h00000000 ))
  \N0_6.B5LUT  (
    .ADR0(1'b1),
    .ADR1(1'b1),
    .ADR2(1'b1),
    .ADR3(1'b1),
    .ADR4(1'b1),
    .O(\NLW_N0_6.B5LUT_O_UNCONNECTED )
  );
  X_SFF #(
    .LOC ( "SLICE_X4Y4" ),
    .INIT ( 1'b0 ))
  \gray_inst/count_0  (
    .CE(enable_IBUF_0),
    .CLK(\NlwBufferSignal_gray_inst/count_0/CLK ),
    .I(\gray_inst/Result [0]),
    .O(\gray_inst/count [0]),
    .SRST(rst_IBUF_0),
    .SET(GND),
    .RST(GND),
    .SSET(GND)
  );
  X_LUT6 #(
    .LOC ( "SLICE_X4Y4" ),
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
    .LOC ( "SLICE_X4Y4" ),
    .INIT ( 32'hFFFFFFFF ))
  \N1.A5LUT  (
    .ADR0(1'b1),
    .ADR1(1'b1),
    .ADR2(1'b1),
    .ADR3(1'b1),
    .ADR4(1'b1),
    .O(\NLW_N1.A5LUT_O_UNCONNECTED )
  );
  X_SFF #(
    .LOC ( "SLICE_X4Y5" ),
    .INIT ( 1'b0 ))
  \gray_inst/count_7  (
    .CE(enable_IBUF_0),
    .CLK(\NlwBufferSignal_gray_inst/count_7/CLK ),
    .I(\gray_inst/Result [7]),
    .O(\gray_inst/count [7]),
    .SRST(rst_IBUF_0),
    .SET(GND),
    .RST(GND),
    .SSET(GND)
  );
  X_LUT6 #(
    .LOC ( "SLICE_X4Y5" ),
    .INIT ( 64'hFFFFFFFF00000000 ))
  \gray_inst/count<7>_rt  (
    .ADR0(1'b1),
    .ADR1(1'b1),
    .ADR2(1'b1),
    .ADR5(\gray_inst/count [7]),
    .ADR4(1'b1),
    .ADR3(1'b1),
    .O(\gray_inst/count<7>_rt_31 )
  );
  X_SFF #(
    .LOC ( "SLICE_X4Y5" ),
    .INIT ( 1'b0 ))
  \gray_inst/count_6  (
    .CE(enable_IBUF_0),
    .CLK(\NlwBufferSignal_gray_inst/count_6/CLK ),
    .I(\gray_inst/Result [6]),
    .O(\gray_inst/count [6]),
    .SRST(rst_IBUF_0),
    .SET(GND),
    .RST(GND),
    .SSET(GND)
  );
  X_CARRY4 #(
    .LOC ( "SLICE_X4Y5" ))
  \gray_inst/Mcount_count_xor<7>  (
    .CI(\gray_inst/Mcount_count_cy [3]),
    .CYINIT(1'b0),
    .CO({\NLW_gray_inst/Mcount_count_xor<7>_CO[3]_UNCONNECTED , \NLW_gray_inst/Mcount_count_xor<7>_CO[2]_UNCONNECTED , 
\NLW_gray_inst/Mcount_count_xor<7>_CO[1]_UNCONNECTED , \NLW_gray_inst/Mcount_count_xor<7>_CO[0]_UNCONNECTED }),
    .DI({\NLW_gray_inst/Mcount_count_xor<7>_DI[3]_UNCONNECTED , 1'b0, 1'b0, 1'b0}),
    .O({\gray_inst/Result [7], \gray_inst/Result [6], \gray_inst/Result [5], \gray_inst/Result [4]}),
    .S({\gray_inst/count<7>_rt_31 , \gray_inst/count<6>_rt_41 , \gray_inst/count<5>_rt_45 , \gray_inst/count<4>_rt_49 })
  );
  X_LUT6 #(
    .LOC ( "SLICE_X4Y5" ),
    .INIT ( 64'hFFFF0000FFFF0000 ))
  \gray_inst/count<6>_rt  (
    .ADR0(1'b1),
    .ADR1(1'b1),
    .ADR2(1'b1),
    .ADR4(\gray_inst/count [6]),
    .ADR3(1'b1),
    .ADR5(1'b1),
    .O(\gray_inst/count<6>_rt_41 )
  );
  X_LUT5 #(
    .LOC ( "SLICE_X4Y5" ),
    .INIT ( 32'h00000000 ))
  \N0.C5LUT  (
    .ADR0(1'b1),
    .ADR1(1'b1),
    .ADR2(1'b1),
    .ADR3(1'b1),
    .ADR4(1'b1),
    .O(\NLW_N0.C5LUT_O_UNCONNECTED )
  );
  X_SFF #(
    .LOC ( "SLICE_X4Y5" ),
    .INIT ( 1'b0 ))
  \gray_inst/count_5  (
    .CE(enable_IBUF_0),
    .CLK(\NlwBufferSignal_gray_inst/count_5/CLK ),
    .I(\gray_inst/Result [5]),
    .O(\gray_inst/count [5]),
    .SRST(rst_IBUF_0),
    .SET(GND),
    .RST(GND),
    .SSET(GND)
  );
  X_LUT6 #(
    .LOC ( "SLICE_X4Y5" ),
    .INIT ( 64'hFFFF0000FFFF0000 ))
  \gray_inst/count<5>_rt  (
    .ADR0(1'b1),
    .ADR1(1'b1),
    .ADR2(1'b1),
    .ADR4(\gray_inst/count [5]),
    .ADR3(1'b1),
    .ADR5(1'b1),
    .O(\gray_inst/count<5>_rt_45 )
  );
  X_LUT5 #(
    .LOC ( "SLICE_X4Y5" ),
    .INIT ( 32'h00000000 ))
  \N0_2.B5LUT  (
    .ADR0(1'b1),
    .ADR1(1'b1),
    .ADR2(1'b1),
    .ADR3(1'b1),
    .ADR4(1'b1),
    .O(\NLW_N0_2.B5LUT_O_UNCONNECTED )
  );
  X_SFF #(
    .LOC ( "SLICE_X4Y5" ),
    .INIT ( 1'b0 ))
  \gray_inst/count_4  (
    .CE(enable_IBUF_0),
    .CLK(\NlwBufferSignal_gray_inst/count_4/CLK ),
    .I(\gray_inst/Result [4]),
    .O(\gray_inst/count [4]),
    .SRST(rst_IBUF_0),
    .SET(GND),
    .RST(GND),
    .SSET(GND)
  );
  X_LUT6 #(
    .LOC ( "SLICE_X4Y5" ),
    .INIT ( 64'hFFFF0000FFFF0000 ))
  \gray_inst/count<4>_rt  (
    .ADR0(1'b1),
    .ADR1(1'b1),
    .ADR2(1'b1),
    .ADR4(\gray_inst/count [4]),
    .ADR3(1'b1),
    .ADR5(1'b1),
    .O(\gray_inst/count<4>_rt_49 )
  );
  X_LUT5 #(
    .LOC ( "SLICE_X4Y5" ),
    .INIT ( 32'h00000000 ))
  \N0_3.A5LUT  (
    .ADR0(1'b1),
    .ADR1(1'b1),
    .ADR2(1'b1),
    .ADR3(1'b1),
    .ADR4(1'b1),
    .O(\NLW_N0_3.A5LUT_O_UNCONNECTED )
  );
  X_OPAD #(
    .LOC ( "PAD122" ))
  q_31 (
    .PAD(q)
  );
  X_OBUF #(
    .LOC ( "PAD122" ))
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
    .O(\clk_BUFGP/IBUFG_58 ),
    .I(clk)
  );
  X_BUF #(
    .LOC ( "PAD172" ))
  \ProtoComp4.IMUX  (
    .I(\clk_BUFGP/IBUFG_58 ),
    .O(\clk_BUFGP/IBUFG_0 )
  );
  X_IPAD #(
    .LOC ( "PAD133" ))
  enable_39 (
    .PAD(enable)
  );
  X_BUF #(
    .LOC ( "PAD133" ))
  enable_IBUF (
    .O(enable_IBUF_61),
    .I(enable)
  );
  X_BUF #(
    .LOC ( "PAD133" ))
  \ProtoComp4.IMUX.1  (
    .I(enable_IBUF_61),
    .O(enable_IBUF_0)
  );
  X_OPAD #(
    .LOC ( "PAD134" ))
  \out<0>  (
    .PAD(out[0])
  );
  X_OBUF #(
    .LOC ( "PAD134" ))
  out_0_OBUF (
    .I(\NlwBufferSignal_out_0_OBUF/I ),
    .O(out[0])
  );
  X_OPAD #(
    .LOC ( "PAD135" ))
  \out<1>  (
    .PAD(out[1])
  );
  X_OBUF #(
    .LOC ( "PAD135" ))
  out_1_OBUF (
    .I(\NlwBufferSignal_out_1_OBUF/I ),
    .O(out[1])
  );
  X_OPAD #(
    .LOC ( "PAD136" ))
  \out<2>  (
    .PAD(out[2])
  );
  X_OBUF #(
    .LOC ( "PAD136" ))
  out_2_OBUF (
    .I(\NlwBufferSignal_out_2_OBUF/I ),
    .O(out[2])
  );
  X_OPAD #(
    .LOC ( "PAD137" ))
  \out<3>  (
    .PAD(out[3])
  );
  X_OBUF #(
    .LOC ( "PAD137" ))
  out_3_OBUF (
    .I(\NlwBufferSignal_out_3_OBUF/I ),
    .O(out[3])
  );
  X_OPAD #(
    .LOC ( "PAD138" ))
  \out<4>  (
    .PAD(out[4])
  );
  X_OBUF #(
    .LOC ( "PAD138" ))
  out_4_OBUF (
    .I(\NlwBufferSignal_out_4_OBUF/I ),
    .O(out[4])
  );
  X_OPAD #(
    .LOC ( "PAD141" ))
  \out<5>  (
    .PAD(out[5])
  );
  X_OBUF #(
    .LOC ( "PAD141" ))
  out_5_OBUF (
    .I(\NlwBufferSignal_out_5_OBUF/I ),
    .O(out[5])
  );
  X_IPAD #(
    .LOC ( "PAD121" ))
  rst_61 (
    .PAD(rst)
  );
  X_BUF #(
    .LOC ( "PAD121" ))
  rst_IBUF (
    .O(rst_IBUF_76),
    .I(rst)
  );
  X_BUF #(
    .LOC ( "PAD121" ))
  \ProtoComp4.IMUX.2  (
    .I(rst_IBUF_76),
    .O(rst_IBUF_0)
  );
  X_OPAD #(
    .LOC ( "PAD144" ))
  \out<6>  (
    .PAD(out[6])
  );
  X_OBUF #(
    .LOC ( "PAD144" ))
  out_6_OBUF (
    .I(\NlwBufferSignal_out_6_OBUF/I ),
    .O(out[6])
  );
  X_OPAD #(
    .LOC ( "PAD143" ))
  \out<7>  (
    .PAD(out[7])
  );
  X_OBUF #(
    .LOC ( "PAD143" ))
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
  X_BUF   \out_4_OBUF/out_4_OBUF_CMUX_Delay  (
    .I(out_5_OBUF_88),
    .O(out_5_OBUF_0)
  );
  X_LUT6 #(
    .LOC ( "SLICE_X3Y2" ),
    .INIT ( 64'h33CC33CC33CC33CC ))
  \gray_inst/Mxor_out<4>_xo<0>1  (
    .ADR0(1'b1),
    .ADR5(1'b1),
    .ADR2(1'b1),
    .ADR4(1'b1),
    .ADR3(\gray_inst/count [4]),
    .ADR1(\gray_inst/count [5]),
    .O(out_4_OBUF_143)
  );
  X_LUT6 #(
    .LOC ( "SLICE_X3Y2" ),
    .INIT ( 64'h6666666666666666 ))
  \gray_inst/Mxor_out<6>_xo<0>1  (
    .ADR3(1'b1),
    .ADR4(1'b1),
    .ADR2(1'b1),
    .ADR0(\gray_inst/count [6]),
    .ADR1(\gray_inst/count [7]),
    .ADR5(1'b1),
    .O(out_6_OBUF_122)
  );
  X_LUT5 #(
    .LOC ( "SLICE_X3Y2" ),
    .INIT ( 32'h55AA55AA ))
  \gray_inst/Mxor_out<5>_xo<0>1  (
    .ADR2(1'b1),
    .ADR1(1'b1),
    .ADR3(\gray_inst/count [5]),
    .ADR0(\gray_inst/count [6]),
    .ADR4(1'b1),
    .O(out_5_OBUF_88)
  );
  X_BUF   \out_3_OBUF/out_3_OBUF_DMUX_Delay  (
    .I(out_2_OBUF_94),
    .O(out_2_OBUF_0)
  );
  X_BUF   \out_3_OBUF/out_3_OBUF_AMUX_Delay  (
    .I(out_0_OBUF_99),
    .O(out_0_OBUF_0)
  );
  X_LUT6 #(
    .LOC ( "SLICE_X4Y2" ),
    .INIT ( 64'h0F0FF0F00F0FF0F0 ))
  \gray_inst/Mxor_out<3>_xo<0>1  (
    .ADR0(1'b1),
    .ADR1(1'b1),
    .ADR3(1'b1),
    .ADR2(\gray_inst/count [3]),
    .ADR4(\gray_inst/count [4]),
    .ADR5(1'b1),
    .O(out_3_OBUF_133)
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
    .O(out_2_OBUF_94)
  );
  X_LUT6 #(
    .LOC ( "SLICE_X4Y2" ),
    .INIT ( 64'h00FFFF0000FFFF00 ))
  \gray_inst/Mxor_out<1>_xo<0>1  (
    .ADR0(1'b1),
    .ADR1(1'b1),
    .ADR2(1'b1),
    .ADR4(\gray_inst/count [1]),
    .ADR3(\gray_inst/count [2]),
    .ADR5(1'b1),
    .O(out_1_OBUF_128)
  );
  X_LUT5 #(
    .LOC ( "SLICE_X4Y2" ),
    .INIT ( 32'h3333CCCC ))
  \gray_inst/Mxor_out<0>_xo<0>1  (
    .ADR0(1'b1),
    .ADR2(1'b1),
    .ADR1(\gray_inst/count [0]),
    .ADR4(\gray_inst/count [1]),
    .ADR3(1'b1),
    .O(out_0_OBUF_99)
  );
  X_SFF #(
    .LOC ( "SLICE_X11Y2" ),
    .INIT ( 1'b0 ))
  \cntr_inst/cntr  (
    .CE(VCC),
    .CLK(\NlwBufferSignal_cntr_inst/cntr/CLK ),
    .I(\cntr_inst/cntr_INV_1_o ),
    .O(\cntr_inst/cntr_141 ),
    .SRST(rst_IBUF_0),
    .SET(GND),
    .RST(GND),
    .SSET(GND)
  );
  X_LUT6 #(
    .LOC ( "SLICE_X11Y2" ),
    .INIT ( 64'h00000000FFFFFFFF ))
  \cntr_inst/cntr_INV_1_o1_INV_0  (
    .ADR0(1'b1),
    .ADR1(1'b1),
    .ADR2(1'b1),
    .ADR5(\cntr_inst/cntr_141 ),
    .ADR4(1'b1),
    .ADR3(1'b1),
    .O(\cntr_inst/cntr_INV_1_o )
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
    .I(\cntr_inst/cntr_141 ),
    .O(\NlwBufferSignal_q_OBUF/I )
  );
  X_BUF   \NlwBufferBlock_out_0_OBUF/I  (
    .I(out_0_OBUF_0),
    .O(\NlwBufferSignal_out_0_OBUF/I )
  );
  X_BUF   \NlwBufferBlock_out_1_OBUF/I  (
    .I(out_1_OBUF_128),
    .O(\NlwBufferSignal_out_1_OBUF/I )
  );
  X_BUF   \NlwBufferBlock_out_2_OBUF/I  (
    .I(out_2_OBUF_0),
    .O(\NlwBufferSignal_out_2_OBUF/I )
  );
  X_BUF   \NlwBufferBlock_out_3_OBUF/I  (
    .I(out_3_OBUF_133),
    .O(\NlwBufferSignal_out_3_OBUF/I )
  );
  X_BUF   \NlwBufferBlock_out_4_OBUF/I  (
    .I(out_4_OBUF_143),
    .O(\NlwBufferSignal_out_4_OBUF/I )
  );
  X_BUF   \NlwBufferBlock_out_5_OBUF/I  (
    .I(out_5_OBUF_0),
    .O(\NlwBufferSignal_out_5_OBUF/I )
  );
  X_BUF   \NlwBufferBlock_out_6_OBUF/I  (
    .I(out_6_OBUF_122),
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


