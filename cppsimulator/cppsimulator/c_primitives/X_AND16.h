/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_AND16{

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
		NetFlow* I8; // INPUT
		NetFlow* I9; // INPUT
		NetFlow* I10; // INPUT
		NetFlow* I11; // INPUT
		NetFlow* I12; // INPUT
		NetFlow* I13; // INPUT
		NetFlow* I14; // INPUT
		NetFlow* I15; // INPUT
		
	
		X_AND16(
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
			NetFlow* I7, // INPUT
			NetFlow* I8, // INPUT
			NetFlow* I9, // INPUT
			NetFlow* I10, // INPUT
			NetFlow* I11, // INPUT
			NetFlow* I12, // INPUT
			NetFlow* I13, // INPUT
			NetFlow* I14, // INPUT
			NetFlow* I15 // INPUT
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
			this->I8 = I8; // INPUT
			this->I9 = I9; // INPUT
			this->I10 = I10; // INPUT
			this->I11 = I11; // INPUT
			this->I12 = I12; // INPUT
			this->I13 = I13; // INPUT
			this->I14 = I14; // INPUT
			this->I15 = I15; // INPUT
		
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
