/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class selfheal_oserdese1_vlog{

		//Verilog Parameters:
		parameter_int_t FFD;
		parameter_int_t FFCD;
		parameter_int_t MXD;
		parameter_int_t MXR1;
		//Verilog Ports in definition order:
		NetFlow* dq3; // INPUT
		NetFlow* dq2; // INPUT
		NetFlow* dq1; // INPUT
		NetFlow* dq0; // INPUT
		NetFlow* CLKDIV; // INPUT
		NetFlow* srint; // INPUT
		NetFlow* rst; // INPUT
		NetFlow* SHO; // OUTPUT
		
	
		selfheal_oserdese1_vlog(
			//Verilog Parameters:
			parameter_int_t FFD, // Default: 10
			parameter_int_t FFCD, // Default: 10
			parameter_int_t MXD, // Default: 10
			parameter_int_t MXR1, // Default: 10
			//Verilog Ports in definition order:
			NetFlow* dq3, // INPUT
			NetFlow* dq2, // INPUT
			NetFlow* dq1, // INPUT
			NetFlow* dq0, // INPUT
			NetFlow* CLKDIV, // INPUT
			NetFlow* srint, // INPUT
			NetFlow* rst, // INPUT
			NetFlow* SHO // OUTPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->FFD = FFD; // Default: 10
			this->FFCD = FFCD; // Default: 10
			this->MXD = MXD; // Default: 10
			this->MXR1 = MXR1; // Default: 10
			//Verilog Ports in definition order:
			this->dq3 = dq3; // INPUT
			this->dq2 = dq2; // INPUT
			this->dq1 = dq1; // INPUT
			this->dq0 = dq0; // INPUT
			this->CLKDIV = CLKDIV; // INPUT
			this->srint = srint; // INPUT
			this->rst = rst; // INPUT
			this->SHO = SHO; // OUTPUT
		
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
