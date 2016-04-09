/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_RAMD16{

		//Verilog Parameters:
		parameter_int_t INIT;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* O; // OUTPUT
		NetFlow* CLK; // INPUT
		NetFlow* I; // INPUT
		NetFlow* RADR0; // INPUT
		NetFlow* RADR1; // INPUT
		NetFlow* RADR2; // INPUT
		NetFlow* RADR3; // INPUT
		NetFlow* WADR0; // INPUT
		NetFlow* WADR1; // INPUT
		NetFlow* WADR2; // INPUT
		NetFlow* WADR3; // INPUT
		NetFlow* WE; // INPUT
		
	
		X_RAMD16(
			//Verilog Parameters:
			parameter_int_t INIT, // Default: 16'h0000
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* O, // OUTPUT
			NetFlow* CLK, // INPUT
			NetFlow* I, // INPUT
			NetFlow* RADR0, // INPUT
			NetFlow* RADR1, // INPUT
			NetFlow* RADR2, // INPUT
			NetFlow* RADR3, // INPUT
			NetFlow* WADR0, // INPUT
			NetFlow* WADR1, // INPUT
			NetFlow* WADR2, // INPUT
			NetFlow* WADR3, // INPUT
			NetFlow* WE // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->INIT = INIT; // Default: 16'h0000
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->O = O; // OUTPUT
			this->CLK = CLK; // INPUT
			this->I = I; // INPUT
			this->RADR0 = RADR0; // INPUT
			this->RADR1 = RADR1; // INPUT
			this->RADR2 = RADR2; // INPUT
			this->RADR3 = RADR3; // INPUT
			this->WADR0 = WADR0; // INPUT
			this->WADR1 = WADR1; // INPUT
			this->WADR2 = WADR2; // INPUT
			this->WADR3 = WADR3; // INPUT
			this->WE = WE; // INPUT
		
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
