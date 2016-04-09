/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_OR8{

		//Verilog Parameters:
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* O; // OUTPUT
		NetFlow* I0; // INPUT
		NetFlow* I1; // INPUT
		NetFlow* I2; // INPUT
		NetFlow* I3; // INPUT
		NetFlow* I4; // INPUT
		NetFlow* I5; // INPUT
		NetFlow* I6; // INPUT
		NetFlow* I7; // INPUT
		
	
		X_OR8(
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* O, // OUTPUT
			NetFlow* I0, // INPUT
			NetFlow* I1, // INPUT
			NetFlow* I2, // INPUT
			NetFlow* I3, // INPUT
			NetFlow* I4, // INPUT
			NetFlow* I5, // INPUT
			NetFlow* I6, // INPUT
			NetFlow* I7 // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->O = O; // OUTPUT
			this->I0 = I0; // INPUT
			this->I1 = I1; // INPUT
			this->I2 = I2; // INPUT
			this->I3 = I3; // INPUT
			this->I4 = I4; // INPUT
			this->I5 = I5; // INPUT
			this->I6 = I6; // INPUT
			this->I7 = I7; // INPUT
		
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
