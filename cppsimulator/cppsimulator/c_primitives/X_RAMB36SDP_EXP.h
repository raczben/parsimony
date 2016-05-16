/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_RAMB36SDP_EXP_H
#define X_RAMB36SDP_EXP_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_RAMB36SDP_EXP: public Primitive{

		//Verilog Parameters:
		parameter_int_t DO_REG;
		parameter_enum_t EN_ECC_READ;
		parameter_enum_t EN_ECC_SCRUB;
		parameter_enum_t EN_ECC_WRITE;
		parameter_int_t INIT;
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
		parameter_string_t INIT_FILE;
		parameter_string_t LOC;
		parameter_int_t SETUP_ALL;
		parameter_int_t SETUP_READ_FIRST;
		parameter_string_t SIM_COLLISION_CHECK;
		parameter_int_t SRVAL;
		//Verilog Ports in definition order:
		NetFlow* DBITERR_A0_B; // net ID: DBITERR lsb: 0  msb: 0 OUTPUT
		NetFlow* DO_A63_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
		NetFlow* DO_A62_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
		NetFlow* DO_A61_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
		NetFlow* DO_A60_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
		NetFlow* DO_A59_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
		NetFlow* DO_A58_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
		NetFlow* DO_A57_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
		NetFlow* DO_A56_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
		NetFlow* DO_A55_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
		NetFlow* DO_A54_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
		NetFlow* DO_A53_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
		NetFlow* DO_A52_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
		NetFlow* DO_A51_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
		NetFlow* DO_A50_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
		NetFlow* DO_A49_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
		NetFlow* DO_A48_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
		NetFlow* DO_A47_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
		NetFlow* DO_A46_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
		NetFlow* DO_A45_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
		NetFlow* DO_A44_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
		NetFlow* DO_A43_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
		NetFlow* DO_A42_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
		NetFlow* DO_A41_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
		NetFlow* DO_A40_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
		NetFlow* DO_A39_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
		NetFlow* DO_A38_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
		NetFlow* DO_A37_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
		NetFlow* DO_A36_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
		NetFlow* DO_A35_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
		NetFlow* DO_A34_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
		NetFlow* DO_A33_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
		NetFlow* DO_A32_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
		NetFlow* DO_A31_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
		NetFlow* DO_A30_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
		NetFlow* DO_A29_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
		NetFlow* DO_A28_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
		NetFlow* DO_A27_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
		NetFlow* DO_A26_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
		NetFlow* DO_A25_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
		NetFlow* DO_A24_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
		NetFlow* DO_A23_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
		NetFlow* DO_A22_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
		NetFlow* DO_A21_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
		NetFlow* DO_A20_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
		NetFlow* DO_A19_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
		NetFlow* DO_A18_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
		NetFlow* DO_A17_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
		NetFlow* DO_A16_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
		NetFlow* DO_A15_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
		NetFlow* DO_A14_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
		NetFlow* DO_A13_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
		NetFlow* DO_A12_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
		NetFlow* DO_A11_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
		NetFlow* DO_A10_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
		NetFlow* DO_A9_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
		NetFlow* DO_A8_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
		NetFlow* DO_A7_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
		NetFlow* DO_A6_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
		NetFlow* DO_A5_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
		NetFlow* DO_A4_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
		NetFlow* DO_A3_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
		NetFlow* DO_A2_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
		NetFlow* DO_A1_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
		NetFlow* DO_A0_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
		NetFlow* DOP_A7_B; // net ID: DOP lsb: 0  msb: 7 OUTPUT
		NetFlow* DOP_A6_B; // net ID: DOP lsb: 0  msb: 7 OUTPUT
		NetFlow* DOP_A5_B; // net ID: DOP lsb: 0  msb: 7 OUTPUT
		NetFlow* DOP_A4_B; // net ID: DOP lsb: 0  msb: 7 OUTPUT
		NetFlow* DOP_A3_B; // net ID: DOP lsb: 0  msb: 7 OUTPUT
		NetFlow* DOP_A2_B; // net ID: DOP lsb: 0  msb: 7 OUTPUT
		NetFlow* DOP_A1_B; // net ID: DOP lsb: 0  msb: 7 OUTPUT
		NetFlow* DOP_A0_B; // net ID: DOP lsb: 0  msb: 7 OUTPUT
		NetFlow* ECCPARITY_A7_B; // net ID: ECCPARITY lsb: 0  msb: 7 OUTPUT
		NetFlow* ECCPARITY_A6_B; // net ID: ECCPARITY lsb: 0  msb: 7 OUTPUT
		NetFlow* ECCPARITY_A5_B; // net ID: ECCPARITY lsb: 0  msb: 7 OUTPUT
		NetFlow* ECCPARITY_A4_B; // net ID: ECCPARITY lsb: 0  msb: 7 OUTPUT
		NetFlow* ECCPARITY_A3_B; // net ID: ECCPARITY lsb: 0  msb: 7 OUTPUT
		NetFlow* ECCPARITY_A2_B; // net ID: ECCPARITY lsb: 0  msb: 7 OUTPUT
		NetFlow* ECCPARITY_A1_B; // net ID: ECCPARITY lsb: 0  msb: 7 OUTPUT
		NetFlow* ECCPARITY_A0_B; // net ID: ECCPARITY lsb: 0  msb: 7 OUTPUT
		NetFlow* SBITERR_A0_B; // net ID: SBITERR lsb: 0  msb: 0 OUTPUT
		NetFlow* DI_A63_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A62_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A61_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A60_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A59_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A58_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A57_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A56_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A55_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A54_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A53_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A52_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A51_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A50_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A49_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A48_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A47_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A46_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A45_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A44_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A43_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A42_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A41_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A40_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A39_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A38_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A37_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A36_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A35_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A34_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A33_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A32_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A31_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A30_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A29_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A28_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A27_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A26_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A25_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A24_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A23_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A22_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A21_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A20_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A19_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A18_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A17_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A16_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A15_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A14_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A13_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A12_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A11_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A10_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A9_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A8_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A7_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A6_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A5_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A4_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A3_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A2_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A1_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A0_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DIP_A7_B; // net ID: DIP lsb: 0  msb: 7 INPUT
		NetFlow* DIP_A6_B; // net ID: DIP lsb: 0  msb: 7 INPUT
		NetFlow* DIP_A5_B; // net ID: DIP lsb: 0  msb: 7 INPUT
		NetFlow* DIP_A4_B; // net ID: DIP lsb: 0  msb: 7 INPUT
		NetFlow* DIP_A3_B; // net ID: DIP lsb: 0  msb: 7 INPUT
		NetFlow* DIP_A2_B; // net ID: DIP lsb: 0  msb: 7 INPUT
		NetFlow* DIP_A1_B; // net ID: DIP lsb: 0  msb: 7 INPUT
		NetFlow* DIP_A0_B; // net ID: DIP lsb: 0  msb: 7 INPUT
		NetFlow* RDADDRL_A15_B; // net ID: RDADDRL lsb: 0  msb: 15 INPUT
		NetFlow* RDADDRL_A14_B; // net ID: RDADDRL lsb: 0  msb: 15 INPUT
		NetFlow* RDADDRL_A13_B; // net ID: RDADDRL lsb: 0  msb: 15 INPUT
		NetFlow* RDADDRL_A12_B; // net ID: RDADDRL lsb: 0  msb: 15 INPUT
		NetFlow* RDADDRL_A11_B; // net ID: RDADDRL lsb: 0  msb: 15 INPUT
		NetFlow* RDADDRL_A10_B; // net ID: RDADDRL lsb: 0  msb: 15 INPUT
		NetFlow* RDADDRL_A9_B; // net ID: RDADDRL lsb: 0  msb: 15 INPUT
		NetFlow* RDADDRL_A8_B; // net ID: RDADDRL lsb: 0  msb: 15 INPUT
		NetFlow* RDADDRL_A7_B; // net ID: RDADDRL lsb: 0  msb: 15 INPUT
		NetFlow* RDADDRL_A6_B; // net ID: RDADDRL lsb: 0  msb: 15 INPUT
		NetFlow* RDADDRL_A5_B; // net ID: RDADDRL lsb: 0  msb: 15 INPUT
		NetFlow* RDADDRL_A4_B; // net ID: RDADDRL lsb: 0  msb: 15 INPUT
		NetFlow* RDADDRL_A3_B; // net ID: RDADDRL lsb: 0  msb: 15 INPUT
		NetFlow* RDADDRL_A2_B; // net ID: RDADDRL lsb: 0  msb: 15 INPUT
		NetFlow* RDADDRL_A1_B; // net ID: RDADDRL lsb: 0  msb: 15 INPUT
		NetFlow* RDADDRL_A0_B; // net ID: RDADDRL lsb: 0  msb: 15 INPUT
		NetFlow* RDADDRU_A14_B; // net ID: RDADDRU lsb: 0  msb: 14 INPUT
		NetFlow* RDADDRU_A13_B; // net ID: RDADDRU lsb: 0  msb: 14 INPUT
		NetFlow* RDADDRU_A12_B; // net ID: RDADDRU lsb: 0  msb: 14 INPUT
		NetFlow* RDADDRU_A11_B; // net ID: RDADDRU lsb: 0  msb: 14 INPUT
		NetFlow* RDADDRU_A10_B; // net ID: RDADDRU lsb: 0  msb: 14 INPUT
		NetFlow* RDADDRU_A9_B; // net ID: RDADDRU lsb: 0  msb: 14 INPUT
		NetFlow* RDADDRU_A8_B; // net ID: RDADDRU lsb: 0  msb: 14 INPUT
		NetFlow* RDADDRU_A7_B; // net ID: RDADDRU lsb: 0  msb: 14 INPUT
		NetFlow* RDADDRU_A6_B; // net ID: RDADDRU lsb: 0  msb: 14 INPUT
		NetFlow* RDADDRU_A5_B; // net ID: RDADDRU lsb: 0  msb: 14 INPUT
		NetFlow* RDADDRU_A4_B; // net ID: RDADDRU lsb: 0  msb: 14 INPUT
		NetFlow* RDADDRU_A3_B; // net ID: RDADDRU lsb: 0  msb: 14 INPUT
		NetFlow* RDADDRU_A2_B; // net ID: RDADDRU lsb: 0  msb: 14 INPUT
		NetFlow* RDADDRU_A1_B; // net ID: RDADDRU lsb: 0  msb: 14 INPUT
		NetFlow* RDADDRU_A0_B; // net ID: RDADDRU lsb: 0  msb: 14 INPUT
		NetFlow* RDCLKL_A0_B; // net ID: RDCLKL lsb: 0  msb: 0 INPUT
		NetFlow* RDCLKU_A0_B; // net ID: RDCLKU lsb: 0  msb: 0 INPUT
		NetFlow* RDENL_A0_B; // net ID: RDENL lsb: 0  msb: 0 INPUT
		NetFlow* RDENU_A0_B; // net ID: RDENU lsb: 0  msb: 0 INPUT
		NetFlow* RDRCLKL_A0_B; // net ID: RDRCLKL lsb: 0  msb: 0 INPUT
		NetFlow* RDRCLKU_A0_B; // net ID: RDRCLKU lsb: 0  msb: 0 INPUT
		NetFlow* REGCEL_A0_B; // net ID: REGCEL lsb: 0  msb: 0 INPUT
		NetFlow* REGCEU_A0_B; // net ID: REGCEU lsb: 0  msb: 0 INPUT
		NetFlow* SSRL_A0_B; // net ID: SSRL lsb: 0  msb: 0 INPUT
		NetFlow* SSRU_A0_B; // net ID: SSRU lsb: 0  msb: 0 INPUT
		NetFlow* WEL_A7_B; // net ID: WEL lsb: 0  msb: 7 INPUT
		NetFlow* WEL_A6_B; // net ID: WEL lsb: 0  msb: 7 INPUT
		NetFlow* WEL_A5_B; // net ID: WEL lsb: 0  msb: 7 INPUT
		NetFlow* WEL_A4_B; // net ID: WEL lsb: 0  msb: 7 INPUT
		NetFlow* WEL_A3_B; // net ID: WEL lsb: 0  msb: 7 INPUT
		NetFlow* WEL_A2_B; // net ID: WEL lsb: 0  msb: 7 INPUT
		NetFlow* WEL_A1_B; // net ID: WEL lsb: 0  msb: 7 INPUT
		NetFlow* WEL_A0_B; // net ID: WEL lsb: 0  msb: 7 INPUT
		NetFlow* WEU_A7_B; // net ID: WEU lsb: 0  msb: 7 INPUT
		NetFlow* WEU_A6_B; // net ID: WEU lsb: 0  msb: 7 INPUT
		NetFlow* WEU_A5_B; // net ID: WEU lsb: 0  msb: 7 INPUT
		NetFlow* WEU_A4_B; // net ID: WEU lsb: 0  msb: 7 INPUT
		NetFlow* WEU_A3_B; // net ID: WEU lsb: 0  msb: 7 INPUT
		NetFlow* WEU_A2_B; // net ID: WEU lsb: 0  msb: 7 INPUT
		NetFlow* WEU_A1_B; // net ID: WEU lsb: 0  msb: 7 INPUT
		NetFlow* WEU_A0_B; // net ID: WEU lsb: 0  msb: 7 INPUT
		NetFlow* WRADDRL_A15_B; // net ID: WRADDRL lsb: 0  msb: 15 INPUT
		NetFlow* WRADDRL_A14_B; // net ID: WRADDRL lsb: 0  msb: 15 INPUT
		NetFlow* WRADDRL_A13_B; // net ID: WRADDRL lsb: 0  msb: 15 INPUT
		NetFlow* WRADDRL_A12_B; // net ID: WRADDRL lsb: 0  msb: 15 INPUT
		NetFlow* WRADDRL_A11_B; // net ID: WRADDRL lsb: 0  msb: 15 INPUT
		NetFlow* WRADDRL_A10_B; // net ID: WRADDRL lsb: 0  msb: 15 INPUT
		NetFlow* WRADDRL_A9_B; // net ID: WRADDRL lsb: 0  msb: 15 INPUT
		NetFlow* WRADDRL_A8_B; // net ID: WRADDRL lsb: 0  msb: 15 INPUT
		NetFlow* WRADDRL_A7_B; // net ID: WRADDRL lsb: 0  msb: 15 INPUT
		NetFlow* WRADDRL_A6_B; // net ID: WRADDRL lsb: 0  msb: 15 INPUT
		NetFlow* WRADDRL_A5_B; // net ID: WRADDRL lsb: 0  msb: 15 INPUT
		NetFlow* WRADDRL_A4_B; // net ID: WRADDRL lsb: 0  msb: 15 INPUT
		NetFlow* WRADDRL_A3_B; // net ID: WRADDRL lsb: 0  msb: 15 INPUT
		NetFlow* WRADDRL_A2_B; // net ID: WRADDRL lsb: 0  msb: 15 INPUT
		NetFlow* WRADDRL_A1_B; // net ID: WRADDRL lsb: 0  msb: 15 INPUT
		NetFlow* WRADDRL_A0_B; // net ID: WRADDRL lsb: 0  msb: 15 INPUT
		NetFlow* WRADDRU_A14_B; // net ID: WRADDRU lsb: 0  msb: 14 INPUT
		NetFlow* WRADDRU_A13_B; // net ID: WRADDRU lsb: 0  msb: 14 INPUT
		NetFlow* WRADDRU_A12_B; // net ID: WRADDRU lsb: 0  msb: 14 INPUT
		NetFlow* WRADDRU_A11_B; // net ID: WRADDRU lsb: 0  msb: 14 INPUT
		NetFlow* WRADDRU_A10_B; // net ID: WRADDRU lsb: 0  msb: 14 INPUT
		NetFlow* WRADDRU_A9_B; // net ID: WRADDRU lsb: 0  msb: 14 INPUT
		NetFlow* WRADDRU_A8_B; // net ID: WRADDRU lsb: 0  msb: 14 INPUT
		NetFlow* WRADDRU_A7_B; // net ID: WRADDRU lsb: 0  msb: 14 INPUT
		NetFlow* WRADDRU_A6_B; // net ID: WRADDRU lsb: 0  msb: 14 INPUT
		NetFlow* WRADDRU_A5_B; // net ID: WRADDRU lsb: 0  msb: 14 INPUT
		NetFlow* WRADDRU_A4_B; // net ID: WRADDRU lsb: 0  msb: 14 INPUT
		NetFlow* WRADDRU_A3_B; // net ID: WRADDRU lsb: 0  msb: 14 INPUT
		NetFlow* WRADDRU_A2_B; // net ID: WRADDRU lsb: 0  msb: 14 INPUT
		NetFlow* WRADDRU_A1_B; // net ID: WRADDRU lsb: 0  msb: 14 INPUT
		NetFlow* WRADDRU_A0_B; // net ID: WRADDRU lsb: 0  msb: 14 INPUT
		NetFlow* WRCLKL_A0_B; // net ID: WRCLKL lsb: 0  msb: 0 INPUT
		NetFlow* WRCLKU_A0_B; // net ID: WRCLKU lsb: 0  msb: 0 INPUT
		NetFlow* WRENL_A0_B; // net ID: WRENL lsb: 0  msb: 0 INPUT
		NetFlow* WRENU_A0_B; // net ID: WRENU lsb: 0  msb: 0 INPUT
		
		public: X_RAMB36SDP_EXP(
			const char * name,
			//Verilog Parameters:
			parameter_int_t DO_REG, // Default: 0
			parameter_enum_t EN_ECC_READ, // Default: "FALSE"
			parameter_enum_t EN_ECC_SCRUB, // Default: "FALSE"
			parameter_enum_t EN_ECC_WRITE, // Default: "FALSE"
			parameter_int_t INIT, // Default: 72'h0
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
			parameter_string_t INIT_FILE, // Default: "NONE"
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_int_t SETUP_ALL, // Default: 1000
			parameter_int_t SETUP_READ_FIRST, // Default: 3000
			parameter_string_t SIM_COLLISION_CHECK, // Default: "ALL"
			parameter_int_t SRVAL, // Default: 72'h0
			//Verilog Ports in definition order:
			NetFlow* DBITERR_A0_B, // net ID: DBITERR lsb: 0  msb: 0 OUTPUT
			NetFlow* DO_A63_B, // net ID: DO lsb: 0  msb: 63 OUTPUT
			NetFlow* DO_A62_B, // net ID: DO lsb: 0  msb: 63 OUTPUT
			NetFlow* DO_A61_B, // net ID: DO lsb: 0  msb: 63 OUTPUT
			NetFlow* DO_A60_B, // net ID: DO lsb: 0  msb: 63 OUTPUT
			NetFlow* DO_A59_B, // net ID: DO lsb: 0  msb: 63 OUTPUT
			NetFlow* DO_A58_B, // net ID: DO lsb: 0  msb: 63 OUTPUT
			NetFlow* DO_A57_B, // net ID: DO lsb: 0  msb: 63 OUTPUT
			NetFlow* DO_A56_B, // net ID: DO lsb: 0  msb: 63 OUTPUT
			NetFlow* DO_A55_B, // net ID: DO lsb: 0  msb: 63 OUTPUT
			NetFlow* DO_A54_B, // net ID: DO lsb: 0  msb: 63 OUTPUT
			NetFlow* DO_A53_B, // net ID: DO lsb: 0  msb: 63 OUTPUT
			NetFlow* DO_A52_B, // net ID: DO lsb: 0  msb: 63 OUTPUT
			NetFlow* DO_A51_B, // net ID: DO lsb: 0  msb: 63 OUTPUT
			NetFlow* DO_A50_B, // net ID: DO lsb: 0  msb: 63 OUTPUT
			NetFlow* DO_A49_B, // net ID: DO lsb: 0  msb: 63 OUTPUT
			NetFlow* DO_A48_B, // net ID: DO lsb: 0  msb: 63 OUTPUT
			NetFlow* DO_A47_B, // net ID: DO lsb: 0  msb: 63 OUTPUT
			NetFlow* DO_A46_B, // net ID: DO lsb: 0  msb: 63 OUTPUT
			NetFlow* DO_A45_B, // net ID: DO lsb: 0  msb: 63 OUTPUT
			NetFlow* DO_A44_B, // net ID: DO lsb: 0  msb: 63 OUTPUT
			NetFlow* DO_A43_B, // net ID: DO lsb: 0  msb: 63 OUTPUT
			NetFlow* DO_A42_B, // net ID: DO lsb: 0  msb: 63 OUTPUT
			NetFlow* DO_A41_B, // net ID: DO lsb: 0  msb: 63 OUTPUT
			NetFlow* DO_A40_B, // net ID: DO lsb: 0  msb: 63 OUTPUT
			NetFlow* DO_A39_B, // net ID: DO lsb: 0  msb: 63 OUTPUT
			NetFlow* DO_A38_B, // net ID: DO lsb: 0  msb: 63 OUTPUT
			NetFlow* DO_A37_B, // net ID: DO lsb: 0  msb: 63 OUTPUT
			NetFlow* DO_A36_B, // net ID: DO lsb: 0  msb: 63 OUTPUT
			NetFlow* DO_A35_B, // net ID: DO lsb: 0  msb: 63 OUTPUT
			NetFlow* DO_A34_B, // net ID: DO lsb: 0  msb: 63 OUTPUT
			NetFlow* DO_A33_B, // net ID: DO lsb: 0  msb: 63 OUTPUT
			NetFlow* DO_A32_B, // net ID: DO lsb: 0  msb: 63 OUTPUT
			NetFlow* DO_A31_B, // net ID: DO lsb: 0  msb: 63 OUTPUT
			NetFlow* DO_A30_B, // net ID: DO lsb: 0  msb: 63 OUTPUT
			NetFlow* DO_A29_B, // net ID: DO lsb: 0  msb: 63 OUTPUT
			NetFlow* DO_A28_B, // net ID: DO lsb: 0  msb: 63 OUTPUT
			NetFlow* DO_A27_B, // net ID: DO lsb: 0  msb: 63 OUTPUT
			NetFlow* DO_A26_B, // net ID: DO lsb: 0  msb: 63 OUTPUT
			NetFlow* DO_A25_B, // net ID: DO lsb: 0  msb: 63 OUTPUT
			NetFlow* DO_A24_B, // net ID: DO lsb: 0  msb: 63 OUTPUT
			NetFlow* DO_A23_B, // net ID: DO lsb: 0  msb: 63 OUTPUT
			NetFlow* DO_A22_B, // net ID: DO lsb: 0  msb: 63 OUTPUT
			NetFlow* DO_A21_B, // net ID: DO lsb: 0  msb: 63 OUTPUT
			NetFlow* DO_A20_B, // net ID: DO lsb: 0  msb: 63 OUTPUT
			NetFlow* DO_A19_B, // net ID: DO lsb: 0  msb: 63 OUTPUT
			NetFlow* DO_A18_B, // net ID: DO lsb: 0  msb: 63 OUTPUT
			NetFlow* DO_A17_B, // net ID: DO lsb: 0  msb: 63 OUTPUT
			NetFlow* DO_A16_B, // net ID: DO lsb: 0  msb: 63 OUTPUT
			NetFlow* DO_A15_B, // net ID: DO lsb: 0  msb: 63 OUTPUT
			NetFlow* DO_A14_B, // net ID: DO lsb: 0  msb: 63 OUTPUT
			NetFlow* DO_A13_B, // net ID: DO lsb: 0  msb: 63 OUTPUT
			NetFlow* DO_A12_B, // net ID: DO lsb: 0  msb: 63 OUTPUT
			NetFlow* DO_A11_B, // net ID: DO lsb: 0  msb: 63 OUTPUT
			NetFlow* DO_A10_B, // net ID: DO lsb: 0  msb: 63 OUTPUT
			NetFlow* DO_A9_B, // net ID: DO lsb: 0  msb: 63 OUTPUT
			NetFlow* DO_A8_B, // net ID: DO lsb: 0  msb: 63 OUTPUT
			NetFlow* DO_A7_B, // net ID: DO lsb: 0  msb: 63 OUTPUT
			NetFlow* DO_A6_B, // net ID: DO lsb: 0  msb: 63 OUTPUT
			NetFlow* DO_A5_B, // net ID: DO lsb: 0  msb: 63 OUTPUT
			NetFlow* DO_A4_B, // net ID: DO lsb: 0  msb: 63 OUTPUT
			NetFlow* DO_A3_B, // net ID: DO lsb: 0  msb: 63 OUTPUT
			NetFlow* DO_A2_B, // net ID: DO lsb: 0  msb: 63 OUTPUT
			NetFlow* DO_A1_B, // net ID: DO lsb: 0  msb: 63 OUTPUT
			NetFlow* DO_A0_B, // net ID: DO lsb: 0  msb: 63 OUTPUT
			NetFlow* DOP_A7_B, // net ID: DOP lsb: 0  msb: 7 OUTPUT
			NetFlow* DOP_A6_B, // net ID: DOP lsb: 0  msb: 7 OUTPUT
			NetFlow* DOP_A5_B, // net ID: DOP lsb: 0  msb: 7 OUTPUT
			NetFlow* DOP_A4_B, // net ID: DOP lsb: 0  msb: 7 OUTPUT
			NetFlow* DOP_A3_B, // net ID: DOP lsb: 0  msb: 7 OUTPUT
			NetFlow* DOP_A2_B, // net ID: DOP lsb: 0  msb: 7 OUTPUT
			NetFlow* DOP_A1_B, // net ID: DOP lsb: 0  msb: 7 OUTPUT
			NetFlow* DOP_A0_B, // net ID: DOP lsb: 0  msb: 7 OUTPUT
			NetFlow* ECCPARITY_A7_B, // net ID: ECCPARITY lsb: 0  msb: 7 OUTPUT
			NetFlow* ECCPARITY_A6_B, // net ID: ECCPARITY lsb: 0  msb: 7 OUTPUT
			NetFlow* ECCPARITY_A5_B, // net ID: ECCPARITY lsb: 0  msb: 7 OUTPUT
			NetFlow* ECCPARITY_A4_B, // net ID: ECCPARITY lsb: 0  msb: 7 OUTPUT
			NetFlow* ECCPARITY_A3_B, // net ID: ECCPARITY lsb: 0  msb: 7 OUTPUT
			NetFlow* ECCPARITY_A2_B, // net ID: ECCPARITY lsb: 0  msb: 7 OUTPUT
			NetFlow* ECCPARITY_A1_B, // net ID: ECCPARITY lsb: 0  msb: 7 OUTPUT
			NetFlow* ECCPARITY_A0_B, // net ID: ECCPARITY lsb: 0  msb: 7 OUTPUT
			NetFlow* SBITERR_A0_B, // net ID: SBITERR lsb: 0  msb: 0 OUTPUT
			NetFlow* DI_A63_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A62_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A61_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A60_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A59_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A58_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A57_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A56_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A55_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A54_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A53_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A52_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A51_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A50_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A49_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A48_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A47_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A46_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A45_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A44_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A43_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A42_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A41_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A40_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A39_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A38_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A37_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A36_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A35_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A34_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A33_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A32_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A31_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A30_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A29_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A28_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A27_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A26_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A25_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A24_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A23_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A22_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A21_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A20_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A19_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A18_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A17_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A16_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A15_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A14_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A13_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A12_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A11_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A10_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A9_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A8_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A7_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A6_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A5_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A4_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A3_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A2_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A1_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A0_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DIP_A7_B, // net ID: DIP lsb: 0  msb: 7 INPUT
			NetFlow* DIP_A6_B, // net ID: DIP lsb: 0  msb: 7 INPUT
			NetFlow* DIP_A5_B, // net ID: DIP lsb: 0  msb: 7 INPUT
			NetFlow* DIP_A4_B, // net ID: DIP lsb: 0  msb: 7 INPUT
			NetFlow* DIP_A3_B, // net ID: DIP lsb: 0  msb: 7 INPUT
			NetFlow* DIP_A2_B, // net ID: DIP lsb: 0  msb: 7 INPUT
			NetFlow* DIP_A1_B, // net ID: DIP lsb: 0  msb: 7 INPUT
			NetFlow* DIP_A0_B, // net ID: DIP lsb: 0  msb: 7 INPUT
			NetFlow* RDADDRL_A15_B, // net ID: RDADDRL lsb: 0  msb: 15 INPUT
			NetFlow* RDADDRL_A14_B, // net ID: RDADDRL lsb: 0  msb: 15 INPUT
			NetFlow* RDADDRL_A13_B, // net ID: RDADDRL lsb: 0  msb: 15 INPUT
			NetFlow* RDADDRL_A12_B, // net ID: RDADDRL lsb: 0  msb: 15 INPUT
			NetFlow* RDADDRL_A11_B, // net ID: RDADDRL lsb: 0  msb: 15 INPUT
			NetFlow* RDADDRL_A10_B, // net ID: RDADDRL lsb: 0  msb: 15 INPUT
			NetFlow* RDADDRL_A9_B, // net ID: RDADDRL lsb: 0  msb: 15 INPUT
			NetFlow* RDADDRL_A8_B, // net ID: RDADDRL lsb: 0  msb: 15 INPUT
			NetFlow* RDADDRL_A7_B, // net ID: RDADDRL lsb: 0  msb: 15 INPUT
			NetFlow* RDADDRL_A6_B, // net ID: RDADDRL lsb: 0  msb: 15 INPUT
			NetFlow* RDADDRL_A5_B, // net ID: RDADDRL lsb: 0  msb: 15 INPUT
			NetFlow* RDADDRL_A4_B, // net ID: RDADDRL lsb: 0  msb: 15 INPUT
			NetFlow* RDADDRL_A3_B, // net ID: RDADDRL lsb: 0  msb: 15 INPUT
			NetFlow* RDADDRL_A2_B, // net ID: RDADDRL lsb: 0  msb: 15 INPUT
			NetFlow* RDADDRL_A1_B, // net ID: RDADDRL lsb: 0  msb: 15 INPUT
			NetFlow* RDADDRL_A0_B, // net ID: RDADDRL lsb: 0  msb: 15 INPUT
			NetFlow* RDADDRU_A14_B, // net ID: RDADDRU lsb: 0  msb: 14 INPUT
			NetFlow* RDADDRU_A13_B, // net ID: RDADDRU lsb: 0  msb: 14 INPUT
			NetFlow* RDADDRU_A12_B, // net ID: RDADDRU lsb: 0  msb: 14 INPUT
			NetFlow* RDADDRU_A11_B, // net ID: RDADDRU lsb: 0  msb: 14 INPUT
			NetFlow* RDADDRU_A10_B, // net ID: RDADDRU lsb: 0  msb: 14 INPUT
			NetFlow* RDADDRU_A9_B, // net ID: RDADDRU lsb: 0  msb: 14 INPUT
			NetFlow* RDADDRU_A8_B, // net ID: RDADDRU lsb: 0  msb: 14 INPUT
			NetFlow* RDADDRU_A7_B, // net ID: RDADDRU lsb: 0  msb: 14 INPUT
			NetFlow* RDADDRU_A6_B, // net ID: RDADDRU lsb: 0  msb: 14 INPUT
			NetFlow* RDADDRU_A5_B, // net ID: RDADDRU lsb: 0  msb: 14 INPUT
			NetFlow* RDADDRU_A4_B, // net ID: RDADDRU lsb: 0  msb: 14 INPUT
			NetFlow* RDADDRU_A3_B, // net ID: RDADDRU lsb: 0  msb: 14 INPUT
			NetFlow* RDADDRU_A2_B, // net ID: RDADDRU lsb: 0  msb: 14 INPUT
			NetFlow* RDADDRU_A1_B, // net ID: RDADDRU lsb: 0  msb: 14 INPUT
			NetFlow* RDADDRU_A0_B, // net ID: RDADDRU lsb: 0  msb: 14 INPUT
			NetFlow* RDCLKL_A0_B, // net ID: RDCLKL lsb: 0  msb: 0 INPUT
			NetFlow* RDCLKU_A0_B, // net ID: RDCLKU lsb: 0  msb: 0 INPUT
			NetFlow* RDENL_A0_B, // net ID: RDENL lsb: 0  msb: 0 INPUT
			NetFlow* RDENU_A0_B, // net ID: RDENU lsb: 0  msb: 0 INPUT
			NetFlow* RDRCLKL_A0_B, // net ID: RDRCLKL lsb: 0  msb: 0 INPUT
			NetFlow* RDRCLKU_A0_B, // net ID: RDRCLKU lsb: 0  msb: 0 INPUT
			NetFlow* REGCEL_A0_B, // net ID: REGCEL lsb: 0  msb: 0 INPUT
			NetFlow* REGCEU_A0_B, // net ID: REGCEU lsb: 0  msb: 0 INPUT
			NetFlow* SSRL_A0_B, // net ID: SSRL lsb: 0  msb: 0 INPUT
			NetFlow* SSRU_A0_B, // net ID: SSRU lsb: 0  msb: 0 INPUT
			NetFlow* WEL_A7_B, // net ID: WEL lsb: 0  msb: 7 INPUT
			NetFlow* WEL_A6_B, // net ID: WEL lsb: 0  msb: 7 INPUT
			NetFlow* WEL_A5_B, // net ID: WEL lsb: 0  msb: 7 INPUT
			NetFlow* WEL_A4_B, // net ID: WEL lsb: 0  msb: 7 INPUT
			NetFlow* WEL_A3_B, // net ID: WEL lsb: 0  msb: 7 INPUT
			NetFlow* WEL_A2_B, // net ID: WEL lsb: 0  msb: 7 INPUT
			NetFlow* WEL_A1_B, // net ID: WEL lsb: 0  msb: 7 INPUT
			NetFlow* WEL_A0_B, // net ID: WEL lsb: 0  msb: 7 INPUT
			NetFlow* WEU_A7_B, // net ID: WEU lsb: 0  msb: 7 INPUT
			NetFlow* WEU_A6_B, // net ID: WEU lsb: 0  msb: 7 INPUT
			NetFlow* WEU_A5_B, // net ID: WEU lsb: 0  msb: 7 INPUT
			NetFlow* WEU_A4_B, // net ID: WEU lsb: 0  msb: 7 INPUT
			NetFlow* WEU_A3_B, // net ID: WEU lsb: 0  msb: 7 INPUT
			NetFlow* WEU_A2_B, // net ID: WEU lsb: 0  msb: 7 INPUT
			NetFlow* WEU_A1_B, // net ID: WEU lsb: 0  msb: 7 INPUT
			NetFlow* WEU_A0_B, // net ID: WEU lsb: 0  msb: 7 INPUT
			NetFlow* WRADDRL_A15_B, // net ID: WRADDRL lsb: 0  msb: 15 INPUT
			NetFlow* WRADDRL_A14_B, // net ID: WRADDRL lsb: 0  msb: 15 INPUT
			NetFlow* WRADDRL_A13_B, // net ID: WRADDRL lsb: 0  msb: 15 INPUT
			NetFlow* WRADDRL_A12_B, // net ID: WRADDRL lsb: 0  msb: 15 INPUT
			NetFlow* WRADDRL_A11_B, // net ID: WRADDRL lsb: 0  msb: 15 INPUT
			NetFlow* WRADDRL_A10_B, // net ID: WRADDRL lsb: 0  msb: 15 INPUT
			NetFlow* WRADDRL_A9_B, // net ID: WRADDRL lsb: 0  msb: 15 INPUT
			NetFlow* WRADDRL_A8_B, // net ID: WRADDRL lsb: 0  msb: 15 INPUT
			NetFlow* WRADDRL_A7_B, // net ID: WRADDRL lsb: 0  msb: 15 INPUT
			NetFlow* WRADDRL_A6_B, // net ID: WRADDRL lsb: 0  msb: 15 INPUT
			NetFlow* WRADDRL_A5_B, // net ID: WRADDRL lsb: 0  msb: 15 INPUT
			NetFlow* WRADDRL_A4_B, // net ID: WRADDRL lsb: 0  msb: 15 INPUT
			NetFlow* WRADDRL_A3_B, // net ID: WRADDRL lsb: 0  msb: 15 INPUT
			NetFlow* WRADDRL_A2_B, // net ID: WRADDRL lsb: 0  msb: 15 INPUT
			NetFlow* WRADDRL_A1_B, // net ID: WRADDRL lsb: 0  msb: 15 INPUT
			NetFlow* WRADDRL_A0_B, // net ID: WRADDRL lsb: 0  msb: 15 INPUT
			NetFlow* WRADDRU_A14_B, // net ID: WRADDRU lsb: 0  msb: 14 INPUT
			NetFlow* WRADDRU_A13_B, // net ID: WRADDRU lsb: 0  msb: 14 INPUT
			NetFlow* WRADDRU_A12_B, // net ID: WRADDRU lsb: 0  msb: 14 INPUT
			NetFlow* WRADDRU_A11_B, // net ID: WRADDRU lsb: 0  msb: 14 INPUT
			NetFlow* WRADDRU_A10_B, // net ID: WRADDRU lsb: 0  msb: 14 INPUT
			NetFlow* WRADDRU_A9_B, // net ID: WRADDRU lsb: 0  msb: 14 INPUT
			NetFlow* WRADDRU_A8_B, // net ID: WRADDRU lsb: 0  msb: 14 INPUT
			NetFlow* WRADDRU_A7_B, // net ID: WRADDRU lsb: 0  msb: 14 INPUT
			NetFlow* WRADDRU_A6_B, // net ID: WRADDRU lsb: 0  msb: 14 INPUT
			NetFlow* WRADDRU_A5_B, // net ID: WRADDRU lsb: 0  msb: 14 INPUT
			NetFlow* WRADDRU_A4_B, // net ID: WRADDRU lsb: 0  msb: 14 INPUT
			NetFlow* WRADDRU_A3_B, // net ID: WRADDRU lsb: 0  msb: 14 INPUT
			NetFlow* WRADDRU_A2_B, // net ID: WRADDRU lsb: 0  msb: 14 INPUT
			NetFlow* WRADDRU_A1_B, // net ID: WRADDRU lsb: 0  msb: 14 INPUT
			NetFlow* WRADDRU_A0_B, // net ID: WRADDRU lsb: 0  msb: 14 INPUT
			NetFlow* WRCLKL_A0_B, // net ID: WRCLKL lsb: 0  msb: 0 INPUT
			NetFlow* WRCLKU_A0_B, // net ID: WRCLKU lsb: 0  msb: 0 INPUT
			NetFlow* WRENL_A0_B, // net ID: WRENL lsb: 0  msb: 0 INPUT
			NetFlow* WRENU_A0_B // net ID: WRENU lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->DO_REG = DO_REG; // Default: 0
			this->EN_ECC_READ = EN_ECC_READ; // Default: "FALSE"
			this->EN_ECC_SCRUB = EN_ECC_SCRUB; // Default: "FALSE"
			this->EN_ECC_WRITE = EN_ECC_WRITE; // Default: "FALSE"
			this->INIT = INIT; // Default: 72'h0
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
			this->INIT_FILE = INIT_FILE; // Default: "NONE"
			this->LOC = LOC; // Default: "UNPLACED"
			this->SETUP_ALL = SETUP_ALL; // Default: 1000
			this->SETUP_READ_FIRST = SETUP_READ_FIRST; // Default: 3000
			this->SIM_COLLISION_CHECK = SIM_COLLISION_CHECK; // Default: "ALL"
			this->SRVAL = SRVAL; // Default: 72'h0
			//Verilog Ports in definition order:
			this->DBITERR_A0_B = DBITERR_A0_B; // net ID: DBITERR lsb: 0  msb: 0 OUTPUT
			this->DO_A63_B = DO_A63_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
			this->DO_A62_B = DO_A62_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
			this->DO_A61_B = DO_A61_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
			this->DO_A60_B = DO_A60_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
			this->DO_A59_B = DO_A59_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
			this->DO_A58_B = DO_A58_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
			this->DO_A57_B = DO_A57_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
			this->DO_A56_B = DO_A56_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
			this->DO_A55_B = DO_A55_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
			this->DO_A54_B = DO_A54_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
			this->DO_A53_B = DO_A53_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
			this->DO_A52_B = DO_A52_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
			this->DO_A51_B = DO_A51_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
			this->DO_A50_B = DO_A50_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
			this->DO_A49_B = DO_A49_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
			this->DO_A48_B = DO_A48_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
			this->DO_A47_B = DO_A47_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
			this->DO_A46_B = DO_A46_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
			this->DO_A45_B = DO_A45_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
			this->DO_A44_B = DO_A44_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
			this->DO_A43_B = DO_A43_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
			this->DO_A42_B = DO_A42_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
			this->DO_A41_B = DO_A41_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
			this->DO_A40_B = DO_A40_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
			this->DO_A39_B = DO_A39_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
			this->DO_A38_B = DO_A38_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
			this->DO_A37_B = DO_A37_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
			this->DO_A36_B = DO_A36_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
			this->DO_A35_B = DO_A35_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
			this->DO_A34_B = DO_A34_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
			this->DO_A33_B = DO_A33_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
			this->DO_A32_B = DO_A32_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
			this->DO_A31_B = DO_A31_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
			this->DO_A30_B = DO_A30_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
			this->DO_A29_B = DO_A29_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
			this->DO_A28_B = DO_A28_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
			this->DO_A27_B = DO_A27_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
			this->DO_A26_B = DO_A26_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
			this->DO_A25_B = DO_A25_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
			this->DO_A24_B = DO_A24_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
			this->DO_A23_B = DO_A23_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
			this->DO_A22_B = DO_A22_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
			this->DO_A21_B = DO_A21_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
			this->DO_A20_B = DO_A20_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
			this->DO_A19_B = DO_A19_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
			this->DO_A18_B = DO_A18_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
			this->DO_A17_B = DO_A17_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
			this->DO_A16_B = DO_A16_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
			this->DO_A15_B = DO_A15_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
			this->DO_A14_B = DO_A14_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
			this->DO_A13_B = DO_A13_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
			this->DO_A12_B = DO_A12_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
			this->DO_A11_B = DO_A11_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
			this->DO_A10_B = DO_A10_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
			this->DO_A9_B = DO_A9_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
			this->DO_A8_B = DO_A8_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
			this->DO_A7_B = DO_A7_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
			this->DO_A6_B = DO_A6_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
			this->DO_A5_B = DO_A5_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
			this->DO_A4_B = DO_A4_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
			this->DO_A3_B = DO_A3_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
			this->DO_A2_B = DO_A2_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
			this->DO_A1_B = DO_A1_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
			this->DO_A0_B = DO_A0_B; // net ID: DO lsb: 0  msb: 63 OUTPUT
			this->DOP_A7_B = DOP_A7_B; // net ID: DOP lsb: 0  msb: 7 OUTPUT
			this->DOP_A6_B = DOP_A6_B; // net ID: DOP lsb: 0  msb: 7 OUTPUT
			this->DOP_A5_B = DOP_A5_B; // net ID: DOP lsb: 0  msb: 7 OUTPUT
			this->DOP_A4_B = DOP_A4_B; // net ID: DOP lsb: 0  msb: 7 OUTPUT
			this->DOP_A3_B = DOP_A3_B; // net ID: DOP lsb: 0  msb: 7 OUTPUT
			this->DOP_A2_B = DOP_A2_B; // net ID: DOP lsb: 0  msb: 7 OUTPUT
			this->DOP_A1_B = DOP_A1_B; // net ID: DOP lsb: 0  msb: 7 OUTPUT
			this->DOP_A0_B = DOP_A0_B; // net ID: DOP lsb: 0  msb: 7 OUTPUT
			this->ECCPARITY_A7_B = ECCPARITY_A7_B; // net ID: ECCPARITY lsb: 0  msb: 7 OUTPUT
			this->ECCPARITY_A6_B = ECCPARITY_A6_B; // net ID: ECCPARITY lsb: 0  msb: 7 OUTPUT
			this->ECCPARITY_A5_B = ECCPARITY_A5_B; // net ID: ECCPARITY lsb: 0  msb: 7 OUTPUT
			this->ECCPARITY_A4_B = ECCPARITY_A4_B; // net ID: ECCPARITY lsb: 0  msb: 7 OUTPUT
			this->ECCPARITY_A3_B = ECCPARITY_A3_B; // net ID: ECCPARITY lsb: 0  msb: 7 OUTPUT
			this->ECCPARITY_A2_B = ECCPARITY_A2_B; // net ID: ECCPARITY lsb: 0  msb: 7 OUTPUT
			this->ECCPARITY_A1_B = ECCPARITY_A1_B; // net ID: ECCPARITY lsb: 0  msb: 7 OUTPUT
			this->ECCPARITY_A0_B = ECCPARITY_A0_B; // net ID: ECCPARITY lsb: 0  msb: 7 OUTPUT
			this->SBITERR_A0_B = SBITERR_A0_B; // net ID: SBITERR lsb: 0  msb: 0 OUTPUT
			this->DI_A63_B = DI_A63_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A62_B = DI_A62_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A61_B = DI_A61_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A60_B = DI_A60_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A59_B = DI_A59_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A58_B = DI_A58_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A57_B = DI_A57_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A56_B = DI_A56_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A55_B = DI_A55_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A54_B = DI_A54_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A53_B = DI_A53_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A52_B = DI_A52_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A51_B = DI_A51_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A50_B = DI_A50_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A49_B = DI_A49_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A48_B = DI_A48_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A47_B = DI_A47_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A46_B = DI_A46_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A45_B = DI_A45_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A44_B = DI_A44_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A43_B = DI_A43_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A42_B = DI_A42_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A41_B = DI_A41_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A40_B = DI_A40_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A39_B = DI_A39_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A38_B = DI_A38_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A37_B = DI_A37_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A36_B = DI_A36_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A35_B = DI_A35_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A34_B = DI_A34_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A33_B = DI_A33_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A32_B = DI_A32_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A31_B = DI_A31_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A30_B = DI_A30_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A29_B = DI_A29_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A28_B = DI_A28_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A27_B = DI_A27_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A26_B = DI_A26_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A25_B = DI_A25_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A24_B = DI_A24_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A23_B = DI_A23_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A22_B = DI_A22_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A21_B = DI_A21_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A20_B = DI_A20_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A19_B = DI_A19_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A18_B = DI_A18_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A17_B = DI_A17_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A16_B = DI_A16_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A15_B = DI_A15_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A14_B = DI_A14_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A13_B = DI_A13_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A12_B = DI_A12_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A11_B = DI_A11_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A10_B = DI_A10_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A9_B = DI_A9_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A8_B = DI_A8_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A7_B = DI_A7_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A6_B = DI_A6_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A5_B = DI_A5_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A4_B = DI_A4_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A3_B = DI_A3_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A2_B = DI_A2_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A1_B = DI_A1_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A0_B = DI_A0_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DIP_A7_B = DIP_A7_B; // net ID: DIP lsb: 0  msb: 7 INPUT
			this->DIP_A6_B = DIP_A6_B; // net ID: DIP lsb: 0  msb: 7 INPUT
			this->DIP_A5_B = DIP_A5_B; // net ID: DIP lsb: 0  msb: 7 INPUT
			this->DIP_A4_B = DIP_A4_B; // net ID: DIP lsb: 0  msb: 7 INPUT
			this->DIP_A3_B = DIP_A3_B; // net ID: DIP lsb: 0  msb: 7 INPUT
			this->DIP_A2_B = DIP_A2_B; // net ID: DIP lsb: 0  msb: 7 INPUT
			this->DIP_A1_B = DIP_A1_B; // net ID: DIP lsb: 0  msb: 7 INPUT
			this->DIP_A0_B = DIP_A0_B; // net ID: DIP lsb: 0  msb: 7 INPUT
			this->RDADDRL_A15_B = RDADDRL_A15_B; // net ID: RDADDRL lsb: 0  msb: 15 INPUT
			this->RDADDRL_A14_B = RDADDRL_A14_B; // net ID: RDADDRL lsb: 0  msb: 15 INPUT
			this->RDADDRL_A13_B = RDADDRL_A13_B; // net ID: RDADDRL lsb: 0  msb: 15 INPUT
			this->RDADDRL_A12_B = RDADDRL_A12_B; // net ID: RDADDRL lsb: 0  msb: 15 INPUT
			this->RDADDRL_A11_B = RDADDRL_A11_B; // net ID: RDADDRL lsb: 0  msb: 15 INPUT
			this->RDADDRL_A10_B = RDADDRL_A10_B; // net ID: RDADDRL lsb: 0  msb: 15 INPUT
			this->RDADDRL_A9_B = RDADDRL_A9_B; // net ID: RDADDRL lsb: 0  msb: 15 INPUT
			this->RDADDRL_A8_B = RDADDRL_A8_B; // net ID: RDADDRL lsb: 0  msb: 15 INPUT
			this->RDADDRL_A7_B = RDADDRL_A7_B; // net ID: RDADDRL lsb: 0  msb: 15 INPUT
			this->RDADDRL_A6_B = RDADDRL_A6_B; // net ID: RDADDRL lsb: 0  msb: 15 INPUT
			this->RDADDRL_A5_B = RDADDRL_A5_B; // net ID: RDADDRL lsb: 0  msb: 15 INPUT
			this->RDADDRL_A4_B = RDADDRL_A4_B; // net ID: RDADDRL lsb: 0  msb: 15 INPUT
			this->RDADDRL_A3_B = RDADDRL_A3_B; // net ID: RDADDRL lsb: 0  msb: 15 INPUT
			this->RDADDRL_A2_B = RDADDRL_A2_B; // net ID: RDADDRL lsb: 0  msb: 15 INPUT
			this->RDADDRL_A1_B = RDADDRL_A1_B; // net ID: RDADDRL lsb: 0  msb: 15 INPUT
			this->RDADDRL_A0_B = RDADDRL_A0_B; // net ID: RDADDRL lsb: 0  msb: 15 INPUT
			this->RDADDRU_A14_B = RDADDRU_A14_B; // net ID: RDADDRU lsb: 0  msb: 14 INPUT
			this->RDADDRU_A13_B = RDADDRU_A13_B; // net ID: RDADDRU lsb: 0  msb: 14 INPUT
			this->RDADDRU_A12_B = RDADDRU_A12_B; // net ID: RDADDRU lsb: 0  msb: 14 INPUT
			this->RDADDRU_A11_B = RDADDRU_A11_B; // net ID: RDADDRU lsb: 0  msb: 14 INPUT
			this->RDADDRU_A10_B = RDADDRU_A10_B; // net ID: RDADDRU lsb: 0  msb: 14 INPUT
			this->RDADDRU_A9_B = RDADDRU_A9_B; // net ID: RDADDRU lsb: 0  msb: 14 INPUT
			this->RDADDRU_A8_B = RDADDRU_A8_B; // net ID: RDADDRU lsb: 0  msb: 14 INPUT
			this->RDADDRU_A7_B = RDADDRU_A7_B; // net ID: RDADDRU lsb: 0  msb: 14 INPUT
			this->RDADDRU_A6_B = RDADDRU_A6_B; // net ID: RDADDRU lsb: 0  msb: 14 INPUT
			this->RDADDRU_A5_B = RDADDRU_A5_B; // net ID: RDADDRU lsb: 0  msb: 14 INPUT
			this->RDADDRU_A4_B = RDADDRU_A4_B; // net ID: RDADDRU lsb: 0  msb: 14 INPUT
			this->RDADDRU_A3_B = RDADDRU_A3_B; // net ID: RDADDRU lsb: 0  msb: 14 INPUT
			this->RDADDRU_A2_B = RDADDRU_A2_B; // net ID: RDADDRU lsb: 0  msb: 14 INPUT
			this->RDADDRU_A1_B = RDADDRU_A1_B; // net ID: RDADDRU lsb: 0  msb: 14 INPUT
			this->RDADDRU_A0_B = RDADDRU_A0_B; // net ID: RDADDRU lsb: 0  msb: 14 INPUT
			this->RDCLKL_A0_B = RDCLKL_A0_B; // net ID: RDCLKL lsb: 0  msb: 0 INPUT
			this->RDCLKU_A0_B = RDCLKU_A0_B; // net ID: RDCLKU lsb: 0  msb: 0 INPUT
			this->RDENL_A0_B = RDENL_A0_B; // net ID: RDENL lsb: 0  msb: 0 INPUT
			this->RDENU_A0_B = RDENU_A0_B; // net ID: RDENU lsb: 0  msb: 0 INPUT
			this->RDRCLKL_A0_B = RDRCLKL_A0_B; // net ID: RDRCLKL lsb: 0  msb: 0 INPUT
			this->RDRCLKU_A0_B = RDRCLKU_A0_B; // net ID: RDRCLKU lsb: 0  msb: 0 INPUT
			this->REGCEL_A0_B = REGCEL_A0_B; // net ID: REGCEL lsb: 0  msb: 0 INPUT
			this->REGCEU_A0_B = REGCEU_A0_B; // net ID: REGCEU lsb: 0  msb: 0 INPUT
			this->SSRL_A0_B = SSRL_A0_B; // net ID: SSRL lsb: 0  msb: 0 INPUT
			this->SSRU_A0_B = SSRU_A0_B; // net ID: SSRU lsb: 0  msb: 0 INPUT
			this->WEL_A7_B = WEL_A7_B; // net ID: WEL lsb: 0  msb: 7 INPUT
			this->WEL_A6_B = WEL_A6_B; // net ID: WEL lsb: 0  msb: 7 INPUT
			this->WEL_A5_B = WEL_A5_B; // net ID: WEL lsb: 0  msb: 7 INPUT
			this->WEL_A4_B = WEL_A4_B; // net ID: WEL lsb: 0  msb: 7 INPUT
			this->WEL_A3_B = WEL_A3_B; // net ID: WEL lsb: 0  msb: 7 INPUT
			this->WEL_A2_B = WEL_A2_B; // net ID: WEL lsb: 0  msb: 7 INPUT
			this->WEL_A1_B = WEL_A1_B; // net ID: WEL lsb: 0  msb: 7 INPUT
			this->WEL_A0_B = WEL_A0_B; // net ID: WEL lsb: 0  msb: 7 INPUT
			this->WEU_A7_B = WEU_A7_B; // net ID: WEU lsb: 0  msb: 7 INPUT
			this->WEU_A6_B = WEU_A6_B; // net ID: WEU lsb: 0  msb: 7 INPUT
			this->WEU_A5_B = WEU_A5_B; // net ID: WEU lsb: 0  msb: 7 INPUT
			this->WEU_A4_B = WEU_A4_B; // net ID: WEU lsb: 0  msb: 7 INPUT
			this->WEU_A3_B = WEU_A3_B; // net ID: WEU lsb: 0  msb: 7 INPUT
			this->WEU_A2_B = WEU_A2_B; // net ID: WEU lsb: 0  msb: 7 INPUT
			this->WEU_A1_B = WEU_A1_B; // net ID: WEU lsb: 0  msb: 7 INPUT
			this->WEU_A0_B = WEU_A0_B; // net ID: WEU lsb: 0  msb: 7 INPUT
			this->WRADDRL_A15_B = WRADDRL_A15_B; // net ID: WRADDRL lsb: 0  msb: 15 INPUT
			this->WRADDRL_A14_B = WRADDRL_A14_B; // net ID: WRADDRL lsb: 0  msb: 15 INPUT
			this->WRADDRL_A13_B = WRADDRL_A13_B; // net ID: WRADDRL lsb: 0  msb: 15 INPUT
			this->WRADDRL_A12_B = WRADDRL_A12_B; // net ID: WRADDRL lsb: 0  msb: 15 INPUT
			this->WRADDRL_A11_B = WRADDRL_A11_B; // net ID: WRADDRL lsb: 0  msb: 15 INPUT
			this->WRADDRL_A10_B = WRADDRL_A10_B; // net ID: WRADDRL lsb: 0  msb: 15 INPUT
			this->WRADDRL_A9_B = WRADDRL_A9_B; // net ID: WRADDRL lsb: 0  msb: 15 INPUT
			this->WRADDRL_A8_B = WRADDRL_A8_B; // net ID: WRADDRL lsb: 0  msb: 15 INPUT
			this->WRADDRL_A7_B = WRADDRL_A7_B; // net ID: WRADDRL lsb: 0  msb: 15 INPUT
			this->WRADDRL_A6_B = WRADDRL_A6_B; // net ID: WRADDRL lsb: 0  msb: 15 INPUT
			this->WRADDRL_A5_B = WRADDRL_A5_B; // net ID: WRADDRL lsb: 0  msb: 15 INPUT
			this->WRADDRL_A4_B = WRADDRL_A4_B; // net ID: WRADDRL lsb: 0  msb: 15 INPUT
			this->WRADDRL_A3_B = WRADDRL_A3_B; // net ID: WRADDRL lsb: 0  msb: 15 INPUT
			this->WRADDRL_A2_B = WRADDRL_A2_B; // net ID: WRADDRL lsb: 0  msb: 15 INPUT
			this->WRADDRL_A1_B = WRADDRL_A1_B; // net ID: WRADDRL lsb: 0  msb: 15 INPUT
			this->WRADDRL_A0_B = WRADDRL_A0_B; // net ID: WRADDRL lsb: 0  msb: 15 INPUT
			this->WRADDRU_A14_B = WRADDRU_A14_B; // net ID: WRADDRU lsb: 0  msb: 14 INPUT
			this->WRADDRU_A13_B = WRADDRU_A13_B; // net ID: WRADDRU lsb: 0  msb: 14 INPUT
			this->WRADDRU_A12_B = WRADDRU_A12_B; // net ID: WRADDRU lsb: 0  msb: 14 INPUT
			this->WRADDRU_A11_B = WRADDRU_A11_B; // net ID: WRADDRU lsb: 0  msb: 14 INPUT
			this->WRADDRU_A10_B = WRADDRU_A10_B; // net ID: WRADDRU lsb: 0  msb: 14 INPUT
			this->WRADDRU_A9_B = WRADDRU_A9_B; // net ID: WRADDRU lsb: 0  msb: 14 INPUT
			this->WRADDRU_A8_B = WRADDRU_A8_B; // net ID: WRADDRU lsb: 0  msb: 14 INPUT
			this->WRADDRU_A7_B = WRADDRU_A7_B; // net ID: WRADDRU lsb: 0  msb: 14 INPUT
			this->WRADDRU_A6_B = WRADDRU_A6_B; // net ID: WRADDRU lsb: 0  msb: 14 INPUT
			this->WRADDRU_A5_B = WRADDRU_A5_B; // net ID: WRADDRU lsb: 0  msb: 14 INPUT
			this->WRADDRU_A4_B = WRADDRU_A4_B; // net ID: WRADDRU lsb: 0  msb: 14 INPUT
			this->WRADDRU_A3_B = WRADDRU_A3_B; // net ID: WRADDRU lsb: 0  msb: 14 INPUT
			this->WRADDRU_A2_B = WRADDRU_A2_B; // net ID: WRADDRU lsb: 0  msb: 14 INPUT
			this->WRADDRU_A1_B = WRADDRU_A1_B; // net ID: WRADDRU lsb: 0  msb: 14 INPUT
			this->WRADDRU_A0_B = WRADDRU_A0_B; // net ID: WRADDRU lsb: 0  msb: 14 INPUT
			this->WRCLKL_A0_B = WRCLKL_A0_B; // net ID: WRCLKL lsb: 0  msb: 0 INPUT
			this->WRCLKU_A0_B = WRCLKU_A0_B; // net ID: WRCLKU lsb: 0  msb: 0 INPUT
			this->WRENL_A0_B = WRENL_A0_B; // net ID: WRENL lsb: 0  msb: 0 INPUT
			this->WRENU_A0_B = WRENU_A0_B; // net ID: WRENU lsb: 0  msb: 0 INPUT
			
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
#endif // X_RAMB36SDP_EXP_H
