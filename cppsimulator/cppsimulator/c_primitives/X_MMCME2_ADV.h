/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_MMCME2_ADV{

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
		parameter_enum_t SS_EN;
		parameter_string_t SS_MODE;
		parameter_int_t SS_MOD_PERIOD;
		parameter_int_t VCOCLK_FREQ_MAX;
		parameter_int_t VCOCLK_FREQ_MIN;
		parameter_int_t CLKIN_FREQ_MAX;
		parameter_int_t CLKIN_FREQ_MIN;
		parameter_int_t CLKPFD_FREQ_MAX;
		parameter_int_t CLKPFD_FREQ_MIN;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* CLKFBOUT; // OUTPUT
		NetFlow* CLKFBOUTB; // OUTPUT
		NetFlow* CLKFBSTOPPED; // OUTPUT
		NetFlow* CLKINSTOPPED; // OUTPUT
		NetFlow* CLKOUT0; // OUTPUT
		NetFlow* CLKOUT0B; // OUTPUT
		NetFlow* CLKOUT1; // OUTPUT
		NetFlow* CLKOUT1B; // OUTPUT
		NetFlow* CLKOUT2; // OUTPUT
		NetFlow* CLKOUT2B; // OUTPUT
		NetFlow* CLKOUT3; // OUTPUT
		NetFlow* CLKOUT3B; // OUTPUT
		NetFlow* CLKOUT4; // OUTPUT
		NetFlow* CLKOUT5; // OUTPUT
		NetFlow* CLKOUT6; // OUTPUT
		NetFlow* DO; // OUTPUT
		NetFlow* DRDY; // OUTPUT
		NetFlow* LOCKED; // OUTPUT
		NetFlow* PSDONE; // OUTPUT
		NetFlow* CLKFBIN; // INPUT
		NetFlow* CLKIN1; // INPUT
		NetFlow* CLKIN2; // INPUT
		NetFlow* CLKINSEL; // INPUT
		NetFlow* DADDR; // INPUT
		NetFlow* DCLK; // INPUT
		NetFlow* DEN; // INPUT
		NetFlow* DI; // INPUT
		NetFlow* DWE; // INPUT
		NetFlow* PSCLK; // INPUT
		NetFlow* PSEN; // INPUT
		NetFlow* PSINCDEC; // INPUT
		NetFlow* PWRDWN; // INPUT
		NetFlow* RST; // INPUT
		
	
		X_MMCME2_ADV(
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
			parameter_enum_t SS_EN, // Default: "FALSE"
			parameter_string_t SS_MODE, // Default: "CENTER_HIGH"
			parameter_int_t SS_MOD_PERIOD, // Default: 10000
			parameter_int_t VCOCLK_FREQ_MAX, // Default: 1600.0
			parameter_int_t VCOCLK_FREQ_MIN, // Default: 600.0
			parameter_int_t CLKIN_FREQ_MAX, // Default: 1066.0
			parameter_int_t CLKIN_FREQ_MIN, // Default: 10.0
			parameter_int_t CLKPFD_FREQ_MAX, // Default: 550.0
			parameter_int_t CLKPFD_FREQ_MIN, // Default: 10.0
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* CLKFBOUT, // OUTPUT
			NetFlow* CLKFBOUTB, // OUTPUT
			NetFlow* CLKFBSTOPPED, // OUTPUT
			NetFlow* CLKINSTOPPED, // OUTPUT
			NetFlow* CLKOUT0, // OUTPUT
			NetFlow* CLKOUT0B, // OUTPUT
			NetFlow* CLKOUT1, // OUTPUT
			NetFlow* CLKOUT1B, // OUTPUT
			NetFlow* CLKOUT2, // OUTPUT
			NetFlow* CLKOUT2B, // OUTPUT
			NetFlow* CLKOUT3, // OUTPUT
			NetFlow* CLKOUT3B, // OUTPUT
			NetFlow* CLKOUT4, // OUTPUT
			NetFlow* CLKOUT5, // OUTPUT
			NetFlow* CLKOUT6, // OUTPUT
			NetFlow* DO, // OUTPUT
			NetFlow* DRDY, // OUTPUT
			NetFlow* LOCKED, // OUTPUT
			NetFlow* PSDONE, // OUTPUT
			NetFlow* CLKFBIN, // INPUT
			NetFlow* CLKIN1, // INPUT
			NetFlow* CLKIN2, // INPUT
			NetFlow* CLKINSEL, // INPUT
			NetFlow* DADDR, // INPUT
			NetFlow* DCLK, // INPUT
			NetFlow* DEN, // INPUT
			NetFlow* DI, // INPUT
			NetFlow* DWE, // INPUT
			NetFlow* PSCLK, // INPUT
			NetFlow* PSEN, // INPUT
			NetFlow* PSINCDEC, // INPUT
			NetFlow* PWRDWN, // INPUT
			NetFlow* RST // INPUT
			){
		
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
			this->SS_EN = SS_EN; // Default: "FALSE"
			this->SS_MODE = SS_MODE; // Default: "CENTER_HIGH"
			this->SS_MOD_PERIOD = SS_MOD_PERIOD; // Default: 10000
			this->VCOCLK_FREQ_MAX = VCOCLK_FREQ_MAX; // Default: 1600.0
			this->VCOCLK_FREQ_MIN = VCOCLK_FREQ_MIN; // Default: 600.0
			this->CLKIN_FREQ_MAX = CLKIN_FREQ_MAX; // Default: 1066.0
			this->CLKIN_FREQ_MIN = CLKIN_FREQ_MIN; // Default: 10.0
			this->CLKPFD_FREQ_MAX = CLKPFD_FREQ_MAX; // Default: 550.0
			this->CLKPFD_FREQ_MIN = CLKPFD_FREQ_MIN; // Default: 10.0
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->CLKFBOUT = CLKFBOUT; // OUTPUT
			this->CLKFBOUTB = CLKFBOUTB; // OUTPUT
			this->CLKFBSTOPPED = CLKFBSTOPPED; // OUTPUT
			this->CLKINSTOPPED = CLKINSTOPPED; // OUTPUT
			this->CLKOUT0 = CLKOUT0; // OUTPUT
			this->CLKOUT0B = CLKOUT0B; // OUTPUT
			this->CLKOUT1 = CLKOUT1; // OUTPUT
			this->CLKOUT1B = CLKOUT1B; // OUTPUT
			this->CLKOUT2 = CLKOUT2; // OUTPUT
			this->CLKOUT2B = CLKOUT2B; // OUTPUT
			this->CLKOUT3 = CLKOUT3; // OUTPUT
			this->CLKOUT3B = CLKOUT3B; // OUTPUT
			this->CLKOUT4 = CLKOUT4; // OUTPUT
			this->CLKOUT5 = CLKOUT5; // OUTPUT
			this->CLKOUT6 = CLKOUT6; // OUTPUT
			this->DO = DO; // OUTPUT
			this->DRDY = DRDY; // OUTPUT
			this->LOCKED = LOCKED; // OUTPUT
			this->PSDONE = PSDONE; // OUTPUT
			this->CLKFBIN = CLKFBIN; // INPUT
			this->CLKIN1 = CLKIN1; // INPUT
			this->CLKIN2 = CLKIN2; // INPUT
			this->CLKINSEL = CLKINSEL; // INPUT
			this->DADDR = DADDR; // INPUT
			this->DCLK = DCLK; // INPUT
			this->DEN = DEN; // INPUT
			this->DI = DI; // INPUT
			this->DWE = DWE; // INPUT
			this->PSCLK = PSCLK; // INPUT
			this->PSEN = PSEN; // INPUT
			this->PSINCDEC = PSINCDEC; // INPUT
			this->PWRDWN = PWRDWN; // INPUT
			this->RST = RST; // INPUT
		
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
