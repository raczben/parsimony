/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_PHASER_IN_PHY{

		//Verilog Parameters:
		parameter_string_t LOC;
		parameter_enum_t BURST_MODE;
		parameter_int_t CLKOUT_DIV;
		parameter_int_t DQS_AUTO_RECAL;
		parameter_enum_t DQS_BIAS_MODE;
		parameter_int_t DQS_FIND_PATTERN;
		parameter_int_t FINE_DELAY;
		parameter_string_t FREQ_REF_DIV;
		parameter_int_t MEMREFCLK_PERIOD;
		parameter_string_t OUTPUT_CLK_SRC;
		parameter_int_t PHASEREFCLK_PERIOD;
		parameter_int_t REFCLK_PERIOD;
		parameter_int_t SEL_CLK_OFFSET;
		parameter_enum_t SYNC_IN_DIV_RST;
		parameter_enum_t WR_CYCLES;
		//Verilog Ports in definition order:
		NetFlow* COUNTERREADVAL; // OUTPUT
		NetFlow* DQSFOUND; // OUTPUT
		NetFlow* DQSOUTOFRANGE; // OUTPUT
		NetFlow* FINEOVERFLOW; // OUTPUT
		NetFlow* ICLK; // OUTPUT
		NetFlow* ICLKDIV; // OUTPUT
		NetFlow* ISERDESRST; // OUTPUT
		NetFlow* PHASELOCKED; // OUTPUT
		NetFlow* RCLK; // OUTPUT
		NetFlow* WRENABLE; // OUTPUT
		NetFlow* BURSTPENDINGPHY; // INPUT
		NetFlow* COUNTERLOADEN; // INPUT
		NetFlow* COUNTERLOADVAL; // INPUT
		NetFlow* COUNTERREADEN; // INPUT
		NetFlow* ENCALIBPHY; // INPUT
		NetFlow* FINEENABLE; // INPUT
		NetFlow* FINEINC; // INPUT
		NetFlow* FREQREFCLK; // INPUT
		NetFlow* MEMREFCLK; // INPUT
		NetFlow* PHASEREFCLK; // INPUT
		NetFlow* RANKSELPHY; // INPUT
		NetFlow* RST; // INPUT
		NetFlow* RSTDQSFIND; // INPUT
		NetFlow* SYNCIN; // INPUT
		NetFlow* SYSCLK; // INPUT
		
	
		X_PHASER_IN_PHY(
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_enum_t BURST_MODE, // Default: "FALSE"
			parameter_int_t CLKOUT_DIV, // Default: 4
			parameter_int_t DQS_AUTO_RECAL, // Default: 1'b1
			parameter_enum_t DQS_BIAS_MODE, // Default: "FALSE"
			parameter_int_t DQS_FIND_PATTERN, // Default: 3'b001
			parameter_int_t FINE_DELAY, // Default: 0
			parameter_string_t FREQ_REF_DIV, // Default: "NONE"
			parameter_int_t MEMREFCLK_PERIOD, // Default: 0.000
			parameter_string_t OUTPUT_CLK_SRC, // Default: "PHASE_REF"
			parameter_int_t PHASEREFCLK_PERIOD, // Default: 0.000
			parameter_int_t REFCLK_PERIOD, // Default: 0.000
			parameter_int_t SEL_CLK_OFFSET, // Default: 5
			parameter_enum_t SYNC_IN_DIV_RST, // Default: "FALSE"
			parameter_enum_t WR_CYCLES, // Default: "FALSE"
			//Verilog Ports in definition order:
			NetFlow* COUNTERREADVAL, // OUTPUT
			NetFlow* DQSFOUND, // OUTPUT
			NetFlow* DQSOUTOFRANGE, // OUTPUT
			NetFlow* FINEOVERFLOW, // OUTPUT
			NetFlow* ICLK, // OUTPUT
			NetFlow* ICLKDIV, // OUTPUT
			NetFlow* ISERDESRST, // OUTPUT
			NetFlow* PHASELOCKED, // OUTPUT
			NetFlow* RCLK, // OUTPUT
			NetFlow* WRENABLE, // OUTPUT
			NetFlow* BURSTPENDINGPHY, // INPUT
			NetFlow* COUNTERLOADEN, // INPUT
			NetFlow* COUNTERLOADVAL, // INPUT
			NetFlow* COUNTERREADEN, // INPUT
			NetFlow* ENCALIBPHY, // INPUT
			NetFlow* FINEENABLE, // INPUT
			NetFlow* FINEINC, // INPUT
			NetFlow* FREQREFCLK, // INPUT
			NetFlow* MEMREFCLK, // INPUT
			NetFlow* PHASEREFCLK, // INPUT
			NetFlow* RANKSELPHY, // INPUT
			NetFlow* RST, // INPUT
			NetFlow* RSTDQSFIND, // INPUT
			NetFlow* SYNCIN, // INPUT
			NetFlow* SYSCLK // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			this->BURST_MODE = BURST_MODE; // Default: "FALSE"
			this->CLKOUT_DIV = CLKOUT_DIV; // Default: 4
			this->DQS_AUTO_RECAL = DQS_AUTO_RECAL; // Default: 1'b1
			this->DQS_BIAS_MODE = DQS_BIAS_MODE; // Default: "FALSE"
			this->DQS_FIND_PATTERN = DQS_FIND_PATTERN; // Default: 3'b001
			this->FINE_DELAY = FINE_DELAY; // Default: 0
			this->FREQ_REF_DIV = FREQ_REF_DIV; // Default: "NONE"
			this->MEMREFCLK_PERIOD = MEMREFCLK_PERIOD; // Default: 0.000
			this->OUTPUT_CLK_SRC = OUTPUT_CLK_SRC; // Default: "PHASE_REF"
			this->PHASEREFCLK_PERIOD = PHASEREFCLK_PERIOD; // Default: 0.000
			this->REFCLK_PERIOD = REFCLK_PERIOD; // Default: 0.000
			this->SEL_CLK_OFFSET = SEL_CLK_OFFSET; // Default: 5
			this->SYNC_IN_DIV_RST = SYNC_IN_DIV_RST; // Default: "FALSE"
			this->WR_CYCLES = WR_CYCLES; // Default: "FALSE"
			//Verilog Ports in definition order:
			this->COUNTERREADVAL = COUNTERREADVAL; // OUTPUT
			this->DQSFOUND = DQSFOUND; // OUTPUT
			this->DQSOUTOFRANGE = DQSOUTOFRANGE; // OUTPUT
			this->FINEOVERFLOW = FINEOVERFLOW; // OUTPUT
			this->ICLK = ICLK; // OUTPUT
			this->ICLKDIV = ICLKDIV; // OUTPUT
			this->ISERDESRST = ISERDESRST; // OUTPUT
			this->PHASELOCKED = PHASELOCKED; // OUTPUT
			this->RCLK = RCLK; // OUTPUT
			this->WRENABLE = WRENABLE; // OUTPUT
			this->BURSTPENDINGPHY = BURSTPENDINGPHY; // INPUT
			this->COUNTERLOADEN = COUNTERLOADEN; // INPUT
			this->COUNTERLOADVAL = COUNTERLOADVAL; // INPUT
			this->COUNTERREADEN = COUNTERREADEN; // INPUT
			this->ENCALIBPHY = ENCALIBPHY; // INPUT
			this->FINEENABLE = FINEENABLE; // INPUT
			this->FINEINC = FINEINC; // INPUT
			this->FREQREFCLK = FREQREFCLK; // INPUT
			this->MEMREFCLK = MEMREFCLK; // INPUT
			this->PHASEREFCLK = PHASEREFCLK; // INPUT
			this->RANKSELPHY = RANKSELPHY; // INPUT
			this->RST = RST; // INPUT
			this->RSTDQSFIND = RSTDQSFIND; // INPUT
			this->SYNCIN = SYNCIN; // INPUT
			this->SYSCLK = SYSCLK; // INPUT
		
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
