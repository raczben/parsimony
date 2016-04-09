/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class dout_oserdese1_vlog{

		//Verilog Parameters:
		parameter_int_t FFD;
		parameter_int_t FFCD;
		parameter_int_t MXD;
		parameter_int_t MXR1;
		//Verilog Ports in definition order:
		NetFlow* data1; // INPUT
		NetFlow* data2; // INPUT
		NetFlow* CLK; // INPUT
		NetFlow* BUFO; // INPUT
		NetFlow* SR; // INPUT
		NetFlow* OCE; // INPUT
		NetFlow* OQ; // OUTPUT
		NetFlow* d2rnk2; // OUTPUT
		NetFlow* DATA_RATE_OQ; // INPUT
		NetFlow* INIT_OQ; // INPUT
		NetFlow* SRVAL_OQ; // INPUT
		NetFlow* DDR3_MODE; // INPUT
		
	
		dout_oserdese1_vlog(
			//Verilog Parameters:
			parameter_int_t FFD, // Default: 1
			parameter_int_t FFCD, // Default: 1
			parameter_int_t MXD, // Default: 1
			parameter_int_t MXR1, // Default: 1
			//Verilog Ports in definition order:
			NetFlow* data1, // INPUT
			NetFlow* data2, // INPUT
			NetFlow* CLK, // INPUT
			NetFlow* BUFO, // INPUT
			NetFlow* SR, // INPUT
			NetFlow* OCE, // INPUT
			NetFlow* OQ, // OUTPUT
			NetFlow* d2rnk2, // OUTPUT
			NetFlow* DATA_RATE_OQ, // INPUT
			NetFlow* INIT_OQ, // INPUT
			NetFlow* SRVAL_OQ, // INPUT
			NetFlow* DDR3_MODE // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->FFD = FFD; // Default: 1
			this->FFCD = FFCD; // Default: 1
			this->MXD = MXD; // Default: 1
			this->MXR1 = MXR1; // Default: 1
			//Verilog Ports in definition order:
			this->data1 = data1; // INPUT
			this->data2 = data2; // INPUT
			this->CLK = CLK; // INPUT
			this->BUFO = BUFO; // INPUT
			this->SR = SR; // INPUT
			this->OCE = OCE; // INPUT
			this->OQ = OQ; // OUTPUT
			this->d2rnk2 = d2rnk2; // OUTPUT
			this->DATA_RATE_OQ = DATA_RATE_OQ; // INPUT
			this->INIT_OQ = INIT_OQ; // INPUT
			this->SRVAL_OQ = SRVAL_OQ; // INPUT
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
