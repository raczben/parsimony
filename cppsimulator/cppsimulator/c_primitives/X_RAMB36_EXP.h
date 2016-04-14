/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_RAMB36_EXP_H
#define X_RAMB36_EXP_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"
namespace CPrimitives {
	
	class X_RAMB36_EXP: public Primitive{

		//Verilog Parameters:
		parameter_int_t DOA_REG;
		parameter_int_t DOB_REG;
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
		parameter_int_t INIT_A;
		parameter_int_t INIT_B;
		parameter_string_t INIT_FILE;
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
		NetFlow* CASCADEOUTLATA_A0_B; // net ID: CASCADEOUTLATA lsb: 0  msb: 0 OUTPUT
		NetFlow* CASCADEOUTLATB_A0_B; // net ID: CASCADEOUTLATB lsb: 0  msb: 0 OUTPUT
		NetFlow* CASCADEOUTREGA_A0_B; // net ID: CASCADEOUTREGA lsb: 0  msb: 0 OUTPUT
		NetFlow* CASCADEOUTREGB_A0_B; // net ID: CASCADEOUTREGB lsb: 0  msb: 0 OUTPUT
		NetFlow* DOA_A0_B; // net ID: DOA lsb: 0  msb: 0 OUTPUT
		NetFlow* DOB_A0_B; // net ID: DOB lsb: 0  msb: 0 OUTPUT
		NetFlow* DOPA_A0_B; // net ID: DOPA lsb: 0  msb: 0 OUTPUT
		NetFlow* DOPB_A0_B; // net ID: DOPB lsb: 0  msb: 0 OUTPUT
		NetFlow* ADDRAL_A0_B; // net ID: ADDRAL lsb: 0  msb: 15 INPUT
		NetFlow* ADDRAL_A1_B; // net ID: ADDRAL lsb: 0  msb: 15 INPUT
		NetFlow* ADDRAL_A2_B; // net ID: ADDRAL lsb: 0  msb: 15 INPUT
		NetFlow* ADDRAL_A3_B; // net ID: ADDRAL lsb: 0  msb: 15 INPUT
		NetFlow* ADDRAL_A4_B; // net ID: ADDRAL lsb: 0  msb: 15 INPUT
		NetFlow* ADDRAL_A5_B; // net ID: ADDRAL lsb: 0  msb: 15 INPUT
		NetFlow* ADDRAL_A6_B; // net ID: ADDRAL lsb: 0  msb: 15 INPUT
		NetFlow* ADDRAL_A7_B; // net ID: ADDRAL lsb: 0  msb: 15 INPUT
		NetFlow* ADDRAL_A8_B; // net ID: ADDRAL lsb: 0  msb: 15 INPUT
		NetFlow* ADDRAL_A9_B; // net ID: ADDRAL lsb: 0  msb: 15 INPUT
		NetFlow* ADDRAL_A10_B; // net ID: ADDRAL lsb: 0  msb: 15 INPUT
		NetFlow* ADDRAL_A11_B; // net ID: ADDRAL lsb: 0  msb: 15 INPUT
		NetFlow* ADDRAL_A12_B; // net ID: ADDRAL lsb: 0  msb: 15 INPUT
		NetFlow* ADDRAL_A13_B; // net ID: ADDRAL lsb: 0  msb: 15 INPUT
		NetFlow* ADDRAL_A14_B; // net ID: ADDRAL lsb: 0  msb: 15 INPUT
		NetFlow* ADDRAL_A15_B; // net ID: ADDRAL lsb: 0  msb: 15 INPUT
		NetFlow* ADDRAU_A0_B; // net ID: ADDRAU lsb: 0  msb: 14 INPUT
		NetFlow* ADDRAU_A1_B; // net ID: ADDRAU lsb: 0  msb: 14 INPUT
		NetFlow* ADDRAU_A2_B; // net ID: ADDRAU lsb: 0  msb: 14 INPUT
		NetFlow* ADDRAU_A3_B; // net ID: ADDRAU lsb: 0  msb: 14 INPUT
		NetFlow* ADDRAU_A4_B; // net ID: ADDRAU lsb: 0  msb: 14 INPUT
		NetFlow* ADDRAU_A5_B; // net ID: ADDRAU lsb: 0  msb: 14 INPUT
		NetFlow* ADDRAU_A6_B; // net ID: ADDRAU lsb: 0  msb: 14 INPUT
		NetFlow* ADDRAU_A7_B; // net ID: ADDRAU lsb: 0  msb: 14 INPUT
		NetFlow* ADDRAU_A8_B; // net ID: ADDRAU lsb: 0  msb: 14 INPUT
		NetFlow* ADDRAU_A9_B; // net ID: ADDRAU lsb: 0  msb: 14 INPUT
		NetFlow* ADDRAU_A10_B; // net ID: ADDRAU lsb: 0  msb: 14 INPUT
		NetFlow* ADDRAU_A11_B; // net ID: ADDRAU lsb: 0  msb: 14 INPUT
		NetFlow* ADDRAU_A12_B; // net ID: ADDRAU lsb: 0  msb: 14 INPUT
		NetFlow* ADDRAU_A13_B; // net ID: ADDRAU lsb: 0  msb: 14 INPUT
		NetFlow* ADDRAU_A14_B; // net ID: ADDRAU lsb: 0  msb: 14 INPUT
		NetFlow* ADDRBL_A0_B; // net ID: ADDRBL lsb: 0  msb: 15 INPUT
		NetFlow* ADDRBL_A1_B; // net ID: ADDRBL lsb: 0  msb: 15 INPUT
		NetFlow* ADDRBL_A2_B; // net ID: ADDRBL lsb: 0  msb: 15 INPUT
		NetFlow* ADDRBL_A3_B; // net ID: ADDRBL lsb: 0  msb: 15 INPUT
		NetFlow* ADDRBL_A4_B; // net ID: ADDRBL lsb: 0  msb: 15 INPUT
		NetFlow* ADDRBL_A5_B; // net ID: ADDRBL lsb: 0  msb: 15 INPUT
		NetFlow* ADDRBL_A6_B; // net ID: ADDRBL lsb: 0  msb: 15 INPUT
		NetFlow* ADDRBL_A7_B; // net ID: ADDRBL lsb: 0  msb: 15 INPUT
		NetFlow* ADDRBL_A8_B; // net ID: ADDRBL lsb: 0  msb: 15 INPUT
		NetFlow* ADDRBL_A9_B; // net ID: ADDRBL lsb: 0  msb: 15 INPUT
		NetFlow* ADDRBL_A10_B; // net ID: ADDRBL lsb: 0  msb: 15 INPUT
		NetFlow* ADDRBL_A11_B; // net ID: ADDRBL lsb: 0  msb: 15 INPUT
		NetFlow* ADDRBL_A12_B; // net ID: ADDRBL lsb: 0  msb: 15 INPUT
		NetFlow* ADDRBL_A13_B; // net ID: ADDRBL lsb: 0  msb: 15 INPUT
		NetFlow* ADDRBL_A14_B; // net ID: ADDRBL lsb: 0  msb: 15 INPUT
		NetFlow* ADDRBL_A15_B; // net ID: ADDRBL lsb: 0  msb: 15 INPUT
		NetFlow* ADDRBU_A0_B; // net ID: ADDRBU lsb: 0  msb: 14 INPUT
		NetFlow* ADDRBU_A1_B; // net ID: ADDRBU lsb: 0  msb: 14 INPUT
		NetFlow* ADDRBU_A2_B; // net ID: ADDRBU lsb: 0  msb: 14 INPUT
		NetFlow* ADDRBU_A3_B; // net ID: ADDRBU lsb: 0  msb: 14 INPUT
		NetFlow* ADDRBU_A4_B; // net ID: ADDRBU lsb: 0  msb: 14 INPUT
		NetFlow* ADDRBU_A5_B; // net ID: ADDRBU lsb: 0  msb: 14 INPUT
		NetFlow* ADDRBU_A6_B; // net ID: ADDRBU lsb: 0  msb: 14 INPUT
		NetFlow* ADDRBU_A7_B; // net ID: ADDRBU lsb: 0  msb: 14 INPUT
		NetFlow* ADDRBU_A8_B; // net ID: ADDRBU lsb: 0  msb: 14 INPUT
		NetFlow* ADDRBU_A9_B; // net ID: ADDRBU lsb: 0  msb: 14 INPUT
		NetFlow* ADDRBU_A10_B; // net ID: ADDRBU lsb: 0  msb: 14 INPUT
		NetFlow* ADDRBU_A11_B; // net ID: ADDRBU lsb: 0  msb: 14 INPUT
		NetFlow* ADDRBU_A12_B; // net ID: ADDRBU lsb: 0  msb: 14 INPUT
		NetFlow* ADDRBU_A13_B; // net ID: ADDRBU lsb: 0  msb: 14 INPUT
		NetFlow* ADDRBU_A14_B; // net ID: ADDRBU lsb: 0  msb: 14 INPUT
		NetFlow* CASCADEINLATA_A0_B; // net ID: CASCADEINLATA lsb: 0  msb: 0 INPUT
		NetFlow* CASCADEINLATB_A0_B; // net ID: CASCADEINLATB lsb: 0  msb: 0 INPUT
		NetFlow* CASCADEINREGA_A0_B; // net ID: CASCADEINREGA lsb: 0  msb: 0 INPUT
		NetFlow* CASCADEINREGB_A0_B; // net ID: CASCADEINREGB lsb: 0  msb: 0 INPUT
		NetFlow* CLKAL_A0_B; // net ID: CLKAL lsb: 0  msb: 0 INPUT
		NetFlow* CLKAU_A0_B; // net ID: CLKAU lsb: 0  msb: 0 INPUT
		NetFlow* CLKBL_A0_B; // net ID: CLKBL lsb: 0  msb: 0 INPUT
		NetFlow* CLKBU_A0_B; // net ID: CLKBU lsb: 0  msb: 0 INPUT
		NetFlow* DIA_A0_B; // net ID: DIA lsb: 0  msb: 31 INPUT
		NetFlow* DIA_A1_B; // net ID: DIA lsb: 0  msb: 31 INPUT
		NetFlow* DIA_A2_B; // net ID: DIA lsb: 0  msb: 31 INPUT
		NetFlow* DIA_A3_B; // net ID: DIA lsb: 0  msb: 31 INPUT
		NetFlow* DIA_A4_B; // net ID: DIA lsb: 0  msb: 31 INPUT
		NetFlow* DIA_A5_B; // net ID: DIA lsb: 0  msb: 31 INPUT
		NetFlow* DIA_A6_B; // net ID: DIA lsb: 0  msb: 31 INPUT
		NetFlow* DIA_A7_B; // net ID: DIA lsb: 0  msb: 31 INPUT
		NetFlow* DIA_A8_B; // net ID: DIA lsb: 0  msb: 31 INPUT
		NetFlow* DIA_A9_B; // net ID: DIA lsb: 0  msb: 31 INPUT
		NetFlow* DIA_A10_B; // net ID: DIA lsb: 0  msb: 31 INPUT
		NetFlow* DIA_A11_B; // net ID: DIA lsb: 0  msb: 31 INPUT
		NetFlow* DIA_A12_B; // net ID: DIA lsb: 0  msb: 31 INPUT
		NetFlow* DIA_A13_B; // net ID: DIA lsb: 0  msb: 31 INPUT
		NetFlow* DIA_A14_B; // net ID: DIA lsb: 0  msb: 31 INPUT
		NetFlow* DIA_A15_B; // net ID: DIA lsb: 0  msb: 31 INPUT
		NetFlow* DIA_A16_B; // net ID: DIA lsb: 0  msb: 31 INPUT
		NetFlow* DIA_A17_B; // net ID: DIA lsb: 0  msb: 31 INPUT
		NetFlow* DIA_A18_B; // net ID: DIA lsb: 0  msb: 31 INPUT
		NetFlow* DIA_A19_B; // net ID: DIA lsb: 0  msb: 31 INPUT
		NetFlow* DIA_A20_B; // net ID: DIA lsb: 0  msb: 31 INPUT
		NetFlow* DIA_A21_B; // net ID: DIA lsb: 0  msb: 31 INPUT
		NetFlow* DIA_A22_B; // net ID: DIA lsb: 0  msb: 31 INPUT
		NetFlow* DIA_A23_B; // net ID: DIA lsb: 0  msb: 31 INPUT
		NetFlow* DIA_A24_B; // net ID: DIA lsb: 0  msb: 31 INPUT
		NetFlow* DIA_A25_B; // net ID: DIA lsb: 0  msb: 31 INPUT
		NetFlow* DIA_A26_B; // net ID: DIA lsb: 0  msb: 31 INPUT
		NetFlow* DIA_A27_B; // net ID: DIA lsb: 0  msb: 31 INPUT
		NetFlow* DIA_A28_B; // net ID: DIA lsb: 0  msb: 31 INPUT
		NetFlow* DIA_A29_B; // net ID: DIA lsb: 0  msb: 31 INPUT
		NetFlow* DIA_A30_B; // net ID: DIA lsb: 0  msb: 31 INPUT
		NetFlow* DIA_A31_B; // net ID: DIA lsb: 0  msb: 31 INPUT
		NetFlow* DIB_A0_B; // net ID: DIB lsb: 0  msb: 31 INPUT
		NetFlow* DIB_A1_B; // net ID: DIB lsb: 0  msb: 31 INPUT
		NetFlow* DIB_A2_B; // net ID: DIB lsb: 0  msb: 31 INPUT
		NetFlow* DIB_A3_B; // net ID: DIB lsb: 0  msb: 31 INPUT
		NetFlow* DIB_A4_B; // net ID: DIB lsb: 0  msb: 31 INPUT
		NetFlow* DIB_A5_B; // net ID: DIB lsb: 0  msb: 31 INPUT
		NetFlow* DIB_A6_B; // net ID: DIB lsb: 0  msb: 31 INPUT
		NetFlow* DIB_A7_B; // net ID: DIB lsb: 0  msb: 31 INPUT
		NetFlow* DIB_A8_B; // net ID: DIB lsb: 0  msb: 31 INPUT
		NetFlow* DIB_A9_B; // net ID: DIB lsb: 0  msb: 31 INPUT
		NetFlow* DIB_A10_B; // net ID: DIB lsb: 0  msb: 31 INPUT
		NetFlow* DIB_A11_B; // net ID: DIB lsb: 0  msb: 31 INPUT
		NetFlow* DIB_A12_B; // net ID: DIB lsb: 0  msb: 31 INPUT
		NetFlow* DIB_A13_B; // net ID: DIB lsb: 0  msb: 31 INPUT
		NetFlow* DIB_A14_B; // net ID: DIB lsb: 0  msb: 31 INPUT
		NetFlow* DIB_A15_B; // net ID: DIB lsb: 0  msb: 31 INPUT
		NetFlow* DIB_A16_B; // net ID: DIB lsb: 0  msb: 31 INPUT
		NetFlow* DIB_A17_B; // net ID: DIB lsb: 0  msb: 31 INPUT
		NetFlow* DIB_A18_B; // net ID: DIB lsb: 0  msb: 31 INPUT
		NetFlow* DIB_A19_B; // net ID: DIB lsb: 0  msb: 31 INPUT
		NetFlow* DIB_A20_B; // net ID: DIB lsb: 0  msb: 31 INPUT
		NetFlow* DIB_A21_B; // net ID: DIB lsb: 0  msb: 31 INPUT
		NetFlow* DIB_A22_B; // net ID: DIB lsb: 0  msb: 31 INPUT
		NetFlow* DIB_A23_B; // net ID: DIB lsb: 0  msb: 31 INPUT
		NetFlow* DIB_A24_B; // net ID: DIB lsb: 0  msb: 31 INPUT
		NetFlow* DIB_A25_B; // net ID: DIB lsb: 0  msb: 31 INPUT
		NetFlow* DIB_A26_B; // net ID: DIB lsb: 0  msb: 31 INPUT
		NetFlow* DIB_A27_B; // net ID: DIB lsb: 0  msb: 31 INPUT
		NetFlow* DIB_A28_B; // net ID: DIB lsb: 0  msb: 31 INPUT
		NetFlow* DIB_A29_B; // net ID: DIB lsb: 0  msb: 31 INPUT
		NetFlow* DIB_A30_B; // net ID: DIB lsb: 0  msb: 31 INPUT
		NetFlow* DIB_A31_B; // net ID: DIB lsb: 0  msb: 31 INPUT
		NetFlow* DIPA_A0_B; // net ID: DIPA lsb: 0  msb: 3 INPUT
		NetFlow* DIPA_A1_B; // net ID: DIPA lsb: 0  msb: 3 INPUT
		NetFlow* DIPA_A2_B; // net ID: DIPA lsb: 0  msb: 3 INPUT
		NetFlow* DIPA_A3_B; // net ID: DIPA lsb: 0  msb: 3 INPUT
		NetFlow* DIPB_A0_B; // net ID: DIPB lsb: 0  msb: 3 INPUT
		NetFlow* DIPB_A1_B; // net ID: DIPB lsb: 0  msb: 3 INPUT
		NetFlow* DIPB_A2_B; // net ID: DIPB lsb: 0  msb: 3 INPUT
		NetFlow* DIPB_A3_B; // net ID: DIPB lsb: 0  msb: 3 INPUT
		NetFlow* ENAL_A0_B; // net ID: ENAL lsb: 0  msb: 0 INPUT
		NetFlow* ENAU_A0_B; // net ID: ENAU lsb: 0  msb: 0 INPUT
		NetFlow* ENBL_A0_B; // net ID: ENBL lsb: 0  msb: 0 INPUT
		NetFlow* ENBU_A0_B; // net ID: ENBU lsb: 0  msb: 0 INPUT
		NetFlow* REGCEAL_A0_B; // net ID: REGCEAL lsb: 0  msb: 0 INPUT
		NetFlow* REGCEAU_A0_B; // net ID: REGCEAU lsb: 0  msb: 0 INPUT
		NetFlow* REGCEBL_A0_B; // net ID: REGCEBL lsb: 0  msb: 0 INPUT
		NetFlow* REGCEBU_A0_B; // net ID: REGCEBU lsb: 0  msb: 0 INPUT
		NetFlow* REGCLKAL_A0_B; // net ID: REGCLKAL lsb: 0  msb: 0 INPUT
		NetFlow* REGCLKAU_A0_B; // net ID: REGCLKAU lsb: 0  msb: 0 INPUT
		NetFlow* REGCLKBL_A0_B; // net ID: REGCLKBL lsb: 0  msb: 0 INPUT
		NetFlow* REGCLKBU_A0_B; // net ID: REGCLKBU lsb: 0  msb: 0 INPUT
		NetFlow* SSRAL_A0_B; // net ID: SSRAL lsb: 0  msb: 0 INPUT
		NetFlow* SSRAU_A0_B; // net ID: SSRAU lsb: 0  msb: 0 INPUT
		NetFlow* SSRBL_A0_B; // net ID: SSRBL lsb: 0  msb: 0 INPUT
		NetFlow* SSRBU_A0_B; // net ID: SSRBU lsb: 0  msb: 0 INPUT
		NetFlow* WEAL_A0_B; // net ID: WEAL lsb: 0  msb: 3 INPUT
		NetFlow* WEAL_A1_B; // net ID: WEAL lsb: 0  msb: 3 INPUT
		NetFlow* WEAL_A2_B; // net ID: WEAL lsb: 0  msb: 3 INPUT
		NetFlow* WEAL_A3_B; // net ID: WEAL lsb: 0  msb: 3 INPUT
		NetFlow* WEAU_A0_B; // net ID: WEAU lsb: 0  msb: 3 INPUT
		NetFlow* WEAU_A1_B; // net ID: WEAU lsb: 0  msb: 3 INPUT
		NetFlow* WEAU_A2_B; // net ID: WEAU lsb: 0  msb: 3 INPUT
		NetFlow* WEAU_A3_B; // net ID: WEAU lsb: 0  msb: 3 INPUT
		NetFlow* WEBL_A0_B; // net ID: WEBL lsb: 0  msb: 7 INPUT
		NetFlow* WEBL_A1_B; // net ID: WEBL lsb: 0  msb: 7 INPUT
		NetFlow* WEBL_A2_B; // net ID: WEBL lsb: 0  msb: 7 INPUT
		NetFlow* WEBL_A3_B; // net ID: WEBL lsb: 0  msb: 7 INPUT
		NetFlow* WEBL_A4_B; // net ID: WEBL lsb: 0  msb: 7 INPUT
		NetFlow* WEBL_A5_B; // net ID: WEBL lsb: 0  msb: 7 INPUT
		NetFlow* WEBL_A6_B; // net ID: WEBL lsb: 0  msb: 7 INPUT
		NetFlow* WEBL_A7_B; // net ID: WEBL lsb: 0  msb: 7 INPUT
		NetFlow* WEBU_A0_B; // net ID: WEBU lsb: 0  msb: 7 INPUT
		NetFlow* WEBU_A1_B; // net ID: WEBU lsb: 0  msb: 7 INPUT
		NetFlow* WEBU_A2_B; // net ID: WEBU lsb: 0  msb: 7 INPUT
		NetFlow* WEBU_A3_B; // net ID: WEBU lsb: 0  msb: 7 INPUT
		NetFlow* WEBU_A4_B; // net ID: WEBU lsb: 0  msb: 7 INPUT
		NetFlow* WEBU_A5_B; // net ID: WEBU lsb: 0  msb: 7 INPUT
		NetFlow* WEBU_A6_B; // net ID: WEBU lsb: 0  msb: 7 INPUT
		NetFlow* WEBU_A7_B; // net ID: WEBU lsb: 0  msb: 7 INPUT
		
		public: X_RAMB36_EXP(
			const char * name,
			//Verilog Parameters:
			parameter_int_t DOA_REG, // Default: 0
			parameter_int_t DOB_REG, // Default: 0
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
			parameter_int_t INIT_A, // Default: 36'h0
			parameter_int_t INIT_B, // Default: 36'h0
			parameter_string_t INIT_FILE, // Default: "NONE"
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
			NetFlow* CASCADEOUTLATA_A0_B, // net ID: CASCADEOUTLATA lsb: 0  msb: 0 OUTPUT
			NetFlow* CASCADEOUTLATB_A0_B, // net ID: CASCADEOUTLATB lsb: 0  msb: 0 OUTPUT
			NetFlow* CASCADEOUTREGA_A0_B, // net ID: CASCADEOUTREGA lsb: 0  msb: 0 OUTPUT
			NetFlow* CASCADEOUTREGB_A0_B, // net ID: CASCADEOUTREGB lsb: 0  msb: 0 OUTPUT
			NetFlow* DOA_A0_B, // net ID: DOA lsb: 0  msb: 0 OUTPUT
			NetFlow* DOB_A0_B, // net ID: DOB lsb: 0  msb: 0 OUTPUT
			NetFlow* DOPA_A0_B, // net ID: DOPA lsb: 0  msb: 0 OUTPUT
			NetFlow* DOPB_A0_B, // net ID: DOPB lsb: 0  msb: 0 OUTPUT
			NetFlow* ADDRAL_A0_B, // net ID: ADDRAL lsb: 0  msb: 15 INPUT
			NetFlow* ADDRAL_A1_B, // net ID: ADDRAL lsb: 0  msb: 15 INPUT
			NetFlow* ADDRAL_A2_B, // net ID: ADDRAL lsb: 0  msb: 15 INPUT
			NetFlow* ADDRAL_A3_B, // net ID: ADDRAL lsb: 0  msb: 15 INPUT
			NetFlow* ADDRAL_A4_B, // net ID: ADDRAL lsb: 0  msb: 15 INPUT
			NetFlow* ADDRAL_A5_B, // net ID: ADDRAL lsb: 0  msb: 15 INPUT
			NetFlow* ADDRAL_A6_B, // net ID: ADDRAL lsb: 0  msb: 15 INPUT
			NetFlow* ADDRAL_A7_B, // net ID: ADDRAL lsb: 0  msb: 15 INPUT
			NetFlow* ADDRAL_A8_B, // net ID: ADDRAL lsb: 0  msb: 15 INPUT
			NetFlow* ADDRAL_A9_B, // net ID: ADDRAL lsb: 0  msb: 15 INPUT
			NetFlow* ADDRAL_A10_B, // net ID: ADDRAL lsb: 0  msb: 15 INPUT
			NetFlow* ADDRAL_A11_B, // net ID: ADDRAL lsb: 0  msb: 15 INPUT
			NetFlow* ADDRAL_A12_B, // net ID: ADDRAL lsb: 0  msb: 15 INPUT
			NetFlow* ADDRAL_A13_B, // net ID: ADDRAL lsb: 0  msb: 15 INPUT
			NetFlow* ADDRAL_A14_B, // net ID: ADDRAL lsb: 0  msb: 15 INPUT
			NetFlow* ADDRAL_A15_B, // net ID: ADDRAL lsb: 0  msb: 15 INPUT
			NetFlow* ADDRAU_A0_B, // net ID: ADDRAU lsb: 0  msb: 14 INPUT
			NetFlow* ADDRAU_A1_B, // net ID: ADDRAU lsb: 0  msb: 14 INPUT
			NetFlow* ADDRAU_A2_B, // net ID: ADDRAU lsb: 0  msb: 14 INPUT
			NetFlow* ADDRAU_A3_B, // net ID: ADDRAU lsb: 0  msb: 14 INPUT
			NetFlow* ADDRAU_A4_B, // net ID: ADDRAU lsb: 0  msb: 14 INPUT
			NetFlow* ADDRAU_A5_B, // net ID: ADDRAU lsb: 0  msb: 14 INPUT
			NetFlow* ADDRAU_A6_B, // net ID: ADDRAU lsb: 0  msb: 14 INPUT
			NetFlow* ADDRAU_A7_B, // net ID: ADDRAU lsb: 0  msb: 14 INPUT
			NetFlow* ADDRAU_A8_B, // net ID: ADDRAU lsb: 0  msb: 14 INPUT
			NetFlow* ADDRAU_A9_B, // net ID: ADDRAU lsb: 0  msb: 14 INPUT
			NetFlow* ADDRAU_A10_B, // net ID: ADDRAU lsb: 0  msb: 14 INPUT
			NetFlow* ADDRAU_A11_B, // net ID: ADDRAU lsb: 0  msb: 14 INPUT
			NetFlow* ADDRAU_A12_B, // net ID: ADDRAU lsb: 0  msb: 14 INPUT
			NetFlow* ADDRAU_A13_B, // net ID: ADDRAU lsb: 0  msb: 14 INPUT
			NetFlow* ADDRAU_A14_B, // net ID: ADDRAU lsb: 0  msb: 14 INPUT
			NetFlow* ADDRBL_A0_B, // net ID: ADDRBL lsb: 0  msb: 15 INPUT
			NetFlow* ADDRBL_A1_B, // net ID: ADDRBL lsb: 0  msb: 15 INPUT
			NetFlow* ADDRBL_A2_B, // net ID: ADDRBL lsb: 0  msb: 15 INPUT
			NetFlow* ADDRBL_A3_B, // net ID: ADDRBL lsb: 0  msb: 15 INPUT
			NetFlow* ADDRBL_A4_B, // net ID: ADDRBL lsb: 0  msb: 15 INPUT
			NetFlow* ADDRBL_A5_B, // net ID: ADDRBL lsb: 0  msb: 15 INPUT
			NetFlow* ADDRBL_A6_B, // net ID: ADDRBL lsb: 0  msb: 15 INPUT
			NetFlow* ADDRBL_A7_B, // net ID: ADDRBL lsb: 0  msb: 15 INPUT
			NetFlow* ADDRBL_A8_B, // net ID: ADDRBL lsb: 0  msb: 15 INPUT
			NetFlow* ADDRBL_A9_B, // net ID: ADDRBL lsb: 0  msb: 15 INPUT
			NetFlow* ADDRBL_A10_B, // net ID: ADDRBL lsb: 0  msb: 15 INPUT
			NetFlow* ADDRBL_A11_B, // net ID: ADDRBL lsb: 0  msb: 15 INPUT
			NetFlow* ADDRBL_A12_B, // net ID: ADDRBL lsb: 0  msb: 15 INPUT
			NetFlow* ADDRBL_A13_B, // net ID: ADDRBL lsb: 0  msb: 15 INPUT
			NetFlow* ADDRBL_A14_B, // net ID: ADDRBL lsb: 0  msb: 15 INPUT
			NetFlow* ADDRBL_A15_B, // net ID: ADDRBL lsb: 0  msb: 15 INPUT
			NetFlow* ADDRBU_A0_B, // net ID: ADDRBU lsb: 0  msb: 14 INPUT
			NetFlow* ADDRBU_A1_B, // net ID: ADDRBU lsb: 0  msb: 14 INPUT
			NetFlow* ADDRBU_A2_B, // net ID: ADDRBU lsb: 0  msb: 14 INPUT
			NetFlow* ADDRBU_A3_B, // net ID: ADDRBU lsb: 0  msb: 14 INPUT
			NetFlow* ADDRBU_A4_B, // net ID: ADDRBU lsb: 0  msb: 14 INPUT
			NetFlow* ADDRBU_A5_B, // net ID: ADDRBU lsb: 0  msb: 14 INPUT
			NetFlow* ADDRBU_A6_B, // net ID: ADDRBU lsb: 0  msb: 14 INPUT
			NetFlow* ADDRBU_A7_B, // net ID: ADDRBU lsb: 0  msb: 14 INPUT
			NetFlow* ADDRBU_A8_B, // net ID: ADDRBU lsb: 0  msb: 14 INPUT
			NetFlow* ADDRBU_A9_B, // net ID: ADDRBU lsb: 0  msb: 14 INPUT
			NetFlow* ADDRBU_A10_B, // net ID: ADDRBU lsb: 0  msb: 14 INPUT
			NetFlow* ADDRBU_A11_B, // net ID: ADDRBU lsb: 0  msb: 14 INPUT
			NetFlow* ADDRBU_A12_B, // net ID: ADDRBU lsb: 0  msb: 14 INPUT
			NetFlow* ADDRBU_A13_B, // net ID: ADDRBU lsb: 0  msb: 14 INPUT
			NetFlow* ADDRBU_A14_B, // net ID: ADDRBU lsb: 0  msb: 14 INPUT
			NetFlow* CASCADEINLATA_A0_B, // net ID: CASCADEINLATA lsb: 0  msb: 0 INPUT
			NetFlow* CASCADEINLATB_A0_B, // net ID: CASCADEINLATB lsb: 0  msb: 0 INPUT
			NetFlow* CASCADEINREGA_A0_B, // net ID: CASCADEINREGA lsb: 0  msb: 0 INPUT
			NetFlow* CASCADEINREGB_A0_B, // net ID: CASCADEINREGB lsb: 0  msb: 0 INPUT
			NetFlow* CLKAL_A0_B, // net ID: CLKAL lsb: 0  msb: 0 INPUT
			NetFlow* CLKAU_A0_B, // net ID: CLKAU lsb: 0  msb: 0 INPUT
			NetFlow* CLKBL_A0_B, // net ID: CLKBL lsb: 0  msb: 0 INPUT
			NetFlow* CLKBU_A0_B, // net ID: CLKBU lsb: 0  msb: 0 INPUT
			NetFlow* DIA_A0_B, // net ID: DIA lsb: 0  msb: 31 INPUT
			NetFlow* DIA_A1_B, // net ID: DIA lsb: 0  msb: 31 INPUT
			NetFlow* DIA_A2_B, // net ID: DIA lsb: 0  msb: 31 INPUT
			NetFlow* DIA_A3_B, // net ID: DIA lsb: 0  msb: 31 INPUT
			NetFlow* DIA_A4_B, // net ID: DIA lsb: 0  msb: 31 INPUT
			NetFlow* DIA_A5_B, // net ID: DIA lsb: 0  msb: 31 INPUT
			NetFlow* DIA_A6_B, // net ID: DIA lsb: 0  msb: 31 INPUT
			NetFlow* DIA_A7_B, // net ID: DIA lsb: 0  msb: 31 INPUT
			NetFlow* DIA_A8_B, // net ID: DIA lsb: 0  msb: 31 INPUT
			NetFlow* DIA_A9_B, // net ID: DIA lsb: 0  msb: 31 INPUT
			NetFlow* DIA_A10_B, // net ID: DIA lsb: 0  msb: 31 INPUT
			NetFlow* DIA_A11_B, // net ID: DIA lsb: 0  msb: 31 INPUT
			NetFlow* DIA_A12_B, // net ID: DIA lsb: 0  msb: 31 INPUT
			NetFlow* DIA_A13_B, // net ID: DIA lsb: 0  msb: 31 INPUT
			NetFlow* DIA_A14_B, // net ID: DIA lsb: 0  msb: 31 INPUT
			NetFlow* DIA_A15_B, // net ID: DIA lsb: 0  msb: 31 INPUT
			NetFlow* DIA_A16_B, // net ID: DIA lsb: 0  msb: 31 INPUT
			NetFlow* DIA_A17_B, // net ID: DIA lsb: 0  msb: 31 INPUT
			NetFlow* DIA_A18_B, // net ID: DIA lsb: 0  msb: 31 INPUT
			NetFlow* DIA_A19_B, // net ID: DIA lsb: 0  msb: 31 INPUT
			NetFlow* DIA_A20_B, // net ID: DIA lsb: 0  msb: 31 INPUT
			NetFlow* DIA_A21_B, // net ID: DIA lsb: 0  msb: 31 INPUT
			NetFlow* DIA_A22_B, // net ID: DIA lsb: 0  msb: 31 INPUT
			NetFlow* DIA_A23_B, // net ID: DIA lsb: 0  msb: 31 INPUT
			NetFlow* DIA_A24_B, // net ID: DIA lsb: 0  msb: 31 INPUT
			NetFlow* DIA_A25_B, // net ID: DIA lsb: 0  msb: 31 INPUT
			NetFlow* DIA_A26_B, // net ID: DIA lsb: 0  msb: 31 INPUT
			NetFlow* DIA_A27_B, // net ID: DIA lsb: 0  msb: 31 INPUT
			NetFlow* DIA_A28_B, // net ID: DIA lsb: 0  msb: 31 INPUT
			NetFlow* DIA_A29_B, // net ID: DIA lsb: 0  msb: 31 INPUT
			NetFlow* DIA_A30_B, // net ID: DIA lsb: 0  msb: 31 INPUT
			NetFlow* DIA_A31_B, // net ID: DIA lsb: 0  msb: 31 INPUT
			NetFlow* DIB_A0_B, // net ID: DIB lsb: 0  msb: 31 INPUT
			NetFlow* DIB_A1_B, // net ID: DIB lsb: 0  msb: 31 INPUT
			NetFlow* DIB_A2_B, // net ID: DIB lsb: 0  msb: 31 INPUT
			NetFlow* DIB_A3_B, // net ID: DIB lsb: 0  msb: 31 INPUT
			NetFlow* DIB_A4_B, // net ID: DIB lsb: 0  msb: 31 INPUT
			NetFlow* DIB_A5_B, // net ID: DIB lsb: 0  msb: 31 INPUT
			NetFlow* DIB_A6_B, // net ID: DIB lsb: 0  msb: 31 INPUT
			NetFlow* DIB_A7_B, // net ID: DIB lsb: 0  msb: 31 INPUT
			NetFlow* DIB_A8_B, // net ID: DIB lsb: 0  msb: 31 INPUT
			NetFlow* DIB_A9_B, // net ID: DIB lsb: 0  msb: 31 INPUT
			NetFlow* DIB_A10_B, // net ID: DIB lsb: 0  msb: 31 INPUT
			NetFlow* DIB_A11_B, // net ID: DIB lsb: 0  msb: 31 INPUT
			NetFlow* DIB_A12_B, // net ID: DIB lsb: 0  msb: 31 INPUT
			NetFlow* DIB_A13_B, // net ID: DIB lsb: 0  msb: 31 INPUT
			NetFlow* DIB_A14_B, // net ID: DIB lsb: 0  msb: 31 INPUT
			NetFlow* DIB_A15_B, // net ID: DIB lsb: 0  msb: 31 INPUT
			NetFlow* DIB_A16_B, // net ID: DIB lsb: 0  msb: 31 INPUT
			NetFlow* DIB_A17_B, // net ID: DIB lsb: 0  msb: 31 INPUT
			NetFlow* DIB_A18_B, // net ID: DIB lsb: 0  msb: 31 INPUT
			NetFlow* DIB_A19_B, // net ID: DIB lsb: 0  msb: 31 INPUT
			NetFlow* DIB_A20_B, // net ID: DIB lsb: 0  msb: 31 INPUT
			NetFlow* DIB_A21_B, // net ID: DIB lsb: 0  msb: 31 INPUT
			NetFlow* DIB_A22_B, // net ID: DIB lsb: 0  msb: 31 INPUT
			NetFlow* DIB_A23_B, // net ID: DIB lsb: 0  msb: 31 INPUT
			NetFlow* DIB_A24_B, // net ID: DIB lsb: 0  msb: 31 INPUT
			NetFlow* DIB_A25_B, // net ID: DIB lsb: 0  msb: 31 INPUT
			NetFlow* DIB_A26_B, // net ID: DIB lsb: 0  msb: 31 INPUT
			NetFlow* DIB_A27_B, // net ID: DIB lsb: 0  msb: 31 INPUT
			NetFlow* DIB_A28_B, // net ID: DIB lsb: 0  msb: 31 INPUT
			NetFlow* DIB_A29_B, // net ID: DIB lsb: 0  msb: 31 INPUT
			NetFlow* DIB_A30_B, // net ID: DIB lsb: 0  msb: 31 INPUT
			NetFlow* DIB_A31_B, // net ID: DIB lsb: 0  msb: 31 INPUT
			NetFlow* DIPA_A0_B, // net ID: DIPA lsb: 0  msb: 3 INPUT
			NetFlow* DIPA_A1_B, // net ID: DIPA lsb: 0  msb: 3 INPUT
			NetFlow* DIPA_A2_B, // net ID: DIPA lsb: 0  msb: 3 INPUT
			NetFlow* DIPA_A3_B, // net ID: DIPA lsb: 0  msb: 3 INPUT
			NetFlow* DIPB_A0_B, // net ID: DIPB lsb: 0  msb: 3 INPUT
			NetFlow* DIPB_A1_B, // net ID: DIPB lsb: 0  msb: 3 INPUT
			NetFlow* DIPB_A2_B, // net ID: DIPB lsb: 0  msb: 3 INPUT
			NetFlow* DIPB_A3_B, // net ID: DIPB lsb: 0  msb: 3 INPUT
			NetFlow* ENAL_A0_B, // net ID: ENAL lsb: 0  msb: 0 INPUT
			NetFlow* ENAU_A0_B, // net ID: ENAU lsb: 0  msb: 0 INPUT
			NetFlow* ENBL_A0_B, // net ID: ENBL lsb: 0  msb: 0 INPUT
			NetFlow* ENBU_A0_B, // net ID: ENBU lsb: 0  msb: 0 INPUT
			NetFlow* REGCEAL_A0_B, // net ID: REGCEAL lsb: 0  msb: 0 INPUT
			NetFlow* REGCEAU_A0_B, // net ID: REGCEAU lsb: 0  msb: 0 INPUT
			NetFlow* REGCEBL_A0_B, // net ID: REGCEBL lsb: 0  msb: 0 INPUT
			NetFlow* REGCEBU_A0_B, // net ID: REGCEBU lsb: 0  msb: 0 INPUT
			NetFlow* REGCLKAL_A0_B, // net ID: REGCLKAL lsb: 0  msb: 0 INPUT
			NetFlow* REGCLKAU_A0_B, // net ID: REGCLKAU lsb: 0  msb: 0 INPUT
			NetFlow* REGCLKBL_A0_B, // net ID: REGCLKBL lsb: 0  msb: 0 INPUT
			NetFlow* REGCLKBU_A0_B, // net ID: REGCLKBU lsb: 0  msb: 0 INPUT
			NetFlow* SSRAL_A0_B, // net ID: SSRAL lsb: 0  msb: 0 INPUT
			NetFlow* SSRAU_A0_B, // net ID: SSRAU lsb: 0  msb: 0 INPUT
			NetFlow* SSRBL_A0_B, // net ID: SSRBL lsb: 0  msb: 0 INPUT
			NetFlow* SSRBU_A0_B, // net ID: SSRBU lsb: 0  msb: 0 INPUT
			NetFlow* WEAL_A0_B, // net ID: WEAL lsb: 0  msb: 3 INPUT
			NetFlow* WEAL_A1_B, // net ID: WEAL lsb: 0  msb: 3 INPUT
			NetFlow* WEAL_A2_B, // net ID: WEAL lsb: 0  msb: 3 INPUT
			NetFlow* WEAL_A3_B, // net ID: WEAL lsb: 0  msb: 3 INPUT
			NetFlow* WEAU_A0_B, // net ID: WEAU lsb: 0  msb: 3 INPUT
			NetFlow* WEAU_A1_B, // net ID: WEAU lsb: 0  msb: 3 INPUT
			NetFlow* WEAU_A2_B, // net ID: WEAU lsb: 0  msb: 3 INPUT
			NetFlow* WEAU_A3_B, // net ID: WEAU lsb: 0  msb: 3 INPUT
			NetFlow* WEBL_A0_B, // net ID: WEBL lsb: 0  msb: 7 INPUT
			NetFlow* WEBL_A1_B, // net ID: WEBL lsb: 0  msb: 7 INPUT
			NetFlow* WEBL_A2_B, // net ID: WEBL lsb: 0  msb: 7 INPUT
			NetFlow* WEBL_A3_B, // net ID: WEBL lsb: 0  msb: 7 INPUT
			NetFlow* WEBL_A4_B, // net ID: WEBL lsb: 0  msb: 7 INPUT
			NetFlow* WEBL_A5_B, // net ID: WEBL lsb: 0  msb: 7 INPUT
			NetFlow* WEBL_A6_B, // net ID: WEBL lsb: 0  msb: 7 INPUT
			NetFlow* WEBL_A7_B, // net ID: WEBL lsb: 0  msb: 7 INPUT
			NetFlow* WEBU_A0_B, // net ID: WEBU lsb: 0  msb: 7 INPUT
			NetFlow* WEBU_A1_B, // net ID: WEBU lsb: 0  msb: 7 INPUT
			NetFlow* WEBU_A2_B, // net ID: WEBU lsb: 0  msb: 7 INPUT
			NetFlow* WEBU_A3_B, // net ID: WEBU lsb: 0  msb: 7 INPUT
			NetFlow* WEBU_A4_B, // net ID: WEBU lsb: 0  msb: 7 INPUT
			NetFlow* WEBU_A5_B, // net ID: WEBU lsb: 0  msb: 7 INPUT
			NetFlow* WEBU_A6_B, // net ID: WEBU lsb: 0  msb: 7 INPUT
			NetFlow* WEBU_A7_B // net ID: WEBU lsb: 0  msb: 7 INPUT
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
			this->INIT_A = INIT_A; // Default: 36'h0
			this->INIT_B = INIT_B; // Default: 36'h0
			this->INIT_FILE = INIT_FILE; // Default: "NONE"
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
			this->CASCADEOUTLATA_A0_B = CASCADEOUTLATA_A0_B; // net ID: CASCADEOUTLATA lsb: 0  msb: 0 OUTPUT
			this->CASCADEOUTLATB_A0_B = CASCADEOUTLATB_A0_B; // net ID: CASCADEOUTLATB lsb: 0  msb: 0 OUTPUT
			this->CASCADEOUTREGA_A0_B = CASCADEOUTREGA_A0_B; // net ID: CASCADEOUTREGA lsb: 0  msb: 0 OUTPUT
			this->CASCADEOUTREGB_A0_B = CASCADEOUTREGB_A0_B; // net ID: CASCADEOUTREGB lsb: 0  msb: 0 OUTPUT
			this->DOA_A0_B = DOA_A0_B; // net ID: DOA lsb: 0  msb: 0 OUTPUT
			this->DOB_A0_B = DOB_A0_B; // net ID: DOB lsb: 0  msb: 0 OUTPUT
			this->DOPA_A0_B = DOPA_A0_B; // net ID: DOPA lsb: 0  msb: 0 OUTPUT
			this->DOPB_A0_B = DOPB_A0_B; // net ID: DOPB lsb: 0  msb: 0 OUTPUT
			this->ADDRAL_A0_B = ADDRAL_A0_B; // net ID: ADDRAL lsb: 0  msb: 15 INPUT
			this->ADDRAL_A1_B = ADDRAL_A1_B; // net ID: ADDRAL lsb: 0  msb: 15 INPUT
			this->ADDRAL_A2_B = ADDRAL_A2_B; // net ID: ADDRAL lsb: 0  msb: 15 INPUT
			this->ADDRAL_A3_B = ADDRAL_A3_B; // net ID: ADDRAL lsb: 0  msb: 15 INPUT
			this->ADDRAL_A4_B = ADDRAL_A4_B; // net ID: ADDRAL lsb: 0  msb: 15 INPUT
			this->ADDRAL_A5_B = ADDRAL_A5_B; // net ID: ADDRAL lsb: 0  msb: 15 INPUT
			this->ADDRAL_A6_B = ADDRAL_A6_B; // net ID: ADDRAL lsb: 0  msb: 15 INPUT
			this->ADDRAL_A7_B = ADDRAL_A7_B; // net ID: ADDRAL lsb: 0  msb: 15 INPUT
			this->ADDRAL_A8_B = ADDRAL_A8_B; // net ID: ADDRAL lsb: 0  msb: 15 INPUT
			this->ADDRAL_A9_B = ADDRAL_A9_B; // net ID: ADDRAL lsb: 0  msb: 15 INPUT
			this->ADDRAL_A10_B = ADDRAL_A10_B; // net ID: ADDRAL lsb: 0  msb: 15 INPUT
			this->ADDRAL_A11_B = ADDRAL_A11_B; // net ID: ADDRAL lsb: 0  msb: 15 INPUT
			this->ADDRAL_A12_B = ADDRAL_A12_B; // net ID: ADDRAL lsb: 0  msb: 15 INPUT
			this->ADDRAL_A13_B = ADDRAL_A13_B; // net ID: ADDRAL lsb: 0  msb: 15 INPUT
			this->ADDRAL_A14_B = ADDRAL_A14_B; // net ID: ADDRAL lsb: 0  msb: 15 INPUT
			this->ADDRAL_A15_B = ADDRAL_A15_B; // net ID: ADDRAL lsb: 0  msb: 15 INPUT
			this->ADDRAU_A0_B = ADDRAU_A0_B; // net ID: ADDRAU lsb: 0  msb: 14 INPUT
			this->ADDRAU_A1_B = ADDRAU_A1_B; // net ID: ADDRAU lsb: 0  msb: 14 INPUT
			this->ADDRAU_A2_B = ADDRAU_A2_B; // net ID: ADDRAU lsb: 0  msb: 14 INPUT
			this->ADDRAU_A3_B = ADDRAU_A3_B; // net ID: ADDRAU lsb: 0  msb: 14 INPUT
			this->ADDRAU_A4_B = ADDRAU_A4_B; // net ID: ADDRAU lsb: 0  msb: 14 INPUT
			this->ADDRAU_A5_B = ADDRAU_A5_B; // net ID: ADDRAU lsb: 0  msb: 14 INPUT
			this->ADDRAU_A6_B = ADDRAU_A6_B; // net ID: ADDRAU lsb: 0  msb: 14 INPUT
			this->ADDRAU_A7_B = ADDRAU_A7_B; // net ID: ADDRAU lsb: 0  msb: 14 INPUT
			this->ADDRAU_A8_B = ADDRAU_A8_B; // net ID: ADDRAU lsb: 0  msb: 14 INPUT
			this->ADDRAU_A9_B = ADDRAU_A9_B; // net ID: ADDRAU lsb: 0  msb: 14 INPUT
			this->ADDRAU_A10_B = ADDRAU_A10_B; // net ID: ADDRAU lsb: 0  msb: 14 INPUT
			this->ADDRAU_A11_B = ADDRAU_A11_B; // net ID: ADDRAU lsb: 0  msb: 14 INPUT
			this->ADDRAU_A12_B = ADDRAU_A12_B; // net ID: ADDRAU lsb: 0  msb: 14 INPUT
			this->ADDRAU_A13_B = ADDRAU_A13_B; // net ID: ADDRAU lsb: 0  msb: 14 INPUT
			this->ADDRAU_A14_B = ADDRAU_A14_B; // net ID: ADDRAU lsb: 0  msb: 14 INPUT
			this->ADDRBL_A0_B = ADDRBL_A0_B; // net ID: ADDRBL lsb: 0  msb: 15 INPUT
			this->ADDRBL_A1_B = ADDRBL_A1_B; // net ID: ADDRBL lsb: 0  msb: 15 INPUT
			this->ADDRBL_A2_B = ADDRBL_A2_B; // net ID: ADDRBL lsb: 0  msb: 15 INPUT
			this->ADDRBL_A3_B = ADDRBL_A3_B; // net ID: ADDRBL lsb: 0  msb: 15 INPUT
			this->ADDRBL_A4_B = ADDRBL_A4_B; // net ID: ADDRBL lsb: 0  msb: 15 INPUT
			this->ADDRBL_A5_B = ADDRBL_A5_B; // net ID: ADDRBL lsb: 0  msb: 15 INPUT
			this->ADDRBL_A6_B = ADDRBL_A6_B; // net ID: ADDRBL lsb: 0  msb: 15 INPUT
			this->ADDRBL_A7_B = ADDRBL_A7_B; // net ID: ADDRBL lsb: 0  msb: 15 INPUT
			this->ADDRBL_A8_B = ADDRBL_A8_B; // net ID: ADDRBL lsb: 0  msb: 15 INPUT
			this->ADDRBL_A9_B = ADDRBL_A9_B; // net ID: ADDRBL lsb: 0  msb: 15 INPUT
			this->ADDRBL_A10_B = ADDRBL_A10_B; // net ID: ADDRBL lsb: 0  msb: 15 INPUT
			this->ADDRBL_A11_B = ADDRBL_A11_B; // net ID: ADDRBL lsb: 0  msb: 15 INPUT
			this->ADDRBL_A12_B = ADDRBL_A12_B; // net ID: ADDRBL lsb: 0  msb: 15 INPUT
			this->ADDRBL_A13_B = ADDRBL_A13_B; // net ID: ADDRBL lsb: 0  msb: 15 INPUT
			this->ADDRBL_A14_B = ADDRBL_A14_B; // net ID: ADDRBL lsb: 0  msb: 15 INPUT
			this->ADDRBL_A15_B = ADDRBL_A15_B; // net ID: ADDRBL lsb: 0  msb: 15 INPUT
			this->ADDRBU_A0_B = ADDRBU_A0_B; // net ID: ADDRBU lsb: 0  msb: 14 INPUT
			this->ADDRBU_A1_B = ADDRBU_A1_B; // net ID: ADDRBU lsb: 0  msb: 14 INPUT
			this->ADDRBU_A2_B = ADDRBU_A2_B; // net ID: ADDRBU lsb: 0  msb: 14 INPUT
			this->ADDRBU_A3_B = ADDRBU_A3_B; // net ID: ADDRBU lsb: 0  msb: 14 INPUT
			this->ADDRBU_A4_B = ADDRBU_A4_B; // net ID: ADDRBU lsb: 0  msb: 14 INPUT
			this->ADDRBU_A5_B = ADDRBU_A5_B; // net ID: ADDRBU lsb: 0  msb: 14 INPUT
			this->ADDRBU_A6_B = ADDRBU_A6_B; // net ID: ADDRBU lsb: 0  msb: 14 INPUT
			this->ADDRBU_A7_B = ADDRBU_A7_B; // net ID: ADDRBU lsb: 0  msb: 14 INPUT
			this->ADDRBU_A8_B = ADDRBU_A8_B; // net ID: ADDRBU lsb: 0  msb: 14 INPUT
			this->ADDRBU_A9_B = ADDRBU_A9_B; // net ID: ADDRBU lsb: 0  msb: 14 INPUT
			this->ADDRBU_A10_B = ADDRBU_A10_B; // net ID: ADDRBU lsb: 0  msb: 14 INPUT
			this->ADDRBU_A11_B = ADDRBU_A11_B; // net ID: ADDRBU lsb: 0  msb: 14 INPUT
			this->ADDRBU_A12_B = ADDRBU_A12_B; // net ID: ADDRBU lsb: 0  msb: 14 INPUT
			this->ADDRBU_A13_B = ADDRBU_A13_B; // net ID: ADDRBU lsb: 0  msb: 14 INPUT
			this->ADDRBU_A14_B = ADDRBU_A14_B; // net ID: ADDRBU lsb: 0  msb: 14 INPUT
			this->CASCADEINLATA_A0_B = CASCADEINLATA_A0_B; // net ID: CASCADEINLATA lsb: 0  msb: 0 INPUT
			this->CASCADEINLATB_A0_B = CASCADEINLATB_A0_B; // net ID: CASCADEINLATB lsb: 0  msb: 0 INPUT
			this->CASCADEINREGA_A0_B = CASCADEINREGA_A0_B; // net ID: CASCADEINREGA lsb: 0  msb: 0 INPUT
			this->CASCADEINREGB_A0_B = CASCADEINREGB_A0_B; // net ID: CASCADEINREGB lsb: 0  msb: 0 INPUT
			this->CLKAL_A0_B = CLKAL_A0_B; // net ID: CLKAL lsb: 0  msb: 0 INPUT
			this->CLKAU_A0_B = CLKAU_A0_B; // net ID: CLKAU lsb: 0  msb: 0 INPUT
			this->CLKBL_A0_B = CLKBL_A0_B; // net ID: CLKBL lsb: 0  msb: 0 INPUT
			this->CLKBU_A0_B = CLKBU_A0_B; // net ID: CLKBU lsb: 0  msb: 0 INPUT
			this->DIA_A0_B = DIA_A0_B; // net ID: DIA lsb: 0  msb: 31 INPUT
			this->DIA_A1_B = DIA_A1_B; // net ID: DIA lsb: 0  msb: 31 INPUT
			this->DIA_A2_B = DIA_A2_B; // net ID: DIA lsb: 0  msb: 31 INPUT
			this->DIA_A3_B = DIA_A3_B; // net ID: DIA lsb: 0  msb: 31 INPUT
			this->DIA_A4_B = DIA_A4_B; // net ID: DIA lsb: 0  msb: 31 INPUT
			this->DIA_A5_B = DIA_A5_B; // net ID: DIA lsb: 0  msb: 31 INPUT
			this->DIA_A6_B = DIA_A6_B; // net ID: DIA lsb: 0  msb: 31 INPUT
			this->DIA_A7_B = DIA_A7_B; // net ID: DIA lsb: 0  msb: 31 INPUT
			this->DIA_A8_B = DIA_A8_B; // net ID: DIA lsb: 0  msb: 31 INPUT
			this->DIA_A9_B = DIA_A9_B; // net ID: DIA lsb: 0  msb: 31 INPUT
			this->DIA_A10_B = DIA_A10_B; // net ID: DIA lsb: 0  msb: 31 INPUT
			this->DIA_A11_B = DIA_A11_B; // net ID: DIA lsb: 0  msb: 31 INPUT
			this->DIA_A12_B = DIA_A12_B; // net ID: DIA lsb: 0  msb: 31 INPUT
			this->DIA_A13_B = DIA_A13_B; // net ID: DIA lsb: 0  msb: 31 INPUT
			this->DIA_A14_B = DIA_A14_B; // net ID: DIA lsb: 0  msb: 31 INPUT
			this->DIA_A15_B = DIA_A15_B; // net ID: DIA lsb: 0  msb: 31 INPUT
			this->DIA_A16_B = DIA_A16_B; // net ID: DIA lsb: 0  msb: 31 INPUT
			this->DIA_A17_B = DIA_A17_B; // net ID: DIA lsb: 0  msb: 31 INPUT
			this->DIA_A18_B = DIA_A18_B; // net ID: DIA lsb: 0  msb: 31 INPUT
			this->DIA_A19_B = DIA_A19_B; // net ID: DIA lsb: 0  msb: 31 INPUT
			this->DIA_A20_B = DIA_A20_B; // net ID: DIA lsb: 0  msb: 31 INPUT
			this->DIA_A21_B = DIA_A21_B; // net ID: DIA lsb: 0  msb: 31 INPUT
			this->DIA_A22_B = DIA_A22_B; // net ID: DIA lsb: 0  msb: 31 INPUT
			this->DIA_A23_B = DIA_A23_B; // net ID: DIA lsb: 0  msb: 31 INPUT
			this->DIA_A24_B = DIA_A24_B; // net ID: DIA lsb: 0  msb: 31 INPUT
			this->DIA_A25_B = DIA_A25_B; // net ID: DIA lsb: 0  msb: 31 INPUT
			this->DIA_A26_B = DIA_A26_B; // net ID: DIA lsb: 0  msb: 31 INPUT
			this->DIA_A27_B = DIA_A27_B; // net ID: DIA lsb: 0  msb: 31 INPUT
			this->DIA_A28_B = DIA_A28_B; // net ID: DIA lsb: 0  msb: 31 INPUT
			this->DIA_A29_B = DIA_A29_B; // net ID: DIA lsb: 0  msb: 31 INPUT
			this->DIA_A30_B = DIA_A30_B; // net ID: DIA lsb: 0  msb: 31 INPUT
			this->DIA_A31_B = DIA_A31_B; // net ID: DIA lsb: 0  msb: 31 INPUT
			this->DIB_A0_B = DIB_A0_B; // net ID: DIB lsb: 0  msb: 31 INPUT
			this->DIB_A1_B = DIB_A1_B; // net ID: DIB lsb: 0  msb: 31 INPUT
			this->DIB_A2_B = DIB_A2_B; // net ID: DIB lsb: 0  msb: 31 INPUT
			this->DIB_A3_B = DIB_A3_B; // net ID: DIB lsb: 0  msb: 31 INPUT
			this->DIB_A4_B = DIB_A4_B; // net ID: DIB lsb: 0  msb: 31 INPUT
			this->DIB_A5_B = DIB_A5_B; // net ID: DIB lsb: 0  msb: 31 INPUT
			this->DIB_A6_B = DIB_A6_B; // net ID: DIB lsb: 0  msb: 31 INPUT
			this->DIB_A7_B = DIB_A7_B; // net ID: DIB lsb: 0  msb: 31 INPUT
			this->DIB_A8_B = DIB_A8_B; // net ID: DIB lsb: 0  msb: 31 INPUT
			this->DIB_A9_B = DIB_A9_B; // net ID: DIB lsb: 0  msb: 31 INPUT
			this->DIB_A10_B = DIB_A10_B; // net ID: DIB lsb: 0  msb: 31 INPUT
			this->DIB_A11_B = DIB_A11_B; // net ID: DIB lsb: 0  msb: 31 INPUT
			this->DIB_A12_B = DIB_A12_B; // net ID: DIB lsb: 0  msb: 31 INPUT
			this->DIB_A13_B = DIB_A13_B; // net ID: DIB lsb: 0  msb: 31 INPUT
			this->DIB_A14_B = DIB_A14_B; // net ID: DIB lsb: 0  msb: 31 INPUT
			this->DIB_A15_B = DIB_A15_B; // net ID: DIB lsb: 0  msb: 31 INPUT
			this->DIB_A16_B = DIB_A16_B; // net ID: DIB lsb: 0  msb: 31 INPUT
			this->DIB_A17_B = DIB_A17_B; // net ID: DIB lsb: 0  msb: 31 INPUT
			this->DIB_A18_B = DIB_A18_B; // net ID: DIB lsb: 0  msb: 31 INPUT
			this->DIB_A19_B = DIB_A19_B; // net ID: DIB lsb: 0  msb: 31 INPUT
			this->DIB_A20_B = DIB_A20_B; // net ID: DIB lsb: 0  msb: 31 INPUT
			this->DIB_A21_B = DIB_A21_B; // net ID: DIB lsb: 0  msb: 31 INPUT
			this->DIB_A22_B = DIB_A22_B; // net ID: DIB lsb: 0  msb: 31 INPUT
			this->DIB_A23_B = DIB_A23_B; // net ID: DIB lsb: 0  msb: 31 INPUT
			this->DIB_A24_B = DIB_A24_B; // net ID: DIB lsb: 0  msb: 31 INPUT
			this->DIB_A25_B = DIB_A25_B; // net ID: DIB lsb: 0  msb: 31 INPUT
			this->DIB_A26_B = DIB_A26_B; // net ID: DIB lsb: 0  msb: 31 INPUT
			this->DIB_A27_B = DIB_A27_B; // net ID: DIB lsb: 0  msb: 31 INPUT
			this->DIB_A28_B = DIB_A28_B; // net ID: DIB lsb: 0  msb: 31 INPUT
			this->DIB_A29_B = DIB_A29_B; // net ID: DIB lsb: 0  msb: 31 INPUT
			this->DIB_A30_B = DIB_A30_B; // net ID: DIB lsb: 0  msb: 31 INPUT
			this->DIB_A31_B = DIB_A31_B; // net ID: DIB lsb: 0  msb: 31 INPUT
			this->DIPA_A0_B = DIPA_A0_B; // net ID: DIPA lsb: 0  msb: 3 INPUT
			this->DIPA_A1_B = DIPA_A1_B; // net ID: DIPA lsb: 0  msb: 3 INPUT
			this->DIPA_A2_B = DIPA_A2_B; // net ID: DIPA lsb: 0  msb: 3 INPUT
			this->DIPA_A3_B = DIPA_A3_B; // net ID: DIPA lsb: 0  msb: 3 INPUT
			this->DIPB_A0_B = DIPB_A0_B; // net ID: DIPB lsb: 0  msb: 3 INPUT
			this->DIPB_A1_B = DIPB_A1_B; // net ID: DIPB lsb: 0  msb: 3 INPUT
			this->DIPB_A2_B = DIPB_A2_B; // net ID: DIPB lsb: 0  msb: 3 INPUT
			this->DIPB_A3_B = DIPB_A3_B; // net ID: DIPB lsb: 0  msb: 3 INPUT
			this->ENAL_A0_B = ENAL_A0_B; // net ID: ENAL lsb: 0  msb: 0 INPUT
			this->ENAU_A0_B = ENAU_A0_B; // net ID: ENAU lsb: 0  msb: 0 INPUT
			this->ENBL_A0_B = ENBL_A0_B; // net ID: ENBL lsb: 0  msb: 0 INPUT
			this->ENBU_A0_B = ENBU_A0_B; // net ID: ENBU lsb: 0  msb: 0 INPUT
			this->REGCEAL_A0_B = REGCEAL_A0_B; // net ID: REGCEAL lsb: 0  msb: 0 INPUT
			this->REGCEAU_A0_B = REGCEAU_A0_B; // net ID: REGCEAU lsb: 0  msb: 0 INPUT
			this->REGCEBL_A0_B = REGCEBL_A0_B; // net ID: REGCEBL lsb: 0  msb: 0 INPUT
			this->REGCEBU_A0_B = REGCEBU_A0_B; // net ID: REGCEBU lsb: 0  msb: 0 INPUT
			this->REGCLKAL_A0_B = REGCLKAL_A0_B; // net ID: REGCLKAL lsb: 0  msb: 0 INPUT
			this->REGCLKAU_A0_B = REGCLKAU_A0_B; // net ID: REGCLKAU lsb: 0  msb: 0 INPUT
			this->REGCLKBL_A0_B = REGCLKBL_A0_B; // net ID: REGCLKBL lsb: 0  msb: 0 INPUT
			this->REGCLKBU_A0_B = REGCLKBU_A0_B; // net ID: REGCLKBU lsb: 0  msb: 0 INPUT
			this->SSRAL_A0_B = SSRAL_A0_B; // net ID: SSRAL lsb: 0  msb: 0 INPUT
			this->SSRAU_A0_B = SSRAU_A0_B; // net ID: SSRAU lsb: 0  msb: 0 INPUT
			this->SSRBL_A0_B = SSRBL_A0_B; // net ID: SSRBL lsb: 0  msb: 0 INPUT
			this->SSRBU_A0_B = SSRBU_A0_B; // net ID: SSRBU lsb: 0  msb: 0 INPUT
			this->WEAL_A0_B = WEAL_A0_B; // net ID: WEAL lsb: 0  msb: 3 INPUT
			this->WEAL_A1_B = WEAL_A1_B; // net ID: WEAL lsb: 0  msb: 3 INPUT
			this->WEAL_A2_B = WEAL_A2_B; // net ID: WEAL lsb: 0  msb: 3 INPUT
			this->WEAL_A3_B = WEAL_A3_B; // net ID: WEAL lsb: 0  msb: 3 INPUT
			this->WEAU_A0_B = WEAU_A0_B; // net ID: WEAU lsb: 0  msb: 3 INPUT
			this->WEAU_A1_B = WEAU_A1_B; // net ID: WEAU lsb: 0  msb: 3 INPUT
			this->WEAU_A2_B = WEAU_A2_B; // net ID: WEAU lsb: 0  msb: 3 INPUT
			this->WEAU_A3_B = WEAU_A3_B; // net ID: WEAU lsb: 0  msb: 3 INPUT
			this->WEBL_A0_B = WEBL_A0_B; // net ID: WEBL lsb: 0  msb: 7 INPUT
			this->WEBL_A1_B = WEBL_A1_B; // net ID: WEBL lsb: 0  msb: 7 INPUT
			this->WEBL_A2_B = WEBL_A2_B; // net ID: WEBL lsb: 0  msb: 7 INPUT
			this->WEBL_A3_B = WEBL_A3_B; // net ID: WEBL lsb: 0  msb: 7 INPUT
			this->WEBL_A4_B = WEBL_A4_B; // net ID: WEBL lsb: 0  msb: 7 INPUT
			this->WEBL_A5_B = WEBL_A5_B; // net ID: WEBL lsb: 0  msb: 7 INPUT
			this->WEBL_A6_B = WEBL_A6_B; // net ID: WEBL lsb: 0  msb: 7 INPUT
			this->WEBL_A7_B = WEBL_A7_B; // net ID: WEBL lsb: 0  msb: 7 INPUT
			this->WEBU_A0_B = WEBU_A0_B; // net ID: WEBU lsb: 0  msb: 7 INPUT
			this->WEBU_A1_B = WEBU_A1_B; // net ID: WEBU lsb: 0  msb: 7 INPUT
			this->WEBU_A2_B = WEBU_A2_B; // net ID: WEBU lsb: 0  msb: 7 INPUT
			this->WEBU_A3_B = WEBU_A3_B; // net ID: WEBU lsb: 0  msb: 7 INPUT
			this->WEBU_A4_B = WEBU_A4_B; // net ID: WEBU lsb: 0  msb: 7 INPUT
			this->WEBU_A5_B = WEBU_A5_B; // net ID: WEBU lsb: 0  msb: 7 INPUT
			this->WEBU_A6_B = WEBU_A6_B; // net ID: WEBU lsb: 0  msb: 7 INPUT
			this->WEBU_A7_B = WEBU_A7_B; // net ID: WEBU lsb: 0  msb: 7 INPUT
			
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
#endif // X_RAMB36_EXP_H
