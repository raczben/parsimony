/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class FPGA_startup_VIRTEX4{

		//Verilog Parameters:
		//Verilog Ports in definition order:
		NetFlow* bus_reset; // OUTPUT
		NetFlow* ghigh_b; // OUTPUT
		NetFlow* gsr; // OUTPUT
		NetFlow* done; // OUTPUT
		NetFlow* gwe; // OUTPUT
		NetFlow* gts_b; // OUTPUT
		NetFlow* shutdown; // INPUT
		NetFlow* cclk; // INPUT
		NetFlow* por; // INPUT
		
	
		FPGA_startup_VIRTEX4(
			//Verilog Parameters:
			//Verilog Ports in definition order:
			NetFlow* bus_reset, // OUTPUT
			NetFlow* ghigh_b, // OUTPUT
			NetFlow* gsr, // OUTPUT
			NetFlow* done, // OUTPUT
			NetFlow* gwe, // OUTPUT
			NetFlow* gts_b, // OUTPUT
			NetFlow* shutdown, // INPUT
			NetFlow* cclk, // INPUT
			NetFlow* por // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			//Verilog Ports in definition order:
			this->bus_reset = bus_reset; // OUTPUT
			this->ghigh_b = ghigh_b; // OUTPUT
			this->gsr = gsr; // OUTPUT
			this->done = done; // OUTPUT
			this->gwe = gwe; // OUTPUT
			this->gts_b = gts_b; // OUTPUT
			this->shutdown = shutdown; // INPUT
			this->cclk = cclk; // INPUT
			this->por = por; // INPUT
		
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
