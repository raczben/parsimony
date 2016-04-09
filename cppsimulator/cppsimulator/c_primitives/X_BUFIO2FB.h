/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_BUFIO2FB{

		//Verilog Parameters:
		parameter_enum_t DIVIDE_BYPASS;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* O; // OUTPUT
		NetFlow* I; // INPUT
		
	
		X_BUFIO2FB(
			//Verilog Parameters:
			parameter_enum_t DIVIDE_BYPASS, // Default: "TRUE"
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* O, // OUTPUT
			NetFlow* I // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->DIVIDE_BYPASS = DIVIDE_BYPASS; // Default: "TRUE"
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->O = O; // OUTPUT
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
