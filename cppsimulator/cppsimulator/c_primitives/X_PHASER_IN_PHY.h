/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_PHASER_IN_PHY_H
#define X_PHASER_IN_PHY_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_PHASER_IN_PHY: public Primitive{

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
		NetFlow* COUNTERREADVAL_A5_B; // net ID: COUNTERREADVAL lsb: 0  msb: 5 OUTPUT
		NetFlow* COUNTERREADVAL_A4_B; // net ID: COUNTERREADVAL lsb: 0  msb: 5 OUTPUT
		NetFlow* COUNTERREADVAL_A3_B; // net ID: COUNTERREADVAL lsb: 0  msb: 5 OUTPUT
		NetFlow* COUNTERREADVAL_A2_B; // net ID: COUNTERREADVAL lsb: 0  msb: 5 OUTPUT
		NetFlow* COUNTERREADVAL_A1_B; // net ID: COUNTERREADVAL lsb: 0  msb: 5 OUTPUT
		NetFlow* COUNTERREADVAL_A0_B; // net ID: COUNTERREADVAL lsb: 0  msb: 5 OUTPUT
		NetFlow* DQSFOUND_A0_B; // net ID: DQSFOUND lsb: 0  msb: 0 OUTPUT
		NetFlow* DQSOUTOFRANGE_A0_B; // net ID: DQSOUTOFRANGE lsb: 0  msb: 0 OUTPUT
		NetFlow* FINEOVERFLOW_A0_B; // net ID: FINEOVERFLOW lsb: 0  msb: 0 OUTPUT
		NetFlow* ICLK_A0_B; // net ID: ICLK lsb: 0  msb: 0 OUTPUT
		NetFlow* ICLKDIV_A0_B; // net ID: ICLKDIV lsb: 0  msb: 0 OUTPUT
		NetFlow* ISERDESRST_A0_B; // net ID: ISERDESRST lsb: 0  msb: 0 OUTPUT
		NetFlow* PHASELOCKED_A0_B; // net ID: PHASELOCKED lsb: 0  msb: 0 OUTPUT
		NetFlow* RCLK_A0_B; // net ID: RCLK lsb: 0  msb: 0 OUTPUT
		NetFlow* WRENABLE_A0_B; // net ID: WRENABLE lsb: 0  msb: 0 OUTPUT
		NetFlow* BURSTPENDINGPHY_A0_B; // net ID: BURSTPENDINGPHY lsb: 0  msb: 0 INPUT
		NetFlow* COUNTERLOADEN_A0_B; // net ID: COUNTERLOADEN lsb: 0  msb: 0 INPUT
		NetFlow* COUNTERLOADVAL_A5_B; // net ID: COUNTERLOADVAL lsb: 0  msb: 5 INPUT
		NetFlow* COUNTERLOADVAL_A4_B; // net ID: COUNTERLOADVAL lsb: 0  msb: 5 INPUT
		NetFlow* COUNTERLOADVAL_A3_B; // net ID: COUNTERLOADVAL lsb: 0  msb: 5 INPUT
		NetFlow* COUNTERLOADVAL_A2_B; // net ID: COUNTERLOADVAL lsb: 0  msb: 5 INPUT
		NetFlow* COUNTERLOADVAL_A1_B; // net ID: COUNTERLOADVAL lsb: 0  msb: 5 INPUT
		NetFlow* COUNTERLOADVAL_A0_B; // net ID: COUNTERLOADVAL lsb: 0  msb: 5 INPUT
		NetFlow* COUNTERREADEN_A0_B; // net ID: COUNTERREADEN lsb: 0  msb: 0 INPUT
		NetFlow* ENCALIBPHY_A1_B; // net ID: ENCALIBPHY lsb: 0  msb: 1 INPUT
		NetFlow* ENCALIBPHY_A0_B; // net ID: ENCALIBPHY lsb: 0  msb: 1 INPUT
		NetFlow* FINEENABLE_A0_B; // net ID: FINEENABLE lsb: 0  msb: 0 INPUT
		NetFlow* FINEINC_A0_B; // net ID: FINEINC lsb: 0  msb: 0 INPUT
		NetFlow* FREQREFCLK_A0_B; // net ID: FREQREFCLK lsb: 0  msb: 0 INPUT
		NetFlow* MEMREFCLK_A0_B; // net ID: MEMREFCLK lsb: 0  msb: 0 INPUT
		NetFlow* PHASEREFCLK_A0_B; // net ID: PHASEREFCLK lsb: 0  msb: 0 INPUT
		NetFlow* RANKSELPHY_A1_B; // net ID: RANKSELPHY lsb: 0  msb: 1 INPUT
		NetFlow* RANKSELPHY_A0_B; // net ID: RANKSELPHY lsb: 0  msb: 1 INPUT
		NetFlow* RST_A0_B; // net ID: RST lsb: 0  msb: 0 INPUT
		NetFlow* RSTDQSFIND_A0_B; // net ID: RSTDQSFIND lsb: 0  msb: 0 INPUT
		NetFlow* SYNCIN_A0_B; // net ID: SYNCIN lsb: 0  msb: 0 INPUT
		NetFlow* SYSCLK_A0_B; // net ID: SYSCLK lsb: 0  msb: 0 INPUT
		
		public: X_PHASER_IN_PHY(
			const char * name,
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
			NetFlow* COUNTERREADVAL_A5_B, // net ID: COUNTERREADVAL lsb: 0  msb: 5 OUTPUT
			NetFlow* COUNTERREADVAL_A4_B, // net ID: COUNTERREADVAL lsb: 0  msb: 5 OUTPUT
			NetFlow* COUNTERREADVAL_A3_B, // net ID: COUNTERREADVAL lsb: 0  msb: 5 OUTPUT
			NetFlow* COUNTERREADVAL_A2_B, // net ID: COUNTERREADVAL lsb: 0  msb: 5 OUTPUT
			NetFlow* COUNTERREADVAL_A1_B, // net ID: COUNTERREADVAL lsb: 0  msb: 5 OUTPUT
			NetFlow* COUNTERREADVAL_A0_B, // net ID: COUNTERREADVAL lsb: 0  msb: 5 OUTPUT
			NetFlow* DQSFOUND_A0_B, // net ID: DQSFOUND lsb: 0  msb: 0 OUTPUT
			NetFlow* DQSOUTOFRANGE_A0_B, // net ID: DQSOUTOFRANGE lsb: 0  msb: 0 OUTPUT
			NetFlow* FINEOVERFLOW_A0_B, // net ID: FINEOVERFLOW lsb: 0  msb: 0 OUTPUT
			NetFlow* ICLK_A0_B, // net ID: ICLK lsb: 0  msb: 0 OUTPUT
			NetFlow* ICLKDIV_A0_B, // net ID: ICLKDIV lsb: 0  msb: 0 OUTPUT
			NetFlow* ISERDESRST_A0_B, // net ID: ISERDESRST lsb: 0  msb: 0 OUTPUT
			NetFlow* PHASELOCKED_A0_B, // net ID: PHASELOCKED lsb: 0  msb: 0 OUTPUT
			NetFlow* RCLK_A0_B, // net ID: RCLK lsb: 0  msb: 0 OUTPUT
			NetFlow* WRENABLE_A0_B, // net ID: WRENABLE lsb: 0  msb: 0 OUTPUT
			NetFlow* BURSTPENDINGPHY_A0_B, // net ID: BURSTPENDINGPHY lsb: 0  msb: 0 INPUT
			NetFlow* COUNTERLOADEN_A0_B, // net ID: COUNTERLOADEN lsb: 0  msb: 0 INPUT
			NetFlow* COUNTERLOADVAL_A5_B, // net ID: COUNTERLOADVAL lsb: 0  msb: 5 INPUT
			NetFlow* COUNTERLOADVAL_A4_B, // net ID: COUNTERLOADVAL lsb: 0  msb: 5 INPUT
			NetFlow* COUNTERLOADVAL_A3_B, // net ID: COUNTERLOADVAL lsb: 0  msb: 5 INPUT
			NetFlow* COUNTERLOADVAL_A2_B, // net ID: COUNTERLOADVAL lsb: 0  msb: 5 INPUT
			NetFlow* COUNTERLOADVAL_A1_B, // net ID: COUNTERLOADVAL lsb: 0  msb: 5 INPUT
			NetFlow* COUNTERLOADVAL_A0_B, // net ID: COUNTERLOADVAL lsb: 0  msb: 5 INPUT
			NetFlow* COUNTERREADEN_A0_B, // net ID: COUNTERREADEN lsb: 0  msb: 0 INPUT
			NetFlow* ENCALIBPHY_A1_B, // net ID: ENCALIBPHY lsb: 0  msb: 1 INPUT
			NetFlow* ENCALIBPHY_A0_B, // net ID: ENCALIBPHY lsb: 0  msb: 1 INPUT
			NetFlow* FINEENABLE_A0_B, // net ID: FINEENABLE lsb: 0  msb: 0 INPUT
			NetFlow* FINEINC_A0_B, // net ID: FINEINC lsb: 0  msb: 0 INPUT
			NetFlow* FREQREFCLK_A0_B, // net ID: FREQREFCLK lsb: 0  msb: 0 INPUT
			NetFlow* MEMREFCLK_A0_B, // net ID: MEMREFCLK lsb: 0  msb: 0 INPUT
			NetFlow* PHASEREFCLK_A0_B, // net ID: PHASEREFCLK lsb: 0  msb: 0 INPUT
			NetFlow* RANKSELPHY_A1_B, // net ID: RANKSELPHY lsb: 0  msb: 1 INPUT
			NetFlow* RANKSELPHY_A0_B, // net ID: RANKSELPHY lsb: 0  msb: 1 INPUT
			NetFlow* RST_A0_B, // net ID: RST lsb: 0  msb: 0 INPUT
			NetFlow* RSTDQSFIND_A0_B, // net ID: RSTDQSFIND lsb: 0  msb: 0 INPUT
			NetFlow* SYNCIN_A0_B, // net ID: SYNCIN lsb: 0  msb: 0 INPUT
			NetFlow* SYSCLK_A0_B // net ID: SYSCLK lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
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
			this->COUNTERREADVAL_A5_B = COUNTERREADVAL_A5_B; // net ID: COUNTERREADVAL lsb: 0  msb: 5 OUTPUT
			this->COUNTERREADVAL_A4_B = COUNTERREADVAL_A4_B; // net ID: COUNTERREADVAL lsb: 0  msb: 5 OUTPUT
			this->COUNTERREADVAL_A3_B = COUNTERREADVAL_A3_B; // net ID: COUNTERREADVAL lsb: 0  msb: 5 OUTPUT
			this->COUNTERREADVAL_A2_B = COUNTERREADVAL_A2_B; // net ID: COUNTERREADVAL lsb: 0  msb: 5 OUTPUT
			this->COUNTERREADVAL_A1_B = COUNTERREADVAL_A1_B; // net ID: COUNTERREADVAL lsb: 0  msb: 5 OUTPUT
			this->COUNTERREADVAL_A0_B = COUNTERREADVAL_A0_B; // net ID: COUNTERREADVAL lsb: 0  msb: 5 OUTPUT
			this->DQSFOUND_A0_B = DQSFOUND_A0_B; // net ID: DQSFOUND lsb: 0  msb: 0 OUTPUT
			this->DQSOUTOFRANGE_A0_B = DQSOUTOFRANGE_A0_B; // net ID: DQSOUTOFRANGE lsb: 0  msb: 0 OUTPUT
			this->FINEOVERFLOW_A0_B = FINEOVERFLOW_A0_B; // net ID: FINEOVERFLOW lsb: 0  msb: 0 OUTPUT
			this->ICLK_A0_B = ICLK_A0_B; // net ID: ICLK lsb: 0  msb: 0 OUTPUT
			this->ICLKDIV_A0_B = ICLKDIV_A0_B; // net ID: ICLKDIV lsb: 0  msb: 0 OUTPUT
			this->ISERDESRST_A0_B = ISERDESRST_A0_B; // net ID: ISERDESRST lsb: 0  msb: 0 OUTPUT
			this->PHASELOCKED_A0_B = PHASELOCKED_A0_B; // net ID: PHASELOCKED lsb: 0  msb: 0 OUTPUT
			this->RCLK_A0_B = RCLK_A0_B; // net ID: RCLK lsb: 0  msb: 0 OUTPUT
			this->WRENABLE_A0_B = WRENABLE_A0_B; // net ID: WRENABLE lsb: 0  msb: 0 OUTPUT
			this->BURSTPENDINGPHY_A0_B = BURSTPENDINGPHY_A0_B; // net ID: BURSTPENDINGPHY lsb: 0  msb: 0 INPUT
			this->COUNTERLOADEN_A0_B = COUNTERLOADEN_A0_B; // net ID: COUNTERLOADEN lsb: 0  msb: 0 INPUT
			this->COUNTERLOADVAL_A5_B = COUNTERLOADVAL_A5_B; // net ID: COUNTERLOADVAL lsb: 0  msb: 5 INPUT
			this->COUNTERLOADVAL_A4_B = COUNTERLOADVAL_A4_B; // net ID: COUNTERLOADVAL lsb: 0  msb: 5 INPUT
			this->COUNTERLOADVAL_A3_B = COUNTERLOADVAL_A3_B; // net ID: COUNTERLOADVAL lsb: 0  msb: 5 INPUT
			this->COUNTERLOADVAL_A2_B = COUNTERLOADVAL_A2_B; // net ID: COUNTERLOADVAL lsb: 0  msb: 5 INPUT
			this->COUNTERLOADVAL_A1_B = COUNTERLOADVAL_A1_B; // net ID: COUNTERLOADVAL lsb: 0  msb: 5 INPUT
			this->COUNTERLOADVAL_A0_B = COUNTERLOADVAL_A0_B; // net ID: COUNTERLOADVAL lsb: 0  msb: 5 INPUT
			this->COUNTERREADEN_A0_B = COUNTERREADEN_A0_B; // net ID: COUNTERREADEN lsb: 0  msb: 0 INPUT
			this->ENCALIBPHY_A1_B = ENCALIBPHY_A1_B; // net ID: ENCALIBPHY lsb: 0  msb: 1 INPUT
			this->ENCALIBPHY_A0_B = ENCALIBPHY_A0_B; // net ID: ENCALIBPHY lsb: 0  msb: 1 INPUT
			this->FINEENABLE_A0_B = FINEENABLE_A0_B; // net ID: FINEENABLE lsb: 0  msb: 0 INPUT
			this->FINEINC_A0_B = FINEINC_A0_B; // net ID: FINEINC lsb: 0  msb: 0 INPUT
			this->FREQREFCLK_A0_B = FREQREFCLK_A0_B; // net ID: FREQREFCLK lsb: 0  msb: 0 INPUT
			this->MEMREFCLK_A0_B = MEMREFCLK_A0_B; // net ID: MEMREFCLK lsb: 0  msb: 0 INPUT
			this->PHASEREFCLK_A0_B = PHASEREFCLK_A0_B; // net ID: PHASEREFCLK lsb: 0  msb: 0 INPUT
			this->RANKSELPHY_A1_B = RANKSELPHY_A1_B; // net ID: RANKSELPHY lsb: 0  msb: 1 INPUT
			this->RANKSELPHY_A0_B = RANKSELPHY_A0_B; // net ID: RANKSELPHY lsb: 0  msb: 1 INPUT
			this->RST_A0_B = RST_A0_B; // net ID: RST lsb: 0  msb: 0 INPUT
			this->RSTDQSFIND_A0_B = RSTDQSFIND_A0_B; // net ID: RSTDQSFIND lsb: 0  msb: 0 INPUT
			this->SYNCIN_A0_B = SYNCIN_A0_B; // net ID: SYNCIN lsb: 0  msb: 0 INPUT
			this->SYSCLK_A0_B = SYSCLK_A0_B; // net ID: SYSCLK lsb: 0  msb: 0 INPUT
			
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
#endif // X_PHASER_IN_PHY_H
