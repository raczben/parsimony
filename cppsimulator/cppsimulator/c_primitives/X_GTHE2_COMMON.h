/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_GTHE2_COMMON{

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
		parameter_int_t QPLL_RP_COMP;
		parameter_int_t QPLL_VTRL_RESET;
		parameter_int_t RCAL_CFG;
		parameter_int_t RSVD_ATTR0;
		parameter_int_t RSVD_ATTR1;
		parameter_int_t SIM_QPLLREFCLK_SEL;
		parameter_enum_t SIM_RESET_SPEEDUP;
		parameter_string_t SIM_VERSION;
		//Verilog Ports in definition order:
		NetFlow* DRPDO; // OUTPUT
		NetFlow* DRPRDY; // OUTPUT
		NetFlow* PMARSVDOUT; // OUTPUT
		NetFlow* QPLLDMONITOR; // OUTPUT
		NetFlow* QPLLFBCLKLOST; // OUTPUT
		NetFlow* QPLLLOCK; // OUTPUT
		NetFlow* QPLLOUTCLK; // OUTPUT
		NetFlow* QPLLOUTREFCLK; // OUTPUT
		NetFlow* QPLLREFCLKLOST; // OUTPUT
		NetFlow* REFCLKOUTMONITOR; // OUTPUT
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
		NetFlow* GTGREFCLK; // INPUT
		NetFlow* GTNORTHREFCLK0; // INPUT
		NetFlow* GTNORTHREFCLK1; // INPUT
		NetFlow* GTREFCLK0; // INPUT
		NetFlow* GTREFCLK1; // INPUT
		NetFlow* GTSOUTHREFCLK0; // INPUT
		NetFlow* GTSOUTHREFCLK1; // INPUT
		NetFlow* PMARSVD; // INPUT
		NetFlow* QPLLLOCKDETCLK; // INPUT
		NetFlow* QPLLLOCKEN; // INPUT
		NetFlow* QPLLOUTRESET; // INPUT
		NetFlow* QPLLPD; // INPUT
		NetFlow* QPLLREFCLKSEL; // INPUT
		NetFlow* QPLLRESET; // INPUT
		NetFlow* QPLLRSVD1; // INPUT
		NetFlow* QPLLRSVD2; // INPUT
		NetFlow* RCALENB; // INPUT
		
	
		X_GTHE2_COMMON(
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_int_t BIAS_CFG, // Default: 64'h0000040000001000
			parameter_int_t COMMON_CFG, // Default: 32'h0000001C
			parameter_int_t QPLL_CFG, // Default: 27'h0480181
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
			parameter_int_t QPLL_LOCK_CFG, // Default: 16'h01E8
			parameter_int_t QPLL_LPF, // Default: 4'b1111
			parameter_int_t QPLL_REFCLK_DIV, // Default: 2
			parameter_int_t QPLL_RP_COMP, // Default: 1'b0
			parameter_int_t QPLL_VTRL_RESET, // Default: 2'b00
			parameter_int_t RCAL_CFG, // Default: 2'b00
			parameter_int_t RSVD_ATTR0, // Default: 16'h0000
			parameter_int_t RSVD_ATTR1, // Default: 16'h0000
			parameter_int_t SIM_QPLLREFCLK_SEL, // Default: 3'b001
			parameter_enum_t SIM_RESET_SPEEDUP, // Default: "TRUE"
			parameter_string_t SIM_VERSION, // Default: "1.1"
			//Verilog Ports in definition order:
			NetFlow* DRPDO, // OUTPUT
			NetFlow* DRPRDY, // OUTPUT
			NetFlow* PMARSVDOUT, // OUTPUT
			NetFlow* QPLLDMONITOR, // OUTPUT
			NetFlow* QPLLFBCLKLOST, // OUTPUT
			NetFlow* QPLLLOCK, // OUTPUT
			NetFlow* QPLLOUTCLK, // OUTPUT
			NetFlow* QPLLOUTREFCLK, // OUTPUT
			NetFlow* QPLLREFCLKLOST, // OUTPUT
			NetFlow* REFCLKOUTMONITOR, // OUTPUT
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
			NetFlow* GTGREFCLK, // INPUT
			NetFlow* GTNORTHREFCLK0, // INPUT
			NetFlow* GTNORTHREFCLK1, // INPUT
			NetFlow* GTREFCLK0, // INPUT
			NetFlow* GTREFCLK1, // INPUT
			NetFlow* GTSOUTHREFCLK0, // INPUT
			NetFlow* GTSOUTHREFCLK1, // INPUT
			NetFlow* PMARSVD, // INPUT
			NetFlow* QPLLLOCKDETCLK, // INPUT
			NetFlow* QPLLLOCKEN, // INPUT
			NetFlow* QPLLOUTRESET, // INPUT
			NetFlow* QPLLPD, // INPUT
			NetFlow* QPLLREFCLKSEL, // INPUT
			NetFlow* QPLLRESET, // INPUT
			NetFlow* QPLLRSVD1, // INPUT
			NetFlow* QPLLRSVD2, // INPUT
			NetFlow* RCALENB // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			this->BIAS_CFG = BIAS_CFG; // Default: 64'h0000040000001000
			this->COMMON_CFG = COMMON_CFG; // Default: 32'h0000001C
			this->QPLL_CFG = QPLL_CFG; // Default: 27'h0480181
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
			this->QPLL_LOCK_CFG = QPLL_LOCK_CFG; // Default: 16'h01E8
			this->QPLL_LPF = QPLL_LPF; // Default: 4'b1111
			this->QPLL_REFCLK_DIV = QPLL_REFCLK_DIV; // Default: 2
			this->QPLL_RP_COMP = QPLL_RP_COMP; // Default: 1'b0
			this->QPLL_VTRL_RESET = QPLL_VTRL_RESET; // Default: 2'b00
			this->RCAL_CFG = RCAL_CFG; // Default: 2'b00
			this->RSVD_ATTR0 = RSVD_ATTR0; // Default: 16'h0000
			this->RSVD_ATTR1 = RSVD_ATTR1; // Default: 16'h0000
			this->SIM_QPLLREFCLK_SEL = SIM_QPLLREFCLK_SEL; // Default: 3'b001
			this->SIM_RESET_SPEEDUP = SIM_RESET_SPEEDUP; // Default: "TRUE"
			this->SIM_VERSION = SIM_VERSION; // Default: "1.1"
			//Verilog Ports in definition order:
			this->DRPDO = DRPDO; // OUTPUT
			this->DRPRDY = DRPRDY; // OUTPUT
			this->PMARSVDOUT = PMARSVDOUT; // OUTPUT
			this->QPLLDMONITOR = QPLLDMONITOR; // OUTPUT
			this->QPLLFBCLKLOST = QPLLFBCLKLOST; // OUTPUT
			this->QPLLLOCK = QPLLLOCK; // OUTPUT
			this->QPLLOUTCLK = QPLLOUTCLK; // OUTPUT
			this->QPLLOUTREFCLK = QPLLOUTREFCLK; // OUTPUT
			this->QPLLREFCLKLOST = QPLLREFCLKLOST; // OUTPUT
			this->REFCLKOUTMONITOR = REFCLKOUTMONITOR; // OUTPUT
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
			this->GTGREFCLK = GTGREFCLK; // INPUT
			this->GTNORTHREFCLK0 = GTNORTHREFCLK0; // INPUT
			this->GTNORTHREFCLK1 = GTNORTHREFCLK1; // INPUT
			this->GTREFCLK0 = GTREFCLK0; // INPUT
			this->GTREFCLK1 = GTREFCLK1; // INPUT
			this->GTSOUTHREFCLK0 = GTSOUTHREFCLK0; // INPUT
			this->GTSOUTHREFCLK1 = GTSOUTHREFCLK1; // INPUT
			this->PMARSVD = PMARSVD; // INPUT
			this->QPLLLOCKDETCLK = QPLLLOCKDETCLK; // INPUT
			this->QPLLLOCKEN = QPLLLOCKEN; // INPUT
			this->QPLLOUTRESET = QPLLOUTRESET; // INPUT
			this->QPLLPD = QPLLPD; // INPUT
			this->QPLLREFCLKSEL = QPLLREFCLKSEL; // INPUT
			this->QPLLRESET = QPLLRESET; // INPUT
			this->QPLLRSVD1 = QPLLRSVD1; // INPUT
			this->QPLLRSVD2 = QPLLRSVD2; // INPUT
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
