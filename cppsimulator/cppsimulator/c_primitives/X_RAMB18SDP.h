/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_RAMB18SDP_H
#define X_RAMB18SDP_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_RAMB18SDP: public Primitive{

		//Verilog Parameters:
		parameter_int_t DO_REG;
		parameter_int_t INIT;
		parameter_int_t INITP_00;
		parameter_int_t INITP_01;
		parameter_int_t INITP_02;
		parameter_int_t INITP_03;
		parameter_int_t INITP_04;
		parameter_int_t INITP_05;
		parameter_int_t INITP_06;
		parameter_int_t INITP_07;
		parameter_int_t INIT_00;
		parameter_int_t INIT_01;
		parameter_int_t INIT_02;
		parameter_int_t INIT_03;
		parameter_int_t INIT_04;
		parameter_int_t INIT_05;
		parameter_int_t INIT_06;
		parameter_int_t INIT_07;
		parameter_int_t INIT_08;
		parameter_int_t INIT_09;
		parameter_int_t INIT_0A;
		parameter_int_t INIT_0B;
		parameter_int_t INIT_0C;
		parameter_int_t INIT_0D;
		parameter_int_t INIT_0E;
		parameter_int_t INIT_0F;
		parameter_int_t INIT_10;
		parameter_int_t INIT_11;
		parameter_int_t INIT_12;
		parameter_int_t INIT_13;
		parameter_int_t INIT_14;
		parameter_int_t INIT_15;
		parameter_int_t INIT_16;
		parameter_int_t INIT_17;
		parameter_int_t INIT_18;
		parameter_int_t INIT_19;
		parameter_int_t INIT_1A;
		parameter_int_t INIT_1B;
		parameter_int_t INIT_1C;
		parameter_int_t INIT_1D;
		parameter_int_t INIT_1E;
		parameter_int_t INIT_1F;
		parameter_int_t INIT_20;
		parameter_int_t INIT_21;
		parameter_int_t INIT_22;
		parameter_int_t INIT_23;
		parameter_int_t INIT_24;
		parameter_int_t INIT_25;
		parameter_int_t INIT_26;
		parameter_int_t INIT_27;
		parameter_int_t INIT_28;
		parameter_int_t INIT_29;
		parameter_int_t INIT_2A;
		parameter_int_t INIT_2B;
		parameter_int_t INIT_2C;
		parameter_int_t INIT_2D;
		parameter_int_t INIT_2E;
		parameter_int_t INIT_2F;
		parameter_int_t INIT_30;
		parameter_int_t INIT_31;
		parameter_int_t INIT_32;
		parameter_int_t INIT_33;
		parameter_int_t INIT_34;
		parameter_int_t INIT_35;
		parameter_int_t INIT_36;
		parameter_int_t INIT_37;
		parameter_int_t INIT_38;
		parameter_int_t INIT_39;
		parameter_int_t INIT_3A;
		parameter_int_t INIT_3B;
		parameter_int_t INIT_3C;
		parameter_int_t INIT_3D;
		parameter_int_t INIT_3E;
		parameter_int_t INIT_3F;
		parameter_string_t INIT_FILE;
		parameter_string_t LOC;
		parameter_int_t SETUP_ALL;
		parameter_int_t SETUP_READ_FIRST;
		parameter_string_t SIM_COLLISION_CHECK;
		parameter_int_t SRVAL;
		//Verilog Ports in definition order:
		NetFlow* DO_A31_B; // net ID: DO lsb: 0  msb: 31 OUTPUT
		NetFlow* DO_A30_B; // net ID: DO lsb: 0  msb: 31 OUTPUT
		NetFlow* DO_A29_B; // net ID: DO lsb: 0  msb: 31 OUTPUT
		NetFlow* DO_A28_B; // net ID: DO lsb: 0  msb: 31 OUTPUT
		NetFlow* DO_A27_B; // net ID: DO lsb: 0  msb: 31 OUTPUT
		NetFlow* DO_A26_B; // net ID: DO lsb: 0  msb: 31 OUTPUT
		NetFlow* DO_A25_B; // net ID: DO lsb: 0  msb: 31 OUTPUT
		NetFlow* DO_A24_B; // net ID: DO lsb: 0  msb: 31 OUTPUT
		NetFlow* DO_A23_B; // net ID: DO lsb: 0  msb: 31 OUTPUT
		NetFlow* DO_A22_B; // net ID: DO lsb: 0  msb: 31 OUTPUT
		NetFlow* DO_A21_B; // net ID: DO lsb: 0  msb: 31 OUTPUT
		NetFlow* DO_A20_B; // net ID: DO lsb: 0  msb: 31 OUTPUT
		NetFlow* DO_A19_B; // net ID: DO lsb: 0  msb: 31 OUTPUT
		NetFlow* DO_A18_B; // net ID: DO lsb: 0  msb: 31 OUTPUT
		NetFlow* DO_A17_B; // net ID: DO lsb: 0  msb: 31 OUTPUT
		NetFlow* DO_A16_B; // net ID: DO lsb: 0  msb: 31 OUTPUT
		NetFlow* DO_A15_B; // net ID: DO lsb: 0  msb: 31 OUTPUT
		NetFlow* DO_A14_B; // net ID: DO lsb: 0  msb: 31 OUTPUT
		NetFlow* DO_A13_B; // net ID: DO lsb: 0  msb: 31 OUTPUT
		NetFlow* DO_A12_B; // net ID: DO lsb: 0  msb: 31 OUTPUT
		NetFlow* DO_A11_B; // net ID: DO lsb: 0  msb: 31 OUTPUT
		NetFlow* DO_A10_B; // net ID: DO lsb: 0  msb: 31 OUTPUT
		NetFlow* DO_A9_B; // net ID: DO lsb: 0  msb: 31 OUTPUT
		NetFlow* DO_A8_B; // net ID: DO lsb: 0  msb: 31 OUTPUT
		NetFlow* DO_A7_B; // net ID: DO lsb: 0  msb: 31 OUTPUT
		NetFlow* DO_A6_B; // net ID: DO lsb: 0  msb: 31 OUTPUT
		NetFlow* DO_A5_B; // net ID: DO lsb: 0  msb: 31 OUTPUT
		NetFlow* DO_A4_B; // net ID: DO lsb: 0  msb: 31 OUTPUT
		NetFlow* DO_A3_B; // net ID: DO lsb: 0  msb: 31 OUTPUT
		NetFlow* DO_A2_B; // net ID: DO lsb: 0  msb: 31 OUTPUT
		NetFlow* DO_A1_B; // net ID: DO lsb: 0  msb: 31 OUTPUT
		NetFlow* DO_A0_B; // net ID: DO lsb: 0  msb: 31 OUTPUT
		NetFlow* DOP_A3_B; // net ID: DOP lsb: 0  msb: 3 OUTPUT
		NetFlow* DOP_A2_B; // net ID: DOP lsb: 0  msb: 3 OUTPUT
		NetFlow* DOP_A1_B; // net ID: DOP lsb: 0  msb: 3 OUTPUT
		NetFlow* DOP_A0_B; // net ID: DOP lsb: 0  msb: 3 OUTPUT
		NetFlow* DI_A31_B; // net ID: DI lsb: 0  msb: 31 INPUT
		NetFlow* DI_A30_B; // net ID: DI lsb: 0  msb: 31 INPUT
		NetFlow* DI_A29_B; // net ID: DI lsb: 0  msb: 31 INPUT
		NetFlow* DI_A28_B; // net ID: DI lsb: 0  msb: 31 INPUT
		NetFlow* DI_A27_B; // net ID: DI lsb: 0  msb: 31 INPUT
		NetFlow* DI_A26_B; // net ID: DI lsb: 0  msb: 31 INPUT
		NetFlow* DI_A25_B; // net ID: DI lsb: 0  msb: 31 INPUT
		NetFlow* DI_A24_B; // net ID: DI lsb: 0  msb: 31 INPUT
		NetFlow* DI_A23_B; // net ID: DI lsb: 0  msb: 31 INPUT
		NetFlow* DI_A22_B; // net ID: DI lsb: 0  msb: 31 INPUT
		NetFlow* DI_A21_B; // net ID: DI lsb: 0  msb: 31 INPUT
		NetFlow* DI_A20_B; // net ID: DI lsb: 0  msb: 31 INPUT
		NetFlow* DI_A19_B; // net ID: DI lsb: 0  msb: 31 INPUT
		NetFlow* DI_A18_B; // net ID: DI lsb: 0  msb: 31 INPUT
		NetFlow* DI_A17_B; // net ID: DI lsb: 0  msb: 31 INPUT
		NetFlow* DI_A16_B; // net ID: DI lsb: 0  msb: 31 INPUT
		NetFlow* DI_A15_B; // net ID: DI lsb: 0  msb: 31 INPUT
		NetFlow* DI_A14_B; // net ID: DI lsb: 0  msb: 31 INPUT
		NetFlow* DI_A13_B; // net ID: DI lsb: 0  msb: 31 INPUT
		NetFlow* DI_A12_B; // net ID: DI lsb: 0  msb: 31 INPUT
		NetFlow* DI_A11_B; // net ID: DI lsb: 0  msb: 31 INPUT
		NetFlow* DI_A10_B; // net ID: DI lsb: 0  msb: 31 INPUT
		NetFlow* DI_A9_B; // net ID: DI lsb: 0  msb: 31 INPUT
		NetFlow* DI_A8_B; // net ID: DI lsb: 0  msb: 31 INPUT
		NetFlow* DI_A7_B; // net ID: DI lsb: 0  msb: 31 INPUT
		NetFlow* DI_A6_B; // net ID: DI lsb: 0  msb: 31 INPUT
		NetFlow* DI_A5_B; // net ID: DI lsb: 0  msb: 31 INPUT
		NetFlow* DI_A4_B; // net ID: DI lsb: 0  msb: 31 INPUT
		NetFlow* DI_A3_B; // net ID: DI lsb: 0  msb: 31 INPUT
		NetFlow* DI_A2_B; // net ID: DI lsb: 0  msb: 31 INPUT
		NetFlow* DI_A1_B; // net ID: DI lsb: 0  msb: 31 INPUT
		NetFlow* DI_A0_B; // net ID: DI lsb: 0  msb: 31 INPUT
		NetFlow* DIP_A3_B; // net ID: DIP lsb: 0  msb: 3 INPUT
		NetFlow* DIP_A2_B; // net ID: DIP lsb: 0  msb: 3 INPUT
		NetFlow* DIP_A1_B; // net ID: DIP lsb: 0  msb: 3 INPUT
		NetFlow* DIP_A0_B; // net ID: DIP lsb: 0  msb: 3 INPUT
		NetFlow* RDADDR_A8_B; // net ID: RDADDR lsb: 0  msb: 8 INPUT
		NetFlow* RDADDR_A7_B; // net ID: RDADDR lsb: 0  msb: 8 INPUT
		NetFlow* RDADDR_A6_B; // net ID: RDADDR lsb: 0  msb: 8 INPUT
		NetFlow* RDADDR_A5_B; // net ID: RDADDR lsb: 0  msb: 8 INPUT
		NetFlow* RDADDR_A4_B; // net ID: RDADDR lsb: 0  msb: 8 INPUT
		NetFlow* RDADDR_A3_B; // net ID: RDADDR lsb: 0  msb: 8 INPUT
		NetFlow* RDADDR_A2_B; // net ID: RDADDR lsb: 0  msb: 8 INPUT
		NetFlow* RDADDR_A1_B; // net ID: RDADDR lsb: 0  msb: 8 INPUT
		NetFlow* RDADDR_A0_B; // net ID: RDADDR lsb: 0  msb: 8 INPUT
		NetFlow* RDCLK_A0_B; // net ID: RDCLK lsb: 0  msb: 0 INPUT
		NetFlow* RDEN_A0_B; // net ID: RDEN lsb: 0  msb: 0 INPUT
		NetFlow* REGCE_A0_B; // net ID: REGCE lsb: 0  msb: 0 INPUT
		NetFlow* SSR_A0_B; // net ID: SSR lsb: 0  msb: 0 INPUT
		NetFlow* WE_A3_B; // net ID: WE lsb: 0  msb: 3 INPUT
		NetFlow* WE_A2_B; // net ID: WE lsb: 0  msb: 3 INPUT
		NetFlow* WE_A1_B; // net ID: WE lsb: 0  msb: 3 INPUT
		NetFlow* WE_A0_B; // net ID: WE lsb: 0  msb: 3 INPUT
		NetFlow* WRADDR_A8_B; // net ID: WRADDR lsb: 0  msb: 8 INPUT
		NetFlow* WRADDR_A7_B; // net ID: WRADDR lsb: 0  msb: 8 INPUT
		NetFlow* WRADDR_A6_B; // net ID: WRADDR lsb: 0  msb: 8 INPUT
		NetFlow* WRADDR_A5_B; // net ID: WRADDR lsb: 0  msb: 8 INPUT
		NetFlow* WRADDR_A4_B; // net ID: WRADDR lsb: 0  msb: 8 INPUT
		NetFlow* WRADDR_A3_B; // net ID: WRADDR lsb: 0  msb: 8 INPUT
		NetFlow* WRADDR_A2_B; // net ID: WRADDR lsb: 0  msb: 8 INPUT
		NetFlow* WRADDR_A1_B; // net ID: WRADDR lsb: 0  msb: 8 INPUT
		NetFlow* WRADDR_A0_B; // net ID: WRADDR lsb: 0  msb: 8 INPUT
		NetFlow* WRCLK_A0_B; // net ID: WRCLK lsb: 0  msb: 0 INPUT
		NetFlow* WREN_A0_B; // net ID: WREN lsb: 0  msb: 0 INPUT
		
		public: X_RAMB18SDP(
			const char * name,
			//Verilog Parameters:
			parameter_int_t DO_REG, // Default: 0
			parameter_int_t INIT, // Default: 36'h0
			parameter_int_t INITP_00, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INITP_01, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INITP_02, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INITP_03, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INITP_04, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INITP_05, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INITP_06, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INITP_07, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_00, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_01, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_02, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_03, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_04, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_05, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_06, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_07, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_08, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_09, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_0A, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_0B, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_0C, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_0D, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_0E, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_0F, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_10, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_11, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_12, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_13, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_14, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_15, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_16, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_17, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_18, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_19, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_1A, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_1B, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_1C, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_1D, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_1E, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_1F, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_20, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_21, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_22, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_23, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_24, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_25, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_26, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_27, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_28, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_29, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_2A, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_2B, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_2C, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_2D, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_2E, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_2F, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_30, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_31, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_32, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_33, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_34, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_35, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_36, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_37, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_38, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_39, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_3A, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_3B, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_3C, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_3D, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_3E, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_3F, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_FILE, // Default: "NONE"
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_int_t SETUP_ALL, // Default: 1000
			parameter_int_t SETUP_READ_FIRST, // Default: 3000
			parameter_string_t SIM_COLLISION_CHECK, // Default: "ALL"
			parameter_int_t SRVAL, // Default: 36'h0
			//Verilog Ports in definition order:
			NetFlow* DO_A31_B, // net ID: DO lsb: 0  msb: 31 OUTPUT
			NetFlow* DO_A30_B, // net ID: DO lsb: 0  msb: 31 OUTPUT
			NetFlow* DO_A29_B, // net ID: DO lsb: 0  msb: 31 OUTPUT
			NetFlow* DO_A28_B, // net ID: DO lsb: 0  msb: 31 OUTPUT
			NetFlow* DO_A27_B, // net ID: DO lsb: 0  msb: 31 OUTPUT
			NetFlow* DO_A26_B, // net ID: DO lsb: 0  msb: 31 OUTPUT
			NetFlow* DO_A25_B, // net ID: DO lsb: 0  msb: 31 OUTPUT
			NetFlow* DO_A24_B, // net ID: DO lsb: 0  msb: 31 OUTPUT
			NetFlow* DO_A23_B, // net ID: DO lsb: 0  msb: 31 OUTPUT
			NetFlow* DO_A22_B, // net ID: DO lsb: 0  msb: 31 OUTPUT
			NetFlow* DO_A21_B, // net ID: DO lsb: 0  msb: 31 OUTPUT
			NetFlow* DO_A20_B, // net ID: DO lsb: 0  msb: 31 OUTPUT
			NetFlow* DO_A19_B, // net ID: DO lsb: 0  msb: 31 OUTPUT
			NetFlow* DO_A18_B, // net ID: DO lsb: 0  msb: 31 OUTPUT
			NetFlow* DO_A17_B, // net ID: DO lsb: 0  msb: 31 OUTPUT
			NetFlow* DO_A16_B, // net ID: DO lsb: 0  msb: 31 OUTPUT
			NetFlow* DO_A15_B, // net ID: DO lsb: 0  msb: 31 OUTPUT
			NetFlow* DO_A14_B, // net ID: DO lsb: 0  msb: 31 OUTPUT
			NetFlow* DO_A13_B, // net ID: DO lsb: 0  msb: 31 OUTPUT
			NetFlow* DO_A12_B, // net ID: DO lsb: 0  msb: 31 OUTPUT
			NetFlow* DO_A11_B, // net ID: DO lsb: 0  msb: 31 OUTPUT
			NetFlow* DO_A10_B, // net ID: DO lsb: 0  msb: 31 OUTPUT
			NetFlow* DO_A9_B, // net ID: DO lsb: 0  msb: 31 OUTPUT
			NetFlow* DO_A8_B, // net ID: DO lsb: 0  msb: 31 OUTPUT
			NetFlow* DO_A7_B, // net ID: DO lsb: 0  msb: 31 OUTPUT
			NetFlow* DO_A6_B, // net ID: DO lsb: 0  msb: 31 OUTPUT
			NetFlow* DO_A5_B, // net ID: DO lsb: 0  msb: 31 OUTPUT
			NetFlow* DO_A4_B, // net ID: DO lsb: 0  msb: 31 OUTPUT
			NetFlow* DO_A3_B, // net ID: DO lsb: 0  msb: 31 OUTPUT
			NetFlow* DO_A2_B, // net ID: DO lsb: 0  msb: 31 OUTPUT
			NetFlow* DO_A1_B, // net ID: DO lsb: 0  msb: 31 OUTPUT
			NetFlow* DO_A0_B, // net ID: DO lsb: 0  msb: 31 OUTPUT
			NetFlow* DOP_A3_B, // net ID: DOP lsb: 0  msb: 3 OUTPUT
			NetFlow* DOP_A2_B, // net ID: DOP lsb: 0  msb: 3 OUTPUT
			NetFlow* DOP_A1_B, // net ID: DOP lsb: 0  msb: 3 OUTPUT
			NetFlow* DOP_A0_B, // net ID: DOP lsb: 0  msb: 3 OUTPUT
			NetFlow* DI_A31_B, // net ID: DI lsb: 0  msb: 31 INPUT
			NetFlow* DI_A30_B, // net ID: DI lsb: 0  msb: 31 INPUT
			NetFlow* DI_A29_B, // net ID: DI lsb: 0  msb: 31 INPUT
			NetFlow* DI_A28_B, // net ID: DI lsb: 0  msb: 31 INPUT
			NetFlow* DI_A27_B, // net ID: DI lsb: 0  msb: 31 INPUT
			NetFlow* DI_A26_B, // net ID: DI lsb: 0  msb: 31 INPUT
			NetFlow* DI_A25_B, // net ID: DI lsb: 0  msb: 31 INPUT
			NetFlow* DI_A24_B, // net ID: DI lsb: 0  msb: 31 INPUT
			NetFlow* DI_A23_B, // net ID: DI lsb: 0  msb: 31 INPUT
			NetFlow* DI_A22_B, // net ID: DI lsb: 0  msb: 31 INPUT
			NetFlow* DI_A21_B, // net ID: DI lsb: 0  msb: 31 INPUT
			NetFlow* DI_A20_B, // net ID: DI lsb: 0  msb: 31 INPUT
			NetFlow* DI_A19_B, // net ID: DI lsb: 0  msb: 31 INPUT
			NetFlow* DI_A18_B, // net ID: DI lsb: 0  msb: 31 INPUT
			NetFlow* DI_A17_B, // net ID: DI lsb: 0  msb: 31 INPUT
			NetFlow* DI_A16_B, // net ID: DI lsb: 0  msb: 31 INPUT
			NetFlow* DI_A15_B, // net ID: DI lsb: 0  msb: 31 INPUT
			NetFlow* DI_A14_B, // net ID: DI lsb: 0  msb: 31 INPUT
			NetFlow* DI_A13_B, // net ID: DI lsb: 0  msb: 31 INPUT
			NetFlow* DI_A12_B, // net ID: DI lsb: 0  msb: 31 INPUT
			NetFlow* DI_A11_B, // net ID: DI lsb: 0  msb: 31 INPUT
			NetFlow* DI_A10_B, // net ID: DI lsb: 0  msb: 31 INPUT
			NetFlow* DI_A9_B, // net ID: DI lsb: 0  msb: 31 INPUT
			NetFlow* DI_A8_B, // net ID: DI lsb: 0  msb: 31 INPUT
			NetFlow* DI_A7_B, // net ID: DI lsb: 0  msb: 31 INPUT
			NetFlow* DI_A6_B, // net ID: DI lsb: 0  msb: 31 INPUT
			NetFlow* DI_A5_B, // net ID: DI lsb: 0  msb: 31 INPUT
			NetFlow* DI_A4_B, // net ID: DI lsb: 0  msb: 31 INPUT
			NetFlow* DI_A3_B, // net ID: DI lsb: 0  msb: 31 INPUT
			NetFlow* DI_A2_B, // net ID: DI lsb: 0  msb: 31 INPUT
			NetFlow* DI_A1_B, // net ID: DI lsb: 0  msb: 31 INPUT
			NetFlow* DI_A0_B, // net ID: DI lsb: 0  msb: 31 INPUT
			NetFlow* DIP_A3_B, // net ID: DIP lsb: 0  msb: 3 INPUT
			NetFlow* DIP_A2_B, // net ID: DIP lsb: 0  msb: 3 INPUT
			NetFlow* DIP_A1_B, // net ID: DIP lsb: 0  msb: 3 INPUT
			NetFlow* DIP_A0_B, // net ID: DIP lsb: 0  msb: 3 INPUT
			NetFlow* RDADDR_A8_B, // net ID: RDADDR lsb: 0  msb: 8 INPUT
			NetFlow* RDADDR_A7_B, // net ID: RDADDR lsb: 0  msb: 8 INPUT
			NetFlow* RDADDR_A6_B, // net ID: RDADDR lsb: 0  msb: 8 INPUT
			NetFlow* RDADDR_A5_B, // net ID: RDADDR lsb: 0  msb: 8 INPUT
			NetFlow* RDADDR_A4_B, // net ID: RDADDR lsb: 0  msb: 8 INPUT
			NetFlow* RDADDR_A3_B, // net ID: RDADDR lsb: 0  msb: 8 INPUT
			NetFlow* RDADDR_A2_B, // net ID: RDADDR lsb: 0  msb: 8 INPUT
			NetFlow* RDADDR_A1_B, // net ID: RDADDR lsb: 0  msb: 8 INPUT
			NetFlow* RDADDR_A0_B, // net ID: RDADDR lsb: 0  msb: 8 INPUT
			NetFlow* RDCLK_A0_B, // net ID: RDCLK lsb: 0  msb: 0 INPUT
			NetFlow* RDEN_A0_B, // net ID: RDEN lsb: 0  msb: 0 INPUT
			NetFlow* REGCE_A0_B, // net ID: REGCE lsb: 0  msb: 0 INPUT
			NetFlow* SSR_A0_B, // net ID: SSR lsb: 0  msb: 0 INPUT
			NetFlow* WE_A3_B, // net ID: WE lsb: 0  msb: 3 INPUT
			NetFlow* WE_A2_B, // net ID: WE lsb: 0  msb: 3 INPUT
			NetFlow* WE_A1_B, // net ID: WE lsb: 0  msb: 3 INPUT
			NetFlow* WE_A0_B, // net ID: WE lsb: 0  msb: 3 INPUT
			NetFlow* WRADDR_A8_B, // net ID: WRADDR lsb: 0  msb: 8 INPUT
			NetFlow* WRADDR_A7_B, // net ID: WRADDR lsb: 0  msb: 8 INPUT
			NetFlow* WRADDR_A6_B, // net ID: WRADDR lsb: 0  msb: 8 INPUT
			NetFlow* WRADDR_A5_B, // net ID: WRADDR lsb: 0  msb: 8 INPUT
			NetFlow* WRADDR_A4_B, // net ID: WRADDR lsb: 0  msb: 8 INPUT
			NetFlow* WRADDR_A3_B, // net ID: WRADDR lsb: 0  msb: 8 INPUT
			NetFlow* WRADDR_A2_B, // net ID: WRADDR lsb: 0  msb: 8 INPUT
			NetFlow* WRADDR_A1_B, // net ID: WRADDR lsb: 0  msb: 8 INPUT
			NetFlow* WRADDR_A0_B, // net ID: WRADDR lsb: 0  msb: 8 INPUT
			NetFlow* WRCLK_A0_B, // net ID: WRCLK lsb: 0  msb: 0 INPUT
			NetFlow* WREN_A0_B // net ID: WREN lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->DO_REG = DO_REG; // Default: 0
			this->INIT = INIT; // Default: 36'h0
			this->INITP_00 = INITP_00; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INITP_01 = INITP_01; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INITP_02 = INITP_02; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INITP_03 = INITP_03; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INITP_04 = INITP_04; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INITP_05 = INITP_05; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INITP_06 = INITP_06; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INITP_07 = INITP_07; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_00 = INIT_00; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_01 = INIT_01; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_02 = INIT_02; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_03 = INIT_03; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_04 = INIT_04; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_05 = INIT_05; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_06 = INIT_06; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_07 = INIT_07; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_08 = INIT_08; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_09 = INIT_09; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_0A = INIT_0A; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_0B = INIT_0B; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_0C = INIT_0C; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_0D = INIT_0D; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_0E = INIT_0E; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_0F = INIT_0F; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_10 = INIT_10; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_11 = INIT_11; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_12 = INIT_12; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_13 = INIT_13; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_14 = INIT_14; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_15 = INIT_15; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_16 = INIT_16; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_17 = INIT_17; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_18 = INIT_18; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_19 = INIT_19; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_1A = INIT_1A; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_1B = INIT_1B; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_1C = INIT_1C; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_1D = INIT_1D; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_1E = INIT_1E; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_1F = INIT_1F; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_20 = INIT_20; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_21 = INIT_21; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_22 = INIT_22; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_23 = INIT_23; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_24 = INIT_24; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_25 = INIT_25; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_26 = INIT_26; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_27 = INIT_27; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_28 = INIT_28; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_29 = INIT_29; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_2A = INIT_2A; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_2B = INIT_2B; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_2C = INIT_2C; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_2D = INIT_2D; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_2E = INIT_2E; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_2F = INIT_2F; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_30 = INIT_30; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_31 = INIT_31; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_32 = INIT_32; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_33 = INIT_33; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_34 = INIT_34; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_35 = INIT_35; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_36 = INIT_36; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_37 = INIT_37; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_38 = INIT_38; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_39 = INIT_39; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_3A = INIT_3A; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_3B = INIT_3B; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_3C = INIT_3C; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_3D = INIT_3D; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_3E = INIT_3E; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_3F = INIT_3F; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_FILE = INIT_FILE; // Default: "NONE"
			this->LOC = LOC; // Default: "UNPLACED"
			this->SETUP_ALL = SETUP_ALL; // Default: 1000
			this->SETUP_READ_FIRST = SETUP_READ_FIRST; // Default: 3000
			this->SIM_COLLISION_CHECK = SIM_COLLISION_CHECK; // Default: "ALL"
			this->SRVAL = SRVAL; // Default: 36'h0
			//Verilog Ports in definition order:
			this->DO_A31_B = DO_A31_B; // net ID: DO lsb: 0  msb: 31 OUTPUT
			this->DO_A30_B = DO_A30_B; // net ID: DO lsb: 0  msb: 31 OUTPUT
			this->DO_A29_B = DO_A29_B; // net ID: DO lsb: 0  msb: 31 OUTPUT
			this->DO_A28_B = DO_A28_B; // net ID: DO lsb: 0  msb: 31 OUTPUT
			this->DO_A27_B = DO_A27_B; // net ID: DO lsb: 0  msb: 31 OUTPUT
			this->DO_A26_B = DO_A26_B; // net ID: DO lsb: 0  msb: 31 OUTPUT
			this->DO_A25_B = DO_A25_B; // net ID: DO lsb: 0  msb: 31 OUTPUT
			this->DO_A24_B = DO_A24_B; // net ID: DO lsb: 0  msb: 31 OUTPUT
			this->DO_A23_B = DO_A23_B; // net ID: DO lsb: 0  msb: 31 OUTPUT
			this->DO_A22_B = DO_A22_B; // net ID: DO lsb: 0  msb: 31 OUTPUT
			this->DO_A21_B = DO_A21_B; // net ID: DO lsb: 0  msb: 31 OUTPUT
			this->DO_A20_B = DO_A20_B; // net ID: DO lsb: 0  msb: 31 OUTPUT
			this->DO_A19_B = DO_A19_B; // net ID: DO lsb: 0  msb: 31 OUTPUT
			this->DO_A18_B = DO_A18_B; // net ID: DO lsb: 0  msb: 31 OUTPUT
			this->DO_A17_B = DO_A17_B; // net ID: DO lsb: 0  msb: 31 OUTPUT
			this->DO_A16_B = DO_A16_B; // net ID: DO lsb: 0  msb: 31 OUTPUT
			this->DO_A15_B = DO_A15_B; // net ID: DO lsb: 0  msb: 31 OUTPUT
			this->DO_A14_B = DO_A14_B; // net ID: DO lsb: 0  msb: 31 OUTPUT
			this->DO_A13_B = DO_A13_B; // net ID: DO lsb: 0  msb: 31 OUTPUT
			this->DO_A12_B = DO_A12_B; // net ID: DO lsb: 0  msb: 31 OUTPUT
			this->DO_A11_B = DO_A11_B; // net ID: DO lsb: 0  msb: 31 OUTPUT
			this->DO_A10_B = DO_A10_B; // net ID: DO lsb: 0  msb: 31 OUTPUT
			this->DO_A9_B = DO_A9_B; // net ID: DO lsb: 0  msb: 31 OUTPUT
			this->DO_A8_B = DO_A8_B; // net ID: DO lsb: 0  msb: 31 OUTPUT
			this->DO_A7_B = DO_A7_B; // net ID: DO lsb: 0  msb: 31 OUTPUT
			this->DO_A6_B = DO_A6_B; // net ID: DO lsb: 0  msb: 31 OUTPUT
			this->DO_A5_B = DO_A5_B; // net ID: DO lsb: 0  msb: 31 OUTPUT
			this->DO_A4_B = DO_A4_B; // net ID: DO lsb: 0  msb: 31 OUTPUT
			this->DO_A3_B = DO_A3_B; // net ID: DO lsb: 0  msb: 31 OUTPUT
			this->DO_A2_B = DO_A2_B; // net ID: DO lsb: 0  msb: 31 OUTPUT
			this->DO_A1_B = DO_A1_B; // net ID: DO lsb: 0  msb: 31 OUTPUT
			this->DO_A0_B = DO_A0_B; // net ID: DO lsb: 0  msb: 31 OUTPUT
			this->DOP_A3_B = DOP_A3_B; // net ID: DOP lsb: 0  msb: 3 OUTPUT
			this->DOP_A2_B = DOP_A2_B; // net ID: DOP lsb: 0  msb: 3 OUTPUT
			this->DOP_A1_B = DOP_A1_B; // net ID: DOP lsb: 0  msb: 3 OUTPUT
			this->DOP_A0_B = DOP_A0_B; // net ID: DOP lsb: 0  msb: 3 OUTPUT
			this->DI_A31_B = DI_A31_B; // net ID: DI lsb: 0  msb: 31 INPUT
			this->DI_A30_B = DI_A30_B; // net ID: DI lsb: 0  msb: 31 INPUT
			this->DI_A29_B = DI_A29_B; // net ID: DI lsb: 0  msb: 31 INPUT
			this->DI_A28_B = DI_A28_B; // net ID: DI lsb: 0  msb: 31 INPUT
			this->DI_A27_B = DI_A27_B; // net ID: DI lsb: 0  msb: 31 INPUT
			this->DI_A26_B = DI_A26_B; // net ID: DI lsb: 0  msb: 31 INPUT
			this->DI_A25_B = DI_A25_B; // net ID: DI lsb: 0  msb: 31 INPUT
			this->DI_A24_B = DI_A24_B; // net ID: DI lsb: 0  msb: 31 INPUT
			this->DI_A23_B = DI_A23_B; // net ID: DI lsb: 0  msb: 31 INPUT
			this->DI_A22_B = DI_A22_B; // net ID: DI lsb: 0  msb: 31 INPUT
			this->DI_A21_B = DI_A21_B; // net ID: DI lsb: 0  msb: 31 INPUT
			this->DI_A20_B = DI_A20_B; // net ID: DI lsb: 0  msb: 31 INPUT
			this->DI_A19_B = DI_A19_B; // net ID: DI lsb: 0  msb: 31 INPUT
			this->DI_A18_B = DI_A18_B; // net ID: DI lsb: 0  msb: 31 INPUT
			this->DI_A17_B = DI_A17_B; // net ID: DI lsb: 0  msb: 31 INPUT
			this->DI_A16_B = DI_A16_B; // net ID: DI lsb: 0  msb: 31 INPUT
			this->DI_A15_B = DI_A15_B; // net ID: DI lsb: 0  msb: 31 INPUT
			this->DI_A14_B = DI_A14_B; // net ID: DI lsb: 0  msb: 31 INPUT
			this->DI_A13_B = DI_A13_B; // net ID: DI lsb: 0  msb: 31 INPUT
			this->DI_A12_B = DI_A12_B; // net ID: DI lsb: 0  msb: 31 INPUT
			this->DI_A11_B = DI_A11_B; // net ID: DI lsb: 0  msb: 31 INPUT
			this->DI_A10_B = DI_A10_B; // net ID: DI lsb: 0  msb: 31 INPUT
			this->DI_A9_B = DI_A9_B; // net ID: DI lsb: 0  msb: 31 INPUT
			this->DI_A8_B = DI_A8_B; // net ID: DI lsb: 0  msb: 31 INPUT
			this->DI_A7_B = DI_A7_B; // net ID: DI lsb: 0  msb: 31 INPUT
			this->DI_A6_B = DI_A6_B; // net ID: DI lsb: 0  msb: 31 INPUT
			this->DI_A5_B = DI_A5_B; // net ID: DI lsb: 0  msb: 31 INPUT
			this->DI_A4_B = DI_A4_B; // net ID: DI lsb: 0  msb: 31 INPUT
			this->DI_A3_B = DI_A3_B; // net ID: DI lsb: 0  msb: 31 INPUT
			this->DI_A2_B = DI_A2_B; // net ID: DI lsb: 0  msb: 31 INPUT
			this->DI_A1_B = DI_A1_B; // net ID: DI lsb: 0  msb: 31 INPUT
			this->DI_A0_B = DI_A0_B; // net ID: DI lsb: 0  msb: 31 INPUT
			this->DIP_A3_B = DIP_A3_B; // net ID: DIP lsb: 0  msb: 3 INPUT
			this->DIP_A2_B = DIP_A2_B; // net ID: DIP lsb: 0  msb: 3 INPUT
			this->DIP_A1_B = DIP_A1_B; // net ID: DIP lsb: 0  msb: 3 INPUT
			this->DIP_A0_B = DIP_A0_B; // net ID: DIP lsb: 0  msb: 3 INPUT
			this->RDADDR_A8_B = RDADDR_A8_B; // net ID: RDADDR lsb: 0  msb: 8 INPUT
			this->RDADDR_A7_B = RDADDR_A7_B; // net ID: RDADDR lsb: 0  msb: 8 INPUT
			this->RDADDR_A6_B = RDADDR_A6_B; // net ID: RDADDR lsb: 0  msb: 8 INPUT
			this->RDADDR_A5_B = RDADDR_A5_B; // net ID: RDADDR lsb: 0  msb: 8 INPUT
			this->RDADDR_A4_B = RDADDR_A4_B; // net ID: RDADDR lsb: 0  msb: 8 INPUT
			this->RDADDR_A3_B = RDADDR_A3_B; // net ID: RDADDR lsb: 0  msb: 8 INPUT
			this->RDADDR_A2_B = RDADDR_A2_B; // net ID: RDADDR lsb: 0  msb: 8 INPUT
			this->RDADDR_A1_B = RDADDR_A1_B; // net ID: RDADDR lsb: 0  msb: 8 INPUT
			this->RDADDR_A0_B = RDADDR_A0_B; // net ID: RDADDR lsb: 0  msb: 8 INPUT
			this->RDCLK_A0_B = RDCLK_A0_B; // net ID: RDCLK lsb: 0  msb: 0 INPUT
			this->RDEN_A0_B = RDEN_A0_B; // net ID: RDEN lsb: 0  msb: 0 INPUT
			this->REGCE_A0_B = REGCE_A0_B; // net ID: REGCE lsb: 0  msb: 0 INPUT
			this->SSR_A0_B = SSR_A0_B; // net ID: SSR lsb: 0  msb: 0 INPUT
			this->WE_A3_B = WE_A3_B; // net ID: WE lsb: 0  msb: 3 INPUT
			this->WE_A2_B = WE_A2_B; // net ID: WE lsb: 0  msb: 3 INPUT
			this->WE_A1_B = WE_A1_B; // net ID: WE lsb: 0  msb: 3 INPUT
			this->WE_A0_B = WE_A0_B; // net ID: WE lsb: 0  msb: 3 INPUT
			this->WRADDR_A8_B = WRADDR_A8_B; // net ID: WRADDR lsb: 0  msb: 8 INPUT
			this->WRADDR_A7_B = WRADDR_A7_B; // net ID: WRADDR lsb: 0  msb: 8 INPUT
			this->WRADDR_A6_B = WRADDR_A6_B; // net ID: WRADDR lsb: 0  msb: 8 INPUT
			this->WRADDR_A5_B = WRADDR_A5_B; // net ID: WRADDR lsb: 0  msb: 8 INPUT
			this->WRADDR_A4_B = WRADDR_A4_B; // net ID: WRADDR lsb: 0  msb: 8 INPUT
			this->WRADDR_A3_B = WRADDR_A3_B; // net ID: WRADDR lsb: 0  msb: 8 INPUT
			this->WRADDR_A2_B = WRADDR_A2_B; // net ID: WRADDR lsb: 0  msb: 8 INPUT
			this->WRADDR_A1_B = WRADDR_A1_B; // net ID: WRADDR lsb: 0  msb: 8 INPUT
			this->WRADDR_A0_B = WRADDR_A0_B; // net ID: WRADDR lsb: 0  msb: 8 INPUT
			this->WRCLK_A0_B = WRCLK_A0_B; // net ID: WRCLK lsb: 0  msb: 0 INPUT
			this->WREN_A0_B = WREN_A0_B; // net ID: WREN lsb: 0  msb: 0 INPUT
			
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
#endif // X_RAMB18SDP_H
