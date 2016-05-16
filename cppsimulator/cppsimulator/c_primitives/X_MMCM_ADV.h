/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_MMCM_ADV_H
#define X_MMCM_ADV_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_MMCM_ADV: public Primitive{

		//Verilog Parameters:
		parameter_string_t BANDWIDTH;
		parameter_enum_t CLKFBOUT_USE_FINE_PS;
		parameter_enum_t CLKOUT0_USE_FINE_PS;
		parameter_enum_t CLKOUT1_USE_FINE_PS;
		parameter_enum_t CLKOUT2_USE_FINE_PS;
		parameter_enum_t CLKOUT3_USE_FINE_PS;
		parameter_enum_t CLKOUT4_CASCADE;
		parameter_enum_t CLKOUT4_USE_FINE_PS;
		parameter_enum_t CLKOUT5_USE_FINE_PS;
		parameter_enum_t CLKOUT6_USE_FINE_PS;
		parameter_enum_t CLOCK_HOLD;
		parameter_string_t COMPENSATION;
		parameter_enum_t STARTUP_WAIT;
		parameter_int_t CLKOUT1_DIVIDE;
		parameter_int_t CLKOUT2_DIVIDE;
		parameter_int_t CLKOUT3_DIVIDE;
		parameter_int_t CLKOUT4_DIVIDE;
		parameter_int_t CLKOUT5_DIVIDE;
		parameter_int_t CLKOUT6_DIVIDE;
		parameter_int_t DIVCLK_DIVIDE;
		parameter_int_t CLKFBOUT_MULT_F;
		parameter_int_t CLKFBOUT_PHASE;
		parameter_int_t CLKIN1_PERIOD;
		parameter_int_t CLKIN2_PERIOD;
		parameter_int_t CLKOUT0_DIVIDE_F;
		parameter_int_t CLKOUT0_DUTY_CYCLE;
		parameter_int_t CLKOUT0_PHASE;
		parameter_int_t CLKOUT1_DUTY_CYCLE;
		parameter_int_t CLKOUT1_PHASE;
		parameter_int_t CLKOUT2_DUTY_CYCLE;
		parameter_int_t CLKOUT2_PHASE;
		parameter_int_t CLKOUT3_DUTY_CYCLE;
		parameter_int_t CLKOUT3_PHASE;
		parameter_int_t CLKOUT4_DUTY_CYCLE;
		parameter_int_t CLKOUT4_PHASE;
		parameter_int_t CLKOUT5_DUTY_CYCLE;
		parameter_int_t CLKOUT5_PHASE;
		parameter_int_t CLKOUT6_DUTY_CYCLE;
		parameter_int_t CLKOUT6_PHASE;
		parameter_int_t REF_JITTER1;
		parameter_int_t REF_JITTER2;
		parameter_int_t VCOCLK_FREQ_MAX;
		parameter_int_t VCOCLK_FREQ_MIN;
		parameter_int_t CLKIN_FREQ_MAX;
		parameter_int_t CLKIN_FREQ_MIN;
		parameter_int_t CLKPFD_FREQ_MAX;
		parameter_int_t CLKPFD_FREQ_MIN;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* CLKFBOUT_A0_B; // net ID: CLKFBOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKFBOUTB_A0_B; // net ID: CLKFBOUTB lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKFBSTOPPED_A0_B; // net ID: CLKFBSTOPPED lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKINSTOPPED_A0_B; // net ID: CLKINSTOPPED lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKOUT0_A0_B; // net ID: CLKOUT0 lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKOUT0B_A0_B; // net ID: CLKOUT0B lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKOUT1_A0_B; // net ID: CLKOUT1 lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKOUT1B_A0_B; // net ID: CLKOUT1B lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKOUT2_A0_B; // net ID: CLKOUT2 lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKOUT2B_A0_B; // net ID: CLKOUT2B lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKOUT3_A0_B; // net ID: CLKOUT3 lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKOUT3B_A0_B; // net ID: CLKOUT3B lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKOUT4_A0_B; // net ID: CLKOUT4 lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKOUT5_A0_B; // net ID: CLKOUT5 lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKOUT6_A0_B; // net ID: CLKOUT6 lsb: 0  msb: 0 OUTPUT
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
		NetFlow* PSDONE_A0_B; // net ID: PSDONE lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKFBIN_A0_B; // net ID: CLKFBIN lsb: 0  msb: 0 INPUT
		NetFlow* CLKIN1_A0_B; // net ID: CLKIN1 lsb: 0  msb: 0 INPUT
		NetFlow* CLKIN2_A0_B; // net ID: CLKIN2 lsb: 0  msb: 0 INPUT
		NetFlow* CLKINSEL_A0_B; // net ID: CLKINSEL lsb: 0  msb: 0 INPUT
		NetFlow* DADDR_A6_B; // net ID: DADDR lsb: 0  msb: 6 INPUT
		NetFlow* DADDR_A5_B; // net ID: DADDR lsb: 0  msb: 6 INPUT
		NetFlow* DADDR_A4_B; // net ID: DADDR lsb: 0  msb: 6 INPUT
		NetFlow* DADDR_A3_B; // net ID: DADDR lsb: 0  msb: 6 INPUT
		NetFlow* DADDR_A2_B; // net ID: DADDR lsb: 0  msb: 6 INPUT
		NetFlow* DADDR_A1_B; // net ID: DADDR lsb: 0  msb: 6 INPUT
		NetFlow* DADDR_A0_B; // net ID: DADDR lsb: 0  msb: 6 INPUT
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
		NetFlow* PSCLK_A0_B; // net ID: PSCLK lsb: 0  msb: 0 INPUT
		NetFlow* PSEN_A0_B; // net ID: PSEN lsb: 0  msb: 0 INPUT
		NetFlow* PSINCDEC_A0_B; // net ID: PSINCDEC lsb: 0  msb: 0 INPUT
		NetFlow* PWRDWN_A0_B; // net ID: PWRDWN lsb: 0  msb: 0 INPUT
		NetFlow* RST_A0_B; // net ID: RST lsb: 0  msb: 0 INPUT
		
		public: X_MMCM_ADV(
			const char * name,
			//Verilog Parameters:
			parameter_string_t BANDWIDTH, // Default: "OPTIMIZED"
			parameter_enum_t CLKFBOUT_USE_FINE_PS, // Default: "FALSE"
			parameter_enum_t CLKOUT0_USE_FINE_PS, // Default: "FALSE"
			parameter_enum_t CLKOUT1_USE_FINE_PS, // Default: "FALSE"
			parameter_enum_t CLKOUT2_USE_FINE_PS, // Default: "FALSE"
			parameter_enum_t CLKOUT3_USE_FINE_PS, // Default: "FALSE"
			parameter_enum_t CLKOUT4_CASCADE, // Default: "FALSE"
			parameter_enum_t CLKOUT4_USE_FINE_PS, // Default: "FALSE"
			parameter_enum_t CLKOUT5_USE_FINE_PS, // Default: "FALSE"
			parameter_enum_t CLKOUT6_USE_FINE_PS, // Default: "FALSE"
			parameter_enum_t CLOCK_HOLD, // Default: "FALSE"
			parameter_string_t COMPENSATION, // Default: "ZHOLD"
			parameter_enum_t STARTUP_WAIT, // Default: "FALSE"
			parameter_int_t CLKOUT1_DIVIDE, // Default: 1
			parameter_int_t CLKOUT2_DIVIDE, // Default: 1
			parameter_int_t CLKOUT3_DIVIDE, // Default: 1
			parameter_int_t CLKOUT4_DIVIDE, // Default: 1
			parameter_int_t CLKOUT5_DIVIDE, // Default: 1
			parameter_int_t CLKOUT6_DIVIDE, // Default: 1
			parameter_int_t DIVCLK_DIVIDE, // Default: 1
			parameter_int_t CLKFBOUT_MULT_F, // Default: 5.000
			parameter_int_t CLKFBOUT_PHASE, // Default: 0.000
			parameter_int_t CLKIN1_PERIOD, // Default: 0.000
			parameter_int_t CLKIN2_PERIOD, // Default: 0.000
			parameter_int_t CLKOUT0_DIVIDE_F, // Default: 1.000
			parameter_int_t CLKOUT0_DUTY_CYCLE, // Default: 0.500
			parameter_int_t CLKOUT0_PHASE, // Default: 0.000
			parameter_int_t CLKOUT1_DUTY_CYCLE, // Default: 0.500
			parameter_int_t CLKOUT1_PHASE, // Default: 0.000
			parameter_int_t CLKOUT2_DUTY_CYCLE, // Default: 0.500
			parameter_int_t CLKOUT2_PHASE, // Default: 0.000
			parameter_int_t CLKOUT3_DUTY_CYCLE, // Default: 0.500
			parameter_int_t CLKOUT3_PHASE, // Default: 0.000
			parameter_int_t CLKOUT4_DUTY_CYCLE, // Default: 0.500
			parameter_int_t CLKOUT4_PHASE, // Default: 0.000
			parameter_int_t CLKOUT5_DUTY_CYCLE, // Default: 0.500
			parameter_int_t CLKOUT5_PHASE, // Default: 0.000
			parameter_int_t CLKOUT6_DUTY_CYCLE, // Default: 0.500
			parameter_int_t CLKOUT6_PHASE, // Default: 0.000
			parameter_int_t REF_JITTER1, // Default: 0.010
			parameter_int_t REF_JITTER2, // Default: 0.010
			parameter_int_t VCOCLK_FREQ_MAX, // Default: 1600.0
			parameter_int_t VCOCLK_FREQ_MIN, // Default: 600.0
			parameter_int_t CLKIN_FREQ_MAX, // Default: 800.0
			parameter_int_t CLKIN_FREQ_MIN, // Default: 10.0
			parameter_int_t CLKPFD_FREQ_MAX, // Default: 550.0
			parameter_int_t CLKPFD_FREQ_MIN, // Default: 10.0
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* CLKFBOUT_A0_B, // net ID: CLKFBOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKFBOUTB_A0_B, // net ID: CLKFBOUTB lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKFBSTOPPED_A0_B, // net ID: CLKFBSTOPPED lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKINSTOPPED_A0_B, // net ID: CLKINSTOPPED lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKOUT0_A0_B, // net ID: CLKOUT0 lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKOUT0B_A0_B, // net ID: CLKOUT0B lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKOUT1_A0_B, // net ID: CLKOUT1 lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKOUT1B_A0_B, // net ID: CLKOUT1B lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKOUT2_A0_B, // net ID: CLKOUT2 lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKOUT2B_A0_B, // net ID: CLKOUT2B lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKOUT3_A0_B, // net ID: CLKOUT3 lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKOUT3B_A0_B, // net ID: CLKOUT3B lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKOUT4_A0_B, // net ID: CLKOUT4 lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKOUT5_A0_B, // net ID: CLKOUT5 lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKOUT6_A0_B, // net ID: CLKOUT6 lsb: 0  msb: 0 OUTPUT
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
			NetFlow* PSDONE_A0_B, // net ID: PSDONE lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKFBIN_A0_B, // net ID: CLKFBIN lsb: 0  msb: 0 INPUT
			NetFlow* CLKIN1_A0_B, // net ID: CLKIN1 lsb: 0  msb: 0 INPUT
			NetFlow* CLKIN2_A0_B, // net ID: CLKIN2 lsb: 0  msb: 0 INPUT
			NetFlow* CLKINSEL_A0_B, // net ID: CLKINSEL lsb: 0  msb: 0 INPUT
			NetFlow* DADDR_A6_B, // net ID: DADDR lsb: 0  msb: 6 INPUT
			NetFlow* DADDR_A5_B, // net ID: DADDR lsb: 0  msb: 6 INPUT
			NetFlow* DADDR_A4_B, // net ID: DADDR lsb: 0  msb: 6 INPUT
			NetFlow* DADDR_A3_B, // net ID: DADDR lsb: 0  msb: 6 INPUT
			NetFlow* DADDR_A2_B, // net ID: DADDR lsb: 0  msb: 6 INPUT
			NetFlow* DADDR_A1_B, // net ID: DADDR lsb: 0  msb: 6 INPUT
			NetFlow* DADDR_A0_B, // net ID: DADDR lsb: 0  msb: 6 INPUT
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
			NetFlow* PSCLK_A0_B, // net ID: PSCLK lsb: 0  msb: 0 INPUT
			NetFlow* PSEN_A0_B, // net ID: PSEN lsb: 0  msb: 0 INPUT
			NetFlow* PSINCDEC_A0_B, // net ID: PSINCDEC lsb: 0  msb: 0 INPUT
			NetFlow* PWRDWN_A0_B, // net ID: PWRDWN lsb: 0  msb: 0 INPUT
			NetFlow* RST_A0_B // net ID: RST lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->BANDWIDTH = BANDWIDTH; // Default: "OPTIMIZED"
			this->CLKFBOUT_USE_FINE_PS = CLKFBOUT_USE_FINE_PS; // Default: "FALSE"
			this->CLKOUT0_USE_FINE_PS = CLKOUT0_USE_FINE_PS; // Default: "FALSE"
			this->CLKOUT1_USE_FINE_PS = CLKOUT1_USE_FINE_PS; // Default: "FALSE"
			this->CLKOUT2_USE_FINE_PS = CLKOUT2_USE_FINE_PS; // Default: "FALSE"
			this->CLKOUT3_USE_FINE_PS = CLKOUT3_USE_FINE_PS; // Default: "FALSE"
			this->CLKOUT4_CASCADE = CLKOUT4_CASCADE; // Default: "FALSE"
			this->CLKOUT4_USE_FINE_PS = CLKOUT4_USE_FINE_PS; // Default: "FALSE"
			this->CLKOUT5_USE_FINE_PS = CLKOUT5_USE_FINE_PS; // Default: "FALSE"
			this->CLKOUT6_USE_FINE_PS = CLKOUT6_USE_FINE_PS; // Default: "FALSE"
			this->CLOCK_HOLD = CLOCK_HOLD; // Default: "FALSE"
			this->COMPENSATION = COMPENSATION; // Default: "ZHOLD"
			this->STARTUP_WAIT = STARTUP_WAIT; // Default: "FALSE"
			this->CLKOUT1_DIVIDE = CLKOUT1_DIVIDE; // Default: 1
			this->CLKOUT2_DIVIDE = CLKOUT2_DIVIDE; // Default: 1
			this->CLKOUT3_DIVIDE = CLKOUT3_DIVIDE; // Default: 1
			this->CLKOUT4_DIVIDE = CLKOUT4_DIVIDE; // Default: 1
			this->CLKOUT5_DIVIDE = CLKOUT5_DIVIDE; // Default: 1
			this->CLKOUT6_DIVIDE = CLKOUT6_DIVIDE; // Default: 1
			this->DIVCLK_DIVIDE = DIVCLK_DIVIDE; // Default: 1
			this->CLKFBOUT_MULT_F = CLKFBOUT_MULT_F; // Default: 5.000
			this->CLKFBOUT_PHASE = CLKFBOUT_PHASE; // Default: 0.000
			this->CLKIN1_PERIOD = CLKIN1_PERIOD; // Default: 0.000
			this->CLKIN2_PERIOD = CLKIN2_PERIOD; // Default: 0.000
			this->CLKOUT0_DIVIDE_F = CLKOUT0_DIVIDE_F; // Default: 1.000
			this->CLKOUT0_DUTY_CYCLE = CLKOUT0_DUTY_CYCLE; // Default: 0.500
			this->CLKOUT0_PHASE = CLKOUT0_PHASE; // Default: 0.000
			this->CLKOUT1_DUTY_CYCLE = CLKOUT1_DUTY_CYCLE; // Default: 0.500
			this->CLKOUT1_PHASE = CLKOUT1_PHASE; // Default: 0.000
			this->CLKOUT2_DUTY_CYCLE = CLKOUT2_DUTY_CYCLE; // Default: 0.500
			this->CLKOUT2_PHASE = CLKOUT2_PHASE; // Default: 0.000
			this->CLKOUT3_DUTY_CYCLE = CLKOUT3_DUTY_CYCLE; // Default: 0.500
			this->CLKOUT3_PHASE = CLKOUT3_PHASE; // Default: 0.000
			this->CLKOUT4_DUTY_CYCLE = CLKOUT4_DUTY_CYCLE; // Default: 0.500
			this->CLKOUT4_PHASE = CLKOUT4_PHASE; // Default: 0.000
			this->CLKOUT5_DUTY_CYCLE = CLKOUT5_DUTY_CYCLE; // Default: 0.500
			this->CLKOUT5_PHASE = CLKOUT5_PHASE; // Default: 0.000
			this->CLKOUT6_DUTY_CYCLE = CLKOUT6_DUTY_CYCLE; // Default: 0.500
			this->CLKOUT6_PHASE = CLKOUT6_PHASE; // Default: 0.000
			this->REF_JITTER1 = REF_JITTER1; // Default: 0.010
			this->REF_JITTER2 = REF_JITTER2; // Default: 0.010
			this->VCOCLK_FREQ_MAX = VCOCLK_FREQ_MAX; // Default: 1600.0
			this->VCOCLK_FREQ_MIN = VCOCLK_FREQ_MIN; // Default: 600.0
			this->CLKIN_FREQ_MAX = CLKIN_FREQ_MAX; // Default: 800.0
			this->CLKIN_FREQ_MIN = CLKIN_FREQ_MIN; // Default: 10.0
			this->CLKPFD_FREQ_MAX = CLKPFD_FREQ_MAX; // Default: 550.0
			this->CLKPFD_FREQ_MIN = CLKPFD_FREQ_MIN; // Default: 10.0
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->CLKFBOUT_A0_B = CLKFBOUT_A0_B; // net ID: CLKFBOUT lsb: 0  msb: 0 OUTPUT
			this->CLKFBOUTB_A0_B = CLKFBOUTB_A0_B; // net ID: CLKFBOUTB lsb: 0  msb: 0 OUTPUT
			this->CLKFBSTOPPED_A0_B = CLKFBSTOPPED_A0_B; // net ID: CLKFBSTOPPED lsb: 0  msb: 0 OUTPUT
			this->CLKINSTOPPED_A0_B = CLKINSTOPPED_A0_B; // net ID: CLKINSTOPPED lsb: 0  msb: 0 OUTPUT
			this->CLKOUT0_A0_B = CLKOUT0_A0_B; // net ID: CLKOUT0 lsb: 0  msb: 0 OUTPUT
			this->CLKOUT0B_A0_B = CLKOUT0B_A0_B; // net ID: CLKOUT0B lsb: 0  msb: 0 OUTPUT
			this->CLKOUT1_A0_B = CLKOUT1_A0_B; // net ID: CLKOUT1 lsb: 0  msb: 0 OUTPUT
			this->CLKOUT1B_A0_B = CLKOUT1B_A0_B; // net ID: CLKOUT1B lsb: 0  msb: 0 OUTPUT
			this->CLKOUT2_A0_B = CLKOUT2_A0_B; // net ID: CLKOUT2 lsb: 0  msb: 0 OUTPUT
			this->CLKOUT2B_A0_B = CLKOUT2B_A0_B; // net ID: CLKOUT2B lsb: 0  msb: 0 OUTPUT
			this->CLKOUT3_A0_B = CLKOUT3_A0_B; // net ID: CLKOUT3 lsb: 0  msb: 0 OUTPUT
			this->CLKOUT3B_A0_B = CLKOUT3B_A0_B; // net ID: CLKOUT3B lsb: 0  msb: 0 OUTPUT
			this->CLKOUT4_A0_B = CLKOUT4_A0_B; // net ID: CLKOUT4 lsb: 0  msb: 0 OUTPUT
			this->CLKOUT5_A0_B = CLKOUT5_A0_B; // net ID: CLKOUT5 lsb: 0  msb: 0 OUTPUT
			this->CLKOUT6_A0_B = CLKOUT6_A0_B; // net ID: CLKOUT6 lsb: 0  msb: 0 OUTPUT
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
			this->PSDONE_A0_B = PSDONE_A0_B; // net ID: PSDONE lsb: 0  msb: 0 OUTPUT
			this->CLKFBIN_A0_B = CLKFBIN_A0_B; // net ID: CLKFBIN lsb: 0  msb: 0 INPUT
			this->CLKIN1_A0_B = CLKIN1_A0_B; // net ID: CLKIN1 lsb: 0  msb: 0 INPUT
			this->CLKIN2_A0_B = CLKIN2_A0_B; // net ID: CLKIN2 lsb: 0  msb: 0 INPUT
			this->CLKINSEL_A0_B = CLKINSEL_A0_B; // net ID: CLKINSEL lsb: 0  msb: 0 INPUT
			this->DADDR_A6_B = DADDR_A6_B; // net ID: DADDR lsb: 0  msb: 6 INPUT
			this->DADDR_A5_B = DADDR_A5_B; // net ID: DADDR lsb: 0  msb: 6 INPUT
			this->DADDR_A4_B = DADDR_A4_B; // net ID: DADDR lsb: 0  msb: 6 INPUT
			this->DADDR_A3_B = DADDR_A3_B; // net ID: DADDR lsb: 0  msb: 6 INPUT
			this->DADDR_A2_B = DADDR_A2_B; // net ID: DADDR lsb: 0  msb: 6 INPUT
			this->DADDR_A1_B = DADDR_A1_B; // net ID: DADDR lsb: 0  msb: 6 INPUT
			this->DADDR_A0_B = DADDR_A0_B; // net ID: DADDR lsb: 0  msb: 6 INPUT
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
			this->PSCLK_A0_B = PSCLK_A0_B; // net ID: PSCLK lsb: 0  msb: 0 INPUT
			this->PSEN_A0_B = PSEN_A0_B; // net ID: PSEN lsb: 0  msb: 0 INPUT
			this->PSINCDEC_A0_B = PSINCDEC_A0_B; // net ID: PSINCDEC lsb: 0  msb: 0 INPUT
			this->PWRDWN_A0_B = PWRDWN_A0_B; // net ID: PWRDWN lsb: 0  msb: 0 INPUT
			this->RST_A0_B = RST_A0_B; // net ID: RST lsb: 0  msb: 0 INPUT
			
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
#endif // X_MMCM_ADV_H
