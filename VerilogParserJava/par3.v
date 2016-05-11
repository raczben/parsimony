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
  q,
  o, s,
  di, cyinit,
  ci,
  co
);
    output [3 : 0] co;
    output [3 : 0] o;
    input        ci;
    input        cyinit;
    input  [3 : 0] di;
    input  [3 : 0] s;

  X_CARRY4 
  carry_inst  (
    .CI(ci),
    .CYINIT(cyinit ),
    .CO({co [3], co [2], co [1], co [0]}),
    .DI({di [3], di [2], di [1], di [0]}),
    .O({o [3], o [2], o [1], o [0]}),
    .S({s [3], s [2], s [1], s [0]})
  );
endmodule


