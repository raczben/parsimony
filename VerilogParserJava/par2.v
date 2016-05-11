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
  addr, q
);
  output q;
  output [5 : 0] addr;

  X_LUT6 #(
    .LOC ( "SLICE_X4Y4" ),
    .INIT ( 64'hFFF000ff00f0ccaa ))
  \gray_inst/count<3>_rt  (
    .ADR0(addr[0]),
    .ADR1(addr[1]),
    .ADR2(addr[2]),
    .ADR3(addr[3]),
    .ADR4(addr[4]),
    .ADR5(addr[5]),
    .O(q)
  );
endmodule


