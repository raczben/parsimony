/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_GTXE2_COMMON_H
#define X_GTXE2_COMMON_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_GTXE2_COMMON: public Primitive{

		//Verilog Parameters:
		parameter_string_t LOC;
		parameter_int_t BIAS_CFG;
		parameter_int_t COMMON_CFG;
		parameter_int_t QPLL_CFG;
		parameter_int_t QPLL_CLKOUT_CFG;
		parameter_int_t QPLL_COARSE_FREQ_OVRD;
		parameter_int_t QPLL_COARSE_FREQ_OVRD_EN;
		parameter_int_t QPLL_CP;
		parameter_int_t QPLL_CP_MONITOR_EN;
		parameter_int_t QPLL_DMONITOR_SEL;
		parameter_int_t QPLL_FBDIV;
		parameter_int_t QPLL_FBDIV_MONITOR_EN;
		parameter_int_t QPLL_FBDIV_RATIO;
		parameter_int_t QPLL_INIT_CFG;
		parameter_int_t QPLL_LOCK_CFG;
		parameter_int_t QPLL_LPF;
		parameter_int_t QPLL_REFCLK_DIV;
		parameter_int_t SIM_QPLLREFCLK_SEL;
		parameter_enum_t SIM_RESET_SPEEDUP;
		parameter_string_t SIM_VERSION;
		//Verilog Ports in definition order:
		NetFlow* DRPDO_A15_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
		NetFlow* DRPDO_A14_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
		NetFlow* DRPDO_A13_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
		NetFlow* DRPDO_A12_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
		NetFlow* DRPDO_A11_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
		NetFlow* DRPDO_A10_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
		NetFlow* DRPDO_A9_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
		NetFlow* DRPDO_A8_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
		NetFlow* DRPDO_A7_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
		NetFlow* DRPDO_A6_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
		NetFlow* DRPDO_A5_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
		NetFlow* DRPDO_A4_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
		NetFlow* DRPDO_A3_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
		NetFlow* DRPDO_A2_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
		NetFlow* DRPDO_A1_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
		NetFlow* DRPDO_A0_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
		NetFlow* DRPRDY_A0_B; // net ID: DRPRDY lsb: 0  msb: 0 OUTPUT
		NetFlow* QPLLDMONITOR_A7_B; // net ID: QPLLDMONITOR lsb: 0  msb: 7 OUTPUT
		NetFlow* QPLLDMONITOR_A6_B; // net ID: QPLLDMONITOR lsb: 0  msb: 7 OUTPUT
		NetFlow* QPLLDMONITOR_A5_B; // net ID: QPLLDMONITOR lsb: 0  msb: 7 OUTPUT
		NetFlow* QPLLDMONITOR_A4_B; // net ID: QPLLDMONITOR lsb: 0  msb: 7 OUTPUT
		NetFlow* QPLLDMONITOR_A3_B; // net ID: QPLLDMONITOR lsb: 0  msb: 7 OUTPUT
		NetFlow* QPLLDMONITOR_A2_B; // net ID: QPLLDMONITOR lsb: 0  msb: 7 OUTPUT
		NetFlow* QPLLDMONITOR_A1_B; // net ID: QPLLDMONITOR lsb: 0  msb: 7 OUTPUT
		NetFlow* QPLLDMONITOR_A0_B; // net ID: QPLLDMONITOR lsb: 0  msb: 7 OUTPUT
		NetFlow* QPLLFBCLKLOST_A0_B; // net ID: QPLLFBCLKLOST lsb: 0  msb: 0 OUTPUT
		NetFlow* QPLLLOCK_A0_B; // net ID: QPLLLOCK lsb: 0  msb: 0 OUTPUT
		NetFlow* QPLLOUTCLK_A0_B; // net ID: QPLLOUTCLK lsb: 0  msb: 0 OUTPUT
		NetFlow* QPLLOUTREFCLK_A0_B; // net ID: QPLLOUTREFCLK lsb: 0  msb: 0 OUTPUT
		NetFlow* QPLLREFCLKLOST_A0_B; // net ID: QPLLREFCLKLOST lsb: 0  msb: 0 OUTPUT
		NetFlow* REFCLKOUTMONITOR_A0_B; // net ID: REFCLKOUTMONITOR lsb: 0  msb: 0 OUTPUT
		NetFlow* BGBYPASSB_A0_B; // net ID: BGBYPASSB lsb: 0  msb: 0 INPUT
		NetFlow* BGMONITORENB_A0_B; // net ID: BGMONITORENB lsb: 0  msb: 0 INPUT
		NetFlow* BGPDB_A0_B; // net ID: BGPDB lsb: 0  msb: 0 INPUT
		NetFlow* BGRCALOVRD_A4_B; // net ID: BGRCALOVRD lsb: 0  msb: 4 INPUT
		NetFlow* BGRCALOVRD_A3_B; // net ID: BGRCALOVRD lsb: 0  msb: 4 INPUT
		NetFlow* BGRCALOVRD_A2_B; // net ID: BGRCALOVRD lsb: 0  msb: 4 INPUT
		NetFlow* BGRCALOVRD_A1_B; // net ID: BGRCALOVRD lsb: 0  msb: 4 INPUT
		NetFlow* BGRCALOVRD_A0_B; // net ID: BGRCALOVRD lsb: 0  msb: 4 INPUT
		NetFlow* DRPADDR_A7_B; // net ID: DRPADDR lsb: 0  msb: 7 INPUT
		NetFlow* DRPADDR_A6_B; // net ID: DRPADDR lsb: 0  msb: 7 INPUT
		NetFlow* DRPADDR_A5_B; // net ID: DRPADDR lsb: 0  msb: 7 INPUT
		NetFlow* DRPADDR_A4_B; // net ID: DRPADDR lsb: 0  msb: 7 INPUT
		NetFlow* DRPADDR_A3_B; // net ID: DRPADDR lsb: 0  msb: 7 INPUT
		NetFlow* DRPADDR_A2_B; // net ID: DRPADDR lsb: 0  msb: 7 INPUT
		NetFlow* DRPADDR_A1_B; // net ID: DRPADDR lsb: 0  msb: 7 INPUT
		NetFlow* DRPADDR_A0_B; // net ID: DRPADDR lsb: 0  msb: 7 INPUT
		NetFlow* DRPCLK_A0_B; // net ID: DRPCLK lsb: 0  msb: 0 INPUT
		NetFlow* DRPDI_A15_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
		NetFlow* DRPDI_A14_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
		NetFlow* DRPDI_A13_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
		NetFlow* DRPDI_A12_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
		NetFlow* DRPDI_A11_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
		NetFlow* DRPDI_A10_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
		NetFlow* DRPDI_A9_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
		NetFlow* DRPDI_A8_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
		NetFlow* DRPDI_A7_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
		NetFlow* DRPDI_A6_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
		NetFlow* DRPDI_A5_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
		NetFlow* DRPDI_A4_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
		NetFlow* DRPDI_A3_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
		NetFlow* DRPDI_A2_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
		NetFlow* DRPDI_A1_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
		NetFlow* DRPDI_A0_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
		NetFlow* DRPEN_A0_B; // net ID: DRPEN lsb: 0  msb: 0 INPUT
		NetFlow* DRPWE_A0_B; // net ID: DRPWE lsb: 0  msb: 0 INPUT
		NetFlow* GTGREFCLK_A0_B; // net ID: GTGREFCLK lsb: 0  msb: 0 INPUT
		NetFlow* GTNORTHREFCLK0_A0_B; // net ID: GTNORTHREFCLK0 lsb: 0  msb: 0 INPUT
		NetFlow* GTNORTHREFCLK1_A0_B; // net ID: GTNORTHREFCLK1 lsb: 0  msb: 0 INPUT
		NetFlow* GTREFCLK0_A0_B; // net ID: GTREFCLK0 lsb: 0  msb: 0 INPUT
		NetFlow* GTREFCLK1_A0_B; // net ID: GTREFCLK1 lsb: 0  msb: 0 INPUT
		NetFlow* GTSOUTHREFCLK0_A0_B; // net ID: GTSOUTHREFCLK0 lsb: 0  msb: 0 INPUT
		NetFlow* GTSOUTHREFCLK1_A0_B; // net ID: GTSOUTHREFCLK1 lsb: 0  msb: 0 INPUT
		NetFlow* PMARSVD_A7_B; // net ID: PMARSVD lsb: 0  msb: 7 INPUT
		NetFlow* PMARSVD_A6_B; // net ID: PMARSVD lsb: 0  msb: 7 INPUT
		NetFlow* PMARSVD_A5_B; // net ID: PMARSVD lsb: 0  msb: 7 INPUT
		NetFlow* PMARSVD_A4_B; // net ID: PMARSVD lsb: 0  msb: 7 INPUT
		NetFlow* PMARSVD_A3_B; // net ID: PMARSVD lsb: 0  msb: 7 INPUT
		NetFlow* PMARSVD_A2_B; // net ID: PMARSVD lsb: 0  msb: 7 INPUT
		NetFlow* PMARSVD_A1_B; // net ID: PMARSVD lsb: 0  msb: 7 INPUT
		NetFlow* PMARSVD_A0_B; // net ID: PMARSVD lsb: 0  msb: 7 INPUT
		NetFlow* QPLLLOCKDETCLK_A0_B; // net ID: QPLLLOCKDETCLK lsb: 0  msb: 0 INPUT
		NetFlow* QPLLLOCKEN_A0_B; // net ID: QPLLLOCKEN lsb: 0  msb: 0 INPUT
		NetFlow* QPLLOUTRESET_A0_B; // net ID: QPLLOUTRESET lsb: 0  msb: 0 INPUT
		NetFlow* QPLLPD_A0_B; // net ID: QPLLPD lsb: 0  msb: 0 INPUT
		NetFlow* QPLLREFCLKSEL_A2_B; // net ID: QPLLREFCLKSEL lsb: 0  msb: 2 INPUT
		NetFlow* QPLLREFCLKSEL_A1_B; // net ID: QPLLREFCLKSEL lsb: 0  msb: 2 INPUT
		NetFlow* QPLLREFCLKSEL_A0_B; // net ID: QPLLREFCLKSEL lsb: 0  msb: 2 INPUT
		NetFlow* QPLLRESET_A0_B; // net ID: QPLLRESET lsb: 0  msb: 0 INPUT
		NetFlow* QPLLRSVD1_A15_B; // net ID: QPLLRSVD1 lsb: 0  msb: 15 INPUT
		NetFlow* QPLLRSVD1_A14_B; // net ID: QPLLRSVD1 lsb: 0  msb: 15 INPUT
		NetFlow* QPLLRSVD1_A13_B; // net ID: QPLLRSVD1 lsb: 0  msb: 15 INPUT
		NetFlow* QPLLRSVD1_A12_B; // net ID: QPLLRSVD1 lsb: 0  msb: 15 INPUT
		NetFlow* QPLLRSVD1_A11_B; // net ID: QPLLRSVD1 lsb: 0  msb: 15 INPUT
		NetFlow* QPLLRSVD1_A10_B; // net ID: QPLLRSVD1 lsb: 0  msb: 15 INPUT
		NetFlow* QPLLRSVD1_A9_B; // net ID: QPLLRSVD1 lsb: 0  msb: 15 INPUT
		NetFlow* QPLLRSVD1_A8_B; // net ID: QPLLRSVD1 lsb: 0  msb: 15 INPUT
		NetFlow* QPLLRSVD1_A7_B; // net ID: QPLLRSVD1 lsb: 0  msb: 15 INPUT
		NetFlow* QPLLRSVD1_A6_B; // net ID: QPLLRSVD1 lsb: 0  msb: 15 INPUT
		NetFlow* QPLLRSVD1_A5_B; // net ID: QPLLRSVD1 lsb: 0  msb: 15 INPUT
		NetFlow* QPLLRSVD1_A4_B; // net ID: QPLLRSVD1 lsb: 0  msb: 15 INPUT
		NetFlow* QPLLRSVD1_A3_B; // net ID: QPLLRSVD1 lsb: 0  msb: 15 INPUT
		NetFlow* QPLLRSVD1_A2_B; // net ID: QPLLRSVD1 lsb: 0  msb: 15 INPUT
		NetFlow* QPLLRSVD1_A1_B; // net ID: QPLLRSVD1 lsb: 0  msb: 15 INPUT
		NetFlow* QPLLRSVD1_A0_B; // net ID: QPLLRSVD1 lsb: 0  msb: 15 INPUT
		NetFlow* QPLLRSVD2_A4_B; // net ID: QPLLRSVD2 lsb: 0  msb: 4 INPUT
		NetFlow* QPLLRSVD2_A3_B; // net ID: QPLLRSVD2 lsb: 0  msb: 4 INPUT
		NetFlow* QPLLRSVD2_A2_B; // net ID: QPLLRSVD2 lsb: 0  msb: 4 INPUT
		NetFlow* QPLLRSVD2_A1_B; // net ID: QPLLRSVD2 lsb: 0  msb: 4 INPUT
		NetFlow* QPLLRSVD2_A0_B; // net ID: QPLLRSVD2 lsb: 0  msb: 4 INPUT
		NetFlow* RCALENB_A0_B; // net ID: RCALENB lsb: 0  msb: 0 INPUT
		
		public: X_GTXE2_COMMON(
			const char * name,
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_int_t BIAS_CFG, // Default: 64'h0000040000001000
			parameter_int_t COMMON_CFG, // Default: 32'h00000000
			parameter_int_t QPLL_CFG, // Default: 27'h0680181
			parameter_int_t QPLL_CLKOUT_CFG, // Default: 4'b0000
			parameter_int_t QPLL_COARSE_FREQ_OVRD, // Default: 6'b010000
			parameter_int_t QPLL_COARSE_FREQ_OVRD_EN, // Default: 1'b0
			parameter_int_t QPLL_CP, // Default: 10'b0000011111
			parameter_int_t QPLL_CP_MONITOR_EN, // Default: 1'b0
			parameter_int_t QPLL_DMONITOR_SEL, // Default: 1'b0
			parameter_int_t QPLL_FBDIV, // Default: 10'b0000000000
			parameter_int_t QPLL_FBDIV_MONITOR_EN, // Default: 1'b0
			parameter_int_t QPLL_FBDIV_RATIO, // Default: 1'b0
			parameter_int_t QPLL_INIT_CFG, // Default: 24'h000006
			parameter_int_t QPLL_LOCK_CFG, // Default: 16'h21E8
			parameter_int_t QPLL_LPF, // Default: 4'b1111
			parameter_int_t QPLL_REFCLK_DIV, // Default: 2
			parameter_int_t SIM_QPLLREFCLK_SEL, // Default: 3'b001
			parameter_enum_t SIM_RESET_SPEEDUP, // Default: "TRUE"
			parameter_string_t SIM_VERSION, // Default: "4.0"
			//Verilog Ports in definition order:
			NetFlow* DRPDO_A15_B, // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			NetFlow* DRPDO_A14_B, // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			NetFlow* DRPDO_A13_B, // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			NetFlow* DRPDO_A12_B, // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			NetFlow* DRPDO_A11_B, // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			NetFlow* DRPDO_A10_B, // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			NetFlow* DRPDO_A9_B, // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			NetFlow* DRPDO_A8_B, // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			NetFlow* DRPDO_A7_B, // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			NetFlow* DRPDO_A6_B, // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			NetFlow* DRPDO_A5_B, // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			NetFlow* DRPDO_A4_B, // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			NetFlow* DRPDO_A3_B, // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			NetFlow* DRPDO_A2_B, // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			NetFlow* DRPDO_A1_B, // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			NetFlow* DRPDO_A0_B, // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			NetFlow* DRPRDY_A0_B, // net ID: DRPRDY lsb: 0  msb: 0 OUTPUT
			NetFlow* QPLLDMONITOR_A7_B, // net ID: QPLLDMONITOR lsb: 0  msb: 7 OUTPUT
			NetFlow* QPLLDMONITOR_A6_B, // net ID: QPLLDMONITOR lsb: 0  msb: 7 OUTPUT
			NetFlow* QPLLDMONITOR_A5_B, // net ID: QPLLDMONITOR lsb: 0  msb: 7 OUTPUT
			NetFlow* QPLLDMONITOR_A4_B, // net ID: QPLLDMONITOR lsb: 0  msb: 7 OUTPUT
			NetFlow* QPLLDMONITOR_A3_B, // net ID: QPLLDMONITOR lsb: 0  msb: 7 OUTPUT
			NetFlow* QPLLDMONITOR_A2_B, // net ID: QPLLDMONITOR lsb: 0  msb: 7 OUTPUT
			NetFlow* QPLLDMONITOR_A1_B, // net ID: QPLLDMONITOR lsb: 0  msb: 7 OUTPUT
			NetFlow* QPLLDMONITOR_A0_B, // net ID: QPLLDMONITOR lsb: 0  msb: 7 OUTPUT
			NetFlow* QPLLFBCLKLOST_A0_B, // net ID: QPLLFBCLKLOST lsb: 0  msb: 0 OUTPUT
			NetFlow* QPLLLOCK_A0_B, // net ID: QPLLLOCK lsb: 0  msb: 0 OUTPUT
			NetFlow* QPLLOUTCLK_A0_B, // net ID: QPLLOUTCLK lsb: 0  msb: 0 OUTPUT
			NetFlow* QPLLOUTREFCLK_A0_B, // net ID: QPLLOUTREFCLK lsb: 0  msb: 0 OUTPUT
			NetFlow* QPLLREFCLKLOST_A0_B, // net ID: QPLLREFCLKLOST lsb: 0  msb: 0 OUTPUT
			NetFlow* REFCLKOUTMONITOR_A0_B, // net ID: REFCLKOUTMONITOR lsb: 0  msb: 0 OUTPUT
			NetFlow* BGBYPASSB_A0_B, // net ID: BGBYPASSB lsb: 0  msb: 0 INPUT
			NetFlow* BGMONITORENB_A0_B, // net ID: BGMONITORENB lsb: 0  msb: 0 INPUT
			NetFlow* BGPDB_A0_B, // net ID: BGPDB lsb: 0  msb: 0 INPUT
			NetFlow* BGRCALOVRD_A4_B, // net ID: BGRCALOVRD lsb: 0  msb: 4 INPUT
			NetFlow* BGRCALOVRD_A3_B, // net ID: BGRCALOVRD lsb: 0  msb: 4 INPUT
			NetFlow* BGRCALOVRD_A2_B, // net ID: BGRCALOVRD lsb: 0  msb: 4 INPUT
			NetFlow* BGRCALOVRD_A1_B, // net ID: BGRCALOVRD lsb: 0  msb: 4 INPUT
			NetFlow* BGRCALOVRD_A0_B, // net ID: BGRCALOVRD lsb: 0  msb: 4 INPUT
			NetFlow* DRPADDR_A7_B, // net ID: DRPADDR lsb: 0  msb: 7 INPUT
			NetFlow* DRPADDR_A6_B, // net ID: DRPADDR lsb: 0  msb: 7 INPUT
			NetFlow* DRPADDR_A5_B, // net ID: DRPADDR lsb: 0  msb: 7 INPUT
			NetFlow* DRPADDR_A4_B, // net ID: DRPADDR lsb: 0  msb: 7 INPUT
			NetFlow* DRPADDR_A3_B, // net ID: DRPADDR lsb: 0  msb: 7 INPUT
			NetFlow* DRPADDR_A2_B, // net ID: DRPADDR lsb: 0  msb: 7 INPUT
			NetFlow* DRPADDR_A1_B, // net ID: DRPADDR lsb: 0  msb: 7 INPUT
			NetFlow* DRPADDR_A0_B, // net ID: DRPADDR lsb: 0  msb: 7 INPUT
			NetFlow* DRPCLK_A0_B, // net ID: DRPCLK lsb: 0  msb: 0 INPUT
			NetFlow* DRPDI_A15_B, // net ID: DRPDI lsb: 0  msb: 15 INPUT
			NetFlow* DRPDI_A14_B, // net ID: DRPDI lsb: 0  msb: 15 INPUT
			NetFlow* DRPDI_A13_B, // net ID: DRPDI lsb: 0  msb: 15 INPUT
			NetFlow* DRPDI_A12_B, // net ID: DRPDI lsb: 0  msb: 15 INPUT
			NetFlow* DRPDI_A11_B, // net ID: DRPDI lsb: 0  msb: 15 INPUT
			NetFlow* DRPDI_A10_B, // net ID: DRPDI lsb: 0  msb: 15 INPUT
			NetFlow* DRPDI_A9_B, // net ID: DRPDI lsb: 0  msb: 15 INPUT
			NetFlow* DRPDI_A8_B, // net ID: DRPDI lsb: 0  msb: 15 INPUT
			NetFlow* DRPDI_A7_B, // net ID: DRPDI lsb: 0  msb: 15 INPUT
			NetFlow* DRPDI_A6_B, // net ID: DRPDI lsb: 0  msb: 15 INPUT
			NetFlow* DRPDI_A5_B, // net ID: DRPDI lsb: 0  msb: 15 INPUT
			NetFlow* DRPDI_A4_B, // net ID: DRPDI lsb: 0  msb: 15 INPUT
			NetFlow* DRPDI_A3_B, // net ID: DRPDI lsb: 0  msb: 15 INPUT
			NetFlow* DRPDI_A2_B, // net ID: DRPDI lsb: 0  msb: 15 INPUT
			NetFlow* DRPDI_A1_B, // net ID: DRPDI lsb: 0  msb: 15 INPUT
			NetFlow* DRPDI_A0_B, // net ID: DRPDI lsb: 0  msb: 15 INPUT
			NetFlow* DRPEN_A0_B, // net ID: DRPEN lsb: 0  msb: 0 INPUT
			NetFlow* DRPWE_A0_B, // net ID: DRPWE lsb: 0  msb: 0 INPUT
			NetFlow* GTGREFCLK_A0_B, // net ID: GTGREFCLK lsb: 0  msb: 0 INPUT
			NetFlow* GTNORTHREFCLK0_A0_B, // net ID: GTNORTHREFCLK0 lsb: 0  msb: 0 INPUT
			NetFlow* GTNORTHREFCLK1_A0_B, // net ID: GTNORTHREFCLK1 lsb: 0  msb: 0 INPUT
			NetFlow* GTREFCLK0_A0_B, // net ID: GTREFCLK0 lsb: 0  msb: 0 INPUT
			NetFlow* GTREFCLK1_A0_B, // net ID: GTREFCLK1 lsb: 0  msb: 0 INPUT
			NetFlow* GTSOUTHREFCLK0_A0_B, // net ID: GTSOUTHREFCLK0 lsb: 0  msb: 0 INPUT
			NetFlow* GTSOUTHREFCLK1_A0_B, // net ID: GTSOUTHREFCLK1 lsb: 0  msb: 0 INPUT
			NetFlow* PMARSVD_A7_B, // net ID: PMARSVD lsb: 0  msb: 7 INPUT
			NetFlow* PMARSVD_A6_B, // net ID: PMARSVD lsb: 0  msb: 7 INPUT
			NetFlow* PMARSVD_A5_B, // net ID: PMARSVD lsb: 0  msb: 7 INPUT
			NetFlow* PMARSVD_A4_B, // net ID: PMARSVD lsb: 0  msb: 7 INPUT
			NetFlow* PMARSVD_A3_B, // net ID: PMARSVD lsb: 0  msb: 7 INPUT
			NetFlow* PMARSVD_A2_B, // net ID: PMARSVD lsb: 0  msb: 7 INPUT
			NetFlow* PMARSVD_A1_B, // net ID: PMARSVD lsb: 0  msb: 7 INPUT
			NetFlow* PMARSVD_A0_B, // net ID: PMARSVD lsb: 0  msb: 7 INPUT
			NetFlow* QPLLLOCKDETCLK_A0_B, // net ID: QPLLLOCKDETCLK lsb: 0  msb: 0 INPUT
			NetFlow* QPLLLOCKEN_A0_B, // net ID: QPLLLOCKEN lsb: 0  msb: 0 INPUT
			NetFlow* QPLLOUTRESET_A0_B, // net ID: QPLLOUTRESET lsb: 0  msb: 0 INPUT
			NetFlow* QPLLPD_A0_B, // net ID: QPLLPD lsb: 0  msb: 0 INPUT
			NetFlow* QPLLREFCLKSEL_A2_B, // net ID: QPLLREFCLKSEL lsb: 0  msb: 2 INPUT
			NetFlow* QPLLREFCLKSEL_A1_B, // net ID: QPLLREFCLKSEL lsb: 0  msb: 2 INPUT
			NetFlow* QPLLREFCLKSEL_A0_B, // net ID: QPLLREFCLKSEL lsb: 0  msb: 2 INPUT
			NetFlow* QPLLRESET_A0_B, // net ID: QPLLRESET lsb: 0  msb: 0 INPUT
			NetFlow* QPLLRSVD1_A15_B, // net ID: QPLLRSVD1 lsb: 0  msb: 15 INPUT
			NetFlow* QPLLRSVD1_A14_B, // net ID: QPLLRSVD1 lsb: 0  msb: 15 INPUT
			NetFlow* QPLLRSVD1_A13_B, // net ID: QPLLRSVD1 lsb: 0  msb: 15 INPUT
			NetFlow* QPLLRSVD1_A12_B, // net ID: QPLLRSVD1 lsb: 0  msb: 15 INPUT
			NetFlow* QPLLRSVD1_A11_B, // net ID: QPLLRSVD1 lsb: 0  msb: 15 INPUT
			NetFlow* QPLLRSVD1_A10_B, // net ID: QPLLRSVD1 lsb: 0  msb: 15 INPUT
			NetFlow* QPLLRSVD1_A9_B, // net ID: QPLLRSVD1 lsb: 0  msb: 15 INPUT
			NetFlow* QPLLRSVD1_A8_B, // net ID: QPLLRSVD1 lsb: 0  msb: 15 INPUT
			NetFlow* QPLLRSVD1_A7_B, // net ID: QPLLRSVD1 lsb: 0  msb: 15 INPUT
			NetFlow* QPLLRSVD1_A6_B, // net ID: QPLLRSVD1 lsb: 0  msb: 15 INPUT
			NetFlow* QPLLRSVD1_A5_B, // net ID: QPLLRSVD1 lsb: 0  msb: 15 INPUT
			NetFlow* QPLLRSVD1_A4_B, // net ID: QPLLRSVD1 lsb: 0  msb: 15 INPUT
			NetFlow* QPLLRSVD1_A3_B, // net ID: QPLLRSVD1 lsb: 0  msb: 15 INPUT
			NetFlow* QPLLRSVD1_A2_B, // net ID: QPLLRSVD1 lsb: 0  msb: 15 INPUT
			NetFlow* QPLLRSVD1_A1_B, // net ID: QPLLRSVD1 lsb: 0  msb: 15 INPUT
			NetFlow* QPLLRSVD1_A0_B, // net ID: QPLLRSVD1 lsb: 0  msb: 15 INPUT
			NetFlow* QPLLRSVD2_A4_B, // net ID: QPLLRSVD2 lsb: 0  msb: 4 INPUT
			NetFlow* QPLLRSVD2_A3_B, // net ID: QPLLRSVD2 lsb: 0  msb: 4 INPUT
			NetFlow* QPLLRSVD2_A2_B, // net ID: QPLLRSVD2 lsb: 0  msb: 4 INPUT
			NetFlow* QPLLRSVD2_A1_B, // net ID: QPLLRSVD2 lsb: 0  msb: 4 INPUT
			NetFlow* QPLLRSVD2_A0_B, // net ID: QPLLRSVD2 lsb: 0  msb: 4 INPUT
			NetFlow* RCALENB_A0_B // net ID: RCALENB lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			this->BIAS_CFG = BIAS_CFG; // Default: 64'h0000040000001000
			this->COMMON_CFG = COMMON_CFG; // Default: 32'h00000000
			this->QPLL_CFG = QPLL_CFG; // Default: 27'h0680181
			this->QPLL_CLKOUT_CFG = QPLL_CLKOUT_CFG; // Default: 4'b0000
			this->QPLL_COARSE_FREQ_OVRD = QPLL_COARSE_FREQ_OVRD; // Default: 6'b010000
			this->QPLL_COARSE_FREQ_OVRD_EN = QPLL_COARSE_FREQ_OVRD_EN; // Default: 1'b0
			this->QPLL_CP = QPLL_CP; // Default: 10'b0000011111
			this->QPLL_CP_MONITOR_EN = QPLL_CP_MONITOR_EN; // Default: 1'b0
			this->QPLL_DMONITOR_SEL = QPLL_DMONITOR_SEL; // Default: 1'b0
			this->QPLL_FBDIV = QPLL_FBDIV; // Default: 10'b0000000000
			this->QPLL_FBDIV_MONITOR_EN = QPLL_FBDIV_MONITOR_EN; // Default: 1'b0
			this->QPLL_FBDIV_RATIO = QPLL_FBDIV_RATIO; // Default: 1'b0
			this->QPLL_INIT_CFG = QPLL_INIT_CFG; // Default: 24'h000006
			this->QPLL_LOCK_CFG = QPLL_LOCK_CFG; // Default: 16'h21E8
			this->QPLL_LPF = QPLL_LPF; // Default: 4'b1111
			this->QPLL_REFCLK_DIV = QPLL_REFCLK_DIV; // Default: 2
			this->SIM_QPLLREFCLK_SEL = SIM_QPLLREFCLK_SEL; // Default: 3'b001
			this->SIM_RESET_SPEEDUP = SIM_RESET_SPEEDUP; // Default: "TRUE"
			this->SIM_VERSION = SIM_VERSION; // Default: "4.0"
			//Verilog Ports in definition order:
			this->DRPDO_A15_B = DRPDO_A15_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			this->DRPDO_A14_B = DRPDO_A14_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			this->DRPDO_A13_B = DRPDO_A13_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			this->DRPDO_A12_B = DRPDO_A12_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			this->DRPDO_A11_B = DRPDO_A11_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			this->DRPDO_A10_B = DRPDO_A10_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			this->DRPDO_A9_B = DRPDO_A9_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			this->DRPDO_A8_B = DRPDO_A8_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			this->DRPDO_A7_B = DRPDO_A7_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			this->DRPDO_A6_B = DRPDO_A6_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			this->DRPDO_A5_B = DRPDO_A5_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			this->DRPDO_A4_B = DRPDO_A4_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			this->DRPDO_A3_B = DRPDO_A3_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			this->DRPDO_A2_B = DRPDO_A2_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			this->DRPDO_A1_B = DRPDO_A1_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			this->DRPDO_A0_B = DRPDO_A0_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			this->DRPRDY_A0_B = DRPRDY_A0_B; // net ID: DRPRDY lsb: 0  msb: 0 OUTPUT
			this->QPLLDMONITOR_A7_B = QPLLDMONITOR_A7_B; // net ID: QPLLDMONITOR lsb: 0  msb: 7 OUTPUT
			this->QPLLDMONITOR_A6_B = QPLLDMONITOR_A6_B; // net ID: QPLLDMONITOR lsb: 0  msb: 7 OUTPUT
			this->QPLLDMONITOR_A5_B = QPLLDMONITOR_A5_B; // net ID: QPLLDMONITOR lsb: 0  msb: 7 OUTPUT
			this->QPLLDMONITOR_A4_B = QPLLDMONITOR_A4_B; // net ID: QPLLDMONITOR lsb: 0  msb: 7 OUTPUT
			this->QPLLDMONITOR_A3_B = QPLLDMONITOR_A3_B; // net ID: QPLLDMONITOR lsb: 0  msb: 7 OUTPUT
			this->QPLLDMONITOR_A2_B = QPLLDMONITOR_A2_B; // net ID: QPLLDMONITOR lsb: 0  msb: 7 OUTPUT
			this->QPLLDMONITOR_A1_B = QPLLDMONITOR_A1_B; // net ID: QPLLDMONITOR lsb: 0  msb: 7 OUTPUT
			this->QPLLDMONITOR_A0_B = QPLLDMONITOR_A0_B; // net ID: QPLLDMONITOR lsb: 0  msb: 7 OUTPUT
			this->QPLLFBCLKLOST_A0_B = QPLLFBCLKLOST_A0_B; // net ID: QPLLFBCLKLOST lsb: 0  msb: 0 OUTPUT
			this->QPLLLOCK_A0_B = QPLLLOCK_A0_B; // net ID: QPLLLOCK lsb: 0  msb: 0 OUTPUT
			this->QPLLOUTCLK_A0_B = QPLLOUTCLK_A0_B; // net ID: QPLLOUTCLK lsb: 0  msb: 0 OUTPUT
			this->QPLLOUTREFCLK_A0_B = QPLLOUTREFCLK_A0_B; // net ID: QPLLOUTREFCLK lsb: 0  msb: 0 OUTPUT
			this->QPLLREFCLKLOST_A0_B = QPLLREFCLKLOST_A0_B; // net ID: QPLLREFCLKLOST lsb: 0  msb: 0 OUTPUT
			this->REFCLKOUTMONITOR_A0_B = REFCLKOUTMONITOR_A0_B; // net ID: REFCLKOUTMONITOR lsb: 0  msb: 0 OUTPUT
			this->BGBYPASSB_A0_B = BGBYPASSB_A0_B; // net ID: BGBYPASSB lsb: 0  msb: 0 INPUT
			this->BGMONITORENB_A0_B = BGMONITORENB_A0_B; // net ID: BGMONITORENB lsb: 0  msb: 0 INPUT
			this->BGPDB_A0_B = BGPDB_A0_B; // net ID: BGPDB lsb: 0  msb: 0 INPUT
			this->BGRCALOVRD_A4_B = BGRCALOVRD_A4_B; // net ID: BGRCALOVRD lsb: 0  msb: 4 INPUT
			this->BGRCALOVRD_A3_B = BGRCALOVRD_A3_B; // net ID: BGRCALOVRD lsb: 0  msb: 4 INPUT
			this->BGRCALOVRD_A2_B = BGRCALOVRD_A2_B; // net ID: BGRCALOVRD lsb: 0  msb: 4 INPUT
			this->BGRCALOVRD_A1_B = BGRCALOVRD_A1_B; // net ID: BGRCALOVRD lsb: 0  msb: 4 INPUT
			this->BGRCALOVRD_A0_B = BGRCALOVRD_A0_B; // net ID: BGRCALOVRD lsb: 0  msb: 4 INPUT
			this->DRPADDR_A7_B = DRPADDR_A7_B; // net ID: DRPADDR lsb: 0  msb: 7 INPUT
			this->DRPADDR_A6_B = DRPADDR_A6_B; // net ID: DRPADDR lsb: 0  msb: 7 INPUT
			this->DRPADDR_A5_B = DRPADDR_A5_B; // net ID: DRPADDR lsb: 0  msb: 7 INPUT
			this->DRPADDR_A4_B = DRPADDR_A4_B; // net ID: DRPADDR lsb: 0  msb: 7 INPUT
			this->DRPADDR_A3_B = DRPADDR_A3_B; // net ID: DRPADDR lsb: 0  msb: 7 INPUT
			this->DRPADDR_A2_B = DRPADDR_A2_B; // net ID: DRPADDR lsb: 0  msb: 7 INPUT
			this->DRPADDR_A1_B = DRPADDR_A1_B; // net ID: DRPADDR lsb: 0  msb: 7 INPUT
			this->DRPADDR_A0_B = DRPADDR_A0_B; // net ID: DRPADDR lsb: 0  msb: 7 INPUT
			this->DRPCLK_A0_B = DRPCLK_A0_B; // net ID: DRPCLK lsb: 0  msb: 0 INPUT
			this->DRPDI_A15_B = DRPDI_A15_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
			this->DRPDI_A14_B = DRPDI_A14_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
			this->DRPDI_A13_B = DRPDI_A13_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
			this->DRPDI_A12_B = DRPDI_A12_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
			this->DRPDI_A11_B = DRPDI_A11_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
			this->DRPDI_A10_B = DRPDI_A10_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
			this->DRPDI_A9_B = DRPDI_A9_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
			this->DRPDI_A8_B = DRPDI_A8_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
			this->DRPDI_A7_B = DRPDI_A7_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
			this->DRPDI_A6_B = DRPDI_A6_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
			this->DRPDI_A5_B = DRPDI_A5_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
			this->DRPDI_A4_B = DRPDI_A4_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
			this->DRPDI_A3_B = DRPDI_A3_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
			this->DRPDI_A2_B = DRPDI_A2_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
			this->DRPDI_A1_B = DRPDI_A1_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
			this->DRPDI_A0_B = DRPDI_A0_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
			this->DRPEN_A0_B = DRPEN_A0_B; // net ID: DRPEN lsb: 0  msb: 0 INPUT
			this->DRPWE_A0_B = DRPWE_A0_B; // net ID: DRPWE lsb: 0  msb: 0 INPUT
			this->GTGREFCLK_A0_B = GTGREFCLK_A0_B; // net ID: GTGREFCLK lsb: 0  msb: 0 INPUT
			this->GTNORTHREFCLK0_A0_B = GTNORTHREFCLK0_A0_B; // net ID: GTNORTHREFCLK0 lsb: 0  msb: 0 INPUT
			this->GTNORTHREFCLK1_A0_B = GTNORTHREFCLK1_A0_B; // net ID: GTNORTHREFCLK1 lsb: 0  msb: 0 INPUT
			this->GTREFCLK0_A0_B = GTREFCLK0_A0_B; // net ID: GTREFCLK0 lsb: 0  msb: 0 INPUT
			this->GTREFCLK1_A0_B = GTREFCLK1_A0_B; // net ID: GTREFCLK1 lsb: 0  msb: 0 INPUT
			this->GTSOUTHREFCLK0_A0_B = GTSOUTHREFCLK0_A0_B; // net ID: GTSOUTHREFCLK0 lsb: 0  msb: 0 INPUT
			this->GTSOUTHREFCLK1_A0_B = GTSOUTHREFCLK1_A0_B; // net ID: GTSOUTHREFCLK1 lsb: 0  msb: 0 INPUT
			this->PMARSVD_A7_B = PMARSVD_A7_B; // net ID: PMARSVD lsb: 0  msb: 7 INPUT
			this->PMARSVD_A6_B = PMARSVD_A6_B; // net ID: PMARSVD lsb: 0  msb: 7 INPUT
			this->PMARSVD_A5_B = PMARSVD_A5_B; // net ID: PMARSVD lsb: 0  msb: 7 INPUT
			this->PMARSVD_A4_B = PMARSVD_A4_B; // net ID: PMARSVD lsb: 0  msb: 7 INPUT
			this->PMARSVD_A3_B = PMARSVD_A3_B; // net ID: PMARSVD lsb: 0  msb: 7 INPUT
			this->PMARSVD_A2_B = PMARSVD_A2_B; // net ID: PMARSVD lsb: 0  msb: 7 INPUT
			this->PMARSVD_A1_B = PMARSVD_A1_B; // net ID: PMARSVD lsb: 0  msb: 7 INPUT
			this->PMARSVD_A0_B = PMARSVD_A0_B; // net ID: PMARSVD lsb: 0  msb: 7 INPUT
			this->QPLLLOCKDETCLK_A0_B = QPLLLOCKDETCLK_A0_B; // net ID: QPLLLOCKDETCLK lsb: 0  msb: 0 INPUT
			this->QPLLLOCKEN_A0_B = QPLLLOCKEN_A0_B; // net ID: QPLLLOCKEN lsb: 0  msb: 0 INPUT
			this->QPLLOUTRESET_A0_B = QPLLOUTRESET_A0_B; // net ID: QPLLOUTRESET lsb: 0  msb: 0 INPUT
			this->QPLLPD_A0_B = QPLLPD_A0_B; // net ID: QPLLPD lsb: 0  msb: 0 INPUT
			this->QPLLREFCLKSEL_A2_B = QPLLREFCLKSEL_A2_B; // net ID: QPLLREFCLKSEL lsb: 0  msb: 2 INPUT
			this->QPLLREFCLKSEL_A1_B = QPLLREFCLKSEL_A1_B; // net ID: QPLLREFCLKSEL lsb: 0  msb: 2 INPUT
			this->QPLLREFCLKSEL_A0_B = QPLLREFCLKSEL_A0_B; // net ID: QPLLREFCLKSEL lsb: 0  msb: 2 INPUT
			this->QPLLRESET_A0_B = QPLLRESET_A0_B; // net ID: QPLLRESET lsb: 0  msb: 0 INPUT
			this->QPLLRSVD1_A15_B = QPLLRSVD1_A15_B; // net ID: QPLLRSVD1 lsb: 0  msb: 15 INPUT
			this->QPLLRSVD1_A14_B = QPLLRSVD1_A14_B; // net ID: QPLLRSVD1 lsb: 0  msb: 15 INPUT
			this->QPLLRSVD1_A13_B = QPLLRSVD1_A13_B; // net ID: QPLLRSVD1 lsb: 0  msb: 15 INPUT
			this->QPLLRSVD1_A12_B = QPLLRSVD1_A12_B; // net ID: QPLLRSVD1 lsb: 0  msb: 15 INPUT
			this->QPLLRSVD1_A11_B = QPLLRSVD1_A11_B; // net ID: QPLLRSVD1 lsb: 0  msb: 15 INPUT
			this->QPLLRSVD1_A10_B = QPLLRSVD1_A10_B; // net ID: QPLLRSVD1 lsb: 0  msb: 15 INPUT
			this->QPLLRSVD1_A9_B = QPLLRSVD1_A9_B; // net ID: QPLLRSVD1 lsb: 0  msb: 15 INPUT
			this->QPLLRSVD1_A8_B = QPLLRSVD1_A8_B; // net ID: QPLLRSVD1 lsb: 0  msb: 15 INPUT
			this->QPLLRSVD1_A7_B = QPLLRSVD1_A7_B; // net ID: QPLLRSVD1 lsb: 0  msb: 15 INPUT
			this->QPLLRSVD1_A6_B = QPLLRSVD1_A6_B; // net ID: QPLLRSVD1 lsb: 0  msb: 15 INPUT
			this->QPLLRSVD1_A5_B = QPLLRSVD1_A5_B; // net ID: QPLLRSVD1 lsb: 0  msb: 15 INPUT
			this->QPLLRSVD1_A4_B = QPLLRSVD1_A4_B; // net ID: QPLLRSVD1 lsb: 0  msb: 15 INPUT
			this->QPLLRSVD1_A3_B = QPLLRSVD1_A3_B; // net ID: QPLLRSVD1 lsb: 0  msb: 15 INPUT
			this->QPLLRSVD1_A2_B = QPLLRSVD1_A2_B; // net ID: QPLLRSVD1 lsb: 0  msb: 15 INPUT
			this->QPLLRSVD1_A1_B = QPLLRSVD1_A1_B; // net ID: QPLLRSVD1 lsb: 0  msb: 15 INPUT
			this->QPLLRSVD1_A0_B = QPLLRSVD1_A0_B; // net ID: QPLLRSVD1 lsb: 0  msb: 15 INPUT
			this->QPLLRSVD2_A4_B = QPLLRSVD2_A4_B; // net ID: QPLLRSVD2 lsb: 0  msb: 4 INPUT
			this->QPLLRSVD2_A3_B = QPLLRSVD2_A3_B; // net ID: QPLLRSVD2 lsb: 0  msb: 4 INPUT
			this->QPLLRSVD2_A2_B = QPLLRSVD2_A2_B; // net ID: QPLLRSVD2 lsb: 0  msb: 4 INPUT
			this->QPLLRSVD2_A1_B = QPLLRSVD2_A1_B; // net ID: QPLLRSVD2 lsb: 0  msb: 4 INPUT
			this->QPLLRSVD2_A0_B = QPLLRSVD2_A0_B; // net ID: QPLLRSVD2 lsb: 0  msb: 4 INPUT
			this->RCALENB_A0_B = RCALENB_A0_B; // net ID: RCALENB lsb: 0  msb: 0 INPUT
			
			register_wait_on_event_nets();
			
		}
		
		void register_wait_on_event_nets(){
		// TODO
		}
		
		bool calculate(simtime_t time){
		// TODO
		}
		};
		
}
#endif // X_GTXE2_COMMON_H
