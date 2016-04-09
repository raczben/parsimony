/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class fifo_addr_oserdese1_vlog{

		//Verilog Parameters:
		//Verilog Ports in definition order:
		NetFlow* qwc; // OUTPUT
		NetFlow* qrd; // OUTPUT
		NetFlow* rd_gap1; // OUTPUT
		NetFlow* rst_bufg_wc; // INPUT
		NetFlow* rst_bufo_rc; // INPUT
		NetFlow* bufg_clk; // INPUT
		NetFlow* bufo_clk; // INPUT
		NetFlow* data; // INPUT
		NetFlow* extra; // OUTPUT
		NetFlow* rst_bufop_rc; // INPUT
		NetFlow* bufop_clk; // INPUT
		
	
		fifo_addr_oserdese1_vlog(
			//Verilog Parameters:
			//Verilog Ports in definition order:
			NetFlow* qwc, // OUTPUT
			NetFlow* qrd, // OUTPUT
			NetFlow* rd_gap1, // OUTPUT
			NetFlow* rst_bufg_wc, // INPUT
			NetFlow* rst_bufo_rc, // INPUT
			NetFlow* bufg_clk, // INPUT
			NetFlow* bufo_clk, // INPUT
			NetFlow* data, // INPUT
			NetFlow* extra, // OUTPUT
			NetFlow* rst_bufop_rc, // INPUT
			NetFlow* bufop_clk // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			//Verilog Ports in definition order:
			this->qwc = qwc; // OUTPUT
			this->qrd = qrd; // OUTPUT
			this->rd_gap1 = rd_gap1; // OUTPUT
			this->rst_bufg_wc = rst_bufg_wc; // INPUT
			this->rst_bufo_rc = rst_bufo_rc; // INPUT
			this->bufg_clk = bufg_clk; // INPUT
			this->bufo_clk = bufo_clk; // INPUT
			this->data = data; // INPUT
			this->extra = extra; // OUTPUT
			this->rst_bufop_rc = rst_bufop_rc; // INPUT
			this->bufop_clk = bufop_clk; // INPUT
		
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
