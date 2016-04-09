/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_SIM_CONFIG_S6{

		//Verilog Parameters:
		parameter_int_t cfg_Tprog;
		parameter_int_t cfg_Tpl;
		parameter_int_t DEVICE_ID;
		parameter_enum_t ICAP_SUPPORT;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* BUSY; // OUTPUT
		NetFlow* CSOB; // OUTPUT
		NetFlow* DONE; // INOUT
		NetFlow* CCLK; // INPUT
		NetFlow* D; // INOUT
		NetFlow* CSIB; // INPUT
		NetFlow* INITB; // INOUT
		NetFlow* M; // INPUT
		NetFlow* PROGB; // INPUT
		NetFlow* RDWRB; // INPUT
		
	
		X_SIM_CONFIG_S6(
			//Verilog Parameters:
			parameter_int_t cfg_Tprog, // Default: 500000
			parameter_int_t cfg_Tpl, // Default: 5000000
			parameter_int_t DEVICE_ID, // Default: 32'h0
			parameter_enum_t ICAP_SUPPORT, // Default: "FALSE"
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* BUSY, // OUTPUT
			NetFlow* CSOB, // OUTPUT
			NetFlow* DONE, // INOUT
			NetFlow* CCLK, // INPUT
			NetFlow* D, // INOUT
			NetFlow* CSIB, // INPUT
			NetFlow* INITB, // INOUT
			NetFlow* M, // INPUT
			NetFlow* PROGB, // INPUT
			NetFlow* RDWRB // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->cfg_Tprog = cfg_Tprog; // Default: 500000
			this->cfg_Tpl = cfg_Tpl; // Default: 5000000
			this->DEVICE_ID = DEVICE_ID; // Default: 32'h0
			this->ICAP_SUPPORT = ICAP_SUPPORT; // Default: "FALSE"
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->BUSY = BUSY; // OUTPUT
			this->CSOB = CSOB; // OUTPUT
			this->DONE = DONE; // INOUT
			this->CCLK = CCLK; // INPUT
			this->D = D; // INOUT
			this->CSIB = CSIB; // INPUT
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
