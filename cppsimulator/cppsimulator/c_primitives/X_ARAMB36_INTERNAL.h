/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_ARAMB36_INTERNAL_H
#define X_ARAMB36_INTERNAL_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_ARAMB36_INTERNAL: public Primitive{

		//Verilog Parameters:
		parameter_int_t DOA_REG;
		parameter_int_t DOB_REG;
		parameter_enum_t EN_ECC_READ;
		parameter_enum_t EN_ECC_SCRUB;
		parameter_enum_t EN_ECC_WRITE;
		parameter_int_t INIT_A;
		parameter_int_t INIT_B;
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
		parameter_string_t INIT_FILE;
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
		parameter_int_t INIT_58;
		parameter_int_t INIT_59;
		parameter_int_t INIT_5A;
		parameter_int_t INIT_5B;
		parameter_int_t INIT_5C;
		parameter_int_t INIT_5D;
		parameter_int_t INIT_5E;
		parameter_int_t INIT_5F;
		parameter_int_t INIT_60;
		parameter_int_t INIT_61;
		parameter_int_t INIT_62;
		parameter_int_t INIT_63;
		parameter_int_t INIT_64;
		parameter_int_t INIT_65;
		parameter_int_t INIT_66;
		parameter_int_t INIT_67;
		parameter_int_t INIT_68;
		parameter_int_t INIT_69;
		parameter_int_t INIT_6A;
		parameter_int_t INIT_6B;
		parameter_int_t INIT_6C;
		parameter_int_t INIT_6D;
		parameter_int_t INIT_6E;
		parameter_int_t INIT_6F;
		parameter_int_t INIT_70;
		parameter_int_t INIT_71;
		parameter_int_t INIT_72;
		parameter_int_t INIT_73;
		parameter_int_t INIT_74;
		parameter_int_t INIT_75;
		parameter_int_t INIT_76;
		parameter_int_t INIT_77;
		parameter_int_t INIT_78;
		parameter_int_t INIT_79;
		parameter_int_t INIT_7A;
		parameter_int_t INIT_7B;
		parameter_int_t INIT_7C;
		parameter_int_t INIT_7D;
		parameter_int_t INIT_7E;
		parameter_int_t INIT_7F;
		parameter_int_t INITP_00;
		parameter_int_t INITP_01;
		parameter_int_t INITP_02;
		parameter_int_t INITP_03;
		parameter_int_t INITP_04;
		parameter_int_t INITP_05;
		parameter_int_t INITP_06;
		parameter_int_t INITP_07;
		parameter_int_t INITP_08;
		parameter_int_t INITP_09;
		parameter_int_t INITP_0A;
		parameter_int_t INITP_0B;
		parameter_int_t INITP_0C;
		parameter_int_t INITP_0D;
		parameter_int_t INITP_0E;
		parameter_int_t INITP_0F;
		parameter_string_t BRAM_MODE;
		parameter_int_t BRAM_SIZE;
		//Verilog Ports in definition order:
		NetFlow* CASCADEOUTLATA_A0_B; // net ID: CASCADEOUTLATA lsb: 0  msb: 0 OUTPUT
		NetFlow* CASCADEOUTLATB_A0_B; // net ID: CASCADEOUTLATB lsb: 0  msb: 0 OUTPUT
		NetFlow* CASCADEOUTREGA_A0_B; // net ID: CASCADEOUTREGA lsb: 0  msb: 0 OUTPUT
		NetFlow* CASCADEOUTREGB_A0_B; // net ID: CASCADEOUTREGB lsb: 0  msb: 0 OUTPUT
		NetFlow* DBITERR_A0_B; // net ID: DBITERR lsb: 0  msb: 0 OUTPUT
		NetFlow* DOA_A63_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
		NetFlow* DOA_A62_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
		NetFlow* DOA_A61_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
		NetFlow* DOA_A60_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
		NetFlow* DOA_A59_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
		NetFlow* DOA_A58_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
		NetFlow* DOA_A57_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
		NetFlow* DOA_A56_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
		NetFlow* DOA_A55_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
		NetFlow* DOA_A54_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
		NetFlow* DOA_A53_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
		NetFlow* DOA_A52_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
		NetFlow* DOA_A51_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
		NetFlow* DOA_A50_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
		NetFlow* DOA_A49_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
		NetFlow* DOA_A48_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
		NetFlow* DOA_A47_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
		NetFlow* DOA_A46_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
		NetFlow* DOA_A45_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
		NetFlow* DOA_A44_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
		NetFlow* DOA_A43_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
		NetFlow* DOA_A42_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
		NetFlow* DOA_A41_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
		NetFlow* DOA_A40_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
		NetFlow* DOA_A39_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
		NetFlow* DOA_A38_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
		NetFlow* DOA_A37_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
		NetFlow* DOA_A36_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
		NetFlow* DOA_A35_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
		NetFlow* DOA_A34_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
		NetFlow* DOA_A33_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
		NetFlow* DOA_A32_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
		NetFlow* DOA_A31_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
		NetFlow* DOA_A30_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
		NetFlow* DOA_A29_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
		NetFlow* DOA_A28_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
		NetFlow* DOA_A27_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
		NetFlow* DOA_A26_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
		NetFlow* DOA_A25_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
		NetFlow* DOA_A24_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
		NetFlow* DOA_A23_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
		NetFlow* DOA_A22_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
		NetFlow* DOA_A21_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
		NetFlow* DOA_A20_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
		NetFlow* DOA_A19_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
		NetFlow* DOA_A18_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
		NetFlow* DOA_A17_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
		NetFlow* DOA_A16_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
		NetFlow* DOA_A15_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
		NetFlow* DOA_A14_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
		NetFlow* DOA_A13_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
		NetFlow* DOA_A12_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
		NetFlow* DOA_A11_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
		NetFlow* DOA_A10_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
		NetFlow* DOA_A9_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
		NetFlow* DOA_A8_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
		NetFlow* DOA_A7_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
		NetFlow* DOA_A6_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
		NetFlow* DOA_A5_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
		NetFlow* DOA_A4_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
		NetFlow* DOA_A3_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
		NetFlow* DOA_A2_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
		NetFlow* DOA_A1_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
		NetFlow* DOA_A0_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
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
		NetFlow* DOPA_A7_B; // net ID: DOPA lsb: 0  msb: 7 OUTPUT
		NetFlow* DOPA_A6_B; // net ID: DOPA lsb: 0  msb: 7 OUTPUT
		NetFlow* DOPA_A5_B; // net ID: DOPA lsb: 0  msb: 7 OUTPUT
		NetFlow* DOPA_A4_B; // net ID: DOPA lsb: 0  msb: 7 OUTPUT
		NetFlow* DOPA_A3_B; // net ID: DOPA lsb: 0  msb: 7 OUTPUT
		NetFlow* DOPA_A2_B; // net ID: DOPA lsb: 0  msb: 7 OUTPUT
		NetFlow* DOPA_A1_B; // net ID: DOPA lsb: 0  msb: 7 OUTPUT
		NetFlow* DOPA_A0_B; // net ID: DOPA lsb: 0  msb: 7 OUTPUT
		NetFlow* DOPB_A3_B; // net ID: DOPB lsb: 0  msb: 3 OUTPUT
		NetFlow* DOPB_A2_B; // net ID: DOPB lsb: 0  msb: 3 OUTPUT
		NetFlow* DOPB_A1_B; // net ID: DOPB lsb: 0  msb: 3 OUTPUT
		NetFlow* DOPB_A0_B; // net ID: DOPB lsb: 0  msb: 3 OUTPUT
		NetFlow* ECCPARITY_A7_B; // net ID: ECCPARITY lsb: 0  msb: 7 OUTPUT
		NetFlow* ECCPARITY_A6_B; // net ID: ECCPARITY lsb: 0  msb: 7 OUTPUT
		NetFlow* ECCPARITY_A5_B; // net ID: ECCPARITY lsb: 0  msb: 7 OUTPUT
		NetFlow* ECCPARITY_A4_B; // net ID: ECCPARITY lsb: 0  msb: 7 OUTPUT
		NetFlow* ECCPARITY_A3_B; // net ID: ECCPARITY lsb: 0  msb: 7 OUTPUT
		NetFlow* ECCPARITY_A2_B; // net ID: ECCPARITY lsb: 0  msb: 7 OUTPUT
		NetFlow* ECCPARITY_A1_B; // net ID: ECCPARITY lsb: 0  msb: 7 OUTPUT
		NetFlow* ECCPARITY_A0_B; // net ID: ECCPARITY lsb: 0  msb: 7 OUTPUT
		NetFlow* SBITERR_A0_B; // net ID: SBITERR lsb: 0  msb: 0 OUTPUT
		NetFlow* ADDRA_A15_B; // net ID: ADDRA lsb: 0  msb: 15 INPUT
		NetFlow* ADDRA_A14_B; // net ID: ADDRA lsb: 0  msb: 15 INPUT
		NetFlow* ADDRA_A13_B; // net ID: ADDRA lsb: 0  msb: 15 INPUT
		NetFlow* ADDRA_A12_B; // net ID: ADDRA lsb: 0  msb: 15 INPUT
		NetFlow* ADDRA_A11_B; // net ID: ADDRA lsb: 0  msb: 15 INPUT
		NetFlow* ADDRA_A10_B; // net ID: ADDRA lsb: 0  msb: 15 INPUT
		NetFlow* ADDRA_A9_B; // net ID: ADDRA lsb: 0  msb: 15 INPUT
		NetFlow* ADDRA_A8_B; // net ID: ADDRA lsb: 0  msb: 15 INPUT
		NetFlow* ADDRA_A7_B; // net ID: ADDRA lsb: 0  msb: 15 INPUT
		NetFlow* ADDRA_A6_B; // net ID: ADDRA lsb: 0  msb: 15 INPUT
		NetFlow* ADDRA_A5_B; // net ID: ADDRA lsb: 0  msb: 15 INPUT
		NetFlow* ADDRA_A4_B; // net ID: ADDRA lsb: 0  msb: 15 INPUT
		NetFlow* ADDRA_A3_B; // net ID: ADDRA lsb: 0  msb: 15 INPUT
		NetFlow* ADDRA_A2_B; // net ID: ADDRA lsb: 0  msb: 15 INPUT
		NetFlow* ADDRA_A1_B; // net ID: ADDRA lsb: 0  msb: 15 INPUT
		NetFlow* ADDRA_A0_B; // net ID: ADDRA lsb: 0  msb: 15 INPUT
		NetFlow* ADDRB_A15_B; // net ID: ADDRB lsb: 0  msb: 15 INPUT
		NetFlow* ADDRB_A14_B; // net ID: ADDRB lsb: 0  msb: 15 INPUT
		NetFlow* ADDRB_A13_B; // net ID: ADDRB lsb: 0  msb: 15 INPUT
		NetFlow* ADDRB_A12_B; // net ID: ADDRB lsb: 0  msb: 15 INPUT
		NetFlow* ADDRB_A11_B; // net ID: ADDRB lsb: 0  msb: 15 INPUT
		NetFlow* ADDRB_A10_B; // net ID: ADDRB lsb: 0  msb: 15 INPUT
		NetFlow* ADDRB_A9_B; // net ID: ADDRB lsb: 0  msb: 15 INPUT
		NetFlow* ADDRB_A8_B; // net ID: ADDRB lsb: 0  msb: 15 INPUT
		NetFlow* ADDRB_A7_B; // net ID: ADDRB lsb: 0  msb: 15 INPUT
		NetFlow* ADDRB_A6_B; // net ID: ADDRB lsb: 0  msb: 15 INPUT
		NetFlow* ADDRB_A5_B; // net ID: ADDRB lsb: 0  msb: 15 INPUT
		NetFlow* ADDRB_A4_B; // net ID: ADDRB lsb: 0  msb: 15 INPUT
		NetFlow* ADDRB_A3_B; // net ID: ADDRB lsb: 0  msb: 15 INPUT
		NetFlow* ADDRB_A2_B; // net ID: ADDRB lsb: 0  msb: 15 INPUT
		NetFlow* ADDRB_A1_B; // net ID: ADDRB lsb: 0  msb: 15 INPUT
		NetFlow* ADDRB_A0_B; // net ID: ADDRB lsb: 0  msb: 15 INPUT
		NetFlow* CASCADEINLATA_A0_B; // net ID: CASCADEINLATA lsb: 0  msb: 0 INPUT
		NetFlow* CASCADEINLATB_A0_B; // net ID: CASCADEINLATB lsb: 0  msb: 0 INPUT
		NetFlow* CASCADEINREGA_A0_B; // net ID: CASCADEINREGA lsb: 0  msb: 0 INPUT
		NetFlow* CASCADEINREGB_A0_B; // net ID: CASCADEINREGB lsb: 0  msb: 0 INPUT
		NetFlow* CLKA_A0_B; // net ID: CLKA lsb: 0  msb: 0 INPUT
		NetFlow* CLKB_A0_B; // net ID: CLKB lsb: 0  msb: 0 INPUT
		NetFlow* DIA_A63_B; // net ID: DIA lsb: 0  msb: 63 INPUT
		NetFlow* DIA_A62_B; // net ID: DIA lsb: 0  msb: 63 INPUT
		NetFlow* DIA_A61_B; // net ID: DIA lsb: 0  msb: 63 INPUT
		NetFlow* DIA_A60_B; // net ID: DIA lsb: 0  msb: 63 INPUT
		NetFlow* DIA_A59_B; // net ID: DIA lsb: 0  msb: 63 INPUT
		NetFlow* DIA_A58_B; // net ID: DIA lsb: 0  msb: 63 INPUT
		NetFlow* DIA_A57_B; // net ID: DIA lsb: 0  msb: 63 INPUT
		NetFlow* DIA_A56_B; // net ID: DIA lsb: 0  msb: 63 INPUT
		NetFlow* DIA_A55_B; // net ID: DIA lsb: 0  msb: 63 INPUT
		NetFlow* DIA_A54_B; // net ID: DIA lsb: 0  msb: 63 INPUT
		NetFlow* DIA_A53_B; // net ID: DIA lsb: 0  msb: 63 INPUT
		NetFlow* DIA_A52_B; // net ID: DIA lsb: 0  msb: 63 INPUT
		NetFlow* DIA_A51_B; // net ID: DIA lsb: 0  msb: 63 INPUT
		NetFlow* DIA_A50_B; // net ID: DIA lsb: 0  msb: 63 INPUT
		NetFlow* DIA_A49_B; // net ID: DIA lsb: 0  msb: 63 INPUT
		NetFlow* DIA_A48_B; // net ID: DIA lsb: 0  msb: 63 INPUT
		NetFlow* DIA_A47_B; // net ID: DIA lsb: 0  msb: 63 INPUT
		NetFlow* DIA_A46_B; // net ID: DIA lsb: 0  msb: 63 INPUT
		NetFlow* DIA_A45_B; // net ID: DIA lsb: 0  msb: 63 INPUT
		NetFlow* DIA_A44_B; // net ID: DIA lsb: 0  msb: 63 INPUT
		NetFlow* DIA_A43_B; // net ID: DIA lsb: 0  msb: 63 INPUT
		NetFlow* DIA_A42_B; // net ID: DIA lsb: 0  msb: 63 INPUT
		NetFlow* DIA_A41_B; // net ID: DIA lsb: 0  msb: 63 INPUT
		NetFlow* DIA_A40_B; // net ID: DIA lsb: 0  msb: 63 INPUT
		NetFlow* DIA_A39_B; // net ID: DIA lsb: 0  msb: 63 INPUT
		NetFlow* DIA_A38_B; // net ID: DIA lsb: 0  msb: 63 INPUT
		NetFlow* DIA_A37_B; // net ID: DIA lsb: 0  msb: 63 INPUT
		NetFlow* DIA_A36_B; // net ID: DIA lsb: 0  msb: 63 INPUT
		NetFlow* DIA_A35_B; // net ID: DIA lsb: 0  msb: 63 INPUT
		NetFlow* DIA_A34_B; // net ID: DIA lsb: 0  msb: 63 INPUT
		NetFlow* DIA_A33_B; // net ID: DIA lsb: 0  msb: 63 INPUT
		NetFlow* DIA_A32_B; // net ID: DIA lsb: 0  msb: 63 INPUT
		NetFlow* DIA_A31_B; // net ID: DIA lsb: 0  msb: 63 INPUT
		NetFlow* DIA_A30_B; // net ID: DIA lsb: 0  msb: 63 INPUT
		NetFlow* DIA_A29_B; // net ID: DIA lsb: 0  msb: 63 INPUT
		NetFlow* DIA_A28_B; // net ID: DIA lsb: 0  msb: 63 INPUT
		NetFlow* DIA_A27_B; // net ID: DIA lsb: 0  msb: 63 INPUT
		NetFlow* DIA_A26_B; // net ID: DIA lsb: 0  msb: 63 INPUT
		NetFlow* DIA_A25_B; // net ID: DIA lsb: 0  msb: 63 INPUT
		NetFlow* DIA_A24_B; // net ID: DIA lsb: 0  msb: 63 INPUT
		NetFlow* DIA_A23_B; // net ID: DIA lsb: 0  msb: 63 INPUT
		NetFlow* DIA_A22_B; // net ID: DIA lsb: 0  msb: 63 INPUT
		NetFlow* DIA_A21_B; // net ID: DIA lsb: 0  msb: 63 INPUT
		NetFlow* DIA_A20_B; // net ID: DIA lsb: 0  msb: 63 INPUT
		NetFlow* DIA_A19_B; // net ID: DIA lsb: 0  msb: 63 INPUT
		NetFlow* DIA_A18_B; // net ID: DIA lsb: 0  msb: 63 INPUT
		NetFlow* DIA_A17_B; // net ID: DIA lsb: 0  msb: 63 INPUT
		NetFlow* DIA_A16_B; // net ID: DIA lsb: 0  msb: 63 INPUT
		NetFlow* DIA_A15_B; // net ID: DIA lsb: 0  msb: 63 INPUT
		NetFlow* DIA_A14_B; // net ID: DIA lsb: 0  msb: 63 INPUT
		NetFlow* DIA_A13_B; // net ID: DIA lsb: 0  msb: 63 INPUT
		NetFlow* DIA_A12_B; // net ID: DIA lsb: 0  msb: 63 INPUT
		NetFlow* DIA_A11_B; // net ID: DIA lsb: 0  msb: 63 INPUT
		NetFlow* DIA_A10_B; // net ID: DIA lsb: 0  msb: 63 INPUT
		NetFlow* DIA_A9_B; // net ID: DIA lsb: 0  msb: 63 INPUT
		NetFlow* DIA_A8_B; // net ID: DIA lsb: 0  msb: 63 INPUT
		NetFlow* DIA_A7_B; // net ID: DIA lsb: 0  msb: 63 INPUT
		NetFlow* DIA_A6_B; // net ID: DIA lsb: 0  msb: 63 INPUT
		NetFlow* DIA_A5_B; // net ID: DIA lsb: 0  msb: 63 INPUT
		NetFlow* DIA_A4_B; // net ID: DIA lsb: 0  msb: 63 INPUT
		NetFlow* DIA_A3_B; // net ID: DIA lsb: 0  msb: 63 INPUT
		NetFlow* DIA_A2_B; // net ID: DIA lsb: 0  msb: 63 INPUT
		NetFlow* DIA_A1_B; // net ID: DIA lsb: 0  msb: 63 INPUT
		NetFlow* DIA_A0_B; // net ID: DIA lsb: 0  msb: 63 INPUT
		NetFlow* DIB_A63_B; // net ID: DIB lsb: 0  msb: 63 INPUT
		NetFlow* DIB_A62_B; // net ID: DIB lsb: 0  msb: 63 INPUT
		NetFlow* DIB_A61_B; // net ID: DIB lsb: 0  msb: 63 INPUT
		NetFlow* DIB_A60_B; // net ID: DIB lsb: 0  msb: 63 INPUT
		NetFlow* DIB_A59_B; // net ID: DIB lsb: 0  msb: 63 INPUT
		NetFlow* DIB_A58_B; // net ID: DIB lsb: 0  msb: 63 INPUT
		NetFlow* DIB_A57_B; // net ID: DIB lsb: 0  msb: 63 INPUT
		NetFlow* DIB_A56_B; // net ID: DIB lsb: 0  msb: 63 INPUT
		NetFlow* DIB_A55_B; // net ID: DIB lsb: 0  msb: 63 INPUT
		NetFlow* DIB_A54_B; // net ID: DIB lsb: 0  msb: 63 INPUT
		NetFlow* DIB_A53_B; // net ID: DIB lsb: 0  msb: 63 INPUT
		NetFlow* DIB_A52_B; // net ID: DIB lsb: 0  msb: 63 INPUT
		NetFlow* DIB_A51_B; // net ID: DIB lsb: 0  msb: 63 INPUT
		NetFlow* DIB_A50_B; // net ID: DIB lsb: 0  msb: 63 INPUT
		NetFlow* DIB_A49_B; // net ID: DIB lsb: 0  msb: 63 INPUT
		NetFlow* DIB_A48_B; // net ID: DIB lsb: 0  msb: 63 INPUT
		NetFlow* DIB_A47_B; // net ID: DIB lsb: 0  msb: 63 INPUT
		NetFlow* DIB_A46_B; // net ID: DIB lsb: 0  msb: 63 INPUT
		NetFlow* DIB_A45_B; // net ID: DIB lsb: 0  msb: 63 INPUT
		NetFlow* DIB_A44_B; // net ID: DIB lsb: 0  msb: 63 INPUT
		NetFlow* DIB_A43_B; // net ID: DIB lsb: 0  msb: 63 INPUT
		NetFlow* DIB_A42_B; // net ID: DIB lsb: 0  msb: 63 INPUT
		NetFlow* DIB_A41_B; // net ID: DIB lsb: 0  msb: 63 INPUT
		NetFlow* DIB_A40_B; // net ID: DIB lsb: 0  msb: 63 INPUT
		NetFlow* DIB_A39_B; // net ID: DIB lsb: 0  msb: 63 INPUT
		NetFlow* DIB_A38_B; // net ID: DIB lsb: 0  msb: 63 INPUT
		NetFlow* DIB_A37_B; // net ID: DIB lsb: 0  msb: 63 INPUT
		NetFlow* DIB_A36_B; // net ID: DIB lsb: 0  msb: 63 INPUT
		NetFlow* DIB_A35_B; // net ID: DIB lsb: 0  msb: 63 INPUT
		NetFlow* DIB_A34_B; // net ID: DIB lsb: 0  msb: 63 INPUT
		NetFlow* DIB_A33_B; // net ID: DIB lsb: 0  msb: 63 INPUT
		NetFlow* DIB_A32_B; // net ID: DIB lsb: 0  msb: 63 INPUT
		NetFlow* DIB_A31_B; // net ID: DIB lsb: 0  msb: 63 INPUT
		NetFlow* DIB_A30_B; // net ID: DIB lsb: 0  msb: 63 INPUT
		NetFlow* DIB_A29_B; // net ID: DIB lsb: 0  msb: 63 INPUT
		NetFlow* DIB_A28_B; // net ID: DIB lsb: 0  msb: 63 INPUT
		NetFlow* DIB_A27_B; // net ID: DIB lsb: 0  msb: 63 INPUT
		NetFlow* DIB_A26_B; // net ID: DIB lsb: 0  msb: 63 INPUT
		NetFlow* DIB_A25_B; // net ID: DIB lsb: 0  msb: 63 INPUT
		NetFlow* DIB_A24_B; // net ID: DIB lsb: 0  msb: 63 INPUT
		NetFlow* DIB_A23_B; // net ID: DIB lsb: 0  msb: 63 INPUT
		NetFlow* DIB_A22_B; // net ID: DIB lsb: 0  msb: 63 INPUT
		NetFlow* DIB_A21_B; // net ID: DIB lsb: 0  msb: 63 INPUT
		NetFlow* DIB_A20_B; // net ID: DIB lsb: 0  msb: 63 INPUT
		NetFlow* DIB_A19_B; // net ID: DIB lsb: 0  msb: 63 INPUT
		NetFlow* DIB_A18_B; // net ID: DIB lsb: 0  msb: 63 INPUT
		NetFlow* DIB_A17_B; // net ID: DIB lsb: 0  msb: 63 INPUT
		NetFlow* DIB_A16_B; // net ID: DIB lsb: 0  msb: 63 INPUT
		NetFlow* DIB_A15_B; // net ID: DIB lsb: 0  msb: 63 INPUT
		NetFlow* DIB_A14_B; // net ID: DIB lsb: 0  msb: 63 INPUT
		NetFlow* DIB_A13_B; // net ID: DIB lsb: 0  msb: 63 INPUT
		NetFlow* DIB_A12_B; // net ID: DIB lsb: 0  msb: 63 INPUT
		NetFlow* DIB_A11_B; // net ID: DIB lsb: 0  msb: 63 INPUT
		NetFlow* DIB_A10_B; // net ID: DIB lsb: 0  msb: 63 INPUT
		NetFlow* DIB_A9_B; // net ID: DIB lsb: 0  msb: 63 INPUT
		NetFlow* DIB_A8_B; // net ID: DIB lsb: 0  msb: 63 INPUT
		NetFlow* DIB_A7_B; // net ID: DIB lsb: 0  msb: 63 INPUT
		NetFlow* DIB_A6_B; // net ID: DIB lsb: 0  msb: 63 INPUT
		NetFlow* DIB_A5_B; // net ID: DIB lsb: 0  msb: 63 INPUT
		NetFlow* DIB_A4_B; // net ID: DIB lsb: 0  msb: 63 INPUT
		NetFlow* DIB_A3_B; // net ID: DIB lsb: 0  msb: 63 INPUT
		NetFlow* DIB_A2_B; // net ID: DIB lsb: 0  msb: 63 INPUT
		NetFlow* DIB_A1_B; // net ID: DIB lsb: 0  msb: 63 INPUT
		NetFlow* DIB_A0_B; // net ID: DIB lsb: 0  msb: 63 INPUT
		NetFlow* DIPA_A3_B; // net ID: DIPA lsb: 0  msb: 3 INPUT
		NetFlow* DIPA_A2_B; // net ID: DIPA lsb: 0  msb: 3 INPUT
		NetFlow* DIPA_A1_B; // net ID: DIPA lsb: 0  msb: 3 INPUT
		NetFlow* DIPA_A0_B; // net ID: DIPA lsb: 0  msb: 3 INPUT
		NetFlow* DIPB_A7_B; // net ID: DIPB lsb: 0  msb: 7 INPUT
		NetFlow* DIPB_A6_B; // net ID: DIPB lsb: 0  msb: 7 INPUT
		NetFlow* DIPB_A5_B; // net ID: DIPB lsb: 0  msb: 7 INPUT
		NetFlow* DIPB_A4_B; // net ID: DIPB lsb: 0  msb: 7 INPUT
		NetFlow* DIPB_A3_B; // net ID: DIPB lsb: 0  msb: 7 INPUT
		NetFlow* DIPB_A2_B; // net ID: DIPB lsb: 0  msb: 7 INPUT
		NetFlow* DIPB_A1_B; // net ID: DIPB lsb: 0  msb: 7 INPUT
		NetFlow* DIPB_A0_B; // net ID: DIPB lsb: 0  msb: 7 INPUT
		NetFlow* ENA_A0_B; // net ID: ENA lsb: 0  msb: 0 INPUT
		NetFlow* ENB_A0_B; // net ID: ENB lsb: 0  msb: 0 INPUT
		NetFlow* GSR_A0_B; // net ID: GSR lsb: 0  msb: 0 INPUT
		NetFlow* REGCEA_A0_B; // net ID: REGCEA lsb: 0  msb: 0 INPUT
		NetFlow* REGCEB_A0_B; // net ID: REGCEB lsb: 0  msb: 0 INPUT
		NetFlow* REGCLKA_A0_B; // net ID: REGCLKA lsb: 0  msb: 0 INPUT
		NetFlow* REGCLKB_A0_B; // net ID: REGCLKB lsb: 0  msb: 0 INPUT
		NetFlow* SSRA_A0_B; // net ID: SSRA lsb: 0  msb: 0 INPUT
		NetFlow* SSRB_A0_B; // net ID: SSRB lsb: 0  msb: 0 INPUT
		NetFlow* WEA_A7_B; // net ID: WEA lsb: 0  msb: 7 INPUT
		NetFlow* WEA_A6_B; // net ID: WEA lsb: 0  msb: 7 INPUT
		NetFlow* WEA_A5_B; // net ID: WEA lsb: 0  msb: 7 INPUT
		NetFlow* WEA_A4_B; // net ID: WEA lsb: 0  msb: 7 INPUT
		NetFlow* WEA_A3_B; // net ID: WEA lsb: 0  msb: 7 INPUT
		NetFlow* WEA_A2_B; // net ID: WEA lsb: 0  msb: 7 INPUT
		NetFlow* WEA_A1_B; // net ID: WEA lsb: 0  msb: 7 INPUT
		NetFlow* WEA_A0_B; // net ID: WEA lsb: 0  msb: 7 INPUT
		NetFlow* WEB_A7_B; // net ID: WEB lsb: 0  msb: 7 INPUT
		NetFlow* WEB_A6_B; // net ID: WEB lsb: 0  msb: 7 INPUT
		NetFlow* WEB_A5_B; // net ID: WEB lsb: 0  msb: 7 INPUT
		NetFlow* WEB_A4_B; // net ID: WEB lsb: 0  msb: 7 INPUT
		NetFlow* WEB_A3_B; // net ID: WEB lsb: 0  msb: 7 INPUT
		NetFlow* WEB_A2_B; // net ID: WEB lsb: 0  msb: 7 INPUT
		NetFlow* WEB_A1_B; // net ID: WEB lsb: 0  msb: 7 INPUT
		NetFlow* WEB_A0_B; // net ID: WEB lsb: 0  msb: 7 INPUT
		
		public: X_ARAMB36_INTERNAL(
			const char * name,
			//Verilog Parameters:
			parameter_int_t DOA_REG, // Default: 0
			parameter_int_t DOB_REG, // Default: 0
			parameter_enum_t EN_ECC_READ, // Default: "FALSE"
			parameter_enum_t EN_ECC_SCRUB, // Default: "FALSE"
			parameter_enum_t EN_ECC_WRITE, // Default: "FALSE"
			parameter_int_t INIT_A, // Default: 72'h0
			parameter_int_t INIT_B, // Default: 72'h0
			parameter_string_t RAM_EXTENSION_A, // Default: "NONE"
			parameter_string_t RAM_EXTENSION_B, // Default: "NONE"
			parameter_int_t READ_WIDTH_A, // Default: 0
			parameter_int_t READ_WIDTH_B, // Default: 0
			parameter_int_t SETUP_ALL, // Default: 1000
			parameter_int_t SETUP_READ_FIRST, // Default: 3000
			parameter_string_t SIM_COLLISION_CHECK, // Default: "ALL"
			parameter_int_t SRVAL_A, // Default: 72'h0
			parameter_int_t SRVAL_B, // Default: 72'h0
			parameter_string_t WRITE_MODE_A, // Default: "WRITE_FIRST"
			parameter_string_t WRITE_MODE_B, // Default: "WRITE_FIRST"
			parameter_int_t WRITE_WIDTH_A, // Default: 0
			parameter_int_t WRITE_WIDTH_B, // Default: 0
			parameter_string_t INIT_FILE, // Default: "NONE"
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
			parameter_int_t INIT_40, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_41, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_42, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_43, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_44, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_45, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_46, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_47, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_48, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_49, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_4A, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_4B, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_4C, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_4D, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_4E, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_4F, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_50, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_51, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_52, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_53, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_54, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_55, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_56, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_57, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_58, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_59, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_5A, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_5B, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_5C, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_5D, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_5E, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_5F, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_60, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_61, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_62, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_63, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_64, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_65, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_66, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_67, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_68, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_69, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_6A, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_6B, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_6C, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_6D, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_6E, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_6F, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_70, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_71, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_72, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_73, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_74, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_75, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_76, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_77, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_78, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_79, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_7A, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_7B, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_7C, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_7D, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_7E, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INIT_7F, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INITP_00, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INITP_01, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INITP_02, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INITP_03, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INITP_04, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INITP_05, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INITP_06, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INITP_07, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INITP_08, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INITP_09, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INITP_0A, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INITP_0B, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INITP_0C, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INITP_0D, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INITP_0E, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INITP_0F, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t BRAM_MODE, // Default: "TRUE_DUAL_PORT"
			parameter_int_t BRAM_SIZE, // Default: 36
			//Verilog Ports in definition order:
			NetFlow* CASCADEOUTLATA_A0_B, // net ID: CASCADEOUTLATA lsb: 0  msb: 0 OUTPUT
			NetFlow* CASCADEOUTLATB_A0_B, // net ID: CASCADEOUTLATB lsb: 0  msb: 0 OUTPUT
			NetFlow* CASCADEOUTREGA_A0_B, // net ID: CASCADEOUTREGA lsb: 0  msb: 0 OUTPUT
			NetFlow* CASCADEOUTREGB_A0_B, // net ID: CASCADEOUTREGB lsb: 0  msb: 0 OUTPUT
			NetFlow* DBITERR_A0_B, // net ID: DBITERR lsb: 0  msb: 0 OUTPUT
			NetFlow* DOA_A63_B, // net ID: DOA lsb: 0  msb: 63 OUTPUT
			NetFlow* DOA_A62_B, // net ID: DOA lsb: 0  msb: 63 OUTPUT
			NetFlow* DOA_A61_B, // net ID: DOA lsb: 0  msb: 63 OUTPUT
			NetFlow* DOA_A60_B, // net ID: DOA lsb: 0  msb: 63 OUTPUT
			NetFlow* DOA_A59_B, // net ID: DOA lsb: 0  msb: 63 OUTPUT
			NetFlow* DOA_A58_B, // net ID: DOA lsb: 0  msb: 63 OUTPUT
			NetFlow* DOA_A57_B, // net ID: DOA lsb: 0  msb: 63 OUTPUT
			NetFlow* DOA_A56_B, // net ID: DOA lsb: 0  msb: 63 OUTPUT
			NetFlow* DOA_A55_B, // net ID: DOA lsb: 0  msb: 63 OUTPUT
			NetFlow* DOA_A54_B, // net ID: DOA lsb: 0  msb: 63 OUTPUT
			NetFlow* DOA_A53_B, // net ID: DOA lsb: 0  msb: 63 OUTPUT
			NetFlow* DOA_A52_B, // net ID: DOA lsb: 0  msb: 63 OUTPUT
			NetFlow* DOA_A51_B, // net ID: DOA lsb: 0  msb: 63 OUTPUT
			NetFlow* DOA_A50_B, // net ID: DOA lsb: 0  msb: 63 OUTPUT
			NetFlow* DOA_A49_B, // net ID: DOA lsb: 0  msb: 63 OUTPUT
			NetFlow* DOA_A48_B, // net ID: DOA lsb: 0  msb: 63 OUTPUT
			NetFlow* DOA_A47_B, // net ID: DOA lsb: 0  msb: 63 OUTPUT
			NetFlow* DOA_A46_B, // net ID: DOA lsb: 0  msb: 63 OUTPUT
			NetFlow* DOA_A45_B, // net ID: DOA lsb: 0  msb: 63 OUTPUT
			NetFlow* DOA_A44_B, // net ID: DOA lsb: 0  msb: 63 OUTPUT
			NetFlow* DOA_A43_B, // net ID: DOA lsb: 0  msb: 63 OUTPUT
			NetFlow* DOA_A42_B, // net ID: DOA lsb: 0  msb: 63 OUTPUT
			NetFlow* DOA_A41_B, // net ID: DOA lsb: 0  msb: 63 OUTPUT
			NetFlow* DOA_A40_B, // net ID: DOA lsb: 0  msb: 63 OUTPUT
			NetFlow* DOA_A39_B, // net ID: DOA lsb: 0  msb: 63 OUTPUT
			NetFlow* DOA_A38_B, // net ID: DOA lsb: 0  msb: 63 OUTPUT
			NetFlow* DOA_A37_B, // net ID: DOA lsb: 0  msb: 63 OUTPUT
			NetFlow* DOA_A36_B, // net ID: DOA lsb: 0  msb: 63 OUTPUT
			NetFlow* DOA_A35_B, // net ID: DOA lsb: 0  msb: 63 OUTPUT
			NetFlow* DOA_A34_B, // net ID: DOA lsb: 0  msb: 63 OUTPUT
			NetFlow* DOA_A33_B, // net ID: DOA lsb: 0  msb: 63 OUTPUT
			NetFlow* DOA_A32_B, // net ID: DOA lsb: 0  msb: 63 OUTPUT
			NetFlow* DOA_A31_B, // net ID: DOA lsb: 0  msb: 63 OUTPUT
			NetFlow* DOA_A30_B, // net ID: DOA lsb: 0  msb: 63 OUTPUT
			NetFlow* DOA_A29_B, // net ID: DOA lsb: 0  msb: 63 OUTPUT
			NetFlow* DOA_A28_B, // net ID: DOA lsb: 0  msb: 63 OUTPUT
			NetFlow* DOA_A27_B, // net ID: DOA lsb: 0  msb: 63 OUTPUT
			NetFlow* DOA_A26_B, // net ID: DOA lsb: 0  msb: 63 OUTPUT
			NetFlow* DOA_A25_B, // net ID: DOA lsb: 0  msb: 63 OUTPUT
			NetFlow* DOA_A24_B, // net ID: DOA lsb: 0  msb: 63 OUTPUT
			NetFlow* DOA_A23_B, // net ID: DOA lsb: 0  msb: 63 OUTPUT
			NetFlow* DOA_A22_B, // net ID: DOA lsb: 0  msb: 63 OUTPUT
			NetFlow* DOA_A21_B, // net ID: DOA lsb: 0  msb: 63 OUTPUT
			NetFlow* DOA_A20_B, // net ID: DOA lsb: 0  msb: 63 OUTPUT
			NetFlow* DOA_A19_B, // net ID: DOA lsb: 0  msb: 63 OUTPUT
			NetFlow* DOA_A18_B, // net ID: DOA lsb: 0  msb: 63 OUTPUT
			NetFlow* DOA_A17_B, // net ID: DOA lsb: 0  msb: 63 OUTPUT
			NetFlow* DOA_A16_B, // net ID: DOA lsb: 0  msb: 63 OUTPUT
			NetFlow* DOA_A15_B, // net ID: DOA lsb: 0  msb: 63 OUTPUT
			NetFlow* DOA_A14_B, // net ID: DOA lsb: 0  msb: 63 OUTPUT
			NetFlow* DOA_A13_B, // net ID: DOA lsb: 0  msb: 63 OUTPUT
			NetFlow* DOA_A12_B, // net ID: DOA lsb: 0  msb: 63 OUTPUT
			NetFlow* DOA_A11_B, // net ID: DOA lsb: 0  msb: 63 OUTPUT
			NetFlow* DOA_A10_B, // net ID: DOA lsb: 0  msb: 63 OUTPUT
			NetFlow* DOA_A9_B, // net ID: DOA lsb: 0  msb: 63 OUTPUT
			NetFlow* DOA_A8_B, // net ID: DOA lsb: 0  msb: 63 OUTPUT
			NetFlow* DOA_A7_B, // net ID: DOA lsb: 0  msb: 63 OUTPUT
			NetFlow* DOA_A6_B, // net ID: DOA lsb: 0  msb: 63 OUTPUT
			NetFlow* DOA_A5_B, // net ID: DOA lsb: 0  msb: 63 OUTPUT
			NetFlow* DOA_A4_B, // net ID: DOA lsb: 0  msb: 63 OUTPUT
			NetFlow* DOA_A3_B, // net ID: DOA lsb: 0  msb: 63 OUTPUT
			NetFlow* DOA_A2_B, // net ID: DOA lsb: 0  msb: 63 OUTPUT
			NetFlow* DOA_A1_B, // net ID: DOA lsb: 0  msb: 63 OUTPUT
			NetFlow* DOA_A0_B, // net ID: DOA lsb: 0  msb: 63 OUTPUT
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
			NetFlow* DOPA_A7_B, // net ID: DOPA lsb: 0  msb: 7 OUTPUT
			NetFlow* DOPA_A6_B, // net ID: DOPA lsb: 0  msb: 7 OUTPUT
			NetFlow* DOPA_A5_B, // net ID: DOPA lsb: 0  msb: 7 OUTPUT
			NetFlow* DOPA_A4_B, // net ID: DOPA lsb: 0  msb: 7 OUTPUT
			NetFlow* DOPA_A3_B, // net ID: DOPA lsb: 0  msb: 7 OUTPUT
			NetFlow* DOPA_A2_B, // net ID: DOPA lsb: 0  msb: 7 OUTPUT
			NetFlow* DOPA_A1_B, // net ID: DOPA lsb: 0  msb: 7 OUTPUT
			NetFlow* DOPA_A0_B, // net ID: DOPA lsb: 0  msb: 7 OUTPUT
			NetFlow* DOPB_A3_B, // net ID: DOPB lsb: 0  msb: 3 OUTPUT
			NetFlow* DOPB_A2_B, // net ID: DOPB lsb: 0  msb: 3 OUTPUT
			NetFlow* DOPB_A1_B, // net ID: DOPB lsb: 0  msb: 3 OUTPUT
			NetFlow* DOPB_A0_B, // net ID: DOPB lsb: 0  msb: 3 OUTPUT
			NetFlow* ECCPARITY_A7_B, // net ID: ECCPARITY lsb: 0  msb: 7 OUTPUT
			NetFlow* ECCPARITY_A6_B, // net ID: ECCPARITY lsb: 0  msb: 7 OUTPUT
			NetFlow* ECCPARITY_A5_B, // net ID: ECCPARITY lsb: 0  msb: 7 OUTPUT
			NetFlow* ECCPARITY_A4_B, // net ID: ECCPARITY lsb: 0  msb: 7 OUTPUT
			NetFlow* ECCPARITY_A3_B, // net ID: ECCPARITY lsb: 0  msb: 7 OUTPUT
			NetFlow* ECCPARITY_A2_B, // net ID: ECCPARITY lsb: 0  msb: 7 OUTPUT
			NetFlow* ECCPARITY_A1_B, // net ID: ECCPARITY lsb: 0  msb: 7 OUTPUT
			NetFlow* ECCPARITY_A0_B, // net ID: ECCPARITY lsb: 0  msb: 7 OUTPUT
			NetFlow* SBITERR_A0_B, // net ID: SBITERR lsb: 0  msb: 0 OUTPUT
			NetFlow* ADDRA_A15_B, // net ID: ADDRA lsb: 0  msb: 15 INPUT
			NetFlow* ADDRA_A14_B, // net ID: ADDRA lsb: 0  msb: 15 INPUT
			NetFlow* ADDRA_A13_B, // net ID: ADDRA lsb: 0  msb: 15 INPUT
			NetFlow* ADDRA_A12_B, // net ID: ADDRA lsb: 0  msb: 15 INPUT
			NetFlow* ADDRA_A11_B, // net ID: ADDRA lsb: 0  msb: 15 INPUT
			NetFlow* ADDRA_A10_B, // net ID: ADDRA lsb: 0  msb: 15 INPUT
			NetFlow* ADDRA_A9_B, // net ID: ADDRA lsb: 0  msb: 15 INPUT
			NetFlow* ADDRA_A8_B, // net ID: ADDRA lsb: 0  msb: 15 INPUT
			NetFlow* ADDRA_A7_B, // net ID: ADDRA lsb: 0  msb: 15 INPUT
			NetFlow* ADDRA_A6_B, // net ID: ADDRA lsb: 0  msb: 15 INPUT
			NetFlow* ADDRA_A5_B, // net ID: ADDRA lsb: 0  msb: 15 INPUT
			NetFlow* ADDRA_A4_B, // net ID: ADDRA lsb: 0  msb: 15 INPUT
			NetFlow* ADDRA_A3_B, // net ID: ADDRA lsb: 0  msb: 15 INPUT
			NetFlow* ADDRA_A2_B, // net ID: ADDRA lsb: 0  msb: 15 INPUT
			NetFlow* ADDRA_A1_B, // net ID: ADDRA lsb: 0  msb: 15 INPUT
			NetFlow* ADDRA_A0_B, // net ID: ADDRA lsb: 0  msb: 15 INPUT
			NetFlow* ADDRB_A15_B, // net ID: ADDRB lsb: 0  msb: 15 INPUT
			NetFlow* ADDRB_A14_B, // net ID: ADDRB lsb: 0  msb: 15 INPUT
			NetFlow* ADDRB_A13_B, // net ID: ADDRB lsb: 0  msb: 15 INPUT
			NetFlow* ADDRB_A12_B, // net ID: ADDRB lsb: 0  msb: 15 INPUT
			NetFlow* ADDRB_A11_B, // net ID: ADDRB lsb: 0  msb: 15 INPUT
			NetFlow* ADDRB_A10_B, // net ID: ADDRB lsb: 0  msb: 15 INPUT
			NetFlow* ADDRB_A9_B, // net ID: ADDRB lsb: 0  msb: 15 INPUT
			NetFlow* ADDRB_A8_B, // net ID: ADDRB lsb: 0  msb: 15 INPUT
			NetFlow* ADDRB_A7_B, // net ID: ADDRB lsb: 0  msb: 15 INPUT
			NetFlow* ADDRB_A6_B, // net ID: ADDRB lsb: 0  msb: 15 INPUT
			NetFlow* ADDRB_A5_B, // net ID: ADDRB lsb: 0  msb: 15 INPUT
			NetFlow* ADDRB_A4_B, // net ID: ADDRB lsb: 0  msb: 15 INPUT
			NetFlow* ADDRB_A3_B, // net ID: ADDRB lsb: 0  msb: 15 INPUT
			NetFlow* ADDRB_A2_B, // net ID: ADDRB lsb: 0  msb: 15 INPUT
			NetFlow* ADDRB_A1_B, // net ID: ADDRB lsb: 0  msb: 15 INPUT
			NetFlow* ADDRB_A0_B, // net ID: ADDRB lsb: 0  msb: 15 INPUT
			NetFlow* CASCADEINLATA_A0_B, // net ID: CASCADEINLATA lsb: 0  msb: 0 INPUT
			NetFlow* CASCADEINLATB_A0_B, // net ID: CASCADEINLATB lsb: 0  msb: 0 INPUT
			NetFlow* CASCADEINREGA_A0_B, // net ID: CASCADEINREGA lsb: 0  msb: 0 INPUT
			NetFlow* CASCADEINREGB_A0_B, // net ID: CASCADEINREGB lsb: 0  msb: 0 INPUT
			NetFlow* CLKA_A0_B, // net ID: CLKA lsb: 0  msb: 0 INPUT
			NetFlow* CLKB_A0_B, // net ID: CLKB lsb: 0  msb: 0 INPUT
			NetFlow* DIA_A63_B, // net ID: DIA lsb: 0  msb: 63 INPUT
			NetFlow* DIA_A62_B, // net ID: DIA lsb: 0  msb: 63 INPUT
			NetFlow* DIA_A61_B, // net ID: DIA lsb: 0  msb: 63 INPUT
			NetFlow* DIA_A60_B, // net ID: DIA lsb: 0  msb: 63 INPUT
			NetFlow* DIA_A59_B, // net ID: DIA lsb: 0  msb: 63 INPUT
			NetFlow* DIA_A58_B, // net ID: DIA lsb: 0  msb: 63 INPUT
			NetFlow* DIA_A57_B, // net ID: DIA lsb: 0  msb: 63 INPUT
			NetFlow* DIA_A56_B, // net ID: DIA lsb: 0  msb: 63 INPUT
			NetFlow* DIA_A55_B, // net ID: DIA lsb: 0  msb: 63 INPUT
			NetFlow* DIA_A54_B, // net ID: DIA lsb: 0  msb: 63 INPUT
			NetFlow* DIA_A53_B, // net ID: DIA lsb: 0  msb: 63 INPUT
			NetFlow* DIA_A52_B, // net ID: DIA lsb: 0  msb: 63 INPUT
			NetFlow* DIA_A51_B, // net ID: DIA lsb: 0  msb: 63 INPUT
			NetFlow* DIA_A50_B, // net ID: DIA lsb: 0  msb: 63 INPUT
			NetFlow* DIA_A49_B, // net ID: DIA lsb: 0  msb: 63 INPUT
			NetFlow* DIA_A48_B, // net ID: DIA lsb: 0  msb: 63 INPUT
			NetFlow* DIA_A47_B, // net ID: DIA lsb: 0  msb: 63 INPUT
			NetFlow* DIA_A46_B, // net ID: DIA lsb: 0  msb: 63 INPUT
			NetFlow* DIA_A45_B, // net ID: DIA lsb: 0  msb: 63 INPUT
			NetFlow* DIA_A44_B, // net ID: DIA lsb: 0  msb: 63 INPUT
			NetFlow* DIA_A43_B, // net ID: DIA lsb: 0  msb: 63 INPUT
			NetFlow* DIA_A42_B, // net ID: DIA lsb: 0  msb: 63 INPUT
			NetFlow* DIA_A41_B, // net ID: DIA lsb: 0  msb: 63 INPUT
			NetFlow* DIA_A40_B, // net ID: DIA lsb: 0  msb: 63 INPUT
			NetFlow* DIA_A39_B, // net ID: DIA lsb: 0  msb: 63 INPUT
			NetFlow* DIA_A38_B, // net ID: DIA lsb: 0  msb: 63 INPUT
			NetFlow* DIA_A37_B, // net ID: DIA lsb: 0  msb: 63 INPUT
			NetFlow* DIA_A36_B, // net ID: DIA lsb: 0  msb: 63 INPUT
			NetFlow* DIA_A35_B, // net ID: DIA lsb: 0  msb: 63 INPUT
			NetFlow* DIA_A34_B, // net ID: DIA lsb: 0  msb: 63 INPUT
			NetFlow* DIA_A33_B, // net ID: DIA lsb: 0  msb: 63 INPUT
			NetFlow* DIA_A32_B, // net ID: DIA lsb: 0  msb: 63 INPUT
			NetFlow* DIA_A31_B, // net ID: DIA lsb: 0  msb: 63 INPUT
			NetFlow* DIA_A30_B, // net ID: DIA lsb: 0  msb: 63 INPUT
			NetFlow* DIA_A29_B, // net ID: DIA lsb: 0  msb: 63 INPUT
			NetFlow* DIA_A28_B, // net ID: DIA lsb: 0  msb: 63 INPUT
			NetFlow* DIA_A27_B, // net ID: DIA lsb: 0  msb: 63 INPUT
			NetFlow* DIA_A26_B, // net ID: DIA lsb: 0  msb: 63 INPUT
			NetFlow* DIA_A25_B, // net ID: DIA lsb: 0  msb: 63 INPUT
			NetFlow* DIA_A24_B, // net ID: DIA lsb: 0  msb: 63 INPUT
			NetFlow* DIA_A23_B, // net ID: DIA lsb: 0  msb: 63 INPUT
			NetFlow* DIA_A22_B, // net ID: DIA lsb: 0  msb: 63 INPUT
			NetFlow* DIA_A21_B, // net ID: DIA lsb: 0  msb: 63 INPUT
			NetFlow* DIA_A20_B, // net ID: DIA lsb: 0  msb: 63 INPUT
			NetFlow* DIA_A19_B, // net ID: DIA lsb: 0  msb: 63 INPUT
			NetFlow* DIA_A18_B, // net ID: DIA lsb: 0  msb: 63 INPUT
			NetFlow* DIA_A17_B, // net ID: DIA lsb: 0  msb: 63 INPUT
			NetFlow* DIA_A16_B, // net ID: DIA lsb: 0  msb: 63 INPUT
			NetFlow* DIA_A15_B, // net ID: DIA lsb: 0  msb: 63 INPUT
			NetFlow* DIA_A14_B, // net ID: DIA lsb: 0  msb: 63 INPUT
			NetFlow* DIA_A13_B, // net ID: DIA lsb: 0  msb: 63 INPUT
			NetFlow* DIA_A12_B, // net ID: DIA lsb: 0  msb: 63 INPUT
			NetFlow* DIA_A11_B, // net ID: DIA lsb: 0  msb: 63 INPUT
			NetFlow* DIA_A10_B, // net ID: DIA lsb: 0  msb: 63 INPUT
			NetFlow* DIA_A9_B, // net ID: DIA lsb: 0  msb: 63 INPUT
			NetFlow* DIA_A8_B, // net ID: DIA lsb: 0  msb: 63 INPUT
			NetFlow* DIA_A7_B, // net ID: DIA lsb: 0  msb: 63 INPUT
			NetFlow* DIA_A6_B, // net ID: DIA lsb: 0  msb: 63 INPUT
			NetFlow* DIA_A5_B, // net ID: DIA lsb: 0  msb: 63 INPUT
			NetFlow* DIA_A4_B, // net ID: DIA lsb: 0  msb: 63 INPUT
			NetFlow* DIA_A3_B, // net ID: DIA lsb: 0  msb: 63 INPUT
			NetFlow* DIA_A2_B, // net ID: DIA lsb: 0  msb: 63 INPUT
			NetFlow* DIA_A1_B, // net ID: DIA lsb: 0  msb: 63 INPUT
			NetFlow* DIA_A0_B, // net ID: DIA lsb: 0  msb: 63 INPUT
			NetFlow* DIB_A63_B, // net ID: DIB lsb: 0  msb: 63 INPUT
			NetFlow* DIB_A62_B, // net ID: DIB lsb: 0  msb: 63 INPUT
			NetFlow* DIB_A61_B, // net ID: DIB lsb: 0  msb: 63 INPUT
			NetFlow* DIB_A60_B, // net ID: DIB lsb: 0  msb: 63 INPUT
			NetFlow* DIB_A59_B, // net ID: DIB lsb: 0  msb: 63 INPUT
			NetFlow* DIB_A58_B, // net ID: DIB lsb: 0  msb: 63 INPUT
			NetFlow* DIB_A57_B, // net ID: DIB lsb: 0  msb: 63 INPUT
			NetFlow* DIB_A56_B, // net ID: DIB lsb: 0  msb: 63 INPUT
			NetFlow* DIB_A55_B, // net ID: DIB lsb: 0  msb: 63 INPUT
			NetFlow* DIB_A54_B, // net ID: DIB lsb: 0  msb: 63 INPUT
			NetFlow* DIB_A53_B, // net ID: DIB lsb: 0  msb: 63 INPUT
			NetFlow* DIB_A52_B, // net ID: DIB lsb: 0  msb: 63 INPUT
			NetFlow* DIB_A51_B, // net ID: DIB lsb: 0  msb: 63 INPUT
			NetFlow* DIB_A50_B, // net ID: DIB lsb: 0  msb: 63 INPUT
			NetFlow* DIB_A49_B, // net ID: DIB lsb: 0  msb: 63 INPUT
			NetFlow* DIB_A48_B, // net ID: DIB lsb: 0  msb: 63 INPUT
			NetFlow* DIB_A47_B, // net ID: DIB lsb: 0  msb: 63 INPUT
			NetFlow* DIB_A46_B, // net ID: DIB lsb: 0  msb: 63 INPUT
			NetFlow* DIB_A45_B, // net ID: DIB lsb: 0  msb: 63 INPUT
			NetFlow* DIB_A44_B, // net ID: DIB lsb: 0  msb: 63 INPUT
			NetFlow* DIB_A43_B, // net ID: DIB lsb: 0  msb: 63 INPUT
			NetFlow* DIB_A42_B, // net ID: DIB lsb: 0  msb: 63 INPUT
			NetFlow* DIB_A41_B, // net ID: DIB lsb: 0  msb: 63 INPUT
			NetFlow* DIB_A40_B, // net ID: DIB lsb: 0  msb: 63 INPUT
			NetFlow* DIB_A39_B, // net ID: DIB lsb: 0  msb: 63 INPUT
			NetFlow* DIB_A38_B, // net ID: DIB lsb: 0  msb: 63 INPUT
			NetFlow* DIB_A37_B, // net ID: DIB lsb: 0  msb: 63 INPUT
			NetFlow* DIB_A36_B, // net ID: DIB lsb: 0  msb: 63 INPUT
			NetFlow* DIB_A35_B, // net ID: DIB lsb: 0  msb: 63 INPUT
			NetFlow* DIB_A34_B, // net ID: DIB lsb: 0  msb: 63 INPUT
			NetFlow* DIB_A33_B, // net ID: DIB lsb: 0  msb: 63 INPUT
			NetFlow* DIB_A32_B, // net ID: DIB lsb: 0  msb: 63 INPUT
			NetFlow* DIB_A31_B, // net ID: DIB lsb: 0  msb: 63 INPUT
			NetFlow* DIB_A30_B, // net ID: DIB lsb: 0  msb: 63 INPUT
			NetFlow* DIB_A29_B, // net ID: DIB lsb: 0  msb: 63 INPUT
			NetFlow* DIB_A28_B, // net ID: DIB lsb: 0  msb: 63 INPUT
			NetFlow* DIB_A27_B, // net ID: DIB lsb: 0  msb: 63 INPUT
			NetFlow* DIB_A26_B, // net ID: DIB lsb: 0  msb: 63 INPUT
			NetFlow* DIB_A25_B, // net ID: DIB lsb: 0  msb: 63 INPUT
			NetFlow* DIB_A24_B, // net ID: DIB lsb: 0  msb: 63 INPUT
			NetFlow* DIB_A23_B, // net ID: DIB lsb: 0  msb: 63 INPUT
			NetFlow* DIB_A22_B, // net ID: DIB lsb: 0  msb: 63 INPUT
			NetFlow* DIB_A21_B, // net ID: DIB lsb: 0  msb: 63 INPUT
			NetFlow* DIB_A20_B, // net ID: DIB lsb: 0  msb: 63 INPUT
			NetFlow* DIB_A19_B, // net ID: DIB lsb: 0  msb: 63 INPUT
			NetFlow* DIB_A18_B, // net ID: DIB lsb: 0  msb: 63 INPUT
			NetFlow* DIB_A17_B, // net ID: DIB lsb: 0  msb: 63 INPUT
			NetFlow* DIB_A16_B, // net ID: DIB lsb: 0  msb: 63 INPUT
			NetFlow* DIB_A15_B, // net ID: DIB lsb: 0  msb: 63 INPUT
			NetFlow* DIB_A14_B, // net ID: DIB lsb: 0  msb: 63 INPUT
			NetFlow* DIB_A13_B, // net ID: DIB lsb: 0  msb: 63 INPUT
			NetFlow* DIB_A12_B, // net ID: DIB lsb: 0  msb: 63 INPUT
			NetFlow* DIB_A11_B, // net ID: DIB lsb: 0  msb: 63 INPUT
			NetFlow* DIB_A10_B, // net ID: DIB lsb: 0  msb: 63 INPUT
			NetFlow* DIB_A9_B, // net ID: DIB lsb: 0  msb: 63 INPUT
			NetFlow* DIB_A8_B, // net ID: DIB lsb: 0  msb: 63 INPUT
			NetFlow* DIB_A7_B, // net ID: DIB lsb: 0  msb: 63 INPUT
			NetFlow* DIB_A6_B, // net ID: DIB lsb: 0  msb: 63 INPUT
			NetFlow* DIB_A5_B, // net ID: DIB lsb: 0  msb: 63 INPUT
			NetFlow* DIB_A4_B, // net ID: DIB lsb: 0  msb: 63 INPUT
			NetFlow* DIB_A3_B, // net ID: DIB lsb: 0  msb: 63 INPUT
			NetFlow* DIB_A2_B, // net ID: DIB lsb: 0  msb: 63 INPUT
			NetFlow* DIB_A1_B, // net ID: DIB lsb: 0  msb: 63 INPUT
			NetFlow* DIB_A0_B, // net ID: DIB lsb: 0  msb: 63 INPUT
			NetFlow* DIPA_A3_B, // net ID: DIPA lsb: 0  msb: 3 INPUT
			NetFlow* DIPA_A2_B, // net ID: DIPA lsb: 0  msb: 3 INPUT
			NetFlow* DIPA_A1_B, // net ID: DIPA lsb: 0  msb: 3 INPUT
			NetFlow* DIPA_A0_B, // net ID: DIPA lsb: 0  msb: 3 INPUT
			NetFlow* DIPB_A7_B, // net ID: DIPB lsb: 0  msb: 7 INPUT
			NetFlow* DIPB_A6_B, // net ID: DIPB lsb: 0  msb: 7 INPUT
			NetFlow* DIPB_A5_B, // net ID: DIPB lsb: 0  msb: 7 INPUT
			NetFlow* DIPB_A4_B, // net ID: DIPB lsb: 0  msb: 7 INPUT
			NetFlow* DIPB_A3_B, // net ID: DIPB lsb: 0  msb: 7 INPUT
			NetFlow* DIPB_A2_B, // net ID: DIPB lsb: 0  msb: 7 INPUT
			NetFlow* DIPB_A1_B, // net ID: DIPB lsb: 0  msb: 7 INPUT
			NetFlow* DIPB_A0_B, // net ID: DIPB lsb: 0  msb: 7 INPUT
			NetFlow* ENA_A0_B, // net ID: ENA lsb: 0  msb: 0 INPUT
			NetFlow* ENB_A0_B, // net ID: ENB lsb: 0  msb: 0 INPUT
			NetFlow* GSR_A0_B, // net ID: GSR lsb: 0  msb: 0 INPUT
			NetFlow* REGCEA_A0_B, // net ID: REGCEA lsb: 0  msb: 0 INPUT
			NetFlow* REGCEB_A0_B, // net ID: REGCEB lsb: 0  msb: 0 INPUT
			NetFlow* REGCLKA_A0_B, // net ID: REGCLKA lsb: 0  msb: 0 INPUT
			NetFlow* REGCLKB_A0_B, // net ID: REGCLKB lsb: 0  msb: 0 INPUT
			NetFlow* SSRA_A0_B, // net ID: SSRA lsb: 0  msb: 0 INPUT
			NetFlow* SSRB_A0_B, // net ID: SSRB lsb: 0  msb: 0 INPUT
			NetFlow* WEA_A7_B, // net ID: WEA lsb: 0  msb: 7 INPUT
			NetFlow* WEA_A6_B, // net ID: WEA lsb: 0  msb: 7 INPUT
			NetFlow* WEA_A5_B, // net ID: WEA lsb: 0  msb: 7 INPUT
			NetFlow* WEA_A4_B, // net ID: WEA lsb: 0  msb: 7 INPUT
			NetFlow* WEA_A3_B, // net ID: WEA lsb: 0  msb: 7 INPUT
			NetFlow* WEA_A2_B, // net ID: WEA lsb: 0  msb: 7 INPUT
			NetFlow* WEA_A1_B, // net ID: WEA lsb: 0  msb: 7 INPUT
			NetFlow* WEA_A0_B, // net ID: WEA lsb: 0  msb: 7 INPUT
			NetFlow* WEB_A7_B, // net ID: WEB lsb: 0  msb: 7 INPUT
			NetFlow* WEB_A6_B, // net ID: WEB lsb: 0  msb: 7 INPUT
			NetFlow* WEB_A5_B, // net ID: WEB lsb: 0  msb: 7 INPUT
			NetFlow* WEB_A4_B, // net ID: WEB lsb: 0  msb: 7 INPUT
			NetFlow* WEB_A3_B, // net ID: WEB lsb: 0  msb: 7 INPUT
			NetFlow* WEB_A2_B, // net ID: WEB lsb: 0  msb: 7 INPUT
			NetFlow* WEB_A1_B, // net ID: WEB lsb: 0  msb: 7 INPUT
			NetFlow* WEB_A0_B // net ID: WEB lsb: 0  msb: 7 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->DOA_REG = DOA_REG; // Default: 0
			this->DOB_REG = DOB_REG; // Default: 0
			this->EN_ECC_READ = EN_ECC_READ; // Default: "FALSE"
			this->EN_ECC_SCRUB = EN_ECC_SCRUB; // Default: "FALSE"
			this->EN_ECC_WRITE = EN_ECC_WRITE; // Default: "FALSE"
			this->INIT_A = INIT_A; // Default: 72'h0
			this->INIT_B = INIT_B; // Default: 72'h0
			this->RAM_EXTENSION_A = RAM_EXTENSION_A; // Default: "NONE"
			this->RAM_EXTENSION_B = RAM_EXTENSION_B; // Default: "NONE"
			this->READ_WIDTH_A = READ_WIDTH_A; // Default: 0
			this->READ_WIDTH_B = READ_WIDTH_B; // Default: 0
			this->SETUP_ALL = SETUP_ALL; // Default: 1000
			this->SETUP_READ_FIRST = SETUP_READ_FIRST; // Default: 3000
			this->SIM_COLLISION_CHECK = SIM_COLLISION_CHECK; // Default: "ALL"
			this->SRVAL_A = SRVAL_A; // Default: 72'h0
			this->SRVAL_B = SRVAL_B; // Default: 72'h0
			this->WRITE_MODE_A = WRITE_MODE_A; // Default: "WRITE_FIRST"
			this->WRITE_MODE_B = WRITE_MODE_B; // Default: "WRITE_FIRST"
			this->WRITE_WIDTH_A = WRITE_WIDTH_A; // Default: 0
			this->WRITE_WIDTH_B = WRITE_WIDTH_B; // Default: 0
			this->INIT_FILE = INIT_FILE; // Default: "NONE"
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
			this->INIT_40 = INIT_40; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_41 = INIT_41; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_42 = INIT_42; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_43 = INIT_43; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_44 = INIT_44; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_45 = INIT_45; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_46 = INIT_46; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_47 = INIT_47; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_48 = INIT_48; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_49 = INIT_49; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_4A = INIT_4A; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_4B = INIT_4B; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_4C = INIT_4C; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_4D = INIT_4D; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_4E = INIT_4E; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_4F = INIT_4F; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_50 = INIT_50; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_51 = INIT_51; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_52 = INIT_52; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_53 = INIT_53; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_54 = INIT_54; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_55 = INIT_55; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_56 = INIT_56; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_57 = INIT_57; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_58 = INIT_58; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_59 = INIT_59; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_5A = INIT_5A; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_5B = INIT_5B; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_5C = INIT_5C; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_5D = INIT_5D; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_5E = INIT_5E; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_5F = INIT_5F; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_60 = INIT_60; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_61 = INIT_61; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_62 = INIT_62; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_63 = INIT_63; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_64 = INIT_64; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_65 = INIT_65; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_66 = INIT_66; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_67 = INIT_67; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_68 = INIT_68; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_69 = INIT_69; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_6A = INIT_6A; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_6B = INIT_6B; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_6C = INIT_6C; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_6D = INIT_6D; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_6E = INIT_6E; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_6F = INIT_6F; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_70 = INIT_70; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_71 = INIT_71; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_72 = INIT_72; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_73 = INIT_73; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_74 = INIT_74; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_75 = INIT_75; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_76 = INIT_76; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_77 = INIT_77; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_78 = INIT_78; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_79 = INIT_79; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_7A = INIT_7A; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_7B = INIT_7B; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_7C = INIT_7C; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_7D = INIT_7D; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_7E = INIT_7E; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_7F = INIT_7F; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INITP_00 = INITP_00; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INITP_01 = INITP_01; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INITP_02 = INITP_02; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INITP_03 = INITP_03; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INITP_04 = INITP_04; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INITP_05 = INITP_05; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INITP_06 = INITP_06; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INITP_07 = INITP_07; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INITP_08 = INITP_08; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INITP_09 = INITP_09; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INITP_0A = INITP_0A; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INITP_0B = INITP_0B; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INITP_0C = INITP_0C; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INITP_0D = INITP_0D; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INITP_0E = INITP_0E; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INITP_0F = INITP_0F; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->BRAM_MODE = BRAM_MODE; // Default: "TRUE_DUAL_PORT"
			this->BRAM_SIZE = BRAM_SIZE; // Default: 36
			//Verilog Ports in definition order:
			this->CASCADEOUTLATA_A0_B = CASCADEOUTLATA_A0_B; // net ID: CASCADEOUTLATA lsb: 0  msb: 0 OUTPUT
			this->CASCADEOUTLATB_A0_B = CASCADEOUTLATB_A0_B; // net ID: CASCADEOUTLATB lsb: 0  msb: 0 OUTPUT
			this->CASCADEOUTREGA_A0_B = CASCADEOUTREGA_A0_B; // net ID: CASCADEOUTREGA lsb: 0  msb: 0 OUTPUT
			this->CASCADEOUTREGB_A0_B = CASCADEOUTREGB_A0_B; // net ID: CASCADEOUTREGB lsb: 0  msb: 0 OUTPUT
			this->DBITERR_A0_B = DBITERR_A0_B; // net ID: DBITERR lsb: 0  msb: 0 OUTPUT
			this->DOA_A63_B = DOA_A63_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
			this->DOA_A62_B = DOA_A62_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
			this->DOA_A61_B = DOA_A61_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
			this->DOA_A60_B = DOA_A60_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
			this->DOA_A59_B = DOA_A59_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
			this->DOA_A58_B = DOA_A58_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
			this->DOA_A57_B = DOA_A57_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
			this->DOA_A56_B = DOA_A56_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
			this->DOA_A55_B = DOA_A55_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
			this->DOA_A54_B = DOA_A54_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
			this->DOA_A53_B = DOA_A53_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
			this->DOA_A52_B = DOA_A52_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
			this->DOA_A51_B = DOA_A51_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
			this->DOA_A50_B = DOA_A50_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
			this->DOA_A49_B = DOA_A49_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
			this->DOA_A48_B = DOA_A48_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
			this->DOA_A47_B = DOA_A47_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
			this->DOA_A46_B = DOA_A46_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
			this->DOA_A45_B = DOA_A45_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
			this->DOA_A44_B = DOA_A44_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
			this->DOA_A43_B = DOA_A43_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
			this->DOA_A42_B = DOA_A42_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
			this->DOA_A41_B = DOA_A41_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
			this->DOA_A40_B = DOA_A40_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
			this->DOA_A39_B = DOA_A39_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
			this->DOA_A38_B = DOA_A38_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
			this->DOA_A37_B = DOA_A37_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
			this->DOA_A36_B = DOA_A36_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
			this->DOA_A35_B = DOA_A35_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
			this->DOA_A34_B = DOA_A34_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
			this->DOA_A33_B = DOA_A33_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
			this->DOA_A32_B = DOA_A32_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
			this->DOA_A31_B = DOA_A31_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
			this->DOA_A30_B = DOA_A30_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
			this->DOA_A29_B = DOA_A29_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
			this->DOA_A28_B = DOA_A28_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
			this->DOA_A27_B = DOA_A27_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
			this->DOA_A26_B = DOA_A26_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
			this->DOA_A25_B = DOA_A25_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
			this->DOA_A24_B = DOA_A24_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
			this->DOA_A23_B = DOA_A23_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
			this->DOA_A22_B = DOA_A22_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
			this->DOA_A21_B = DOA_A21_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
			this->DOA_A20_B = DOA_A20_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
			this->DOA_A19_B = DOA_A19_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
			this->DOA_A18_B = DOA_A18_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
			this->DOA_A17_B = DOA_A17_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
			this->DOA_A16_B = DOA_A16_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
			this->DOA_A15_B = DOA_A15_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
			this->DOA_A14_B = DOA_A14_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
			this->DOA_A13_B = DOA_A13_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
			this->DOA_A12_B = DOA_A12_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
			this->DOA_A11_B = DOA_A11_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
			this->DOA_A10_B = DOA_A10_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
			this->DOA_A9_B = DOA_A9_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
			this->DOA_A8_B = DOA_A8_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
			this->DOA_A7_B = DOA_A7_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
			this->DOA_A6_B = DOA_A6_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
			this->DOA_A5_B = DOA_A5_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
			this->DOA_A4_B = DOA_A4_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
			this->DOA_A3_B = DOA_A3_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
			this->DOA_A2_B = DOA_A2_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
			this->DOA_A1_B = DOA_A1_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
			this->DOA_A0_B = DOA_A0_B; // net ID: DOA lsb: 0  msb: 63 OUTPUT
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
			this->DOPA_A7_B = DOPA_A7_B; // net ID: DOPA lsb: 0  msb: 7 OUTPUT
			this->DOPA_A6_B = DOPA_A6_B; // net ID: DOPA lsb: 0  msb: 7 OUTPUT
			this->DOPA_A5_B = DOPA_A5_B; // net ID: DOPA lsb: 0  msb: 7 OUTPUT
			this->DOPA_A4_B = DOPA_A4_B; // net ID: DOPA lsb: 0  msb: 7 OUTPUT
			this->DOPA_A3_B = DOPA_A3_B; // net ID: DOPA lsb: 0  msb: 7 OUTPUT
			this->DOPA_A2_B = DOPA_A2_B; // net ID: DOPA lsb: 0  msb: 7 OUTPUT
			this->DOPA_A1_B = DOPA_A1_B; // net ID: DOPA lsb: 0  msb: 7 OUTPUT
			this->DOPA_A0_B = DOPA_A0_B; // net ID: DOPA lsb: 0  msb: 7 OUTPUT
			this->DOPB_A3_B = DOPB_A3_B; // net ID: DOPB lsb: 0  msb: 3 OUTPUT
			this->DOPB_A2_B = DOPB_A2_B; // net ID: DOPB lsb: 0  msb: 3 OUTPUT
			this->DOPB_A1_B = DOPB_A1_B; // net ID: DOPB lsb: 0  msb: 3 OUTPUT
			this->DOPB_A0_B = DOPB_A0_B; // net ID: DOPB lsb: 0  msb: 3 OUTPUT
			this->ECCPARITY_A7_B = ECCPARITY_A7_B; // net ID: ECCPARITY lsb: 0  msb: 7 OUTPUT
			this->ECCPARITY_A6_B = ECCPARITY_A6_B; // net ID: ECCPARITY lsb: 0  msb: 7 OUTPUT
			this->ECCPARITY_A5_B = ECCPARITY_A5_B; // net ID: ECCPARITY lsb: 0  msb: 7 OUTPUT
			this->ECCPARITY_A4_B = ECCPARITY_A4_B; // net ID: ECCPARITY lsb: 0  msb: 7 OUTPUT
			this->ECCPARITY_A3_B = ECCPARITY_A3_B; // net ID: ECCPARITY lsb: 0  msb: 7 OUTPUT
			this->ECCPARITY_A2_B = ECCPARITY_A2_B; // net ID: ECCPARITY lsb: 0  msb: 7 OUTPUT
			this->ECCPARITY_A1_B = ECCPARITY_A1_B; // net ID: ECCPARITY lsb: 0  msb: 7 OUTPUT
			this->ECCPARITY_A0_B = ECCPARITY_A0_B; // net ID: ECCPARITY lsb: 0  msb: 7 OUTPUT
			this->SBITERR_A0_B = SBITERR_A0_B; // net ID: SBITERR lsb: 0  msb: 0 OUTPUT
			this->ADDRA_A15_B = ADDRA_A15_B; // net ID: ADDRA lsb: 0  msb: 15 INPUT
			this->ADDRA_A14_B = ADDRA_A14_B; // net ID: ADDRA lsb: 0  msb: 15 INPUT
			this->ADDRA_A13_B = ADDRA_A13_B; // net ID: ADDRA lsb: 0  msb: 15 INPUT
			this->ADDRA_A12_B = ADDRA_A12_B; // net ID: ADDRA lsb: 0  msb: 15 INPUT
			this->ADDRA_A11_B = ADDRA_A11_B; // net ID: ADDRA lsb: 0  msb: 15 INPUT
			this->ADDRA_A10_B = ADDRA_A10_B; // net ID: ADDRA lsb: 0  msb: 15 INPUT
			this->ADDRA_A9_B = ADDRA_A9_B; // net ID: ADDRA lsb: 0  msb: 15 INPUT
			this->ADDRA_A8_B = ADDRA_A8_B; // net ID: ADDRA lsb: 0  msb: 15 INPUT
			this->ADDRA_A7_B = ADDRA_A7_B; // net ID: ADDRA lsb: 0  msb: 15 INPUT
			this->ADDRA_A6_B = ADDRA_A6_B; // net ID: ADDRA lsb: 0  msb: 15 INPUT
			this->ADDRA_A5_B = ADDRA_A5_B; // net ID: ADDRA lsb: 0  msb: 15 INPUT
			this->ADDRA_A4_B = ADDRA_A4_B; // net ID: ADDRA lsb: 0  msb: 15 INPUT
			this->ADDRA_A3_B = ADDRA_A3_B; // net ID: ADDRA lsb: 0  msb: 15 INPUT
			this->ADDRA_A2_B = ADDRA_A2_B; // net ID: ADDRA lsb: 0  msb: 15 INPUT
			this->ADDRA_A1_B = ADDRA_A1_B; // net ID: ADDRA lsb: 0  msb: 15 INPUT
			this->ADDRA_A0_B = ADDRA_A0_B; // net ID: ADDRA lsb: 0  msb: 15 INPUT
			this->ADDRB_A15_B = ADDRB_A15_B; // net ID: ADDRB lsb: 0  msb: 15 INPUT
			this->ADDRB_A14_B = ADDRB_A14_B; // net ID: ADDRB lsb: 0  msb: 15 INPUT
			this->ADDRB_A13_B = ADDRB_A13_B; // net ID: ADDRB lsb: 0  msb: 15 INPUT
			this->ADDRB_A12_B = ADDRB_A12_B; // net ID: ADDRB lsb: 0  msb: 15 INPUT
			this->ADDRB_A11_B = ADDRB_A11_B; // net ID: ADDRB lsb: 0  msb: 15 INPUT
			this->ADDRB_A10_B = ADDRB_A10_B; // net ID: ADDRB lsb: 0  msb: 15 INPUT
			this->ADDRB_A9_B = ADDRB_A9_B; // net ID: ADDRB lsb: 0  msb: 15 INPUT
			this->ADDRB_A8_B = ADDRB_A8_B; // net ID: ADDRB lsb: 0  msb: 15 INPUT
			this->ADDRB_A7_B = ADDRB_A7_B; // net ID: ADDRB lsb: 0  msb: 15 INPUT
			this->ADDRB_A6_B = ADDRB_A6_B; // net ID: ADDRB lsb: 0  msb: 15 INPUT
			this->ADDRB_A5_B = ADDRB_A5_B; // net ID: ADDRB lsb: 0  msb: 15 INPUT
			this->ADDRB_A4_B = ADDRB_A4_B; // net ID: ADDRB lsb: 0  msb: 15 INPUT
			this->ADDRB_A3_B = ADDRB_A3_B; // net ID: ADDRB lsb: 0  msb: 15 INPUT
			this->ADDRB_A2_B = ADDRB_A2_B; // net ID: ADDRB lsb: 0  msb: 15 INPUT
			this->ADDRB_A1_B = ADDRB_A1_B; // net ID: ADDRB lsb: 0  msb: 15 INPUT
			this->ADDRB_A0_B = ADDRB_A0_B; // net ID: ADDRB lsb: 0  msb: 15 INPUT
			this->CASCADEINLATA_A0_B = CASCADEINLATA_A0_B; // net ID: CASCADEINLATA lsb: 0  msb: 0 INPUT
			this->CASCADEINLATB_A0_B = CASCADEINLATB_A0_B; // net ID: CASCADEINLATB lsb: 0  msb: 0 INPUT
			this->CASCADEINREGA_A0_B = CASCADEINREGA_A0_B; // net ID: CASCADEINREGA lsb: 0  msb: 0 INPUT
			this->CASCADEINREGB_A0_B = CASCADEINREGB_A0_B; // net ID: CASCADEINREGB lsb: 0  msb: 0 INPUT
			this->CLKA_A0_B = CLKA_A0_B; // net ID: CLKA lsb: 0  msb: 0 INPUT
			this->CLKB_A0_B = CLKB_A0_B; // net ID: CLKB lsb: 0  msb: 0 INPUT
			this->DIA_A63_B = DIA_A63_B; // net ID: DIA lsb: 0  msb: 63 INPUT
			this->DIA_A62_B = DIA_A62_B; // net ID: DIA lsb: 0  msb: 63 INPUT
			this->DIA_A61_B = DIA_A61_B; // net ID: DIA lsb: 0  msb: 63 INPUT
			this->DIA_A60_B = DIA_A60_B; // net ID: DIA lsb: 0  msb: 63 INPUT
			this->DIA_A59_B = DIA_A59_B; // net ID: DIA lsb: 0  msb: 63 INPUT
			this->DIA_A58_B = DIA_A58_B; // net ID: DIA lsb: 0  msb: 63 INPUT
			this->DIA_A57_B = DIA_A57_B; // net ID: DIA lsb: 0  msb: 63 INPUT
			this->DIA_A56_B = DIA_A56_B; // net ID: DIA lsb: 0  msb: 63 INPUT
			this->DIA_A55_B = DIA_A55_B; // net ID: DIA lsb: 0  msb: 63 INPUT
			this->DIA_A54_B = DIA_A54_B; // net ID: DIA lsb: 0  msb: 63 INPUT
			this->DIA_A53_B = DIA_A53_B; // net ID: DIA lsb: 0  msb: 63 INPUT
			this->DIA_A52_B = DIA_A52_B; // net ID: DIA lsb: 0  msb: 63 INPUT
			this->DIA_A51_B = DIA_A51_B; // net ID: DIA lsb: 0  msb: 63 INPUT
			this->DIA_A50_B = DIA_A50_B; // net ID: DIA lsb: 0  msb: 63 INPUT
			this->DIA_A49_B = DIA_A49_B; // net ID: DIA lsb: 0  msb: 63 INPUT
			this->DIA_A48_B = DIA_A48_B; // net ID: DIA lsb: 0  msb: 63 INPUT
			this->DIA_A47_B = DIA_A47_B; // net ID: DIA lsb: 0  msb: 63 INPUT
			this->DIA_A46_B = DIA_A46_B; // net ID: DIA lsb: 0  msb: 63 INPUT
			this->DIA_A45_B = DIA_A45_B; // net ID: DIA lsb: 0  msb: 63 INPUT
			this->DIA_A44_B = DIA_A44_B; // net ID: DIA lsb: 0  msb: 63 INPUT
			this->DIA_A43_B = DIA_A43_B; // net ID: DIA lsb: 0  msb: 63 INPUT
			this->DIA_A42_B = DIA_A42_B; // net ID: DIA lsb: 0  msb: 63 INPUT
			this->DIA_A41_B = DIA_A41_B; // net ID: DIA lsb: 0  msb: 63 INPUT
			this->DIA_A40_B = DIA_A40_B; // net ID: DIA lsb: 0  msb: 63 INPUT
			this->DIA_A39_B = DIA_A39_B; // net ID: DIA lsb: 0  msb: 63 INPUT
			this->DIA_A38_B = DIA_A38_B; // net ID: DIA lsb: 0  msb: 63 INPUT
			this->DIA_A37_B = DIA_A37_B; // net ID: DIA lsb: 0  msb: 63 INPUT
			this->DIA_A36_B = DIA_A36_B; // net ID: DIA lsb: 0  msb: 63 INPUT
			this->DIA_A35_B = DIA_A35_B; // net ID: DIA lsb: 0  msb: 63 INPUT
			this->DIA_A34_B = DIA_A34_B; // net ID: DIA lsb: 0  msb: 63 INPUT
			this->DIA_A33_B = DIA_A33_B; // net ID: DIA lsb: 0  msb: 63 INPUT
			this->DIA_A32_B = DIA_A32_B; // net ID: DIA lsb: 0  msb: 63 INPUT
			this->DIA_A31_B = DIA_A31_B; // net ID: DIA lsb: 0  msb: 63 INPUT
			this->DIA_A30_B = DIA_A30_B; // net ID: DIA lsb: 0  msb: 63 INPUT
			this->DIA_A29_B = DIA_A29_B; // net ID: DIA lsb: 0  msb: 63 INPUT
			this->DIA_A28_B = DIA_A28_B; // net ID: DIA lsb: 0  msb: 63 INPUT
			this->DIA_A27_B = DIA_A27_B; // net ID: DIA lsb: 0  msb: 63 INPUT
			this->DIA_A26_B = DIA_A26_B; // net ID: DIA lsb: 0  msb: 63 INPUT
			this->DIA_A25_B = DIA_A25_B; // net ID: DIA lsb: 0  msb: 63 INPUT
			this->DIA_A24_B = DIA_A24_B; // net ID: DIA lsb: 0  msb: 63 INPUT
			this->DIA_A23_B = DIA_A23_B; // net ID: DIA lsb: 0  msb: 63 INPUT
			this->DIA_A22_B = DIA_A22_B; // net ID: DIA lsb: 0  msb: 63 INPUT
			this->DIA_A21_B = DIA_A21_B; // net ID: DIA lsb: 0  msb: 63 INPUT
			this->DIA_A20_B = DIA_A20_B; // net ID: DIA lsb: 0  msb: 63 INPUT
			this->DIA_A19_B = DIA_A19_B; // net ID: DIA lsb: 0  msb: 63 INPUT
			this->DIA_A18_B = DIA_A18_B; // net ID: DIA lsb: 0  msb: 63 INPUT
			this->DIA_A17_B = DIA_A17_B; // net ID: DIA lsb: 0  msb: 63 INPUT
			this->DIA_A16_B = DIA_A16_B; // net ID: DIA lsb: 0  msb: 63 INPUT
			this->DIA_A15_B = DIA_A15_B; // net ID: DIA lsb: 0  msb: 63 INPUT
			this->DIA_A14_B = DIA_A14_B; // net ID: DIA lsb: 0  msb: 63 INPUT
			this->DIA_A13_B = DIA_A13_B; // net ID: DIA lsb: 0  msb: 63 INPUT
			this->DIA_A12_B = DIA_A12_B; // net ID: DIA lsb: 0  msb: 63 INPUT
			this->DIA_A11_B = DIA_A11_B; // net ID: DIA lsb: 0  msb: 63 INPUT
			this->DIA_A10_B = DIA_A10_B; // net ID: DIA lsb: 0  msb: 63 INPUT
			this->DIA_A9_B = DIA_A9_B; // net ID: DIA lsb: 0  msb: 63 INPUT
			this->DIA_A8_B = DIA_A8_B; // net ID: DIA lsb: 0  msb: 63 INPUT
			this->DIA_A7_B = DIA_A7_B; // net ID: DIA lsb: 0  msb: 63 INPUT
			this->DIA_A6_B = DIA_A6_B; // net ID: DIA lsb: 0  msb: 63 INPUT
			this->DIA_A5_B = DIA_A5_B; // net ID: DIA lsb: 0  msb: 63 INPUT
			this->DIA_A4_B = DIA_A4_B; // net ID: DIA lsb: 0  msb: 63 INPUT
			this->DIA_A3_B = DIA_A3_B; // net ID: DIA lsb: 0  msb: 63 INPUT
			this->DIA_A2_B = DIA_A2_B; // net ID: DIA lsb: 0  msb: 63 INPUT
			this->DIA_A1_B = DIA_A1_B; // net ID: DIA lsb: 0  msb: 63 INPUT
			this->DIA_A0_B = DIA_A0_B; // net ID: DIA lsb: 0  msb: 63 INPUT
			this->DIB_A63_B = DIB_A63_B; // net ID: DIB lsb: 0  msb: 63 INPUT
			this->DIB_A62_B = DIB_A62_B; // net ID: DIB lsb: 0  msb: 63 INPUT
			this->DIB_A61_B = DIB_A61_B; // net ID: DIB lsb: 0  msb: 63 INPUT
			this->DIB_A60_B = DIB_A60_B; // net ID: DIB lsb: 0  msb: 63 INPUT
			this->DIB_A59_B = DIB_A59_B; // net ID: DIB lsb: 0  msb: 63 INPUT
			this->DIB_A58_B = DIB_A58_B; // net ID: DIB lsb: 0  msb: 63 INPUT
			this->DIB_A57_B = DIB_A57_B; // net ID: DIB lsb: 0  msb: 63 INPUT
			this->DIB_A56_B = DIB_A56_B; // net ID: DIB lsb: 0  msb: 63 INPUT
			this->DIB_A55_B = DIB_A55_B; // net ID: DIB lsb: 0  msb: 63 INPUT
			this->DIB_A54_B = DIB_A54_B; // net ID: DIB lsb: 0  msb: 63 INPUT
			this->DIB_A53_B = DIB_A53_B; // net ID: DIB lsb: 0  msb: 63 INPUT
			this->DIB_A52_B = DIB_A52_B; // net ID: DIB lsb: 0  msb: 63 INPUT
			this->DIB_A51_B = DIB_A51_B; // net ID: DIB lsb: 0  msb: 63 INPUT
			this->DIB_A50_B = DIB_A50_B; // net ID: DIB lsb: 0  msb: 63 INPUT
			this->DIB_A49_B = DIB_A49_B; // net ID: DIB lsb: 0  msb: 63 INPUT
			this->DIB_A48_B = DIB_A48_B; // net ID: DIB lsb: 0  msb: 63 INPUT
			this->DIB_A47_B = DIB_A47_B; // net ID: DIB lsb: 0  msb: 63 INPUT
			this->DIB_A46_B = DIB_A46_B; // net ID: DIB lsb: 0  msb: 63 INPUT
			this->DIB_A45_B = DIB_A45_B; // net ID: DIB lsb: 0  msb: 63 INPUT
			this->DIB_A44_B = DIB_A44_B; // net ID: DIB lsb: 0  msb: 63 INPUT
			this->DIB_A43_B = DIB_A43_B; // net ID: DIB lsb: 0  msb: 63 INPUT
			this->DIB_A42_B = DIB_A42_B; // net ID: DIB lsb: 0  msb: 63 INPUT
			this->DIB_A41_B = DIB_A41_B; // net ID: DIB lsb: 0  msb: 63 INPUT
			this->DIB_A40_B = DIB_A40_B; // net ID: DIB lsb: 0  msb: 63 INPUT
			this->DIB_A39_B = DIB_A39_B; // net ID: DIB lsb: 0  msb: 63 INPUT
			this->DIB_A38_B = DIB_A38_B; // net ID: DIB lsb: 0  msb: 63 INPUT
			this->DIB_A37_B = DIB_A37_B; // net ID: DIB lsb: 0  msb: 63 INPUT
			this->DIB_A36_B = DIB_A36_B; // net ID: DIB lsb: 0  msb: 63 INPUT
			this->DIB_A35_B = DIB_A35_B; // net ID: DIB lsb: 0  msb: 63 INPUT
			this->DIB_A34_B = DIB_A34_B; // net ID: DIB lsb: 0  msb: 63 INPUT
			this->DIB_A33_B = DIB_A33_B; // net ID: DIB lsb: 0  msb: 63 INPUT
			this->DIB_A32_B = DIB_A32_B; // net ID: DIB lsb: 0  msb: 63 INPUT
			this->DIB_A31_B = DIB_A31_B; // net ID: DIB lsb: 0  msb: 63 INPUT
			this->DIB_A30_B = DIB_A30_B; // net ID: DIB lsb: 0  msb: 63 INPUT
			this->DIB_A29_B = DIB_A29_B; // net ID: DIB lsb: 0  msb: 63 INPUT
			this->DIB_A28_B = DIB_A28_B; // net ID: DIB lsb: 0  msb: 63 INPUT
			this->DIB_A27_B = DIB_A27_B; // net ID: DIB lsb: 0  msb: 63 INPUT
			this->DIB_A26_B = DIB_A26_B; // net ID: DIB lsb: 0  msb: 63 INPUT
			this->DIB_A25_B = DIB_A25_B; // net ID: DIB lsb: 0  msb: 63 INPUT
			this->DIB_A24_B = DIB_A24_B; // net ID: DIB lsb: 0  msb: 63 INPUT
			this->DIB_A23_B = DIB_A23_B; // net ID: DIB lsb: 0  msb: 63 INPUT
			this->DIB_A22_B = DIB_A22_B; // net ID: DIB lsb: 0  msb: 63 INPUT
			this->DIB_A21_B = DIB_A21_B; // net ID: DIB lsb: 0  msb: 63 INPUT
			this->DIB_A20_B = DIB_A20_B; // net ID: DIB lsb: 0  msb: 63 INPUT
			this->DIB_A19_B = DIB_A19_B; // net ID: DIB lsb: 0  msb: 63 INPUT
			this->DIB_A18_B = DIB_A18_B; // net ID: DIB lsb: 0  msb: 63 INPUT
			this->DIB_A17_B = DIB_A17_B; // net ID: DIB lsb: 0  msb: 63 INPUT
			this->DIB_A16_B = DIB_A16_B; // net ID: DIB lsb: 0  msb: 63 INPUT
			this->DIB_A15_B = DIB_A15_B; // net ID: DIB lsb: 0  msb: 63 INPUT
			this->DIB_A14_B = DIB_A14_B; // net ID: DIB lsb: 0  msb: 63 INPUT
			this->DIB_A13_B = DIB_A13_B; // net ID: DIB lsb: 0  msb: 63 INPUT
			this->DIB_A12_B = DIB_A12_B; // net ID: DIB lsb: 0  msb: 63 INPUT
			this->DIB_A11_B = DIB_A11_B; // net ID: DIB lsb: 0  msb: 63 INPUT
			this->DIB_A10_B = DIB_A10_B; // net ID: DIB lsb: 0  msb: 63 INPUT
			this->DIB_A9_B = DIB_A9_B; // net ID: DIB lsb: 0  msb: 63 INPUT
			this->DIB_A8_B = DIB_A8_B; // net ID: DIB lsb: 0  msb: 63 INPUT
			this->DIB_A7_B = DIB_A7_B; // net ID: DIB lsb: 0  msb: 63 INPUT
			this->DIB_A6_B = DIB_A6_B; // net ID: DIB lsb: 0  msb: 63 INPUT
			this->DIB_A5_B = DIB_A5_B; // net ID: DIB lsb: 0  msb: 63 INPUT
			this->DIB_A4_B = DIB_A4_B; // net ID: DIB lsb: 0  msb: 63 INPUT
			this->DIB_A3_B = DIB_A3_B; // net ID: DIB lsb: 0  msb: 63 INPUT
			this->DIB_A2_B = DIB_A2_B; // net ID: DIB lsb: 0  msb: 63 INPUT
			this->DIB_A1_B = DIB_A1_B; // net ID: DIB lsb: 0  msb: 63 INPUT
			this->DIB_A0_B = DIB_A0_B; // net ID: DIB lsb: 0  msb: 63 INPUT
			this->DIPA_A3_B = DIPA_A3_B; // net ID: DIPA lsb: 0  msb: 3 INPUT
			this->DIPA_A2_B = DIPA_A2_B; // net ID: DIPA lsb: 0  msb: 3 INPUT
			this->DIPA_A1_B = DIPA_A1_B; // net ID: DIPA lsb: 0  msb: 3 INPUT
			this->DIPA_A0_B = DIPA_A0_B; // net ID: DIPA lsb: 0  msb: 3 INPUT
			this->DIPB_A7_B = DIPB_A7_B; // net ID: DIPB lsb: 0  msb: 7 INPUT
			this->DIPB_A6_B = DIPB_A6_B; // net ID: DIPB lsb: 0  msb: 7 INPUT
			this->DIPB_A5_B = DIPB_A5_B; // net ID: DIPB lsb: 0  msb: 7 INPUT
			this->DIPB_A4_B = DIPB_A4_B; // net ID: DIPB lsb: 0  msb: 7 INPUT
			this->DIPB_A3_B = DIPB_A3_B; // net ID: DIPB lsb: 0  msb: 7 INPUT
			this->DIPB_A2_B = DIPB_A2_B; // net ID: DIPB lsb: 0  msb: 7 INPUT
			this->DIPB_A1_B = DIPB_A1_B; // net ID: DIPB lsb: 0  msb: 7 INPUT
			this->DIPB_A0_B = DIPB_A0_B; // net ID: DIPB lsb: 0  msb: 7 INPUT
			this->ENA_A0_B = ENA_A0_B; // net ID: ENA lsb: 0  msb: 0 INPUT
			this->ENB_A0_B = ENB_A0_B; // net ID: ENB lsb: 0  msb: 0 INPUT
			this->GSR_A0_B = GSR_A0_B; // net ID: GSR lsb: 0  msb: 0 INPUT
			this->REGCEA_A0_B = REGCEA_A0_B; // net ID: REGCEA lsb: 0  msb: 0 INPUT
			this->REGCEB_A0_B = REGCEB_A0_B; // net ID: REGCEB lsb: 0  msb: 0 INPUT
			this->REGCLKA_A0_B = REGCLKA_A0_B; // net ID: REGCLKA lsb: 0  msb: 0 INPUT
			this->REGCLKB_A0_B = REGCLKB_A0_B; // net ID: REGCLKB lsb: 0  msb: 0 INPUT
			this->SSRA_A0_B = SSRA_A0_B; // net ID: SSRA lsb: 0  msb: 0 INPUT
			this->SSRB_A0_B = SSRB_A0_B; // net ID: SSRB lsb: 0  msb: 0 INPUT
			this->WEA_A7_B = WEA_A7_B; // net ID: WEA lsb: 0  msb: 7 INPUT
			this->WEA_A6_B = WEA_A6_B; // net ID: WEA lsb: 0  msb: 7 INPUT
			this->WEA_A5_B = WEA_A5_B; // net ID: WEA lsb: 0  msb: 7 INPUT
			this->WEA_A4_B = WEA_A4_B; // net ID: WEA lsb: 0  msb: 7 INPUT
			this->WEA_A3_B = WEA_A3_B; // net ID: WEA lsb: 0  msb: 7 INPUT
			this->WEA_A2_B = WEA_A2_B; // net ID: WEA lsb: 0  msb: 7 INPUT
			this->WEA_A1_B = WEA_A1_B; // net ID: WEA lsb: 0  msb: 7 INPUT
			this->WEA_A0_B = WEA_A0_B; // net ID: WEA lsb: 0  msb: 7 INPUT
			this->WEB_A7_B = WEB_A7_B; // net ID: WEB lsb: 0  msb: 7 INPUT
			this->WEB_A6_B = WEB_A6_B; // net ID: WEB lsb: 0  msb: 7 INPUT
			this->WEB_A5_B = WEB_A5_B; // net ID: WEB lsb: 0  msb: 7 INPUT
			this->WEB_A4_B = WEB_A4_B; // net ID: WEB lsb: 0  msb: 7 INPUT
			this->WEB_A3_B = WEB_A3_B; // net ID: WEB lsb: 0  msb: 7 INPUT
			this->WEB_A2_B = WEB_A2_B; // net ID: WEB lsb: 0  msb: 7 INPUT
			this->WEB_A1_B = WEB_A1_B; // net ID: WEB lsb: 0  msb: 7 INPUT
			this->WEB_A0_B = WEB_A0_B; // net ID: WEB lsb: 0  msb: 7 INPUT
			
			register_wait_on_event_nets();
			
		}
		
		void register_wait_on_event_nets(){
		// TODO
		}
		
		void calculate(simtime_t time){
		// TODO
		}
		};
		
}
#endif // X_ARAMB36_INTERNAL_H
