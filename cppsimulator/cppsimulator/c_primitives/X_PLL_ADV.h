/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

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
		parameter_string_t CLKFBOUT_MULT;
		parameter_string_t CLKFBOUT_PHASE;
		parameter_string_t CLKIN1_PERIOD;
		parameter_string_t CLKIN2_PERIOD;
		parameter_string_t CLKOUT0_DIVIDE;
		parameter_string_t CLKOUT0_DUTY_CYCLE;
		parameter_string_t CLKOUT0_PHASE;
		parameter_string_t CLKOUT1_DIVIDE;
		parameter_string_t CLKOUT1_DUTY_CYCLE;
		parameter_string_t CLKOUT1_PHASE;
		parameter_string_t CLKOUT2_DIVIDE;
		parameter_string_t CLKOUT2_DUTY_CYCLE;
		parameter_string_t CLKOUT2_PHASE;
		parameter_string_t CLKOUT3_DIVIDE;
		parameter_string_t CLKOUT3_DUTY_CYCLE;
		parameter_string_t CLKOUT3_PHASE;
		parameter_string_t CLKOUT4_DIVIDE;
		parameter_string_t CLKOUT4_DUTY_CYCLE;
		parameter_string_t CLKOUT4_PHASE;
		parameter_string_t CLKOUT5_DIVIDE;
		parameter_string_t CLKOUT5_DUTY_CYCLE;
		parameter_string_t CLKOUT5_PHASE;
		parameter_string_t COMPENSATION;
		parameter_string_t DIVCLK_DIVIDE;
		parameter_enum_t EN_REL;
		parameter_enum_t PLL_PMCD_MODE;
		parameter_string_t REF_JITTER;
		parameter_enum_t RESET_ON_LOSS_OF_LOCK;
		parameter_string_t RST_DEASSERT_CLK;
		parameter_string_t SIM_DEVICE;
		parameter_string_t LOC;
		parameter_string_t VCOCLK_FREQ_MAX;
		parameter_string_t VCOCLK_FREQ_MIN;
		parameter_string_t CLKIN_FREQ_MAX;
		parameter_string_t CLKIN_FREQ_MIN;
		parameter_string_t CLKPFD_FREQ_MAX;
		parameter_string_t CLKPFD_FREQ_MIN;
		//Verilog Ports in definition order:
		NetFlow* CLKFBDCM; // net ID: CLKFBDCM lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKFBOUT; // net ID: CLKFBOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKOUT0; // net ID: CLKOUT0 lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKOUT1; // net ID: CLKOUT1 lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKOUT2; // net ID: CLKOUT2 lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKOUT3; // net ID: CLKOUT3 lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKOUT4; // net ID: CLKOUT4 lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKOUT5; // net ID: CLKOUT5 lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKOUTDCM0; // net ID: CLKOUTDCM0 lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKOUTDCM1; // net ID: CLKOUTDCM1 lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKOUTDCM2; // net ID: CLKOUTDCM2 lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKOUTDCM3; // net ID: CLKOUTDCM3 lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKOUTDCM4; // net ID: CLKOUTDCM4 lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKOUTDCM5; // net ID: CLKOUTDCM5 lsb: 0  msb: 0 OUTPUT
		NetFlow* DO; // net ID: DO lsb: 0  msb: 0 OUTPUT
		NetFlow* DRDY; // net ID: DRDY lsb: 0  msb: 0 OUTPUT
		NetFlow* LOCKED; // net ID: LOCKED lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKFBIN; // net ID: CLKFBIN lsb: 0  msb: 0 INPUT
		NetFlow* CLKIN1; // net ID: CLKIN1 lsb: 0  msb: 0 INPUT
		NetFlow* CLKIN2; // net ID: CLKIN2 lsb: 0  msb: 0 INPUT
		NetFlow* CLKINSEL; // net ID: CLKINSEL lsb: 0  msb: 0 INPUT
		NetFlow* DADDR; // net ID: DADDR lsb: 0  msb: 4 INPUT
		NetFlow* DCLK; // net ID: DCLK lsb: 0  msb: 0 INPUT
		NetFlow* DEN; // net ID: DEN lsb: 0  msb: 0 INPUT
		NetFlow* DI; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DWE; // net ID: DWE lsb: 0  msb: 0 INPUT
		NetFlow* REL; // net ID: REL lsb: 0  msb: 0 INPUT
		NetFlow* RST; // net ID: RST lsb: 0  msb: 0 INPUT
		
		X_PLL_ADV(
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
			parameter_string_t CLKFBOUT_MULT, // Default: 1
			parameter_string_t CLKFBOUT_PHASE, // Default: 0.0
			parameter_string_t CLKIN1_PERIOD, // Default: 0.000
			parameter_string_t CLKIN2_PERIOD, // Default: 0.000
			parameter_string_t CLKOUT0_DIVIDE, // Default: 1
			parameter_string_t CLKOUT0_DUTY_CYCLE, // Default: 0.5
			parameter_string_t CLKOUT0_PHASE, // Default: 0.0
			parameter_string_t CLKOUT1_DIVIDE, // Default: 1
			parameter_string_t CLKOUT1_DUTY_CYCLE, // Default: 0.5
			parameter_string_t CLKOUT1_PHASE, // Default: 0.0
			parameter_string_t CLKOUT2_DIVIDE, // Default: 1
			parameter_string_t CLKOUT2_DUTY_CYCLE, // Default: 0.5
			parameter_string_t CLKOUT2_PHASE, // Default: 0.0
			parameter_string_t CLKOUT3_DIVIDE, // Default: 1
			parameter_string_t CLKOUT3_DUTY_CYCLE, // Default: 0.5
			parameter_string_t CLKOUT3_PHASE, // Default: 0.0
			parameter_string_t CLKOUT4_DIVIDE, // Default: 1
			parameter_string_t CLKOUT4_DUTY_CYCLE, // Default: 0.5
			parameter_string_t CLKOUT4_PHASE, // Default: 0.0
			parameter_string_t CLKOUT5_DIVIDE, // Default: 1
			parameter_string_t CLKOUT5_DUTY_CYCLE, // Default: 0.5
			parameter_string_t CLKOUT5_PHASE, // Default: 0.0
			parameter_string_t COMPENSATION, // Default: "SYSTEM_SYNCHRONOUS"
			parameter_string_t DIVCLK_DIVIDE, // Default: 1
			parameter_enum_t EN_REL, // Default: "FALSE"
			parameter_enum_t PLL_PMCD_MODE, // Default: "FALSE"
			parameter_string_t REF_JITTER, // Default: 0.100
			parameter_enum_t RESET_ON_LOSS_OF_LOCK, // Default: "FALSE"
			parameter_string_t RST_DEASSERT_CLK, // Default: "CLKIN1"
			parameter_string_t SIM_DEVICE, // Default: "VIRTEX5"
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_string_t VCOCLK_FREQ_MAX, // Default: 1440.0
			parameter_string_t VCOCLK_FREQ_MIN, // Default: 400.0
			parameter_string_t CLKIN_FREQ_MAX, // Default: 710.0
			parameter_string_t CLKIN_FREQ_MIN, // Default: 19.0
			parameter_string_t CLKPFD_FREQ_MAX, // Default: 550.0
			parameter_string_t CLKPFD_FREQ_MIN, // Default: 19.0
			//Verilog Ports in definition order:
			NetFlow* CLKFBDCM, // net ID: CLKFBDCM lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKFBOUT, // net ID: CLKFBOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKOUT0, // net ID: CLKOUT0 lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKOUT1, // net ID: CLKOUT1 lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKOUT2, // net ID: CLKOUT2 lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKOUT3, // net ID: CLKOUT3 lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKOUT4, // net ID: CLKOUT4 lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKOUT5, // net ID: CLKOUT5 lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKOUTDCM0, // net ID: CLKOUTDCM0 lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKOUTDCM1, // net ID: CLKOUTDCM1 lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKOUTDCM2, // net ID: CLKOUTDCM2 lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKOUTDCM3, // net ID: CLKOUTDCM3 lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKOUTDCM4, // net ID: CLKOUTDCM4 lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKOUTDCM5, // net ID: CLKOUTDCM5 lsb: 0  msb: 0 OUTPUT
			NetFlow* DO, // net ID: DO lsb: 0  msb: 0 OUTPUT
			NetFlow* DRDY, // net ID: DRDY lsb: 0  msb: 0 OUTPUT
			NetFlow* LOCKED, // net ID: LOCKED lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKFBIN, // net ID: CLKFBIN lsb: 0  msb: 0 INPUT
			NetFlow* CLKIN1, // net ID: CLKIN1 lsb: 0  msb: 0 INPUT
			NetFlow* CLKIN2, // net ID: CLKIN2 lsb: 0  msb: 0 INPUT
			NetFlow* CLKINSEL, // net ID: CLKINSEL lsb: 0  msb: 0 INPUT
			NetFlow* DADDR, // net ID: DADDR lsb: 0  msb: 4 INPUT
			NetFlow* DCLK, // net ID: DCLK lsb: 0  msb: 0 INPUT
			NetFlow* DEN, // net ID: DEN lsb: 0  msb: 0 INPUT
			NetFlow* DI, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DWE, // net ID: DWE lsb: 0  msb: 0 INPUT
			NetFlow* REL, // net ID: REL lsb: 0  msb: 0 INPUT
			NetFlow* RST // net ID: RST lsb: 0  msb: 0 INPUT
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
			this->CLKFBDCM = CLKFBDCM; // net ID: CLKFBDCM lsb: 0  msb: 0 OUTPUT
			this->CLKFBOUT = CLKFBOUT; // net ID: CLKFBOUT lsb: 0  msb: 0 OUTPUT
			this->CLKOUT0 = CLKOUT0; // net ID: CLKOUT0 lsb: 0  msb: 0 OUTPUT
			this->CLKOUT1 = CLKOUT1; // net ID: CLKOUT1 lsb: 0  msb: 0 OUTPUT
			this->CLKOUT2 = CLKOUT2; // net ID: CLKOUT2 lsb: 0  msb: 0 OUTPUT
			this->CLKOUT3 = CLKOUT3; // net ID: CLKOUT3 lsb: 0  msb: 0 OUTPUT
			this->CLKOUT4 = CLKOUT4; // net ID: CLKOUT4 lsb: 0  msb: 0 OUTPUT
			this->CLKOUT5 = CLKOUT5; // net ID: CLKOUT5 lsb: 0  msb: 0 OUTPUT
			this->CLKOUTDCM0 = CLKOUTDCM0; // net ID: CLKOUTDCM0 lsb: 0  msb: 0 OUTPUT
			this->CLKOUTDCM1 = CLKOUTDCM1; // net ID: CLKOUTDCM1 lsb: 0  msb: 0 OUTPUT
			this->CLKOUTDCM2 = CLKOUTDCM2; // net ID: CLKOUTDCM2 lsb: 0  msb: 0 OUTPUT
			this->CLKOUTDCM3 = CLKOUTDCM3; // net ID: CLKOUTDCM3 lsb: 0  msb: 0 OUTPUT
			this->CLKOUTDCM4 = CLKOUTDCM4; // net ID: CLKOUTDCM4 lsb: 0  msb: 0 OUTPUT
			this->CLKOUTDCM5 = CLKOUTDCM5; // net ID: CLKOUTDCM5 lsb: 0  msb: 0 OUTPUT
			this->DO = DO; // net ID: DO lsb: 0  msb: 0 OUTPUT
			this->DRDY = DRDY; // net ID: DRDY lsb: 0  msb: 0 OUTPUT
			this->LOCKED = LOCKED; // net ID: LOCKED lsb: 0  msb: 0 OUTPUT
			this->CLKFBIN = CLKFBIN; // net ID: CLKFBIN lsb: 0  msb: 0 INPUT
			this->CLKIN1 = CLKIN1; // net ID: CLKIN1 lsb: 0  msb: 0 INPUT
			this->CLKIN2 = CLKIN2; // net ID: CLKIN2 lsb: 0  msb: 0 INPUT
			this->CLKINSEL = CLKINSEL; // net ID: CLKINSEL lsb: 0  msb: 0 INPUT
			this->DADDR = DADDR; // net ID: DADDR lsb: 0  msb: 4 INPUT
			this->DCLK = DCLK; // net ID: DCLK lsb: 0  msb: 0 INPUT
			this->DEN = DEN; // net ID: DEN lsb: 0  msb: 0 INPUT
			this->DI = DI; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DWE = DWE; // net ID: DWE lsb: 0  msb: 0 INPUT
			this->REL = REL; // net ID: REL lsb: 0  msb: 0 INPUT
			this->RST = RST; // net ID: RST lsb: 0  msb: 0 INPUT
			
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
