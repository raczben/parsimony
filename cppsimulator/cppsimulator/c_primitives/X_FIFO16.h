/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_FIFO16_H
#define X_FIFO16_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"
namespace CPrimitives {
	
	class X_FIFO16: public Primitive{

		//Verilog Parameters:
		parameter_int_t ALMOST_FULL_OFFSET;
		parameter_int_t ALMOST_EMPTY_OFFSET;
		parameter_int_t DATA_WIDTH;
		parameter_enum_t FIRST_WORD_FALL_THROUGH;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* ALMOSTEMPTY_A0_B; // net ID: ALMOSTEMPTY lsb: 0  msb: 0 OUTPUT
		NetFlow* ALMOSTFULL_A0_B; // net ID: ALMOSTFULL lsb: 0  msb: 0 OUTPUT
		NetFlow* DO_A0_B; // net ID: DO lsb: 0  msb: 0 OUTPUT
		NetFlow* DOP_A0_B; // net ID: DOP lsb: 0  msb: 0 OUTPUT
		NetFlow* EMPTY_A0_B; // net ID: EMPTY lsb: 0  msb: 0 OUTPUT
		NetFlow* FULL_A0_B; // net ID: FULL lsb: 0  msb: 0 OUTPUT
		NetFlow* RDCOUNT_A0_B; // net ID: RDCOUNT lsb: 0  msb: 0 OUTPUT
		NetFlow* RDERR_A0_B; // net ID: RDERR lsb: 0  msb: 0 OUTPUT
		NetFlow* WRCOUNT_A0_B; // net ID: WRCOUNT lsb: 0  msb: 0 OUTPUT
		NetFlow* WRERR_A0_B; // net ID: WRERR lsb: 0  msb: 0 OUTPUT
		NetFlow* DI_A0_B; // net ID: DI lsb: 0  msb: 31 INPUT
		NetFlow* DI_A1_B; // net ID: DI lsb: 0  msb: 31 INPUT
		NetFlow* DI_A2_B; // net ID: DI lsb: 0  msb: 31 INPUT
		NetFlow* DI_A3_B; // net ID: DI lsb: 0  msb: 31 INPUT
		NetFlow* DI_A4_B; // net ID: DI lsb: 0  msb: 31 INPUT
		NetFlow* DI_A5_B; // net ID: DI lsb: 0  msb: 31 INPUT
		NetFlow* DI_A6_B; // net ID: DI lsb: 0  msb: 31 INPUT
		NetFlow* DI_A7_B; // net ID: DI lsb: 0  msb: 31 INPUT
		NetFlow* DI_A8_B; // net ID: DI lsb: 0  msb: 31 INPUT
		NetFlow* DI_A9_B; // net ID: DI lsb: 0  msb: 31 INPUT
		NetFlow* DI_A10_B; // net ID: DI lsb: 0  msb: 31 INPUT
		NetFlow* DI_A11_B; // net ID: DI lsb: 0  msb: 31 INPUT
		NetFlow* DI_A12_B; // net ID: DI lsb: 0  msb: 31 INPUT
		NetFlow* DI_A13_B; // net ID: DI lsb: 0  msb: 31 INPUT
		NetFlow* DI_A14_B; // net ID: DI lsb: 0  msb: 31 INPUT
		NetFlow* DI_A15_B; // net ID: DI lsb: 0  msb: 31 INPUT
		NetFlow* DI_A16_B; // net ID: DI lsb: 0  msb: 31 INPUT
		NetFlow* DI_A17_B; // net ID: DI lsb: 0  msb: 31 INPUT
		NetFlow* DI_A18_B; // net ID: DI lsb: 0  msb: 31 INPUT
		NetFlow* DI_A19_B; // net ID: DI lsb: 0  msb: 31 INPUT
		NetFlow* DI_A20_B; // net ID: DI lsb: 0  msb: 31 INPUT
		NetFlow* DI_A21_B; // net ID: DI lsb: 0  msb: 31 INPUT
		NetFlow* DI_A22_B; // net ID: DI lsb: 0  msb: 31 INPUT
		NetFlow* DI_A23_B; // net ID: DI lsb: 0  msb: 31 INPUT
		NetFlow* DI_A24_B; // net ID: DI lsb: 0  msb: 31 INPUT
		NetFlow* DI_A25_B; // net ID: DI lsb: 0  msb: 31 INPUT
		NetFlow* DI_A26_B; // net ID: DI lsb: 0  msb: 31 INPUT
		NetFlow* DI_A27_B; // net ID: DI lsb: 0  msb: 31 INPUT
		NetFlow* DI_A28_B; // net ID: DI lsb: 0  msb: 31 INPUT
		NetFlow* DI_A29_B; // net ID: DI lsb: 0  msb: 31 INPUT
		NetFlow* DI_A30_B; // net ID: DI lsb: 0  msb: 31 INPUT
		NetFlow* DI_A31_B; // net ID: DI lsb: 0  msb: 31 INPUT
		NetFlow* DIP_A0_B; // net ID: DIP lsb: 0  msb: 3 INPUT
		NetFlow* DIP_A1_B; // net ID: DIP lsb: 0  msb: 3 INPUT
		NetFlow* DIP_A2_B; // net ID: DIP lsb: 0  msb: 3 INPUT
		NetFlow* DIP_A3_B; // net ID: DIP lsb: 0  msb: 3 INPUT
		NetFlow* RDCLK_A0_B; // net ID: RDCLK lsb: 0  msb: 0 INPUT
		NetFlow* RDEN_A0_B; // net ID: RDEN lsb: 0  msb: 0 INPUT
		NetFlow* RST_A0_B; // net ID: RST lsb: 0  msb: 0 INPUT
		NetFlow* WRCLK_A0_B; // net ID: WRCLK lsb: 0  msb: 0 INPUT
		NetFlow* WREN_A0_B; // net ID: WREN lsb: 0  msb: 0 INPUT
		
		public: X_FIFO16(
			const char * name,
			//Verilog Parameters:
			parameter_int_t ALMOST_FULL_OFFSET, // Default: 12'h080
			parameter_int_t ALMOST_EMPTY_OFFSET, // Default: 12'h080
			parameter_int_t DATA_WIDTH, // Default: 36
			parameter_enum_t FIRST_WORD_FALL_THROUGH, // Default: "FALSE"
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* ALMOSTEMPTY_A0_B, // net ID: ALMOSTEMPTY lsb: 0  msb: 0 OUTPUT
			NetFlow* ALMOSTFULL_A0_B, // net ID: ALMOSTFULL lsb: 0  msb: 0 OUTPUT
			NetFlow* DO_A0_B, // net ID: DO lsb: 0  msb: 0 OUTPUT
			NetFlow* DOP_A0_B, // net ID: DOP lsb: 0  msb: 0 OUTPUT
			NetFlow* EMPTY_A0_B, // net ID: EMPTY lsb: 0  msb: 0 OUTPUT
			NetFlow* FULL_A0_B, // net ID: FULL lsb: 0  msb: 0 OUTPUT
			NetFlow* RDCOUNT_A0_B, // net ID: RDCOUNT lsb: 0  msb: 0 OUTPUT
			NetFlow* RDERR_A0_B, // net ID: RDERR lsb: 0  msb: 0 OUTPUT
			NetFlow* WRCOUNT_A0_B, // net ID: WRCOUNT lsb: 0  msb: 0 OUTPUT
			NetFlow* WRERR_A0_B, // net ID: WRERR lsb: 0  msb: 0 OUTPUT
			NetFlow* DI_A0_B, // net ID: DI lsb: 0  msb: 31 INPUT
			NetFlow* DI_A1_B, // net ID: DI lsb: 0  msb: 31 INPUT
			NetFlow* DI_A2_B, // net ID: DI lsb: 0  msb: 31 INPUT
			NetFlow* DI_A3_B, // net ID: DI lsb: 0  msb: 31 INPUT
			NetFlow* DI_A4_B, // net ID: DI lsb: 0  msb: 31 INPUT
			NetFlow* DI_A5_B, // net ID: DI lsb: 0  msb: 31 INPUT
			NetFlow* DI_A6_B, // net ID: DI lsb: 0  msb: 31 INPUT
			NetFlow* DI_A7_B, // net ID: DI lsb: 0  msb: 31 INPUT
			NetFlow* DI_A8_B, // net ID: DI lsb: 0  msb: 31 INPUT
			NetFlow* DI_A9_B, // net ID: DI lsb: 0  msb: 31 INPUT
			NetFlow* DI_A10_B, // net ID: DI lsb: 0  msb: 31 INPUT
			NetFlow* DI_A11_B, // net ID: DI lsb: 0  msb: 31 INPUT
			NetFlow* DI_A12_B, // net ID: DI lsb: 0  msb: 31 INPUT
			NetFlow* DI_A13_B, // net ID: DI lsb: 0  msb: 31 INPUT
			NetFlow* DI_A14_B, // net ID: DI lsb: 0  msb: 31 INPUT
			NetFlow* DI_A15_B, // net ID: DI lsb: 0  msb: 31 INPUT
			NetFlow* DI_A16_B, // net ID: DI lsb: 0  msb: 31 INPUT
			NetFlow* DI_A17_B, // net ID: DI lsb: 0  msb: 31 INPUT
			NetFlow* DI_A18_B, // net ID: DI lsb: 0  msb: 31 INPUT
			NetFlow* DI_A19_B, // net ID: DI lsb: 0  msb: 31 INPUT
			NetFlow* DI_A20_B, // net ID: DI lsb: 0  msb: 31 INPUT
			NetFlow* DI_A21_B, // net ID: DI lsb: 0  msb: 31 INPUT
			NetFlow* DI_A22_B, // net ID: DI lsb: 0  msb: 31 INPUT
			NetFlow* DI_A23_B, // net ID: DI lsb: 0  msb: 31 INPUT
			NetFlow* DI_A24_B, // net ID: DI lsb: 0  msb: 31 INPUT
			NetFlow* DI_A25_B, // net ID: DI lsb: 0  msb: 31 INPUT
			NetFlow* DI_A26_B, // net ID: DI lsb: 0  msb: 31 INPUT
			NetFlow* DI_A27_B, // net ID: DI lsb: 0  msb: 31 INPUT
			NetFlow* DI_A28_B, // net ID: DI lsb: 0  msb: 31 INPUT
			NetFlow* DI_A29_B, // net ID: DI lsb: 0  msb: 31 INPUT
			NetFlow* DI_A30_B, // net ID: DI lsb: 0  msb: 31 INPUT
			NetFlow* DI_A31_B, // net ID: DI lsb: 0  msb: 31 INPUT
			NetFlow* DIP_A0_B, // net ID: DIP lsb: 0  msb: 3 INPUT
			NetFlow* DIP_A1_B, // net ID: DIP lsb: 0  msb: 3 INPUT
			NetFlow* DIP_A2_B, // net ID: DIP lsb: 0  msb: 3 INPUT
			NetFlow* DIP_A3_B, // net ID: DIP lsb: 0  msb: 3 INPUT
			NetFlow* RDCLK_A0_B, // net ID: RDCLK lsb: 0  msb: 0 INPUT
			NetFlow* RDEN_A0_B, // net ID: RDEN lsb: 0  msb: 0 INPUT
			NetFlow* RST_A0_B, // net ID: RST lsb: 0  msb: 0 INPUT
			NetFlow* WRCLK_A0_B, // net ID: WRCLK lsb: 0  msb: 0 INPUT
			NetFlow* WREN_A0_B // net ID: WREN lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->ALMOST_FULL_OFFSET = ALMOST_FULL_OFFSET; // Default: 12'h080
			this->ALMOST_EMPTY_OFFSET = ALMOST_EMPTY_OFFSET; // Default: 12'h080
			this->DATA_WIDTH = DATA_WIDTH; // Default: 36
			this->FIRST_WORD_FALL_THROUGH = FIRST_WORD_FALL_THROUGH; // Default: "FALSE"
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->ALMOSTEMPTY_A0_B = ALMOSTEMPTY_A0_B; // net ID: ALMOSTEMPTY lsb: 0  msb: 0 OUTPUT
			this->ALMOSTFULL_A0_B = ALMOSTFULL_A0_B; // net ID: ALMOSTFULL lsb: 0  msb: 0 OUTPUT
			this->DO_A0_B = DO_A0_B; // net ID: DO lsb: 0  msb: 0 OUTPUT
			this->DOP_A0_B = DOP_A0_B; // net ID: DOP lsb: 0  msb: 0 OUTPUT
			this->EMPTY_A0_B = EMPTY_A0_B; // net ID: EMPTY lsb: 0  msb: 0 OUTPUT
			this->FULL_A0_B = FULL_A0_B; // net ID: FULL lsb: 0  msb: 0 OUTPUT
			this->RDCOUNT_A0_B = RDCOUNT_A0_B; // net ID: RDCOUNT lsb: 0  msb: 0 OUTPUT
			this->RDERR_A0_B = RDERR_A0_B; // net ID: RDERR lsb: 0  msb: 0 OUTPUT
			this->WRCOUNT_A0_B = WRCOUNT_A0_B; // net ID: WRCOUNT lsb: 0  msb: 0 OUTPUT
			this->WRERR_A0_B = WRERR_A0_B; // net ID: WRERR lsb: 0  msb: 0 OUTPUT
			this->DI_A0_B = DI_A0_B; // net ID: DI lsb: 0  msb: 31 INPUT
			this->DI_A1_B = DI_A1_B; // net ID: DI lsb: 0  msb: 31 INPUT
			this->DI_A2_B = DI_A2_B; // net ID: DI lsb: 0  msb: 31 INPUT
			this->DI_A3_B = DI_A3_B; // net ID: DI lsb: 0  msb: 31 INPUT
			this->DI_A4_B = DI_A4_B; // net ID: DI lsb: 0  msb: 31 INPUT
			this->DI_A5_B = DI_A5_B; // net ID: DI lsb: 0  msb: 31 INPUT
			this->DI_A6_B = DI_A6_B; // net ID: DI lsb: 0  msb: 31 INPUT
			this->DI_A7_B = DI_A7_B; // net ID: DI lsb: 0  msb: 31 INPUT
			this->DI_A8_B = DI_A8_B; // net ID: DI lsb: 0  msb: 31 INPUT
			this->DI_A9_B = DI_A9_B; // net ID: DI lsb: 0  msb: 31 INPUT
			this->DI_A10_B = DI_A10_B; // net ID: DI lsb: 0  msb: 31 INPUT
			this->DI_A11_B = DI_A11_B; // net ID: DI lsb: 0  msb: 31 INPUT
			this->DI_A12_B = DI_A12_B; // net ID: DI lsb: 0  msb: 31 INPUT
			this->DI_A13_B = DI_A13_B; // net ID: DI lsb: 0  msb: 31 INPUT
			this->DI_A14_B = DI_A14_B; // net ID: DI lsb: 0  msb: 31 INPUT
			this->DI_A15_B = DI_A15_B; // net ID: DI lsb: 0  msb: 31 INPUT
			this->DI_A16_B = DI_A16_B; // net ID: DI lsb: 0  msb: 31 INPUT
			this->DI_A17_B = DI_A17_B; // net ID: DI lsb: 0  msb: 31 INPUT
			this->DI_A18_B = DI_A18_B; // net ID: DI lsb: 0  msb: 31 INPUT
			this->DI_A19_B = DI_A19_B; // net ID: DI lsb: 0  msb: 31 INPUT
			this->DI_A20_B = DI_A20_B; // net ID: DI lsb: 0  msb: 31 INPUT
			this->DI_A21_B = DI_A21_B; // net ID: DI lsb: 0  msb: 31 INPUT
			this->DI_A22_B = DI_A22_B; // net ID: DI lsb: 0  msb: 31 INPUT
			this->DI_A23_B = DI_A23_B; // net ID: DI lsb: 0  msb: 31 INPUT
			this->DI_A24_B = DI_A24_B; // net ID: DI lsb: 0  msb: 31 INPUT
			this->DI_A25_B = DI_A25_B; // net ID: DI lsb: 0  msb: 31 INPUT
			this->DI_A26_B = DI_A26_B; // net ID: DI lsb: 0  msb: 31 INPUT
			this->DI_A27_B = DI_A27_B; // net ID: DI lsb: 0  msb: 31 INPUT
			this->DI_A28_B = DI_A28_B; // net ID: DI lsb: 0  msb: 31 INPUT
			this->DI_A29_B = DI_A29_B; // net ID: DI lsb: 0  msb: 31 INPUT
			this->DI_A30_B = DI_A30_B; // net ID: DI lsb: 0  msb: 31 INPUT
			this->DI_A31_B = DI_A31_B; // net ID: DI lsb: 0  msb: 31 INPUT
			this->DIP_A0_B = DIP_A0_B; // net ID: DIP lsb: 0  msb: 3 INPUT
			this->DIP_A1_B = DIP_A1_B; // net ID: DIP lsb: 0  msb: 3 INPUT
			this->DIP_A2_B = DIP_A2_B; // net ID: DIP lsb: 0  msb: 3 INPUT
			this->DIP_A3_B = DIP_A3_B; // net ID: DIP lsb: 0  msb: 3 INPUT
			this->RDCLK_A0_B = RDCLK_A0_B; // net ID: RDCLK lsb: 0  msb: 0 INPUT
			this->RDEN_A0_B = RDEN_A0_B; // net ID: RDEN lsb: 0  msb: 0 INPUT
			this->RST_A0_B = RST_A0_B; // net ID: RST lsb: 0  msb: 0 INPUT
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
#endif // X_FIFO16_H
