/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_RAMB18: public Primitive{

		//Verilog Parameters:
		parameter_string_t DOA_REG;
		parameter_string_t DOB_REG;
		parameter_string_t INITP_00;
		parameter_string_t INITP_01;
		parameter_string_t INITP_02;
		parameter_string_t INITP_03;
		parameter_string_t INITP_04;
		parameter_string_t INITP_05;
		parameter_string_t INITP_06;
		parameter_string_t INITP_07;
		parameter_string_t INIT_00;
		parameter_string_t INIT_01;
		parameter_string_t INIT_02;
		parameter_string_t INIT_03;
		parameter_string_t INIT_04;
		parameter_string_t INIT_05;
		parameter_string_t INIT_06;
		parameter_string_t INIT_07;
		parameter_string_t INIT_08;
		parameter_string_t INIT_09;
		parameter_string_t INIT_0A;
		parameter_string_t INIT_0B;
		parameter_string_t INIT_0C;
		parameter_string_t INIT_0D;
		parameter_string_t INIT_0E;
		parameter_string_t INIT_0F;
		parameter_string_t INIT_10;
		parameter_string_t INIT_11;
		parameter_string_t INIT_12;
		parameter_string_t INIT_13;
		parameter_string_t INIT_14;
		parameter_string_t INIT_15;
		parameter_string_t INIT_16;
		parameter_string_t INIT_17;
		parameter_string_t INIT_18;
		parameter_string_t INIT_19;
		parameter_string_t INIT_1A;
		parameter_string_t INIT_1B;
		parameter_string_t INIT_1C;
		parameter_string_t INIT_1D;
		parameter_string_t INIT_1E;
		parameter_string_t INIT_1F;
		parameter_string_t INIT_20;
		parameter_string_t INIT_21;
		parameter_string_t INIT_22;
		parameter_string_t INIT_23;
		parameter_string_t INIT_24;
		parameter_string_t INIT_25;
		parameter_string_t INIT_26;
		parameter_string_t INIT_27;
		parameter_string_t INIT_28;
		parameter_string_t INIT_29;
		parameter_string_t INIT_2A;
		parameter_string_t INIT_2B;
		parameter_string_t INIT_2C;
		parameter_string_t INIT_2D;
		parameter_string_t INIT_2E;
		parameter_string_t INIT_2F;
		parameter_string_t INIT_30;
		parameter_string_t INIT_31;
		parameter_string_t INIT_32;
		parameter_string_t INIT_33;
		parameter_string_t INIT_34;
		parameter_string_t INIT_35;
		parameter_string_t INIT_36;
		parameter_string_t INIT_37;
		parameter_string_t INIT_38;
		parameter_string_t INIT_39;
		parameter_string_t INIT_3A;
		parameter_string_t INIT_3B;
		parameter_string_t INIT_3C;
		parameter_string_t INIT_3D;
		parameter_string_t INIT_3E;
		parameter_string_t INIT_3F;
		parameter_string_t INIT_A;
		parameter_string_t INIT_B;
		parameter_string_t INIT_FILE;
		parameter_string_t LOC;
		parameter_string_t READ_WIDTH_A;
		parameter_string_t READ_WIDTH_B;
		parameter_string_t SETUP_ALL;
		parameter_string_t SETUP_READ_FIRST;
		parameter_string_t SIM_COLLISION_CHECK;
		parameter_string_t SRVAL_A;
		parameter_string_t SRVAL_B;
		parameter_string_t WRITE_MODE_A;
		parameter_string_t WRITE_MODE_B;
		parameter_string_t WRITE_WIDTH_A;
		parameter_string_t WRITE_WIDTH_B;
		//Verilog Ports in definition order:
		NetFlow* DOA; // net ID: DOA lsb: 0  msb: 0 OUTPUT
		NetFlow* DOB; // net ID: DOB lsb: 0  msb: 0 OUTPUT
		NetFlow* DOPA; // net ID: DOPA lsb: 0  msb: 0 OUTPUT
		NetFlow* DOPB; // net ID: DOPB lsb: 0  msb: 0 OUTPUT
		NetFlow* ADDRA; // net ID: ADDRA lsb: 0  msb: 13 INPUT
		NetFlow* ADDRB; // net ID: ADDRB lsb: 0  msb: 13 INPUT
		NetFlow* CLKA; // net ID: CLKA lsb: 0  msb: 0 INPUT
		NetFlow* CLKB; // net ID: CLKB lsb: 0  msb: 0 INPUT
		NetFlow* DIA; // net ID: DIA lsb: 0  msb: 15 INPUT
		NetFlow* DIB; // net ID: DIB lsb: 0  msb: 15 INPUT
		NetFlow* DIPA; // net ID: DIPA lsb: 0  msb: 1 INPUT
		NetFlow* DIPB; // net ID: DIPB lsb: 0  msb: 1 INPUT
		NetFlow* ENA; // net ID: ENA lsb: 0  msb: 0 INPUT
		NetFlow* ENB; // net ID: ENB lsb: 0  msb: 0 INPUT
		NetFlow* REGCEA; // net ID: REGCEA lsb: 0  msb: 0 INPUT
		NetFlow* REGCEB; // net ID: REGCEB lsb: 0  msb: 0 INPUT
		NetFlow* SSRA; // net ID: SSRA lsb: 0  msb: 0 INPUT
		NetFlow* SSRB; // net ID: SSRB lsb: 0  msb: 0 INPUT
		NetFlow* WEA; // net ID: WEA lsb: 0  msb: 1 INPUT
		NetFlow* WEB; // net ID: WEB lsb: 0  msb: 1 INPUT
		
		X_RAMB18(
			const char * name,
			//Verilog Parameters:
			parameter_string_t DOA_REG, // Default: 0
			parameter_string_t DOB_REG, // Default: 0
			parameter_string_t INITP_00, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INITP_01, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INITP_02, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INITP_03, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INITP_04, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INITP_05, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INITP_06, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INITP_07, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_00, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_01, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_02, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_03, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_04, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_05, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_06, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_07, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_08, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_09, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_0A, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_0B, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_0C, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_0D, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_0E, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_0F, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_10, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_11, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_12, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_13, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_14, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_15, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_16, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_17, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_18, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_19, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_1A, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_1B, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_1C, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_1D, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_1E, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_1F, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_20, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_21, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_22, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_23, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_24, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_25, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_26, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_27, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_28, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_29, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_2A, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_2B, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_2C, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_2D, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_2E, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_2F, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_30, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_31, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_32, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_33, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_34, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_35, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_36, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_37, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_38, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_39, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_3A, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_3B, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_3C, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_3D, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_3E, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_3F, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_A, // Default: 18'h0
			parameter_string_t INIT_B, // Default: 18'h0
			parameter_string_t INIT_FILE, // Default: "NONE"
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_string_t READ_WIDTH_A, // Default: 0
			parameter_string_t READ_WIDTH_B, // Default: 0
			parameter_string_t SETUP_ALL, // Default: 1000
			parameter_string_t SETUP_READ_FIRST, // Default: 3000
			parameter_string_t SIM_COLLISION_CHECK, // Default: "ALL"
			parameter_string_t SRVAL_A, // Default: 18'h0
			parameter_string_t SRVAL_B, // Default: 18'h0
			parameter_string_t WRITE_MODE_A, // Default: "WRITE_FIRST"
			parameter_string_t WRITE_MODE_B, // Default: "WRITE_FIRST"
			parameter_string_t WRITE_WIDTH_A, // Default: 0
			parameter_string_t WRITE_WIDTH_B, // Default: 0
			//Verilog Ports in definition order:
			NetFlow* DOA, // net ID: DOA lsb: 0  msb: 0 OUTPUT
			NetFlow* DOB, // net ID: DOB lsb: 0  msb: 0 OUTPUT
			NetFlow* DOPA, // net ID: DOPA lsb: 0  msb: 0 OUTPUT
			NetFlow* DOPB, // net ID: DOPB lsb: 0  msb: 0 OUTPUT
			NetFlow* ADDRA, // net ID: ADDRA lsb: 0  msb: 13 INPUT
			NetFlow* ADDRB, // net ID: ADDRB lsb: 0  msb: 13 INPUT
			NetFlow* CLKA, // net ID: CLKA lsb: 0  msb: 0 INPUT
			NetFlow* CLKB, // net ID: CLKB lsb: 0  msb: 0 INPUT
			NetFlow* DIA, // net ID: DIA lsb: 0  msb: 15 INPUT
			NetFlow* DIB, // net ID: DIB lsb: 0  msb: 15 INPUT
			NetFlow* DIPA, // net ID: DIPA lsb: 0  msb: 1 INPUT
			NetFlow* DIPB, // net ID: DIPB lsb: 0  msb: 1 INPUT
			NetFlow* ENA, // net ID: ENA lsb: 0  msb: 0 INPUT
			NetFlow* ENB, // net ID: ENB lsb: 0  msb: 0 INPUT
			NetFlow* REGCEA, // net ID: REGCEA lsb: 0  msb: 0 INPUT
			NetFlow* REGCEB, // net ID: REGCEB lsb: 0  msb: 0 INPUT
			NetFlow* SSRA, // net ID: SSRA lsb: 0  msb: 0 INPUT
			NetFlow* SSRB, // net ID: SSRB lsb: 0  msb: 0 INPUT
			NetFlow* WEA, // net ID: WEA lsb: 0  msb: 1 INPUT
			NetFlow* WEB // net ID: WEB lsb: 0  msb: 1 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->DOA_REG = DOA_REG; // Default: 0
			this->DOB_REG = DOB_REG; // Default: 0
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
			this->INIT_A = INIT_A; // Default: 18'h0
			this->INIT_B = INIT_B; // Default: 18'h0
			this->INIT_FILE = INIT_FILE; // Default: "NONE"
			this->LOC = LOC; // Default: "UNPLACED"
			this->READ_WIDTH_A = READ_WIDTH_A; // Default: 0
			this->READ_WIDTH_B = READ_WIDTH_B; // Default: 0
			this->SETUP_ALL = SETUP_ALL; // Default: 1000
			this->SETUP_READ_FIRST = SETUP_READ_FIRST; // Default: 3000
			this->SIM_COLLISION_CHECK = SIM_COLLISION_CHECK; // Default: "ALL"
			this->SRVAL_A = SRVAL_A; // Default: 18'h0
			this->SRVAL_B = SRVAL_B; // Default: 18'h0
			this->WRITE_MODE_A = WRITE_MODE_A; // Default: "WRITE_FIRST"
			this->WRITE_MODE_B = WRITE_MODE_B; // Default: "WRITE_FIRST"
			this->WRITE_WIDTH_A = WRITE_WIDTH_A; // Default: 0
			this->WRITE_WIDTH_B = WRITE_WIDTH_B; // Default: 0
			//Verilog Ports in definition order:
			this->DOA = DOA; // net ID: DOA lsb: 0  msb: 0 OUTPUT
			this->DOB = DOB; // net ID: DOB lsb: 0  msb: 0 OUTPUT
			this->DOPA = DOPA; // net ID: DOPA lsb: 0  msb: 0 OUTPUT
			this->DOPB = DOPB; // net ID: DOPB lsb: 0  msb: 0 OUTPUT
			this->ADDRA = ADDRA; // net ID: ADDRA lsb: 0  msb: 13 INPUT
			this->ADDRB = ADDRB; // net ID: ADDRB lsb: 0  msb: 13 INPUT
			this->CLKA = CLKA; // net ID: CLKA lsb: 0  msb: 0 INPUT
			this->CLKB = CLKB; // net ID: CLKB lsb: 0  msb: 0 INPUT
			this->DIA = DIA; // net ID: DIA lsb: 0  msb: 15 INPUT
			this->DIB = DIB; // net ID: DIB lsb: 0  msb: 15 INPUT
			this->DIPA = DIPA; // net ID: DIPA lsb: 0  msb: 1 INPUT
			this->DIPB = DIPB; // net ID: DIPB lsb: 0  msb: 1 INPUT
			this->ENA = ENA; // net ID: ENA lsb: 0  msb: 0 INPUT
			this->ENB = ENB; // net ID: ENB lsb: 0  msb: 0 INPUT
			this->REGCEA = REGCEA; // net ID: REGCEA lsb: 0  msb: 0 INPUT
			this->REGCEB = REGCEB; // net ID: REGCEB lsb: 0  msb: 0 INPUT
			this->SSRA = SSRA; // net ID: SSRA lsb: 0  msb: 0 INPUT
			this->SSRB = SSRB; // net ID: SSRB lsb: 0  msb: 0 INPUT
			this->WEA = WEA; // net ID: WEA lsb: 0  msb: 1 INPUT
			this->WEB = WEB; // net ID: WEB lsb: 0  msb: 1 INPUT
			
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
