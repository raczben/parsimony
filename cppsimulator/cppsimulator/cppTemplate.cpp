/******************************************************************************
* Generated Cpp template for simulation primitives.
* Author: Benedek Racz
******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class rank12d_oserdese1_vlog {

		//Verilog Parameters:
		parameter_int_t FFD;
		parameter_int_t FFCD;
		parameter_int_t MXD;
		parameter_int_t MXR1;
		//Verilog Ports in definition order:
		NetFlow* D1; // INPUT
		NetFlow* D2; // INPUT
		NetFlow* D3; // INPUT
		NetFlow* D4; // INPUT
		NetFlow* D5; // INPUT
		NetFlow* D6; // INPUT
		NetFlow* d2rnk2; // INPUT
		NetFlow* SHIFTIN1; // INPUT
		NetFlow* SHIFTIN2; // INPUT
		NetFlow* C; // INPUT
		NetFlow* CLKDIV; // INPUT
		NetFlow* SR; // INPUT
		NetFlow* OCE; // INPUT
		NetFlow* data1; // OUTPUT
		NetFlow* data2; // OUTPUT
		NetFlow* SHIFTOUT1; // OUTPUT
		NetFlow* SHIFTOUT2; // OUTPUT
		NetFlow* DATA_RATE_OQ; // INPUT
		NetFlow* DATA_WIDTH; // INPUT
		NetFlow* SERDES_MODE; // INPUT
		NetFlow* load; // OUTPUT
		NetFlow* IOCLK_GLITCH; // OUTPUT
		NetFlow* INIT_OQ; // INPUT
		NetFlow* SRVAL_OQ; // INPUT


		rank12d_oserdese1_vlog(
			//Verilog Parameters:
			parameter_int_t FFD, // Default: 1
			parameter_int_t FFCD, // Default: 1
			parameter_int_t MXD, // Default: 1
			parameter_int_t MXR1, // Default: 1
								  //Verilog Ports in definition order:
			NetFlow* D1, // INPUT
			NetFlow* D2, // INPUT
			NetFlow* D3, // INPUT
			NetFlow* D4, // INPUT
			NetFlow* D5, // INPUT
			NetFlow* D6, // INPUT
			NetFlow* d2rnk2, // INPUT
			NetFlow* SHIFTIN1, // INPUT
			NetFlow* SHIFTIN2, // INPUT
			NetFlow* C, // INPUT
			NetFlow* CLKDIV, // INPUT
			NetFlow* SR, // INPUT
			NetFlow* OCE, // INPUT
			NetFlow* data1, // OUTPUT
			NetFlow* data2, // OUTPUT
			NetFlow* SHIFTOUT1, // OUTPUT
			NetFlow* SHIFTOUT2, // OUTPUT
			NetFlow* DATA_RATE_OQ, // INPUT
			NetFlow* DATA_WIDTH, // INPUT
			NetFlow* SERDES_MODE, // INPUT
			NetFlow* load, // OUTPUT
			NetFlow* IOCLK_GLITCH, // OUTPUT
			NetFlow* INIT_OQ, // INPUT
			NetFlow* SRVAL_OQ // INPUT
			) {

			// Assign parameters and ports: 
			//Verilog Parameters:
			this->FFD = FFD; // Default: 1
			this->FFCD = FFCD; // Default: 1
			this->MXD = MXD; // Default: 1
			this->MXR1 = MXR1; // Default: 1
							   //Verilog Ports in definition order:
			this->D1 = D1; // INPUT
			this->D2 = D2; // INPUT
			this->D3 = D3; // INPUT
			this->D4 = D4; // INPUT
			this->D5 = D5; // INPUT
			this->D6 = D6; // INPUT
			this->d2rnk2 = d2rnk2; // INPUT
			this->SHIFTIN1 = SHIFTIN1; // INPUT
			this->SHIFTIN2 = SHIFTIN2; // INPUT
			this->C = C; // INPUT
			this->CLKDIV = CLKDIV; // INPUT
			this->SR = SR; // INPUT
			this->OCE = OCE; // INPUT
			this->data1 = data1; // OUTPUT
			this->data2 = data2; // OUTPUT
			this->SHIFTOUT1 = SHIFTOUT1; // OUTPUT
			this->SHIFTOUT2 = SHIFTOUT2; // OUTPUT
			this->DATA_RATE_OQ = DATA_RATE_OQ; // INPUT
			this->DATA_WIDTH = DATA_WIDTH; // INPUT
			this->SERDES_MODE = SERDES_MODE; // INPUT
			this->load = load; // OUTPUT
			this->IOCLK_GLITCH = IOCLK_GLITCH; // OUTPUT
			this->INIT_OQ = INIT_OQ; // INPUT
			this->SRVAL_OQ = SRVAL_OQ; // INPUT

			register_wait_on_event_nets();

		}

		void register_wait_on_event_nets() {
			// TODO
		}
		void calculate(int time) {
			// TODO
		}
	};


}
