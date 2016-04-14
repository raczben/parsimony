/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_RAMB8BWER_H
#define X_RAMB8BWER_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"
namespace CPrimitives {
	
	class X_RAMB8BWER: public Primitive{

		//Verilog Parameters:
		parameter_int_t DATA_WIDTH_A;
		parameter_int_t DATA_WIDTH_B;
		parameter_int_t DOA_REG;
		parameter_int_t DOB_REG;
		parameter_enum_t EN_RSTRAM_A;
		parameter_enum_t EN_RSTRAM_B;
		parameter_int_t INITP_00;
		parameter_int_t INITP_01;
		parameter_int_t INITP_02;
		parameter_int_t INITP_03;
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
		parameter_int_t INIT_A;
		parameter_int_t INIT_B;
		parameter_string_t INIT_FILE;
		parameter_string_t LOC;
		parameter_string_t RAM_MODE;
		parameter_string_t RSTTYPE;
		parameter_string_t RST_PRIORITY_A;
		parameter_string_t RST_PRIORITY_B;
		parameter_int_t SETUP_ALL;
		parameter_int_t SETUP_READ_FIRST;
		parameter_string_t SIM_COLLISION_CHECK;
		parameter_int_t SRVAL_A;
		parameter_int_t SRVAL_B;
		parameter_string_t WRITE_MODE_A;
		parameter_string_t WRITE_MODE_B;
		//Verilog Ports in definition order:
		NetFlow* DOADO_A0_B; // net ID: DOADO lsb: 0  msb: 0 OUTPUT
		NetFlow* DOBDO_A0_B; // net ID: DOBDO lsb: 0  msb: 0 OUTPUT
		NetFlow* DOPADOP_A0_B; // net ID: DOPADOP lsb: 0  msb: 0 OUTPUT
		NetFlow* DOPBDOP_A0_B; // net ID: DOPBDOP lsb: 0  msb: 0 OUTPUT
		NetFlow* ADDRAWRADDR_A0_B; // net ID: ADDRAWRADDR lsb: 0  msb: 12 INPUT
		NetFlow* ADDRAWRADDR_A1_B; // net ID: ADDRAWRADDR lsb: 0  msb: 12 INPUT
		NetFlow* ADDRAWRADDR_A2_B; // net ID: ADDRAWRADDR lsb: 0  msb: 12 INPUT
		NetFlow* ADDRAWRADDR_A3_B; // net ID: ADDRAWRADDR lsb: 0  msb: 12 INPUT
		NetFlow* ADDRAWRADDR_A4_B; // net ID: ADDRAWRADDR lsb: 0  msb: 12 INPUT
		NetFlow* ADDRAWRADDR_A5_B; // net ID: ADDRAWRADDR lsb: 0  msb: 12 INPUT
		NetFlow* ADDRAWRADDR_A6_B; // net ID: ADDRAWRADDR lsb: 0  msb: 12 INPUT
		NetFlow* ADDRAWRADDR_A7_B; // net ID: ADDRAWRADDR lsb: 0  msb: 12 INPUT
		NetFlow* ADDRAWRADDR_A8_B; // net ID: ADDRAWRADDR lsb: 0  msb: 12 INPUT
		NetFlow* ADDRAWRADDR_A9_B; // net ID: ADDRAWRADDR lsb: 0  msb: 12 INPUT
		NetFlow* ADDRAWRADDR_A10_B; // net ID: ADDRAWRADDR lsb: 0  msb: 12 INPUT
		NetFlow* ADDRAWRADDR_A11_B; // net ID: ADDRAWRADDR lsb: 0  msb: 12 INPUT
		NetFlow* ADDRAWRADDR_A12_B; // net ID: ADDRAWRADDR lsb: 0  msb: 12 INPUT
		NetFlow* ADDRBRDADDR_A0_B; // net ID: ADDRBRDADDR lsb: 0  msb: 12 INPUT
		NetFlow* ADDRBRDADDR_A1_B; // net ID: ADDRBRDADDR lsb: 0  msb: 12 INPUT
		NetFlow* ADDRBRDADDR_A2_B; // net ID: ADDRBRDADDR lsb: 0  msb: 12 INPUT
		NetFlow* ADDRBRDADDR_A3_B; // net ID: ADDRBRDADDR lsb: 0  msb: 12 INPUT
		NetFlow* ADDRBRDADDR_A4_B; // net ID: ADDRBRDADDR lsb: 0  msb: 12 INPUT
		NetFlow* ADDRBRDADDR_A5_B; // net ID: ADDRBRDADDR lsb: 0  msb: 12 INPUT
		NetFlow* ADDRBRDADDR_A6_B; // net ID: ADDRBRDADDR lsb: 0  msb: 12 INPUT
		NetFlow* ADDRBRDADDR_A7_B; // net ID: ADDRBRDADDR lsb: 0  msb: 12 INPUT
		NetFlow* ADDRBRDADDR_A8_B; // net ID: ADDRBRDADDR lsb: 0  msb: 12 INPUT
		NetFlow* ADDRBRDADDR_A9_B; // net ID: ADDRBRDADDR lsb: 0  msb: 12 INPUT
		NetFlow* ADDRBRDADDR_A10_B; // net ID: ADDRBRDADDR lsb: 0  msb: 12 INPUT
		NetFlow* ADDRBRDADDR_A11_B; // net ID: ADDRBRDADDR lsb: 0  msb: 12 INPUT
		NetFlow* ADDRBRDADDR_A12_B; // net ID: ADDRBRDADDR lsb: 0  msb: 12 INPUT
		NetFlow* CLKAWRCLK_A0_B; // net ID: CLKAWRCLK lsb: 0  msb: 0 INPUT
		NetFlow* CLKBRDCLK_A0_B; // net ID: CLKBRDCLK lsb: 0  msb: 0 INPUT
		NetFlow* DIADI_A0_B; // net ID: DIADI lsb: 0  msb: 15 INPUT
		NetFlow* DIADI_A1_B; // net ID: DIADI lsb: 0  msb: 15 INPUT
		NetFlow* DIADI_A2_B; // net ID: DIADI lsb: 0  msb: 15 INPUT
		NetFlow* DIADI_A3_B; // net ID: DIADI lsb: 0  msb: 15 INPUT
		NetFlow* DIADI_A4_B; // net ID: DIADI lsb: 0  msb: 15 INPUT
		NetFlow* DIADI_A5_B; // net ID: DIADI lsb: 0  msb: 15 INPUT
		NetFlow* DIADI_A6_B; // net ID: DIADI lsb: 0  msb: 15 INPUT
		NetFlow* DIADI_A7_B; // net ID: DIADI lsb: 0  msb: 15 INPUT
		NetFlow* DIADI_A8_B; // net ID: DIADI lsb: 0  msb: 15 INPUT
		NetFlow* DIADI_A9_B; // net ID: DIADI lsb: 0  msb: 15 INPUT
		NetFlow* DIADI_A10_B; // net ID: DIADI lsb: 0  msb: 15 INPUT
		NetFlow* DIADI_A11_B; // net ID: DIADI lsb: 0  msb: 15 INPUT
		NetFlow* DIADI_A12_B; // net ID: DIADI lsb: 0  msb: 15 INPUT
		NetFlow* DIADI_A13_B; // net ID: DIADI lsb: 0  msb: 15 INPUT
		NetFlow* DIADI_A14_B; // net ID: DIADI lsb: 0  msb: 15 INPUT
		NetFlow* DIADI_A15_B; // net ID: DIADI lsb: 0  msb: 15 INPUT
		NetFlow* DIBDI_A0_B; // net ID: DIBDI lsb: 0  msb: 15 INPUT
		NetFlow* DIBDI_A1_B; // net ID: DIBDI lsb: 0  msb: 15 INPUT
		NetFlow* DIBDI_A2_B; // net ID: DIBDI lsb: 0  msb: 15 INPUT
		NetFlow* DIBDI_A3_B; // net ID: DIBDI lsb: 0  msb: 15 INPUT
		NetFlow* DIBDI_A4_B; // net ID: DIBDI lsb: 0  msb: 15 INPUT
		NetFlow* DIBDI_A5_B; // net ID: DIBDI lsb: 0  msb: 15 INPUT
		NetFlow* DIBDI_A6_B; // net ID: DIBDI lsb: 0  msb: 15 INPUT
		NetFlow* DIBDI_A7_B; // net ID: DIBDI lsb: 0  msb: 15 INPUT
		NetFlow* DIBDI_A8_B; // net ID: DIBDI lsb: 0  msb: 15 INPUT
		NetFlow* DIBDI_A9_B; // net ID: DIBDI lsb: 0  msb: 15 INPUT
		NetFlow* DIBDI_A10_B; // net ID: DIBDI lsb: 0  msb: 15 INPUT
		NetFlow* DIBDI_A11_B; // net ID: DIBDI lsb: 0  msb: 15 INPUT
		NetFlow* DIBDI_A12_B; // net ID: DIBDI lsb: 0  msb: 15 INPUT
		NetFlow* DIBDI_A13_B; // net ID: DIBDI lsb: 0  msb: 15 INPUT
		NetFlow* DIBDI_A14_B; // net ID: DIBDI lsb: 0  msb: 15 INPUT
		NetFlow* DIBDI_A15_B; // net ID: DIBDI lsb: 0  msb: 15 INPUT
		NetFlow* DIPADIP_A0_B; // net ID: DIPADIP lsb: 0  msb: 1 INPUT
		NetFlow* DIPADIP_A1_B; // net ID: DIPADIP lsb: 0  msb: 1 INPUT
		NetFlow* DIPBDIP_A0_B; // net ID: DIPBDIP lsb: 0  msb: 1 INPUT
		NetFlow* DIPBDIP_A1_B; // net ID: DIPBDIP lsb: 0  msb: 1 INPUT
		NetFlow* ENAWREN_A0_B; // net ID: ENAWREN lsb: 0  msb: 0 INPUT
		NetFlow* ENBRDEN_A0_B; // net ID: ENBRDEN lsb: 0  msb: 0 INPUT
		NetFlow* REGCEA_A0_B; // net ID: REGCEA lsb: 0  msb: 0 INPUT
		NetFlow* REGCEBREGCE_A0_B; // net ID: REGCEBREGCE lsb: 0  msb: 0 INPUT
		NetFlow* RSTA_A0_B; // net ID: RSTA lsb: 0  msb: 0 INPUT
		NetFlow* RSTBRST_A0_B; // net ID: RSTBRST lsb: 0  msb: 0 INPUT
		NetFlow* WEAWEL_A0_B; // net ID: WEAWEL lsb: 0  msb: 1 INPUT
		NetFlow* WEAWEL_A1_B; // net ID: WEAWEL lsb: 0  msb: 1 INPUT
		NetFlow* WEBWEU_A0_B; // net ID: WEBWEU lsb: 0  msb: 1 INPUT
		NetFlow* WEBWEU_A1_B; // net ID: WEBWEU lsb: 0  msb: 1 INPUT
		
		public: X_RAMB8BWER(
			const char * name,
			//Verilog Parameters:
			parameter_int_t DATA_WIDTH_A, // Default: 0
			parameter_int_t DATA_WIDTH_B, // Default: 0
			parameter_int_t DOA_REG, // Default: 0
			parameter_int_t DOB_REG, // Default: 0
			parameter_enum_t EN_RSTRAM_A, // Default: "TRUE"
			parameter_enum_t EN_RSTRAM_B, // Default: "TRUE"
			parameter_int_t INITP_00, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INITP_01, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INITP_02, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t INITP_03, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
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
			parameter_int_t INIT_A, // Default: 18'h0
			parameter_int_t INIT_B, // Default: 18'h0
			parameter_string_t INIT_FILE, // Default: "NONE"
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_string_t RAM_MODE, // Default: "TDP"
			parameter_string_t RSTTYPE, // Default: "SYNC"
			parameter_string_t RST_PRIORITY_A, // Default: "CE"
			parameter_string_t RST_PRIORITY_B, // Default: "CE"
			parameter_int_t SETUP_ALL, // Default: 1000
			parameter_int_t SETUP_READ_FIRST, // Default: 3000
			parameter_string_t SIM_COLLISION_CHECK, // Default: "ALL"
			parameter_int_t SRVAL_A, // Default: 18'h0
			parameter_int_t SRVAL_B, // Default: 18'h0
			parameter_string_t WRITE_MODE_A, // Default: "WRITE_FIRST"
			parameter_string_t WRITE_MODE_B, // Default: "WRITE_FIRST"
			//Verilog Ports in definition order:
			NetFlow* DOADO_A0_B, // net ID: DOADO lsb: 0  msb: 0 OUTPUT
			NetFlow* DOBDO_A0_B, // net ID: DOBDO lsb: 0  msb: 0 OUTPUT
			NetFlow* DOPADOP_A0_B, // net ID: DOPADOP lsb: 0  msb: 0 OUTPUT
			NetFlow* DOPBDOP_A0_B, // net ID: DOPBDOP lsb: 0  msb: 0 OUTPUT
			NetFlow* ADDRAWRADDR_A0_B, // net ID: ADDRAWRADDR lsb: 0  msb: 12 INPUT
			NetFlow* ADDRAWRADDR_A1_B, // net ID: ADDRAWRADDR lsb: 0  msb: 12 INPUT
			NetFlow* ADDRAWRADDR_A2_B, // net ID: ADDRAWRADDR lsb: 0  msb: 12 INPUT
			NetFlow* ADDRAWRADDR_A3_B, // net ID: ADDRAWRADDR lsb: 0  msb: 12 INPUT
			NetFlow* ADDRAWRADDR_A4_B, // net ID: ADDRAWRADDR lsb: 0  msb: 12 INPUT
			NetFlow* ADDRAWRADDR_A5_B, // net ID: ADDRAWRADDR lsb: 0  msb: 12 INPUT
			NetFlow* ADDRAWRADDR_A6_B, // net ID: ADDRAWRADDR lsb: 0  msb: 12 INPUT
			NetFlow* ADDRAWRADDR_A7_B, // net ID: ADDRAWRADDR lsb: 0  msb: 12 INPUT
			NetFlow* ADDRAWRADDR_A8_B, // net ID: ADDRAWRADDR lsb: 0  msb: 12 INPUT
			NetFlow* ADDRAWRADDR_A9_B, // net ID: ADDRAWRADDR lsb: 0  msb: 12 INPUT
			NetFlow* ADDRAWRADDR_A10_B, // net ID: ADDRAWRADDR lsb: 0  msb: 12 INPUT
			NetFlow* ADDRAWRADDR_A11_B, // net ID: ADDRAWRADDR lsb: 0  msb: 12 INPUT
			NetFlow* ADDRAWRADDR_A12_B, // net ID: ADDRAWRADDR lsb: 0  msb: 12 INPUT
			NetFlow* ADDRBRDADDR_A0_B, // net ID: ADDRBRDADDR lsb: 0  msb: 12 INPUT
			NetFlow* ADDRBRDADDR_A1_B, // net ID: ADDRBRDADDR lsb: 0  msb: 12 INPUT
			NetFlow* ADDRBRDADDR_A2_B, // net ID: ADDRBRDADDR lsb: 0  msb: 12 INPUT
			NetFlow* ADDRBRDADDR_A3_B, // net ID: ADDRBRDADDR lsb: 0  msb: 12 INPUT
			NetFlow* ADDRBRDADDR_A4_B, // net ID: ADDRBRDADDR lsb: 0  msb: 12 INPUT
			NetFlow* ADDRBRDADDR_A5_B, // net ID: ADDRBRDADDR lsb: 0  msb: 12 INPUT
			NetFlow* ADDRBRDADDR_A6_B, // net ID: ADDRBRDADDR lsb: 0  msb: 12 INPUT
			NetFlow* ADDRBRDADDR_A7_B, // net ID: ADDRBRDADDR lsb: 0  msb: 12 INPUT
			NetFlow* ADDRBRDADDR_A8_B, // net ID: ADDRBRDADDR lsb: 0  msb: 12 INPUT
			NetFlow* ADDRBRDADDR_A9_B, // net ID: ADDRBRDADDR lsb: 0  msb: 12 INPUT
			NetFlow* ADDRBRDADDR_A10_B, // net ID: ADDRBRDADDR lsb: 0  msb: 12 INPUT
			NetFlow* ADDRBRDADDR_A11_B, // net ID: ADDRBRDADDR lsb: 0  msb: 12 INPUT
			NetFlow* ADDRBRDADDR_A12_B, // net ID: ADDRBRDADDR lsb: 0  msb: 12 INPUT
			NetFlow* CLKAWRCLK_A0_B, // net ID: CLKAWRCLK lsb: 0  msb: 0 INPUT
			NetFlow* CLKBRDCLK_A0_B, // net ID: CLKBRDCLK lsb: 0  msb: 0 INPUT
			NetFlow* DIADI_A0_B, // net ID: DIADI lsb: 0  msb: 15 INPUT
			NetFlow* DIADI_A1_B, // net ID: DIADI lsb: 0  msb: 15 INPUT
			NetFlow* DIADI_A2_B, // net ID: DIADI lsb: 0  msb: 15 INPUT
			NetFlow* DIADI_A3_B, // net ID: DIADI lsb: 0  msb: 15 INPUT
			NetFlow* DIADI_A4_B, // net ID: DIADI lsb: 0  msb: 15 INPUT
			NetFlow* DIADI_A5_B, // net ID: DIADI lsb: 0  msb: 15 INPUT
			NetFlow* DIADI_A6_B, // net ID: DIADI lsb: 0  msb: 15 INPUT
			NetFlow* DIADI_A7_B, // net ID: DIADI lsb: 0  msb: 15 INPUT
			NetFlow* DIADI_A8_B, // net ID: DIADI lsb: 0  msb: 15 INPUT
			NetFlow* DIADI_A9_B, // net ID: DIADI lsb: 0  msb: 15 INPUT
			NetFlow* DIADI_A10_B, // net ID: DIADI lsb: 0  msb: 15 INPUT
			NetFlow* DIADI_A11_B, // net ID: DIADI lsb: 0  msb: 15 INPUT
			NetFlow* DIADI_A12_B, // net ID: DIADI lsb: 0  msb: 15 INPUT
			NetFlow* DIADI_A13_B, // net ID: DIADI lsb: 0  msb: 15 INPUT
			NetFlow* DIADI_A14_B, // net ID: DIADI lsb: 0  msb: 15 INPUT
			NetFlow* DIADI_A15_B, // net ID: DIADI lsb: 0  msb: 15 INPUT
			NetFlow* DIBDI_A0_B, // net ID: DIBDI lsb: 0  msb: 15 INPUT
			NetFlow* DIBDI_A1_B, // net ID: DIBDI lsb: 0  msb: 15 INPUT
			NetFlow* DIBDI_A2_B, // net ID: DIBDI lsb: 0  msb: 15 INPUT
			NetFlow* DIBDI_A3_B, // net ID: DIBDI lsb: 0  msb: 15 INPUT
			NetFlow* DIBDI_A4_B, // net ID: DIBDI lsb: 0  msb: 15 INPUT
			NetFlow* DIBDI_A5_B, // net ID: DIBDI lsb: 0  msb: 15 INPUT
			NetFlow* DIBDI_A6_B, // net ID: DIBDI lsb: 0  msb: 15 INPUT
			NetFlow* DIBDI_A7_B, // net ID: DIBDI lsb: 0  msb: 15 INPUT
			NetFlow* DIBDI_A8_B, // net ID: DIBDI lsb: 0  msb: 15 INPUT
			NetFlow* DIBDI_A9_B, // net ID: DIBDI lsb: 0  msb: 15 INPUT
			NetFlow* DIBDI_A10_B, // net ID: DIBDI lsb: 0  msb: 15 INPUT
			NetFlow* DIBDI_A11_B, // net ID: DIBDI lsb: 0  msb: 15 INPUT
			NetFlow* DIBDI_A12_B, // net ID: DIBDI lsb: 0  msb: 15 INPUT
			NetFlow* DIBDI_A13_B, // net ID: DIBDI lsb: 0  msb: 15 INPUT
			NetFlow* DIBDI_A14_B, // net ID: DIBDI lsb: 0  msb: 15 INPUT
			NetFlow* DIBDI_A15_B, // net ID: DIBDI lsb: 0  msb: 15 INPUT
			NetFlow* DIPADIP_A0_B, // net ID: DIPADIP lsb: 0  msb: 1 INPUT
			NetFlow* DIPADIP_A1_B, // net ID: DIPADIP lsb: 0  msb: 1 INPUT
			NetFlow* DIPBDIP_A0_B, // net ID: DIPBDIP lsb: 0  msb: 1 INPUT
			NetFlow* DIPBDIP_A1_B, // net ID: DIPBDIP lsb: 0  msb: 1 INPUT
			NetFlow* ENAWREN_A0_B, // net ID: ENAWREN lsb: 0  msb: 0 INPUT
			NetFlow* ENBRDEN_A0_B, // net ID: ENBRDEN lsb: 0  msb: 0 INPUT
			NetFlow* REGCEA_A0_B, // net ID: REGCEA lsb: 0  msb: 0 INPUT
			NetFlow* REGCEBREGCE_A0_B, // net ID: REGCEBREGCE lsb: 0  msb: 0 INPUT
			NetFlow* RSTA_A0_B, // net ID: RSTA lsb: 0  msb: 0 INPUT
			NetFlow* RSTBRST_A0_B, // net ID: RSTBRST lsb: 0  msb: 0 INPUT
			NetFlow* WEAWEL_A0_B, // net ID: WEAWEL lsb: 0  msb: 1 INPUT
			NetFlow* WEAWEL_A1_B, // net ID: WEAWEL lsb: 0  msb: 1 INPUT
			NetFlow* WEBWEU_A0_B, // net ID: WEBWEU lsb: 0  msb: 1 INPUT
			NetFlow* WEBWEU_A1_B // net ID: WEBWEU lsb: 0  msb: 1 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->DATA_WIDTH_A = DATA_WIDTH_A; // Default: 0
			this->DATA_WIDTH_B = DATA_WIDTH_B; // Default: 0
			this->DOA_REG = DOA_REG; // Default: 0
			this->DOB_REG = DOB_REG; // Default: 0
			this->EN_RSTRAM_A = EN_RSTRAM_A; // Default: "TRUE"
			this->EN_RSTRAM_B = EN_RSTRAM_B; // Default: "TRUE"
			this->INITP_00 = INITP_00; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INITP_01 = INITP_01; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INITP_02 = INITP_02; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INITP_03 = INITP_03; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
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
			this->INIT_A = INIT_A; // Default: 18'h0
			this->INIT_B = INIT_B; // Default: 18'h0
			this->INIT_FILE = INIT_FILE; // Default: "NONE"
			this->LOC = LOC; // Default: "UNPLACED"
			this->RAM_MODE = RAM_MODE; // Default: "TDP"
			this->RSTTYPE = RSTTYPE; // Default: "SYNC"
			this->RST_PRIORITY_A = RST_PRIORITY_A; // Default: "CE"
			this->RST_PRIORITY_B = RST_PRIORITY_B; // Default: "CE"
			this->SETUP_ALL = SETUP_ALL; // Default: 1000
			this->SETUP_READ_FIRST = SETUP_READ_FIRST; // Default: 3000
			this->SIM_COLLISION_CHECK = SIM_COLLISION_CHECK; // Default: "ALL"
			this->SRVAL_A = SRVAL_A; // Default: 18'h0
			this->SRVAL_B = SRVAL_B; // Default: 18'h0
			this->WRITE_MODE_A = WRITE_MODE_A; // Default: "WRITE_FIRST"
			this->WRITE_MODE_B = WRITE_MODE_B; // Default: "WRITE_FIRST"
			//Verilog Ports in definition order:
			this->DOADO_A0_B = DOADO_A0_B; // net ID: DOADO lsb: 0  msb: 0 OUTPUT
			this->DOBDO_A0_B = DOBDO_A0_B; // net ID: DOBDO lsb: 0  msb: 0 OUTPUT
			this->DOPADOP_A0_B = DOPADOP_A0_B; // net ID: DOPADOP lsb: 0  msb: 0 OUTPUT
			this->DOPBDOP_A0_B = DOPBDOP_A0_B; // net ID: DOPBDOP lsb: 0  msb: 0 OUTPUT
			this->ADDRAWRADDR_A0_B = ADDRAWRADDR_A0_B; // net ID: ADDRAWRADDR lsb: 0  msb: 12 INPUT
			this->ADDRAWRADDR_A1_B = ADDRAWRADDR_A1_B; // net ID: ADDRAWRADDR lsb: 0  msb: 12 INPUT
			this->ADDRAWRADDR_A2_B = ADDRAWRADDR_A2_B; // net ID: ADDRAWRADDR lsb: 0  msb: 12 INPUT
			this->ADDRAWRADDR_A3_B = ADDRAWRADDR_A3_B; // net ID: ADDRAWRADDR lsb: 0  msb: 12 INPUT
			this->ADDRAWRADDR_A4_B = ADDRAWRADDR_A4_B; // net ID: ADDRAWRADDR lsb: 0  msb: 12 INPUT
			this->ADDRAWRADDR_A5_B = ADDRAWRADDR_A5_B; // net ID: ADDRAWRADDR lsb: 0  msb: 12 INPUT
			this->ADDRAWRADDR_A6_B = ADDRAWRADDR_A6_B; // net ID: ADDRAWRADDR lsb: 0  msb: 12 INPUT
			this->ADDRAWRADDR_A7_B = ADDRAWRADDR_A7_B; // net ID: ADDRAWRADDR lsb: 0  msb: 12 INPUT
			this->ADDRAWRADDR_A8_B = ADDRAWRADDR_A8_B; // net ID: ADDRAWRADDR lsb: 0  msb: 12 INPUT
			this->ADDRAWRADDR_A9_B = ADDRAWRADDR_A9_B; // net ID: ADDRAWRADDR lsb: 0  msb: 12 INPUT
			this->ADDRAWRADDR_A10_B = ADDRAWRADDR_A10_B; // net ID: ADDRAWRADDR lsb: 0  msb: 12 INPUT
			this->ADDRAWRADDR_A11_B = ADDRAWRADDR_A11_B; // net ID: ADDRAWRADDR lsb: 0  msb: 12 INPUT
			this->ADDRAWRADDR_A12_B = ADDRAWRADDR_A12_B; // net ID: ADDRAWRADDR lsb: 0  msb: 12 INPUT
			this->ADDRBRDADDR_A0_B = ADDRBRDADDR_A0_B; // net ID: ADDRBRDADDR lsb: 0  msb: 12 INPUT
			this->ADDRBRDADDR_A1_B = ADDRBRDADDR_A1_B; // net ID: ADDRBRDADDR lsb: 0  msb: 12 INPUT
			this->ADDRBRDADDR_A2_B = ADDRBRDADDR_A2_B; // net ID: ADDRBRDADDR lsb: 0  msb: 12 INPUT
			this->ADDRBRDADDR_A3_B = ADDRBRDADDR_A3_B; // net ID: ADDRBRDADDR lsb: 0  msb: 12 INPUT
			this->ADDRBRDADDR_A4_B = ADDRBRDADDR_A4_B; // net ID: ADDRBRDADDR lsb: 0  msb: 12 INPUT
			this->ADDRBRDADDR_A5_B = ADDRBRDADDR_A5_B; // net ID: ADDRBRDADDR lsb: 0  msb: 12 INPUT
			this->ADDRBRDADDR_A6_B = ADDRBRDADDR_A6_B; // net ID: ADDRBRDADDR lsb: 0  msb: 12 INPUT
			this->ADDRBRDADDR_A7_B = ADDRBRDADDR_A7_B; // net ID: ADDRBRDADDR lsb: 0  msb: 12 INPUT
			this->ADDRBRDADDR_A8_B = ADDRBRDADDR_A8_B; // net ID: ADDRBRDADDR lsb: 0  msb: 12 INPUT
			this->ADDRBRDADDR_A9_B = ADDRBRDADDR_A9_B; // net ID: ADDRBRDADDR lsb: 0  msb: 12 INPUT
			this->ADDRBRDADDR_A10_B = ADDRBRDADDR_A10_B; // net ID: ADDRBRDADDR lsb: 0  msb: 12 INPUT
			this->ADDRBRDADDR_A11_B = ADDRBRDADDR_A11_B; // net ID: ADDRBRDADDR lsb: 0  msb: 12 INPUT
			this->ADDRBRDADDR_A12_B = ADDRBRDADDR_A12_B; // net ID: ADDRBRDADDR lsb: 0  msb: 12 INPUT
			this->CLKAWRCLK_A0_B = CLKAWRCLK_A0_B; // net ID: CLKAWRCLK lsb: 0  msb: 0 INPUT
			this->CLKBRDCLK_A0_B = CLKBRDCLK_A0_B; // net ID: CLKBRDCLK lsb: 0  msb: 0 INPUT
			this->DIADI_A0_B = DIADI_A0_B; // net ID: DIADI lsb: 0  msb: 15 INPUT
			this->DIADI_A1_B = DIADI_A1_B; // net ID: DIADI lsb: 0  msb: 15 INPUT
			this->DIADI_A2_B = DIADI_A2_B; // net ID: DIADI lsb: 0  msb: 15 INPUT
			this->DIADI_A3_B = DIADI_A3_B; // net ID: DIADI lsb: 0  msb: 15 INPUT
			this->DIADI_A4_B = DIADI_A4_B; // net ID: DIADI lsb: 0  msb: 15 INPUT
			this->DIADI_A5_B = DIADI_A5_B; // net ID: DIADI lsb: 0  msb: 15 INPUT
			this->DIADI_A6_B = DIADI_A6_B; // net ID: DIADI lsb: 0  msb: 15 INPUT
			this->DIADI_A7_B = DIADI_A7_B; // net ID: DIADI lsb: 0  msb: 15 INPUT
			this->DIADI_A8_B = DIADI_A8_B; // net ID: DIADI lsb: 0  msb: 15 INPUT
			this->DIADI_A9_B = DIADI_A9_B; // net ID: DIADI lsb: 0  msb: 15 INPUT
			this->DIADI_A10_B = DIADI_A10_B; // net ID: DIADI lsb: 0  msb: 15 INPUT
			this->DIADI_A11_B = DIADI_A11_B; // net ID: DIADI lsb: 0  msb: 15 INPUT
			this->DIADI_A12_B = DIADI_A12_B; // net ID: DIADI lsb: 0  msb: 15 INPUT
			this->DIADI_A13_B = DIADI_A13_B; // net ID: DIADI lsb: 0  msb: 15 INPUT
			this->DIADI_A14_B = DIADI_A14_B; // net ID: DIADI lsb: 0  msb: 15 INPUT
			this->DIADI_A15_B = DIADI_A15_B; // net ID: DIADI lsb: 0  msb: 15 INPUT
			this->DIBDI_A0_B = DIBDI_A0_B; // net ID: DIBDI lsb: 0  msb: 15 INPUT
			this->DIBDI_A1_B = DIBDI_A1_B; // net ID: DIBDI lsb: 0  msb: 15 INPUT
			this->DIBDI_A2_B = DIBDI_A2_B; // net ID: DIBDI lsb: 0  msb: 15 INPUT
			this->DIBDI_A3_B = DIBDI_A3_B; // net ID: DIBDI lsb: 0  msb: 15 INPUT
			this->DIBDI_A4_B = DIBDI_A4_B; // net ID: DIBDI lsb: 0  msb: 15 INPUT
			this->DIBDI_A5_B = DIBDI_A5_B; // net ID: DIBDI lsb: 0  msb: 15 INPUT
			this->DIBDI_A6_B = DIBDI_A6_B; // net ID: DIBDI lsb: 0  msb: 15 INPUT
			this->DIBDI_A7_B = DIBDI_A7_B; // net ID: DIBDI lsb: 0  msb: 15 INPUT
			this->DIBDI_A8_B = DIBDI_A8_B; // net ID: DIBDI lsb: 0  msb: 15 INPUT
			this->DIBDI_A9_B = DIBDI_A9_B; // net ID: DIBDI lsb: 0  msb: 15 INPUT
			this->DIBDI_A10_B = DIBDI_A10_B; // net ID: DIBDI lsb: 0  msb: 15 INPUT
			this->DIBDI_A11_B = DIBDI_A11_B; // net ID: DIBDI lsb: 0  msb: 15 INPUT
			this->DIBDI_A12_B = DIBDI_A12_B; // net ID: DIBDI lsb: 0  msb: 15 INPUT
			this->DIBDI_A13_B = DIBDI_A13_B; // net ID: DIBDI lsb: 0  msb: 15 INPUT
			this->DIBDI_A14_B = DIBDI_A14_B; // net ID: DIBDI lsb: 0  msb: 15 INPUT
			this->DIBDI_A15_B = DIBDI_A15_B; // net ID: DIBDI lsb: 0  msb: 15 INPUT
			this->DIPADIP_A0_B = DIPADIP_A0_B; // net ID: DIPADIP lsb: 0  msb: 1 INPUT
			this->DIPADIP_A1_B = DIPADIP_A1_B; // net ID: DIPADIP lsb: 0  msb: 1 INPUT
			this->DIPBDIP_A0_B = DIPBDIP_A0_B; // net ID: DIPBDIP lsb: 0  msb: 1 INPUT
			this->DIPBDIP_A1_B = DIPBDIP_A1_B; // net ID: DIPBDIP lsb: 0  msb: 1 INPUT
			this->ENAWREN_A0_B = ENAWREN_A0_B; // net ID: ENAWREN lsb: 0  msb: 0 INPUT
			this->ENBRDEN_A0_B = ENBRDEN_A0_B; // net ID: ENBRDEN lsb: 0  msb: 0 INPUT
			this->REGCEA_A0_B = REGCEA_A0_B; // net ID: REGCEA lsb: 0  msb: 0 INPUT
			this->REGCEBREGCE_A0_B = REGCEBREGCE_A0_B; // net ID: REGCEBREGCE lsb: 0  msb: 0 INPUT
			this->RSTA_A0_B = RSTA_A0_B; // net ID: RSTA lsb: 0  msb: 0 INPUT
			this->RSTBRST_A0_B = RSTBRST_A0_B; // net ID: RSTBRST lsb: 0  msb: 0 INPUT
			this->WEAWEL_A0_B = WEAWEL_A0_B; // net ID: WEAWEL lsb: 0  msb: 1 INPUT
			this->WEAWEL_A1_B = WEAWEL_A1_B; // net ID: WEAWEL lsb: 0  msb: 1 INPUT
			this->WEBWEU_A0_B = WEBWEU_A0_B; // net ID: WEBWEU lsb: 0  msb: 1 INPUT
			this->WEBWEU_A1_B = WEBWEU_A1_B; // net ID: WEBWEU lsb: 0  msb: 1 INPUT
			
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
#endif // X_RAMB8BWER_H
