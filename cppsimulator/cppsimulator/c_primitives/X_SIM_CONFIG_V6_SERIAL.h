/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_SIM_CONFIG_V6_SERIAL{

		//Verilog Parameters:
		parameter_int_t DEVICE_ID;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* DONE; // INOUT
		NetFlow* DOUT; // OUTPUT
		NetFlow* CCLK; // INPUT
		NetFlow* DIN; // INPUT
		NetFlow* INITB; // INOUT
		NetFlow* M; // INPUT
		NetFlow* PROGB; // INPUT
		
	
		X_SIM_CONFIG_V6_SERIAL(
			//Verilog Parameters:
			parameter_int_t DEVICE_ID, // Default: 32'h0
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* DONE, // INOUT
			NetFlow* DOUT, // OUTPUT
			NetFlow* CCLK, // INPUT
			NetFlow* DIN, // INPUT
			NetFlow* INITB, // INOUT
			NetFlow* M, // INPUT
			NetFlow* PROGB // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->DEVICE_ID = DEVICE_ID; // Default: 32'h0
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->DONE = DONE; // INOUT
			this->DOUT = DOUT; // OUTPUT
			this->CCLK = CCLK; // INPUT
			this->DIN = DIN; // INPUT
			this->INITB = INITB; // INOUT
			this->M = M; // INPUT
			this->PROGB = PROGB; // INPUT
		
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
