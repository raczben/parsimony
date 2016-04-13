/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_FIFO16: public Primitive{

		//Verilog Parameters:
		parameter_string_t ALMOST_FULL_OFFSET;
		parameter_string_t ALMOST_EMPTY_OFFSET;
		parameter_string_t DATA_WIDTH;
		parameter_enum_t FIRST_WORD_FALL_THROUGH;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* ALMOSTEMPTY; // net ID: ALMOSTEMPTY lsb: 0  msb: 0 OUTPUT
		NetFlow* ALMOSTFULL; // net ID: ALMOSTFULL lsb: 0  msb: 0 OUTPUT
		NetFlow* DO; // net ID: DO lsb: 0  msb: 0 OUTPUT
		NetFlow* DOP; // net ID: DOP lsb: 0  msb: 0 OUTPUT
		NetFlow* EMPTY; // net ID: EMPTY lsb: 0  msb: 0 OUTPUT
		NetFlow* FULL; // net ID: FULL lsb: 0  msb: 0 OUTPUT
		NetFlow* RDCOUNT; // net ID: RDCOUNT lsb: 0  msb: 0 OUTPUT
		NetFlow* RDERR; // net ID: RDERR lsb: 0  msb: 0 OUTPUT
		NetFlow* WRCOUNT; // net ID: WRCOUNT lsb: 0  msb: 0 OUTPUT
		NetFlow* WRERR; // net ID: WRERR lsb: 0  msb: 0 OUTPUT
		NetFlow* DI; // net ID: DI lsb: 0  msb: 31 INPUT
		NetFlow* DIP; // net ID: DIP lsb: 0  msb: 3 INPUT
		NetFlow* RDCLK; // net ID: RDCLK lsb: 0  msb: 0 INPUT
		NetFlow* RDEN; // net ID: RDEN lsb: 0  msb: 0 INPUT
		NetFlow* RST; // net ID: RST lsb: 0  msb: 0 INPUT
		NetFlow* WRCLK; // net ID: WRCLK lsb: 0  msb: 0 INPUT
		NetFlow* WREN; // net ID: WREN lsb: 0  msb: 0 INPUT
		
		X_FIFO16(
			const char * name,
			//Verilog Parameters:
			parameter_string_t ALMOST_FULL_OFFSET, // Default: 12'h080
			parameter_string_t ALMOST_EMPTY_OFFSET, // Default: 12'h080
			parameter_string_t DATA_WIDTH, // Default: 36
			parameter_enum_t FIRST_WORD_FALL_THROUGH, // Default: "FALSE"
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* ALMOSTEMPTY, // net ID: ALMOSTEMPTY lsb: 0  msb: 0 OUTPUT
			NetFlow* ALMOSTFULL, // net ID: ALMOSTFULL lsb: 0  msb: 0 OUTPUT
			NetFlow* DO, // net ID: DO lsb: 0  msb: 0 OUTPUT
			NetFlow* DOP, // net ID: DOP lsb: 0  msb: 0 OUTPUT
			NetFlow* EMPTY, // net ID: EMPTY lsb: 0  msb: 0 OUTPUT
			NetFlow* FULL, // net ID: FULL lsb: 0  msb: 0 OUTPUT
			NetFlow* RDCOUNT, // net ID: RDCOUNT lsb: 0  msb: 0 OUTPUT
			NetFlow* RDERR, // net ID: RDERR lsb: 0  msb: 0 OUTPUT
			NetFlow* WRCOUNT, // net ID: WRCOUNT lsb: 0  msb: 0 OUTPUT
			NetFlow* WRERR, // net ID: WRERR lsb: 0  msb: 0 OUTPUT
			NetFlow* DI, // net ID: DI lsb: 0  msb: 31 INPUT
			NetFlow* DIP, // net ID: DIP lsb: 0  msb: 3 INPUT
			NetFlow* RDCLK, // net ID: RDCLK lsb: 0  msb: 0 INPUT
			NetFlow* RDEN, // net ID: RDEN lsb: 0  msb: 0 INPUT
			NetFlow* RST, // net ID: RST lsb: 0  msb: 0 INPUT
			NetFlow* WRCLK, // net ID: WRCLK lsb: 0  msb: 0 INPUT
			NetFlow* WREN // net ID: WREN lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->ALMOST_FULL_OFFSET = ALMOST_FULL_OFFSET; // Default: 12'h080
			this->ALMOST_EMPTY_OFFSET = ALMOST_EMPTY_OFFSET; // Default: 12'h080
			this->DATA_WIDTH = DATA_WIDTH; // Default: 36
			this->FIRST_WORD_FALL_THROUGH = FIRST_WORD_FALL_THROUGH; // Default: "FALSE"
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->ALMOSTEMPTY = ALMOSTEMPTY; // net ID: ALMOSTEMPTY lsb: 0  msb: 0 OUTPUT
			this->ALMOSTFULL = ALMOSTFULL; // net ID: ALMOSTFULL lsb: 0  msb: 0 OUTPUT
			this->DO = DO; // net ID: DO lsb: 0  msb: 0 OUTPUT
			this->DOP = DOP; // net ID: DOP lsb: 0  msb: 0 OUTPUT
			this->EMPTY = EMPTY; // net ID: EMPTY lsb: 0  msb: 0 OUTPUT
			this->FULL = FULL; // net ID: FULL lsb: 0  msb: 0 OUTPUT
			this->RDCOUNT = RDCOUNT; // net ID: RDCOUNT lsb: 0  msb: 0 OUTPUT
			this->RDERR = RDERR; // net ID: RDERR lsb: 0  msb: 0 OUTPUT
			this->WRCOUNT = WRCOUNT; // net ID: WRCOUNT lsb: 0  msb: 0 OUTPUT
			this->WRERR = WRERR; // net ID: WRERR lsb: 0  msb: 0 OUTPUT
			this->DI = DI; // net ID: DI lsb: 0  msb: 31 INPUT
			this->DIP = DIP; // net ID: DIP lsb: 0  msb: 3 INPUT
			this->RDCLK = RDCLK; // net ID: RDCLK lsb: 0  msb: 0 INPUT
			this->RDEN = RDEN; // net ID: RDEN lsb: 0  msb: 0 INPUT
			this->RST = RST; // net ID: RST lsb: 0  msb: 0 INPUT
			this->WRCLK = WRCLK; // net ID: WRCLK lsb: 0  msb: 0 INPUT
			this->WREN = WREN; // net ID: WREN lsb: 0  msb: 0 INPUT
			
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
