/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_GTPE2_COMMON_H
#define X_GTPE2_COMMON_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_GTPE2_COMMON: public Primitive{

		//Verilog Parameters:
		parameter_string_t LOC;
		parameter_int_t BIAS_CFG;
		parameter_int_t COMMON_CFG;
		parameter_int_t PLL0_CFG;
		parameter_int_t PLL0_DMON_CFG;
		parameter_int_t PLL0_FBDIV;
		parameter_int_t PLL0_FBDIV_45;
		parameter_int_t PLL0_INIT_CFG;
		parameter_int_t PLL0_LOCK_CFG;
		parameter_int_t PLL0_REFCLK_DIV;
		parameter_int_t PLL1_CFG;
		parameter_int_t PLL1_DMON_CFG;
		parameter_int_t PLL1_FBDIV;
		parameter_int_t PLL1_FBDIV_45;
		parameter_int_t PLL1_INIT_CFG;
		parameter_int_t PLL1_LOCK_CFG;
		parameter_int_t PLL1_REFCLK_DIV;
		parameter_int_t PLL_CLKOUT_CFG;
		parameter_int_t RSVD_ATTR0;
		parameter_int_t RSVD_ATTR1;
		parameter_int_t SIM_PLL0REFCLK_SEL;
		parameter_int_t SIM_PLL1REFCLK_SEL;
		parameter_enum_t SIM_RESET_SPEEDUP;
		parameter_string_t SIM_VERSION;
		//Verilog Ports in definition order:
		NetFlow* DMONITOROUT_A7_B; // net ID: DMONITOROUT lsb: 0  msb: 7 OUTPUT
		NetFlow* DMONITOROUT_A6_B; // net ID: DMONITOROUT lsb: 0  msb: 7 OUTPUT
		NetFlow* DMONITOROUT_A5_B; // net ID: DMONITOROUT lsb: 0  msb: 7 OUTPUT
		NetFlow* DMONITOROUT_A4_B; // net ID: DMONITOROUT lsb: 0  msb: 7 OUTPUT
		NetFlow* DMONITOROUT_A3_B; // net ID: DMONITOROUT lsb: 0  msb: 7 OUTPUT
		NetFlow* DMONITOROUT_A2_B; // net ID: DMONITOROUT lsb: 0  msb: 7 OUTPUT
		NetFlow* DMONITOROUT_A1_B; // net ID: DMONITOROUT lsb: 0  msb: 7 OUTPUT
		NetFlow* DMONITOROUT_A0_B; // net ID: DMONITOROUT lsb: 0  msb: 7 OUTPUT
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
		NetFlow* PLL0FBCLKLOST_A0_B; // net ID: PLL0FBCLKLOST lsb: 0  msb: 0 OUTPUT
		NetFlow* PLL0LOCK_A0_B; // net ID: PLL0LOCK lsb: 0  msb: 0 OUTPUT
		NetFlow* PLL0OUTCLK_A0_B; // net ID: PLL0OUTCLK lsb: 0  msb: 0 OUTPUT
		NetFlow* PLL0OUTREFCLK_A0_B; // net ID: PLL0OUTREFCLK lsb: 0  msb: 0 OUTPUT
		NetFlow* PLL0REFCLKLOST_A0_B; // net ID: PLL0REFCLKLOST lsb: 0  msb: 0 OUTPUT
		NetFlow* PLL1FBCLKLOST_A0_B; // net ID: PLL1FBCLKLOST lsb: 0  msb: 0 OUTPUT
		NetFlow* PLL1LOCK_A0_B; // net ID: PLL1LOCK lsb: 0  msb: 0 OUTPUT
		NetFlow* PLL1OUTCLK_A0_B; // net ID: PLL1OUTCLK lsb: 0  msb: 0 OUTPUT
		NetFlow* PLL1OUTREFCLK_A0_B; // net ID: PLL1OUTREFCLK lsb: 0  msb: 0 OUTPUT
		NetFlow* PLL1REFCLKLOST_A0_B; // net ID: PLL1REFCLKLOST lsb: 0  msb: 0 OUTPUT
		NetFlow* PMARSVDOUT_A15_B; // net ID: PMARSVDOUT lsb: 0  msb: 15 OUTPUT
		NetFlow* PMARSVDOUT_A14_B; // net ID: PMARSVDOUT lsb: 0  msb: 15 OUTPUT
		NetFlow* PMARSVDOUT_A13_B; // net ID: PMARSVDOUT lsb: 0  msb: 15 OUTPUT
		NetFlow* PMARSVDOUT_A12_B; // net ID: PMARSVDOUT lsb: 0  msb: 15 OUTPUT
		NetFlow* PMARSVDOUT_A11_B; // net ID: PMARSVDOUT lsb: 0  msb: 15 OUTPUT
		NetFlow* PMARSVDOUT_A10_B; // net ID: PMARSVDOUT lsb: 0  msb: 15 OUTPUT
		NetFlow* PMARSVDOUT_A9_B; // net ID: PMARSVDOUT lsb: 0  msb: 15 OUTPUT
		NetFlow* PMARSVDOUT_A8_B; // net ID: PMARSVDOUT lsb: 0  msb: 15 OUTPUT
		NetFlow* PMARSVDOUT_A7_B; // net ID: PMARSVDOUT lsb: 0  msb: 15 OUTPUT
		NetFlow* PMARSVDOUT_A6_B; // net ID: PMARSVDOUT lsb: 0  msb: 15 OUTPUT
		NetFlow* PMARSVDOUT_A5_B; // net ID: PMARSVDOUT lsb: 0  msb: 15 OUTPUT
		NetFlow* PMARSVDOUT_A4_B; // net ID: PMARSVDOUT lsb: 0  msb: 15 OUTPUT
		NetFlow* PMARSVDOUT_A3_B; // net ID: PMARSVDOUT lsb: 0  msb: 15 OUTPUT
		NetFlow* PMARSVDOUT_A2_B; // net ID: PMARSVDOUT lsb: 0  msb: 15 OUTPUT
		NetFlow* PMARSVDOUT_A1_B; // net ID: PMARSVDOUT lsb: 0  msb: 15 OUTPUT
		NetFlow* PMARSVDOUT_A0_B; // net ID: PMARSVDOUT lsb: 0  msb: 15 OUTPUT
		NetFlow* REFCLKOUTMONITOR0_A0_B; // net ID: REFCLKOUTMONITOR0 lsb: 0  msb: 0 OUTPUT
		NetFlow* REFCLKOUTMONITOR1_A0_B; // net ID: REFCLKOUTMONITOR1 lsb: 0  msb: 0 OUTPUT
		NetFlow* BGBYPASSB_A0_B; // net ID: BGBYPASSB lsb: 0  msb: 0 INPUT
		NetFlow* BGMONITORENB_A0_B; // net ID: BGMONITORENB lsb: 0  msb: 0 INPUT
		NetFlow* BGPDB_A0_B; // net ID: BGPDB lsb: 0  msb: 0 INPUT
		NetFlow* BGRCALOVRD_A4_B; // net ID: BGRCALOVRD lsb: 0  msb: 4 INPUT
		NetFlow* BGRCALOVRD_A3_B; // net ID: BGRCALOVRD lsb: 0  msb: 4 INPUT
		NetFlow* BGRCALOVRD_A2_B; // net ID: BGRCALOVRD lsb: 0  msb: 4 INPUT
		NetFlow* BGRCALOVRD_A1_B; // net ID: BGRCALOVRD lsb: 0  msb: 4 INPUT
		NetFlow* BGRCALOVRD_A0_B; // net ID: BGRCALOVRD lsb: 0  msb: 4 INPUT
		NetFlow* BGRCALOVRDENB_A0_B; // net ID: BGRCALOVRDENB lsb: 0  msb: 0 INPUT
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
		NetFlow* GTEASTREFCLK0_A0_B; // net ID: GTEASTREFCLK0 lsb: 0  msb: 0 INPUT
		NetFlow* GTEASTREFCLK1_A0_B; // net ID: GTEASTREFCLK1 lsb: 0  msb: 0 INPUT
		NetFlow* GTGREFCLK0_A0_B; // net ID: GTGREFCLK0 lsb: 0  msb: 0 INPUT
		NetFlow* GTGREFCLK1_A0_B; // net ID: GTGREFCLK1 lsb: 0  msb: 0 INPUT
		NetFlow* GTREFCLK0_A0_B; // net ID: GTREFCLK0 lsb: 0  msb: 0 INPUT
		NetFlow* GTREFCLK1_A0_B; // net ID: GTREFCLK1 lsb: 0  msb: 0 INPUT
		NetFlow* GTWESTREFCLK0_A0_B; // net ID: GTWESTREFCLK0 lsb: 0  msb: 0 INPUT
		NetFlow* GTWESTREFCLK1_A0_B; // net ID: GTWESTREFCLK1 lsb: 0  msb: 0 INPUT
		NetFlow* PLL0LOCKDETCLK_A0_B; // net ID: PLL0LOCKDETCLK lsb: 0  msb: 0 INPUT
		NetFlow* PLL0LOCKEN_A0_B; // net ID: PLL0LOCKEN lsb: 0  msb: 0 INPUT
		NetFlow* PLL0PD_A0_B; // net ID: PLL0PD lsb: 0  msb: 0 INPUT
		NetFlow* PLL0REFCLKSEL_A2_B; // net ID: PLL0REFCLKSEL lsb: 0  msb: 2 INPUT
		NetFlow* PLL0REFCLKSEL_A1_B; // net ID: PLL0REFCLKSEL lsb: 0  msb: 2 INPUT
		NetFlow* PLL0REFCLKSEL_A0_B; // net ID: PLL0REFCLKSEL lsb: 0  msb: 2 INPUT
		NetFlow* PLL0RESET_A0_B; // net ID: PLL0RESET lsb: 0  msb: 0 INPUT
		NetFlow* PLL1LOCKDETCLK_A0_B; // net ID: PLL1LOCKDETCLK lsb: 0  msb: 0 INPUT
		NetFlow* PLL1LOCKEN_A0_B; // net ID: PLL1LOCKEN lsb: 0  msb: 0 INPUT
		NetFlow* PLL1PD_A0_B; // net ID: PLL1PD lsb: 0  msb: 0 INPUT
		NetFlow* PLL1REFCLKSEL_A2_B; // net ID: PLL1REFCLKSEL lsb: 0  msb: 2 INPUT
		NetFlow* PLL1REFCLKSEL_A1_B; // net ID: PLL1REFCLKSEL lsb: 0  msb: 2 INPUT
		NetFlow* PLL1REFCLKSEL_A0_B; // net ID: PLL1REFCLKSEL lsb: 0  msb: 2 INPUT
		NetFlow* PLL1RESET_A0_B; // net ID: PLL1RESET lsb: 0  msb: 0 INPUT
		NetFlow* PLLRSVD1_A15_B; // net ID: PLLRSVD1 lsb: 0  msb: 15 INPUT
		NetFlow* PLLRSVD1_A14_B; // net ID: PLLRSVD1 lsb: 0  msb: 15 INPUT
		NetFlow* PLLRSVD1_A13_B; // net ID: PLLRSVD1 lsb: 0  msb: 15 INPUT
		NetFlow* PLLRSVD1_A12_B; // net ID: PLLRSVD1 lsb: 0  msb: 15 INPUT
		NetFlow* PLLRSVD1_A11_B; // net ID: PLLRSVD1 lsb: 0  msb: 15 INPUT
		NetFlow* PLLRSVD1_A10_B; // net ID: PLLRSVD1 lsb: 0  msb: 15 INPUT
		NetFlow* PLLRSVD1_A9_B; // net ID: PLLRSVD1 lsb: 0  msb: 15 INPUT
		NetFlow* PLLRSVD1_A8_B; // net ID: PLLRSVD1 lsb: 0  msb: 15 INPUT
		NetFlow* PLLRSVD1_A7_B; // net ID: PLLRSVD1 lsb: 0  msb: 15 INPUT
		NetFlow* PLLRSVD1_A6_B; // net ID: PLLRSVD1 lsb: 0  msb: 15 INPUT
		NetFlow* PLLRSVD1_A5_B; // net ID: PLLRSVD1 lsb: 0  msb: 15 INPUT
		NetFlow* PLLRSVD1_A4_B; // net ID: PLLRSVD1 lsb: 0  msb: 15 INPUT
		NetFlow* PLLRSVD1_A3_B; // net ID: PLLRSVD1 lsb: 0  msb: 15 INPUT
		NetFlow* PLLRSVD1_A2_B; // net ID: PLLRSVD1 lsb: 0  msb: 15 INPUT
		NetFlow* PLLRSVD1_A1_B; // net ID: PLLRSVD1 lsb: 0  msb: 15 INPUT
		NetFlow* PLLRSVD1_A0_B; // net ID: PLLRSVD1 lsb: 0  msb: 15 INPUT
		NetFlow* PLLRSVD2_A4_B; // net ID: PLLRSVD2 lsb: 0  msb: 4 INPUT
		NetFlow* PLLRSVD2_A3_B; // net ID: PLLRSVD2 lsb: 0  msb: 4 INPUT
		NetFlow* PLLRSVD2_A2_B; // net ID: PLLRSVD2 lsb: 0  msb: 4 INPUT
		NetFlow* PLLRSVD2_A1_B; // net ID: PLLRSVD2 lsb: 0  msb: 4 INPUT
		NetFlow* PLLRSVD2_A0_B; // net ID: PLLRSVD2 lsb: 0  msb: 4 INPUT
		NetFlow* PMARSVD_A7_B; // net ID: PMARSVD lsb: 0  msb: 7 INPUT
		NetFlow* PMARSVD_A6_B; // net ID: PMARSVD lsb: 0  msb: 7 INPUT
		NetFlow* PMARSVD_A5_B; // net ID: PMARSVD lsb: 0  msb: 7 INPUT
		NetFlow* PMARSVD_A4_B; // net ID: PMARSVD lsb: 0  msb: 7 INPUT
		NetFlow* PMARSVD_A3_B; // net ID: PMARSVD lsb: 0  msb: 7 INPUT
		NetFlow* PMARSVD_A2_B; // net ID: PMARSVD lsb: 0  msb: 7 INPUT
		NetFlow* PMARSVD_A1_B; // net ID: PMARSVD lsb: 0  msb: 7 INPUT
		NetFlow* PMARSVD_A0_B; // net ID: PMARSVD lsb: 0  msb: 7 INPUT
		NetFlow* RCALENB_A0_B; // net ID: RCALENB lsb: 0  msb: 0 INPUT
		
		public: X_GTPE2_COMMON(
			const char * name,
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_int_t BIAS_CFG, // Default: 64'h0000000000000000
			parameter_int_t COMMON_CFG, // Default: 32'h00000000
			parameter_int_t PLL0_CFG, // Default: 27'h01F03DC
			parameter_int_t PLL0_DMON_CFG, // Default: 1'b0
			parameter_int_t PLL0_FBDIV, // Default: 4
			parameter_int_t PLL0_FBDIV_45, // Default: 5
			parameter_int_t PLL0_INIT_CFG, // Default: 24'h00001E
			parameter_int_t PLL0_LOCK_CFG, // Default: 9'h1E8
			parameter_int_t PLL0_REFCLK_DIV, // Default: 1
			parameter_int_t PLL1_CFG, // Default: 27'h01F03DC
			parameter_int_t PLL1_DMON_CFG, // Default: 1'b0
			parameter_int_t PLL1_FBDIV, // Default: 4
			parameter_int_t PLL1_FBDIV_45, // Default: 5
			parameter_int_t PLL1_INIT_CFG, // Default: 24'h00001E
			parameter_int_t PLL1_LOCK_CFG, // Default: 9'h1E8
			parameter_int_t PLL1_REFCLK_DIV, // Default: 1
			parameter_int_t PLL_CLKOUT_CFG, // Default: 8'b00000000
			parameter_int_t RSVD_ATTR0, // Default: 16'h0000
			parameter_int_t RSVD_ATTR1, // Default: 16'h0000
			parameter_int_t SIM_PLL0REFCLK_SEL, // Default: 3'b001
			parameter_int_t SIM_PLL1REFCLK_SEL, // Default: 3'b001
			parameter_enum_t SIM_RESET_SPEEDUP, // Default: "TRUE"
			parameter_string_t SIM_VERSION, // Default: "1.0"
			//Verilog Ports in definition order:
			NetFlow* DMONITOROUT_A7_B, // net ID: DMONITOROUT lsb: 0  msb: 7 OUTPUT
			NetFlow* DMONITOROUT_A6_B, // net ID: DMONITOROUT lsb: 0  msb: 7 OUTPUT
			NetFlow* DMONITOROUT_A5_B, // net ID: DMONITOROUT lsb: 0  msb: 7 OUTPUT
			NetFlow* DMONITOROUT_A4_B, // net ID: DMONITOROUT lsb: 0  msb: 7 OUTPUT
			NetFlow* DMONITOROUT_A3_B, // net ID: DMONITOROUT lsb: 0  msb: 7 OUTPUT
			NetFlow* DMONITOROUT_A2_B, // net ID: DMONITOROUT lsb: 0  msb: 7 OUTPUT
			NetFlow* DMONITOROUT_A1_B, // net ID: DMONITOROUT lsb: 0  msb: 7 OUTPUT
			NetFlow* DMONITOROUT_A0_B, // net ID: DMONITOROUT lsb: 0  msb: 7 OUTPUT
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
			NetFlow* PLL0FBCLKLOST_A0_B, // net ID: PLL0FBCLKLOST lsb: 0  msb: 0 OUTPUT
			NetFlow* PLL0LOCK_A0_B, // net ID: PLL0LOCK lsb: 0  msb: 0 OUTPUT
			NetFlow* PLL0OUTCLK_A0_B, // net ID: PLL0OUTCLK lsb: 0  msb: 0 OUTPUT
			NetFlow* PLL0OUTREFCLK_A0_B, // net ID: PLL0OUTREFCLK lsb: 0  msb: 0 OUTPUT
			NetFlow* PLL0REFCLKLOST_A0_B, // net ID: PLL0REFCLKLOST lsb: 0  msb: 0 OUTPUT
			NetFlow* PLL1FBCLKLOST_A0_B, // net ID: PLL1FBCLKLOST lsb: 0  msb: 0 OUTPUT
			NetFlow* PLL1LOCK_A0_B, // net ID: PLL1LOCK lsb: 0  msb: 0 OUTPUT
			NetFlow* PLL1OUTCLK_A0_B, // net ID: PLL1OUTCLK lsb: 0  msb: 0 OUTPUT
			NetFlow* PLL1OUTREFCLK_A0_B, // net ID: PLL1OUTREFCLK lsb: 0  msb: 0 OUTPUT
			NetFlow* PLL1REFCLKLOST_A0_B, // net ID: PLL1REFCLKLOST lsb: 0  msb: 0 OUTPUT
			NetFlow* PMARSVDOUT_A15_B, // net ID: PMARSVDOUT lsb: 0  msb: 15 OUTPUT
			NetFlow* PMARSVDOUT_A14_B, // net ID: PMARSVDOUT lsb: 0  msb: 15 OUTPUT
			NetFlow* PMARSVDOUT_A13_B, // net ID: PMARSVDOUT lsb: 0  msb: 15 OUTPUT
			NetFlow* PMARSVDOUT_A12_B, // net ID: PMARSVDOUT lsb: 0  msb: 15 OUTPUT
			NetFlow* PMARSVDOUT_A11_B, // net ID: PMARSVDOUT lsb: 0  msb: 15 OUTPUT
			NetFlow* PMARSVDOUT_A10_B, // net ID: PMARSVDOUT lsb: 0  msb: 15 OUTPUT
			NetFlow* PMARSVDOUT_A9_B, // net ID: PMARSVDOUT lsb: 0  msb: 15 OUTPUT
			NetFlow* PMARSVDOUT_A8_B, // net ID: PMARSVDOUT lsb: 0  msb: 15 OUTPUT
			NetFlow* PMARSVDOUT_A7_B, // net ID: PMARSVDOUT lsb: 0  msb: 15 OUTPUT
			NetFlow* PMARSVDOUT_A6_B, // net ID: PMARSVDOUT lsb: 0  msb: 15 OUTPUT
			NetFlow* PMARSVDOUT_A5_B, // net ID: PMARSVDOUT lsb: 0  msb: 15 OUTPUT
			NetFlow* PMARSVDOUT_A4_B, // net ID: PMARSVDOUT lsb: 0  msb: 15 OUTPUT
			NetFlow* PMARSVDOUT_A3_B, // net ID: PMARSVDOUT lsb: 0  msb: 15 OUTPUT
			NetFlow* PMARSVDOUT_A2_B, // net ID: PMARSVDOUT lsb: 0  msb: 15 OUTPUT
			NetFlow* PMARSVDOUT_A1_B, // net ID: PMARSVDOUT lsb: 0  msb: 15 OUTPUT
			NetFlow* PMARSVDOUT_A0_B, // net ID: PMARSVDOUT lsb: 0  msb: 15 OUTPUT
			NetFlow* REFCLKOUTMONITOR0_A0_B, // net ID: REFCLKOUTMONITOR0 lsb: 0  msb: 0 OUTPUT
			NetFlow* REFCLKOUTMONITOR1_A0_B, // net ID: REFCLKOUTMONITOR1 lsb: 0  msb: 0 OUTPUT
			NetFlow* BGBYPASSB_A0_B, // net ID: BGBYPASSB lsb: 0  msb: 0 INPUT
			NetFlow* BGMONITORENB_A0_B, // net ID: BGMONITORENB lsb: 0  msb: 0 INPUT
			NetFlow* BGPDB_A0_B, // net ID: BGPDB lsb: 0  msb: 0 INPUT
			NetFlow* BGRCALOVRD_A4_B, // net ID: BGRCALOVRD lsb: 0  msb: 4 INPUT
			NetFlow* BGRCALOVRD_A3_B, // net ID: BGRCALOVRD lsb: 0  msb: 4 INPUT
			NetFlow* BGRCALOVRD_A2_B, // net ID: BGRCALOVRD lsb: 0  msb: 4 INPUT
			NetFlow* BGRCALOVRD_A1_B, // net ID: BGRCALOVRD lsb: 0  msb: 4 INPUT
			NetFlow* BGRCALOVRD_A0_B, // net ID: BGRCALOVRD lsb: 0  msb: 4 INPUT
			NetFlow* BGRCALOVRDENB_A0_B, // net ID: BGRCALOVRDENB lsb: 0  msb: 0 INPUT
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
			NetFlow* GTEASTREFCLK0_A0_B, // net ID: GTEASTREFCLK0 lsb: 0  msb: 0 INPUT
			NetFlow* GTEASTREFCLK1_A0_B, // net ID: GTEASTREFCLK1 lsb: 0  msb: 0 INPUT
			NetFlow* GTGREFCLK0_A0_B, // net ID: GTGREFCLK0 lsb: 0  msb: 0 INPUT
			NetFlow* GTGREFCLK1_A0_B, // net ID: GTGREFCLK1 lsb: 0  msb: 0 INPUT
			NetFlow* GTREFCLK0_A0_B, // net ID: GTREFCLK0 lsb: 0  msb: 0 INPUT
			NetFlow* GTREFCLK1_A0_B, // net ID: GTREFCLK1 lsb: 0  msb: 0 INPUT
			NetFlow* GTWESTREFCLK0_A0_B, // net ID: GTWESTREFCLK0 lsb: 0  msb: 0 INPUT
			NetFlow* GTWESTREFCLK1_A0_B, // net ID: GTWESTREFCLK1 lsb: 0  msb: 0 INPUT
			NetFlow* PLL0LOCKDETCLK_A0_B, // net ID: PLL0LOCKDETCLK lsb: 0  msb: 0 INPUT
			NetFlow* PLL0LOCKEN_A0_B, // net ID: PLL0LOCKEN lsb: 0  msb: 0 INPUT
			NetFlow* PLL0PD_A0_B, // net ID: PLL0PD lsb: 0  msb: 0 INPUT
			NetFlow* PLL0REFCLKSEL_A2_B, // net ID: PLL0REFCLKSEL lsb: 0  msb: 2 INPUT
			NetFlow* PLL0REFCLKSEL_A1_B, // net ID: PLL0REFCLKSEL lsb: 0  msb: 2 INPUT
			NetFlow* PLL0REFCLKSEL_A0_B, // net ID: PLL0REFCLKSEL lsb: 0  msb: 2 INPUT
			NetFlow* PLL0RESET_A0_B, // net ID: PLL0RESET lsb: 0  msb: 0 INPUT
			NetFlow* PLL1LOCKDETCLK_A0_B, // net ID: PLL1LOCKDETCLK lsb: 0  msb: 0 INPUT
			NetFlow* PLL1LOCKEN_A0_B, // net ID: PLL1LOCKEN lsb: 0  msb: 0 INPUT
			NetFlow* PLL1PD_A0_B, // net ID: PLL1PD lsb: 0  msb: 0 INPUT
			NetFlow* PLL1REFCLKSEL_A2_B, // net ID: PLL1REFCLKSEL lsb: 0  msb: 2 INPUT
			NetFlow* PLL1REFCLKSEL_A1_B, // net ID: PLL1REFCLKSEL lsb: 0  msb: 2 INPUT
			NetFlow* PLL1REFCLKSEL_A0_B, // net ID: PLL1REFCLKSEL lsb: 0  msb: 2 INPUT
			NetFlow* PLL1RESET_A0_B, // net ID: PLL1RESET lsb: 0  msb: 0 INPUT
			NetFlow* PLLRSVD1_A15_B, // net ID: PLLRSVD1 lsb: 0  msb: 15 INPUT
			NetFlow* PLLRSVD1_A14_B, // net ID: PLLRSVD1 lsb: 0  msb: 15 INPUT
			NetFlow* PLLRSVD1_A13_B, // net ID: PLLRSVD1 lsb: 0  msb: 15 INPUT
			NetFlow* PLLRSVD1_A12_B, // net ID: PLLRSVD1 lsb: 0  msb: 15 INPUT
			NetFlow* PLLRSVD1_A11_B, // net ID: PLLRSVD1 lsb: 0  msb: 15 INPUT
			NetFlow* PLLRSVD1_A10_B, // net ID: PLLRSVD1 lsb: 0  msb: 15 INPUT
			NetFlow* PLLRSVD1_A9_B, // net ID: PLLRSVD1 lsb: 0  msb: 15 INPUT
			NetFlow* PLLRSVD1_A8_B, // net ID: PLLRSVD1 lsb: 0  msb: 15 INPUT
			NetFlow* PLLRSVD1_A7_B, // net ID: PLLRSVD1 lsb: 0  msb: 15 INPUT
			NetFlow* PLLRSVD1_A6_B, // net ID: PLLRSVD1 lsb: 0  msb: 15 INPUT
			NetFlow* PLLRSVD1_A5_B, // net ID: PLLRSVD1 lsb: 0  msb: 15 INPUT
			NetFlow* PLLRSVD1_A4_B, // net ID: PLLRSVD1 lsb: 0  msb: 15 INPUT
			NetFlow* PLLRSVD1_A3_B, // net ID: PLLRSVD1 lsb: 0  msb: 15 INPUT
			NetFlow* PLLRSVD1_A2_B, // net ID: PLLRSVD1 lsb: 0  msb: 15 INPUT
			NetFlow* PLLRSVD1_A1_B, // net ID: PLLRSVD1 lsb: 0  msb: 15 INPUT
			NetFlow* PLLRSVD1_A0_B, // net ID: PLLRSVD1 lsb: 0  msb: 15 INPUT
			NetFlow* PLLRSVD2_A4_B, // net ID: PLLRSVD2 lsb: 0  msb: 4 INPUT
			NetFlow* PLLRSVD2_A3_B, // net ID: PLLRSVD2 lsb: 0  msb: 4 INPUT
			NetFlow* PLLRSVD2_A2_B, // net ID: PLLRSVD2 lsb: 0  msb: 4 INPUT
			NetFlow* PLLRSVD2_A1_B, // net ID: PLLRSVD2 lsb: 0  msb: 4 INPUT
			NetFlow* PLLRSVD2_A0_B, // net ID: PLLRSVD2 lsb: 0  msb: 4 INPUT
			NetFlow* PMARSVD_A7_B, // net ID: PMARSVD lsb: 0  msb: 7 INPUT
			NetFlow* PMARSVD_A6_B, // net ID: PMARSVD lsb: 0  msb: 7 INPUT
			NetFlow* PMARSVD_A5_B, // net ID: PMARSVD lsb: 0  msb: 7 INPUT
			NetFlow* PMARSVD_A4_B, // net ID: PMARSVD lsb: 0  msb: 7 INPUT
			NetFlow* PMARSVD_A3_B, // net ID: PMARSVD lsb: 0  msb: 7 INPUT
			NetFlow* PMARSVD_A2_B, // net ID: PMARSVD lsb: 0  msb: 7 INPUT
			NetFlow* PMARSVD_A1_B, // net ID: PMARSVD lsb: 0  msb: 7 INPUT
			NetFlow* PMARSVD_A0_B, // net ID: PMARSVD lsb: 0  msb: 7 INPUT
			NetFlow* RCALENB_A0_B // net ID: RCALENB lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			this->BIAS_CFG = BIAS_CFG; // Default: 64'h0000000000000000
			this->COMMON_CFG = COMMON_CFG; // Default: 32'h00000000
			this->PLL0_CFG = PLL0_CFG; // Default: 27'h01F03DC
			this->PLL0_DMON_CFG = PLL0_DMON_CFG; // Default: 1'b0
			this->PLL0_FBDIV = PLL0_FBDIV; // Default: 4
			this->PLL0_FBDIV_45 = PLL0_FBDIV_45; // Default: 5
			this->PLL0_INIT_CFG = PLL0_INIT_CFG; // Default: 24'h00001E
			this->PLL0_LOCK_CFG = PLL0_LOCK_CFG; // Default: 9'h1E8
			this->PLL0_REFCLK_DIV = PLL0_REFCLK_DIV; // Default: 1
			this->PLL1_CFG = PLL1_CFG; // Default: 27'h01F03DC
			this->PLL1_DMON_CFG = PLL1_DMON_CFG; // Default: 1'b0
			this->PLL1_FBDIV = PLL1_FBDIV; // Default: 4
			this->PLL1_FBDIV_45 = PLL1_FBDIV_45; // Default: 5
			this->PLL1_INIT_CFG = PLL1_INIT_CFG; // Default: 24'h00001E
			this->PLL1_LOCK_CFG = PLL1_LOCK_CFG; // Default: 9'h1E8
			this->PLL1_REFCLK_DIV = PLL1_REFCLK_DIV; // Default: 1
			this->PLL_CLKOUT_CFG = PLL_CLKOUT_CFG; // Default: 8'b00000000
			this->RSVD_ATTR0 = RSVD_ATTR0; // Default: 16'h0000
			this->RSVD_ATTR1 = RSVD_ATTR1; // Default: 16'h0000
			this->SIM_PLL0REFCLK_SEL = SIM_PLL0REFCLK_SEL; // Default: 3'b001
			this->SIM_PLL1REFCLK_SEL = SIM_PLL1REFCLK_SEL; // Default: 3'b001
			this->SIM_RESET_SPEEDUP = SIM_RESET_SPEEDUP; // Default: "TRUE"
			this->SIM_VERSION = SIM_VERSION; // Default: "1.0"
			//Verilog Ports in definition order:
			this->DMONITOROUT_A7_B = DMONITOROUT_A7_B; // net ID: DMONITOROUT lsb: 0  msb: 7 OUTPUT
			this->DMONITOROUT_A6_B = DMONITOROUT_A6_B; // net ID: DMONITOROUT lsb: 0  msb: 7 OUTPUT
			this->DMONITOROUT_A5_B = DMONITOROUT_A5_B; // net ID: DMONITOROUT lsb: 0  msb: 7 OUTPUT
			this->DMONITOROUT_A4_B = DMONITOROUT_A4_B; // net ID: DMONITOROUT lsb: 0  msb: 7 OUTPUT
			this->DMONITOROUT_A3_B = DMONITOROUT_A3_B; // net ID: DMONITOROUT lsb: 0  msb: 7 OUTPUT
			this->DMONITOROUT_A2_B = DMONITOROUT_A2_B; // net ID: DMONITOROUT lsb: 0  msb: 7 OUTPUT
			this->DMONITOROUT_A1_B = DMONITOROUT_A1_B; // net ID: DMONITOROUT lsb: 0  msb: 7 OUTPUT
			this->DMONITOROUT_A0_B = DMONITOROUT_A0_B; // net ID: DMONITOROUT lsb: 0  msb: 7 OUTPUT
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
			this->PLL0FBCLKLOST_A0_B = PLL0FBCLKLOST_A0_B; // net ID: PLL0FBCLKLOST lsb: 0  msb: 0 OUTPUT
			this->PLL0LOCK_A0_B = PLL0LOCK_A0_B; // net ID: PLL0LOCK lsb: 0  msb: 0 OUTPUT
			this->PLL0OUTCLK_A0_B = PLL0OUTCLK_A0_B; // net ID: PLL0OUTCLK lsb: 0  msb: 0 OUTPUT
			this->PLL0OUTREFCLK_A0_B = PLL0OUTREFCLK_A0_B; // net ID: PLL0OUTREFCLK lsb: 0  msb: 0 OUTPUT
			this->PLL0REFCLKLOST_A0_B = PLL0REFCLKLOST_A0_B; // net ID: PLL0REFCLKLOST lsb: 0  msb: 0 OUTPUT
			this->PLL1FBCLKLOST_A0_B = PLL1FBCLKLOST_A0_B; // net ID: PLL1FBCLKLOST lsb: 0  msb: 0 OUTPUT
			this->PLL1LOCK_A0_B = PLL1LOCK_A0_B; // net ID: PLL1LOCK lsb: 0  msb: 0 OUTPUT
			this->PLL1OUTCLK_A0_B = PLL1OUTCLK_A0_B; // net ID: PLL1OUTCLK lsb: 0  msb: 0 OUTPUT
			this->PLL1OUTREFCLK_A0_B = PLL1OUTREFCLK_A0_B; // net ID: PLL1OUTREFCLK lsb: 0  msb: 0 OUTPUT
			this->PLL1REFCLKLOST_A0_B = PLL1REFCLKLOST_A0_B; // net ID: PLL1REFCLKLOST lsb: 0  msb: 0 OUTPUT
			this->PMARSVDOUT_A15_B = PMARSVDOUT_A15_B; // net ID: PMARSVDOUT lsb: 0  msb: 15 OUTPUT
			this->PMARSVDOUT_A14_B = PMARSVDOUT_A14_B; // net ID: PMARSVDOUT lsb: 0  msb: 15 OUTPUT
			this->PMARSVDOUT_A13_B = PMARSVDOUT_A13_B; // net ID: PMARSVDOUT lsb: 0  msb: 15 OUTPUT
			this->PMARSVDOUT_A12_B = PMARSVDOUT_A12_B; // net ID: PMARSVDOUT lsb: 0  msb: 15 OUTPUT
			this->PMARSVDOUT_A11_B = PMARSVDOUT_A11_B; // net ID: PMARSVDOUT lsb: 0  msb: 15 OUTPUT
			this->PMARSVDOUT_A10_B = PMARSVDOUT_A10_B; // net ID: PMARSVDOUT lsb: 0  msb: 15 OUTPUT
			this->PMARSVDOUT_A9_B = PMARSVDOUT_A9_B; // net ID: PMARSVDOUT lsb: 0  msb: 15 OUTPUT
			this->PMARSVDOUT_A8_B = PMARSVDOUT_A8_B; // net ID: PMARSVDOUT lsb: 0  msb: 15 OUTPUT
			this->PMARSVDOUT_A7_B = PMARSVDOUT_A7_B; // net ID: PMARSVDOUT lsb: 0  msb: 15 OUTPUT
			this->PMARSVDOUT_A6_B = PMARSVDOUT_A6_B; // net ID: PMARSVDOUT lsb: 0  msb: 15 OUTPUT
			this->PMARSVDOUT_A5_B = PMARSVDOUT_A5_B; // net ID: PMARSVDOUT lsb: 0  msb: 15 OUTPUT
			this->PMARSVDOUT_A4_B = PMARSVDOUT_A4_B; // net ID: PMARSVDOUT lsb: 0  msb: 15 OUTPUT
			this->PMARSVDOUT_A3_B = PMARSVDOUT_A3_B; // net ID: PMARSVDOUT lsb: 0  msb: 15 OUTPUT
			this->PMARSVDOUT_A2_B = PMARSVDOUT_A2_B; // net ID: PMARSVDOUT lsb: 0  msb: 15 OUTPUT
			this->PMARSVDOUT_A1_B = PMARSVDOUT_A1_B; // net ID: PMARSVDOUT lsb: 0  msb: 15 OUTPUT
			this->PMARSVDOUT_A0_B = PMARSVDOUT_A0_B; // net ID: PMARSVDOUT lsb: 0  msb: 15 OUTPUT
			this->REFCLKOUTMONITOR0_A0_B = REFCLKOUTMONITOR0_A0_B; // net ID: REFCLKOUTMONITOR0 lsb: 0  msb: 0 OUTPUT
			this->REFCLKOUTMONITOR1_A0_B = REFCLKOUTMONITOR1_A0_B; // net ID: REFCLKOUTMONITOR1 lsb: 0  msb: 0 OUTPUT
			this->BGBYPASSB_A0_B = BGBYPASSB_A0_B; // net ID: BGBYPASSB lsb: 0  msb: 0 INPUT
			this->BGMONITORENB_A0_B = BGMONITORENB_A0_B; // net ID: BGMONITORENB lsb: 0  msb: 0 INPUT
			this->BGPDB_A0_B = BGPDB_A0_B; // net ID: BGPDB lsb: 0  msb: 0 INPUT
			this->BGRCALOVRD_A4_B = BGRCALOVRD_A4_B; // net ID: BGRCALOVRD lsb: 0  msb: 4 INPUT
			this->BGRCALOVRD_A3_B = BGRCALOVRD_A3_B; // net ID: BGRCALOVRD lsb: 0  msb: 4 INPUT
			this->BGRCALOVRD_A2_B = BGRCALOVRD_A2_B; // net ID: BGRCALOVRD lsb: 0  msb: 4 INPUT
			this->BGRCALOVRD_A1_B = BGRCALOVRD_A1_B; // net ID: BGRCALOVRD lsb: 0  msb: 4 INPUT
			this->BGRCALOVRD_A0_B = BGRCALOVRD_A0_B; // net ID: BGRCALOVRD lsb: 0  msb: 4 INPUT
			this->BGRCALOVRDENB_A0_B = BGRCALOVRDENB_A0_B; // net ID: BGRCALOVRDENB lsb: 0  msb: 0 INPUT
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
			this->GTEASTREFCLK0_A0_B = GTEASTREFCLK0_A0_B; // net ID: GTEASTREFCLK0 lsb: 0  msb: 0 INPUT
			this->GTEASTREFCLK1_A0_B = GTEASTREFCLK1_A0_B; // net ID: GTEASTREFCLK1 lsb: 0  msb: 0 INPUT
			this->GTGREFCLK0_A0_B = GTGREFCLK0_A0_B; // net ID: GTGREFCLK0 lsb: 0  msb: 0 INPUT
			this->GTGREFCLK1_A0_B = GTGREFCLK1_A0_B; // net ID: GTGREFCLK1 lsb: 0  msb: 0 INPUT
			this->GTREFCLK0_A0_B = GTREFCLK0_A0_B; // net ID: GTREFCLK0 lsb: 0  msb: 0 INPUT
			this->GTREFCLK1_A0_B = GTREFCLK1_A0_B; // net ID: GTREFCLK1 lsb: 0  msb: 0 INPUT
			this->GTWESTREFCLK0_A0_B = GTWESTREFCLK0_A0_B; // net ID: GTWESTREFCLK0 lsb: 0  msb: 0 INPUT
			this->GTWESTREFCLK1_A0_B = GTWESTREFCLK1_A0_B; // net ID: GTWESTREFCLK1 lsb: 0  msb: 0 INPUT
			this->PLL0LOCKDETCLK_A0_B = PLL0LOCKDETCLK_A0_B; // net ID: PLL0LOCKDETCLK lsb: 0  msb: 0 INPUT
			this->PLL0LOCKEN_A0_B = PLL0LOCKEN_A0_B; // net ID: PLL0LOCKEN lsb: 0  msb: 0 INPUT
			this->PLL0PD_A0_B = PLL0PD_A0_B; // net ID: PLL0PD lsb: 0  msb: 0 INPUT
			this->PLL0REFCLKSEL_A2_B = PLL0REFCLKSEL_A2_B; // net ID: PLL0REFCLKSEL lsb: 0  msb: 2 INPUT
			this->PLL0REFCLKSEL_A1_B = PLL0REFCLKSEL_A1_B; // net ID: PLL0REFCLKSEL lsb: 0  msb: 2 INPUT
			this->PLL0REFCLKSEL_A0_B = PLL0REFCLKSEL_A0_B; // net ID: PLL0REFCLKSEL lsb: 0  msb: 2 INPUT
			this->PLL0RESET_A0_B = PLL0RESET_A0_B; // net ID: PLL0RESET lsb: 0  msb: 0 INPUT
			this->PLL1LOCKDETCLK_A0_B = PLL1LOCKDETCLK_A0_B; // net ID: PLL1LOCKDETCLK lsb: 0  msb: 0 INPUT
			this->PLL1LOCKEN_A0_B = PLL1LOCKEN_A0_B; // net ID: PLL1LOCKEN lsb: 0  msb: 0 INPUT
			this->PLL1PD_A0_B = PLL1PD_A0_B; // net ID: PLL1PD lsb: 0  msb: 0 INPUT
			this->PLL1REFCLKSEL_A2_B = PLL1REFCLKSEL_A2_B; // net ID: PLL1REFCLKSEL lsb: 0  msb: 2 INPUT
			this->PLL1REFCLKSEL_A1_B = PLL1REFCLKSEL_A1_B; // net ID: PLL1REFCLKSEL lsb: 0  msb: 2 INPUT
			this->PLL1REFCLKSEL_A0_B = PLL1REFCLKSEL_A0_B; // net ID: PLL1REFCLKSEL lsb: 0  msb: 2 INPUT
			this->PLL1RESET_A0_B = PLL1RESET_A0_B; // net ID: PLL1RESET lsb: 0  msb: 0 INPUT
			this->PLLRSVD1_A15_B = PLLRSVD1_A15_B; // net ID: PLLRSVD1 lsb: 0  msb: 15 INPUT
			this->PLLRSVD1_A14_B = PLLRSVD1_A14_B; // net ID: PLLRSVD1 lsb: 0  msb: 15 INPUT
			this->PLLRSVD1_A13_B = PLLRSVD1_A13_B; // net ID: PLLRSVD1 lsb: 0  msb: 15 INPUT
			this->PLLRSVD1_A12_B = PLLRSVD1_A12_B; // net ID: PLLRSVD1 lsb: 0  msb: 15 INPUT
			this->PLLRSVD1_A11_B = PLLRSVD1_A11_B; // net ID: PLLRSVD1 lsb: 0  msb: 15 INPUT
			this->PLLRSVD1_A10_B = PLLRSVD1_A10_B; // net ID: PLLRSVD1 lsb: 0  msb: 15 INPUT
			this->PLLRSVD1_A9_B = PLLRSVD1_A9_B; // net ID: PLLRSVD1 lsb: 0  msb: 15 INPUT
			this->PLLRSVD1_A8_B = PLLRSVD1_A8_B; // net ID: PLLRSVD1 lsb: 0  msb: 15 INPUT
			this->PLLRSVD1_A7_B = PLLRSVD1_A7_B; // net ID: PLLRSVD1 lsb: 0  msb: 15 INPUT
			this->PLLRSVD1_A6_B = PLLRSVD1_A6_B; // net ID: PLLRSVD1 lsb: 0  msb: 15 INPUT
			this->PLLRSVD1_A5_B = PLLRSVD1_A5_B; // net ID: PLLRSVD1 lsb: 0  msb: 15 INPUT
			this->PLLRSVD1_A4_B = PLLRSVD1_A4_B; // net ID: PLLRSVD1 lsb: 0  msb: 15 INPUT
			this->PLLRSVD1_A3_B = PLLRSVD1_A3_B; // net ID: PLLRSVD1 lsb: 0  msb: 15 INPUT
			this->PLLRSVD1_A2_B = PLLRSVD1_A2_B; // net ID: PLLRSVD1 lsb: 0  msb: 15 INPUT
			this->PLLRSVD1_A1_B = PLLRSVD1_A1_B; // net ID: PLLRSVD1 lsb: 0  msb: 15 INPUT
			this->PLLRSVD1_A0_B = PLLRSVD1_A0_B; // net ID: PLLRSVD1 lsb: 0  msb: 15 INPUT
			this->PLLRSVD2_A4_B = PLLRSVD2_A4_B; // net ID: PLLRSVD2 lsb: 0  msb: 4 INPUT
			this->PLLRSVD2_A3_B = PLLRSVD2_A3_B; // net ID: PLLRSVD2 lsb: 0  msb: 4 INPUT
			this->PLLRSVD2_A2_B = PLLRSVD2_A2_B; // net ID: PLLRSVD2 lsb: 0  msb: 4 INPUT
			this->PLLRSVD2_A1_B = PLLRSVD2_A1_B; // net ID: PLLRSVD2 lsb: 0  msb: 4 INPUT
			this->PLLRSVD2_A0_B = PLLRSVD2_A0_B; // net ID: PLLRSVD2 lsb: 0  msb: 4 INPUT
			this->PMARSVD_A7_B = PMARSVD_A7_B; // net ID: PMARSVD lsb: 0  msb: 7 INPUT
			this->PMARSVD_A6_B = PMARSVD_A6_B; // net ID: PMARSVD lsb: 0  msb: 7 INPUT
			this->PMARSVD_A5_B = PMARSVD_A5_B; // net ID: PMARSVD lsb: 0  msb: 7 INPUT
			this->PMARSVD_A4_B = PMARSVD_A4_B; // net ID: PMARSVD lsb: 0  msb: 7 INPUT
			this->PMARSVD_A3_B = PMARSVD_A3_B; // net ID: PMARSVD lsb: 0  msb: 7 INPUT
			this->PMARSVD_A2_B = PMARSVD_A2_B; // net ID: PMARSVD lsb: 0  msb: 7 INPUT
			this->PMARSVD_A1_B = PMARSVD_A1_B; // net ID: PMARSVD lsb: 0  msb: 7 INPUT
			this->PMARSVD_A0_B = PMARSVD_A0_B; // net ID: PMARSVD lsb: 0  msb: 7 INPUT
			this->RCALENB_A0_B = RCALENB_A0_B; // net ID: RCALENB lsb: 0  msb: 0 INPUT
			
			register_wait_on_event_nets();
			
		}
		
		void register_wait_on_event_nets(){
		// TODO
		}
		
		void calculate(simtime_t time){
		// TODO
		}
		};
		
}
#endif // X_GTPE2_COMMON_H
