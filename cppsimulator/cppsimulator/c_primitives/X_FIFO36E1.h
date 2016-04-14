/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_FIFO36E1_H
#define X_FIFO36E1_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"
namespace CPrimitives {
	
	class X_FIFO36E1: public Primitive{

		//Verilog Parameters:
		parameter_int_t ALMOST_EMPTY_OFFSET;
		parameter_int_t ALMOST_FULL_OFFSET;
		parameter_int_t DATA_WIDTH;
		parameter_int_t DO_REG;
		parameter_enum_t EN_ECC_READ;
		parameter_enum_t EN_ECC_WRITE;
		parameter_enum_t EN_SYN;
		parameter_string_t FIFO_MODE;
		parameter_enum_t FIRST_WORD_FALL_THROUGH;
		parameter_int_t INIT;
		parameter_string_t LOC;
		parameter_string_t SIM_DEVICE;
		parameter_int_t SRVAL;
		//Verilog Ports in definition order:
		NetFlow* ALMOSTEMPTY_A0_B; // net ID: ALMOSTEMPTY lsb: 0  msb: 0 OUTPUT
		NetFlow* ALMOSTFULL_A0_B; // net ID: ALMOSTFULL lsb: 0  msb: 0 OUTPUT
		NetFlow* DBITERR_A0_B; // net ID: DBITERR lsb: 0  msb: 0 OUTPUT
		NetFlow* DO_A0_B; // net ID: DO lsb: 0  msb: 0 OUTPUT
		NetFlow* DOP_A0_B; // net ID: DOP lsb: 0  msb: 0 OUTPUT
		NetFlow* ECCPARITY_A0_B; // net ID: ECCPARITY lsb: 0  msb: 0 OUTPUT
		NetFlow* EMPTY_A0_B; // net ID: EMPTY lsb: 0  msb: 0 OUTPUT
		NetFlow* FULL_A0_B; // net ID: FULL lsb: 0  msb: 0 OUTPUT
		NetFlow* RDCOUNT_A0_B; // net ID: RDCOUNT lsb: 0  msb: 0 OUTPUT
		NetFlow* RDERR_A0_B; // net ID: RDERR lsb: 0  msb: 0 OUTPUT
		NetFlow* SBITERR_A0_B; // net ID: SBITERR lsb: 0  msb: 0 OUTPUT
		NetFlow* WRCOUNT_A0_B; // net ID: WRCOUNT lsb: 0  msb: 0 OUTPUT
		NetFlow* WRERR_A0_B; // net ID: WRERR lsb: 0  msb: 0 OUTPUT
		NetFlow* DI_A0_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A1_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A2_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A3_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A4_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A5_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A6_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A7_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A8_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A9_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A10_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A11_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A12_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A13_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A14_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A15_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A16_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A17_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A18_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A19_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A20_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A21_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A22_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A23_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A24_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A25_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A26_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A27_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A28_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A29_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A30_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A31_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A32_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A33_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A34_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A35_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A36_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A37_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A38_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A39_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A40_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A41_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A42_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A43_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A44_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A45_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A46_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A47_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A48_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A49_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A50_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A51_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A52_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A53_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A54_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A55_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A56_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A57_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A58_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A59_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A60_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A61_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A62_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DI_A63_B; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DIP_A0_B; // net ID: DIP lsb: 0  msb: 7 INPUT
		NetFlow* DIP_A1_B; // net ID: DIP lsb: 0  msb: 7 INPUT
		NetFlow* DIP_A2_B; // net ID: DIP lsb: 0  msb: 7 INPUT
		NetFlow* DIP_A3_B; // net ID: DIP lsb: 0  msb: 7 INPUT
		NetFlow* DIP_A4_B; // net ID: DIP lsb: 0  msb: 7 INPUT
		NetFlow* DIP_A5_B; // net ID: DIP lsb: 0  msb: 7 INPUT
		NetFlow* DIP_A6_B; // net ID: DIP lsb: 0  msb: 7 INPUT
		NetFlow* DIP_A7_B; // net ID: DIP lsb: 0  msb: 7 INPUT
		NetFlow* INJECTDBITERR_A0_B; // net ID: INJECTDBITERR lsb: 0  msb: 0 INPUT
		NetFlow* INJECTSBITERR_A0_B; // net ID: INJECTSBITERR lsb: 0  msb: 0 INPUT
		NetFlow* RDCLK_A0_B; // net ID: RDCLK lsb: 0  msb: 0 INPUT
		NetFlow* RDEN_A0_B; // net ID: RDEN lsb: 0  msb: 0 INPUT
		NetFlow* REGCE_A0_B; // net ID: REGCE lsb: 0  msb: 0 INPUT
		NetFlow* RST_A0_B; // net ID: RST lsb: 0  msb: 0 INPUT
		NetFlow* RSTREG_A0_B; // net ID: RSTREG lsb: 0  msb: 0 INPUT
		NetFlow* WRCLK_A0_B; // net ID: WRCLK lsb: 0  msb: 0 INPUT
		NetFlow* WREN_A0_B; // net ID: WREN lsb: 0  msb: 0 INPUT
		
		public: X_FIFO36E1(
			const char * name,
			//Verilog Parameters:
			parameter_int_t ALMOST_EMPTY_OFFSET, // Default: 13'h0080
			parameter_int_t ALMOST_FULL_OFFSET, // Default: 13'h0080
			parameter_int_t DATA_WIDTH, // Default: 4
			parameter_int_t DO_REG, // Default: 1
			parameter_enum_t EN_ECC_READ, // Default: "FALSE"
			parameter_enum_t EN_ECC_WRITE, // Default: "FALSE"
			parameter_enum_t EN_SYN, // Default: "FALSE"
			parameter_string_t FIFO_MODE, // Default: "FIFO36"
			parameter_enum_t FIRST_WORD_FALL_THROUGH, // Default: "FALSE"
			parameter_int_t INIT, // Default: 72'h0
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_string_t SIM_DEVICE, // Default: "VIRTEX6"
			parameter_int_t SRVAL, // Default: 72'h0
			//Verilog Ports in definition order:
			NetFlow* ALMOSTEMPTY_A0_B, // net ID: ALMOSTEMPTY lsb: 0  msb: 0 OUTPUT
			NetFlow* ALMOSTFULL_A0_B, // net ID: ALMOSTFULL lsb: 0  msb: 0 OUTPUT
			NetFlow* DBITERR_A0_B, // net ID: DBITERR lsb: 0  msb: 0 OUTPUT
			NetFlow* DO_A0_B, // net ID: DO lsb: 0  msb: 0 OUTPUT
			NetFlow* DOP_A0_B, // net ID: DOP lsb: 0  msb: 0 OUTPUT
			NetFlow* ECCPARITY_A0_B, // net ID: ECCPARITY lsb: 0  msb: 0 OUTPUT
			NetFlow* EMPTY_A0_B, // net ID: EMPTY lsb: 0  msb: 0 OUTPUT
			NetFlow* FULL_A0_B, // net ID: FULL lsb: 0  msb: 0 OUTPUT
			NetFlow* RDCOUNT_A0_B, // net ID: RDCOUNT lsb: 0  msb: 0 OUTPUT
			NetFlow* RDERR_A0_B, // net ID: RDERR lsb: 0  msb: 0 OUTPUT
			NetFlow* SBITERR_A0_B, // net ID: SBITERR lsb: 0  msb: 0 OUTPUT
			NetFlow* WRCOUNT_A0_B, // net ID: WRCOUNT lsb: 0  msb: 0 OUTPUT
			NetFlow* WRERR_A0_B, // net ID: WRERR lsb: 0  msb: 0 OUTPUT
			NetFlow* DI_A0_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A1_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A2_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A3_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A4_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A5_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A6_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A7_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A8_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A9_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A10_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A11_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A12_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A13_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A14_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A15_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A16_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A17_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A18_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A19_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A20_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A21_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A22_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A23_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A24_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A25_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A26_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A27_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A28_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A29_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A30_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A31_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A32_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A33_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A34_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A35_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A36_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A37_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A38_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A39_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A40_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A41_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A42_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A43_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A44_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A45_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A46_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A47_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A48_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A49_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A50_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A51_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A52_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A53_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A54_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A55_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A56_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A57_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A58_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A59_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A60_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A61_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A62_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DI_A63_B, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DIP_A0_B, // net ID: DIP lsb: 0  msb: 7 INPUT
			NetFlow* DIP_A1_B, // net ID: DIP lsb: 0  msb: 7 INPUT
			NetFlow* DIP_A2_B, // net ID: DIP lsb: 0  msb: 7 INPUT
			NetFlow* DIP_A3_B, // net ID: DIP lsb: 0  msb: 7 INPUT
			NetFlow* DIP_A4_B, // net ID: DIP lsb: 0  msb: 7 INPUT
			NetFlow* DIP_A5_B, // net ID: DIP lsb: 0  msb: 7 INPUT
			NetFlow* DIP_A6_B, // net ID: DIP lsb: 0  msb: 7 INPUT
			NetFlow* DIP_A7_B, // net ID: DIP lsb: 0  msb: 7 INPUT
			NetFlow* INJECTDBITERR_A0_B, // net ID: INJECTDBITERR lsb: 0  msb: 0 INPUT
			NetFlow* INJECTSBITERR_A0_B, // net ID: INJECTSBITERR lsb: 0  msb: 0 INPUT
			NetFlow* RDCLK_A0_B, // net ID: RDCLK lsb: 0  msb: 0 INPUT
			NetFlow* RDEN_A0_B, // net ID: RDEN lsb: 0  msb: 0 INPUT
			NetFlow* REGCE_A0_B, // net ID: REGCE lsb: 0  msb: 0 INPUT
			NetFlow* RST_A0_B, // net ID: RST lsb: 0  msb: 0 INPUT
			NetFlow* RSTREG_A0_B, // net ID: RSTREG lsb: 0  msb: 0 INPUT
			NetFlow* WRCLK_A0_B, // net ID: WRCLK lsb: 0  msb: 0 INPUT
			NetFlow* WREN_A0_B // net ID: WREN lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->ALMOST_EMPTY_OFFSET = ALMOST_EMPTY_OFFSET; // Default: 13'h0080
			this->ALMOST_FULL_OFFSET = ALMOST_FULL_OFFSET; // Default: 13'h0080
			this->DATA_WIDTH = DATA_WIDTH; // Default: 4
			this->DO_REG = DO_REG; // Default: 1
			this->EN_ECC_READ = EN_ECC_READ; // Default: "FALSE"
			this->EN_ECC_WRITE = EN_ECC_WRITE; // Default: "FALSE"
			this->EN_SYN = EN_SYN; // Default: "FALSE"
			this->FIFO_MODE = FIFO_MODE; // Default: "FIFO36"
			this->FIRST_WORD_FALL_THROUGH = FIRST_WORD_FALL_THROUGH; // Default: "FALSE"
			this->INIT = INIT; // Default: 72'h0
			this->LOC = LOC; // Default: "UNPLACED"
			this->SIM_DEVICE = SIM_DEVICE; // Default: "VIRTEX6"
			this->SRVAL = SRVAL; // Default: 72'h0
			//Verilog Ports in definition order:
			this->ALMOSTEMPTY_A0_B = ALMOSTEMPTY_A0_B; // net ID: ALMOSTEMPTY lsb: 0  msb: 0 OUTPUT
			this->ALMOSTFULL_A0_B = ALMOSTFULL_A0_B; // net ID: ALMOSTFULL lsb: 0  msb: 0 OUTPUT
			this->DBITERR_A0_B = DBITERR_A0_B; // net ID: DBITERR lsb: 0  msb: 0 OUTPUT
			this->DO_A0_B = DO_A0_B; // net ID: DO lsb: 0  msb: 0 OUTPUT
			this->DOP_A0_B = DOP_A0_B; // net ID: DOP lsb: 0  msb: 0 OUTPUT
			this->ECCPARITY_A0_B = ECCPARITY_A0_B; // net ID: ECCPARITY lsb: 0  msb: 0 OUTPUT
			this->EMPTY_A0_B = EMPTY_A0_B; // net ID: EMPTY lsb: 0  msb: 0 OUTPUT
			this->FULL_A0_B = FULL_A0_B; // net ID: FULL lsb: 0  msb: 0 OUTPUT
			this->RDCOUNT_A0_B = RDCOUNT_A0_B; // net ID: RDCOUNT lsb: 0  msb: 0 OUTPUT
			this->RDERR_A0_B = RDERR_A0_B; // net ID: RDERR lsb: 0  msb: 0 OUTPUT
			this->SBITERR_A0_B = SBITERR_A0_B; // net ID: SBITERR lsb: 0  msb: 0 OUTPUT
			this->WRCOUNT_A0_B = WRCOUNT_A0_B; // net ID: WRCOUNT lsb: 0  msb: 0 OUTPUT
			this->WRERR_A0_B = WRERR_A0_B; // net ID: WRERR lsb: 0  msb: 0 OUTPUT
			this->DI_A0_B = DI_A0_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A1_B = DI_A1_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A2_B = DI_A2_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A3_B = DI_A3_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A4_B = DI_A4_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A5_B = DI_A5_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A6_B = DI_A6_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A7_B = DI_A7_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A8_B = DI_A8_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A9_B = DI_A9_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A10_B = DI_A10_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A11_B = DI_A11_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A12_B = DI_A12_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A13_B = DI_A13_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A14_B = DI_A14_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A15_B = DI_A15_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A16_B = DI_A16_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A17_B = DI_A17_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A18_B = DI_A18_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A19_B = DI_A19_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A20_B = DI_A20_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A21_B = DI_A21_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A22_B = DI_A22_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A23_B = DI_A23_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A24_B = DI_A24_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A25_B = DI_A25_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A26_B = DI_A26_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A27_B = DI_A27_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A28_B = DI_A28_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A29_B = DI_A29_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A30_B = DI_A30_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A31_B = DI_A31_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A32_B = DI_A32_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A33_B = DI_A33_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A34_B = DI_A34_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A35_B = DI_A35_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A36_B = DI_A36_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A37_B = DI_A37_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A38_B = DI_A38_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A39_B = DI_A39_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A40_B = DI_A40_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A41_B = DI_A41_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A42_B = DI_A42_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A43_B = DI_A43_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A44_B = DI_A44_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A45_B = DI_A45_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A46_B = DI_A46_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A47_B = DI_A47_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A48_B = DI_A48_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A49_B = DI_A49_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A50_B = DI_A50_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A51_B = DI_A51_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A52_B = DI_A52_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A53_B = DI_A53_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A54_B = DI_A54_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A55_B = DI_A55_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A56_B = DI_A56_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A57_B = DI_A57_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A58_B = DI_A58_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A59_B = DI_A59_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A60_B = DI_A60_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A61_B = DI_A61_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A62_B = DI_A62_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DI_A63_B = DI_A63_B; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DIP_A0_B = DIP_A0_B; // net ID: DIP lsb: 0  msb: 7 INPUT
			this->DIP_A1_B = DIP_A1_B; // net ID: DIP lsb: 0  msb: 7 INPUT
			this->DIP_A2_B = DIP_A2_B; // net ID: DIP lsb: 0  msb: 7 INPUT
			this->DIP_A3_B = DIP_A3_B; // net ID: DIP lsb: 0  msb: 7 INPUT
			this->DIP_A4_B = DIP_A4_B; // net ID: DIP lsb: 0  msb: 7 INPUT
			this->DIP_A5_B = DIP_A5_B; // net ID: DIP lsb: 0  msb: 7 INPUT
			this->DIP_A6_B = DIP_A6_B; // net ID: DIP lsb: 0  msb: 7 INPUT
			this->DIP_A7_B = DIP_A7_B; // net ID: DIP lsb: 0  msb: 7 INPUT
			this->INJECTDBITERR_A0_B = INJECTDBITERR_A0_B; // net ID: INJECTDBITERR lsb: 0  msb: 0 INPUT
			this->INJECTSBITERR_A0_B = INJECTSBITERR_A0_B; // net ID: INJECTSBITERR lsb: 0  msb: 0 INPUT
			this->RDCLK_A0_B = RDCLK_A0_B; // net ID: RDCLK lsb: 0  msb: 0 INPUT
			this->RDEN_A0_B = RDEN_A0_B; // net ID: RDEN lsb: 0  msb: 0 INPUT
			this->REGCE_A0_B = REGCE_A0_B; // net ID: REGCE lsb: 0  msb: 0 INPUT
			this->RST_A0_B = RST_A0_B; // net ID: RST lsb: 0  msb: 0 INPUT
			this->RSTREG_A0_B = RSTREG_A0_B; // net ID: RSTREG lsb: 0  msb: 0 INPUT
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
#endif // X_FIFO36E1_H
