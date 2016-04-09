/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_SIM_CONFIG_V5{

		//Verilog Parameters:
		parameter_int_t DEVICE_ID;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* BUSY; // OUTPUT
		NetFlow* CSOB; // OUTPUT
		NetFlow* DONE; // INOUT
		NetFlow* CCLK; // INPUT
		NetFlow* CSB; // INPUT
		NetFlow* D; // INOUT
		NetFlow* DCMLOCK; // INPUT
		NetFlow* INITB; // INOUT
		NetFlow* M; // INPUT
		NetFlow* PROGB; // INPUT
		NetFlow* RDWRB; // INPUT
		
	
		X_SIM_CONFIG_V5(
			//Verilog Parameters:
			parameter_int_t DEVICE_ID, // Default: 32'h0
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* BUSY, // OUTPUT
			NetFlow* CSOB, // OUTPUT
			NetFlow* DONE, // INOUT
			NetFlow* CCLK, // INPUT
			NetFlow* CSB, // INPUT
			NetFlow* D, // INOUT
			NetFlow* DCMLOCK, // INPUT
			NetFlow* INITB, // INOUT
			NetFlow* M, // INPUT
			NetFlow* PROGB, // INPUT
			NetFlow* RDWRB // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->DEVICE_ID = DEVICE_ID; // Default: 32'h0
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->BUSY = BUSY; // OUTPUT
			this->CSOB = CSOB; // OUTPUT
			this->DONE = DONE; // INOUT
			this->CCLK = CCLK; // INPUT
			this->CSB = CSB; // INPUT
			this->D = D; // INOUT
			this->DCMLOCK = DCMLOCK; // INPUT
			this->INITB = INITB; // INOUT
			this->M = M; // INPUT
			this->PROGB = PROGB; // INPUT
			this->RDWRB = RDWRB; // INPUT
		
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
