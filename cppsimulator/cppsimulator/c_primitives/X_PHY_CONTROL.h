/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_PHY_CONTROL: public Primitive{

		//Verilog Parameters:
		parameter_string_t LOC;
		parameter_string_t AO_TOGGLE;
		parameter_string_t AO_WRLVL_EN;
		parameter_enum_t BURST_MODE;
		parameter_string_t CLK_RATIO;
		parameter_string_t CMD_OFFSET;
		parameter_string_t CO_DURATION;
		parameter_enum_t DATA_CTL_A_N;
		parameter_enum_t DATA_CTL_B_N;
		parameter_enum_t DATA_CTL_C_N;
		parameter_enum_t DATA_CTL_D_N;
		parameter_enum_t DISABLE_SEQ_MATCH;
		parameter_string_t DI_DURATION;
		parameter_string_t DO_DURATION;
		parameter_string_t EVENTS_DELAY;
		parameter_string_t FOUR_WINDOW_CLOCKS;
		parameter_enum_t MULTI_REGION;
		parameter_enum_t PHY_COUNT_ENABLE;
		parameter_string_t RD_CMD_OFFSET_0;
		parameter_string_t RD_CMD_OFFSET_1;
		parameter_string_t RD_CMD_OFFSET_2;
		parameter_string_t RD_CMD_OFFSET_3;
		parameter_string_t RD_DURATION_0;
		parameter_string_t RD_DURATION_1;
		parameter_string_t RD_DURATION_2;
		parameter_string_t RD_DURATION_3;
		parameter_enum_t SYNC_MODE;
		parameter_string_t WR_CMD_OFFSET_0;
		parameter_string_t WR_CMD_OFFSET_1;
		parameter_string_t WR_CMD_OFFSET_2;
		parameter_string_t WR_CMD_OFFSET_3;
		parameter_string_t WR_DURATION_0;
		parameter_string_t WR_DURATION_1;
		parameter_string_t WR_DURATION_2;
		parameter_string_t WR_DURATION_3;
		//Verilog Ports in definition order:
		NetFlow* AUXOUTPUT; // net ID: AUXOUTPUT lsb: 0  msb: 0 OUTPUT
		NetFlow* INBURSTPENDING; // net ID: INBURSTPENDING lsb: 0  msb: 0 OUTPUT
		NetFlow* INRANKA; // net ID: INRANKA lsb: 0  msb: 0 OUTPUT
		NetFlow* INRANKB; // net ID: INRANKB lsb: 0  msb: 0 OUTPUT
		NetFlow* INRANKC; // net ID: INRANKC lsb: 0  msb: 0 OUTPUT
		NetFlow* INRANKD; // net ID: INRANKD lsb: 0  msb: 0 OUTPUT
		NetFlow* OUTBURSTPENDING; // net ID: OUTBURSTPENDING lsb: 0  msb: 0 OUTPUT
		NetFlow* PCENABLECALIB; // net ID: PCENABLECALIB lsb: 0  msb: 0 OUTPUT
		NetFlow* PHYCTLALMOSTFULL; // net ID: PHYCTLALMOSTFULL lsb: 0  msb: 0 OUTPUT
		NetFlow* PHYCTLEMPTY; // net ID: PHYCTLEMPTY lsb: 0  msb: 0 OUTPUT
		NetFlow* PHYCTLFULL; // net ID: PHYCTLFULL lsb: 0  msb: 0 OUTPUT
		NetFlow* PHYCTLREADY; // net ID: PHYCTLREADY lsb: 0  msb: 0 OUTPUT
		NetFlow* MEMREFCLK; // net ID: MEMREFCLK lsb: 0  msb: 0 INPUT
		NetFlow* PHYCLK; // net ID: PHYCLK lsb: 0  msb: 0 INPUT
		NetFlow* PHYCTLMSTREMPTY; // net ID: PHYCTLMSTREMPTY lsb: 0  msb: 0 INPUT
		NetFlow* PHYCTLWD; // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
		NetFlow* PHYCTLWRENABLE; // net ID: PHYCTLWRENABLE lsb: 0  msb: 0 INPUT
		NetFlow* PLLLOCK; // net ID: PLLLOCK lsb: 0  msb: 0 INPUT
		NetFlow* READCALIBENABLE; // net ID: READCALIBENABLE lsb: 0  msb: 0 INPUT
		NetFlow* REFDLLLOCK; // net ID: REFDLLLOCK lsb: 0  msb: 0 INPUT
		NetFlow* RESET; // net ID: RESET lsb: 0  msb: 0 INPUT
		NetFlow* SYNCIN; // net ID: SYNCIN lsb: 0  msb: 0 INPUT
		NetFlow* WRITECALIBENABLE; // net ID: WRITECALIBENABLE lsb: 0  msb: 0 INPUT
		
		X_PHY_CONTROL(
			const char * name,
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_string_t AO_TOGGLE, // Default: 0
			parameter_string_t AO_WRLVL_EN, // Default: 4'b0000
			parameter_enum_t BURST_MODE, // Default: "FALSE"
			parameter_string_t CLK_RATIO, // Default: 1
			parameter_string_t CMD_OFFSET, // Default: 0
			parameter_string_t CO_DURATION, // Default: 0
			parameter_enum_t DATA_CTL_A_N, // Default: "FALSE"
			parameter_enum_t DATA_CTL_B_N, // Default: "FALSE"
			parameter_enum_t DATA_CTL_C_N, // Default: "FALSE"
			parameter_enum_t DATA_CTL_D_N, // Default: "FALSE"
			parameter_enum_t DISABLE_SEQ_MATCH, // Default: "TRUE"
			parameter_string_t DI_DURATION, // Default: 0
			parameter_string_t DO_DURATION, // Default: 0
			parameter_string_t EVENTS_DELAY, // Default: 63
			parameter_string_t FOUR_WINDOW_CLOCKS, // Default: 63
			parameter_enum_t MULTI_REGION, // Default: "FALSE"
			parameter_enum_t PHY_COUNT_ENABLE, // Default: "FALSE"
			parameter_string_t RD_CMD_OFFSET_0, // Default: 0
			parameter_string_t RD_CMD_OFFSET_1, // Default: 00
			parameter_string_t RD_CMD_OFFSET_2, // Default: 0
			parameter_string_t RD_CMD_OFFSET_3, // Default: 0
			parameter_string_t RD_DURATION_0, // Default: 0
			parameter_string_t RD_DURATION_1, // Default: 0
			parameter_string_t RD_DURATION_2, // Default: 0
			parameter_string_t RD_DURATION_3, // Default: 0
			parameter_enum_t SYNC_MODE, // Default: "FALSE"
			parameter_string_t WR_CMD_OFFSET_0, // Default: 0
			parameter_string_t WR_CMD_OFFSET_1, // Default: 0
			parameter_string_t WR_CMD_OFFSET_2, // Default: 0
			parameter_string_t WR_CMD_OFFSET_3, // Default: 0
			parameter_string_t WR_DURATION_0, // Default: 0
			parameter_string_t WR_DURATION_1, // Default: 0
			parameter_string_t WR_DURATION_2, // Default: 0
			parameter_string_t WR_DURATION_3, // Default: 0
			//Verilog Ports in definition order:
			NetFlow* AUXOUTPUT, // net ID: AUXOUTPUT lsb: 0  msb: 0 OUTPUT
			NetFlow* INBURSTPENDING, // net ID: INBURSTPENDING lsb: 0  msb: 0 OUTPUT
			NetFlow* INRANKA, // net ID: INRANKA lsb: 0  msb: 0 OUTPUT
			NetFlow* INRANKB, // net ID: INRANKB lsb: 0  msb: 0 OUTPUT
			NetFlow* INRANKC, // net ID: INRANKC lsb: 0  msb: 0 OUTPUT
			NetFlow* INRANKD, // net ID: INRANKD lsb: 0  msb: 0 OUTPUT
			NetFlow* OUTBURSTPENDING, // net ID: OUTBURSTPENDING lsb: 0  msb: 0 OUTPUT
			NetFlow* PCENABLECALIB, // net ID: PCENABLECALIB lsb: 0  msb: 0 OUTPUT
			NetFlow* PHYCTLALMOSTFULL, // net ID: PHYCTLALMOSTFULL lsb: 0  msb: 0 OUTPUT
			NetFlow* PHYCTLEMPTY, // net ID: PHYCTLEMPTY lsb: 0  msb: 0 OUTPUT
			NetFlow* PHYCTLFULL, // net ID: PHYCTLFULL lsb: 0  msb: 0 OUTPUT
			NetFlow* PHYCTLREADY, // net ID: PHYCTLREADY lsb: 0  msb: 0 OUTPUT
			NetFlow* MEMREFCLK, // net ID: MEMREFCLK lsb: 0  msb: 0 INPUT
			NetFlow* PHYCLK, // net ID: PHYCLK lsb: 0  msb: 0 INPUT
			NetFlow* PHYCTLMSTREMPTY, // net ID: PHYCTLMSTREMPTY lsb: 0  msb: 0 INPUT
			NetFlow* PHYCTLWD, // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
			NetFlow* PHYCTLWRENABLE, // net ID: PHYCTLWRENABLE lsb: 0  msb: 0 INPUT
			NetFlow* PLLLOCK, // net ID: PLLLOCK lsb: 0  msb: 0 INPUT
			NetFlow* READCALIBENABLE, // net ID: READCALIBENABLE lsb: 0  msb: 0 INPUT
			NetFlow* REFDLLLOCK, // net ID: REFDLLLOCK lsb: 0  msb: 0 INPUT
			NetFlow* RESET, // net ID: RESET lsb: 0  msb: 0 INPUT
			NetFlow* SYNCIN, // net ID: SYNCIN lsb: 0  msb: 0 INPUT
			NetFlow* WRITECALIBENABLE // net ID: WRITECALIBENABLE lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
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
			this->AUXOUTPUT = AUXOUTPUT; // net ID: AUXOUTPUT lsb: 0  msb: 0 OUTPUT
			this->INBURSTPENDING = INBURSTPENDING; // net ID: INBURSTPENDING lsb: 0  msb: 0 OUTPUT
			this->INRANKA = INRANKA; // net ID: INRANKA lsb: 0  msb: 0 OUTPUT
			this->INRANKB = INRANKB; // net ID: INRANKB lsb: 0  msb: 0 OUTPUT
			this->INRANKC = INRANKC; // net ID: INRANKC lsb: 0  msb: 0 OUTPUT
			this->INRANKD = INRANKD; // net ID: INRANKD lsb: 0  msb: 0 OUTPUT
			this->OUTBURSTPENDING = OUTBURSTPENDING; // net ID: OUTBURSTPENDING lsb: 0  msb: 0 OUTPUT
			this->PCENABLECALIB = PCENABLECALIB; // net ID: PCENABLECALIB lsb: 0  msb: 0 OUTPUT
			this->PHYCTLALMOSTFULL = PHYCTLALMOSTFULL; // net ID: PHYCTLALMOSTFULL lsb: 0  msb: 0 OUTPUT
			this->PHYCTLEMPTY = PHYCTLEMPTY; // net ID: PHYCTLEMPTY lsb: 0  msb: 0 OUTPUT
			this->PHYCTLFULL = PHYCTLFULL; // net ID: PHYCTLFULL lsb: 0  msb: 0 OUTPUT
			this->PHYCTLREADY = PHYCTLREADY; // net ID: PHYCTLREADY lsb: 0  msb: 0 OUTPUT
			this->MEMREFCLK = MEMREFCLK; // net ID: MEMREFCLK lsb: 0  msb: 0 INPUT
			this->PHYCLK = PHYCLK; // net ID: PHYCLK lsb: 0  msb: 0 INPUT
			this->PHYCTLMSTREMPTY = PHYCTLMSTREMPTY; // net ID: PHYCTLMSTREMPTY lsb: 0  msb: 0 INPUT
			this->PHYCTLWD = PHYCTLWD; // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
			this->PHYCTLWRENABLE = PHYCTLWRENABLE; // net ID: PHYCTLWRENABLE lsb: 0  msb: 0 INPUT
			this->PLLLOCK = PLLLOCK; // net ID: PLLLOCK lsb: 0  msb: 0 INPUT
			this->READCALIBENABLE = READCALIBENABLE; // net ID: READCALIBENABLE lsb: 0  msb: 0 INPUT
			this->REFDLLLOCK = REFDLLLOCK; // net ID: REFDLLLOCK lsb: 0  msb: 0 INPUT
			this->RESET = RESET; // net ID: RESET lsb: 0  msb: 0 INPUT
			this->SYNCIN = SYNCIN; // net ID: SYNCIN lsb: 0  msb: 0 INPUT
			this->WRITECALIBENABLE = WRITECALIBENABLE; // net ID: WRITECALIBENABLE lsb: 0  msb: 0 INPUT
			
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
