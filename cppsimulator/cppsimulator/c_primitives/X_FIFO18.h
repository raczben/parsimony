/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_FIFO18{

		//Verilog Parameters:
		parameter_int_t ALMOST_EMPTY_OFFSET;
		parameter_int_t ALMOST_FULL_OFFSET;
		parameter_int_t DATA_WIDTH;
		parameter_int_t DO_REG;
		parameter_enum_t EN_SYN;
		parameter_enum_t FIRST_WORD_FALL_THROUGH;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* ALMOSTEMPTY; // OUTPUT
		NetFlow* ALMOSTFULL; // OUTPUT
		NetFlow* DO; // OUTPUT
		NetFlow* DOP; // OUTPUT
		NetFlow* EMPTY; // OUTPUT
		NetFlow* FULL; // OUTPUT
		NetFlow* RDCOUNT; // OUTPUT
		NetFlow* RDERR; // OUTPUT
		NetFlow* WRCOUNT; // OUTPUT
		NetFlow* WRERR; // OUTPUT
		NetFlow* DI; // INPUT
		NetFlow* DIP; // INPUT
		NetFlow* RDCLK; // INPUT
		NetFlow* RDEN; // INPUT
		NetFlow* RST; // INPUT
		NetFlow* WRCLK; // INPUT
		NetFlow* WREN; // INPUT
		
	
		X_FIFO18(
			//Verilog Parameters:
			parameter_int_t ALMOST_EMPTY_OFFSET, // Default: 12'h080
			parameter_int_t ALMOST_FULL_OFFSET, // Default: 12'h080
			parameter_int_t DATA_WIDTH, // Default: 4
			parameter_int_t DO_REG, // Default: 1
			parameter_enum_t EN_SYN, // Default: "FALSE"
			parameter_enum_t FIRST_WORD_FALL_THROUGH, // Default: "FALSE"
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* ALMOSTEMPTY, // OUTPUT
			NetFlow* ALMOSTFULL, // OUTPUT
			NetFlow* DO, // OUTPUT
			NetFlow* DOP, // OUTPUT
			NetFlow* EMPTY, // OUTPUT
			NetFlow* FULL, // OUTPUT
			NetFlow* RDCOUNT, // OUTPUT
			NetFlow* RDERR, // OUTPUT
			NetFlow* WRCOUNT, // OUTPUT
			NetFlow* WRERR, // OUTPUT
			NetFlow* DI, // INPUT
			NetFlow* DIP, // INPUT
			NetFlow* RDCLK, // INPUT
			NetFlow* RDEN, // INPUT
			NetFlow* RST, // INPUT
			NetFlow* WRCLK, // INPUT
			NetFlow* WREN // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->ALMOST_EMPTY_OFFSET = ALMOST_EMPTY_OFFSET; // Default: 12'h080
			this->ALMOST_FULL_OFFSET = ALMOST_FULL_OFFSET; // Default: 12'h080
			this->DATA_WIDTH = DATA_WIDTH; // Default: 4
			this->DO_REG = DO_REG; // Default: 1
			this->EN_SYN = EN_SYN; // Default: "FALSE"
			this->FIRST_WORD_FALL_THROUGH = FIRST_WORD_FALL_THROUGH; // Default: "FALSE"
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->ALMOSTEMPTY = ALMOSTEMPTY; // OUTPUT
			this->ALMOSTFULL = ALMOSTFULL; // OUTPUT
			this->DO = DO; // OUTPUT
			this->DOP = DOP; // OUTPUT
			this->EMPTY = EMPTY; // OUTPUT
			this->FULL = FULL; // OUTPUT
			this->RDCOUNT = RDCOUNT; // OUTPUT
			this->RDERR = RDERR; // OUTPUT
			this->WRCOUNT = WRCOUNT; // OUTPUT
			this->WRERR = WRERR; // OUTPUT
			this->DI = DI; // INPUT
			this->DIP = DIP; // INPUT
			this->RDCLK = RDCLK; // INPUT
			this->RDEN = RDEN; // INPUT
			this->RST = RST; // INPUT
			this->WRCLK = WRCLK; // INPUT
			this->WREN = WREN; // INPUT
		
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
