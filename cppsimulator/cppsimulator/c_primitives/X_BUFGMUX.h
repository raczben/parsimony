/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_BUFGMUX{

		//Verilog Parameters:
		parameter_string_t CLK_SEL_TYPE;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* O; // OUTPUT
		NetFlow* I0; // INPUT
		NetFlow* I1; // INPUT
		NetFlow* S; // INPUT
		
	
		X_BUFGMUX(
			//Verilog Parameters:
			parameter_string_t CLK_SEL_TYPE, // Default: "SYNC"
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* O, // OUTPUT
			NetFlow* I0, // INPUT
			NetFlow* I1, // INPUT
			NetFlow* S // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->CLK_SEL_TYPE = CLK_SEL_TYPE; // Default: "SYNC"
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->O = O; // OUTPUT
			this->I0 = I0; // INPUT
			this->I1 = I1; // INPUT
			this->S = S; // INPUT
		
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
