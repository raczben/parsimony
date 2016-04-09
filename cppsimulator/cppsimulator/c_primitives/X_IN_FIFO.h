/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_IN_FIFO{

		//Verilog Parameters:
		parameter_string_t LOC;
		parameter_int_t ALMOST_EMPTY_VALUE;
		parameter_int_t ALMOST_FULL_VALUE;
		parameter_string_t ARRAY_MODE;
		parameter_enum_t SYNCHRONOUS_MODE;
		//Verilog Ports in definition order:
		NetFlow* ALMOSTEMPTY; // OUTPUT
		NetFlow* ALMOSTFULL; // OUTPUT
		NetFlow* EMPTY; // OUTPUT
		NetFlow* FULL; // OUTPUT
		NetFlow* Q0; // OUTPUT
		NetFlow* Q1; // OUTPUT
		NetFlow* Q2; // OUTPUT
		NetFlow* Q3; // OUTPUT
		NetFlow* Q4; // OUTPUT
		NetFlow* Q5; // OUTPUT
		NetFlow* Q6; // OUTPUT
		NetFlow* Q7; // OUTPUT
		NetFlow* Q8; // OUTPUT
		NetFlow* Q9; // OUTPUT
		NetFlow* D0; // INPUT
		NetFlow* D1; // INPUT
		NetFlow* D2; // INPUT
		NetFlow* D3; // INPUT
		NetFlow* D4; // INPUT
		NetFlow* D5; // INPUT
		NetFlow* D6; // INPUT
		NetFlow* D7; // INPUT
		NetFlow* D8; // INPUT
		NetFlow* D9; // INPUT
		NetFlow* RDCLK; // INPUT
		NetFlow* RDEN; // INPUT
		NetFlow* RESET; // INPUT
		NetFlow* WRCLK; // INPUT
		NetFlow* WREN; // INPUT
		
	
		X_IN_FIFO(
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_int_t ALMOST_EMPTY_VALUE, // Default: 1
			parameter_int_t ALMOST_FULL_VALUE, // Default: 1
			parameter_string_t ARRAY_MODE, // Default: "ARRAY_MODE_4_X_8"
			parameter_enum_t SYNCHRONOUS_MODE, // Default: "FALSE"
			//Verilog Ports in definition order:
			NetFlow* ALMOSTEMPTY, // OUTPUT
			NetFlow* ALMOSTFULL, // OUTPUT
			NetFlow* EMPTY, // OUTPUT
			NetFlow* FULL, // OUTPUT
			NetFlow* Q0, // OUTPUT
			NetFlow* Q1, // OUTPUT
			NetFlow* Q2, // OUTPUT
			NetFlow* Q3, // OUTPUT
			NetFlow* Q4, // OUTPUT
			NetFlow* Q5, // OUTPUT
			NetFlow* Q6, // OUTPUT
			NetFlow* Q7, // OUTPUT
			NetFlow* Q8, // OUTPUT
			NetFlow* Q9, // OUTPUT
			NetFlow* D0, // INPUT
			NetFlow* D1, // INPUT
			NetFlow* D2, // INPUT
			NetFlow* D3, // INPUT
			NetFlow* D4, // INPUT
			NetFlow* D5, // INPUT
			NetFlow* D6, // INPUT
			NetFlow* D7, // INPUT
			NetFlow* D8, // INPUT
			NetFlow* D9, // INPUT
			NetFlow* RDCLK, // INPUT
			NetFlow* RDEN, // INPUT
			NetFlow* RESET, // INPUT
			NetFlow* WRCLK, // INPUT
			NetFlow* WREN // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			this->ALMOST_EMPTY_VALUE = ALMOST_EMPTY_VALUE; // Default: 1
			this->ALMOST_FULL_VALUE = ALMOST_FULL_VALUE; // Default: 1
			this->ARRAY_MODE = ARRAY_MODE; // Default: "ARRAY_MODE_4_X_8"
			this->SYNCHRONOUS_MODE = SYNCHRONOUS_MODE; // Default: "FALSE"
			//Verilog Ports in definition order:
			this->ALMOSTEMPTY = ALMOSTEMPTY; // OUTPUT
			this->ALMOSTFULL = ALMOSTFULL; // OUTPUT
			this->EMPTY = EMPTY; // OUTPUT
			this->FULL = FULL; // OUTPUT
			this->Q0 = Q0; // OUTPUT
			this->Q1 = Q1; // OUTPUT
			this->Q2 = Q2; // OUTPUT
			this->Q3 = Q3; // OUTPUT
			this->Q4 = Q4; // OUTPUT
			this->Q5 = Q5; // OUTPUT
			this->Q6 = Q6; // OUTPUT
			this->Q7 = Q7; // OUTPUT
			this->Q8 = Q8; // OUTPUT
			this->Q9 = Q9; // OUTPUT
			this->D0 = D0; // INPUT
			this->D1 = D1; // INPUT
			this->D2 = D2; // INPUT
			this->D3 = D3; // INPUT
			this->D4 = D4; // INPUT
			this->D5 = D5; // INPUT
			this->D6 = D6; // INPUT
			this->D7 = D7; // INPUT
			this->D8 = D8; // INPUT
			this->D9 = D9; // INPUT
			this->RDCLK = RDCLK; // INPUT
			this->RDEN = RDEN; // INPUT
			this->RESET = RESET; // INPUT
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
