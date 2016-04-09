/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_IDDR2{

		//Verilog Parameters:
		parameter_string_t DDR_ALIGNMENT;
		parameter_int_t INIT_Q0;
		parameter_int_t INIT_Q1;
		parameter_string_t LOC;
		parameter_string_t SRTYPE;
		//Verilog Ports in definition order:
		NetFlow* Q0; // OUTPUT
		NetFlow* Q1; // OUTPUT
		NetFlow* C0; // INPUT
		NetFlow* C1; // INPUT
		NetFlow* CE; // INPUT
		NetFlow* D; // INPUT
		NetFlow* R; // INPUT
		NetFlow* S; // INPUT
		
	
		X_IDDR2(
			//Verilog Parameters:
			parameter_string_t DDR_ALIGNMENT, // Default: "NONE"
			parameter_int_t INIT_Q0, // Default: 1'b0
			parameter_int_t INIT_Q1, // Default: 1'b0
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_string_t SRTYPE, // Default: "SYNC"
			//Verilog Ports in definition order:
			NetFlow* Q0, // OUTPUT
			NetFlow* Q1, // OUTPUT
			NetFlow* C0, // INPUT
			NetFlow* C1, // INPUT
			NetFlow* CE, // INPUT
			NetFlow* D, // INPUT
			NetFlow* R, // INPUT
			NetFlow* S // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->DDR_ALIGNMENT = DDR_ALIGNMENT; // Default: "NONE"
			this->INIT_Q0 = INIT_Q0; // Default: 1'b0
			this->INIT_Q1 = INIT_Q1; // Default: 1'b0
			this->LOC = LOC; // Default: "UNPLACED"
			this->SRTYPE = SRTYPE; // Default: "SYNC"
			//Verilog Ports in definition order:
			this->Q0 = Q0; // OUTPUT
			this->Q1 = Q1; // OUTPUT
			this->C0 = C0; // INPUT
			this->C1 = C1; // INPUT
			this->CE = CE; // INPUT
			this->D = D; // INPUT
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
