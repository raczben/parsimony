/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_BUFIO2{

		//Verilog Parameters:
		parameter_enum_t DIVIDE_BYPASS;
		parameter_int_t DIVIDE;
		parameter_enum_t I_INVERT;
		parameter_enum_t USE_DOUBLER;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* DIVCLK; // OUTPUT
		NetFlow* IOCLK; // OUTPUT
		NetFlow* SERDESSTROBE; // OUTPUT
		NetFlow* I; // INPUT
		
	
		X_BUFIO2(
			//Verilog Parameters:
			parameter_enum_t DIVIDE_BYPASS, // Default: "TRUE"
			parameter_int_t DIVIDE, // Default: 1
			parameter_enum_t I_INVERT, // Default: "FALSE"
			parameter_enum_t USE_DOUBLER, // Default: "FALSE"
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* DIVCLK, // OUTPUT
			NetFlow* IOCLK, // OUTPUT
			NetFlow* SERDESSTROBE, // OUTPUT
			NetFlow* I // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->DIVIDE_BYPASS = DIVIDE_BYPASS; // Default: "TRUE"
			this->DIVIDE = DIVIDE; // Default: 1
			this->I_INVERT = I_INVERT; // Default: "FALSE"
			this->USE_DOUBLER = USE_DOUBLER; // Default: "FALSE"
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->DIVCLK = DIVCLK; // OUTPUT
			this->IOCLK = IOCLK; // OUTPUT
			this->SERDESSTROBE = SERDESSTROBE; // OUTPUT
			this->I = I; // INPUT
		
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
