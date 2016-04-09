/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_PHY_CONTROL{

		//Verilog Parameters:
		parameter_string_t LOC;
		parameter_int_t AO_TOGGLE;
		parameter_int_t AO_WRLVL_EN;
		parameter_enum_t BURST_MODE;
		parameter_int_t CLK_RATIO;
		parameter_int_t CMD_OFFSET;
		parameter_int_t CO_DURATION;
		parameter_enum_t DATA_CTL_A_N;
		parameter_enum_t DATA_CTL_B_N;
		parameter_enum_t DATA_CTL_C_N;
		parameter_enum_t DATA_CTL_D_N;
		parameter_enum_t DISABLE_SEQ_MATCH;
		parameter_int_t DI_DURATION;
		parameter_int_t DO_DURATION;
		parameter_int_t EVENTS_DELAY;
		parameter_int_t FOUR_WINDOW_CLOCKS;
		parameter_enum_t MULTI_REGION;
		parameter_enum_t PHY_COUNT_ENABLE;
		parameter_int_t RD_CMD_OFFSET_0;
		parameter_int_t RD_CMD_OFFSET_1;
		parameter_int_t RD_CMD_OFFSET_2;
		parameter_int_t RD_CMD_OFFSET_3;
		parameter_int_t RD_DURATION_0;
		parameter_int_t RD_DURATION_1;
		parameter_int_t RD_DURATION_2;
		parameter_int_t RD_DURATION_3;
		parameter_enum_t SYNC_MODE;
		parameter_int_t WR_CMD_OFFSET_0;
		parameter_int_t WR_CMD_OFFSET_1;
		parameter_int_t WR_CMD_OFFSET_2;
		parameter_int_t WR_CMD_OFFSET_3;
		parameter_int_t WR_DURATION_0;
		parameter_int_t WR_DURATION_1;
		parameter_int_t WR_DURATION_2;
		parameter_int_t WR_DURATION_3;
		//Verilog Ports in definition order:
		NetFlow* AUXOUTPUT; // OUTPUT
		NetFlow* INBURSTPENDING; // OUTPUT
		NetFlow* INRANKA; // OUTPUT
		NetFlow* INRANKB; // OUTPUT
		NetFlow* INRANKC; // OUTPUT
		NetFlow* INRANKD; // OUTPUT
		NetFlow* OUTBURSTPENDING; // OUTPUT
		NetFlow* PCENABLECALIB; // OUTPUT
		NetFlow* PHYCTLALMOSTFULL; // OUTPUT
		NetFlow* PHYCTLEMPTY; // OUTPUT
		NetFlow* PHYCTLFULL; // OUTPUT
		NetFlow* PHYCTLREADY; // OUTPUT
		NetFlow* MEMREFCLK; // INPUT
		NetFlow* PHYCLK; // INPUT
		NetFlow* PHYCTLMSTREMPTY; // INPUT
		NetFlow* PHYCTLWD; // INPUT
		NetFlow* PHYCTLWRENABLE; // INPUT
		NetFlow* PLLLOCK; // INPUT
		NetFlow* READCALIBENABLE; // INPUT
		NetFlow* REFDLLLOCK; // INPUT
		NetFlow* RESET; // INPUT
		NetFlow* SYNCIN; // INPUT
		NetFlow* WRITECALIBENABLE; // INPUT
		
	
		X_PHY_CONTROL(
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_int_t AO_TOGGLE, // Default: 0
			parameter_int_t AO_WRLVL_EN, // Default: 4'b0000
			parameter_enum_t BURST_MODE, // Default: "FALSE"
			parameter_int_t CLK_RATIO, // Default: 1
			parameter_int_t CMD_OFFSET, // Default: 0
			parameter_int_t CO_DURATION, // Default: 0
			parameter_enum_t DATA_CTL_A_N, // Default: "FALSE"
			parameter_enum_t DATA_CTL_B_N, // Default: "FALSE"
			parameter_enum_t DATA_CTL_C_N, // Default: "FALSE"
			parameter_enum_t DATA_CTL_D_N, // Default: "FALSE"
			parameter_enum_t DISABLE_SEQ_MATCH, // Default: "TRUE"
			parameter_int_t DI_DURATION, // Default: 0
			parameter_int_t DO_DURATION, // Default: 0
			parameter_int_t EVENTS_DELAY, // Default: 63
			parameter_int_t FOUR_WINDOW_CLOCKS, // Default: 63
			parameter_enum_t MULTI_REGION, // Default: "FALSE"
			parameter_enum_t PHY_COUNT_ENABLE, // Default: "FALSE"
			parameter_int_t RD_CMD_OFFSET_0, // Default: 0
			parameter_int_t RD_CMD_OFFSET_1, // Default: 00
			parameter_int_t RD_CMD_OFFSET_2, // Default: 0
			parameter_int_t RD_CMD_OFFSET_3, // Default: 0
			parameter_int_t RD_DURATION_0, // Default: 0
			parameter_int_t RD_DURATION_1, // Default: 0
			parameter_int_t RD_DURATION_2, // Default: 0
			parameter_int_t RD_DURATION_3, // Default: 0
			parameter_enum_t SYNC_MODE, // Default: "FALSE"
			parameter_int_t WR_CMD_OFFSET_0, // Default: 0
			parameter_int_t WR_CMD_OFFSET_1, // Default: 0
			parameter_int_t WR_CMD_OFFSET_2, // Default: 0
			parameter_int_t WR_CMD_OFFSET_3, // Default: 0
			parameter_int_t WR_DURATION_0, // Default: 0
			parameter_int_t WR_DURATION_1, // Default: 0
			parameter_int_t WR_DURATION_2, // Default: 0
			parameter_int_t WR_DURATION_3, // Default: 0
			//Verilog Ports in definition order:
			NetFlow* AUXOUTPUT, // OUTPUT
			NetFlow* INBURSTPENDING, // OUTPUT
			NetFlow* INRANKA, // OUTPUT
			NetFlow* INRANKB, // OUTPUT
			NetFlow* INRANKC, // OUTPUT
			NetFlow* INRANKD, // OUTPUT
			NetFlow* OUTBURSTPENDING, // OUTPUT
			NetFlow* PCENABLECALIB, // OUTPUT
			NetFlow* PHYCTLALMOSTFULL, // OUTPUT
			NetFlow* PHYCTLEMPTY, // OUTPUT
			NetFlow* PHYCTLFULL, // OUTPUT
			NetFlow* PHYCTLREADY, // OUTPUT
			NetFlow* MEMREFCLK, // INPUT
			NetFlow* PHYCLK, // INPUT
			NetFlow* PHYCTLMSTREMPTY, // INPUT
			NetFlow* PHYCTLWD, // INPUT
			NetFlow* PHYCTLWRENABLE, // INPUT
			NetFlow* PLLLOCK, // INPUT
			NetFlow* READCALIBENABLE, // INPUT
			NetFlow* REFDLLLOCK, // INPUT
			NetFlow* RESET, // INPUT
			NetFlow* SYNCIN, // INPUT
			NetFlow* WRITECALIBENABLE // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			this->AO_TOGGLE = AO_TOGGLE; // Default: 0
			this->AO_WRLVL_EN = AO_WRLVL_EN; // Default: 4'b0000
			this->BURST_MODE = BURST_MODE; // Default: "FALSE"
			this->CLK_RATIO = CLK_RATIO; // Default: 1
			this->CMD_OFFSET = CMD_OFFSET; // Default: 0
			this->CO_DURATION = CO_DURATION; // Default: 0
			this->DATA_CTL_A_N = DATA_CTL_A_N; // Default: "FALSE"
			this->DATA_CTL_B_N = DATA_CTL_B_N; // Default: "FALSE"
			this->DATA_CTL_C_N = DATA_CTL_C_N; // Default: "FALSE"
			this->DATA_CTL_D_N = DATA_CTL_D_N; // Default: "FALSE"
			this->DISABLE_SEQ_MATCH = DISABLE_SEQ_MATCH; // Default: "TRUE"
			this->DI_DURATION = DI_DURATION; // Default: 0
			this->DO_DURATION = DO_DURATION; // Default: 0
			this->EVENTS_DELAY = EVENTS_DELAY; // Default: 63
			this->FOUR_WINDOW_CLOCKS = FOUR_WINDOW_CLOCKS; // Default: 63
			this->MULTI_REGION = MULTI_REGION; // Default: "FALSE"
			this->PHY_COUNT_ENABLE = PHY_COUNT_ENABLE; // Default: "FALSE"
			this->RD_CMD_OFFSET_0 = RD_CMD_OFFSET_0; // Default: 0
			this->RD_CMD_OFFSET_1 = RD_CMD_OFFSET_1; // Default: 00
			this->RD_CMD_OFFSET_2 = RD_CMD_OFFSET_2; // Default: 0
			this->RD_CMD_OFFSET_3 = RD_CMD_OFFSET_3; // Default: 0
			this->RD_DURATION_0 = RD_DURATION_0; // Default: 0
			this->RD_DURATION_1 = RD_DURATION_1; // Default: 0
			this->RD_DURATION_2 = RD_DURATION_2; // Default: 0
			this->RD_DURATION_3 = RD_DURATION_3; // Default: 0
			this->SYNC_MODE = SYNC_MODE; // Default: "FALSE"
			this->WR_CMD_OFFSET_0 = WR_CMD_OFFSET_0; // Default: 0
			this->WR_CMD_OFFSET_1 = WR_CMD_OFFSET_1; // Default: 0
			this->WR_CMD_OFFSET_2 = WR_CMD_OFFSET_2; // Default: 0
			this->WR_CMD_OFFSET_3 = WR_CMD_OFFSET_3; // Default: 0
			this->WR_DURATION_0 = WR_DURATION_0; // Default: 0
			this->WR_DURATION_1 = WR_DURATION_1; // Default: 0
			this->WR_DURATION_2 = WR_DURATION_2; // Default: 0
			this->WR_DURATION_3 = WR_DURATION_3; // Default: 0
			//Verilog Ports in definition order:
			this->AUXOUTPUT = AUXOUTPUT; // OUTPUT
			this->INBURSTPENDING = INBURSTPENDING; // OUTPUT
			this->INRANKA = INRANKA; // OUTPUT
			this->INRANKB = INRANKB; // OUTPUT
			this->INRANKC = INRANKC; // OUTPUT
			this->INRANKD = INRANKD; // OUTPUT
			this->OUTBURSTPENDING = OUTBURSTPENDING; // OUTPUT
			this->PCENABLECALIB = PCENABLECALIB; // OUTPUT
			this->PHYCTLALMOSTFULL = PHYCTLALMOSTFULL; // OUTPUT
			this->PHYCTLEMPTY = PHYCTLEMPTY; // OUTPUT
			this->PHYCTLFULL = PHYCTLFULL; // OUTPUT
			this->PHYCTLREADY = PHYCTLREADY; // OUTPUT
			this->MEMREFCLK = MEMREFCLK; // INPUT
			this->PHYCLK = PHYCLK; // INPUT
			this->PHYCTLMSTREMPTY = PHYCTLMSTREMPTY; // INPUT
			this->PHYCTLWD = PHYCTLWD; // INPUT
			this->PHYCTLWRENABLE = PHYCTLWRENABLE; // INPUT
			this->PLLLOCK = PLLLOCK; // INPUT
			this->READCALIBENABLE = READCALIBENABLE; // INPUT
			this->REFDLLLOCK = REFDLLLOCK; // INPUT
			this->RESET = RESET; // INPUT
			this->SYNCIN = SYNCIN; // INPUT
			this->WRITECALIBENABLE = WRITECALIBENABLE; // INPUT
		
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
