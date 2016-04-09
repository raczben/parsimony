/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class fifo_tdpipe_oserdese1_vlog{

		//Verilog Parameters:
		//Verilog Ports in definition order:
		NetFlow* muxout; // OUTPUT
		NetFlow* din; // INPUT
		NetFlow* qwc; // INPUT
		NetFlow* qrd; // INPUT
		NetFlow* rd_gap1; // INPUT
		NetFlow* bufg_clk; // INPUT
		NetFlow* bufo_clk; // INPUT
		NetFlow* rst_bufo_p; // INPUT
		NetFlow* rst_bufg_p; // INPUT
		NetFlow* DDR3_DATA; // INPUT
		NetFlow* extra; // INPUT
		NetFlow* ODV; // INPUT
		NetFlow* DDR3_MODE; // INPUT
		
	
		fifo_tdpipe_oserdese1_vlog(
			//Verilog Parameters:
			//Verilog Ports in definition order:
			NetFlow* muxout, // OUTPUT
			NetFlow* din, // INPUT
			NetFlow* qwc, // INPUT
			NetFlow* qrd, // INPUT
			NetFlow* rd_gap1, // INPUT
			NetFlow* bufg_clk, // INPUT
			NetFlow* bufo_clk, // INPUT
			NetFlow* rst_bufo_p, // INPUT
			NetFlow* rst_bufg_p, // INPUT
			NetFlow* DDR3_DATA, // INPUT
			NetFlow* extra, // INPUT
			NetFlow* ODV, // INPUT
			NetFlow* DDR3_MODE // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			//Verilog Ports in definition order:
			this->muxout = muxout; // OUTPUT
			this->din = din; // INPUT
			this->qwc = qwc; // INPUT
			this->qrd = qrd; // INPUT
			this->rd_gap1 = rd_gap1; // INPUT
			this->bufg_clk = bufg_clk; // INPUT
			this->bufo_clk = bufo_clk; // INPUT
			this->rst_bufo_p = rst_bufo_p; // INPUT
			this->rst_bufg_p = rst_bufg_p; // INPUT
			this->DDR3_DATA = DDR3_DATA; // INPUT
			this->extra = extra; // INPUT
			this->ODV = ODV; // INPUT
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
