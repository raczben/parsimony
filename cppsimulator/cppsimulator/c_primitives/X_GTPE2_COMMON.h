/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_GTPE2_COMMON{

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
		NetFlow* DMONITOROUT; // OUTPUT
		NetFlow* DRPDO; // OUTPUT
		NetFlow* DRPRDY; // OUTPUT
		NetFlow* PLL0FBCLKLOST; // OUTPUT
		NetFlow* PLL0LOCK; // OUTPUT
		NetFlow* PLL0OUTCLK; // OUTPUT
		NetFlow* PLL0OUTREFCLK; // OUTPUT
		NetFlow* PLL0REFCLKLOST; // OUTPUT
		NetFlow* PLL1FBCLKLOST; // OUTPUT
		NetFlow* PLL1LOCK; // OUTPUT
		NetFlow* PLL1OUTCLK; // OUTPUT
		NetFlow* PLL1OUTREFCLK; // OUTPUT
		NetFlow* PLL1REFCLKLOST; // OUTPUT
		NetFlow* PMARSVDOUT; // OUTPUT
		NetFlow* REFCLKOUTMONITOR0; // OUTPUT
		NetFlow* REFCLKOUTMONITOR1; // OUTPUT
		NetFlow* BGBYPASSB; // INPUT
		NetFlow* BGMONITORENB; // INPUT
		NetFlow* BGPDB; // INPUT
		NetFlow* BGRCALOVRD; // INPUT
		NetFlow* BGRCALOVRDENB; // INPUT
		NetFlow* DRPADDR; // INPUT
		NetFlow* DRPCLK; // INPUT
		NetFlow* DRPDI; // INPUT
		NetFlow* DRPEN; // INPUT
		NetFlow* DRPWE; // INPUT
		NetFlow* GTEASTREFCLK0; // INPUT
		NetFlow* GTEASTREFCLK1; // INPUT
		NetFlow* GTGREFCLK0; // INPUT
		NetFlow* GTGREFCLK1; // INPUT
		NetFlow* GTREFCLK0; // INPUT
		NetFlow* GTREFCLK1; // INPUT
		NetFlow* GTWESTREFCLK0; // INPUT
		NetFlow* GTWESTREFCLK1; // INPUT
		NetFlow* PLL0LOCKDETCLK; // INPUT
		NetFlow* PLL0LOCKEN; // INPUT
		NetFlow* PLL0PD; // INPUT
		NetFlow* PLL0REFCLKSEL; // INPUT
		NetFlow* PLL0RESET; // INPUT
		NetFlow* PLL1LOCKDETCLK; // INPUT
		NetFlow* PLL1LOCKEN; // INPUT
		NetFlow* PLL1PD; // INPUT
		NetFlow* PLL1REFCLKSEL; // INPUT
		NetFlow* PLL1RESET; // INPUT
		NetFlow* PLLRSVD1; // INPUT
		NetFlow* PLLRSVD2; // INPUT
		NetFlow* PMARSVD; // INPUT
		NetFlow* RCALENB; // INPUT
		
	
		X_GTPE2_COMMON(
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
			NetFlow* DMONITOROUT, // OUTPUT
			NetFlow* DRPDO, // OUTPUT
			NetFlow* DRPRDY, // OUTPUT
			NetFlow* PLL0FBCLKLOST, // OUTPUT
			NetFlow* PLL0LOCK, // OUTPUT
			NetFlow* PLL0OUTCLK, // OUTPUT
			NetFlow* PLL0OUTREFCLK, // OUTPUT
			NetFlow* PLL0REFCLKLOST, // OUTPUT
			NetFlow* PLL1FBCLKLOST, // OUTPUT
			NetFlow* PLL1LOCK, // OUTPUT
			NetFlow* PLL1OUTCLK, // OUTPUT
			NetFlow* PLL1OUTREFCLK, // OUTPUT
			NetFlow* PLL1REFCLKLOST, // OUTPUT
			NetFlow* PMARSVDOUT, // OUTPUT
			NetFlow* REFCLKOUTMONITOR0, // OUTPUT
			NetFlow* REFCLKOUTMONITOR1, // OUTPUT
			NetFlow* BGBYPASSB, // INPUT
			NetFlow* BGMONITORENB, // INPUT
			NetFlow* BGPDB, // INPUT
			NetFlow* BGRCALOVRD, // INPUT
			NetFlow* BGRCALOVRDENB, // INPUT
			NetFlow* DRPADDR, // INPUT
			NetFlow* DRPCLK, // INPUT
			NetFlow* DRPDI, // INPUT
			NetFlow* DRPEN, // INPUT
			NetFlow* DRPWE, // INPUT
			NetFlow* GTEASTREFCLK0, // INPUT
			NetFlow* GTEASTREFCLK1, // INPUT
			NetFlow* GTGREFCLK0, // INPUT
			NetFlow* GTGREFCLK1, // INPUT
			NetFlow* GTREFCLK0, // INPUT
			NetFlow* GTREFCLK1, // INPUT
			NetFlow* GTWESTREFCLK0, // INPUT
			NetFlow* GTWESTREFCLK1, // INPUT
			NetFlow* PLL0LOCKDETCLK, // INPUT
			NetFlow* PLL0LOCKEN, // INPUT
			NetFlow* PLL0PD, // INPUT
			NetFlow* PLL0REFCLKSEL, // INPUT
			NetFlow* PLL0RESET, // INPUT
			NetFlow* PLL1LOCKDETCLK, // INPUT
			NetFlow* PLL1LOCKEN, // INPUT
			NetFlow* PLL1PD, // INPUT
			NetFlow* PLL1REFCLKSEL, // INPUT
			NetFlow* PLL1RESET, // INPUT
			NetFlow* PLLRSVD1, // INPUT
			NetFlow* PLLRSVD2, // INPUT
			NetFlow* PMARSVD, // INPUT
			NetFlow* RCALENB // INPUT
			){
		
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
			this->DMONITOROUT = DMONITOROUT; // OUTPUT
			this->DRPDO = DRPDO; // OUTPUT
			this->DRPRDY = DRPRDY; // OUTPUT
			this->PLL0FBCLKLOST = PLL0FBCLKLOST; // OUTPUT
			this->PLL0LOCK = PLL0LOCK; // OUTPUT
			this->PLL0OUTCLK = PLL0OUTCLK; // OUTPUT
			this->PLL0OUTREFCLK = PLL0OUTREFCLK; // OUTPUT
			this->PLL0REFCLKLOST = PLL0REFCLKLOST; // OUTPUT
			this->PLL1FBCLKLOST = PLL1FBCLKLOST; // OUTPUT
			this->PLL1LOCK = PLL1LOCK; // OUTPUT
			this->PLL1OUTCLK = PLL1OUTCLK; // OUTPUT
			this->PLL1OUTREFCLK = PLL1OUTREFCLK; // OUTPUT
			this->PLL1REFCLKLOST = PLL1REFCLKLOST; // OUTPUT
			this->PMARSVDOUT = PMARSVDOUT; // OUTPUT
			this->REFCLKOUTMONITOR0 = REFCLKOUTMONITOR0; // OUTPUT
			this->REFCLKOUTMONITOR1 = REFCLKOUTMONITOR1; // OUTPUT
			this->BGBYPASSB = BGBYPASSB; // INPUT
			this->BGMONITORENB = BGMONITORENB; // INPUT
			this->BGPDB = BGPDB; // INPUT
			this->BGRCALOVRD = BGRCALOVRD; // INPUT
			this->BGRCALOVRDENB = BGRCALOVRDENB; // INPUT
			this->DRPADDR = DRPADDR; // INPUT
			this->DRPCLK = DRPCLK; // INPUT
			this->DRPDI = DRPDI; // INPUT
			this->DRPEN = DRPEN; // INPUT
			this->DRPWE = DRPWE; // INPUT
			this->GTEASTREFCLK0 = GTEASTREFCLK0; // INPUT
			this->GTEASTREFCLK1 = GTEASTREFCLK1; // INPUT
			this->GTGREFCLK0 = GTGREFCLK0; // INPUT
			this->GTGREFCLK1 = GTGREFCLK1; // INPUT
			this->GTREFCLK0 = GTREFCLK0; // INPUT
			this->GTREFCLK1 = GTREFCLK1; // INPUT
			this->GTWESTREFCLK0 = GTWESTREFCLK0; // INPUT
			this->GTWESTREFCLK1 = GTWESTREFCLK1; // INPUT
			this->PLL0LOCKDETCLK = PLL0LOCKDETCLK; // INPUT
			this->PLL0LOCKEN = PLL0LOCKEN; // INPUT
			this->PLL0PD = PLL0PD; // INPUT
			this->PLL0REFCLKSEL = PLL0REFCLKSEL; // INPUT
			this->PLL0RESET = PLL0RESET; // INPUT
			this->PLL1LOCKDETCLK = PLL1LOCKDETCLK; // INPUT
			this->PLL1LOCKEN = PLL1LOCKEN; // INPUT
			this->PLL1PD = PLL1PD; // INPUT
			this->PLL1REFCLKSEL = PLL1REFCLKSEL; // INPUT
			this->PLL1RESET = PLL1RESET; // INPUT
			this->PLLRSVD1 = PLLRSVD1; // INPUT
			this->PLLRSVD2 = PLLRSVD2; // INPUT
			this->PMARSVD = PMARSVD; // INPUT
			this->RCALENB = RCALENB; // INPUT
		
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
