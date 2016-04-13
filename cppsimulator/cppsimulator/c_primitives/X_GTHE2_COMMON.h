/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_GTHE2_COMMON: public Primitive{

		//Verilog Parameters:
		parameter_string_t LOC;
		parameter_string_t BIAS_CFG;
		parameter_string_t COMMON_CFG;
		parameter_string_t QPLL_CFG;
		parameter_string_t QPLL_CLKOUT_CFG;
		parameter_string_t QPLL_COARSE_FREQ_OVRD;
		parameter_string_t QPLL_COARSE_FREQ_OVRD_EN;
		parameter_string_t QPLL_CP;
		parameter_string_t QPLL_CP_MONITOR_EN;
		parameter_string_t QPLL_DMONITOR_SEL;
		parameter_string_t QPLL_FBDIV;
		parameter_string_t QPLL_FBDIV_MONITOR_EN;
		parameter_string_t QPLL_FBDIV_RATIO;
		parameter_string_t QPLL_INIT_CFG;
		parameter_string_t QPLL_LOCK_CFG;
		parameter_string_t QPLL_LPF;
		parameter_string_t QPLL_REFCLK_DIV;
		parameter_string_t QPLL_RP_COMP;
		parameter_string_t QPLL_VTRL_RESET;
		parameter_string_t RCAL_CFG;
		parameter_string_t RSVD_ATTR0;
		parameter_string_t RSVD_ATTR1;
		parameter_string_t SIM_QPLLREFCLK_SEL;
		parameter_enum_t SIM_RESET_SPEEDUP;
		parameter_string_t SIM_VERSION;
		//Verilog Ports in definition order:
		NetFlow* DRPDO; // net ID: DRPDO lsb: 0  msb: 0 OUTPUT
		NetFlow* DRPRDY; // net ID: DRPRDY lsb: 0  msb: 0 OUTPUT
		NetFlow* PMARSVDOUT; // net ID: PMARSVDOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* QPLLDMONITOR; // net ID: QPLLDMONITOR lsb: 0  msb: 0 OUTPUT
		NetFlow* QPLLFBCLKLOST; // net ID: QPLLFBCLKLOST lsb: 0  msb: 0 OUTPUT
		NetFlow* QPLLLOCK; // net ID: QPLLLOCK lsb: 0  msb: 0 OUTPUT
		NetFlow* QPLLOUTCLK; // net ID: QPLLOUTCLK lsb: 0  msb: 0 OUTPUT
		NetFlow* QPLLOUTREFCLK; // net ID: QPLLOUTREFCLK lsb: 0  msb: 0 OUTPUT
		NetFlow* QPLLREFCLKLOST; // net ID: QPLLREFCLKLOST lsb: 0  msb: 0 OUTPUT
		NetFlow* REFCLKOUTMONITOR; // net ID: REFCLKOUTMONITOR lsb: 0  msb: 0 OUTPUT
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
		NetFlow* GTGREFCLK; // net ID: GTGREFCLK lsb: 0  msb: 0 INPUT
		NetFlow* GTNORTHREFCLK0; // net ID: GTNORTHREFCLK0 lsb: 0  msb: 0 INPUT
		NetFlow* GTNORTHREFCLK1; // net ID: GTNORTHREFCLK1 lsb: 0  msb: 0 INPUT
		NetFlow* GTREFCLK0; // net ID: GTREFCLK0 lsb: 0  msb: 0 INPUT
		NetFlow* GTREFCLK1; // net ID: GTREFCLK1 lsb: 0  msb: 0 INPUT
		NetFlow* GTSOUTHREFCLK0; // net ID: GTSOUTHREFCLK0 lsb: 0  msb: 0 INPUT
		NetFlow* GTSOUTHREFCLK1; // net ID: GTSOUTHREFCLK1 lsb: 0  msb: 0 INPUT
		NetFlow* PMARSVD; // net ID: PMARSVD lsb: 0  msb: 7 INPUT
		NetFlow* QPLLLOCKDETCLK; // net ID: QPLLLOCKDETCLK lsb: 0  msb: 0 INPUT
		NetFlow* QPLLLOCKEN; // net ID: QPLLLOCKEN lsb: 0  msb: 0 INPUT
		NetFlow* QPLLOUTRESET; // net ID: QPLLOUTRESET lsb: 0  msb: 0 INPUT
		NetFlow* QPLLPD; // net ID: QPLLPD lsb: 0  msb: 0 INPUT
		NetFlow* QPLLREFCLKSEL; // net ID: QPLLREFCLKSEL lsb: 0  msb: 2 INPUT
		NetFlow* QPLLRESET; // net ID: QPLLRESET lsb: 0  msb: 0 INPUT
		NetFlow* QPLLRSVD1; // net ID: QPLLRSVD1 lsb: 0  msb: 15 INPUT
		NetFlow* QPLLRSVD2; // net ID: QPLLRSVD2 lsb: 0  msb: 4 INPUT
		NetFlow* RCALENB; // net ID: RCALENB lsb: 0  msb: 0 INPUT
		
		X_GTHE2_COMMON(
			const char * name,
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_string_t BIAS_CFG, // Default: 64'h0000040000001000
			parameter_string_t COMMON_CFG, // Default: 32'h0000001C
			parameter_string_t QPLL_CFG, // Default: 27'h0480181
			parameter_string_t QPLL_CLKOUT_CFG, // Default: 4'b0000
			parameter_string_t QPLL_COARSE_FREQ_OVRD, // Default: 6'b010000
			parameter_string_t QPLL_COARSE_FREQ_OVRD_EN, // Default: 1'b0
			parameter_string_t QPLL_CP, // Default: 10'b0000011111
			parameter_string_t QPLL_CP_MONITOR_EN, // Default: 1'b0
			parameter_string_t QPLL_DMONITOR_SEL, // Default: 1'b0
			parameter_string_t QPLL_FBDIV, // Default: 10'b0000000000
			parameter_string_t QPLL_FBDIV_MONITOR_EN, // Default: 1'b0
			parameter_string_t QPLL_FBDIV_RATIO, // Default: 1'b0
			parameter_string_t QPLL_INIT_CFG, // Default: 24'h000006
			parameter_string_t QPLL_LOCK_CFG, // Default: 16'h01E8
			parameter_string_t QPLL_LPF, // Default: 4'b1111
			parameter_string_t QPLL_REFCLK_DIV, // Default: 2
			parameter_string_t QPLL_RP_COMP, // Default: 1'b0
			parameter_string_t QPLL_VTRL_RESET, // Default: 2'b00
			parameter_string_t RCAL_CFG, // Default: 2'b00
			parameter_string_t RSVD_ATTR0, // Default: 16'h0000
			parameter_string_t RSVD_ATTR1, // Default: 16'h0000
			parameter_string_t SIM_QPLLREFCLK_SEL, // Default: 3'b001
			parameter_enum_t SIM_RESET_SPEEDUP, // Default: "TRUE"
			parameter_string_t SIM_VERSION, // Default: "1.1"
			//Verilog Ports in definition order:
			NetFlow* DRPDO, // net ID: DRPDO lsb: 0  msb: 0 OUTPUT
			NetFlow* DRPRDY, // net ID: DRPRDY lsb: 0  msb: 0 OUTPUT
			NetFlow* PMARSVDOUT, // net ID: PMARSVDOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* QPLLDMONITOR, // net ID: QPLLDMONITOR lsb: 0  msb: 0 OUTPUT
			NetFlow* QPLLFBCLKLOST, // net ID: QPLLFBCLKLOST lsb: 0  msb: 0 OUTPUT
			NetFlow* QPLLLOCK, // net ID: QPLLLOCK lsb: 0  msb: 0 OUTPUT
			NetFlow* QPLLOUTCLK, // net ID: QPLLOUTCLK lsb: 0  msb: 0 OUTPUT
			NetFlow* QPLLOUTREFCLK, // net ID: QPLLOUTREFCLK lsb: 0  msb: 0 OUTPUT
			NetFlow* QPLLREFCLKLOST, // net ID: QPLLREFCLKLOST lsb: 0  msb: 0 OUTPUT
			NetFlow* REFCLKOUTMONITOR, // net ID: REFCLKOUTMONITOR lsb: 0  msb: 0 OUTPUT
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
			NetFlow* GTGREFCLK, // net ID: GTGREFCLK lsb: 0  msb: 0 INPUT
			NetFlow* GTNORTHREFCLK0, // net ID: GTNORTHREFCLK0 lsb: 0  msb: 0 INPUT
			NetFlow* GTNORTHREFCLK1, // net ID: GTNORTHREFCLK1 lsb: 0  msb: 0 INPUT
			NetFlow* GTREFCLK0, // net ID: GTREFCLK0 lsb: 0  msb: 0 INPUT
			NetFlow* GTREFCLK1, // net ID: GTREFCLK1 lsb: 0  msb: 0 INPUT
			NetFlow* GTSOUTHREFCLK0, // net ID: GTSOUTHREFCLK0 lsb: 0  msb: 0 INPUT
			NetFlow* GTSOUTHREFCLK1, // net ID: GTSOUTHREFCLK1 lsb: 0  msb: 0 INPUT
			NetFlow* PMARSVD, // net ID: PMARSVD lsb: 0  msb: 7 INPUT
			NetFlow* QPLLLOCKDETCLK, // net ID: QPLLLOCKDETCLK lsb: 0  msb: 0 INPUT
			NetFlow* QPLLLOCKEN, // net ID: QPLLLOCKEN lsb: 0  msb: 0 INPUT
			NetFlow* QPLLOUTRESET, // net ID: QPLLOUTRESET lsb: 0  msb: 0 INPUT
			NetFlow* QPLLPD, // net ID: QPLLPD lsb: 0  msb: 0 INPUT
			NetFlow* QPLLREFCLKSEL, // net ID: QPLLREFCLKSEL lsb: 0  msb: 2 INPUT
			NetFlow* QPLLRESET, // net ID: QPLLRESET lsb: 0  msb: 0 INPUT
			NetFlow* QPLLRSVD1, // net ID: QPLLRSVD1 lsb: 0  msb: 15 INPUT
			NetFlow* QPLLRSVD2, // net ID: QPLLRSVD2 lsb: 0  msb: 4 INPUT
			NetFlow* RCALENB // net ID: RCALENB lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
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
			this->DRPDO = DRPDO; // net ID: DRPDO lsb: 0  msb: 0 OUTPUT
			this->DRPRDY = DRPRDY; // net ID: DRPRDY lsb: 0  msb: 0 OUTPUT
			this->PMARSVDOUT = PMARSVDOUT; // net ID: PMARSVDOUT lsb: 0  msb: 0 OUTPUT
			this->QPLLDMONITOR = QPLLDMONITOR; // net ID: QPLLDMONITOR lsb: 0  msb: 0 OUTPUT
			this->QPLLFBCLKLOST = QPLLFBCLKLOST; // net ID: QPLLFBCLKLOST lsb: 0  msb: 0 OUTPUT
			this->QPLLLOCK = QPLLLOCK; // net ID: QPLLLOCK lsb: 0  msb: 0 OUTPUT
			this->QPLLOUTCLK = QPLLOUTCLK; // net ID: QPLLOUTCLK lsb: 0  msb: 0 OUTPUT
			this->QPLLOUTREFCLK = QPLLOUTREFCLK; // net ID: QPLLOUTREFCLK lsb: 0  msb: 0 OUTPUT
			this->QPLLREFCLKLOST = QPLLREFCLKLOST; // net ID: QPLLREFCLKLOST lsb: 0  msb: 0 OUTPUT
			this->REFCLKOUTMONITOR = REFCLKOUTMONITOR; // net ID: REFCLKOUTMONITOR lsb: 0  msb: 0 OUTPUT
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
			this->GTGREFCLK = GTGREFCLK; // net ID: GTGREFCLK lsb: 0  msb: 0 INPUT
			this->GTNORTHREFCLK0 = GTNORTHREFCLK0; // net ID: GTNORTHREFCLK0 lsb: 0  msb: 0 INPUT
			this->GTNORTHREFCLK1 = GTNORTHREFCLK1; // net ID: GTNORTHREFCLK1 lsb: 0  msb: 0 INPUT
			this->GTREFCLK0 = GTREFCLK0; // net ID: GTREFCLK0 lsb: 0  msb: 0 INPUT
			this->GTREFCLK1 = GTREFCLK1; // net ID: GTREFCLK1 lsb: 0  msb: 0 INPUT
			this->GTSOUTHREFCLK0 = GTSOUTHREFCLK0; // net ID: GTSOUTHREFCLK0 lsb: 0  msb: 0 INPUT
			this->GTSOUTHREFCLK1 = GTSOUTHREFCLK1; // net ID: GTSOUTHREFCLK1 lsb: 0  msb: 0 INPUT
			this->PMARSVD = PMARSVD; // net ID: PMARSVD lsb: 0  msb: 7 INPUT
			this->QPLLLOCKDETCLK = QPLLLOCKDETCLK; // net ID: QPLLLOCKDETCLK lsb: 0  msb: 0 INPUT
			this->QPLLLOCKEN = QPLLLOCKEN; // net ID: QPLLLOCKEN lsb: 0  msb: 0 INPUT
			this->QPLLOUTRESET = QPLLOUTRESET; // net ID: QPLLOUTRESET lsb: 0  msb: 0 INPUT
			this->QPLLPD = QPLLPD; // net ID: QPLLPD lsb: 0  msb: 0 INPUT
			this->QPLLREFCLKSEL = QPLLREFCLKSEL; // net ID: QPLLREFCLKSEL lsb: 0  msb: 2 INPUT
			this->QPLLRESET = QPLLRESET; // net ID: QPLLRESET lsb: 0  msb: 0 INPUT
			this->QPLLRSVD1 = QPLLRSVD1; // net ID: QPLLRSVD1 lsb: 0  msb: 15 INPUT
			this->QPLLRSVD2 = QPLLRSVD2; // net ID: QPLLRSVD2 lsb: 0  msb: 4 INPUT
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
