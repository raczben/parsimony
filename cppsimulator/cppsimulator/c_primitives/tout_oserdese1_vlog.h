/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class tout_oserdese1_vlog{

		//Verilog Parameters:
		parameter_int_t ffd;
		parameter_int_t mxd;
		//Verilog Ports in definition order:
		NetFlow* data1; // INPUT
		NetFlow* data2; // INPUT
		NetFlow* CLK; // INPUT
		NetFlow* BUFO; // INPUT
		NetFlow* SR; // INPUT
		NetFlow* TCE; // INPUT
		NetFlow* DATA_RATE_TQ; // INPUT
		NetFlow* TRISTATE_WIDTH; // INPUT
		NetFlow* INIT_TQ; // INPUT
		NetFlow* SRVAL_TQ; // INPUT
		NetFlow* TQ; // OUTPUT
		NetFlow* DDR3_MODE; // INPUT
		
	
		tout_oserdese1_vlog(
			//Verilog Parameters:
			parameter_int_t ffd, // Default: 1
			parameter_int_t mxd, // Default: 1
			//Verilog Ports in definition order:
			NetFlow* data1, // INPUT
			NetFlow* data2, // INPUT
			NetFlow* CLK, // INPUT
			NetFlow* BUFO, // INPUT
			NetFlow* SR, // INPUT
			NetFlow* TCE, // INPUT
			NetFlow* DATA_RATE_TQ, // INPUT
			NetFlow* TRISTATE_WIDTH, // INPUT
			NetFlow* INIT_TQ, // INPUT
			NetFlow* SRVAL_TQ, // INPUT
			NetFlow* TQ, // OUTPUT
			NetFlow* DDR3_MODE // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->ffd = ffd; // Default: 1
			this->mxd = mxd; // Default: 1
			//Verilog Ports in definition order:
			this->data1 = data1; // INPUT
			this->data2 = data2; // INPUT
			this->CLK = CLK; // INPUT
			this->BUFO = BUFO; // INPUT
			this->SR = SR; // INPUT
			this->TCE = TCE; // INPUT
			this->DATA_RATE_TQ = DATA_RATE_TQ; // INPUT
			this->TRISTATE_WIDTH = TRISTATE_WIDTH; // INPUT
			this->INIT_TQ = INIT_TQ; // INPUT
			this->SRVAL_TQ = SRVAL_TQ; // INPUT
			this->TQ = TQ; // OUTPUT
			this->DDR3_MODE = DDR3_MODE; // INPUT
		
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
