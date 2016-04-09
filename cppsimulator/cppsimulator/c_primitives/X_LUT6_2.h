/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_LUT6_2{

		//Verilog Parameters:
		parameter_int_t INIT;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* O5; // OUTPUT
		NetFlow* O6; // OUTPUT
		NetFlow* I0; // INPUT
		NetFlow* I1; // INPUT
		NetFlow* I2; // INPUT
		NetFlow* I3; // INPUT
		NetFlow* I4; // INPUT
		NetFlow* I5; // INPUT
		
	
		X_LUT6_2(
			//Verilog Parameters:
			parameter_int_t INIT, // Default: 64'h0000000000000000
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* O5, // OUTPUT
			NetFlow* O6, // OUTPUT
			NetFlow* I0, // INPUT
			NetFlow* I1, // INPUT
			NetFlow* I2, // INPUT
			NetFlow* I3, // INPUT
			NetFlow* I4, // INPUT
			NetFlow* I5 // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->INIT = INIT; // Default: 64'h0000000000000000
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->O5 = O5; // OUTPUT
			this->O6 = O6; // OUTPUT
			this->I0 = I0; // INPUT
			this->I1 = I1; // INPUT
			this->I2 = I2; // INPUT
			this->I3 = I3; // INPUT
			this->I4 = I4; // INPUT
			this->I5 = I5; // INPUT
		
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
