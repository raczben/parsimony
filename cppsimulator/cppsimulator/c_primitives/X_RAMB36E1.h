/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_RAMB36E1_H
#define X_RAMB36E1_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_RAMB36E1: public Primitive{

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
		parameter_string_t RAM_MODE;
		parameter_string_t RDADDR_COLLISION_HWCONFIG;
		parameter_int_t READ_WIDTH_A;
		parameter_int_t READ_WIDTH_B;
		parameter_string_t RSTREG_PRIORITY_A;
		parameter_string_t RSTREG_PRIORITY_B;
		parameter_string_t SIM_COLLISION_CHECK;
		parameter_string_t SIM_DEVICE;
		parameter_int_t SRVAL_A;
		parameter_int_t SRVAL_B;
		parameter_string_t WRITE_MODE_A;
		parameter_string_t WRITE_MODE_B;
		parameter_int_t WRITE_WIDTH_A;
		parameter_int_t WRITE_WIDTH_B;
		//Verilog Ports in definition order:
		NetFlow* CASCADEOUTA_A0_B; // net ID: CASCADEOUTA lsb: 0  msb: 0 OUTPUT
		NetFlow* CASCADEOUTB_A0_B; // net ID: CASCADEOUTB lsb: 0  msb: 0 OUTPUT
		NetFlow* DBITERR_A0_B; // net ID: DBITERR lsb: 0  msb: 0 OUTPUT
		NetFlow* DOADO_A31_B; // net ID: DOADO lsb: 0  msb: 31 OUTPUT
		NetFlow* DOADO_A30_B; // net ID: DOADO lsb: 0  msb: 31 OUTPUT
		NetFlow* DOADO_A29_B; // net ID: DOADO lsb: 0  msb: 31 OUTPUT
		NetFlow* DOADO_A28_B; // net ID: DOADO lsb: 0  msb: 31 OUTPUT
		NetFlow* DOADO_A27_B; // net ID: DOADO lsb: 0  msb: 31 OUTPUT
		NetFlow* DOADO_A26_B; // net ID: DOADO lsb: 0  msb: 31 OUTPUT
		NetFlow* DOADO_A25_B; // net ID: DOADO lsb: 0  msb: 31 OUTPUT
		NetFlow* DOADO_A24_B; // net ID: DOADO lsb: 0  msb: 31 OUTPUT
		NetFlow* DOADO_A23_B; // net ID: DOADO lsb: 0  msb: 31 OUTPUT
		NetFlow* DOADO_A22_B; // net ID: DOADO lsb: 0  msb: 31 OUTPUT
		NetFlow* DOADO_A21_B; // net ID: DOADO lsb: 0  msb: 31 OUTPUT
		NetFlow* DOADO_A20_B; // net ID: DOADO lsb: 0  msb: 31 OUTPUT
		NetFlow* DOADO_A19_B; // net ID: DOADO lsb: 0  msb: 31 OUTPUT
		NetFlow* DOADO_A18_B; // net ID: DOADO lsb: 0  msb: 31 OUTPUT
		NetFlow* DOADO_A17_B; // net ID: DOADO lsb: 0  msb: 31 OUTPUT
		NetFlow* DOADO_A16_B; // net ID: DOADO lsb: 0  msb: 31 OUTPUT
		NetFlow* DOADO_A15_B; // net ID: DOADO lsb: 0  msb: 31 OUTPUT
		NetFlow* DOADO_A14_B; // net ID: DOADO lsb: 0  msb: 31 OUTPUT
		NetFlow* DOADO_A13_B; // net ID: DOADO lsb: 0  msb: 31 OUTPUT
		NetFlow* DOADO_A12_B; // net ID: DOADO lsb: 0  msb: 31 OUTPUT
		NetFlow* DOADO_A11_B; // net ID: DOADO lsb: 0  msb: 31 OUTPUT
		NetFlow* DOADO_A10_B; // net ID: DOADO lsb: 0  msb: 31 OUTPUT
		NetFlow* DOADO_A9_B; // net ID: DOADO lsb: 0  msb: 31 OUTPUT
		NetFlow* DOADO_A8_B; // net ID: DOADO lsb: 0  msb: 31 OUTPUT
		NetFlow* DOADO_A7_B; // net ID: DOADO lsb: 0  msb: 31 OUTPUT
		NetFlow* DOADO_A6_B; // net ID: DOADO lsb: 0  msb: 31 OUTPUT
		NetFlow* DOADO_A5_B; // net ID: DOADO lsb: 0  msb: 31 OUTPUT
		NetFlow* DOADO_A4_B; // net ID: DOADO lsb: 0  msb: 31 OUTPUT
		NetFlow* DOADO_A3_B; // net ID: DOADO lsb: 0  msb: 31 OUTPUT
		NetFlow* DOADO_A2_B; // net ID: DOADO lsb: 0  msb: 31 OUTPUT
		NetFlow* DOADO_A1_B; // net ID: DOADO lsb: 0  msb: 31 OUTPUT
		NetFlow* DOADO_A0_B; // net ID: DOADO lsb: 0  msb: 31 OUTPUT
		NetFlow* DOBDO_A31_B; // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
		NetFlow* DOBDO_A30_B; // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
		NetFlow* DOBDO_A29_B; // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
		NetFlow* DOBDO_A28_B; // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
		NetFlow* DOBDO_A27_B; // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
		NetFlow* DOBDO_A26_B; // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
		NetFlow* DOBDO_A25_B; // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
		NetFlow* DOBDO_A24_B; // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
		NetFlow* DOBDO_A23_B; // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
		NetFlow* DOBDO_A22_B; // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
		NetFlow* DOBDO_A21_B; // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
		NetFlow* DOBDO_A20_B; // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
		NetFlow* DOBDO_A19_B; // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
		NetFlow* DOBDO_A18_B; // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
		NetFlow* DOBDO_A17_B; // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
		NetFlow* DOBDO_A16_B; // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
		NetFlow* DOBDO_A15_B; // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
		NetFlow* DOBDO_A14_B; // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
		NetFlow* DOBDO_A13_B; // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
		NetFlow* DOBDO_A12_B; // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
		NetFlow* DOBDO_A11_B; // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
		NetFlow* DOBDO_A10_B; // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
		NetFlow* DOBDO_A9_B; // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
		NetFlow* DOBDO_A8_B; // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
		NetFlow* DOBDO_A7_B; // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
		NetFlow* DOBDO_A6_B; // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
		NetFlow* DOBDO_A5_B; // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
		NetFlow* DOBDO_A4_B; // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
		NetFlow* DOBDO_A3_B; // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
		NetFlow* DOBDO_A2_B; // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
		NetFlow* DOBDO_A1_B; // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
		NetFlow* DOBDO_A0_B; // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
		NetFlow* DOPADOP_A3_B; // net ID: DOPADOP lsb: 0  msb: 3 OUTPUT
		NetFlow* DOPADOP_A2_B; // net ID: DOPADOP lsb: 0  msb: 3 OUTPUT
		NetFlow* DOPADOP_A1_B; // net ID: DOPADOP lsb: 0  msb: 3 OUTPUT
		NetFlow* DOPADOP_A0_B; // net ID: DOPADOP lsb: 0  msb: 3 OUTPUT
		NetFlow* DOPBDOP_A3_B; // net ID: DOPBDOP lsb: 0  msb: 3 OUTPUT
		NetFlow* DOPBDOP_A2_B; // net ID: DOPBDOP lsb: 0  msb: 3 OUTPUT
		NetFlow* DOPBDOP_A1_B; // net ID: DOPBDOP lsb: 0  msb: 3 OUTPUT
		NetFlow* DOPBDOP_A0_B; // net ID: DOPBDOP lsb: 0  msb: 3 OUTPUT
		NetFlow* ECCPARITY_A7_B; // net ID: ECCPARITY lsb: 0  msb: 7 OUTPUT
		NetFlow* ECCPARITY_A6_B; // net ID: ECCPARITY lsb: 0  msb: 7 OUTPUT
		NetFlow* ECCPARITY_A5_B; // net ID: ECCPARITY lsb: 0  msb: 7 OUTPUT
		NetFlow* ECCPARITY_A4_B; // net ID: ECCPARITY lsb: 0  msb: 7 OUTPUT
		NetFlow* ECCPARITY_A3_B; // net ID: ECCPARITY lsb: 0  msb: 7 OUTPUT
		NetFlow* ECCPARITY_A2_B; // net ID: ECCPARITY lsb: 0  msb: 7 OUTPUT
		NetFlow* ECCPARITY_A1_B; // net ID: ECCPARITY lsb: 0  msb: 7 OUTPUT
		NetFlow* ECCPARITY_A0_B; // net ID: ECCPARITY lsb: 0  msb: 7 OUTPUT
		NetFlow* RDADDRECC_A8_B; // net ID: RDADDRECC lsb: 0  msb: 8 OUTPUT
		NetFlow* RDADDRECC_A7_B; // net ID: RDADDRECC lsb: 0  msb: 8 OUTPUT
		NetFlow* RDADDRECC_A6_B; // net ID: RDADDRECC lsb: 0  msb: 8 OUTPUT
		NetFlow* RDADDRECC_A5_B; // net ID: RDADDRECC lsb: 0  msb: 8 OUTPUT
		NetFlow* RDADDRECC_A4_B; // net ID: RDADDRECC lsb: 0  msb: 8 OUTPUT
		NetFlow* RDADDRECC_A3_B; // net ID: RDADDRECC lsb: 0  msb: 8 OUTPUT
		NetFlow* RDADDRECC_A2_B; // net ID: RDADDRECC lsb: 0  msb: 8 OUTPUT
		NetFlow* RDADDRECC_A1_B; // net ID: RDADDRECC lsb: 0  msb: 8 OUTPUT
		NetFlow* RDADDRECC_A0_B; // net ID: RDADDRECC lsb: 0  msb: 8 OUTPUT
		NetFlow* SBITERR_A0_B; // net ID: SBITERR lsb: 0  msb: 0 OUTPUT
		NetFlow* ADDRARDADDR_A15_B; // net ID: ADDRARDADDR lsb: 0  msb: 15 INPUT
		NetFlow* ADDRARDADDR_A14_B; // net ID: ADDRARDADDR lsb: 0  msb: 15 INPUT
		NetFlow* ADDRARDADDR_A13_B; // net ID: ADDRARDADDR lsb: 0  msb: 15 INPUT
		NetFlow* ADDRARDADDR_A12_B; // net ID: ADDRARDADDR lsb: 0  msb: 15 INPUT
		NetFlow* ADDRARDADDR_A11_B; // net ID: ADDRARDADDR lsb: 0  msb: 15 INPUT
		NetFlow* ADDRARDADDR_A10_B; // net ID: ADDRARDADDR lsb: 0  msb: 15 INPUT
		NetFlow* ADDRARDADDR_A9_B; // net ID: ADDRARDADDR lsb: 0  msb: 15 INPUT
		NetFlow* ADDRARDADDR_A8_B; // net ID: ADDRARDADDR lsb: 0  msb: 15 INPUT
		NetFlow* ADDRARDADDR_A7_B; // net ID: ADDRARDADDR lsb: 0  msb: 15 INPUT
		NetFlow* ADDRARDADDR_A6_B; // net ID: ADDRARDADDR lsb: 0  msb: 15 INPUT
		NetFlow* ADDRARDADDR_A5_B; // net ID: ADDRARDADDR lsb: 0  msb: 15 INPUT
		NetFlow* ADDRARDADDR_A4_B; // net ID: ADDRARDADDR lsb: 0  msb: 15 INPUT
		NetFlow* ADDRARDADDR_A3_B; // net ID: ADDRARDADDR lsb: 0  msb: 15 INPUT
		NetFlow* ADDRARDADDR_A2_B; // net ID: ADDRARDADDR lsb: 0  msb: 15 INPUT
		NetFlow* ADDRARDADDR_A1_B; // net ID: ADDRARDADDR lsb: 0  msb: 15 INPUT
		NetFlow* ADDRARDADDR_A0_B; // net ID: ADDRARDADDR lsb: 0  msb: 15 INPUT
		NetFlow* ADDRBWRADDR_A15_B; // net ID: ADDRBWRADDR lsb: 0  msb: 15 INPUT
		NetFlow* ADDRBWRADDR_A14_B; // net ID: ADDRBWRADDR lsb: 0  msb: 15 INPUT
		NetFlow* ADDRBWRADDR_A13_B; // net ID: ADDRBWRADDR lsb: 0  msb: 15 INPUT
		NetFlow* ADDRBWRADDR_A12_B; // net ID: ADDRBWRADDR lsb: 0  msb: 15 INPUT
		NetFlow* ADDRBWRADDR_A11_B; // net ID: ADDRBWRADDR lsb: 0  msb: 15 INPUT
		NetFlow* ADDRBWRADDR_A10_B; // net ID: ADDRBWRADDR lsb: 0  msb: 15 INPUT
		NetFlow* ADDRBWRADDR_A9_B; // net ID: ADDRBWRADDR lsb: 0  msb: 15 INPUT
		NetFlow* ADDRBWRADDR_A8_B; // net ID: ADDRBWRADDR lsb: 0  msb: 15 INPUT
		NetFlow* ADDRBWRADDR_A7_B; // net ID: ADDRBWRADDR lsb: 0  msb: 15 INPUT
		NetFlow* ADDRBWRADDR_A6_B; // net ID: ADDRBWRADDR lsb: 0  msb: 15 INPUT
		NetFlow* ADDRBWRADDR_A5_B; // net ID: ADDRBWRADDR lsb: 0  msb: 15 INPUT
		NetFlow* ADDRBWRADDR_A4_B; // net ID: ADDRBWRADDR lsb: 0  msb: 15 INPUT
		NetFlow* ADDRBWRADDR_A3_B; // net ID: ADDRBWRADDR lsb: 0  msb: 15 INPUT
		NetFlow* ADDRBWRADDR_A2_B; // net ID: ADDRBWRADDR lsb: 0  msb: 15 INPUT
		NetFlow* ADDRBWRADDR_A1_B; // net ID: ADDRBWRADDR lsb: 0  msb: 15 INPUT
		NetFlow* ADDRBWRADDR_A0_B; // net ID: ADDRBWRADDR lsb: 0  msb: 15 INPUT
		NetFlow* CASCADEINA_A0_B; // net ID: CASCADEINA lsb: 0  msb: 0 INPUT
		NetFlow* CASCADEINB_A0_B; // net ID: CASCADEINB lsb: 0  msb: 0 INPUT
		NetFlow* CLKARDCLK_A0_B; // net ID: CLKARDCLK lsb: 0  msb: 0 INPUT
		NetFlow* CLKBWRCLK_A0_B; // net ID: CLKBWRCLK lsb: 0  msb: 0 INPUT
		NetFlow* DIADI_A31_B; // net ID: DIADI lsb: 0  msb: 31 INPUT
		NetFlow* DIADI_A30_B; // net ID: DIADI lsb: 0  msb: 31 INPUT
		NetFlow* DIADI_A29_B; // net ID: DIADI lsb: 0  msb: 31 INPUT
		NetFlow* DIADI_A28_B; // net ID: DIADI lsb: 0  msb: 31 INPUT
		NetFlow* DIADI_A27_B; // net ID: DIADI lsb: 0  msb: 31 INPUT
		NetFlow* DIADI_A26_B; // net ID: DIADI lsb: 0  msb: 31 INPUT
		NetFlow* DIADI_A25_B; // net ID: DIADI lsb: 0  msb: 31 INPUT
		NetFlow* DIADI_A24_B; // net ID: DIADI lsb: 0  msb: 31 INPUT
		NetFlow* DIADI_A23_B; // net ID: DIADI lsb: 0  msb: 31 INPUT
		NetFlow* DIADI_A22_B; // net ID: DIADI lsb: 0  msb: 31 INPUT
		NetFlow* DIADI_A21_B; // net ID: DIADI lsb: 0  msb: 31 INPUT
		NetFlow* DIADI_A20_B; // net ID: DIADI lsb: 0  msb: 31 INPUT
		NetFlow* DIADI_A19_B; // net ID: DIADI lsb: 0  msb: 31 INPUT
		NetFlow* DIADI_A18_B; // net ID: DIADI lsb: 0  msb: 31 INPUT
		NetFlow* DIADI_A17_B; // net ID: DIADI lsb: 0  msb: 31 INPUT
		NetFlow* DIADI_A16_B; // net ID: DIADI lsb: 0  msb: 31 INPUT
		NetFlow* DIADI_A15_B; // net ID: DIADI lsb: 0  msb: 31 INPUT
		NetFlow* DIADI_A14_B; // net ID: DIADI lsb: 0  msb: 31 INPUT
		NetFlow* DIADI_A13_B; // net ID: DIADI lsb: 0  msb: 31 INPUT
		NetFlow* DIADI_A12_B; // net ID: DIADI lsb: 0  msb: 31 INPUT
		NetFlow* DIADI_A11_B; // net ID: DIADI lsb: 0  msb: 31 INPUT
		NetFlow* DIADI_A10_B; // net ID: DIADI lsb: 0  msb: 31 INPUT
		NetFlow* DIADI_A9_B; // net ID: DIADI lsb: 0  msb: 31 INPUT
		NetFlow* DIADI_A8_B; // net ID: DIADI lsb: 0  msb: 31 INPUT
		NetFlow* DIADI_A7_B; // net ID: DIADI lsb: 0  msb: 31 INPUT
		NetFlow* DIADI_A6_B; // net ID: DIADI lsb: 0  msb: 31 INPUT
		NetFlow* DIADI_A5_B; // net ID: DIADI lsb: 0  msb: 31 INPUT
		NetFlow* DIADI_A4_B; // net ID: DIADI lsb: 0  msb: 31 INPUT
		NetFlow* DIADI_A3_B; // net ID: DIADI lsb: 0  msb: 31 INPUT
		NetFlow* DIADI_A2_B; // net ID: DIADI lsb: 0  msb: 31 INPUT
		NetFlow* DIADI_A1_B; // net ID: DIADI lsb: 0  msb: 31 INPUT
		NetFlow* DIADI_A0_B; // net ID: DIADI lsb: 0  msb: 31 INPUT
		NetFlow* DIBDI_A31_B; // net ID: DIBDI lsb: 0  msb: 31 INPUT
		NetFlow* DIBDI_A30_B; // net ID: DIBDI lsb: 0  msb: 31 INPUT
		NetFlow* DIBDI_A29_B; // net ID: DIBDI lsb: 0  msb: 31 INPUT
		NetFlow* DIBDI_A28_B; // net ID: DIBDI lsb: 0  msb: 31 INPUT
		NetFlow* DIBDI_A27_B; // net ID: DIBDI lsb: 0  msb: 31 INPUT
		NetFlow* DIBDI_A26_B; // net ID: DIBDI lsb: 0  msb: 31 INPUT
		NetFlow* DIBDI_A25_B; // net ID: DIBDI lsb: 0  msb: 31 INPUT
		NetFlow* DIBDI_A24_B; // net ID: DIBDI lsb: 0  msb: 31 INPUT
		NetFlow* DIBDI_A23_B; // net ID: DIBDI lsb: 0  msb: 31 INPUT
		NetFlow* DIBDI_A22_B; // net ID: DIBDI lsb: 0  msb: 31 INPUT
		NetFlow* DIBDI_A21_B; // net ID: DIBDI lsb: 0  msb: 31 INPUT
		NetFlow* DIBDI_A20_B; // net ID: DIBDI lsb: 0  msb: 31 INPUT
		NetFlow* DIBDI_A19_B; // net ID: DIBDI lsb: 0  msb: 31 INPUT
		NetFlow* DIBDI_A18_B; // net ID: DIBDI lsb: 0  msb: 31 INPUT
		NetFlow* DIBDI_A17_B; // net ID: DIBDI lsb: 0  msb: 31 INPUT
		NetFlow* DIBDI_A16_B; // net ID: DIBDI lsb: 0  msb: 31 INPUT
		NetFlow* DIBDI_A15_B; // net ID: DIBDI lsb: 0  msb: 31 INPUT
		NetFlow* DIBDI_A14_B; // net ID: DIBDI lsb: 0  msb: 31 INPUT
		NetFlow* DIBDI_A13_B; // net ID: DIBDI lsb: 0  msb: 31 INPUT
		NetFlow* DIBDI_A12_B; // net ID: DIBDI lsb: 0  msb: 31 INPUT
		NetFlow* DIBDI_A11_B; // net ID: DIBDI lsb: 0  msb: 31 INPUT
		NetFlow* DIBDI_A10_B; // net ID: DIBDI lsb: 0  msb: 31 INPUT
		NetFlow* DIBDI_A9_B; // net ID: DIBDI lsb: 0  msb: 31 INPUT
		NetFlow* DIBDI_A8_B; // net ID: DIBDI lsb: 0  msb: 31 INPUT
		NetFlow* DIBDI_A7_B; // net ID: DIBDI lsb: 0  msb: 31 INPUT
		NetFlow* DIBDI_A6_B; // net ID: DIBDI lsb: 0  msb: 31 INPUT
		NetFlow* DIBDI_A5_B; // net ID: DIBDI lsb: 0  msb: 31 INPUT
		NetFlow* DIBDI_A4_B; // net ID: DIBDI lsb: 0  msb: 31 INPUT
		NetFlow* DIBDI_A3_B; // net ID: DIBDI lsb: 0  msb: 31 INPUT
		NetFlow* DIBDI_A2_B; // net ID: DIBDI lsb: 0  msb: 31 INPUT
		NetFlow* DIBDI_A1_B; // net ID: DIBDI lsb: 0  msb: 31 INPUT
		NetFlow* DIBDI_A0_B; // net ID: DIBDI lsb: 0  msb: 31 INPUT
		NetFlow* DIPADIP_A3_B; // net ID: DIPADIP lsb: 0  msb: 3 INPUT
		NetFlow* DIPADIP_A2_B; // net ID: DIPADIP lsb: 0  msb: 3 INPUT
		NetFlow* DIPADIP_A1_B; // net ID: DIPADIP lsb: 0  msb: 3 INPUT
		NetFlow* DIPADIP_A0_B; // net ID: DIPADIP lsb: 0  msb: 3 INPUT
		NetFlow* DIPBDIP_A3_B; // net ID: DIPBDIP lsb: 0  msb: 3 INPUT
		NetFlow* DIPBDIP_A2_B; // net ID: DIPBDIP lsb: 0  msb: 3 INPUT
		NetFlow* DIPBDIP_A1_B; // net ID: DIPBDIP lsb: 0  msb: 3 INPUT
		NetFlow* DIPBDIP_A0_B; // net ID: DIPBDIP lsb: 0  msb: 3 INPUT
		NetFlow* ENARDEN_A0_B; // net ID: ENARDEN lsb: 0  msb: 0 INPUT
		NetFlow* ENBWREN_A0_B; // net ID: ENBWREN lsb: 0  msb: 0 INPUT
		NetFlow* INJECTDBITERR_A0_B; // net ID: INJECTDBITERR lsb: 0  msb: 0 INPUT
		NetFlow* INJECTSBITERR_A0_B; // net ID: INJECTSBITERR lsb: 0  msb: 0 INPUT
		NetFlow* REGCEAREGCE_A0_B; // net ID: REGCEAREGCE lsb: 0  msb: 0 INPUT
		NetFlow* REGCEB_A0_B; // net ID: REGCEB lsb: 0  msb: 0 INPUT
		NetFlow* RSTRAMARSTRAM_A0_B; // net ID: RSTRAMARSTRAM lsb: 0  msb: 0 INPUT
		NetFlow* RSTRAMB_A0_B; // net ID: RSTRAMB lsb: 0  msb: 0 INPUT
		NetFlow* RSTREGARSTREG_A0_B; // net ID: RSTREGARSTREG lsb: 0  msb: 0 INPUT
		NetFlow* RSTREGB_A0_B; // net ID: RSTREGB lsb: 0  msb: 0 INPUT
		NetFlow* WEA_A3_B; // net ID: WEA lsb: 0  msb: 3 INPUT
		NetFlow* WEA_A2_B; // net ID: WEA lsb: 0  msb: 3 INPUT
		NetFlow* WEA_A1_B; // net ID: WEA lsb: 0  msb: 3 INPUT
		NetFlow* WEA_A0_B; // net ID: WEA lsb: 0  msb: 3 INPUT
		NetFlow* WEBWE_A7_B; // net ID: WEBWE lsb: 0  msb: 7 INPUT
		NetFlow* WEBWE_A6_B; // net ID: WEBWE lsb: 0  msb: 7 INPUT
		NetFlow* WEBWE_A5_B; // net ID: WEBWE lsb: 0  msb: 7 INPUT
		NetFlow* WEBWE_A4_B; // net ID: WEBWE lsb: 0  msb: 7 INPUT
		NetFlow* WEBWE_A3_B; // net ID: WEBWE lsb: 0  msb: 7 INPUT
		NetFlow* WEBWE_A2_B; // net ID: WEBWE lsb: 0  msb: 7 INPUT
		NetFlow* WEBWE_A1_B; // net ID: WEBWE lsb: 0  msb: 7 INPUT
		NetFlow* WEBWE_A0_B; // net ID: WEBWE lsb: 0  msb: 7 INPUT
		
		public: X_RAMB36E1(
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
			parameter_string_t RAM_MODE, // Default: "TDP"
			parameter_string_t RDADDR_COLLISION_HWCONFIG, // Default: "DELAYED_WRITE"
			parameter_int_t READ_WIDTH_A, // Default: 0
			parameter_int_t READ_WIDTH_B, // Default: 0
			parameter_string_t RSTREG_PRIORITY_A, // Default: "RSTREG"
			parameter_string_t RSTREG_PRIORITY_B, // Default: "RSTREG"
			parameter_string_t SIM_COLLISION_CHECK, // Default: "ALL"
			parameter_string_t SIM_DEVICE, // Default: "VIRTEX6"
			parameter_int_t SRVAL_A, // Default: 36'h0
			parameter_int_t SRVAL_B, // Default: 36'h0
			parameter_string_t WRITE_MODE_A, // Default: "WRITE_FIRST"
			parameter_string_t WRITE_MODE_B, // Default: "WRITE_FIRST"
			parameter_int_t WRITE_WIDTH_A, // Default: 0
			parameter_int_t WRITE_WIDTH_B, // Default: 0
			//Verilog Ports in definition order:
			NetFlow* CASCADEOUTA_A0_B, // net ID: CASCADEOUTA lsb: 0  msb: 0 OUTPUT
			NetFlow* CASCADEOUTB_A0_B, // net ID: CASCADEOUTB lsb: 0  msb: 0 OUTPUT
			NetFlow* DBITERR_A0_B, // net ID: DBITERR lsb: 0  msb: 0 OUTPUT
			NetFlow* DOADO_A31_B, // net ID: DOADO lsb: 0  msb: 31 OUTPUT
			NetFlow* DOADO_A30_B, // net ID: DOADO lsb: 0  msb: 31 OUTPUT
			NetFlow* DOADO_A29_B, // net ID: DOADO lsb: 0  msb: 31 OUTPUT
			NetFlow* DOADO_A28_B, // net ID: DOADO lsb: 0  msb: 31 OUTPUT
			NetFlow* DOADO_A27_B, // net ID: DOADO lsb: 0  msb: 31 OUTPUT
			NetFlow* DOADO_A26_B, // net ID: DOADO lsb: 0  msb: 31 OUTPUT
			NetFlow* DOADO_A25_B, // net ID: DOADO lsb: 0  msb: 31 OUTPUT
			NetFlow* DOADO_A24_B, // net ID: DOADO lsb: 0  msb: 31 OUTPUT
			NetFlow* DOADO_A23_B, // net ID: DOADO lsb: 0  msb: 31 OUTPUT
			NetFlow* DOADO_A22_B, // net ID: DOADO lsb: 0  msb: 31 OUTPUT
			NetFlow* DOADO_A21_B, // net ID: DOADO lsb: 0  msb: 31 OUTPUT
			NetFlow* DOADO_A20_B, // net ID: DOADO lsb: 0  msb: 31 OUTPUT
			NetFlow* DOADO_A19_B, // net ID: DOADO lsb: 0  msb: 31 OUTPUT
			NetFlow* DOADO_A18_B, // net ID: DOADO lsb: 0  msb: 31 OUTPUT
			NetFlow* DOADO_A17_B, // net ID: DOADO lsb: 0  msb: 31 OUTPUT
			NetFlow* DOADO_A16_B, // net ID: DOADO lsb: 0  msb: 31 OUTPUT
			NetFlow* DOADO_A15_B, // net ID: DOADO lsb: 0  msb: 31 OUTPUT
			NetFlow* DOADO_A14_B, // net ID: DOADO lsb: 0  msb: 31 OUTPUT
			NetFlow* DOADO_A13_B, // net ID: DOADO lsb: 0  msb: 31 OUTPUT
			NetFlow* DOADO_A12_B, // net ID: DOADO lsb: 0  msb: 31 OUTPUT
			NetFlow* DOADO_A11_B, // net ID: DOADO lsb: 0  msb: 31 OUTPUT
			NetFlow* DOADO_A10_B, // net ID: DOADO lsb: 0  msb: 31 OUTPUT
			NetFlow* DOADO_A9_B, // net ID: DOADO lsb: 0  msb: 31 OUTPUT
			NetFlow* DOADO_A8_B, // net ID: DOADO lsb: 0  msb: 31 OUTPUT
			NetFlow* DOADO_A7_B, // net ID: DOADO lsb: 0  msb: 31 OUTPUT
			NetFlow* DOADO_A6_B, // net ID: DOADO lsb: 0  msb: 31 OUTPUT
			NetFlow* DOADO_A5_B, // net ID: DOADO lsb: 0  msb: 31 OUTPUT
			NetFlow* DOADO_A4_B, // net ID: DOADO lsb: 0  msb: 31 OUTPUT
			NetFlow* DOADO_A3_B, // net ID: DOADO lsb: 0  msb: 31 OUTPUT
			NetFlow* DOADO_A2_B, // net ID: DOADO lsb: 0  msb: 31 OUTPUT
			NetFlow* DOADO_A1_B, // net ID: DOADO lsb: 0  msb: 31 OUTPUT
			NetFlow* DOADO_A0_B, // net ID: DOADO lsb: 0  msb: 31 OUTPUT
			NetFlow* DOBDO_A31_B, // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
			NetFlow* DOBDO_A30_B, // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
			NetFlow* DOBDO_A29_B, // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
			NetFlow* DOBDO_A28_B, // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
			NetFlow* DOBDO_A27_B, // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
			NetFlow* DOBDO_A26_B, // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
			NetFlow* DOBDO_A25_B, // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
			NetFlow* DOBDO_A24_B, // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
			NetFlow* DOBDO_A23_B, // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
			NetFlow* DOBDO_A22_B, // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
			NetFlow* DOBDO_A21_B, // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
			NetFlow* DOBDO_A20_B, // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
			NetFlow* DOBDO_A19_B, // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
			NetFlow* DOBDO_A18_B, // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
			NetFlow* DOBDO_A17_B, // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
			NetFlow* DOBDO_A16_B, // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
			NetFlow* DOBDO_A15_B, // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
			NetFlow* DOBDO_A14_B, // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
			NetFlow* DOBDO_A13_B, // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
			NetFlow* DOBDO_A12_B, // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
			NetFlow* DOBDO_A11_B, // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
			NetFlow* DOBDO_A10_B, // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
			NetFlow* DOBDO_A9_B, // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
			NetFlow* DOBDO_A8_B, // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
			NetFlow* DOBDO_A7_B, // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
			NetFlow* DOBDO_A6_B, // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
			NetFlow* DOBDO_A5_B, // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
			NetFlow* DOBDO_A4_B, // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
			NetFlow* DOBDO_A3_B, // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
			NetFlow* DOBDO_A2_B, // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
			NetFlow* DOBDO_A1_B, // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
			NetFlow* DOBDO_A0_B, // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
			NetFlow* DOPADOP_A3_B, // net ID: DOPADOP lsb: 0  msb: 3 OUTPUT
			NetFlow* DOPADOP_A2_B, // net ID: DOPADOP lsb: 0  msb: 3 OUTPUT
			NetFlow* DOPADOP_A1_B, // net ID: DOPADOP lsb: 0  msb: 3 OUTPUT
			NetFlow* DOPADOP_A0_B, // net ID: DOPADOP lsb: 0  msb: 3 OUTPUT
			NetFlow* DOPBDOP_A3_B, // net ID: DOPBDOP lsb: 0  msb: 3 OUTPUT
			NetFlow* DOPBDOP_A2_B, // net ID: DOPBDOP lsb: 0  msb: 3 OUTPUT
			NetFlow* DOPBDOP_A1_B, // net ID: DOPBDOP lsb: 0  msb: 3 OUTPUT
			NetFlow* DOPBDOP_A0_B, // net ID: DOPBDOP lsb: 0  msb: 3 OUTPUT
			NetFlow* ECCPARITY_A7_B, // net ID: ECCPARITY lsb: 0  msb: 7 OUTPUT
			NetFlow* ECCPARITY_A6_B, // net ID: ECCPARITY lsb: 0  msb: 7 OUTPUT
			NetFlow* ECCPARITY_A5_B, // net ID: ECCPARITY lsb: 0  msb: 7 OUTPUT
			NetFlow* ECCPARITY_A4_B, // net ID: ECCPARITY lsb: 0  msb: 7 OUTPUT
			NetFlow* ECCPARITY_A3_B, // net ID: ECCPARITY lsb: 0  msb: 7 OUTPUT
			NetFlow* ECCPARITY_A2_B, // net ID: ECCPARITY lsb: 0  msb: 7 OUTPUT
			NetFlow* ECCPARITY_A1_B, // net ID: ECCPARITY lsb: 0  msb: 7 OUTPUT
			NetFlow* ECCPARITY_A0_B, // net ID: ECCPARITY lsb: 0  msb: 7 OUTPUT
			NetFlow* RDADDRECC_A8_B, // net ID: RDADDRECC lsb: 0  msb: 8 OUTPUT
			NetFlow* RDADDRECC_A7_B, // net ID: RDADDRECC lsb: 0  msb: 8 OUTPUT
			NetFlow* RDADDRECC_A6_B, // net ID: RDADDRECC lsb: 0  msb: 8 OUTPUT
			NetFlow* RDADDRECC_A5_B, // net ID: RDADDRECC lsb: 0  msb: 8 OUTPUT
			NetFlow* RDADDRECC_A4_B, // net ID: RDADDRECC lsb: 0  msb: 8 OUTPUT
			NetFlow* RDADDRECC_A3_B, // net ID: RDADDRECC lsb: 0  msb: 8 OUTPUT
			NetFlow* RDADDRECC_A2_B, // net ID: RDADDRECC lsb: 0  msb: 8 OUTPUT
			NetFlow* RDADDRECC_A1_B, // net ID: RDADDRECC lsb: 0  msb: 8 OUTPUT
			NetFlow* RDADDRECC_A0_B, // net ID: RDADDRECC lsb: 0  msb: 8 OUTPUT
			NetFlow* SBITERR_A0_B, // net ID: SBITERR lsb: 0  msb: 0 OUTPUT
			NetFlow* ADDRARDADDR_A15_B, // net ID: ADDRARDADDR lsb: 0  msb: 15 INPUT
			NetFlow* ADDRARDADDR_A14_B, // net ID: ADDRARDADDR lsb: 0  msb: 15 INPUT
			NetFlow* ADDRARDADDR_A13_B, // net ID: ADDRARDADDR lsb: 0  msb: 15 INPUT
			NetFlow* ADDRARDADDR_A12_B, // net ID: ADDRARDADDR lsb: 0  msb: 15 INPUT
			NetFlow* ADDRARDADDR_A11_B, // net ID: ADDRARDADDR lsb: 0  msb: 15 INPUT
			NetFlow* ADDRARDADDR_A10_B, // net ID: ADDRARDADDR lsb: 0  msb: 15 INPUT
			NetFlow* ADDRARDADDR_A9_B, // net ID: ADDRARDADDR lsb: 0  msb: 15 INPUT
			NetFlow* ADDRARDADDR_A8_B, // net ID: ADDRARDADDR lsb: 0  msb: 15 INPUT
			NetFlow* ADDRARDADDR_A7_B, // net ID: ADDRARDADDR lsb: 0  msb: 15 INPUT
			NetFlow* ADDRARDADDR_A6_B, // net ID: ADDRARDADDR lsb: 0  msb: 15 INPUT
			NetFlow* ADDRARDADDR_A5_B, // net ID: ADDRARDADDR lsb: 0  msb: 15 INPUT
			NetFlow* ADDRARDADDR_A4_B, // net ID: ADDRARDADDR lsb: 0  msb: 15 INPUT
			NetFlow* ADDRARDADDR_A3_B, // net ID: ADDRARDADDR lsb: 0  msb: 15 INPUT
			NetFlow* ADDRARDADDR_A2_B, // net ID: ADDRARDADDR lsb: 0  msb: 15 INPUT
			NetFlow* ADDRARDADDR_A1_B, // net ID: ADDRARDADDR lsb: 0  msb: 15 INPUT
			NetFlow* ADDRARDADDR_A0_B, // net ID: ADDRARDADDR lsb: 0  msb: 15 INPUT
			NetFlow* ADDRBWRADDR_A15_B, // net ID: ADDRBWRADDR lsb: 0  msb: 15 INPUT
			NetFlow* ADDRBWRADDR_A14_B, // net ID: ADDRBWRADDR lsb: 0  msb: 15 INPUT
			NetFlow* ADDRBWRADDR_A13_B, // net ID: ADDRBWRADDR lsb: 0  msb: 15 INPUT
			NetFlow* ADDRBWRADDR_A12_B, // net ID: ADDRBWRADDR lsb: 0  msb: 15 INPUT
			NetFlow* ADDRBWRADDR_A11_B, // net ID: ADDRBWRADDR lsb: 0  msb: 15 INPUT
			NetFlow* ADDRBWRADDR_A10_B, // net ID: ADDRBWRADDR lsb: 0  msb: 15 INPUT
			NetFlow* ADDRBWRADDR_A9_B, // net ID: ADDRBWRADDR lsb: 0  msb: 15 INPUT
			NetFlow* ADDRBWRADDR_A8_B, // net ID: ADDRBWRADDR lsb: 0  msb: 15 INPUT
			NetFlow* ADDRBWRADDR_A7_B, // net ID: ADDRBWRADDR lsb: 0  msb: 15 INPUT
			NetFlow* ADDRBWRADDR_A6_B, // net ID: ADDRBWRADDR lsb: 0  msb: 15 INPUT
			NetFlow* ADDRBWRADDR_A5_B, // net ID: ADDRBWRADDR lsb: 0  msb: 15 INPUT
			NetFlow* ADDRBWRADDR_A4_B, // net ID: ADDRBWRADDR lsb: 0  msb: 15 INPUT
			NetFlow* ADDRBWRADDR_A3_B, // net ID: ADDRBWRADDR lsb: 0  msb: 15 INPUT
			NetFlow* ADDRBWRADDR_A2_B, // net ID: ADDRBWRADDR lsb: 0  msb: 15 INPUT
			NetFlow* ADDRBWRADDR_A1_B, // net ID: ADDRBWRADDR lsb: 0  msb: 15 INPUT
			NetFlow* ADDRBWRADDR_A0_B, // net ID: ADDRBWRADDR lsb: 0  msb: 15 INPUT
			NetFlow* CASCADEINA_A0_B, // net ID: CASCADEINA lsb: 0  msb: 0 INPUT
			NetFlow* CASCADEINB_A0_B, // net ID: CASCADEINB lsb: 0  msb: 0 INPUT
			NetFlow* CLKARDCLK_A0_B, // net ID: CLKARDCLK lsb: 0  msb: 0 INPUT
			NetFlow* CLKBWRCLK_A0_B, // net ID: CLKBWRCLK lsb: 0  msb: 0 INPUT
			NetFlow* DIADI_A31_B, // net ID: DIADI lsb: 0  msb: 31 INPUT
			NetFlow* DIADI_A30_B, // net ID: DIADI lsb: 0  msb: 31 INPUT
			NetFlow* DIADI_A29_B, // net ID: DIADI lsb: 0  msb: 31 INPUT
			NetFlow* DIADI_A28_B, // net ID: DIADI lsb: 0  msb: 31 INPUT
			NetFlow* DIADI_A27_B, // net ID: DIADI lsb: 0  msb: 31 INPUT
			NetFlow* DIADI_A26_B, // net ID: DIADI lsb: 0  msb: 31 INPUT
			NetFlow* DIADI_A25_B, // net ID: DIADI lsb: 0  msb: 31 INPUT
			NetFlow* DIADI_A24_B, // net ID: DIADI lsb: 0  msb: 31 INPUT
			NetFlow* DIADI_A23_B, // net ID: DIADI lsb: 0  msb: 31 INPUT
			NetFlow* DIADI_A22_B, // net ID: DIADI lsb: 0  msb: 31 INPUT
			NetFlow* DIADI_A21_B, // net ID: DIADI lsb: 0  msb: 31 INPUT
			NetFlow* DIADI_A20_B, // net ID: DIADI lsb: 0  msb: 31 INPUT
			NetFlow* DIADI_A19_B, // net ID: DIADI lsb: 0  msb: 31 INPUT
			NetFlow* DIADI_A18_B, // net ID: DIADI lsb: 0  msb: 31 INPUT
			NetFlow* DIADI_A17_B, // net ID: DIADI lsb: 0  msb: 31 INPUT
			NetFlow* DIADI_A16_B, // net ID: DIADI lsb: 0  msb: 31 INPUT
			NetFlow* DIADI_A15_B, // net ID: DIADI lsb: 0  msb: 31 INPUT
			NetFlow* DIADI_A14_B, // net ID: DIADI lsb: 0  msb: 31 INPUT
			NetFlow* DIADI_A13_B, // net ID: DIADI lsb: 0  msb: 31 INPUT
			NetFlow* DIADI_A12_B, // net ID: DIADI lsb: 0  msb: 31 INPUT
			NetFlow* DIADI_A11_B, // net ID: DIADI lsb: 0  msb: 31 INPUT
			NetFlow* DIADI_A10_B, // net ID: DIADI lsb: 0  msb: 31 INPUT
			NetFlow* DIADI_A9_B, // net ID: DIADI lsb: 0  msb: 31 INPUT
			NetFlow* DIADI_A8_B, // net ID: DIADI lsb: 0  msb: 31 INPUT
			NetFlow* DIADI_A7_B, // net ID: DIADI lsb: 0  msb: 31 INPUT
			NetFlow* DIADI_A6_B, // net ID: DIADI lsb: 0  msb: 31 INPUT
			NetFlow* DIADI_A5_B, // net ID: DIADI lsb: 0  msb: 31 INPUT
			NetFlow* DIADI_A4_B, // net ID: DIADI lsb: 0  msb: 31 INPUT
			NetFlow* DIADI_A3_B, // net ID: DIADI lsb: 0  msb: 31 INPUT
			NetFlow* DIADI_A2_B, // net ID: DIADI lsb: 0  msb: 31 INPUT
			NetFlow* DIADI_A1_B, // net ID: DIADI lsb: 0  msb: 31 INPUT
			NetFlow* DIADI_A0_B, // net ID: DIADI lsb: 0  msb: 31 INPUT
			NetFlow* DIBDI_A31_B, // net ID: DIBDI lsb: 0  msb: 31 INPUT
			NetFlow* DIBDI_A30_B, // net ID: DIBDI lsb: 0  msb: 31 INPUT
			NetFlow* DIBDI_A29_B, // net ID: DIBDI lsb: 0  msb: 31 INPUT
			NetFlow* DIBDI_A28_B, // net ID: DIBDI lsb: 0  msb: 31 INPUT
			NetFlow* DIBDI_A27_B, // net ID: DIBDI lsb: 0  msb: 31 INPUT
			NetFlow* DIBDI_A26_B, // net ID: DIBDI lsb: 0  msb: 31 INPUT
			NetFlow* DIBDI_A25_B, // net ID: DIBDI lsb: 0  msb: 31 INPUT
			NetFlow* DIBDI_A24_B, // net ID: DIBDI lsb: 0  msb: 31 INPUT
			NetFlow* DIBDI_A23_B, // net ID: DIBDI lsb: 0  msb: 31 INPUT
			NetFlow* DIBDI_A22_B, // net ID: DIBDI lsb: 0  msb: 31 INPUT
			NetFlow* DIBDI_A21_B, // net ID: DIBDI lsb: 0  msb: 31 INPUT
			NetFlow* DIBDI_A20_B, // net ID: DIBDI lsb: 0  msb: 31 INPUT
			NetFlow* DIBDI_A19_B, // net ID: DIBDI lsb: 0  msb: 31 INPUT
			NetFlow* DIBDI_A18_B, // net ID: DIBDI lsb: 0  msb: 31 INPUT
			NetFlow* DIBDI_A17_B, // net ID: DIBDI lsb: 0  msb: 31 INPUT
			NetFlow* DIBDI_A16_B, // net ID: DIBDI lsb: 0  msb: 31 INPUT
			NetFlow* DIBDI_A15_B, // net ID: DIBDI lsb: 0  msb: 31 INPUT
			NetFlow* DIBDI_A14_B, // net ID: DIBDI lsb: 0  msb: 31 INPUT
			NetFlow* DIBDI_A13_B, // net ID: DIBDI lsb: 0  msb: 31 INPUT
			NetFlow* DIBDI_A12_B, // net ID: DIBDI lsb: 0  msb: 31 INPUT
			NetFlow* DIBDI_A11_B, // net ID: DIBDI lsb: 0  msb: 31 INPUT
			NetFlow* DIBDI_A10_B, // net ID: DIBDI lsb: 0  msb: 31 INPUT
			NetFlow* DIBDI_A9_B, // net ID: DIBDI lsb: 0  msb: 31 INPUT
			NetFlow* DIBDI_A8_B, // net ID: DIBDI lsb: 0  msb: 31 INPUT
			NetFlow* DIBDI_A7_B, // net ID: DIBDI lsb: 0  msb: 31 INPUT
			NetFlow* DIBDI_A6_B, // net ID: DIBDI lsb: 0  msb: 31 INPUT
			NetFlow* DIBDI_A5_B, // net ID: DIBDI lsb: 0  msb: 31 INPUT
			NetFlow* DIBDI_A4_B, // net ID: DIBDI lsb: 0  msb: 31 INPUT
			NetFlow* DIBDI_A3_B, // net ID: DIBDI lsb: 0  msb: 31 INPUT
			NetFlow* DIBDI_A2_B, // net ID: DIBDI lsb: 0  msb: 31 INPUT
			NetFlow* DIBDI_A1_B, // net ID: DIBDI lsb: 0  msb: 31 INPUT
			NetFlow* DIBDI_A0_B, // net ID: DIBDI lsb: 0  msb: 31 INPUT
			NetFlow* DIPADIP_A3_B, // net ID: DIPADIP lsb: 0  msb: 3 INPUT
			NetFlow* DIPADIP_A2_B, // net ID: DIPADIP lsb: 0  msb: 3 INPUT
			NetFlow* DIPADIP_A1_B, // net ID: DIPADIP lsb: 0  msb: 3 INPUT
			NetFlow* DIPADIP_A0_B, // net ID: DIPADIP lsb: 0  msb: 3 INPUT
			NetFlow* DIPBDIP_A3_B, // net ID: DIPBDIP lsb: 0  msb: 3 INPUT
			NetFlow* DIPBDIP_A2_B, // net ID: DIPBDIP lsb: 0  msb: 3 INPUT
			NetFlow* DIPBDIP_A1_B, // net ID: DIPBDIP lsb: 0  msb: 3 INPUT
			NetFlow* DIPBDIP_A0_B, // net ID: DIPBDIP lsb: 0  msb: 3 INPUT
			NetFlow* ENARDEN_A0_B, // net ID: ENARDEN lsb: 0  msb: 0 INPUT
			NetFlow* ENBWREN_A0_B, // net ID: ENBWREN lsb: 0  msb: 0 INPUT
			NetFlow* INJECTDBITERR_A0_B, // net ID: INJECTDBITERR lsb: 0  msb: 0 INPUT
			NetFlow* INJECTSBITERR_A0_B, // net ID: INJECTSBITERR lsb: 0  msb: 0 INPUT
			NetFlow* REGCEAREGCE_A0_B, // net ID: REGCEAREGCE lsb: 0  msb: 0 INPUT
			NetFlow* REGCEB_A0_B, // net ID: REGCEB lsb: 0  msb: 0 INPUT
			NetFlow* RSTRAMARSTRAM_A0_B, // net ID: RSTRAMARSTRAM lsb: 0  msb: 0 INPUT
			NetFlow* RSTRAMB_A0_B, // net ID: RSTRAMB lsb: 0  msb: 0 INPUT
			NetFlow* RSTREGARSTREG_A0_B, // net ID: RSTREGARSTREG lsb: 0  msb: 0 INPUT
			NetFlow* RSTREGB_A0_B, // net ID: RSTREGB lsb: 0  msb: 0 INPUT
			NetFlow* WEA_A3_B, // net ID: WEA lsb: 0  msb: 3 INPUT
			NetFlow* WEA_A2_B, // net ID: WEA lsb: 0  msb: 3 INPUT
			NetFlow* WEA_A1_B, // net ID: WEA lsb: 0  msb: 3 INPUT
			NetFlow* WEA_A0_B, // net ID: WEA lsb: 0  msb: 3 INPUT
			NetFlow* WEBWE_A7_B, // net ID: WEBWE lsb: 0  msb: 7 INPUT
			NetFlow* WEBWE_A6_B, // net ID: WEBWE lsb: 0  msb: 7 INPUT
			NetFlow* WEBWE_A5_B, // net ID: WEBWE lsb: 0  msb: 7 INPUT
			NetFlow* WEBWE_A4_B, // net ID: WEBWE lsb: 0  msb: 7 INPUT
			NetFlow* WEBWE_A3_B, // net ID: WEBWE lsb: 0  msb: 7 INPUT
			NetFlow* WEBWE_A2_B, // net ID: WEBWE lsb: 0  msb: 7 INPUT
			NetFlow* WEBWE_A1_B, // net ID: WEBWE lsb: 0  msb: 7 INPUT
			NetFlow* WEBWE_A0_B // net ID: WEBWE lsb: 0  msb: 7 INPUT
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
			this->RAM_MODE = RAM_MODE; // Default: "TDP"
			this->RDADDR_COLLISION_HWCONFIG = RDADDR_COLLISION_HWCONFIG; // Default: "DELAYED_WRITE"
			this->READ_WIDTH_A = READ_WIDTH_A; // Default: 0
			this->READ_WIDTH_B = READ_WIDTH_B; // Default: 0
			this->RSTREG_PRIORITY_A = RSTREG_PRIORITY_A; // Default: "RSTREG"
			this->RSTREG_PRIORITY_B = RSTREG_PRIORITY_B; // Default: "RSTREG"
			this->SIM_COLLISION_CHECK = SIM_COLLISION_CHECK; // Default: "ALL"
			this->SIM_DEVICE = SIM_DEVICE; // Default: "VIRTEX6"
			this->SRVAL_A = SRVAL_A; // Default: 36'h0
			this->SRVAL_B = SRVAL_B; // Default: 36'h0
			this->WRITE_MODE_A = WRITE_MODE_A; // Default: "WRITE_FIRST"
			this->WRITE_MODE_B = WRITE_MODE_B; // Default: "WRITE_FIRST"
			this->WRITE_WIDTH_A = WRITE_WIDTH_A; // Default: 0
			this->WRITE_WIDTH_B = WRITE_WIDTH_B; // Default: 0
			//Verilog Ports in definition order:
			this->CASCADEOUTA_A0_B = CASCADEOUTA_A0_B; // net ID: CASCADEOUTA lsb: 0  msb: 0 OUTPUT
			this->CASCADEOUTB_A0_B = CASCADEOUTB_A0_B; // net ID: CASCADEOUTB lsb: 0  msb: 0 OUTPUT
			this->DBITERR_A0_B = DBITERR_A0_B; // net ID: DBITERR lsb: 0  msb: 0 OUTPUT
			this->DOADO_A31_B = DOADO_A31_B; // net ID: DOADO lsb: 0  msb: 31 OUTPUT
			this->DOADO_A30_B = DOADO_A30_B; // net ID: DOADO lsb: 0  msb: 31 OUTPUT
			this->DOADO_A29_B = DOADO_A29_B; // net ID: DOADO lsb: 0  msb: 31 OUTPUT
			this->DOADO_A28_B = DOADO_A28_B; // net ID: DOADO lsb: 0  msb: 31 OUTPUT
			this->DOADO_A27_B = DOADO_A27_B; // net ID: DOADO lsb: 0  msb: 31 OUTPUT
			this->DOADO_A26_B = DOADO_A26_B; // net ID: DOADO lsb: 0  msb: 31 OUTPUT
			this->DOADO_A25_B = DOADO_A25_B; // net ID: DOADO lsb: 0  msb: 31 OUTPUT
			this->DOADO_A24_B = DOADO_A24_B; // net ID: DOADO lsb: 0  msb: 31 OUTPUT
			this->DOADO_A23_B = DOADO_A23_B; // net ID: DOADO lsb: 0  msb: 31 OUTPUT
			this->DOADO_A22_B = DOADO_A22_B; // net ID: DOADO lsb: 0  msb: 31 OUTPUT
			this->DOADO_A21_B = DOADO_A21_B; // net ID: DOADO lsb: 0  msb: 31 OUTPUT
			this->DOADO_A20_B = DOADO_A20_B; // net ID: DOADO lsb: 0  msb: 31 OUTPUT
			this->DOADO_A19_B = DOADO_A19_B; // net ID: DOADO lsb: 0  msb: 31 OUTPUT
			this->DOADO_A18_B = DOADO_A18_B; // net ID: DOADO lsb: 0  msb: 31 OUTPUT
			this->DOADO_A17_B = DOADO_A17_B; // net ID: DOADO lsb: 0  msb: 31 OUTPUT
			this->DOADO_A16_B = DOADO_A16_B; // net ID: DOADO lsb: 0  msb: 31 OUTPUT
			this->DOADO_A15_B = DOADO_A15_B; // net ID: DOADO lsb: 0  msb: 31 OUTPUT
			this->DOADO_A14_B = DOADO_A14_B; // net ID: DOADO lsb: 0  msb: 31 OUTPUT
			this->DOADO_A13_B = DOADO_A13_B; // net ID: DOADO lsb: 0  msb: 31 OUTPUT
			this->DOADO_A12_B = DOADO_A12_B; // net ID: DOADO lsb: 0  msb: 31 OUTPUT
			this->DOADO_A11_B = DOADO_A11_B; // net ID: DOADO lsb: 0  msb: 31 OUTPUT
			this->DOADO_A10_B = DOADO_A10_B; // net ID: DOADO lsb: 0  msb: 31 OUTPUT
			this->DOADO_A9_B = DOADO_A9_B; // net ID: DOADO lsb: 0  msb: 31 OUTPUT
			this->DOADO_A8_B = DOADO_A8_B; // net ID: DOADO lsb: 0  msb: 31 OUTPUT
			this->DOADO_A7_B = DOADO_A7_B; // net ID: DOADO lsb: 0  msb: 31 OUTPUT
			this->DOADO_A6_B = DOADO_A6_B; // net ID: DOADO lsb: 0  msb: 31 OUTPUT
			this->DOADO_A5_B = DOADO_A5_B; // net ID: DOADO lsb: 0  msb: 31 OUTPUT
			this->DOADO_A4_B = DOADO_A4_B; // net ID: DOADO lsb: 0  msb: 31 OUTPUT
			this->DOADO_A3_B = DOADO_A3_B; // net ID: DOADO lsb: 0  msb: 31 OUTPUT
			this->DOADO_A2_B = DOADO_A2_B; // net ID: DOADO lsb: 0  msb: 31 OUTPUT
			this->DOADO_A1_B = DOADO_A1_B; // net ID: DOADO lsb: 0  msb: 31 OUTPUT
			this->DOADO_A0_B = DOADO_A0_B; // net ID: DOADO lsb: 0  msb: 31 OUTPUT
			this->DOBDO_A31_B = DOBDO_A31_B; // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
			this->DOBDO_A30_B = DOBDO_A30_B; // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
			this->DOBDO_A29_B = DOBDO_A29_B; // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
			this->DOBDO_A28_B = DOBDO_A28_B; // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
			this->DOBDO_A27_B = DOBDO_A27_B; // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
			this->DOBDO_A26_B = DOBDO_A26_B; // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
			this->DOBDO_A25_B = DOBDO_A25_B; // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
			this->DOBDO_A24_B = DOBDO_A24_B; // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
			this->DOBDO_A23_B = DOBDO_A23_B; // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
			this->DOBDO_A22_B = DOBDO_A22_B; // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
			this->DOBDO_A21_B = DOBDO_A21_B; // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
			this->DOBDO_A20_B = DOBDO_A20_B; // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
			this->DOBDO_A19_B = DOBDO_A19_B; // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
			this->DOBDO_A18_B = DOBDO_A18_B; // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
			this->DOBDO_A17_B = DOBDO_A17_B; // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
			this->DOBDO_A16_B = DOBDO_A16_B; // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
			this->DOBDO_A15_B = DOBDO_A15_B; // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
			this->DOBDO_A14_B = DOBDO_A14_B; // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
			this->DOBDO_A13_B = DOBDO_A13_B; // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
			this->DOBDO_A12_B = DOBDO_A12_B; // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
			this->DOBDO_A11_B = DOBDO_A11_B; // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
			this->DOBDO_A10_B = DOBDO_A10_B; // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
			this->DOBDO_A9_B = DOBDO_A9_B; // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
			this->DOBDO_A8_B = DOBDO_A8_B; // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
			this->DOBDO_A7_B = DOBDO_A7_B; // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
			this->DOBDO_A6_B = DOBDO_A6_B; // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
			this->DOBDO_A5_B = DOBDO_A5_B; // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
			this->DOBDO_A4_B = DOBDO_A4_B; // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
			this->DOBDO_A3_B = DOBDO_A3_B; // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
			this->DOBDO_A2_B = DOBDO_A2_B; // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
			this->DOBDO_A1_B = DOBDO_A1_B; // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
			this->DOBDO_A0_B = DOBDO_A0_B; // net ID: DOBDO lsb: 0  msb: 31 OUTPUT
			this->DOPADOP_A3_B = DOPADOP_A3_B; // net ID: DOPADOP lsb: 0  msb: 3 OUTPUT
			this->DOPADOP_A2_B = DOPADOP_A2_B; // net ID: DOPADOP lsb: 0  msb: 3 OUTPUT
			this->DOPADOP_A1_B = DOPADOP_A1_B; // net ID: DOPADOP lsb: 0  msb: 3 OUTPUT
			this->DOPADOP_A0_B = DOPADOP_A0_B; // net ID: DOPADOP lsb: 0  msb: 3 OUTPUT
			this->DOPBDOP_A3_B = DOPBDOP_A3_B; // net ID: DOPBDOP lsb: 0  msb: 3 OUTPUT
			this->DOPBDOP_A2_B = DOPBDOP_A2_B; // net ID: DOPBDOP lsb: 0  msb: 3 OUTPUT
			this->DOPBDOP_A1_B = DOPBDOP_A1_B; // net ID: DOPBDOP lsb: 0  msb: 3 OUTPUT
			this->DOPBDOP_A0_B = DOPBDOP_A0_B; // net ID: DOPBDOP lsb: 0  msb: 3 OUTPUT
			this->ECCPARITY_A7_B = ECCPARITY_A7_B; // net ID: ECCPARITY lsb: 0  msb: 7 OUTPUT
			this->ECCPARITY_A6_B = ECCPARITY_A6_B; // net ID: ECCPARITY lsb: 0  msb: 7 OUTPUT
			this->ECCPARITY_A5_B = ECCPARITY_A5_B; // net ID: ECCPARITY lsb: 0  msb: 7 OUTPUT
			this->ECCPARITY_A4_B = ECCPARITY_A4_B; // net ID: ECCPARITY lsb: 0  msb: 7 OUTPUT
			this->ECCPARITY_A3_B = ECCPARITY_A3_B; // net ID: ECCPARITY lsb: 0  msb: 7 OUTPUT
			this->ECCPARITY_A2_B = ECCPARITY_A2_B; // net ID: ECCPARITY lsb: 0  msb: 7 OUTPUT
			this->ECCPARITY_A1_B = ECCPARITY_A1_B; // net ID: ECCPARITY lsb: 0  msb: 7 OUTPUT
			this->ECCPARITY_A0_B = ECCPARITY_A0_B; // net ID: ECCPARITY lsb: 0  msb: 7 OUTPUT
			this->RDADDRECC_A8_B = RDADDRECC_A8_B; // net ID: RDADDRECC lsb: 0  msb: 8 OUTPUT
			this->RDADDRECC_A7_B = RDADDRECC_A7_B; // net ID: RDADDRECC lsb: 0  msb: 8 OUTPUT
			this->RDADDRECC_A6_B = RDADDRECC_A6_B; // net ID: RDADDRECC lsb: 0  msb: 8 OUTPUT
			this->RDADDRECC_A5_B = RDADDRECC_A5_B; // net ID: RDADDRECC lsb: 0  msb: 8 OUTPUT
			this->RDADDRECC_A4_B = RDADDRECC_A4_B; // net ID: RDADDRECC lsb: 0  msb: 8 OUTPUT
			this->RDADDRECC_A3_B = RDADDRECC_A3_B; // net ID: RDADDRECC lsb: 0  msb: 8 OUTPUT
			this->RDADDRECC_A2_B = RDADDRECC_A2_B; // net ID: RDADDRECC lsb: 0  msb: 8 OUTPUT
			this->RDADDRECC_A1_B = RDADDRECC_A1_B; // net ID: RDADDRECC lsb: 0  msb: 8 OUTPUT
			this->RDADDRECC_A0_B = RDADDRECC_A0_B; // net ID: RDADDRECC lsb: 0  msb: 8 OUTPUT
			this->SBITERR_A0_B = SBITERR_A0_B; // net ID: SBITERR lsb: 0  msb: 0 OUTPUT
			this->ADDRARDADDR_A15_B = ADDRARDADDR_A15_B; // net ID: ADDRARDADDR lsb: 0  msb: 15 INPUT
			this->ADDRARDADDR_A14_B = ADDRARDADDR_A14_B; // net ID: ADDRARDADDR lsb: 0  msb: 15 INPUT
			this->ADDRARDADDR_A13_B = ADDRARDADDR_A13_B; // net ID: ADDRARDADDR lsb: 0  msb: 15 INPUT
			this->ADDRARDADDR_A12_B = ADDRARDADDR_A12_B; // net ID: ADDRARDADDR lsb: 0  msb: 15 INPUT
			this->ADDRARDADDR_A11_B = ADDRARDADDR_A11_B; // net ID: ADDRARDADDR lsb: 0  msb: 15 INPUT
			this->ADDRARDADDR_A10_B = ADDRARDADDR_A10_B; // net ID: ADDRARDADDR lsb: 0  msb: 15 INPUT
			this->ADDRARDADDR_A9_B = ADDRARDADDR_A9_B; // net ID: ADDRARDADDR lsb: 0  msb: 15 INPUT
			this->ADDRARDADDR_A8_B = ADDRARDADDR_A8_B; // net ID: ADDRARDADDR lsb: 0  msb: 15 INPUT
			this->ADDRARDADDR_A7_B = ADDRARDADDR_A7_B; // net ID: ADDRARDADDR lsb: 0  msb: 15 INPUT
			this->ADDRARDADDR_A6_B = ADDRARDADDR_A6_B; // net ID: ADDRARDADDR lsb: 0  msb: 15 INPUT
			this->ADDRARDADDR_A5_B = ADDRARDADDR_A5_B; // net ID: ADDRARDADDR lsb: 0  msb: 15 INPUT
			this->ADDRARDADDR_A4_B = ADDRARDADDR_A4_B; // net ID: ADDRARDADDR lsb: 0  msb: 15 INPUT
			this->ADDRARDADDR_A3_B = ADDRARDADDR_A3_B; // net ID: ADDRARDADDR lsb: 0  msb: 15 INPUT
			this->ADDRARDADDR_A2_B = ADDRARDADDR_A2_B; // net ID: ADDRARDADDR lsb: 0  msb: 15 INPUT
			this->ADDRARDADDR_A1_B = ADDRARDADDR_A1_B; // net ID: ADDRARDADDR lsb: 0  msb: 15 INPUT
			this->ADDRARDADDR_A0_B = ADDRARDADDR_A0_B; // net ID: ADDRARDADDR lsb: 0  msb: 15 INPUT
			this->ADDRBWRADDR_A15_B = ADDRBWRADDR_A15_B; // net ID: ADDRBWRADDR lsb: 0  msb: 15 INPUT
			this->ADDRBWRADDR_A14_B = ADDRBWRADDR_A14_B; // net ID: ADDRBWRADDR lsb: 0  msb: 15 INPUT
			this->ADDRBWRADDR_A13_B = ADDRBWRADDR_A13_B; // net ID: ADDRBWRADDR lsb: 0  msb: 15 INPUT
			this->ADDRBWRADDR_A12_B = ADDRBWRADDR_A12_B; // net ID: ADDRBWRADDR lsb: 0  msb: 15 INPUT
			this->ADDRBWRADDR_A11_B = ADDRBWRADDR_A11_B; // net ID: ADDRBWRADDR lsb: 0  msb: 15 INPUT
			this->ADDRBWRADDR_A10_B = ADDRBWRADDR_A10_B; // net ID: ADDRBWRADDR lsb: 0  msb: 15 INPUT
			this->ADDRBWRADDR_A9_B = ADDRBWRADDR_A9_B; // net ID: ADDRBWRADDR lsb: 0  msb: 15 INPUT
			this->ADDRBWRADDR_A8_B = ADDRBWRADDR_A8_B; // net ID: ADDRBWRADDR lsb: 0  msb: 15 INPUT
			this->ADDRBWRADDR_A7_B = ADDRBWRADDR_A7_B; // net ID: ADDRBWRADDR lsb: 0  msb: 15 INPUT
			this->ADDRBWRADDR_A6_B = ADDRBWRADDR_A6_B; // net ID: ADDRBWRADDR lsb: 0  msb: 15 INPUT
			this->ADDRBWRADDR_A5_B = ADDRBWRADDR_A5_B; // net ID: ADDRBWRADDR lsb: 0  msb: 15 INPUT
			this->ADDRBWRADDR_A4_B = ADDRBWRADDR_A4_B; // net ID: ADDRBWRADDR lsb: 0  msb: 15 INPUT
			this->ADDRBWRADDR_A3_B = ADDRBWRADDR_A3_B; // net ID: ADDRBWRADDR lsb: 0  msb: 15 INPUT
			this->ADDRBWRADDR_A2_B = ADDRBWRADDR_A2_B; // net ID: ADDRBWRADDR lsb: 0  msb: 15 INPUT
			this->ADDRBWRADDR_A1_B = ADDRBWRADDR_A1_B; // net ID: ADDRBWRADDR lsb: 0  msb: 15 INPUT
			this->ADDRBWRADDR_A0_B = ADDRBWRADDR_A0_B; // net ID: ADDRBWRADDR lsb: 0  msb: 15 INPUT
			this->CASCADEINA_A0_B = CASCADEINA_A0_B; // net ID: CASCADEINA lsb: 0  msb: 0 INPUT
			this->CASCADEINB_A0_B = CASCADEINB_A0_B; // net ID: CASCADEINB lsb: 0  msb: 0 INPUT
			this->CLKARDCLK_A0_B = CLKARDCLK_A0_B; // net ID: CLKARDCLK lsb: 0  msb: 0 INPUT
			this->CLKBWRCLK_A0_B = CLKBWRCLK_A0_B; // net ID: CLKBWRCLK lsb: 0  msb: 0 INPUT
			this->DIADI_A31_B = DIADI_A31_B; // net ID: DIADI lsb: 0  msb: 31 INPUT
			this->DIADI_A30_B = DIADI_A30_B; // net ID: DIADI lsb: 0  msb: 31 INPUT
			this->DIADI_A29_B = DIADI_A29_B; // net ID: DIADI lsb: 0  msb: 31 INPUT
			this->DIADI_A28_B = DIADI_A28_B; // net ID: DIADI lsb: 0  msb: 31 INPUT
			this->DIADI_A27_B = DIADI_A27_B; // net ID: DIADI lsb: 0  msb: 31 INPUT
			this->DIADI_A26_B = DIADI_A26_B; // net ID: DIADI lsb: 0  msb: 31 INPUT
			this->DIADI_A25_B = DIADI_A25_B; // net ID: DIADI lsb: 0  msb: 31 INPUT
			this->DIADI_A24_B = DIADI_A24_B; // net ID: DIADI lsb: 0  msb: 31 INPUT
			this->DIADI_A23_B = DIADI_A23_B; // net ID: DIADI lsb: 0  msb: 31 INPUT
			this->DIADI_A22_B = DIADI_A22_B; // net ID: DIADI lsb: 0  msb: 31 INPUT
			this->DIADI_A21_B = DIADI_A21_B; // net ID: DIADI lsb: 0  msb: 31 INPUT
			this->DIADI_A20_B = DIADI_A20_B; // net ID: DIADI lsb: 0  msb: 31 INPUT
			this->DIADI_A19_B = DIADI_A19_B; // net ID: DIADI lsb: 0  msb: 31 INPUT
			this->DIADI_A18_B = DIADI_A18_B; // net ID: DIADI lsb: 0  msb: 31 INPUT
			this->DIADI_A17_B = DIADI_A17_B; // net ID: DIADI lsb: 0  msb: 31 INPUT
			this->DIADI_A16_B = DIADI_A16_B; // net ID: DIADI lsb: 0  msb: 31 INPUT
			this->DIADI_A15_B = DIADI_A15_B; // net ID: DIADI lsb: 0  msb: 31 INPUT
			this->DIADI_A14_B = DIADI_A14_B; // net ID: DIADI lsb: 0  msb: 31 INPUT
			this->DIADI_A13_B = DIADI_A13_B; // net ID: DIADI lsb: 0  msb: 31 INPUT
			this->DIADI_A12_B = DIADI_A12_B; // net ID: DIADI lsb: 0  msb: 31 INPUT
			this->DIADI_A11_B = DIADI_A11_B; // net ID: DIADI lsb: 0  msb: 31 INPUT
			this->DIADI_A10_B = DIADI_A10_B; // net ID: DIADI lsb: 0  msb: 31 INPUT
			this->DIADI_A9_B = DIADI_A9_B; // net ID: DIADI lsb: 0  msb: 31 INPUT
			this->DIADI_A8_B = DIADI_A8_B; // net ID: DIADI lsb: 0  msb: 31 INPUT
			this->DIADI_A7_B = DIADI_A7_B; // net ID: DIADI lsb: 0  msb: 31 INPUT
			this->DIADI_A6_B = DIADI_A6_B; // net ID: DIADI lsb: 0  msb: 31 INPUT
			this->DIADI_A5_B = DIADI_A5_B; // net ID: DIADI lsb: 0  msb: 31 INPUT
			this->DIADI_A4_B = DIADI_A4_B; // net ID: DIADI lsb: 0  msb: 31 INPUT
			this->DIADI_A3_B = DIADI_A3_B; // net ID: DIADI lsb: 0  msb: 31 INPUT
			this->DIADI_A2_B = DIADI_A2_B; // net ID: DIADI lsb: 0  msb: 31 INPUT
			this->DIADI_A1_B = DIADI_A1_B; // net ID: DIADI lsb: 0  msb: 31 INPUT
			this->DIADI_A0_B = DIADI_A0_B; // net ID: DIADI lsb: 0  msb: 31 INPUT
			this->DIBDI_A31_B = DIBDI_A31_B; // net ID: DIBDI lsb: 0  msb: 31 INPUT
			this->DIBDI_A30_B = DIBDI_A30_B; // net ID: DIBDI lsb: 0  msb: 31 INPUT
			this->DIBDI_A29_B = DIBDI_A29_B; // net ID: DIBDI lsb: 0  msb: 31 INPUT
			this->DIBDI_A28_B = DIBDI_A28_B; // net ID: DIBDI lsb: 0  msb: 31 INPUT
			this->DIBDI_A27_B = DIBDI_A27_B; // net ID: DIBDI lsb: 0  msb: 31 INPUT
			this->DIBDI_A26_B = DIBDI_A26_B; // net ID: DIBDI lsb: 0  msb: 31 INPUT
			this->DIBDI_A25_B = DIBDI_A25_B; // net ID: DIBDI lsb: 0  msb: 31 INPUT
			this->DIBDI_A24_B = DIBDI_A24_B; // net ID: DIBDI lsb: 0  msb: 31 INPUT
			this->DIBDI_A23_B = DIBDI_A23_B; // net ID: DIBDI lsb: 0  msb: 31 INPUT
			this->DIBDI_A22_B = DIBDI_A22_B; // net ID: DIBDI lsb: 0  msb: 31 INPUT
			this->DIBDI_A21_B = DIBDI_A21_B; // net ID: DIBDI lsb: 0  msb: 31 INPUT
			this->DIBDI_A20_B = DIBDI_A20_B; // net ID: DIBDI lsb: 0  msb: 31 INPUT
			this->DIBDI_A19_B = DIBDI_A19_B; // net ID: DIBDI lsb: 0  msb: 31 INPUT
			this->DIBDI_A18_B = DIBDI_A18_B; // net ID: DIBDI lsb: 0  msb: 31 INPUT
			this->DIBDI_A17_B = DIBDI_A17_B; // net ID: DIBDI lsb: 0  msb: 31 INPUT
			this->DIBDI_A16_B = DIBDI_A16_B; // net ID: DIBDI lsb: 0  msb: 31 INPUT
			this->DIBDI_A15_B = DIBDI_A15_B; // net ID: DIBDI lsb: 0  msb: 31 INPUT
			this->DIBDI_A14_B = DIBDI_A14_B; // net ID: DIBDI lsb: 0  msb: 31 INPUT
			this->DIBDI_A13_B = DIBDI_A13_B; // net ID: DIBDI lsb: 0  msb: 31 INPUT
			this->DIBDI_A12_B = DIBDI_A12_B; // net ID: DIBDI lsb: 0  msb: 31 INPUT
			this->DIBDI_A11_B = DIBDI_A11_B; // net ID: DIBDI lsb: 0  msb: 31 INPUT
			this->DIBDI_A10_B = DIBDI_A10_B; // net ID: DIBDI lsb: 0  msb: 31 INPUT
			this->DIBDI_A9_B = DIBDI_A9_B; // net ID: DIBDI lsb: 0  msb: 31 INPUT
			this->DIBDI_A8_B = DIBDI_A8_B; // net ID: DIBDI lsb: 0  msb: 31 INPUT
			this->DIBDI_A7_B = DIBDI_A7_B; // net ID: DIBDI lsb: 0  msb: 31 INPUT
			this->DIBDI_A6_B = DIBDI_A6_B; // net ID: DIBDI lsb: 0  msb: 31 INPUT
			this->DIBDI_A5_B = DIBDI_A5_B; // net ID: DIBDI lsb: 0  msb: 31 INPUT
			this->DIBDI_A4_B = DIBDI_A4_B; // net ID: DIBDI lsb: 0  msb: 31 INPUT
			this->DIBDI_A3_B = DIBDI_A3_B; // net ID: DIBDI lsb: 0  msb: 31 INPUT
			this->DIBDI_A2_B = DIBDI_A2_B; // net ID: DIBDI lsb: 0  msb: 31 INPUT
			this->DIBDI_A1_B = DIBDI_A1_B; // net ID: DIBDI lsb: 0  msb: 31 INPUT
			this->DIBDI_A0_B = DIBDI_A0_B; // net ID: DIBDI lsb: 0  msb: 31 INPUT
			this->DIPADIP_A3_B = DIPADIP_A3_B; // net ID: DIPADIP lsb: 0  msb: 3 INPUT
			this->DIPADIP_A2_B = DIPADIP_A2_B; // net ID: DIPADIP lsb: 0  msb: 3 INPUT
			this->DIPADIP_A1_B = DIPADIP_A1_B; // net ID: DIPADIP lsb: 0  msb: 3 INPUT
			this->DIPADIP_A0_B = DIPADIP_A0_B; // net ID: DIPADIP lsb: 0  msb: 3 INPUT
			this->DIPBDIP_A3_B = DIPBDIP_A3_B; // net ID: DIPBDIP lsb: 0  msb: 3 INPUT
			this->DIPBDIP_A2_B = DIPBDIP_A2_B; // net ID: DIPBDIP lsb: 0  msb: 3 INPUT
			this->DIPBDIP_A1_B = DIPBDIP_A1_B; // net ID: DIPBDIP lsb: 0  msb: 3 INPUT
			this->DIPBDIP_A0_B = DIPBDIP_A0_B; // net ID: DIPBDIP lsb: 0  msb: 3 INPUT
			this->ENARDEN_A0_B = ENARDEN_A0_B; // net ID: ENARDEN lsb: 0  msb: 0 INPUT
			this->ENBWREN_A0_B = ENBWREN_A0_B; // net ID: ENBWREN lsb: 0  msb: 0 INPUT
			this->INJECTDBITERR_A0_B = INJECTDBITERR_A0_B; // net ID: INJECTDBITERR lsb: 0  msb: 0 INPUT
			this->INJECTSBITERR_A0_B = INJECTSBITERR_A0_B; // net ID: INJECTSBITERR lsb: 0  msb: 0 INPUT
			this->REGCEAREGCE_A0_B = REGCEAREGCE_A0_B; // net ID: REGCEAREGCE lsb: 0  msb: 0 INPUT
			this->REGCEB_A0_B = REGCEB_A0_B; // net ID: REGCEB lsb: 0  msb: 0 INPUT
			this->RSTRAMARSTRAM_A0_B = RSTRAMARSTRAM_A0_B; // net ID: RSTRAMARSTRAM lsb: 0  msb: 0 INPUT
			this->RSTRAMB_A0_B = RSTRAMB_A0_B; // net ID: RSTRAMB lsb: 0  msb: 0 INPUT
			this->RSTREGARSTREG_A0_B = RSTREGARSTREG_A0_B; // net ID: RSTREGARSTREG lsb: 0  msb: 0 INPUT
			this->RSTREGB_A0_B = RSTREGB_A0_B; // net ID: RSTREGB lsb: 0  msb: 0 INPUT
			this->WEA_A3_B = WEA_A3_B; // net ID: WEA lsb: 0  msb: 3 INPUT
			this->WEA_A2_B = WEA_A2_B; // net ID: WEA lsb: 0  msb: 3 INPUT
			this->WEA_A1_B = WEA_A1_B; // net ID: WEA lsb: 0  msb: 3 INPUT
			this->WEA_A0_B = WEA_A0_B; // net ID: WEA lsb: 0  msb: 3 INPUT
			this->WEBWE_A7_B = WEBWE_A7_B; // net ID: WEBWE lsb: 0  msb: 7 INPUT
			this->WEBWE_A6_B = WEBWE_A6_B; // net ID: WEBWE lsb: 0  msb: 7 INPUT
			this->WEBWE_A5_B = WEBWE_A5_B; // net ID: WEBWE lsb: 0  msb: 7 INPUT
			this->WEBWE_A4_B = WEBWE_A4_B; // net ID: WEBWE lsb: 0  msb: 7 INPUT
			this->WEBWE_A3_B = WEBWE_A3_B; // net ID: WEBWE lsb: 0  msb: 7 INPUT
			this->WEBWE_A2_B = WEBWE_A2_B; // net ID: WEBWE lsb: 0  msb: 7 INPUT
			this->WEBWE_A1_B = WEBWE_A1_B; // net ID: WEBWE lsb: 0  msb: 7 INPUT
			this->WEBWE_A0_B = WEBWE_A0_B; // net ID: WEBWE lsb: 0  msb: 7 INPUT
			
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
#endif // X_RAMB36E1_H
