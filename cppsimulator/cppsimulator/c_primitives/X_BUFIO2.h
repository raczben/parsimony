/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_BUFIO2: public Primitive{

		//Verilog Parameters:
		parameter_enum_t DIVIDE_BYPASS;
		parameter_string_t DIVIDE;
		parameter_enum_t I_INVERT;
		parameter_enum_t USE_DOUBLER;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* DIVCLK; // net ID: DIVCLK lsb: 0  msb: 0 OUTPUT
		NetFlow* IOCLK; // net ID: IOCLK lsb: 0  msb: 0 OUTPUT
		NetFlow* SERDESSTROBE; // net ID: SERDESSTROBE lsb: 0  msb: 0 OUTPUT
		NetFlow* I; // net ID: I lsb: 0  msb: 0 INPUT
		
		X_BUFIO2(
			const char * name,
			//Verilog Parameters:
			parameter_enum_t DIVIDE_BYPASS, // Default: "TRUE"
			parameter_string_t DIVIDE, // Default: 1
			parameter_enum_t I_INVERT, // Default: "FALSE"
			parameter_enum_t USE_DOUBLER, // Default: "FALSE"
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* DIVCLK, // net ID: DIVCLK lsb: 0  msb: 0 OUTPUT
			NetFlow* IOCLK, // net ID: IOCLK lsb: 0  msb: 0 OUTPUT
			NetFlow* SERDESSTROBE, // net ID: SERDESSTROBE lsb: 0  msb: 0 OUTPUT
			NetFlow* I // net ID: I lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->DIVIDE_BYPASS = DIVIDE_BYPASS; // Default: "TRUE"
			this->DIVIDE = DIVIDE; // Default: 1
			this->I_INVERT = I_INVERT; // Default: "FALSE"
			this->USE_DOUBLER = USE_DOUBLER; // Default: "FALSE"
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->DIVCLK = DIVCLK; // net ID: DIVCLK lsb: 0  msb: 0 OUTPUT
			this->IOCLK = IOCLK; // net ID: IOCLK lsb: 0  msb: 0 OUTPUT
			this->SERDESSTROBE = SERDESSTROBE; // net ID: SERDESSTROBE lsb: 0  msb: 0 OUTPUT
			this->I = I; // net ID: I lsb: 0  msb: 0 INPUT
			
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
