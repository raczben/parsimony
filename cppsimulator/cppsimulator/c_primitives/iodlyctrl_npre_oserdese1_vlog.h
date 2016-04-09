/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class iodlyctrl_npre_oserdese1_vlog{

		//Verilog Parameters:
		//Verilog Ports in definition order:
		NetFlow* iodelay_state; // OUTPUT
		NetFlow* bufo_out; // OUTPUT
		NetFlow* rst_cntr; // OUTPUT
		NetFlow* wc; // INPUT
		NetFlow* trif; // INPUT
		NetFlow* rst; // INPUT
		NetFlow* bufg_clk; // INPUT
		NetFlow* bufo_clk; // INPUT
		NetFlow* bufg_clkdiv; // INPUT
		NetFlow* ddr3_dimm; // INPUT
		NetFlow* wl6; // INPUT
		
	
		iodlyctrl_npre_oserdese1_vlog(
			//Verilog Parameters:
			//Verilog Ports in definition order:
			NetFlow* iodelay_state, // OUTPUT
			NetFlow* bufo_out, // OUTPUT
			NetFlow* rst_cntr, // OUTPUT
			NetFlow* wc, // INPUT
			NetFlow* trif, // INPUT
			NetFlow* rst, // INPUT
			NetFlow* bufg_clk, // INPUT
			NetFlow* bufo_clk, // INPUT
			NetFlow* bufg_clkdiv, // INPUT
			NetFlow* ddr3_dimm, // INPUT
			NetFlow* wl6 // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			//Verilog Ports in definition order:
			this->iodelay_state = iodelay_state; // OUTPUT
			this->bufo_out = bufo_out; // OUTPUT
			this->rst_cntr = rst_cntr; // OUTPUT
			this->wc = wc; // INPUT
			this->trif = trif; // INPUT
			this->rst = rst; // INPUT
			this->bufg_clk = bufg_clk; // INPUT
			this->bufo_clk = bufo_clk; // INPUT
			this->bufg_clkdiv = bufg_clkdiv; // INPUT
			this->ddr3_dimm = ddr3_dimm; // INPUT
			this->wl6 = wl6; // INPUT
		
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
