/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class fifo_reset_oserdese1_vlog{

		//Verilog Parameters:
		//Verilog Ports in definition order:
		NetFlow* rst_bufo_p; // OUTPUT
		NetFlow* rst_bufo_rc; // OUTPUT
		NetFlow* rst_bufg_p; // OUTPUT
		NetFlow* rst_bufg_wc; // OUTPUT
		NetFlow* rst_cntr; // INPUT
		NetFlow* bufg_clk; // INPUT
		NetFlow* bufo_clk; // INPUT
		NetFlow* clkdiv; // INPUT
		NetFlow* rst; // INPUT
		NetFlow* divide_2; // INPUT
		NetFlow* bufop_clk; // INPUT
		NetFlow* rst_bufop_rc; // OUTPUT
		
	
		fifo_reset_oserdese1_vlog(
			//Verilog Parameters:
			//Verilog Ports in definition order:
			NetFlow* rst_bufo_p, // OUTPUT
			NetFlow* rst_bufo_rc, // OUTPUT
			NetFlow* rst_bufg_p, // OUTPUT
			NetFlow* rst_bufg_wc, // OUTPUT
			NetFlow* rst_cntr, // INPUT
			NetFlow* bufg_clk, // INPUT
			NetFlow* bufo_clk, // INPUT
			NetFlow* clkdiv, // INPUT
			NetFlow* rst, // INPUT
			NetFlow* divide_2, // INPUT
			NetFlow* bufop_clk, // INPUT
			NetFlow* rst_bufop_rc // OUTPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			//Verilog Ports in definition order:
			this->rst_bufo_p = rst_bufo_p; // OUTPUT
			this->rst_bufo_rc = rst_bufo_rc; // OUTPUT
			this->rst_bufg_p = rst_bufg_p; // OUTPUT
			this->rst_bufg_wc = rst_bufg_wc; // OUTPUT
			this->rst_cntr = rst_cntr; // INPUT
			this->bufg_clk = bufg_clk; // INPUT
			this->bufo_clk = bufo_clk; // INPUT
			this->clkdiv = clkdiv; // INPUT
			this->rst = rst; // INPUT
			this->divide_2 = divide_2; // INPUT
			this->bufop_clk = bufop_clk; // INPUT
			this->rst_bufop_rc = rst_bufop_rc; // OUTPUT
		
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
