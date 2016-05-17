/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_PLL_ADV_H
#define X_PLL_ADV_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_PLL_ADV: public Primitive{

		//Verilog Parameters:
		parameter_string_t BANDWIDTH;
		parameter_string_t CLK_FEEDBACK;
		parameter_string_t CLKFBOUT_DESKEW_ADJUST;
		parameter_string_t CLKOUT0_DESKEW_ADJUST;
		parameter_string_t CLKOUT1_DESKEW_ADJUST;
		parameter_string_t CLKOUT2_DESKEW_ADJUST;
		parameter_string_t CLKOUT3_DESKEW_ADJUST;
		parameter_string_t CLKOUT4_DESKEW_ADJUST;
		parameter_string_t CLKOUT5_DESKEW_ADJUST;
		parameter_int_t CLKFBOUT_MULT;
		parameter_int_t CLKFBOUT_PHASE;
		parameter_int_t CLKIN1_PERIOD;
		parameter_int_t CLKIN2_PERIOD;
		parameter_int_t CLKOUT0_DIVIDE;
		parameter_int_t CLKOUT0_DUTY_CYCLE;
		parameter_int_t CLKOUT0_PHASE;
		parameter_int_t CLKOUT1_DIVIDE;
		parameter_int_t CLKOUT1_DUTY_CYCLE;
		parameter_int_t CLKOUT1_PHASE;
		parameter_int_t CLKOUT2_DIVIDE;
		parameter_int_t CLKOUT2_DUTY_CYCLE;
		parameter_int_t CLKOUT2_PHASE;
		parameter_int_t CLKOUT3_DIVIDE;
		parameter_int_t CLKOUT3_DUTY_CYCLE;
		parameter_int_t CLKOUT3_PHASE;
		parameter_int_t CLKOUT4_DIVIDE;
		parameter_int_t CLKOUT4_DUTY_CYCLE;
		parameter_int_t CLKOUT4_PHASE;
		parameter_int_t CLKOUT5_DIVIDE;
		parameter_int_t CLKOUT5_DUTY_CYCLE;
		parameter_int_t CLKOUT5_PHASE;
		parameter_string_t COMPENSATION;
		parameter_int_t DIVCLK_DIVIDE;
		parameter_enum_t EN_REL;
		parameter_enum_t PLL_PMCD_MODE;
		parameter_int_t REF_JITTER;
		parameter_enum_t RESET_ON_LOSS_OF_LOCK;
		parameter_string_t RST_DEASSERT_CLK;
		parameter_string_t SIM_DEVICE;
		parameter_string_t LOC;
		parameter_int_t VCOCLK_FREQ_MAX;
		parameter_int_t VCOCLK_FREQ_MIN;
		parameter_int_t CLKIN_FREQ_MAX;
		parameter_int_t CLKIN_FREQ_MIN;
		parameter_int_t CLKPFD_FREQ_MAX;
		parameter_int_t CLKPFD_FREQ_MIN;
		//Verilog Ports in definition order:
		NetFlow* CLKFBDCM_A0_B; // net ID: CLKFBDCM lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKFBOUT_A0_B; // net ID: CLKFBOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKOUT0_A0_B; // net ID: CLKOUT0 lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKOUT1_A0_B; // net ID: CLKOUT1 lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKOUT2_A0_B; // net ID: CLKOUT2 lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKOUT3_A0_B; // net ID: CLKOUT3 lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKOUT4_A0_B; // net ID: CLKOUT4 lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKOUT5_A0_B; // net ID: CLKOUT5 lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKOUTDCM0_A0_B; // net ID: CLKOUTDCM0 lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKOUTDCM1_A0_B; // net ID: CLKOUTDCM1 lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKOUTDCM2_A0_B; // net ID: CLKOUTDCM2 lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKOUTDCM3_A0_B; // net ID: CLKOUTDCM3 lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKOUTDCM4_A0_B; // net ID: CLKOUTDCM4 lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKOUTDCM5_A0_B; // net ID: CLKOUTDCM5 lsb: 0  msb: 0 OUTPUT
		NetFlow* DO_A15_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
		NetFlow* DO_A14_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
		NetFlow* DO_A13_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
		NetFlow* DO_A12_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
		NetFlow* DO_A11_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
		NetFlow* DO_A10_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
		NetFlow* DO_A9_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
		NetFlow* DO_A8_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
		NetFlow* DO_A7_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
		NetFlow* DO_A6_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
		NetFlow* DO_A5_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
		NetFlow* DO_A4_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
		NetFlow* DO_A3_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
		NetFlow* DO_A2_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
		NetFlow* DO_A1_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
		NetFlow* DO_A0_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
		NetFlow* DRDY_A0_B; // net ID: DRDY lsb: 0  msb: 0 OUTPUT
		NetFlow* LOCKED_A0_B; // net ID: LOCKED lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKFBIN_A0_B; // net ID: CLKFBIN lsb: 0  msb: 0 INPUT
		NetFlow* CLKIN1_A0_B; // net ID: CLKIN1 lsb: 0  msb: 0 INPUT
		NetFlow* CLKIN2_A0_B; // net ID: CLKIN2 lsb: 0  msb: 0 INPUT
		NetFlow* CLKINSEL_A0_B; // net ID: CLKINSEL lsb: 0  msb: 0 INPUT
		NetFlow* DADDR_A4_B; // net ID: DADDR lsb: 0  msb: 4 INPUT
		NetFlow* DADDR_A3_B; // net ID: DADDR lsb: 0  msb: 4 INPUT
		NetFlow* DADDR_A2_B; // net ID: DADDR lsb: 0  msb: 4 INPUT
		NetFlow* DADDR_A1_B; // net ID: DADDR lsb: 0  msb: 4 INPUT
		NetFlow* DADDR_A0_B; // net ID: DADDR lsb: 0  msb: 4 INPUT
		NetFlow* DCLK_A0_B; // net ID: DCLK lsb: 0  msb: 0 INPUT
		NetFlow* DEN_A0_B; // net ID: DEN lsb: 0  msb: 0 INPUT
		NetFlow* DI_A15_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A14_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A13_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A12_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A11_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A10_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A9_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A8_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A7_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A6_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A5_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A4_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A3_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A2_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A1_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A0_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DWE_A0_B; // net ID: DWE lsb: 0  msb: 0 INPUT
		NetFlow* REL_A0_B; // net ID: REL lsb: 0  msb: 0 INPUT
		NetFlow* RST_A0_B; // net ID: RST lsb: 0  msb: 0 INPUT
		
		public: X_PLL_ADV(
			const char * name,
			//Verilog Parameters:
			parameter_string_t BANDWIDTH, // Default: "OPTIMIZED"
			parameter_string_t CLK_FEEDBACK, // Default: "CLKFBOUT"
			parameter_string_t CLKFBOUT_DESKEW_ADJUST, // Default: "NONE"
			parameter_string_t CLKOUT0_DESKEW_ADJUST, // Default: "NONE"
			parameter_string_t CLKOUT1_DESKEW_ADJUST, // Default: "NONE"
			parameter_string_t CLKOUT2_DESKEW_ADJUST, // Default: "NONE"
			parameter_string_t CLKOUT3_DESKEW_ADJUST, // Default: "NONE"
			parameter_string_t CLKOUT4_DESKEW_ADJUST, // Default: "NONE"
			parameter_string_t CLKOUT5_DESKEW_ADJUST, // Default: "NONE"
			parameter_int_t CLKFBOUT_MULT, // Default: 1
			parameter_int_t CLKFBOUT_PHASE, // Default: 0.0
			parameter_int_t CLKIN1_PERIOD, // Default: 0.000
			parameter_int_t CLKIN2_PERIOD, // Default: 0.000
			parameter_int_t CLKOUT0_DIVIDE, // Default: 1
			parameter_int_t CLKOUT0_DUTY_CYCLE, // Default: 0.5
			parameter_int_t CLKOUT0_PHASE, // Default: 0.0
			parameter_int_t CLKOUT1_DIVIDE, // Default: 1
			parameter_int_t CLKOUT1_DUTY_CYCLE, // Default: 0.5
			parameter_int_t CLKOUT1_PHASE, // Default: 0.0
			parameter_int_t CLKOUT2_DIVIDE, // Default: 1
			parameter_int_t CLKOUT2_DUTY_CYCLE, // Default: 0.5
			parameter_int_t CLKOUT2_PHASE, // Default: 0.0
			parameter_int_t CLKOUT3_DIVIDE, // Default: 1
			parameter_int_t CLKOUT3_DUTY_CYCLE, // Default: 0.5
			parameter_int_t CLKOUT3_PHASE, // Default: 0.0
			parameter_int_t CLKOUT4_DIVIDE, // Default: 1
			parameter_int_t CLKOUT4_DUTY_CYCLE, // Default: 0.5
			parameter_int_t CLKOUT4_PHASE, // Default: 0.0
			parameter_int_t CLKOUT5_DIVIDE, // Default: 1
			parameter_int_t CLKOUT5_DUTY_CYCLE, // Default: 0.5
			parameter_int_t CLKOUT5_PHASE, // Default: 0.0
			parameter_string_t COMPENSATION, // Default: "SYSTEM_SYNCHRONOUS"
			parameter_int_t DIVCLK_DIVIDE, // Default: 1
			parameter_enum_t EN_REL, // Default: "FALSE"
			parameter_enum_t PLL_PMCD_MODE, // Default: "FALSE"
			parameter_int_t REF_JITTER, // Default: 0.100
			parameter_enum_t RESET_ON_LOSS_OF_LOCK, // Default: "FALSE"
			parameter_string_t RST_DEASSERT_CLK, // Default: "CLKIN1"
			parameter_string_t SIM_DEVICE, // Default: "VIRTEX5"
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_int_t VCOCLK_FREQ_MAX, // Default: 1440.0
			parameter_int_t VCOCLK_FREQ_MIN, // Default: 400.0
			parameter_int_t CLKIN_FREQ_MAX, // Default: 710.0
			parameter_int_t CLKIN_FREQ_MIN, // Default: 19.0
			parameter_int_t CLKPFD_FREQ_MAX, // Default: 550.0
			parameter_int_t CLKPFD_FREQ_MIN, // Default: 19.0
			//Verilog Ports in definition order:
			NetFlow* CLKFBDCM_A0_B, // net ID: CLKFBDCM lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKFBOUT_A0_B, // net ID: CLKFBOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKOUT0_A0_B, // net ID: CLKOUT0 lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKOUT1_A0_B, // net ID: CLKOUT1 lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKOUT2_A0_B, // net ID: CLKOUT2 lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKOUT3_A0_B, // net ID: CLKOUT3 lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKOUT4_A0_B, // net ID: CLKOUT4 lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKOUT5_A0_B, // net ID: CLKOUT5 lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKOUTDCM0_A0_B, // net ID: CLKOUTDCM0 lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKOUTDCM1_A0_B, // net ID: CLKOUTDCM1 lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKOUTDCM2_A0_B, // net ID: CLKOUTDCM2 lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKOUTDCM3_A0_B, // net ID: CLKOUTDCM3 lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKOUTDCM4_A0_B, // net ID: CLKOUTDCM4 lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKOUTDCM5_A0_B, // net ID: CLKOUTDCM5 lsb: 0  msb: 0 OUTPUT
			NetFlow* DO_A15_B, // net ID: DO lsb: 0  msb: 15 OUTPUT
			NetFlow* DO_A14_B, // net ID: DO lsb: 0  msb: 15 OUTPUT
			NetFlow* DO_A13_B, // net ID: DO lsb: 0  msb: 15 OUTPUT
			NetFlow* DO_A12_B, // net ID: DO lsb: 0  msb: 15 OUTPUT
			NetFlow* DO_A11_B, // net ID: DO lsb: 0  msb: 15 OUTPUT
			NetFlow* DO_A10_B, // net ID: DO lsb: 0  msb: 15 OUTPUT
			NetFlow* DO_A9_B, // net ID: DO lsb: 0  msb: 15 OUTPUT
			NetFlow* DO_A8_B, // net ID: DO lsb: 0  msb: 15 OUTPUT
			NetFlow* DO_A7_B, // net ID: DO lsb: 0  msb: 15 OUTPUT
			NetFlow* DO_A6_B, // net ID: DO lsb: 0  msb: 15 OUTPUT
			NetFlow* DO_A5_B, // net ID: DO lsb: 0  msb: 15 OUTPUT
			NetFlow* DO_A4_B, // net ID: DO lsb: 0  msb: 15 OUTPUT
			NetFlow* DO_A3_B, // net ID: DO lsb: 0  msb: 15 OUTPUT
			NetFlow* DO_A2_B, // net ID: DO lsb: 0  msb: 15 OUTPUT
			NetFlow* DO_A1_B, // net ID: DO lsb: 0  msb: 15 OUTPUT
			NetFlow* DO_A0_B, // net ID: DO lsb: 0  msb: 15 OUTPUT
			NetFlow* DRDY_A0_B, // net ID: DRDY lsb: 0  msb: 0 OUTPUT
			NetFlow* LOCKED_A0_B, // net ID: LOCKED lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKFBIN_A0_B, // net ID: CLKFBIN lsb: 0  msb: 0 INPUT
			NetFlow* CLKIN1_A0_B, // net ID: CLKIN1 lsb: 0  msb: 0 INPUT
			NetFlow* CLKIN2_A0_B, // net ID: CLKIN2 lsb: 0  msb: 0 INPUT
			NetFlow* CLKINSEL_A0_B, // net ID: CLKINSEL lsb: 0  msb: 0 INPUT
			NetFlow* DADDR_A4_B, // net ID: DADDR lsb: 0  msb: 4 INPUT
			NetFlow* DADDR_A3_B, // net ID: DADDR lsb: 0  msb: 4 INPUT
			NetFlow* DADDR_A2_B, // net ID: DADDR lsb: 0  msb: 4 INPUT
			NetFlow* DADDR_A1_B, // net ID: DADDR lsb: 0  msb: 4 INPUT
			NetFlow* DADDR_A0_B, // net ID: DADDR lsb: 0  msb: 4 INPUT
			NetFlow* DCLK_A0_B, // net ID: DCLK lsb: 0  msb: 0 INPUT
			NetFlow* DEN_A0_B, // net ID: DEN lsb: 0  msb: 0 INPUT
			NetFlow* DI_A15_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A14_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A13_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A12_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A11_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A10_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A9_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A8_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A7_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A6_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A5_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A4_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A3_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A2_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A1_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A0_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DWE_A0_B, // net ID: DWE lsb: 0  msb: 0 INPUT
			NetFlow* REL_A0_B, // net ID: REL lsb: 0  msb: 0 INPUT
			NetFlow* RST_A0_B // net ID: RST lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->BANDWIDTH = BANDWIDTH; // Default: "OPTIMIZED"
			this->CLK_FEEDBACK = CLK_FEEDBACK; // Default: "CLKFBOUT"
			this->CLKFBOUT_DESKEW_ADJUST = CLKFBOUT_DESKEW_ADJUST; // Default: "NONE"
			this->CLKOUT0_DESKEW_ADJUST = CLKOUT0_DESKEW_ADJUST; // Default: "NONE"
			this->CLKOUT1_DESKEW_ADJUST = CLKOUT1_DESKEW_ADJUST; // Default: "NONE"
			this->CLKOUT2_DESKEW_ADJUST = CLKOUT2_DESKEW_ADJUST; // Default: "NONE"
			this->CLKOUT3_DESKEW_ADJUST = CLKOUT3_DESKEW_ADJUST; // Default: "NONE"
			this->CLKOUT4_DESKEW_ADJUST = CLKOUT4_DESKEW_ADJUST; // Default: "NONE"
			this->CLKOUT5_DESKEW_ADJUST = CLKOUT5_DESKEW_ADJUST; // Default: "NONE"
			this->CLKFBOUT_MULT = CLKFBOUT_MULT; // Default: 1
			this->CLKFBOUT_PHASE = CLKFBOUT_PHASE; // Default: 0.0
			this->CLKIN1_PERIOD = CLKIN1_PERIOD; // Default: 0.000
			this->CLKIN2_PERIOD = CLKIN2_PERIOD; // Default: 0.000
			this->CLKOUT0_DIVIDE = CLKOUT0_DIVIDE; // Default: 1
			this->CLKOUT0_DUTY_CYCLE = CLKOUT0_DUTY_CYCLE; // Default: 0.5
			this->CLKOUT0_PHASE = CLKOUT0_PHASE; // Default: 0.0
			this->CLKOUT1_DIVIDE = CLKOUT1_DIVIDE; // Default: 1
			this->CLKOUT1_DUTY_CYCLE = CLKOUT1_DUTY_CYCLE; // Default: 0.5
			this->CLKOUT1_PHASE = CLKOUT1_PHASE; // Default: 0.0
			this->CLKOUT2_DIVIDE = CLKOUT2_DIVIDE; // Default: 1
			this->CLKOUT2_DUTY_CYCLE = CLKOUT2_DUTY_CYCLE; // Default: 0.5
			this->CLKOUT2_PHASE = CLKOUT2_PHASE; // Default: 0.0
			this->CLKOUT3_DIVIDE = CLKOUT3_DIVIDE; // Default: 1
			this->CLKOUT3_DUTY_CYCLE = CLKOUT3_DUTY_CYCLE; // Default: 0.5
			this->CLKOUT3_PHASE = CLKOUT3_PHASE; // Default: 0.0
			this->CLKOUT4_DIVIDE = CLKOUT4_DIVIDE; // Default: 1
			this->CLKOUT4_DUTY_CYCLE = CLKOUT4_DUTY_CYCLE; // Default: 0.5
			this->CLKOUT4_PHASE = CLKOUT4_PHASE; // Default: 0.0
			this->CLKOUT5_DIVIDE = CLKOUT5_DIVIDE; // Default: 1
			this->CLKOUT5_DUTY_CYCLE = CLKOUT5_DUTY_CYCLE; // Default: 0.5
			this->CLKOUT5_PHASE = CLKOUT5_PHASE; // Default: 0.0
			this->COMPENSATION = COMPENSATION; // Default: "SYSTEM_SYNCHRONOUS"
			this->DIVCLK_DIVIDE = DIVCLK_DIVIDE; // Default: 1
			this->EN_REL = EN_REL; // Default: "FALSE"
			this->PLL_PMCD_MODE = PLL_PMCD_MODE; // Default: "FALSE"
			this->REF_JITTER = REF_JITTER; // Default: 0.100
			this->RESET_ON_LOSS_OF_LOCK = RESET_ON_LOSS_OF_LOCK; // Default: "FALSE"
			this->RST_DEASSERT_CLK = RST_DEASSERT_CLK; // Default: "CLKIN1"
			this->SIM_DEVICE = SIM_DEVICE; // Default: "VIRTEX5"
			this->LOC = LOC; // Default: "UNPLACED"
			this->VCOCLK_FREQ_MAX = VCOCLK_FREQ_MAX; // Default: 1440.0
			this->VCOCLK_FREQ_MIN = VCOCLK_FREQ_MIN; // Default: 400.0
			this->CLKIN_FREQ_MAX = CLKIN_FREQ_MAX; // Default: 710.0
			this->CLKIN_FREQ_MIN = CLKIN_FREQ_MIN; // Default: 19.0
			this->CLKPFD_FREQ_MAX = CLKPFD_FREQ_MAX; // Default: 550.0
			this->CLKPFD_FREQ_MIN = CLKPFD_FREQ_MIN; // Default: 19.0
			//Verilog Ports in definition order:
			this->CLKFBDCM_A0_B = CLKFBDCM_A0_B; // net ID: CLKFBDCM lsb: 0  msb: 0 OUTPUT
			this->CLKFBOUT_A0_B = CLKFBOUT_A0_B; // net ID: CLKFBOUT lsb: 0  msb: 0 OUTPUT
			this->CLKOUT0_A0_B = CLKOUT0_A0_B; // net ID: CLKOUT0 lsb: 0  msb: 0 OUTPUT
			this->CLKOUT1_A0_B = CLKOUT1_A0_B; // net ID: CLKOUT1 lsb: 0  msb: 0 OUTPUT
			this->CLKOUT2_A0_B = CLKOUT2_A0_B; // net ID: CLKOUT2 lsb: 0  msb: 0 OUTPUT
			this->CLKOUT3_A0_B = CLKOUT3_A0_B; // net ID: CLKOUT3 lsb: 0  msb: 0 OUTPUT
			this->CLKOUT4_A0_B = CLKOUT4_A0_B; // net ID: CLKOUT4 lsb: 0  msb: 0 OUTPUT
			this->CLKOUT5_A0_B = CLKOUT5_A0_B; // net ID: CLKOUT5 lsb: 0  msb: 0 OUTPUT
			this->CLKOUTDCM0_A0_B = CLKOUTDCM0_A0_B; // net ID: CLKOUTDCM0 lsb: 0  msb: 0 OUTPUT
			this->CLKOUTDCM1_A0_B = CLKOUTDCM1_A0_B; // net ID: CLKOUTDCM1 lsb: 0  msb: 0 OUTPUT
			this->CLKOUTDCM2_A0_B = CLKOUTDCM2_A0_B; // net ID: CLKOUTDCM2 lsb: 0  msb: 0 OUTPUT
			this->CLKOUTDCM3_A0_B = CLKOUTDCM3_A0_B; // net ID: CLKOUTDCM3 lsb: 0  msb: 0 OUTPUT
			this->CLKOUTDCM4_A0_B = CLKOUTDCM4_A0_B; // net ID: CLKOUTDCM4 lsb: 0  msb: 0 OUTPUT
			this->CLKOUTDCM5_A0_B = CLKOUTDCM5_A0_B; // net ID: CLKOUTDCM5 lsb: 0  msb: 0 OUTPUT
			this->DO_A15_B = DO_A15_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
			this->DO_A14_B = DO_A14_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
			this->DO_A13_B = DO_A13_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
			this->DO_A12_B = DO_A12_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
			this->DO_A11_B = DO_A11_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
			this->DO_A10_B = DO_A10_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
			this->DO_A9_B = DO_A9_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
			this->DO_A8_B = DO_A8_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
			this->DO_A7_B = DO_A7_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
			this->DO_A6_B = DO_A6_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
			this->DO_A5_B = DO_A5_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
			this->DO_A4_B = DO_A4_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
			this->DO_A3_B = DO_A3_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
			this->DO_A2_B = DO_A2_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
			this->DO_A1_B = DO_A1_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
			this->DO_A0_B = DO_A0_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
			this->DRDY_A0_B = DRDY_A0_B; // net ID: DRDY lsb: 0  msb: 0 OUTPUT
			this->LOCKED_A0_B = LOCKED_A0_B; // net ID: LOCKED lsb: 0  msb: 0 OUTPUT
			this->CLKFBIN_A0_B = CLKFBIN_A0_B; // net ID: CLKFBIN lsb: 0  msb: 0 INPUT
			this->CLKIN1_A0_B = CLKIN1_A0_B; // net ID: CLKIN1 lsb: 0  msb: 0 INPUT
			this->CLKIN2_A0_B = CLKIN2_A0_B; // net ID: CLKIN2 lsb: 0  msb: 0 INPUT
			this->CLKINSEL_A0_B = CLKINSEL_A0_B; // net ID: CLKINSEL lsb: 0  msb: 0 INPUT
			this->DADDR_A4_B = DADDR_A4_B; // net ID: DADDR lsb: 0  msb: 4 INPUT
			this->DADDR_A3_B = DADDR_A3_B; // net ID: DADDR lsb: 0  msb: 4 INPUT
			this->DADDR_A2_B = DADDR_A2_B; // net ID: DADDR lsb: 0  msb: 4 INPUT
			this->DADDR_A1_B = DADDR_A1_B; // net ID: DADDR lsb: 0  msb: 4 INPUT
			this->DADDR_A0_B = DADDR_A0_B; // net ID: DADDR lsb: 0  msb: 4 INPUT
			this->DCLK_A0_B = DCLK_A0_B; // net ID: DCLK lsb: 0  msb: 0 INPUT
			this->DEN_A0_B = DEN_A0_B; // net ID: DEN lsb: 0  msb: 0 INPUT
			this->DI_A15_B = DI_A15_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A14_B = DI_A14_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A13_B = DI_A13_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A12_B = DI_A12_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A11_B = DI_A11_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A10_B = DI_A10_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A9_B = DI_A9_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A8_B = DI_A8_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A7_B = DI_A7_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A6_B = DI_A6_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A5_B = DI_A5_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A4_B = DI_A4_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A3_B = DI_A3_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A2_B = DI_A2_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A1_B = DI_A1_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A0_B = DI_A0_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DWE_A0_B = DWE_A0_B; // net ID: DWE lsb: 0  msb: 0 INPUT
			this->REL_A0_B = REL_A0_B; // net ID: REL lsb: 0  msb: 0 INPUT
			this->RST_A0_B = RST_A0_B; // net ID: RST lsb: 0  msb: 0 INPUT
			
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
#endif // X_PLL_ADV_H
