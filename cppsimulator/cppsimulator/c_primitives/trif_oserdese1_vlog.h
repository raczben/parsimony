/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class trif_oserdese1_vlog{

		//Verilog Parameters:
		parameter_int_t ffd;
		parameter_int_t mxd;
		//Verilog Ports in definition order:
		NetFlow* T1; // INPUT
		NetFlow* T2; // INPUT
		NetFlow* T3; // INPUT
		NetFlow* T4; // INPUT
		NetFlow* load; // INPUT
		NetFlow* C; // INPUT
		NetFlow* CLKDIV; // INPUT
		NetFlow* SR; // INPUT
		NetFlow* TCE; // INPUT
		NetFlow* DATA_RATE_TQ; // INPUT
		NetFlow* TRISTATE_WIDTH; // INPUT
		NetFlow* INIT_TQ; // INPUT
		NetFlow* SRVAL_TQ; // INPUT
		NetFlow* data1; // OUTPUT
		NetFlow* data2; // OUTPUT
		
	
		trif_oserdese1_vlog(
			//Verilog Parameters:
			parameter_int_t ffd, // Default: 1
			parameter_int_t mxd, // Default: 1
			//Verilog Ports in definition order:
			NetFlow* T1, // INPUT
			NetFlow* T2, // INPUT
			NetFlow* T3, // INPUT
			NetFlow* T4, // INPUT
			NetFlow* load, // INPUT
			NetFlow* C, // INPUT
			NetFlow* CLKDIV, // INPUT
			NetFlow* SR, // INPUT
			NetFlow* TCE, // INPUT
			NetFlow* DATA_RATE_TQ, // INPUT
			NetFlow* TRISTATE_WIDTH, // INPUT
			NetFlow* INIT_TQ, // INPUT
			NetFlow* SRVAL_TQ, // INPUT
			NetFlow* data1, // OUTPUT
			NetFlow* data2 // OUTPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->ffd = ffd; // Default: 1
			this->mxd = mxd; // Default: 1
			//Verilog Ports in definition order:
			this->T1 = T1; // INPUT
			this->T2 = T2; // INPUT
			this->T3 = T3; // INPUT
			this->T4 = T4; // INPUT
			this->load = load; // INPUT
			this->C = C; // INPUT
			this->CLKDIV = CLKDIV; // INPUT
			this->SR = SR; // INPUT
			this->TCE = TCE; // INPUT
			this->DATA_RATE_TQ = DATA_RATE_TQ; // INPUT
			this->TRISTATE_WIDTH = TRISTATE_WIDTH; // INPUT
			this->INIT_TQ = INIT_TQ; // INPUT
			this->SRVAL_TQ = SRVAL_TQ; // INPUT
			this->data1 = data1; // OUTPUT
			this->data2 = data2; // OUTPUT
		
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
