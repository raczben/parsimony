/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_OUT_FIFO: public Primitive{

		//Verilog Parameters:
		parameter_string_t LOC;
		parameter_string_t ALMOST_EMPTY_VALUE;
		parameter_string_t ALMOST_FULL_VALUE;
		parameter_string_t ARRAY_MODE;
		parameter_enum_t OUTPUT_DISABLE;
		parameter_enum_t SYNCHRONOUS_MODE;
		//Verilog Ports in definition order:
		NetFlow* ALMOSTEMPTY; // net ID: ALMOSTEMPTY lsb: 0  msb: 0 OUTPUT
		NetFlow* ALMOSTFULL; // net ID: ALMOSTFULL lsb: 0  msb: 0 OUTPUT
		NetFlow* EMPTY; // net ID: EMPTY lsb: 0  msb: 0 OUTPUT
		NetFlow* FULL; // net ID: FULL lsb: 0  msb: 0 OUTPUT
		NetFlow* Q0; // net ID: Q0 lsb: 0  msb: 0 OUTPUT
		NetFlow* Q1; // net ID: Q1 lsb: 0  msb: 0 OUTPUT
		NetFlow* Q2; // net ID: Q2 lsb: 0  msb: 0 OUTPUT
		NetFlow* Q3; // net ID: Q3 lsb: 0  msb: 0 OUTPUT
		NetFlow* Q4; // net ID: Q4 lsb: 0  msb: 0 OUTPUT
		NetFlow* Q5; // net ID: Q5 lsb: 0  msb: 0 OUTPUT
		NetFlow* Q6; // net ID: Q6 lsb: 0  msb: 0 OUTPUT
		NetFlow* Q7; // net ID: Q7 lsb: 0  msb: 0 OUTPUT
		NetFlow* Q8; // net ID: Q8 lsb: 0  msb: 0 OUTPUT
		NetFlow* Q9; // net ID: Q9 lsb: 0  msb: 0 OUTPUT
		NetFlow* D0; // net ID: D0 lsb: 0  msb: 7 INPUT
		NetFlow* D1; // net ID: D1 lsb: 0  msb: 7 INPUT
		NetFlow* D2; // net ID: D2 lsb: 0  msb: 7 INPUT
		NetFlow* D3; // net ID: D3 lsb: 0  msb: 7 INPUT
		NetFlow* D4; // net ID: D4 lsb: 0  msb: 7 INPUT
		NetFlow* D5; // net ID: D5 lsb: 0  msb: 7 INPUT
		NetFlow* D6; // net ID: D6 lsb: 0  msb: 7 INPUT
		NetFlow* D7; // net ID: D7 lsb: 0  msb: 7 INPUT
		NetFlow* D8; // net ID: D8 lsb: 0  msb: 7 INPUT
		NetFlow* D9; // net ID: D9 lsb: 0  msb: 7 INPUT
		NetFlow* RDCLK; // net ID: RDCLK lsb: 0  msb: 0 INPUT
		NetFlow* RDEN; // net ID: RDEN lsb: 0  msb: 0 INPUT
		NetFlow* RESET; // net ID: RESET lsb: 0  msb: 0 INPUT
		NetFlow* WRCLK; // net ID: WRCLK lsb: 0  msb: 0 INPUT
		NetFlow* WREN; // net ID: WREN lsb: 0  msb: 0 INPUT
		
		X_OUT_FIFO(
			const char * name,
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_string_t ALMOST_EMPTY_VALUE, // Default: 1
			parameter_string_t ALMOST_FULL_VALUE, // Default: 1
			parameter_string_t ARRAY_MODE, // Default: "ARRAY_MODE_8_X_4"
			parameter_enum_t OUTPUT_DISABLE, // Default: "FALSE"
			parameter_enum_t SYNCHRONOUS_MODE, // Default: "FALSE"
			//Verilog Ports in definition order:
			NetFlow* ALMOSTEMPTY, // net ID: ALMOSTEMPTY lsb: 0  msb: 0 OUTPUT
			NetFlow* ALMOSTFULL, // net ID: ALMOSTFULL lsb: 0  msb: 0 OUTPUT
			NetFlow* EMPTY, // net ID: EMPTY lsb: 0  msb: 0 OUTPUT
			NetFlow* FULL, // net ID: FULL lsb: 0  msb: 0 OUTPUT
			NetFlow* Q0, // net ID: Q0 lsb: 0  msb: 0 OUTPUT
			NetFlow* Q1, // net ID: Q1 lsb: 0  msb: 0 OUTPUT
			NetFlow* Q2, // net ID: Q2 lsb: 0  msb: 0 OUTPUT
			NetFlow* Q3, // net ID: Q3 lsb: 0  msb: 0 OUTPUT
			NetFlow* Q4, // net ID: Q4 lsb: 0  msb: 0 OUTPUT
			NetFlow* Q5, // net ID: Q5 lsb: 0  msb: 0 OUTPUT
			NetFlow* Q6, // net ID: Q6 lsb: 0  msb: 0 OUTPUT
			NetFlow* Q7, // net ID: Q7 lsb: 0  msb: 0 OUTPUT
			NetFlow* Q8, // net ID: Q8 lsb: 0  msb: 0 OUTPUT
			NetFlow* Q9, // net ID: Q9 lsb: 0  msb: 0 OUTPUT
			NetFlow* D0, // net ID: D0 lsb: 0  msb: 7 INPUT
			NetFlow* D1, // net ID: D1 lsb: 0  msb: 7 INPUT
			NetFlow* D2, // net ID: D2 lsb: 0  msb: 7 INPUT
			NetFlow* D3, // net ID: D3 lsb: 0  msb: 7 INPUT
			NetFlow* D4, // net ID: D4 lsb: 0  msb: 7 INPUT
			NetFlow* D5, // net ID: D5 lsb: 0  msb: 7 INPUT
			NetFlow* D6, // net ID: D6 lsb: 0  msb: 7 INPUT
			NetFlow* D7, // net ID: D7 lsb: 0  msb: 7 INPUT
			NetFlow* D8, // net ID: D8 lsb: 0  msb: 7 INPUT
			NetFlow* D9, // net ID: D9 lsb: 0  msb: 7 INPUT
			NetFlow* RDCLK, // net ID: RDCLK lsb: 0  msb: 0 INPUT
			NetFlow* RDEN, // net ID: RDEN lsb: 0  msb: 0 INPUT
			NetFlow* RESET, // net ID: RESET lsb: 0  msb: 0 INPUT
			NetFlow* WRCLK, // net ID: WRCLK lsb: 0  msb: 0 INPUT
			NetFlow* WREN // net ID: WREN lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			this->ALMOST_EMPTY_VALUE = ALMOST_EMPTY_VALUE; // Default: 1
			this->ALMOST_FULL_VALUE = ALMOST_FULL_VALUE; // Default: 1
			this->ARRAY_MODE = ARRAY_MODE; // Default: "ARRAY_MODE_8_X_4"
			this->OUTPUT_DISABLE = OUTPUT_DISABLE; // Default: "FALSE"
			this->SYNCHRONOUS_MODE = SYNCHRONOUS_MODE; // Default: "FALSE"
			//Verilog Ports in definition order:
			this->ALMOSTEMPTY = ALMOSTEMPTY; // net ID: ALMOSTEMPTY lsb: 0  msb: 0 OUTPUT
			this->ALMOSTFULL = ALMOSTFULL; // net ID: ALMOSTFULL lsb: 0  msb: 0 OUTPUT
			this->EMPTY = EMPTY; // net ID: EMPTY lsb: 0  msb: 0 OUTPUT
			this->FULL = FULL; // net ID: FULL lsb: 0  msb: 0 OUTPUT
			this->Q0 = Q0; // net ID: Q0 lsb: 0  msb: 0 OUTPUT
			this->Q1 = Q1; // net ID: Q1 lsb: 0  msb: 0 OUTPUT
			this->Q2 = Q2; // net ID: Q2 lsb: 0  msb: 0 OUTPUT
			this->Q3 = Q3; // net ID: Q3 lsb: 0  msb: 0 OUTPUT
			this->Q4 = Q4; // net ID: Q4 lsb: 0  msb: 0 OUTPUT
			this->Q5 = Q5; // net ID: Q5 lsb: 0  msb: 0 OUTPUT
			this->Q6 = Q6; // net ID: Q6 lsb: 0  msb: 0 OUTPUT
			this->Q7 = Q7; // net ID: Q7 lsb: 0  msb: 0 OUTPUT
			this->Q8 = Q8; // net ID: Q8 lsb: 0  msb: 0 OUTPUT
			this->Q9 = Q9; // net ID: Q9 lsb: 0  msb: 0 OUTPUT
			this->D0 = D0; // net ID: D0 lsb: 0  msb: 7 INPUT
			this->D1 = D1; // net ID: D1 lsb: 0  msb: 7 INPUT
			this->D2 = D2; // net ID: D2 lsb: 0  msb: 7 INPUT
			this->D3 = D3; // net ID: D3 lsb: 0  msb: 7 INPUT
			this->D4 = D4; // net ID: D4 lsb: 0  msb: 7 INPUT
			this->D5 = D5; // net ID: D5 lsb: 0  msb: 7 INPUT
			this->D6 = D6; // net ID: D6 lsb: 0  msb: 7 INPUT
			this->D7 = D7; // net ID: D7 lsb: 0  msb: 7 INPUT
			this->D8 = D8; // net ID: D8 lsb: 0  msb: 7 INPUT
			this->D9 = D9; // net ID: D9 lsb: 0  msb: 7 INPUT
			this->RDCLK = RDCLK; // net ID: RDCLK lsb: 0  msb: 0 INPUT
			this->RDEN = RDEN; // net ID: RDEN lsb: 0  msb: 0 INPUT
			this->RESET = RESET; // net ID: RESET lsb: 0  msb: 0 INPUT
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
