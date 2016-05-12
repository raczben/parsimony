/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_SYSMON_H
#define X_SYSMON_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_SYSMON: public Primitive{

		//Verilog Parameters:
		parameter_int_t INIT_40;
		parameter_int_t INIT_41;
		parameter_int_t INIT_42;
		parameter_int_t INIT_43;
		parameter_int_t INIT_44;
		parameter_int_t INIT_45;
		parameter_int_t INIT_46;
		parameter_int_t INIT_47;
		parameter_int_t INIT_48;
		parameter_int_t INIT_49;
		parameter_int_t INIT_4A;
		parameter_int_t INIT_4B;
		parameter_int_t INIT_4C;
		parameter_int_t INIT_4D;
		parameter_int_t INIT_4E;
		parameter_int_t INIT_4F;
		parameter_int_t INIT_50;
		parameter_int_t INIT_51;
		parameter_int_t INIT_52;
		parameter_int_t INIT_53;
		parameter_int_t INIT_54;
		parameter_int_t INIT_55;
		parameter_int_t INIT_56;
		parameter_int_t INIT_57;
		parameter_string_t SIM_DEVICE;
		parameter_string_t SIM_MONITOR_FILE;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* ALM_A2_B; // net ID: ALM lsb: 0  msb: 2 OUTPUT
		NetFlow* ALM_A1_B; // net ID: ALM lsb: 0  msb: 2 OUTPUT
		NetFlow* ALM_A0_B; // net ID: ALM lsb: 0  msb: 2 OUTPUT
		NetFlow* BUSY_A0_B; // net ID: BUSY lsb: 0  msb: 0 OUTPUT
		NetFlow* CHANNEL_A4_B; // net ID: CHANNEL lsb: 0  msb: 4 OUTPUT
		NetFlow* CHANNEL_A3_B; // net ID: CHANNEL lsb: 0  msb: 4 OUTPUT
		NetFlow* CHANNEL_A2_B; // net ID: CHANNEL lsb: 0  msb: 4 OUTPUT
		NetFlow* CHANNEL_A1_B; // net ID: CHANNEL lsb: 0  msb: 4 OUTPUT
		NetFlow* CHANNEL_A0_B; // net ID: CHANNEL lsb: 0  msb: 4 OUTPUT
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
		NetFlow* EOC_A0_B; // net ID: EOC lsb: 0  msb: 0 OUTPUT
		NetFlow* EOS_A0_B; // net ID: EOS lsb: 0  msb: 0 OUTPUT
		NetFlow* JTAGBUSY_A0_B; // net ID: JTAGBUSY lsb: 0  msb: 0 OUTPUT
		NetFlow* JTAGLOCKED_A0_B; // net ID: JTAGLOCKED lsb: 0  msb: 0 OUTPUT
		NetFlow* JTAGMODIFIED_A0_B; // net ID: JTAGMODIFIED lsb: 0  msb: 0 OUTPUT
		NetFlow* OT_A0_B; // net ID: OT lsb: 0  msb: 0 OUTPUT
		NetFlow* CONVST_A0_B; // net ID: CONVST lsb: 0  msb: 0 INPUT
		NetFlow* CONVSTCLK_A0_B; // net ID: CONVSTCLK lsb: 0  msb: 0 INPUT
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
		NetFlow* RESET_A0_B; // net ID: RESET lsb: 0  msb: 0 INPUT
		NetFlow* VAUXN_A15_B; // net ID: VAUXN lsb: 0  msb: 15 INPUT
		NetFlow* VAUXN_A14_B; // net ID: VAUXN lsb: 0  msb: 15 INPUT
		NetFlow* VAUXN_A13_B; // net ID: VAUXN lsb: 0  msb: 15 INPUT
		NetFlow* VAUXN_A12_B; // net ID: VAUXN lsb: 0  msb: 15 INPUT
		NetFlow* VAUXN_A11_B; // net ID: VAUXN lsb: 0  msb: 15 INPUT
		NetFlow* VAUXN_A10_B; // net ID: VAUXN lsb: 0  msb: 15 INPUT
		NetFlow* VAUXN_A9_B; // net ID: VAUXN lsb: 0  msb: 15 INPUT
		NetFlow* VAUXN_A8_B; // net ID: VAUXN lsb: 0  msb: 15 INPUT
		NetFlow* VAUXN_A7_B; // net ID: VAUXN lsb: 0  msb: 15 INPUT
		NetFlow* VAUXN_A6_B; // net ID: VAUXN lsb: 0  msb: 15 INPUT
		NetFlow* VAUXN_A5_B; // net ID: VAUXN lsb: 0  msb: 15 INPUT
		NetFlow* VAUXN_A4_B; // net ID: VAUXN lsb: 0  msb: 15 INPUT
		NetFlow* VAUXN_A3_B; // net ID: VAUXN lsb: 0  msb: 15 INPUT
		NetFlow* VAUXN_A2_B; // net ID: VAUXN lsb: 0  msb: 15 INPUT
		NetFlow* VAUXN_A1_B; // net ID: VAUXN lsb: 0  msb: 15 INPUT
		NetFlow* VAUXN_A0_B; // net ID: VAUXN lsb: 0  msb: 15 INPUT
		NetFlow* VAUXP_A15_B; // net ID: VAUXP lsb: 0  msb: 15 INPUT
		NetFlow* VAUXP_A14_B; // net ID: VAUXP lsb: 0  msb: 15 INPUT
		NetFlow* VAUXP_A13_B; // net ID: VAUXP lsb: 0  msb: 15 INPUT
		NetFlow* VAUXP_A12_B; // net ID: VAUXP lsb: 0  msb: 15 INPUT
		NetFlow* VAUXP_A11_B; // net ID: VAUXP lsb: 0  msb: 15 INPUT
		NetFlow* VAUXP_A10_B; // net ID: VAUXP lsb: 0  msb: 15 INPUT
		NetFlow* VAUXP_A9_B; // net ID: VAUXP lsb: 0  msb: 15 INPUT
		NetFlow* VAUXP_A8_B; // net ID: VAUXP lsb: 0  msb: 15 INPUT
		NetFlow* VAUXP_A7_B; // net ID: VAUXP lsb: 0  msb: 15 INPUT
		NetFlow* VAUXP_A6_B; // net ID: VAUXP lsb: 0  msb: 15 INPUT
		NetFlow* VAUXP_A5_B; // net ID: VAUXP lsb: 0  msb: 15 INPUT
		NetFlow* VAUXP_A4_B; // net ID: VAUXP lsb: 0  msb: 15 INPUT
		NetFlow* VAUXP_A3_B; // net ID: VAUXP lsb: 0  msb: 15 INPUT
		NetFlow* VAUXP_A2_B; // net ID: VAUXP lsb: 0  msb: 15 INPUT
		NetFlow* VAUXP_A1_B; // net ID: VAUXP lsb: 0  msb: 15 INPUT
		NetFlow* VAUXP_A0_B; // net ID: VAUXP lsb: 0  msb: 15 INPUT
		NetFlow* VN_A0_B; // net ID: VN lsb: 0  msb: 0 INPUT
		NetFlow* VP_A0_B; // net ID: VP lsb: 0  msb: 0 INPUT
		
		public: X_SYSMON(
			const char * name,
			//Verilog Parameters:
			parameter_int_t INIT_40, // Default: 16'h0
			parameter_int_t INIT_41, // Default: 16'h0
			parameter_int_t INIT_42, // Default: 16'h0800
			parameter_int_t INIT_43, // Default: 16'h0
			parameter_int_t INIT_44, // Default: 16'h0
			parameter_int_t INIT_45, // Default: 16'h0
			parameter_int_t INIT_46, // Default: 16'h0
			parameter_int_t INIT_47, // Default: 16'h0
			parameter_int_t INIT_48, // Default: 16'h0
			parameter_int_t INIT_49, // Default: 16'h0
			parameter_int_t INIT_4A, // Default: 16'h0
			parameter_int_t INIT_4B, // Default: 16'h0
			parameter_int_t INIT_4C, // Default: 16'h0
			parameter_int_t INIT_4D, // Default: 16'h0
			parameter_int_t INIT_4E, // Default: 16'h0
			parameter_int_t INIT_4F, // Default: 16'h0
			parameter_int_t INIT_50, // Default: 16'h0
			parameter_int_t INIT_51, // Default: 16'h0
			parameter_int_t INIT_52, // Default: 16'h0
			parameter_int_t INIT_53, // Default: 16'h0
			parameter_int_t INIT_54, // Default: 16'h0
			parameter_int_t INIT_55, // Default: 16'h0
			parameter_int_t INIT_56, // Default: 16'h0
			parameter_int_t INIT_57, // Default: 16'h0
			parameter_string_t SIM_DEVICE, // Default: "VIRTEX5"
			parameter_string_t SIM_MONITOR_FILE, // Default: "design.txt"
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* ALM_A2_B, // net ID: ALM lsb: 0  msb: 2 OUTPUT
			NetFlow* ALM_A1_B, // net ID: ALM lsb: 0  msb: 2 OUTPUT
			NetFlow* ALM_A0_B, // net ID: ALM lsb: 0  msb: 2 OUTPUT
			NetFlow* BUSY_A0_B, // net ID: BUSY lsb: 0  msb: 0 OUTPUT
			NetFlow* CHANNEL_A4_B, // net ID: CHANNEL lsb: 0  msb: 4 OUTPUT
			NetFlow* CHANNEL_A3_B, // net ID: CHANNEL lsb: 0  msb: 4 OUTPUT
			NetFlow* CHANNEL_A2_B, // net ID: CHANNEL lsb: 0  msb: 4 OUTPUT
			NetFlow* CHANNEL_A1_B, // net ID: CHANNEL lsb: 0  msb: 4 OUTPUT
			NetFlow* CHANNEL_A0_B, // net ID: CHANNEL lsb: 0  msb: 4 OUTPUT
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
			NetFlow* EOC_A0_B, // net ID: EOC lsb: 0  msb: 0 OUTPUT
			NetFlow* EOS_A0_B, // net ID: EOS lsb: 0  msb: 0 OUTPUT
			NetFlow* JTAGBUSY_A0_B, // net ID: JTAGBUSY lsb: 0  msb: 0 OUTPUT
			NetFlow* JTAGLOCKED_A0_B, // net ID: JTAGLOCKED lsb: 0  msb: 0 OUTPUT
			NetFlow* JTAGMODIFIED_A0_B, // net ID: JTAGMODIFIED lsb: 0  msb: 0 OUTPUT
			NetFlow* OT_A0_B, // net ID: OT lsb: 0  msb: 0 OUTPUT
			NetFlow* CONVST_A0_B, // net ID: CONVST lsb: 0  msb: 0 INPUT
			NetFlow* CONVSTCLK_A0_B, // net ID: CONVSTCLK lsb: 0  msb: 0 INPUT
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
			NetFlow* RESET_A0_B, // net ID: RESET lsb: 0  msb: 0 INPUT
			NetFlow* VAUXN_A15_B, // net ID: VAUXN lsb: 0  msb: 15 INPUT
			NetFlow* VAUXN_A14_B, // net ID: VAUXN lsb: 0  msb: 15 INPUT
			NetFlow* VAUXN_A13_B, // net ID: VAUXN lsb: 0  msb: 15 INPUT
			NetFlow* VAUXN_A12_B, // net ID: VAUXN lsb: 0  msb: 15 INPUT
			NetFlow* VAUXN_A11_B, // net ID: VAUXN lsb: 0  msb: 15 INPUT
			NetFlow* VAUXN_A10_B, // net ID: VAUXN lsb: 0  msb: 15 INPUT
			NetFlow* VAUXN_A9_B, // net ID: VAUXN lsb: 0  msb: 15 INPUT
			NetFlow* VAUXN_A8_B, // net ID: VAUXN lsb: 0  msb: 15 INPUT
			NetFlow* VAUXN_A7_B, // net ID: VAUXN lsb: 0  msb: 15 INPUT
			NetFlow* VAUXN_A6_B, // net ID: VAUXN lsb: 0  msb: 15 INPUT
			NetFlow* VAUXN_A5_B, // net ID: VAUXN lsb: 0  msb: 15 INPUT
			NetFlow* VAUXN_A4_B, // net ID: VAUXN lsb: 0  msb: 15 INPUT
			NetFlow* VAUXN_A3_B, // net ID: VAUXN lsb: 0  msb: 15 INPUT
			NetFlow* VAUXN_A2_B, // net ID: VAUXN lsb: 0  msb: 15 INPUT
			NetFlow* VAUXN_A1_B, // net ID: VAUXN lsb: 0  msb: 15 INPUT
			NetFlow* VAUXN_A0_B, // net ID: VAUXN lsb: 0  msb: 15 INPUT
			NetFlow* VAUXP_A15_B, // net ID: VAUXP lsb: 0  msb: 15 INPUT
			NetFlow* VAUXP_A14_B, // net ID: VAUXP lsb: 0  msb: 15 INPUT
			NetFlow* VAUXP_A13_B, // net ID: VAUXP lsb: 0  msb: 15 INPUT
			NetFlow* VAUXP_A12_B, // net ID: VAUXP lsb: 0  msb: 15 INPUT
			NetFlow* VAUXP_A11_B, // net ID: VAUXP lsb: 0  msb: 15 INPUT
			NetFlow* VAUXP_A10_B, // net ID: VAUXP lsb: 0  msb: 15 INPUT
			NetFlow* VAUXP_A9_B, // net ID: VAUXP lsb: 0  msb: 15 INPUT
			NetFlow* VAUXP_A8_B, // net ID: VAUXP lsb: 0  msb: 15 INPUT
			NetFlow* VAUXP_A7_B, // net ID: VAUXP lsb: 0  msb: 15 INPUT
			NetFlow* VAUXP_A6_B, // net ID: VAUXP lsb: 0  msb: 15 INPUT
			NetFlow* VAUXP_A5_B, // net ID: VAUXP lsb: 0  msb: 15 INPUT
			NetFlow* VAUXP_A4_B, // net ID: VAUXP lsb: 0  msb: 15 INPUT
			NetFlow* VAUXP_A3_B, // net ID: VAUXP lsb: 0  msb: 15 INPUT
			NetFlow* VAUXP_A2_B, // net ID: VAUXP lsb: 0  msb: 15 INPUT
			NetFlow* VAUXP_A1_B, // net ID: VAUXP lsb: 0  msb: 15 INPUT
			NetFlow* VAUXP_A0_B, // net ID: VAUXP lsb: 0  msb: 15 INPUT
			NetFlow* VN_A0_B, // net ID: VN lsb: 0  msb: 0 INPUT
			NetFlow* VP_A0_B // net ID: VP lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->INIT_40 = INIT_40; // Default: 16'h0
			this->INIT_41 = INIT_41; // Default: 16'h0
			this->INIT_42 = INIT_42; // Default: 16'h0800
			this->INIT_43 = INIT_43; // Default: 16'h0
			this->INIT_44 = INIT_44; // Default: 16'h0
			this->INIT_45 = INIT_45; // Default: 16'h0
			this->INIT_46 = INIT_46; // Default: 16'h0
			this->INIT_47 = INIT_47; // Default: 16'h0
			this->INIT_48 = INIT_48; // Default: 16'h0
			this->INIT_49 = INIT_49; // Default: 16'h0
			this->INIT_4A = INIT_4A; // Default: 16'h0
			this->INIT_4B = INIT_4B; // Default: 16'h0
			this->INIT_4C = INIT_4C; // Default: 16'h0
			this->INIT_4D = INIT_4D; // Default: 16'h0
			this->INIT_4E = INIT_4E; // Default: 16'h0
			this->INIT_4F = INIT_4F; // Default: 16'h0
			this->INIT_50 = INIT_50; // Default: 16'h0
			this->INIT_51 = INIT_51; // Default: 16'h0
			this->INIT_52 = INIT_52; // Default: 16'h0
			this->INIT_53 = INIT_53; // Default: 16'h0
			this->INIT_54 = INIT_54; // Default: 16'h0
			this->INIT_55 = INIT_55; // Default: 16'h0
			this->INIT_56 = INIT_56; // Default: 16'h0
			this->INIT_57 = INIT_57; // Default: 16'h0
			this->SIM_DEVICE = SIM_DEVICE; // Default: "VIRTEX5"
			this->SIM_MONITOR_FILE = SIM_MONITOR_FILE; // Default: "design.txt"
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->ALM_A2_B = ALM_A2_B; // net ID: ALM lsb: 0  msb: 2 OUTPUT
			this->ALM_A1_B = ALM_A1_B; // net ID: ALM lsb: 0  msb: 2 OUTPUT
			this->ALM_A0_B = ALM_A0_B; // net ID: ALM lsb: 0  msb: 2 OUTPUT
			this->BUSY_A0_B = BUSY_A0_B; // net ID: BUSY lsb: 0  msb: 0 OUTPUT
			this->CHANNEL_A4_B = CHANNEL_A4_B; // net ID: CHANNEL lsb: 0  msb: 4 OUTPUT
			this->CHANNEL_A3_B = CHANNEL_A3_B; // net ID: CHANNEL lsb: 0  msb: 4 OUTPUT
			this->CHANNEL_A2_B = CHANNEL_A2_B; // net ID: CHANNEL lsb: 0  msb: 4 OUTPUT
			this->CHANNEL_A1_B = CHANNEL_A1_B; // net ID: CHANNEL lsb: 0  msb: 4 OUTPUT
			this->CHANNEL_A0_B = CHANNEL_A0_B; // net ID: CHANNEL lsb: 0  msb: 4 OUTPUT
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
			this->EOC_A0_B = EOC_A0_B; // net ID: EOC lsb: 0  msb: 0 OUTPUT
			this->EOS_A0_B = EOS_A0_B; // net ID: EOS lsb: 0  msb: 0 OUTPUT
			this->JTAGBUSY_A0_B = JTAGBUSY_A0_B; // net ID: JTAGBUSY lsb: 0  msb: 0 OUTPUT
			this->JTAGLOCKED_A0_B = JTAGLOCKED_A0_B; // net ID: JTAGLOCKED lsb: 0  msb: 0 OUTPUT
			this->JTAGMODIFIED_A0_B = JTAGMODIFIED_A0_B; // net ID: JTAGMODIFIED lsb: 0  msb: 0 OUTPUT
			this->OT_A0_B = OT_A0_B; // net ID: OT lsb: 0  msb: 0 OUTPUT
			this->CONVST_A0_B = CONVST_A0_B; // net ID: CONVST lsb: 0  msb: 0 INPUT
			this->CONVSTCLK_A0_B = CONVSTCLK_A0_B; // net ID: CONVSTCLK lsb: 0  msb: 0 INPUT
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
			this->RESET_A0_B = RESET_A0_B; // net ID: RESET lsb: 0  msb: 0 INPUT
			this->VAUXN_A15_B = VAUXN_A15_B; // net ID: VAUXN lsb: 0  msb: 15 INPUT
			this->VAUXN_A14_B = VAUXN_A14_B; // net ID: VAUXN lsb: 0  msb: 15 INPUT
			this->VAUXN_A13_B = VAUXN_A13_B; // net ID: VAUXN lsb: 0  msb: 15 INPUT
			this->VAUXN_A12_B = VAUXN_A12_B; // net ID: VAUXN lsb: 0  msb: 15 INPUT
			this->VAUXN_A11_B = VAUXN_A11_B; // net ID: VAUXN lsb: 0  msb: 15 INPUT
			this->VAUXN_A10_B = VAUXN_A10_B; // net ID: VAUXN lsb: 0  msb: 15 INPUT
			this->VAUXN_A9_B = VAUXN_A9_B; // net ID: VAUXN lsb: 0  msb: 15 INPUT
			this->VAUXN_A8_B = VAUXN_A8_B; // net ID: VAUXN lsb: 0  msb: 15 INPUT
			this->VAUXN_A7_B = VAUXN_A7_B; // net ID: VAUXN lsb: 0  msb: 15 INPUT
			this->VAUXN_A6_B = VAUXN_A6_B; // net ID: VAUXN lsb: 0  msb: 15 INPUT
			this->VAUXN_A5_B = VAUXN_A5_B; // net ID: VAUXN lsb: 0  msb: 15 INPUT
			this->VAUXN_A4_B = VAUXN_A4_B; // net ID: VAUXN lsb: 0  msb: 15 INPUT
			this->VAUXN_A3_B = VAUXN_A3_B; // net ID: VAUXN lsb: 0  msb: 15 INPUT
			this->VAUXN_A2_B = VAUXN_A2_B; // net ID: VAUXN lsb: 0  msb: 15 INPUT
			this->VAUXN_A1_B = VAUXN_A1_B; // net ID: VAUXN lsb: 0  msb: 15 INPUT
			this->VAUXN_A0_B = VAUXN_A0_B; // net ID: VAUXN lsb: 0  msb: 15 INPUT
			this->VAUXP_A15_B = VAUXP_A15_B; // net ID: VAUXP lsb: 0  msb: 15 INPUT
			this->VAUXP_A14_B = VAUXP_A14_B; // net ID: VAUXP lsb: 0  msb: 15 INPUT
			this->VAUXP_A13_B = VAUXP_A13_B; // net ID: VAUXP lsb: 0  msb: 15 INPUT
			this->VAUXP_A12_B = VAUXP_A12_B; // net ID: VAUXP lsb: 0  msb: 15 INPUT
			this->VAUXP_A11_B = VAUXP_A11_B; // net ID: VAUXP lsb: 0  msb: 15 INPUT
			this->VAUXP_A10_B = VAUXP_A10_B; // net ID: VAUXP lsb: 0  msb: 15 INPUT
			this->VAUXP_A9_B = VAUXP_A9_B; // net ID: VAUXP lsb: 0  msb: 15 INPUT
			this->VAUXP_A8_B = VAUXP_A8_B; // net ID: VAUXP lsb: 0  msb: 15 INPUT
			this->VAUXP_A7_B = VAUXP_A7_B; // net ID: VAUXP lsb: 0  msb: 15 INPUT
			this->VAUXP_A6_B = VAUXP_A6_B; // net ID: VAUXP lsb: 0  msb: 15 INPUT
			this->VAUXP_A5_B = VAUXP_A5_B; // net ID: VAUXP lsb: 0  msb: 15 INPUT
			this->VAUXP_A4_B = VAUXP_A4_B; // net ID: VAUXP lsb: 0  msb: 15 INPUT
			this->VAUXP_A3_B = VAUXP_A3_B; // net ID: VAUXP lsb: 0  msb: 15 INPUT
			this->VAUXP_A2_B = VAUXP_A2_B; // net ID: VAUXP lsb: 0  msb: 15 INPUT
			this->VAUXP_A1_B = VAUXP_A1_B; // net ID: VAUXP lsb: 0  msb: 15 INPUT
			this->VAUXP_A0_B = VAUXP_A0_B; // net ID: VAUXP lsb: 0  msb: 15 INPUT
			this->VN_A0_B = VN_A0_B; // net ID: VN lsb: 0  msb: 0 INPUT
			this->VP_A0_B = VP_A0_B; // net ID: VP lsb: 0  msb: 0 INPUT
			
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
#endif // X_SYSMON_H
