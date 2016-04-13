/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_GTPE2_COMMON: public Primitive{

		//Verilog Parameters:
		parameter_string_t LOC;
		parameter_string_t BIAS_CFG;
		parameter_string_t COMMON_CFG;
		parameter_string_t PLL0_CFG;
		parameter_string_t PLL0_DMON_CFG;
		parameter_string_t PLL0_FBDIV;
		parameter_string_t PLL0_FBDIV_45;
		parameter_string_t PLL0_INIT_CFG;
		parameter_string_t PLL0_LOCK_CFG;
		parameter_string_t PLL0_REFCLK_DIV;
		parameter_string_t PLL1_CFG;
		parameter_string_t PLL1_DMON_CFG;
		parameter_string_t PLL1_FBDIV;
		parameter_string_t PLL1_FBDIV_45;
		parameter_string_t PLL1_INIT_CFG;
		parameter_string_t PLL1_LOCK_CFG;
		parameter_string_t PLL1_REFCLK_DIV;
		parameter_string_t PLL_CLKOUT_CFG;
		parameter_string_t RSVD_ATTR0;
		parameter_string_t RSVD_ATTR1;
		parameter_string_t SIM_PLL0REFCLK_SEL;
		parameter_string_t SIM_PLL1REFCLK_SEL;
		parameter_enum_t SIM_RESET_SPEEDUP;
		parameter_string_t SIM_VERSION;
		//Verilog Ports in definition order:
		NetFlow* DMONITOROUT; // net ID: DMONITOROUT lsb: 0  msb: 0 OUTPUT
		NetFlow* DRPDO; // net ID: DRPDO lsb: 0  msb: 0 OUTPUT
		NetFlow* DRPRDY; // net ID: DRPRDY lsb: 0  msb: 0 OUTPUT
		NetFlow* PLL0FBCLKLOST; // net ID: PLL0FBCLKLOST lsb: 0  msb: 0 OUTPUT
		NetFlow* PLL0LOCK; // net ID: PLL0LOCK lsb: 0  msb: 0 OUTPUT
		NetFlow* PLL0OUTCLK; // net ID: PLL0OUTCLK lsb: 0  msb: 0 OUTPUT
		NetFlow* PLL0OUTREFCLK; // net ID: PLL0OUTREFCLK lsb: 0  msb: 0 OUTPUT
		NetFlow* PLL0REFCLKLOST; // net ID: PLL0REFCLKLOST lsb: 0  msb: 0 OUTPUT
		NetFlow* PLL1FBCLKLOST; // net ID: PLL1FBCLKLOST lsb: 0  msb: 0 OUTPUT
		NetFlow* PLL1LOCK; // net ID: PLL1LOCK lsb: 0  msb: 0 OUTPUT
		NetFlow* PLL1OUTCLK; // net ID: PLL1OUTCLK lsb: 0  msb: 0 OUTPUT
		NetFlow* PLL1OUTREFCLK; // net ID: PLL1OUTREFCLK lsb: 0  msb: 0 OUTPUT
		NetFlow* PLL1REFCLKLOST; // net ID: PLL1REFCLKLOST lsb: 0  msb: 0 OUTPUT
		NetFlow* PMARSVDOUT; // net ID: PMARSVDOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* REFCLKOUTMONITOR0; // net ID: REFCLKOUTMONITOR0 lsb: 0  msb: 0 OUTPUT
		NetFlow* REFCLKOUTMONITOR1; // net ID: REFCLKOUTMONITOR1 lsb: 0  msb: 0 OUTPUT
		NetFlow* BGBYPASSB; // net ID: BGBYPASSB lsb: 0  msb: 0 INPUT
		NetFlow* BGMONITORENB; // net ID: BGMONITORENB lsb: 0  msb: 0 INPUT
		NetFlow* BGPDB; // net ID: BGPDB lsb: 0  msb: 0 INPUT
		NetFlow* BGRCALOVRD; // net ID: BGRCALOVRD lsb: 0  msb: 4 INPUT
		NetFlow* BGRCALOVRDENB; // net ID: BGRCALOVRDENB lsb: 0  msb: 0 INPUT
		NetFlow* DRPADDR; // net ID: DRPADDR lsb: 0  msb: 7 INPUT
		NetFlow* DRPCLK; // net ID: DRPCLK lsb: 0  msb: 0 INPUT
		NetFlow* DRPDI; // net ID: DRPDI lsb: 0  msb: 15 INPUT
		NetFlow* DRPEN; // net ID: DRPEN lsb: 0  msb: 0 INPUT
		NetFlow* DRPWE; // net ID: DRPWE lsb: 0  msb: 0 INPUT
		NetFlow* GTEASTREFCLK0; // net ID: GTEASTREFCLK0 lsb: 0  msb: 0 INPUT
		NetFlow* GTEASTREFCLK1; // net ID: GTEASTREFCLK1 lsb: 0  msb: 0 INPUT
		NetFlow* GTGREFCLK0; // net ID: GTGREFCLK0 lsb: 0  msb: 0 INPUT
		NetFlow* GTGREFCLK1; // net ID: GTGREFCLK1 lsb: 0  msb: 0 INPUT
		NetFlow* GTREFCLK0; // net ID: GTREFCLK0 lsb: 0  msb: 0 INPUT
		NetFlow* GTREFCLK1; // net ID: GTREFCLK1 lsb: 0  msb: 0 INPUT
		NetFlow* GTWESTREFCLK0; // net ID: GTWESTREFCLK0 lsb: 0  msb: 0 INPUT
		NetFlow* GTWESTREFCLK1; // net ID: GTWESTREFCLK1 lsb: 0  msb: 0 INPUT
		NetFlow* PLL0LOCKDETCLK; // net ID: PLL0LOCKDETCLK lsb: 0  msb: 0 INPUT
		NetFlow* PLL0LOCKEN; // net ID: PLL0LOCKEN lsb: 0  msb: 0 INPUT
		NetFlow* PLL0PD; // net ID: PLL0PD lsb: 0  msb: 0 INPUT
		NetFlow* PLL0REFCLKSEL; // net ID: PLL0REFCLKSEL lsb: 0  msb: 2 INPUT
		NetFlow* PLL0RESET; // net ID: PLL0RESET lsb: 0  msb: 0 INPUT
		NetFlow* PLL1LOCKDETCLK; // net ID: PLL1LOCKDETCLK lsb: 0  msb: 0 INPUT
		NetFlow* PLL1LOCKEN; // net ID: PLL1LOCKEN lsb: 0  msb: 0 INPUT
		NetFlow* PLL1PD; // net ID: PLL1PD lsb: 0  msb: 0 INPUT
		NetFlow* PLL1REFCLKSEL; // net ID: PLL1REFCLKSEL lsb: 0  msb: 2 INPUT
		NetFlow* PLL1RESET; // net ID: PLL1RESET lsb: 0  msb: 0 INPUT
		NetFlow* PLLRSVD1; // net ID: PLLRSVD1 lsb: 0  msb: 15 INPUT
		NetFlow* PLLRSVD2; // net ID: PLLRSVD2 lsb: 0  msb: 4 INPUT
		NetFlow* PMARSVD; // net ID: PMARSVD lsb: 0  msb: 7 INPUT
		NetFlow* RCALENB; // net ID: RCALENB lsb: 0  msb: 0 INPUT
		
		X_GTPE2_COMMON(
			const char * name,
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_string_t BIAS_CFG, // Default: 64'h0000000000000000
			parameter_string_t COMMON_CFG, // Default: 32'h00000000
			parameter_string_t PLL0_CFG, // Default: 27'h01F03DC
			parameter_string_t PLL0_DMON_CFG, // Default: 1'b0
			parameter_string_t PLL0_FBDIV, // Default: 4
			parameter_string_t PLL0_FBDIV_45, // Default: 5
			parameter_string_t PLL0_INIT_CFG, // Default: 24'h00001E
			parameter_string_t PLL0_LOCK_CFG, // Default: 9'h1E8
			parameter_string_t PLL0_REFCLK_DIV, // Default: 1
			parameter_string_t PLL1_CFG, // Default: 27'h01F03DC
			parameter_string_t PLL1_DMON_CFG, // Default: 1'b0
			parameter_string_t PLL1_FBDIV, // Default: 4
			parameter_string_t PLL1_FBDIV_45, // Default: 5
			parameter_string_t PLL1_INIT_CFG, // Default: 24'h00001E
			parameter_string_t PLL1_LOCK_CFG, // Default: 9'h1E8
			parameter_string_t PLL1_REFCLK_DIV, // Default: 1
			parameter_string_t PLL_CLKOUT_CFG, // Default: 8'b00000000
			parameter_string_t RSVD_ATTR0, // Default: 16'h0000
			parameter_string_t RSVD_ATTR1, // Default: 16'h0000
			parameter_string_t SIM_PLL0REFCLK_SEL, // Default: 3'b001
			parameter_string_t SIM_PLL1REFCLK_SEL, // Default: 3'b001
			parameter_enum_t SIM_RESET_SPEEDUP, // Default: "TRUE"
			parameter_string_t SIM_VERSION, // Default: "1.0"
			//Verilog Ports in definition order:
			NetFlow* DMONITOROUT, // net ID: DMONITOROUT lsb: 0  msb: 0 OUTPUT
			NetFlow* DRPDO, // net ID: DRPDO lsb: 0  msb: 0 OUTPUT
			NetFlow* DRPRDY, // net ID: DRPRDY lsb: 0  msb: 0 OUTPUT
			NetFlow* PLL0FBCLKLOST, // net ID: PLL0FBCLKLOST lsb: 0  msb: 0 OUTPUT
			NetFlow* PLL0LOCK, // net ID: PLL0LOCK lsb: 0  msb: 0 OUTPUT
			NetFlow* PLL0OUTCLK, // net ID: PLL0OUTCLK lsb: 0  msb: 0 OUTPUT
			NetFlow* PLL0OUTREFCLK, // net ID: PLL0OUTREFCLK lsb: 0  msb: 0 OUTPUT
			NetFlow* PLL0REFCLKLOST, // net ID: PLL0REFCLKLOST lsb: 0  msb: 0 OUTPUT
			NetFlow* PLL1FBCLKLOST, // net ID: PLL1FBCLKLOST lsb: 0  msb: 0 OUTPUT
			NetFlow* PLL1LOCK, // net ID: PLL1LOCK lsb: 0  msb: 0 OUTPUT
			NetFlow* PLL1OUTCLK, // net ID: PLL1OUTCLK lsb: 0  msb: 0 OUTPUT
			NetFlow* PLL1OUTREFCLK, // net ID: PLL1OUTREFCLK lsb: 0  msb: 0 OUTPUT
			NetFlow* PLL1REFCLKLOST, // net ID: PLL1REFCLKLOST lsb: 0  msb: 0 OUTPUT
			NetFlow* PMARSVDOUT, // net ID: PMARSVDOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* REFCLKOUTMONITOR0, // net ID: REFCLKOUTMONITOR0 lsb: 0  msb: 0 OUTPUT
			NetFlow* REFCLKOUTMONITOR1, // net ID: REFCLKOUTMONITOR1 lsb: 0  msb: 0 OUTPUT
			NetFlow* BGBYPASSB, // net ID: BGBYPASSB lsb: 0  msb: 0 INPUT
			NetFlow* BGMONITORENB, // net ID: BGMONITORENB lsb: 0  msb: 0 INPUT
			NetFlow* BGPDB, // net ID: BGPDB lsb: 0  msb: 0 INPUT
			NetFlow* BGRCALOVRD, // net ID: BGRCALOVRD lsb: 0  msb: 4 INPUT
			NetFlow* BGRCALOVRDENB, // net ID: BGRCALOVRDENB lsb: 0  msb: 0 INPUT
			NetFlow* DRPADDR, // net ID: DRPADDR lsb: 0  msb: 7 INPUT
			NetFlow* DRPCLK, // net ID: DRPCLK lsb: 0  msb: 0 INPUT
			NetFlow* DRPDI, // net ID: DRPDI lsb: 0  msb: 15 INPUT
			NetFlow* DRPEN, // net ID: DRPEN lsb: 0  msb: 0 INPUT
			NetFlow* DRPWE, // net ID: DRPWE lsb: 0  msb: 0 INPUT
			NetFlow* GTEASTREFCLK0, // net ID: GTEASTREFCLK0 lsb: 0  msb: 0 INPUT
			NetFlow* GTEASTREFCLK1, // net ID: GTEASTREFCLK1 lsb: 0  msb: 0 INPUT
			NetFlow* GTGREFCLK0, // net ID: GTGREFCLK0 lsb: 0  msb: 0 INPUT
			NetFlow* GTGREFCLK1, // net ID: GTGREFCLK1 lsb: 0  msb: 0 INPUT
			NetFlow* GTREFCLK0, // net ID: GTREFCLK0 lsb: 0  msb: 0 INPUT
			NetFlow* GTREFCLK1, // net ID: GTREFCLK1 lsb: 0  msb: 0 INPUT
			NetFlow* GTWESTREFCLK0, // net ID: GTWESTREFCLK0 lsb: 0  msb: 0 INPUT
			NetFlow* GTWESTREFCLK1, // net ID: GTWESTREFCLK1 lsb: 0  msb: 0 INPUT
			NetFlow* PLL0LOCKDETCLK, // net ID: PLL0LOCKDETCLK lsb: 0  msb: 0 INPUT
			NetFlow* PLL0LOCKEN, // net ID: PLL0LOCKEN lsb: 0  msb: 0 INPUT
			NetFlow* PLL0PD, // net ID: PLL0PD lsb: 0  msb: 0 INPUT
			NetFlow* PLL0REFCLKSEL, // net ID: PLL0REFCLKSEL lsb: 0  msb: 2 INPUT
			NetFlow* PLL0RESET, // net ID: PLL0RESET lsb: 0  msb: 0 INPUT
			NetFlow* PLL1LOCKDETCLK, // net ID: PLL1LOCKDETCLK lsb: 0  msb: 0 INPUT
			NetFlow* PLL1LOCKEN, // net ID: PLL1LOCKEN lsb: 0  msb: 0 INPUT
			NetFlow* PLL1PD, // net ID: PLL1PD lsb: 0  msb: 0 INPUT
			NetFlow* PLL1REFCLKSEL, // net ID: PLL1REFCLKSEL lsb: 0  msb: 2 INPUT
			NetFlow* PLL1RESET, // net ID: PLL1RESET lsb: 0  msb: 0 INPUT
			NetFlow* PLLRSVD1, // net ID: PLLRSVD1 lsb: 0  msb: 15 INPUT
			NetFlow* PLLRSVD2, // net ID: PLLRSVD2 lsb: 0  msb: 4 INPUT
			NetFlow* PMARSVD, // net ID: PMARSVD lsb: 0  msb: 7 INPUT
			NetFlow* RCALENB // net ID: RCALENB lsb: 0  msb: 0 INPUT
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
			this->DMONITOROUT = DMONITOROUT; // net ID: DMONITOROUT lsb: 0  msb: 0 OUTPUT
			this->DRPDO = DRPDO; // net ID: DRPDO lsb: 0  msb: 0 OUTPUT
			this->DRPRDY = DRPRDY; // net ID: DRPRDY lsb: 0  msb: 0 OUTPUT
			this->PLL0FBCLKLOST = PLL0FBCLKLOST; // net ID: PLL0FBCLKLOST lsb: 0  msb: 0 OUTPUT
			this->PLL0LOCK = PLL0LOCK; // net ID: PLL0LOCK lsb: 0  msb: 0 OUTPUT
			this->PLL0OUTCLK = PLL0OUTCLK; // net ID: PLL0OUTCLK lsb: 0  msb: 0 OUTPUT
			this->PLL0OUTREFCLK = PLL0OUTREFCLK; // net ID: PLL0OUTREFCLK lsb: 0  msb: 0 OUTPUT
			this->PLL0REFCLKLOST = PLL0REFCLKLOST; // net ID: PLL0REFCLKLOST lsb: 0  msb: 0 OUTPUT
			this->PLL1FBCLKLOST = PLL1FBCLKLOST; // net ID: PLL1FBCLKLOST lsb: 0  msb: 0 OUTPUT
			this->PLL1LOCK = PLL1LOCK; // net ID: PLL1LOCK lsb: 0  msb: 0 OUTPUT
			this->PLL1OUTCLK = PLL1OUTCLK; // net ID: PLL1OUTCLK lsb: 0  msb: 0 OUTPUT
			this->PLL1OUTREFCLK = PLL1OUTREFCLK; // net ID: PLL1OUTREFCLK lsb: 0  msb: 0 OUTPUT
			this->PLL1REFCLKLOST = PLL1REFCLKLOST; // net ID: PLL1REFCLKLOST lsb: 0  msb: 0 OUTPUT
			this->PMARSVDOUT = PMARSVDOUT; // net ID: PMARSVDOUT lsb: 0  msb: 0 OUTPUT
			this->REFCLKOUTMONITOR0 = REFCLKOUTMONITOR0; // net ID: REFCLKOUTMONITOR0 lsb: 0  msb: 0 OUTPUT
			this->REFCLKOUTMONITOR1 = REFCLKOUTMONITOR1; // net ID: REFCLKOUTMONITOR1 lsb: 0  msb: 0 OUTPUT
			this->BGBYPASSB = BGBYPASSB; // net ID: BGBYPASSB lsb: 0  msb: 0 INPUT
			this->BGMONITORENB = BGMONITORENB; // net ID: BGMONITORENB lsb: 0  msb: 0 INPUT
			this->BGPDB = BGPDB; // net ID: BGPDB lsb: 0  msb: 0 INPUT
			this->BGRCALOVRD = BGRCALOVRD; // net ID: BGRCALOVRD lsb: 0  msb: 4 INPUT
			this->BGRCALOVRDENB = BGRCALOVRDENB; // net ID: BGRCALOVRDENB lsb: 0  msb: 0 INPUT
			this->DRPADDR = DRPADDR; // net ID: DRPADDR lsb: 0  msb: 7 INPUT
			this->DRPCLK = DRPCLK; // net ID: DRPCLK lsb: 0  msb: 0 INPUT
			this->DRPDI = DRPDI; // net ID: DRPDI lsb: 0  msb: 15 INPUT
			this->DRPEN = DRPEN; // net ID: DRPEN lsb: 0  msb: 0 INPUT
			this->DRPWE = DRPWE; // net ID: DRPWE lsb: 0  msb: 0 INPUT
			this->GTEASTREFCLK0 = GTEASTREFCLK0; // net ID: GTEASTREFCLK0 lsb: 0  msb: 0 INPUT
			this->GTEASTREFCLK1 = GTEASTREFCLK1; // net ID: GTEASTREFCLK1 lsb: 0  msb: 0 INPUT
			this->GTGREFCLK0 = GTGREFCLK0; // net ID: GTGREFCLK0 lsb: 0  msb: 0 INPUT
			this->GTGREFCLK1 = GTGREFCLK1; // net ID: GTGREFCLK1 lsb: 0  msb: 0 INPUT
			this->GTREFCLK0 = GTREFCLK0; // net ID: GTREFCLK0 lsb: 0  msb: 0 INPUT
			this->GTREFCLK1 = GTREFCLK1; // net ID: GTREFCLK1 lsb: 0  msb: 0 INPUT
			this->GTWESTREFCLK0 = GTWESTREFCLK0; // net ID: GTWESTREFCLK0 lsb: 0  msb: 0 INPUT
			this->GTWESTREFCLK1 = GTWESTREFCLK1; // net ID: GTWESTREFCLK1 lsb: 0  msb: 0 INPUT
			this->PLL0LOCKDETCLK = PLL0LOCKDETCLK; // net ID: PLL0LOCKDETCLK lsb: 0  msb: 0 INPUT
			this->PLL0LOCKEN = PLL0LOCKEN; // net ID: PLL0LOCKEN lsb: 0  msb: 0 INPUT
			this->PLL0PD = PLL0PD; // net ID: PLL0PD lsb: 0  msb: 0 INPUT
			this->PLL0REFCLKSEL = PLL0REFCLKSEL; // net ID: PLL0REFCLKSEL lsb: 0  msb: 2 INPUT
			this->PLL0RESET = PLL0RESET; // net ID: PLL0RESET lsb: 0  msb: 0 INPUT
			this->PLL1LOCKDETCLK = PLL1LOCKDETCLK; // net ID: PLL1LOCKDETCLK lsb: 0  msb: 0 INPUT
			this->PLL1LOCKEN = PLL1LOCKEN; // net ID: PLL1LOCKEN lsb: 0  msb: 0 INPUT
			this->PLL1PD = PLL1PD; // net ID: PLL1PD lsb: 0  msb: 0 INPUT
			this->PLL1REFCLKSEL = PLL1REFCLKSEL; // net ID: PLL1REFCLKSEL lsb: 0  msb: 2 INPUT
			this->PLL1RESET = PLL1RESET; // net ID: PLL1RESET lsb: 0  msb: 0 INPUT
			this->PLLRSVD1 = PLLRSVD1; // net ID: PLLRSVD1 lsb: 0  msb: 15 INPUT
			this->PLLRSVD2 = PLLRSVD2; // net ID: PLLRSVD2 lsb: 0  msb: 4 INPUT
			this->PMARSVD = PMARSVD; // net ID: PMARSVD lsb: 0  msb: 7 INPUT
			this->RCALENB = RCALENB; // net ID: RCALENB lsb: 0  msb: 0 INPUT
			
			register_wait_on_event_nets();
			
		}
		
		void register_wait_on_event_nets(){
		// TODO
		}
		void calculate(int time){
		// TODO
		}
		};
		


}
