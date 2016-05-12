/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_RAMB16_H
#define X_RAMB16_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_RAMB16: public Primitive{

		//Verilog Parameters:
		parameter_int_t DOA_REG;
		parameter_int_t DOB_REG;
		parameter_enum_t EN_ECC_READ;
		parameter_enum_t EN_ECC_WRITE;
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
		parameter_int_t INIT_A;
		parameter_int_t INIT_B;
		parameter_string_t INIT_FILE;
		parameter_enum_t INVERT_CLK_DOA_REG;
		parameter_enum_t INVERT_CLK_DOB_REG;
		parameter_string_t LOC;
		parameter_string_t RAM_EXTENSION_A;
		parameter_string_t RAM_EXTENSION_B;
		parameter_int_t READ_WIDTH_A;
		parameter_int_t READ_WIDTH_B;
		parameter_int_t SETUP_ALL;
		parameter_int_t SETUP_READ_FIRST;
		parameter_string_t SIM_COLLISION_CHECK;
		parameter_int_t SRVAL_A;
		parameter_int_t SRVAL_B;
		parameter_string_t WRITE_MODE_A;
		parameter_string_t WRITE_MODE_B;
		parameter_int_t WRITE_WIDTH_A;
		parameter_int_t WRITE_WIDTH_B;
		//Verilog Ports in definition order:
		NetFlow* CASCADEOUTA_A0_B; // net ID: CASCADEOUTA lsb: 0  msb: 0 OUTPUT
		NetFlow* CASCADEOUTB_A0_B; // net ID: CASCADEOUTB lsb: 0  msb: 0 OUTPUT
		NetFlow* DOA_A31_B; // net ID: DOA lsb: 0  msb: 31 OUTPUT
		NetFlow* DOA_A30_B; // net ID: DOA lsb: 0  msb: 31 OUTPUT
		NetFlow* DOA_A29_B; // net ID: DOA lsb: 0  msb: 31 OUTPUT
		NetFlow* DOA_A28_B; // net ID: DOA lsb: 0  msb: 31 OUTPUT
		NetFlow* DOA_A27_B; // net ID: DOA lsb: 0  msb: 31 OUTPUT
		NetFlow* DOA_A26_B; // net ID: DOA lsb: 0  msb: 31 OUTPUT
		NetFlow* DOA_A25_B; // net ID: DOA lsb: 0  msb: 31 OUTPUT
		NetFlow* DOA_A24_B; // net ID: DOA lsb: 0  msb: 31 OUTPUT
		NetFlow* DOA_A23_B; // net ID: DOA lsb: 0  msb: 31 OUTPUT
		NetFlow* DOA_A22_B; // net ID: DOA lsb: 0  msb: 31 OUTPUT
		NetFlow* DOA_A21_B; // net ID: DOA lsb: 0  msb: 31 OUTPUT
		NetFlow* DOA_A20_B; // net ID: DOA lsb: 0  msb: 31 OUTPUT
		NetFlow* DOA_A19_B; // net ID: DOA lsb: 0  msb: 31 OUTPUT
		NetFlow* DOA_A18_B; // net ID: DOA lsb: 0  msb: 31 OUTPUT
		NetFlow* DOA_A17_B; // net ID: DOA lsb: 0  msb: 31 OUTPUT
		NetFlow* DOA_A16_B; // net ID: DOA lsb: 0  msb: 31 OUTPUT
		NetFlow* DOA_A15_B; // net ID: DOA lsb: 0  msb: 31 OUTPUT
		NetFlow* DOA_A14_B; // net ID: DOA lsb: 0  msb: 31 OUTPUT
		NetFlow* DOA_A13_B; // net ID: DOA lsb: 0  msb: 31 OUTPUT
		NetFlow* DOA_A12_B; // net ID: DOA lsb: 0  msb: 31 OUTPUT
		NetFlow* DOA_A11_B; // net ID: DOA lsb: 0  msb: 31 OUTPUT
		NetFlow* DOA_A10_B; // net ID: DOA lsb: 0  msb: 31 OUTPUT
		NetFlow* DOA_A9_B; // net ID: DOA lsb: 0  msb: 31 OUTPUT
		NetFlow* DOA_A8_B; // net ID: DOA lsb: 0  msb: 31 OUTPUT
		NetFlow* DOA_A7_B; // net ID: DOA lsb: 0  msb: 31 OUTPUT
		NetFlow* DOA_A6_B; // net ID: DOA lsb: 0  msb: 31 OUTPUT
		NetFlow* DOA_A5_B; // net ID: DOA lsb: 0  msb: 31 OUTPUT
		NetFlow* DOA_A4_B; // net ID: DOA lsb: 0  msb: 31 OUTPUT
		NetFlow* DOA_A3_B; // net ID: DOA lsb: 0  msb: 31 OUTPUT
		NetFlow* DOA_A2_B; // net ID: DOA lsb: 0  msb: 31 OUTPUT
		NetFlow* DOA_A1_B; // net ID: DOA lsb: 0  msb: 31 OUTPUT
		NetFlow* DOA_A0_B; // net ID: DOA lsb: 0  msb: 31 OUTPUT
		NetFlow* DOB_A31_B; // net ID: DOB lsb: 0  msb: 31 OUTPUT
		NetFlow* DOB_A30_B; // net ID: DOB lsb: 0  msb: 31 OUTPUT
		NetFlow* DOB_A29_B; // net ID: DOB lsb: 0  msb: 31 OUTPUT
		NetFlow* DOB_A28_B; // net ID: DOB lsb: 0  msb: 31 OUTPUT
		NetFlow* DOB_A27_B; // net ID: DOB lsb: 0  msb: 31 OUTPUT
		NetFlow* DOB_A26_B; // net ID: DOB lsb: 0  msb: 31 OUTPUT
		NetFlow* DOB_A25_B; // net ID: DOB lsb: 0  msb: 31 OUTPUT
		NetFlow* DOB_A24_B; // net ID: DOB lsb: 0  msb: 31 OUTPUT
		NetFlow* DOB_A23_B; // net ID: DOB lsb: 0  msb: 31 OUTPUT
		NetFlow* DOB_A22_B; // net ID: DOB lsb: 0  msb: 31 OUTPUT
		NetFlow* DOB_A21_B; // net ID: DOB lsb: 0  msb: 31 OUTPUT
		NetFlow* DOB_A20_B; // net ID: DOB lsb: 0  msb: 31 OUTPUT
		NetFlow* DOB_A19_B; // net ID: DOB lsb: 0  msb: 31 OUTPUT
		NetFlow* DOB_A18_B; // net ID: DOB lsb: 0  msb: 31 OUTPUT
		NetFlow* DOB_A17_B; // net ID: DOB lsb: 0  msb: 31 OUTPUT
		NetFlow* DOB_A16_B; // net ID: DOB lsb: 0  msb: 31 OUTPUT
		NetFlow* DOB_A15_B; // net ID: DOB lsb: 0  msb: 31 OUTPUT
		NetFlow* DOB_A14_B; // net ID: DOB lsb: 0  msb: 31 OUTPUT
		NetFlow* DOB_A13_B; // net ID: DOB lsb: 0  msb: 31 OUTPUT
		NetFlow* DOB_A12_B; // net ID: DOB lsb: 0  msb: 31 OUTPUT
		NetFlow* DOB_A11_B; // net ID: DOB lsb: 0  msb: 31 OUTPUT
		NetFlow* DOB_A10_B; // net ID: DOB lsb: 0  msb: 31 OUTPUT
		NetFlow* DOB_A9_B; // net ID: DOB lsb: 0  msb: 31 OUTPUT
		NetFlow* DOB_A8_B; // net ID: DOB lsb: 0  msb: 31 OUTPUT
		NetFlow* DOB_A7_B; // net ID: DOB lsb: 0  msb: 31 OUTPUT
		NetFlow* DOB_A6_B; // net ID: DOB lsb: 0  msb: 31 OUTPUT
		NetFlow* DOB_A5_B; // net ID: DOB lsb: 0  msb: 31 OUTPUT
		NetFlow* DOB_A4_B; // net ID: DOB lsb: 0  msb: 31 OUTPUT
		NetFlow* DOB_A3_B; // net ID: DOB lsb: 0  msb: 31 OUTPUT
		NetFlow* DOB_A2_B; // net ID: DOB lsb: 0  msb: 31 OUTPUT
		NetFlow* DOB_A1_B; // net ID: DOB lsb: 0  msb: 31 OUTPUT
		NetFlow* DOB_A0_B; // net ID: DOB lsb: 0  msb: 31 OUTPUT
		NetFlow* DOPA_A3_B; // net ID: DOPA lsb: 0  msb: 3 OUTPUT
		NetFlow* DOPA_A2_B; // net ID: DOPA lsb: 0  msb: 3 OUTPUT
		NetFlow* DOPA_A1_B; // net ID: DOPA lsb: 0  msb: 3 OUTPUT
		NetFlow* DOPA_A0_B; // net ID: DOPA lsb: 0  msb: 3 OUTPUT
		NetFlow* DOPB_A3_B; // net ID: DOPB lsb: 0  msb: 3 OUTPUT
		NetFlow* DOPB_A2_B; // net ID: DOPB lsb: 0  msb: 3 OUTPUT
		NetFlow* DOPB_A1_B; // net ID: DOPB lsb: 0  msb: 3 OUTPUT
		NetFlow* DOPB_A0_B; // net ID: DOPB lsb: 0  msb: 3 OUTPUT
		NetFlow* ADDRA_A14_B; // net ID: ADDRA lsb: 0  msb: 14 INPUT
		NetFlow* ADDRA_A13_B; // net ID: ADDRA lsb: 0  msb: 14 INPUT
		NetFlow* ADDRA_A12_B; // net ID: ADDRA lsb: 0  msb: 14 INPUT
		NetFlow* ADDRA_A11_B; // net ID: ADDRA lsb: 0  msb: 14 INPUT
		NetFlow* ADDRA_A10_B; // net ID: ADDRA lsb: 0  msb: 14 INPUT
		NetFlow* ADDRA_A9_B; // net ID: ADDRA lsb: 0  msb: 14 INPUT
		NetFlow* ADDRA_A8_B; // net ID: ADDRA lsb: 0  msb: 14 INPUT
		NetFlow* ADDRA_A7_B; // net ID: ADDRA lsb: 0  msb: 14 INPUT
		NetFlow* ADDRA_A6_B; // net ID: ADDRA lsb: 0  msb: 14 INPUT
		NetFlow* ADDRA_A5_B; // net ID: ADDRA lsb: 0  msb: 14 INPUT
		NetFlow* ADDRA_A4_B; // net ID: ADDRA lsb: 0  msb: 14 INPUT
		NetFlow* ADDRA_A3_B; // net ID: ADDRA lsb: 0  msb: 14 INPUT
		NetFlow* ADDRA_A2_B; // net ID: ADDRA lsb: 0  msb: 14 INPUT
		NetFlow* ADDRA_A1_B; // net ID: ADDRA lsb: 0  msb: 14 INPUT
		NetFlow* ADDRA_A0_B; // net ID: ADDRA lsb: 0  msb: 14 INPUT
		NetFlow* ADDRB_A14_B; // net ID: ADDRB lsb: 0  msb: 14 INPUT
		NetFlow* ADDRB_A13_B; // net ID: ADDRB lsb: 0  msb: 14 INPUT
		NetFlow* ADDRB_A12_B; // net ID: ADDRB lsb: 0  msb: 14 INPUT
		NetFlow* ADDRB_A11_B; // net ID: ADDRB lsb: 0  msb: 14 INPUT
		NetFlow* ADDRB_A10_B; // net ID: ADDRB lsb: 0  msb: 14 INPUT
		NetFlow* ADDRB_A9_B; // net ID: ADDRB lsb: 0  msb: 14 INPUT
		NetFlow* ADDRB_A8_B; // net ID: ADDRB lsb: 0  msb: 14 INPUT
		NetFlow* ADDRB_A7_B; // net ID: ADDRB lsb: 0  msb: 14 INPUT
		NetFlow* ADDRB_A6_B; // net ID: ADDRB lsb: 0  msb: 14 INPUT
		NetFlow* ADDRB_A5_B; // net ID: ADDRB lsb: 0  msb: 14 INPUT
		NetFlow* ADDRB_A4_B; // net ID: ADDRB lsb: 0  msb: 14 INPUT
		NetFlow* ADDRB_A3_B; // net ID: ADDRB lsb: 0  msb: 14 INPUT
		NetFlow* ADDRB_A2_B; // net ID: ADDRB lsb: 0  msb: 14 INPUT
		NetFlow* ADDRB_A1_B; // net ID: ADDRB lsb: 0  msb: 14 INPUT
		NetFlow* ADDRB_A0_B; // net ID: ADDRB lsb: 0  msb: 14 INPUT
		NetFlow* CASCADEINA_A0_B; // net ID: CASCADEINA lsb: 0  msb: 0 INPUT
		NetFlow* CASCADEINB_A0_B; // net ID: CASCADEINB lsb: 0  msb: 0 INPUT
		NetFlow* CLKA_A0_B; // net ID: CLKA lsb: 0  msb: 0 INPUT
		NetFlow* CLKB_A0_B; // net ID: CLKB lsb: 0  msb: 0 INPUT
		NetFlow* DIA_A31_B; // net ID: DIA lsb: 0  msb: 31 INPUT
		NetFlow* DIA_A30_B; // net ID: DIA lsb: 0  msb: 31 INPUT
		NetFlow* DIA_A29_B; // net ID: DIA lsb: 0  msb: 31 INPUT
		NetFlow* DIA_A28_B; // net ID: DIA lsb: 0  msb: 31 INPUT
		NetFlow* DIA_A27_B; // net ID: DIA lsb: 0  msb: 31 INPUT
		NetFlow* DIA_A26_B; // net ID: DIA lsb: 0  msb: 31 INPUT
		NetFlow* DIA_A25_B; // net ID: DIA lsb: 0  msb: 31 INPUT
		NetFlow* DIA_A24_B; // net ID: DIA lsb: 0  msb: 31 INPUT
		NetFlow* DIA_A23_B; // net ID: DIA lsb: 0  msb: 31 INPUT
		NetFlow* DIA_A22_B; // net ID: DIA lsb: 0  msb: 31 INPUT
		NetFlow* DIA_A21_B; // net ID: DIA lsb: 0  msb: 31 INPUT
		NetFlow* DIA_A20_B; // net ID: DIA lsb: 0  msb: 31 INPUT
		NetFlow* DIA_A19_B; // net ID: DIA lsb: 0  msb: 31 INPUT
		NetFlow* DIA_A18_B; // net ID: DIA lsb: 0  msb: 31 INPUT
		NetFlow* DIA_A17_B; // net ID: DIA lsb: 0  msb: 31 INPUT
		NetFlow* DIA_A16_B; // net ID: DIA lsb: 0  msb: 31 INPUT
		NetFlow* DIA_A15_B; // net ID: DIA lsb: 0  msb: 31 INPUT
		NetFlow* DIA_A14_B; // net ID: DIA lsb: 0  msb: 31 INPUT
		NetFlow* DIA_A13_B; // net ID: DIA lsb: 0  msb: 31 INPUT
		NetFlow* DIA_A12_B; // net ID: DIA lsb: 0  msb: 31 INPUT
		NetFlow* DIA_A11_B; // net ID: DIA lsb: 0  msb: 31 INPUT
		NetFlow* DIA_A10_B; // net ID: DIA lsb: 0  msb: 31 INPUT
		NetFlow* DIA_A9_B; // net ID: DIA lsb: 0  msb: 31 INPUT
		NetFlow* DIA_A8_B; // net ID: DIA lsb: 0  msb: 31 INPUT
		NetFlow* DIA_A7_B; // net ID: DIA lsb: 0  msb: 31 INPUT
		NetFlow* DIA_A6_B; // net ID: DIA lsb: 0  msb: 31 INPUT
		NetFlow* DIA_A5_B; // net ID: DIA lsb: 0  msb: 31 INPUT
		NetFlow* DIA_A4_B; // net ID: DIA lsb: 0  msb: 31 INPUT
		NetFlow* DIA_A3_B; // net ID: DIA lsb: 0  msb: 31 INPUT
		NetFlow* DIA_A2_B; // net ID: DIA lsb: 0  msb: 31 INPUT
		NetFlow* DIA_A1_B; // net ID: DIA lsb: 0  msb: 31 INPUT
		NetFlow* DIA_A0_B; // net ID: DIA lsb: 0  msb: 31 INPUT
		NetFlow* DIB_A31_B; // net ID: DIB lsb: 0  msb: 31 INPUT
		NetFlow* DIB_A30_B; // net ID: DIB lsb: 0  msb: 31 INPUT
		NetFlow* DIB_A29_B; // net ID: DIB lsb: 0  msb: 31 INPUT
		NetFlow* DIB_A28_B; // net ID: DIB lsb: 0  msb: 31 INPUT
		NetFlow* DIB_A27_B; // net ID: DIB lsb: 0  msb: 31 INPUT
		NetFlow* DIB_A26_B; // net ID: DIB lsb: 0  msb: 31 INPUT
		NetFlow* DIB_A25_B; // net ID: DIB lsb: 0  msb: 31 INPUT
		NetFlow* DIB_A24_B; // net ID: DIB lsb: 0  msb: 31 INPUT
		NetFlow* DIB_A23_B; // net ID: DIB lsb: 0  msb: 31 INPUT
		NetFlow* DIB_A22_B; // net ID: DIB lsb: 0  msb: 31 INPUT
		NetFlow* DIB_A21_B; // net ID: DIB lsb: 0  msb: 31 INPUT
		NetFlow* DIB_A20_B; // net ID: DIB lsb: 0  msb: 31 INPUT
		NetFlow* DIB_A19_B; // net ID: DIB lsb: 0  msb: 31 INPUT
		NetFlow* DIB_A18_B; // net ID: DIB lsb: 0  msb: 31 INPUT
		NetFlow* DIB_A17_B; // net ID: DIB lsb: 0  msb: 31 INPUT
		NetFlow* DIB_A16_B; // net ID: DIB lsb: 0  msb: 31 INPUT
		NetFlow* DIB_A15_B; // net ID: DIB lsb: 0  msb: 31 INPUT
		NetFlow* DIB_A14_B; // net ID: DIB lsb: 0  msb: 31 INPUT
		NetFlow* DIB_A13_B; // net ID: DIB lsb: 0  msb: 31 INPUT
		NetFlow* DIB_A12_B; // net ID: DIB lsb: 0  msb: 31 INPUT
		NetFlow* DIB_A11_B; // net ID: DIB lsb: 0  msb: 31 INPUT
		NetFlow* DIB_A10_B; // net ID: DIB lsb: 0  msb: 31 INPUT
		NetFlow* DIB_A9_B; // net ID: DIB lsb: 0  msb: 31 INPUT
		NetFlow* DIB_A8_B; // net ID: DIB lsb: 0  msb: 31 INPUT
		NetFlow* DIB_A7_B; // net ID: DIB lsb: 0  msb: 31 INPUT
		NetFlow* DIB_A6_B; // net ID: DIB lsb: 0  msb: 31 INPUT
		NetFlow* DIB_A5_B; // net ID: DIB lsb: 0  msb: 31 INPUT
		NetFlow* DIB_A4_B; // net ID: DIB lsb: 0  msb: 31 INPUT
		NetFlow* DIB_A3_B; // net ID: DIB lsb: 0  msb: 31 INPUT
		NetFlow* DIB_A2_B; // net ID: DIB lsb: 0  msb: 31 INPUT
		NetFlow* DIB_A1_B; // net ID: DIB lsb: 0  msb: 31 INPUT
		NetFlow* DIB_A0_B; // net ID: DIB lsb: 0  msb: 31 INPUT
		NetFlow* DIPA_A3_B; // net ID: DIPA lsb: 0  msb: 3 INPUT
		NetFlow* DIPA_A2_B; // net ID: DIPA lsb: 0  msb: 3 INPUT
		NetFlow* DIPA_A1_B; // net ID: DIPA lsb: 0  msb: 3 INPUT
		NetFlow* DIPA_A0_B; // net ID: DIPA lsb: 0  msb: 3 INPUT
		NetFlow* DIPB_A3_B; // net ID: DIPB lsb: 0  msb: 3 INPUT
		NetFlow* DIPB_A2_B; // net ID: DIPB lsb: 0  msb: 3 INPUT
		NetFlow* DIPB_A1_B; // net ID: DIPB lsb: 0  msb: 3 INPUT
		NetFlow* DIPB_A0_B; // net ID: DIPB lsb: 0  msb: 3 INPUT
		NetFlow* ENA_A0_B; // net ID: ENA lsb: 0  msb: 0 INPUT
		NetFlow* ENB_A0_B; // net ID: ENB lsb: 0  msb: 0 INPUT
		NetFlow* REGCEA_A0_B; // net ID: REGCEA lsb: 0  msb: 0 INPUT
		NetFlow* REGCEB_A0_B; // net ID: REGCEB lsb: 0  msb: 0 INPUT
		NetFlow* SSRA_A0_B; // net ID: SSRA lsb: 0  msb: 0 INPUT
		NetFlow* SSRB_A0_B; // net ID: SSRB lsb: 0  msb: 0 INPUT
		NetFlow* WEA_A3_B; // net ID: WEA lsb: 0  msb: 3 INPUT
		NetFlow* WEA_A2_B; // net ID: WEA lsb: 0  msb: 3 INPUT
		NetFlow* WEA_A1_B; // net ID: WEA lsb: 0  msb: 3 INPUT
		NetFlow* WEA_A0_B; // net ID: WEA lsb: 0  msb: 3 INPUT
		NetFlow* WEB_A3_B; // net ID: WEB lsb: 0  msb: 3 INPUT
		NetFlow* WEB_A2_B; // net ID: WEB lsb: 0  msb: 3 INPUT
		NetFlow* WEB_A1_B; // net ID: WEB lsb: 0  msb: 3 INPUT
		NetFlow* WEB_A0_B; // net ID: WEB lsb: 0  msb: 3 INPUT
		
		public: X_RAMB16(
			const char * name,
			//Verilog Parameters:
			parameter_int_t DOA_REG, // Default: 0
			parameter_int_t DOB_REG, // Default: 0
			parameter_enum_t EN_ECC_READ, // Default: "FALSE"
			parameter_enum_t EN_ECC_WRITE, // Default: "FALSE"
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
			parameter_int_t INIT_A, // Default: 36'h0
			parameter_int_t INIT_B, // Default: 36'h0
			parameter_string_t INIT_FILE, // Default: "NONE"
			parameter_enum_t INVERT_CLK_DOA_REG, // Default: "FALSE"
			parameter_enum_t INVERT_CLK_DOB_REG, // Default: "FALSE"
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_string_t RAM_EXTENSION_A, // Default: "NONE"
			parameter_string_t RAM_EXTENSION_B, // Default: "NONE"
			parameter_int_t READ_WIDTH_A, // Default: 0
			parameter_int_t READ_WIDTH_B, // Default: 0
			parameter_int_t SETUP_ALL, // Default: 1000
			parameter_int_t SETUP_READ_FIRST, // Default: 3000
			parameter_string_t SIM_COLLISION_CHECK, // Default: "ALL"
			parameter_int_t SRVAL_A, // Default: 36'h0
			parameter_int_t SRVAL_B, // Default: 36'h0
			parameter_string_t WRITE_MODE_A, // Default: "WRITE_FIRST"
			parameter_string_t WRITE_MODE_B, // Default: "WRITE_FIRST"
			parameter_int_t WRITE_WIDTH_A, // Default: 0
			parameter_int_t WRITE_WIDTH_B, // Default: 0
			//Verilog Ports in definition order:
			NetFlow* CASCADEOUTA_A0_B, // net ID: CASCADEOUTA lsb: 0  msb: 0 OUTPUT
			NetFlow* CASCADEOUTB_A0_B, // net ID: CASCADEOUTB lsb: 0  msb: 0 OUTPUT
			NetFlow* DOA_A31_B, // net ID: DOA lsb: 0  msb: 31 OUTPUT
			NetFlow* DOA_A30_B, // net ID: DOA lsb: 0  msb: 31 OUTPUT
			NetFlow* DOA_A29_B, // net ID: DOA lsb: 0  msb: 31 OUTPUT
			NetFlow* DOA_A28_B, // net ID: DOA lsb: 0  msb: 31 OUTPUT
			NetFlow* DOA_A27_B, // net ID: DOA lsb: 0  msb: 31 OUTPUT
			NetFlow* DOA_A26_B, // net ID: DOA lsb: 0  msb: 31 OUTPUT
			NetFlow* DOA_A25_B, // net ID: DOA lsb: 0  msb: 31 OUTPUT
			NetFlow* DOA_A24_B, // net ID: DOA lsb: 0  msb: 31 OUTPUT
			NetFlow* DOA_A23_B, // net ID: DOA lsb: 0  msb: 31 OUTPUT
			NetFlow* DOA_A22_B, // net ID: DOA lsb: 0  msb: 31 OUTPUT
			NetFlow* DOA_A21_B, // net ID: DOA lsb: 0  msb: 31 OUTPUT
			NetFlow* DOA_A20_B, // net ID: DOA lsb: 0  msb: 31 OUTPUT
			NetFlow* DOA_A19_B, // net ID: DOA lsb: 0  msb: 31 OUTPUT
			NetFlow* DOA_A18_B, // net ID: DOA lsb: 0  msb: 31 OUTPUT
			NetFlow* DOA_A17_B, // net ID: DOA lsb: 0  msb: 31 OUTPUT
			NetFlow* DOA_A16_B, // net ID: DOA lsb: 0  msb: 31 OUTPUT
			NetFlow* DOA_A15_B, // net ID: DOA lsb: 0  msb: 31 OUTPUT
			NetFlow* DOA_A14_B, // net ID: DOA lsb: 0  msb: 31 OUTPUT
			NetFlow* DOA_A13_B, // net ID: DOA lsb: 0  msb: 31 OUTPUT
			NetFlow* DOA_A12_B, // net ID: DOA lsb: 0  msb: 31 OUTPUT
			NetFlow* DOA_A11_B, // net ID: DOA lsb: 0  msb: 31 OUTPUT
			NetFlow* DOA_A10_B, // net ID: DOA lsb: 0  msb: 31 OUTPUT
			NetFlow* DOA_A9_B, // net ID: DOA lsb: 0  msb: 31 OUTPUT
			NetFlow* DOA_A8_B, // net ID: DOA lsb: 0  msb: 31 OUTPUT
			NetFlow* DOA_A7_B, // net ID: DOA lsb: 0  msb: 31 OUTPUT
			NetFlow* DOA_A6_B, // net ID: DOA lsb: 0  msb: 31 OUTPUT
			NetFlow* DOA_A5_B, // net ID: DOA lsb: 0  msb: 31 OUTPUT
			NetFlow* DOA_A4_B, // net ID: DOA lsb: 0  msb: 31 OUTPUT
			NetFlow* DOA_A3_B, // net ID: DOA lsb: 0  msb: 31 OUTPUT
			NetFlow* DOA_A2_B, // net ID: DOA lsb: 0  msb: 31 OUTPUT
			NetFlow* DOA_A1_B, // net ID: DOA lsb: 0  msb: 31 OUTPUT
			NetFlow* DOA_A0_B, // net ID: DOA lsb: 0  msb: 31 OUTPUT
			NetFlow* DOB_A31_B, // net ID: DOB lsb: 0  msb: 31 OUTPUT
			NetFlow* DOB_A30_B, // net ID: DOB lsb: 0  msb: 31 OUTPUT
			NetFlow* DOB_A29_B, // net ID: DOB lsb: 0  msb: 31 OUTPUT
			NetFlow* DOB_A28_B, // net ID: DOB lsb: 0  msb: 31 OUTPUT
			NetFlow* DOB_A27_B, // net ID: DOB lsb: 0  msb: 31 OUTPUT
			NetFlow* DOB_A26_B, // net ID: DOB lsb: 0  msb: 31 OUTPUT
			NetFlow* DOB_A25_B, // net ID: DOB lsb: 0  msb: 31 OUTPUT
			NetFlow* DOB_A24_B, // net ID: DOB lsb: 0  msb: 31 OUTPUT
			NetFlow* DOB_A23_B, // net ID: DOB lsb: 0  msb: 31 OUTPUT
			NetFlow* DOB_A22_B, // net ID: DOB lsb: 0  msb: 31 OUTPUT
			NetFlow* DOB_A21_B, // net ID: DOB lsb: 0  msb: 31 OUTPUT
			NetFlow* DOB_A20_B, // net ID: DOB lsb: 0  msb: 31 OUTPUT
			NetFlow* DOB_A19_B, // net ID: DOB lsb: 0  msb: 31 OUTPUT
			NetFlow* DOB_A18_B, // net ID: DOB lsb: 0  msb: 31 OUTPUT
			NetFlow* DOB_A17_B, // net ID: DOB lsb: 0  msb: 31 OUTPUT
			NetFlow* DOB_A16_B, // net ID: DOB lsb: 0  msb: 31 OUTPUT
			NetFlow* DOB_A15_B, // net ID: DOB lsb: 0  msb: 31 OUTPUT
			NetFlow* DOB_A14_B, // net ID: DOB lsb: 0  msb: 31 OUTPUT
			NetFlow* DOB_A13_B, // net ID: DOB lsb: 0  msb: 31 OUTPUT
			NetFlow* DOB_A12_B, // net ID: DOB lsb: 0  msb: 31 OUTPUT
			NetFlow* DOB_A11_B, // net ID: DOB lsb: 0  msb: 31 OUTPUT
			NetFlow* DOB_A10_B, // net ID: DOB lsb: 0  msb: 31 OUTPUT
			NetFlow* DOB_A9_B, // net ID: DOB lsb: 0  msb: 31 OUTPUT
			NetFlow* DOB_A8_B, // net ID: DOB lsb: 0  msb: 31 OUTPUT
			NetFlow* DOB_A7_B, // net ID: DOB lsb: 0  msb: 31 OUTPUT
			NetFlow* DOB_A6_B, // net ID: DOB lsb: 0  msb: 31 OUTPUT
			NetFlow* DOB_A5_B, // net ID: DOB lsb: 0  msb: 31 OUTPUT
			NetFlow* DOB_A4_B, // net ID: DOB lsb: 0  msb: 31 OUTPUT
			NetFlow* DOB_A3_B, // net ID: DOB lsb: 0  msb: 31 OUTPUT
			NetFlow* DOB_A2_B, // net ID: DOB lsb: 0  msb: 31 OUTPUT
			NetFlow* DOB_A1_B, // net ID: DOB lsb: 0  msb: 31 OUTPUT
			NetFlow* DOB_A0_B, // net ID: DOB lsb: 0  msb: 31 OUTPUT
			NetFlow* DOPA_A3_B, // net ID: DOPA lsb: 0  msb: 3 OUTPUT
			NetFlow* DOPA_A2_B, // net ID: DOPA lsb: 0  msb: 3 OUTPUT
			NetFlow* DOPA_A1_B, // net ID: DOPA lsb: 0  msb: 3 OUTPUT
			NetFlow* DOPA_A0_B, // net ID: DOPA lsb: 0  msb: 3 OUTPUT
			NetFlow* DOPB_A3_B, // net ID: DOPB lsb: 0  msb: 3 OUTPUT
			NetFlow* DOPB_A2_B, // net ID: DOPB lsb: 0  msb: 3 OUTPUT
			NetFlow* DOPB_A1_B, // net ID: DOPB lsb: 0  msb: 3 OUTPUT
			NetFlow* DOPB_A0_B, // net ID: DOPB lsb: 0  msb: 3 OUTPUT
			NetFlow* ADDRA_A14_B, // net ID: ADDRA lsb: 0  msb: 14 INPUT
			NetFlow* ADDRA_A13_B, // net ID: ADDRA lsb: 0  msb: 14 INPUT
			NetFlow* ADDRA_A12_B, // net ID: ADDRA lsb: 0  msb: 14 INPUT
			NetFlow* ADDRA_A11_B, // net ID: ADDRA lsb: 0  msb: 14 INPUT
			NetFlow* ADDRA_A10_B, // net ID: ADDRA lsb: 0  msb: 14 INPUT
			NetFlow* ADDRA_A9_B, // net ID: ADDRA lsb: 0  msb: 14 INPUT
			NetFlow* ADDRA_A8_B, // net ID: ADDRA lsb: 0  msb: 14 INPUT
			NetFlow* ADDRA_A7_B, // net ID: ADDRA lsb: 0  msb: 14 INPUT
			NetFlow* ADDRA_A6_B, // net ID: ADDRA lsb: 0  msb: 14 INPUT
			NetFlow* ADDRA_A5_B, // net ID: ADDRA lsb: 0  msb: 14 INPUT
			NetFlow* ADDRA_A4_B, // net ID: ADDRA lsb: 0  msb: 14 INPUT
			NetFlow* ADDRA_A3_B, // net ID: ADDRA lsb: 0  msb: 14 INPUT
			NetFlow* ADDRA_A2_B, // net ID: ADDRA lsb: 0  msb: 14 INPUT
			NetFlow* ADDRA_A1_B, // net ID: ADDRA lsb: 0  msb: 14 INPUT
			NetFlow* ADDRA_A0_B, // net ID: ADDRA lsb: 0  msb: 14 INPUT
			NetFlow* ADDRB_A14_B, // net ID: ADDRB lsb: 0  msb: 14 INPUT
			NetFlow* ADDRB_A13_B, // net ID: ADDRB lsb: 0  msb: 14 INPUT
			NetFlow* ADDRB_A12_B, // net ID: ADDRB lsb: 0  msb: 14 INPUT
			NetFlow* ADDRB_A11_B, // net ID: ADDRB lsb: 0  msb: 14 INPUT
			NetFlow* ADDRB_A10_B, // net ID: ADDRB lsb: 0  msb: 14 INPUT
			NetFlow* ADDRB_A9_B, // net ID: ADDRB lsb: 0  msb: 14 INPUT
			NetFlow* ADDRB_A8_B, // net ID: ADDRB lsb: 0  msb: 14 INPUT
			NetFlow* ADDRB_A7_B, // net ID: ADDRB lsb: 0  msb: 14 INPUT
			NetFlow* ADDRB_A6_B, // net ID: ADDRB lsb: 0  msb: 14 INPUT
			NetFlow* ADDRB_A5_B, // net ID: ADDRB lsb: 0  msb: 14 INPUT
			NetFlow* ADDRB_A4_B, // net ID: ADDRB lsb: 0  msb: 14 INPUT
			NetFlow* ADDRB_A3_B, // net ID: ADDRB lsb: 0  msb: 14 INPUT
			NetFlow* ADDRB_A2_B, // net ID: ADDRB lsb: 0  msb: 14 INPUT
			NetFlow* ADDRB_A1_B, // net ID: ADDRB lsb: 0  msb: 14 INPUT
			NetFlow* ADDRB_A0_B, // net ID: ADDRB lsb: 0  msb: 14 INPUT
			NetFlow* CASCADEINA_A0_B, // net ID: CASCADEINA lsb: 0  msb: 0 INPUT
			NetFlow* CASCADEINB_A0_B, // net ID: CASCADEINB lsb: 0  msb: 0 INPUT
			NetFlow* CLKA_A0_B, // net ID: CLKA lsb: 0  msb: 0 INPUT
			NetFlow* CLKB_A0_B, // net ID: CLKB lsb: 0  msb: 0 INPUT
			NetFlow* DIA_A31_B, // net ID: DIA lsb: 0  msb: 31 INPUT
			NetFlow* DIA_A30_B, // net ID: DIA lsb: 0  msb: 31 INPUT
			NetFlow* DIA_A29_B, // net ID: DIA lsb: 0  msb: 31 INPUT
			NetFlow* DIA_A28_B, // net ID: DIA lsb: 0  msb: 31 INPUT
			NetFlow* DIA_A27_B, // net ID: DIA lsb: 0  msb: 31 INPUT
			NetFlow* DIA_A26_B, // net ID: DIA lsb: 0  msb: 31 INPUT
			NetFlow* DIA_A25_B, // net ID: DIA lsb: 0  msb: 31 INPUT
			NetFlow* DIA_A24_B, // net ID: DIA lsb: 0  msb: 31 INPUT
			NetFlow* DIA_A23_B, // net ID: DIA lsb: 0  msb: 31 INPUT
			NetFlow* DIA_A22_B, // net ID: DIA lsb: 0  msb: 31 INPUT
			NetFlow* DIA_A21_B, // net ID: DIA lsb: 0  msb: 31 INPUT
			NetFlow* DIA_A20_B, // net ID: DIA lsb: 0  msb: 31 INPUT
			NetFlow* DIA_A19_B, // net ID: DIA lsb: 0  msb: 31 INPUT
			NetFlow* DIA_A18_B, // net ID: DIA lsb: 0  msb: 31 INPUT
			NetFlow* DIA_A17_B, // net ID: DIA lsb: 0  msb: 31 INPUT
			NetFlow* DIA_A16_B, // net ID: DIA lsb: 0  msb: 31 INPUT
			NetFlow* DIA_A15_B, // net ID: DIA lsb: 0  msb: 31 INPUT
			NetFlow* DIA_A14_B, // net ID: DIA lsb: 0  msb: 31 INPUT
			NetFlow* DIA_A13_B, // net ID: DIA lsb: 0  msb: 31 INPUT
			NetFlow* DIA_A12_B, // net ID: DIA lsb: 0  msb: 31 INPUT
			NetFlow* DIA_A11_B, // net ID: DIA lsb: 0  msb: 31 INPUT
			NetFlow* DIA_A10_B, // net ID: DIA lsb: 0  msb: 31 INPUT
			NetFlow* DIA_A9_B, // net ID: DIA lsb: 0  msb: 31 INPUT
			NetFlow* DIA_A8_B, // net ID: DIA lsb: 0  msb: 31 INPUT
			NetFlow* DIA_A7_B, // net ID: DIA lsb: 0  msb: 31 INPUT
			NetFlow* DIA_A6_B, // net ID: DIA lsb: 0  msb: 31 INPUT
			NetFlow* DIA_A5_B, // net ID: DIA lsb: 0  msb: 31 INPUT
			NetFlow* DIA_A4_B, // net ID: DIA lsb: 0  msb: 31 INPUT
			NetFlow* DIA_A3_B, // net ID: DIA lsb: 0  msb: 31 INPUT
			NetFlow* DIA_A2_B, // net ID: DIA lsb: 0  msb: 31 INPUT
			NetFlow* DIA_A1_B, // net ID: DIA lsb: 0  msb: 31 INPUT
			NetFlow* DIA_A0_B, // net ID: DIA lsb: 0  msb: 31 INPUT
			NetFlow* DIB_A31_B, // net ID: DIB lsb: 0  msb: 31 INPUT
			NetFlow* DIB_A30_B, // net ID: DIB lsb: 0  msb: 31 INPUT
			NetFlow* DIB_A29_B, // net ID: DIB lsb: 0  msb: 31 INPUT
			NetFlow* DIB_A28_B, // net ID: DIB lsb: 0  msb: 31 INPUT
			NetFlow* DIB_A27_B, // net ID: DIB lsb: 0  msb: 31 INPUT
			NetFlow* DIB_A26_B, // net ID: DIB lsb: 0  msb: 31 INPUT
			NetFlow* DIB_A25_B, // net ID: DIB lsb: 0  msb: 31 INPUT
			NetFlow* DIB_A24_B, // net ID: DIB lsb: 0  msb: 31 INPUT
			NetFlow* DIB_A23_B, // net ID: DIB lsb: 0  msb: 31 INPUT
			NetFlow* DIB_A22_B, // net ID: DIB lsb: 0  msb: 31 INPUT
			NetFlow* DIB_A21_B, // net ID: DIB lsb: 0  msb: 31 INPUT
			NetFlow* DIB_A20_B, // net ID: DIB lsb: 0  msb: 31 INPUT
			NetFlow* DIB_A19_B, // net ID: DIB lsb: 0  msb: 31 INPUT
			NetFlow* DIB_A18_B, // net ID: DIB lsb: 0  msb: 31 INPUT
			NetFlow* DIB_A17_B, // net ID: DIB lsb: 0  msb: 31 INPUT
			NetFlow* DIB_A16_B, // net ID: DIB lsb: 0  msb: 31 INPUT
			NetFlow* DIB_A15_B, // net ID: DIB lsb: 0  msb: 31 INPUT
			NetFlow* DIB_A14_B, // net ID: DIB lsb: 0  msb: 31 INPUT
			NetFlow* DIB_A13_B, // net ID: DIB lsb: 0  msb: 31 INPUT
			NetFlow* DIB_A12_B, // net ID: DIB lsb: 0  msb: 31 INPUT
			NetFlow* DIB_A11_B, // net ID: DIB lsb: 0  msb: 31 INPUT
			NetFlow* DIB_A10_B, // net ID: DIB lsb: 0  msb: 31 INPUT
			NetFlow* DIB_A9_B, // net ID: DIB lsb: 0  msb: 31 INPUT
			NetFlow* DIB_A8_B, // net ID: DIB lsb: 0  msb: 31 INPUT
			NetFlow* DIB_A7_B, // net ID: DIB lsb: 0  msb: 31 INPUT
			NetFlow* DIB_A6_B, // net ID: DIB lsb: 0  msb: 31 INPUT
			NetFlow* DIB_A5_B, // net ID: DIB lsb: 0  msb: 31 INPUT
			NetFlow* DIB_A4_B, // net ID: DIB lsb: 0  msb: 31 INPUT
			NetFlow* DIB_A3_B, // net ID: DIB lsb: 0  msb: 31 INPUT
			NetFlow* DIB_A2_B, // net ID: DIB lsb: 0  msb: 31 INPUT
			NetFlow* DIB_A1_B, // net ID: DIB lsb: 0  msb: 31 INPUT
			NetFlow* DIB_A0_B, // net ID: DIB lsb: 0  msb: 31 INPUT
			NetFlow* DIPA_A3_B, // net ID: DIPA lsb: 0  msb: 3 INPUT
			NetFlow* DIPA_A2_B, // net ID: DIPA lsb: 0  msb: 3 INPUT
			NetFlow* DIPA_A1_B, // net ID: DIPA lsb: 0  msb: 3 INPUT
			NetFlow* DIPA_A0_B, // net ID: DIPA lsb: 0  msb: 3 INPUT
			NetFlow* DIPB_A3_B, // net ID: DIPB lsb: 0  msb: 3 INPUT
			NetFlow* DIPB_A2_B, // net ID: DIPB lsb: 0  msb: 3 INPUT
			NetFlow* DIPB_A1_B, // net ID: DIPB lsb: 0  msb: 3 INPUT
			NetFlow* DIPB_A0_B, // net ID: DIPB lsb: 0  msb: 3 INPUT
			NetFlow* ENA_A0_B, // net ID: ENA lsb: 0  msb: 0 INPUT
			NetFlow* ENB_A0_B, // net ID: ENB lsb: 0  msb: 0 INPUT
			NetFlow* REGCEA_A0_B, // net ID: REGCEA lsb: 0  msb: 0 INPUT
			NetFlow* REGCEB_A0_B, // net ID: REGCEB lsb: 0  msb: 0 INPUT
			NetFlow* SSRA_A0_B, // net ID: SSRA lsb: 0  msb: 0 INPUT
			NetFlow* SSRB_A0_B, // net ID: SSRB lsb: 0  msb: 0 INPUT
			NetFlow* WEA_A3_B, // net ID: WEA lsb: 0  msb: 3 INPUT
			NetFlow* WEA_A2_B, // net ID: WEA lsb: 0  msb: 3 INPUT
			NetFlow* WEA_A1_B, // net ID: WEA lsb: 0  msb: 3 INPUT
			NetFlow* WEA_A0_B, // net ID: WEA lsb: 0  msb: 3 INPUT
			NetFlow* WEB_A3_B, // net ID: WEB lsb: 0  msb: 3 INPUT
			NetFlow* WEB_A2_B, // net ID: WEB lsb: 0  msb: 3 INPUT
			NetFlow* WEB_A1_B, // net ID: WEB lsb: 0  msb: 3 INPUT
			NetFlow* WEB_A0_B // net ID: WEB lsb: 0  msb: 3 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->DOA_REG = DOA_REG; // Default: 0
			this->DOB_REG = DOB_REG; // Default: 0
			this->EN_ECC_READ = EN_ECC_READ; // Default: "FALSE"
			this->EN_ECC_WRITE = EN_ECC_WRITE; // Default: "FALSE"
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
			this->INIT_A = INIT_A; // Default: 36'h0
			this->INIT_B = INIT_B; // Default: 36'h0
			this->INIT_FILE = INIT_FILE; // Default: "NONE"
			this->INVERT_CLK_DOA_REG = INVERT_CLK_DOA_REG; // Default: "FALSE"
			this->INVERT_CLK_DOB_REG = INVERT_CLK_DOB_REG; // Default: "FALSE"
			this->LOC = LOC; // Default: "UNPLACED"
			this->RAM_EXTENSION_A = RAM_EXTENSION_A; // Default: "NONE"
			this->RAM_EXTENSION_B = RAM_EXTENSION_B; // Default: "NONE"
			this->READ_WIDTH_A = READ_WIDTH_A; // Default: 0
			this->READ_WIDTH_B = READ_WIDTH_B; // Default: 0
			this->SETUP_ALL = SETUP_ALL; // Default: 1000
			this->SETUP_READ_FIRST = SETUP_READ_FIRST; // Default: 3000
			this->SIM_COLLISION_CHECK = SIM_COLLISION_CHECK; // Default: "ALL"
			this->SRVAL_A = SRVAL_A; // Default: 36'h0
			this->SRVAL_B = SRVAL_B; // Default: 36'h0
			this->WRITE_MODE_A = WRITE_MODE_A; // Default: "WRITE_FIRST"
			this->WRITE_MODE_B = WRITE_MODE_B; // Default: "WRITE_FIRST"
			this->WRITE_WIDTH_A = WRITE_WIDTH_A; // Default: 0
			this->WRITE_WIDTH_B = WRITE_WIDTH_B; // Default: 0
			//Verilog Ports in definition order:
			this->CASCADEOUTA_A0_B = CASCADEOUTA_A0_B; // net ID: CASCADEOUTA lsb: 0  msb: 0 OUTPUT
			this->CASCADEOUTB_A0_B = CASCADEOUTB_A0_B; // net ID: CASCADEOUTB lsb: 0  msb: 0 OUTPUT
			this->DOA_A31_B = DOA_A31_B; // net ID: DOA lsb: 0  msb: 31 OUTPUT
			this->DOA_A30_B = DOA_A30_B; // net ID: DOA lsb: 0  msb: 31 OUTPUT
			this->DOA_A29_B = DOA_A29_B; // net ID: DOA lsb: 0  msb: 31 OUTPUT
			this->DOA_A28_B = DOA_A28_B; // net ID: DOA lsb: 0  msb: 31 OUTPUT
			this->DOA_A27_B = DOA_A27_B; // net ID: DOA lsb: 0  msb: 31 OUTPUT
			this->DOA_A26_B = DOA_A26_B; // net ID: DOA lsb: 0  msb: 31 OUTPUT
			this->DOA_A25_B = DOA_A25_B; // net ID: DOA lsb: 0  msb: 31 OUTPUT
			this->DOA_A24_B = DOA_A24_B; // net ID: DOA lsb: 0  msb: 31 OUTPUT
			this->DOA_A23_B = DOA_A23_B; // net ID: DOA lsb: 0  msb: 31 OUTPUT
			this->DOA_A22_B = DOA_A22_B; // net ID: DOA lsb: 0  msb: 31 OUTPUT
			this->DOA_A21_B = DOA_A21_B; // net ID: DOA lsb: 0  msb: 31 OUTPUT
			this->DOA_A20_B = DOA_A20_B; // net ID: DOA lsb: 0  msb: 31 OUTPUT
			this->DOA_A19_B = DOA_A19_B; // net ID: DOA lsb: 0  msb: 31 OUTPUT
			this->DOA_A18_B = DOA_A18_B; // net ID: DOA lsb: 0  msb: 31 OUTPUT
			this->DOA_A17_B = DOA_A17_B; // net ID: DOA lsb: 0  msb: 31 OUTPUT
			this->DOA_A16_B = DOA_A16_B; // net ID: DOA lsb: 0  msb: 31 OUTPUT
			this->DOA_A15_B = DOA_A15_B; // net ID: DOA lsb: 0  msb: 31 OUTPUT
			this->DOA_A14_B = DOA_A14_B; // net ID: DOA lsb: 0  msb: 31 OUTPUT
			this->DOA_A13_B = DOA_A13_B; // net ID: DOA lsb: 0  msb: 31 OUTPUT
			this->DOA_A12_B = DOA_A12_B; // net ID: DOA lsb: 0  msb: 31 OUTPUT
			this->DOA_A11_B = DOA_A11_B; // net ID: DOA lsb: 0  msb: 31 OUTPUT
			this->DOA_A10_B = DOA_A10_B; // net ID: DOA lsb: 0  msb: 31 OUTPUT
			this->DOA_A9_B = DOA_A9_B; // net ID: DOA lsb: 0  msb: 31 OUTPUT
			this->DOA_A8_B = DOA_A8_B; // net ID: DOA lsb: 0  msb: 31 OUTPUT
			this->DOA_A7_B = DOA_A7_B; // net ID: DOA lsb: 0  msb: 31 OUTPUT
			this->DOA_A6_B = DOA_A6_B; // net ID: DOA lsb: 0  msb: 31 OUTPUT
			this->DOA_A5_B = DOA_A5_B; // net ID: DOA lsb: 0  msb: 31 OUTPUT
			this->DOA_A4_B = DOA_A4_B; // net ID: DOA lsb: 0  msb: 31 OUTPUT
			this->DOA_A3_B = DOA_A3_B; // net ID: DOA lsb: 0  msb: 31 OUTPUT
			this->DOA_A2_B = DOA_A2_B; // net ID: DOA lsb: 0  msb: 31 OUTPUT
			this->DOA_A1_B = DOA_A1_B; // net ID: DOA lsb: 0  msb: 31 OUTPUT
			this->DOA_A0_B = DOA_A0_B; // net ID: DOA lsb: 0  msb: 31 OUTPUT
			this->DOB_A31_B = DOB_A31_B; // net ID: DOB lsb: 0  msb: 31 OUTPUT
			this->DOB_A30_B = DOB_A30_B; // net ID: DOB lsb: 0  msb: 31 OUTPUT
			this->DOB_A29_B = DOB_A29_B; // net ID: DOB lsb: 0  msb: 31 OUTPUT
			this->DOB_A28_B = DOB_A28_B; // net ID: DOB lsb: 0  msb: 31 OUTPUT
			this->DOB_A27_B = DOB_A27_B; // net ID: DOB lsb: 0  msb: 31 OUTPUT
			this->DOB_A26_B = DOB_A26_B; // net ID: DOB lsb: 0  msb: 31 OUTPUT
			this->DOB_A25_B = DOB_A25_B; // net ID: DOB lsb: 0  msb: 31 OUTPUT
			this->DOB_A24_B = DOB_A24_B; // net ID: DOB lsb: 0  msb: 31 OUTPUT
			this->DOB_A23_B = DOB_A23_B; // net ID: DOB lsb: 0  msb: 31 OUTPUT
			this->DOB_A22_B = DOB_A22_B; // net ID: DOB lsb: 0  msb: 31 OUTPUT
			this->DOB_A21_B = DOB_A21_B; // net ID: DOB lsb: 0  msb: 31 OUTPUT
			this->DOB_A20_B = DOB_A20_B; // net ID: DOB lsb: 0  msb: 31 OUTPUT
			this->DOB_A19_B = DOB_A19_B; // net ID: DOB lsb: 0  msb: 31 OUTPUT
			this->DOB_A18_B = DOB_A18_B; // net ID: DOB lsb: 0  msb: 31 OUTPUT
			this->DOB_A17_B = DOB_A17_B; // net ID: DOB lsb: 0  msb: 31 OUTPUT
			this->DOB_A16_B = DOB_A16_B; // net ID: DOB lsb: 0  msb: 31 OUTPUT
			this->DOB_A15_B = DOB_A15_B; // net ID: DOB lsb: 0  msb: 31 OUTPUT
			this->DOB_A14_B = DOB_A14_B; // net ID: DOB lsb: 0  msb: 31 OUTPUT
			this->DOB_A13_B = DOB_A13_B; // net ID: DOB lsb: 0  msb: 31 OUTPUT
			this->DOB_A12_B = DOB_A12_B; // net ID: DOB lsb: 0  msb: 31 OUTPUT
			this->DOB_A11_B = DOB_A11_B; // net ID: DOB lsb: 0  msb: 31 OUTPUT
			this->DOB_A10_B = DOB_A10_B; // net ID: DOB lsb: 0  msb: 31 OUTPUT
			this->DOB_A9_B = DOB_A9_B; // net ID: DOB lsb: 0  msb: 31 OUTPUT
			this->DOB_A8_B = DOB_A8_B; // net ID: DOB lsb: 0  msb: 31 OUTPUT
			this->DOB_A7_B = DOB_A7_B; // net ID: DOB lsb: 0  msb: 31 OUTPUT
			this->DOB_A6_B = DOB_A6_B; // net ID: DOB lsb: 0  msb: 31 OUTPUT
			this->DOB_A5_B = DOB_A5_B; // net ID: DOB lsb: 0  msb: 31 OUTPUT
			this->DOB_A4_B = DOB_A4_B; // net ID: DOB lsb: 0  msb: 31 OUTPUT
			this->DOB_A3_B = DOB_A3_B; // net ID: DOB lsb: 0  msb: 31 OUTPUT
			this->DOB_A2_B = DOB_A2_B; // net ID: DOB lsb: 0  msb: 31 OUTPUT
			this->DOB_A1_B = DOB_A1_B; // net ID: DOB lsb: 0  msb: 31 OUTPUT
			this->DOB_A0_B = DOB_A0_B; // net ID: DOB lsb: 0  msb: 31 OUTPUT
			this->DOPA_A3_B = DOPA_A3_B; // net ID: DOPA lsb: 0  msb: 3 OUTPUT
			this->DOPA_A2_B = DOPA_A2_B; // net ID: DOPA lsb: 0  msb: 3 OUTPUT
			this->DOPA_A1_B = DOPA_A1_B; // net ID: DOPA lsb: 0  msb: 3 OUTPUT
			this->DOPA_A0_B = DOPA_A0_B; // net ID: DOPA lsb: 0  msb: 3 OUTPUT
			this->DOPB_A3_B = DOPB_A3_B; // net ID: DOPB lsb: 0  msb: 3 OUTPUT
			this->DOPB_A2_B = DOPB_A2_B; // net ID: DOPB lsb: 0  msb: 3 OUTPUT
			this->DOPB_A1_B = DOPB_A1_B; // net ID: DOPB lsb: 0  msb: 3 OUTPUT
			this->DOPB_A0_B = DOPB_A0_B; // net ID: DOPB lsb: 0  msb: 3 OUTPUT
			this->ADDRA_A14_B = ADDRA_A14_B; // net ID: ADDRA lsb: 0  msb: 14 INPUT
			this->ADDRA_A13_B = ADDRA_A13_B; // net ID: ADDRA lsb: 0  msb: 14 INPUT
			this->ADDRA_A12_B = ADDRA_A12_B; // net ID: ADDRA lsb: 0  msb: 14 INPUT
			this->ADDRA_A11_B = ADDRA_A11_B; // net ID: ADDRA lsb: 0  msb: 14 INPUT
			this->ADDRA_A10_B = ADDRA_A10_B; // net ID: ADDRA lsb: 0  msb: 14 INPUT
			this->ADDRA_A9_B = ADDRA_A9_B; // net ID: ADDRA lsb: 0  msb: 14 INPUT
			this->ADDRA_A8_B = ADDRA_A8_B; // net ID: ADDRA lsb: 0  msb: 14 INPUT
			this->ADDRA_A7_B = ADDRA_A7_B; // net ID: ADDRA lsb: 0  msb: 14 INPUT
			this->ADDRA_A6_B = ADDRA_A6_B; // net ID: ADDRA lsb: 0  msb: 14 INPUT
			this->ADDRA_A5_B = ADDRA_A5_B; // net ID: ADDRA lsb: 0  msb: 14 INPUT
			this->ADDRA_A4_B = ADDRA_A4_B; // net ID: ADDRA lsb: 0  msb: 14 INPUT
			this->ADDRA_A3_B = ADDRA_A3_B; // net ID: ADDRA lsb: 0  msb: 14 INPUT
			this->ADDRA_A2_B = ADDRA_A2_B; // net ID: ADDRA lsb: 0  msb: 14 INPUT
			this->ADDRA_A1_B = ADDRA_A1_B; // net ID: ADDRA lsb: 0  msb: 14 INPUT
			this->ADDRA_A0_B = ADDRA_A0_B; // net ID: ADDRA lsb: 0  msb: 14 INPUT
			this->ADDRB_A14_B = ADDRB_A14_B; // net ID: ADDRB lsb: 0  msb: 14 INPUT
			this->ADDRB_A13_B = ADDRB_A13_B; // net ID: ADDRB lsb: 0  msb: 14 INPUT
			this->ADDRB_A12_B = ADDRB_A12_B; // net ID: ADDRB lsb: 0  msb: 14 INPUT
			this->ADDRB_A11_B = ADDRB_A11_B; // net ID: ADDRB lsb: 0  msb: 14 INPUT
			this->ADDRB_A10_B = ADDRB_A10_B; // net ID: ADDRB lsb: 0  msb: 14 INPUT
			this->ADDRB_A9_B = ADDRB_A9_B; // net ID: ADDRB lsb: 0  msb: 14 INPUT
			this->ADDRB_A8_B = ADDRB_A8_B; // net ID: ADDRB lsb: 0  msb: 14 INPUT
			this->ADDRB_A7_B = ADDRB_A7_B; // net ID: ADDRB lsb: 0  msb: 14 INPUT
			this->ADDRB_A6_B = ADDRB_A6_B; // net ID: ADDRB lsb: 0  msb: 14 INPUT
			this->ADDRB_A5_B = ADDRB_A5_B; // net ID: ADDRB lsb: 0  msb: 14 INPUT
			this->ADDRB_A4_B = ADDRB_A4_B; // net ID: ADDRB lsb: 0  msb: 14 INPUT
			this->ADDRB_A3_B = ADDRB_A3_B; // net ID: ADDRB lsb: 0  msb: 14 INPUT
			this->ADDRB_A2_B = ADDRB_A2_B; // net ID: ADDRB lsb: 0  msb: 14 INPUT
			this->ADDRB_A1_B = ADDRB_A1_B; // net ID: ADDRB lsb: 0  msb: 14 INPUT
			this->ADDRB_A0_B = ADDRB_A0_B; // net ID: ADDRB lsb: 0  msb: 14 INPUT
			this->CASCADEINA_A0_B = CASCADEINA_A0_B; // net ID: CASCADEINA lsb: 0  msb: 0 INPUT
			this->CASCADEINB_A0_B = CASCADEINB_A0_B; // net ID: CASCADEINB lsb: 0  msb: 0 INPUT
			this->CLKA_A0_B = CLKA_A0_B; // net ID: CLKA lsb: 0  msb: 0 INPUT
			this->CLKB_A0_B = CLKB_A0_B; // net ID: CLKB lsb: 0  msb: 0 INPUT
			this->DIA_A31_B = DIA_A31_B; // net ID: DIA lsb: 0  msb: 31 INPUT
			this->DIA_A30_B = DIA_A30_B; // net ID: DIA lsb: 0  msb: 31 INPUT
			this->DIA_A29_B = DIA_A29_B; // net ID: DIA lsb: 0  msb: 31 INPUT
			this->DIA_A28_B = DIA_A28_B; // net ID: DIA lsb: 0  msb: 31 INPUT
			this->DIA_A27_B = DIA_A27_B; // net ID: DIA lsb: 0  msb: 31 INPUT
			this->DIA_A26_B = DIA_A26_B; // net ID: DIA lsb: 0  msb: 31 INPUT
			this->DIA_A25_B = DIA_A25_B; // net ID: DIA lsb: 0  msb: 31 INPUT
			this->DIA_A24_B = DIA_A24_B; // net ID: DIA lsb: 0  msb: 31 INPUT
			this->DIA_A23_B = DIA_A23_B; // net ID: DIA lsb: 0  msb: 31 INPUT
			this->DIA_A22_B = DIA_A22_B; // net ID: DIA lsb: 0  msb: 31 INPUT
			this->DIA_A21_B = DIA_A21_B; // net ID: DIA lsb: 0  msb: 31 INPUT
			this->DIA_A20_B = DIA_A20_B; // net ID: DIA lsb: 0  msb: 31 INPUT
			this->DIA_A19_B = DIA_A19_B; // net ID: DIA lsb: 0  msb: 31 INPUT
			this->DIA_A18_B = DIA_A18_B; // net ID: DIA lsb: 0  msb: 31 INPUT
			this->DIA_A17_B = DIA_A17_B; // net ID: DIA lsb: 0  msb: 31 INPUT
			this->DIA_A16_B = DIA_A16_B; // net ID: DIA lsb: 0  msb: 31 INPUT
			this->DIA_A15_B = DIA_A15_B; // net ID: DIA lsb: 0  msb: 31 INPUT
			this->DIA_A14_B = DIA_A14_B; // net ID: DIA lsb: 0  msb: 31 INPUT
			this->DIA_A13_B = DIA_A13_B; // net ID: DIA lsb: 0  msb: 31 INPUT
			this->DIA_A12_B = DIA_A12_B; // net ID: DIA lsb: 0  msb: 31 INPUT
			this->DIA_A11_B = DIA_A11_B; // net ID: DIA lsb: 0  msb: 31 INPUT
			this->DIA_A10_B = DIA_A10_B; // net ID: DIA lsb: 0  msb: 31 INPUT
			this->DIA_A9_B = DIA_A9_B; // net ID: DIA lsb: 0  msb: 31 INPUT
			this->DIA_A8_B = DIA_A8_B; // net ID: DIA lsb: 0  msb: 31 INPUT
			this->DIA_A7_B = DIA_A7_B; // net ID: DIA lsb: 0  msb: 31 INPUT
			this->DIA_A6_B = DIA_A6_B; // net ID: DIA lsb: 0  msb: 31 INPUT
			this->DIA_A5_B = DIA_A5_B; // net ID: DIA lsb: 0  msb: 31 INPUT
			this->DIA_A4_B = DIA_A4_B; // net ID: DIA lsb: 0  msb: 31 INPUT
			this->DIA_A3_B = DIA_A3_B; // net ID: DIA lsb: 0  msb: 31 INPUT
			this->DIA_A2_B = DIA_A2_B; // net ID: DIA lsb: 0  msb: 31 INPUT
			this->DIA_A1_B = DIA_A1_B; // net ID: DIA lsb: 0  msb: 31 INPUT
			this->DIA_A0_B = DIA_A0_B; // net ID: DIA lsb: 0  msb: 31 INPUT
			this->DIB_A31_B = DIB_A31_B; // net ID: DIB lsb: 0  msb: 31 INPUT
			this->DIB_A30_B = DIB_A30_B; // net ID: DIB lsb: 0  msb: 31 INPUT
			this->DIB_A29_B = DIB_A29_B; // net ID: DIB lsb: 0  msb: 31 INPUT
			this->DIB_A28_B = DIB_A28_B; // net ID: DIB lsb: 0  msb: 31 INPUT
			this->DIB_A27_B = DIB_A27_B; // net ID: DIB lsb: 0  msb: 31 INPUT
			this->DIB_A26_B = DIB_A26_B; // net ID: DIB lsb: 0  msb: 31 INPUT
			this->DIB_A25_B = DIB_A25_B; // net ID: DIB lsb: 0  msb: 31 INPUT
			this->DIB_A24_B = DIB_A24_B; // net ID: DIB lsb: 0  msb: 31 INPUT
			this->DIB_A23_B = DIB_A23_B; // net ID: DIB lsb: 0  msb: 31 INPUT
			this->DIB_A22_B = DIB_A22_B; // net ID: DIB lsb: 0  msb: 31 INPUT
			this->DIB_A21_B = DIB_A21_B; // net ID: DIB lsb: 0  msb: 31 INPUT
			this->DIB_A20_B = DIB_A20_B; // net ID: DIB lsb: 0  msb: 31 INPUT
			this->DIB_A19_B = DIB_A19_B; // net ID: DIB lsb: 0  msb: 31 INPUT
			this->DIB_A18_B = DIB_A18_B; // net ID: DIB lsb: 0  msb: 31 INPUT
			this->DIB_A17_B = DIB_A17_B; // net ID: DIB lsb: 0  msb: 31 INPUT
			this->DIB_A16_B = DIB_A16_B; // net ID: DIB lsb: 0  msb: 31 INPUT
			this->DIB_A15_B = DIB_A15_B; // net ID: DIB lsb: 0  msb: 31 INPUT
			this->DIB_A14_B = DIB_A14_B; // net ID: DIB lsb: 0  msb: 31 INPUT
			this->DIB_A13_B = DIB_A13_B; // net ID: DIB lsb: 0  msb: 31 INPUT
			this->DIB_A12_B = DIB_A12_B; // net ID: DIB lsb: 0  msb: 31 INPUT
			this->DIB_A11_B = DIB_A11_B; // net ID: DIB lsb: 0  msb: 31 INPUT
			this->DIB_A10_B = DIB_A10_B; // net ID: DIB lsb: 0  msb: 31 INPUT
			this->DIB_A9_B = DIB_A9_B; // net ID: DIB lsb: 0  msb: 31 INPUT
			this->DIB_A8_B = DIB_A8_B; // net ID: DIB lsb: 0  msb: 31 INPUT
			this->DIB_A7_B = DIB_A7_B; // net ID: DIB lsb: 0  msb: 31 INPUT
			this->DIB_A6_B = DIB_A6_B; // net ID: DIB lsb: 0  msb: 31 INPUT
			this->DIB_A5_B = DIB_A5_B; // net ID: DIB lsb: 0  msb: 31 INPUT
			this->DIB_A4_B = DIB_A4_B; // net ID: DIB lsb: 0  msb: 31 INPUT
			this->DIB_A3_B = DIB_A3_B; // net ID: DIB lsb: 0  msb: 31 INPUT
			this->DIB_A2_B = DIB_A2_B; // net ID: DIB lsb: 0  msb: 31 INPUT
			this->DIB_A1_B = DIB_A1_B; // net ID: DIB lsb: 0  msb: 31 INPUT
			this->DIB_A0_B = DIB_A0_B; // net ID: DIB lsb: 0  msb: 31 INPUT
			this->DIPA_A3_B = DIPA_A3_B; // net ID: DIPA lsb: 0  msb: 3 INPUT
			this->DIPA_A2_B = DIPA_A2_B; // net ID: DIPA lsb: 0  msb: 3 INPUT
			this->DIPA_A1_B = DIPA_A1_B; // net ID: DIPA lsb: 0  msb: 3 INPUT
			this->DIPA_A0_B = DIPA_A0_B; // net ID: DIPA lsb: 0  msb: 3 INPUT
			this->DIPB_A3_B = DIPB_A3_B; // net ID: DIPB lsb: 0  msb: 3 INPUT
			this->DIPB_A2_B = DIPB_A2_B; // net ID: DIPB lsb: 0  msb: 3 INPUT
			this->DIPB_A1_B = DIPB_A1_B; // net ID: DIPB lsb: 0  msb: 3 INPUT
			this->DIPB_A0_B = DIPB_A0_B; // net ID: DIPB lsb: 0  msb: 3 INPUT
			this->ENA_A0_B = ENA_A0_B; // net ID: ENA lsb: 0  msb: 0 INPUT
			this->ENB_A0_B = ENB_A0_B; // net ID: ENB lsb: 0  msb: 0 INPUT
			this->REGCEA_A0_B = REGCEA_A0_B; // net ID: REGCEA lsb: 0  msb: 0 INPUT
			this->REGCEB_A0_B = REGCEB_A0_B; // net ID: REGCEB lsb: 0  msb: 0 INPUT
			this->SSRA_A0_B = SSRA_A0_B; // net ID: SSRA lsb: 0  msb: 0 INPUT
			this->SSRB_A0_B = SSRB_A0_B; // net ID: SSRB lsb: 0  msb: 0 INPUT
			this->WEA_A3_B = WEA_A3_B; // net ID: WEA lsb: 0  msb: 3 INPUT
			this->WEA_A2_B = WEA_A2_B; // net ID: WEA lsb: 0  msb: 3 INPUT
			this->WEA_A1_B = WEA_A1_B; // net ID: WEA lsb: 0  msb: 3 INPUT
			this->WEA_A0_B = WEA_A0_B; // net ID: WEA lsb: 0  msb: 3 INPUT
			this->WEB_A3_B = WEB_A3_B; // net ID: WEB lsb: 0  msb: 3 INPUT
			this->WEB_A2_B = WEB_A2_B; // net ID: WEB lsb: 0  msb: 3 INPUT
			this->WEB_A1_B = WEB_A1_B; // net ID: WEB lsb: 0  msb: 3 INPUT
			this->WEB_A0_B = WEB_A0_B; // net ID: WEB lsb: 0  msb: 3 INPUT
			
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
#endif // X_RAMB16_H
