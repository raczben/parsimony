/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_ODDR2{

		//Verilog Parameters:
		parameter_string_t DDR_ALIGNMENT;
		parameter_int_t INIT;
		parameter_string_t LOC;
		parameter_string_t SRTYPE;
		//Verilog Ports in definition order:
		NetFlow* Q; // OUTPUT
		NetFlow* C0; // INPUT
		NetFlow* C1; // INPUT
		NetFlow* CE; // INPUT
		NetFlow* D0; // INPUT
		NetFlow* D1; // INPUT
		NetFlow* R; // INPUT
		NetFlow* S; // INPUT
		
	
		X_ODDR2(
			//Verilog Parameters:
			parameter_string_t DDR_ALIGNMENT, // Default: "NONE"
			parameter_int_t INIT, // Default: 1'b0
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_string_t SRTYPE, // Default: "SYNC"
			//Verilog Ports in definition order:
			NetFlow* Q, // OUTPUT
			NetFlow* C0, // INPUT
			NetFlow* C1, // INPUT
			NetFlow* CE, // INPUT
			NetFlow* D0, // INPUT
			NetFlow* D1, // INPUT
			NetFlow* R, // INPUT
			NetFlow* S // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->DDR_ALIGNMENT = DDR_ALIGNMENT; // Default: "NONE"
			this->INIT = INIT; // Default: 1'b0
			this->LOC = LOC; // Default: "UNPLACED"
			this->SRTYPE = SRTYPE; // Default: "SYNC"
			//Verilog Ports in definition order:
			this->Q = Q; // OUTPUT
			this->C0 = C0; // INPUT
			this->C1 = C1; // INPUT
			this->CE = CE; // INPUT
			this->D0 = D0; // INPUT
			this->D1 = D1; // INPUT
			this->R = R; // INPUT
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
