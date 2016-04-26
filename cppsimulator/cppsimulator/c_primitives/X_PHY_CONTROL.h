/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_PHY_CONTROL_H
#define X_PHY_CONTROL_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_PHY_CONTROL: public Primitive{

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
		NetFlow* AUXOUTPUT_A0_B; // net ID: AUXOUTPUT lsb: 0  msb: 3 OUTPUT
		NetFlow* AUXOUTPUT_A1_B; // net ID: AUXOUTPUT lsb: 0  msb: 3 OUTPUT
		NetFlow* AUXOUTPUT_A2_B; // net ID: AUXOUTPUT lsb: 0  msb: 3 OUTPUT
		NetFlow* AUXOUTPUT_A3_B; // net ID: AUXOUTPUT lsb: 0  msb: 3 OUTPUT
		NetFlow* INBURSTPENDING_A0_B; // net ID: INBURSTPENDING lsb: 0  msb: 3 OUTPUT
		NetFlow* INBURSTPENDING_A1_B; // net ID: INBURSTPENDING lsb: 0  msb: 3 OUTPUT
		NetFlow* INBURSTPENDING_A2_B; // net ID: INBURSTPENDING lsb: 0  msb: 3 OUTPUT
		NetFlow* INBURSTPENDING_A3_B; // net ID: INBURSTPENDING lsb: 0  msb: 3 OUTPUT
		NetFlow* INRANKA_A0_B; // net ID: INRANKA lsb: 0  msb: 1 OUTPUT
		NetFlow* INRANKA_A1_B; // net ID: INRANKA lsb: 0  msb: 1 OUTPUT
		NetFlow* INRANKB_A0_B; // net ID: INRANKB lsb: 0  msb: 1 OUTPUT
		NetFlow* INRANKB_A1_B; // net ID: INRANKB lsb: 0  msb: 1 OUTPUT
		NetFlow* INRANKC_A0_B; // net ID: INRANKC lsb: 0  msb: 1 OUTPUT
		NetFlow* INRANKC_A1_B; // net ID: INRANKC lsb: 0  msb: 1 OUTPUT
		NetFlow* INRANKD_A0_B; // net ID: INRANKD lsb: 0  msb: 1 OUTPUT
		NetFlow* INRANKD_A1_B; // net ID: INRANKD lsb: 0  msb: 1 OUTPUT
		NetFlow* OUTBURSTPENDING_A0_B; // net ID: OUTBURSTPENDING lsb: 0  msb: 3 OUTPUT
		NetFlow* OUTBURSTPENDING_A1_B; // net ID: OUTBURSTPENDING lsb: 0  msb: 3 OUTPUT
		NetFlow* OUTBURSTPENDING_A2_B; // net ID: OUTBURSTPENDING lsb: 0  msb: 3 OUTPUT
		NetFlow* OUTBURSTPENDING_A3_B; // net ID: OUTBURSTPENDING lsb: 0  msb: 3 OUTPUT
		NetFlow* PCENABLECALIB_A0_B; // net ID: PCENABLECALIB lsb: 0  msb: 1 OUTPUT
		NetFlow* PCENABLECALIB_A1_B; // net ID: PCENABLECALIB lsb: 0  msb: 1 OUTPUT
		NetFlow* PHYCTLALMOSTFULL_A0_B; // net ID: PHYCTLALMOSTFULL lsb: 0  msb: 0 OUTPUT
		NetFlow* PHYCTLEMPTY_A0_B; // net ID: PHYCTLEMPTY lsb: 0  msb: 0 OUTPUT
		NetFlow* PHYCTLFULL_A0_B; // net ID: PHYCTLFULL lsb: 0  msb: 0 OUTPUT
		NetFlow* PHYCTLREADY_A0_B; // net ID: PHYCTLREADY lsb: 0  msb: 0 OUTPUT
		NetFlow* MEMREFCLK_A0_B; // net ID: MEMREFCLK lsb: 0  msb: 0 INPUT
		NetFlow* PHYCLK_A0_B; // net ID: PHYCLK lsb: 0  msb: 0 INPUT
		NetFlow* PHYCTLMSTREMPTY_A0_B; // net ID: PHYCTLMSTREMPTY lsb: 0  msb: 0 INPUT
		NetFlow* PHYCTLWD_A0_B; // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
		NetFlow* PHYCTLWD_A1_B; // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
		NetFlow* PHYCTLWD_A2_B; // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
		NetFlow* PHYCTLWD_A3_B; // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
		NetFlow* PHYCTLWD_A4_B; // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
		NetFlow* PHYCTLWD_A5_B; // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
		NetFlow* PHYCTLWD_A6_B; // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
		NetFlow* PHYCTLWD_A7_B; // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
		NetFlow* PHYCTLWD_A8_B; // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
		NetFlow* PHYCTLWD_A9_B; // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
		NetFlow* PHYCTLWD_A10_B; // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
		NetFlow* PHYCTLWD_A11_B; // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
		NetFlow* PHYCTLWD_A12_B; // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
		NetFlow* PHYCTLWD_A13_B; // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
		NetFlow* PHYCTLWD_A14_B; // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
		NetFlow* PHYCTLWD_A15_B; // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
		NetFlow* PHYCTLWD_A16_B; // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
		NetFlow* PHYCTLWD_A17_B; // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
		NetFlow* PHYCTLWD_A18_B; // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
		NetFlow* PHYCTLWD_A19_B; // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
		NetFlow* PHYCTLWD_A20_B; // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
		NetFlow* PHYCTLWD_A21_B; // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
		NetFlow* PHYCTLWD_A22_B; // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
		NetFlow* PHYCTLWD_A23_B; // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
		NetFlow* PHYCTLWD_A24_B; // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
		NetFlow* PHYCTLWD_A25_B; // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
		NetFlow* PHYCTLWD_A26_B; // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
		NetFlow* PHYCTLWD_A27_B; // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
		NetFlow* PHYCTLWD_A28_B; // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
		NetFlow* PHYCTLWD_A29_B; // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
		NetFlow* PHYCTLWD_A30_B; // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
		NetFlow* PHYCTLWD_A31_B; // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
		NetFlow* PHYCTLWRENABLE_A0_B; // net ID: PHYCTLWRENABLE lsb: 0  msb: 0 INPUT
		NetFlow* PLLLOCK_A0_B; // net ID: PLLLOCK lsb: 0  msb: 0 INPUT
		NetFlow* READCALIBENABLE_A0_B; // net ID: READCALIBENABLE lsb: 0  msb: 0 INPUT
		NetFlow* REFDLLLOCK_A0_B; // net ID: REFDLLLOCK lsb: 0  msb: 0 INPUT
		NetFlow* RESET_A0_B; // net ID: RESET lsb: 0  msb: 0 INPUT
		NetFlow* SYNCIN_A0_B; // net ID: SYNCIN lsb: 0  msb: 0 INPUT
		NetFlow* WRITECALIBENABLE_A0_B; // net ID: WRITECALIBENABLE lsb: 0  msb: 0 INPUT
		
		public: X_PHY_CONTROL(
			const char * name,
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
			NetFlow* AUXOUTPUT_A0_B, // net ID: AUXOUTPUT lsb: 0  msb: 3 OUTPUT
			NetFlow* AUXOUTPUT_A1_B, // net ID: AUXOUTPUT lsb: 0  msb: 3 OUTPUT
			NetFlow* AUXOUTPUT_A2_B, // net ID: AUXOUTPUT lsb: 0  msb: 3 OUTPUT
			NetFlow* AUXOUTPUT_A3_B, // net ID: AUXOUTPUT lsb: 0  msb: 3 OUTPUT
			NetFlow* INBURSTPENDING_A0_B, // net ID: INBURSTPENDING lsb: 0  msb: 3 OUTPUT
			NetFlow* INBURSTPENDING_A1_B, // net ID: INBURSTPENDING lsb: 0  msb: 3 OUTPUT
			NetFlow* INBURSTPENDING_A2_B, // net ID: INBURSTPENDING lsb: 0  msb: 3 OUTPUT
			NetFlow* INBURSTPENDING_A3_B, // net ID: INBURSTPENDING lsb: 0  msb: 3 OUTPUT
			NetFlow* INRANKA_A0_B, // net ID: INRANKA lsb: 0  msb: 1 OUTPUT
			NetFlow* INRANKA_A1_B, // net ID: INRANKA lsb: 0  msb: 1 OUTPUT
			NetFlow* INRANKB_A0_B, // net ID: INRANKB lsb: 0  msb: 1 OUTPUT
			NetFlow* INRANKB_A1_B, // net ID: INRANKB lsb: 0  msb: 1 OUTPUT
			NetFlow* INRANKC_A0_B, // net ID: INRANKC lsb: 0  msb: 1 OUTPUT
			NetFlow* INRANKC_A1_B, // net ID: INRANKC lsb: 0  msb: 1 OUTPUT
			NetFlow* INRANKD_A0_B, // net ID: INRANKD lsb: 0  msb: 1 OUTPUT
			NetFlow* INRANKD_A1_B, // net ID: INRANKD lsb: 0  msb: 1 OUTPUT
			NetFlow* OUTBURSTPENDING_A0_B, // net ID: OUTBURSTPENDING lsb: 0  msb: 3 OUTPUT
			NetFlow* OUTBURSTPENDING_A1_B, // net ID: OUTBURSTPENDING lsb: 0  msb: 3 OUTPUT
			NetFlow* OUTBURSTPENDING_A2_B, // net ID: OUTBURSTPENDING lsb: 0  msb: 3 OUTPUT
			NetFlow* OUTBURSTPENDING_A3_B, // net ID: OUTBURSTPENDING lsb: 0  msb: 3 OUTPUT
			NetFlow* PCENABLECALIB_A0_B, // net ID: PCENABLECALIB lsb: 0  msb: 1 OUTPUT
			NetFlow* PCENABLECALIB_A1_B, // net ID: PCENABLECALIB lsb: 0  msb: 1 OUTPUT
			NetFlow* PHYCTLALMOSTFULL_A0_B, // net ID: PHYCTLALMOSTFULL lsb: 0  msb: 0 OUTPUT
			NetFlow* PHYCTLEMPTY_A0_B, // net ID: PHYCTLEMPTY lsb: 0  msb: 0 OUTPUT
			NetFlow* PHYCTLFULL_A0_B, // net ID: PHYCTLFULL lsb: 0  msb: 0 OUTPUT
			NetFlow* PHYCTLREADY_A0_B, // net ID: PHYCTLREADY lsb: 0  msb: 0 OUTPUT
			NetFlow* MEMREFCLK_A0_B, // net ID: MEMREFCLK lsb: 0  msb: 0 INPUT
			NetFlow* PHYCLK_A0_B, // net ID: PHYCLK lsb: 0  msb: 0 INPUT
			NetFlow* PHYCTLMSTREMPTY_A0_B, // net ID: PHYCTLMSTREMPTY lsb: 0  msb: 0 INPUT
			NetFlow* PHYCTLWD_A0_B, // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
			NetFlow* PHYCTLWD_A1_B, // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
			NetFlow* PHYCTLWD_A2_B, // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
			NetFlow* PHYCTLWD_A3_B, // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
			NetFlow* PHYCTLWD_A4_B, // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
			NetFlow* PHYCTLWD_A5_B, // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
			NetFlow* PHYCTLWD_A6_B, // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
			NetFlow* PHYCTLWD_A7_B, // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
			NetFlow* PHYCTLWD_A8_B, // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
			NetFlow* PHYCTLWD_A9_B, // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
			NetFlow* PHYCTLWD_A10_B, // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
			NetFlow* PHYCTLWD_A11_B, // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
			NetFlow* PHYCTLWD_A12_B, // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
			NetFlow* PHYCTLWD_A13_B, // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
			NetFlow* PHYCTLWD_A14_B, // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
			NetFlow* PHYCTLWD_A15_B, // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
			NetFlow* PHYCTLWD_A16_B, // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
			NetFlow* PHYCTLWD_A17_B, // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
			NetFlow* PHYCTLWD_A18_B, // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
			NetFlow* PHYCTLWD_A19_B, // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
			NetFlow* PHYCTLWD_A20_B, // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
			NetFlow* PHYCTLWD_A21_B, // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
			NetFlow* PHYCTLWD_A22_B, // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
			NetFlow* PHYCTLWD_A23_B, // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
			NetFlow* PHYCTLWD_A24_B, // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
			NetFlow* PHYCTLWD_A25_B, // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
			NetFlow* PHYCTLWD_A26_B, // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
			NetFlow* PHYCTLWD_A27_B, // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
			NetFlow* PHYCTLWD_A28_B, // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
			NetFlow* PHYCTLWD_A29_B, // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
			NetFlow* PHYCTLWD_A30_B, // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
			NetFlow* PHYCTLWD_A31_B, // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
			NetFlow* PHYCTLWRENABLE_A0_B, // net ID: PHYCTLWRENABLE lsb: 0  msb: 0 INPUT
			NetFlow* PLLLOCK_A0_B, // net ID: PLLLOCK lsb: 0  msb: 0 INPUT
			NetFlow* READCALIBENABLE_A0_B, // net ID: READCALIBENABLE lsb: 0  msb: 0 INPUT
			NetFlow* REFDLLLOCK_A0_B, // net ID: REFDLLLOCK lsb: 0  msb: 0 INPUT
			NetFlow* RESET_A0_B, // net ID: RESET lsb: 0  msb: 0 INPUT
			NetFlow* SYNCIN_A0_B, // net ID: SYNCIN lsb: 0  msb: 0 INPUT
			NetFlow* WRITECALIBENABLE_A0_B // net ID: WRITECALIBENABLE lsb: 0  msb: 0 INPUT
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
			this->AUXOUTPUT_A0_B = AUXOUTPUT_A0_B; // net ID: AUXOUTPUT lsb: 0  msb: 3 OUTPUT
			this->AUXOUTPUT_A1_B = AUXOUTPUT_A1_B; // net ID: AUXOUTPUT lsb: 0  msb: 3 OUTPUT
			this->AUXOUTPUT_A2_B = AUXOUTPUT_A2_B; // net ID: AUXOUTPUT lsb: 0  msb: 3 OUTPUT
			this->AUXOUTPUT_A3_B = AUXOUTPUT_A3_B; // net ID: AUXOUTPUT lsb: 0  msb: 3 OUTPUT
			this->INBURSTPENDING_A0_B = INBURSTPENDING_A0_B; // net ID: INBURSTPENDING lsb: 0  msb: 3 OUTPUT
			this->INBURSTPENDING_A1_B = INBURSTPENDING_A1_B; // net ID: INBURSTPENDING lsb: 0  msb: 3 OUTPUT
			this->INBURSTPENDING_A2_B = INBURSTPENDING_A2_B; // net ID: INBURSTPENDING lsb: 0  msb: 3 OUTPUT
			this->INBURSTPENDING_A3_B = INBURSTPENDING_A3_B; // net ID: INBURSTPENDING lsb: 0  msb: 3 OUTPUT
			this->INRANKA_A0_B = INRANKA_A0_B; // net ID: INRANKA lsb: 0  msb: 1 OUTPUT
			this->INRANKA_A1_B = INRANKA_A1_B; // net ID: INRANKA lsb: 0  msb: 1 OUTPUT
			this->INRANKB_A0_B = INRANKB_A0_B; // net ID: INRANKB lsb: 0  msb: 1 OUTPUT
			this->INRANKB_A1_B = INRANKB_A1_B; // net ID: INRANKB lsb: 0  msb: 1 OUTPUT
			this->INRANKC_A0_B = INRANKC_A0_B; // net ID: INRANKC lsb: 0  msb: 1 OUTPUT
			this->INRANKC_A1_B = INRANKC_A1_B; // net ID: INRANKC lsb: 0  msb: 1 OUTPUT
			this->INRANKD_A0_B = INRANKD_A0_B; // net ID: INRANKD lsb: 0  msb: 1 OUTPUT
			this->INRANKD_A1_B = INRANKD_A1_B; // net ID: INRANKD lsb: 0  msb: 1 OUTPUT
			this->OUTBURSTPENDING_A0_B = OUTBURSTPENDING_A0_B; // net ID: OUTBURSTPENDING lsb: 0  msb: 3 OUTPUT
			this->OUTBURSTPENDING_A1_B = OUTBURSTPENDING_A1_B; // net ID: OUTBURSTPENDING lsb: 0  msb: 3 OUTPUT
			this->OUTBURSTPENDING_A2_B = OUTBURSTPENDING_A2_B; // net ID: OUTBURSTPENDING lsb: 0  msb: 3 OUTPUT
			this->OUTBURSTPENDING_A3_B = OUTBURSTPENDING_A3_B; // net ID: OUTBURSTPENDING lsb: 0  msb: 3 OUTPUT
			this->PCENABLECALIB_A0_B = PCENABLECALIB_A0_B; // net ID: PCENABLECALIB lsb: 0  msb: 1 OUTPUT
			this->PCENABLECALIB_A1_B = PCENABLECALIB_A1_B; // net ID: PCENABLECALIB lsb: 0  msb: 1 OUTPUT
			this->PHYCTLALMOSTFULL_A0_B = PHYCTLALMOSTFULL_A0_B; // net ID: PHYCTLALMOSTFULL lsb: 0  msb: 0 OUTPUT
			this->PHYCTLEMPTY_A0_B = PHYCTLEMPTY_A0_B; // net ID: PHYCTLEMPTY lsb: 0  msb: 0 OUTPUT
			this->PHYCTLFULL_A0_B = PHYCTLFULL_A0_B; // net ID: PHYCTLFULL lsb: 0  msb: 0 OUTPUT
			this->PHYCTLREADY_A0_B = PHYCTLREADY_A0_B; // net ID: PHYCTLREADY lsb: 0  msb: 0 OUTPUT
			this->MEMREFCLK_A0_B = MEMREFCLK_A0_B; // net ID: MEMREFCLK lsb: 0  msb: 0 INPUT
			this->PHYCLK_A0_B = PHYCLK_A0_B; // net ID: PHYCLK lsb: 0  msb: 0 INPUT
			this->PHYCTLMSTREMPTY_A0_B = PHYCTLMSTREMPTY_A0_B; // net ID: PHYCTLMSTREMPTY lsb: 0  msb: 0 INPUT
			this->PHYCTLWD_A0_B = PHYCTLWD_A0_B; // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
			this->PHYCTLWD_A1_B = PHYCTLWD_A1_B; // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
			this->PHYCTLWD_A2_B = PHYCTLWD_A2_B; // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
			this->PHYCTLWD_A3_B = PHYCTLWD_A3_B; // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
			this->PHYCTLWD_A4_B = PHYCTLWD_A4_B; // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
			this->PHYCTLWD_A5_B = PHYCTLWD_A5_B; // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
			this->PHYCTLWD_A6_B = PHYCTLWD_A6_B; // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
			this->PHYCTLWD_A7_B = PHYCTLWD_A7_B; // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
			this->PHYCTLWD_A8_B = PHYCTLWD_A8_B; // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
			this->PHYCTLWD_A9_B = PHYCTLWD_A9_B; // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
			this->PHYCTLWD_A10_B = PHYCTLWD_A10_B; // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
			this->PHYCTLWD_A11_B = PHYCTLWD_A11_B; // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
			this->PHYCTLWD_A12_B = PHYCTLWD_A12_B; // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
			this->PHYCTLWD_A13_B = PHYCTLWD_A13_B; // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
			this->PHYCTLWD_A14_B = PHYCTLWD_A14_B; // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
			this->PHYCTLWD_A15_B = PHYCTLWD_A15_B; // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
			this->PHYCTLWD_A16_B = PHYCTLWD_A16_B; // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
			this->PHYCTLWD_A17_B = PHYCTLWD_A17_B; // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
			this->PHYCTLWD_A18_B = PHYCTLWD_A18_B; // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
			this->PHYCTLWD_A19_B = PHYCTLWD_A19_B; // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
			this->PHYCTLWD_A20_B = PHYCTLWD_A20_B; // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
			this->PHYCTLWD_A21_B = PHYCTLWD_A21_B; // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
			this->PHYCTLWD_A22_B = PHYCTLWD_A22_B; // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
			this->PHYCTLWD_A23_B = PHYCTLWD_A23_B; // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
			this->PHYCTLWD_A24_B = PHYCTLWD_A24_B; // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
			this->PHYCTLWD_A25_B = PHYCTLWD_A25_B; // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
			this->PHYCTLWD_A26_B = PHYCTLWD_A26_B; // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
			this->PHYCTLWD_A27_B = PHYCTLWD_A27_B; // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
			this->PHYCTLWD_A28_B = PHYCTLWD_A28_B; // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
			this->PHYCTLWD_A29_B = PHYCTLWD_A29_B; // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
			this->PHYCTLWD_A30_B = PHYCTLWD_A30_B; // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
			this->PHYCTLWD_A31_B = PHYCTLWD_A31_B; // net ID: PHYCTLWD lsb: 0  msb: 31 INPUT
			this->PHYCTLWRENABLE_A0_B = PHYCTLWRENABLE_A0_B; // net ID: PHYCTLWRENABLE lsb: 0  msb: 0 INPUT
			this->PLLLOCK_A0_B = PLLLOCK_A0_B; // net ID: PLLLOCK lsb: 0  msb: 0 INPUT
			this->READCALIBENABLE_A0_B = READCALIBENABLE_A0_B; // net ID: READCALIBENABLE lsb: 0  msb: 0 INPUT
			this->REFDLLLOCK_A0_B = REFDLLLOCK_A0_B; // net ID: REFDLLLOCK lsb: 0  msb: 0 INPUT
			this->RESET_A0_B = RESET_A0_B; // net ID: RESET lsb: 0  msb: 0 INPUT
			this->SYNCIN_A0_B = SYNCIN_A0_B; // net ID: SYNCIN lsb: 0  msb: 0 INPUT
			this->WRITECALIBENABLE_A0_B = WRITECALIBENABLE_A0_B; // net ID: WRITECALIBENABLE lsb: 0  msb: 0 INPUT
			
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
#endif // X_PHY_CONTROL_H
