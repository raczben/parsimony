/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class fifo_addr_oserdese1_vlog: public Primitive{

		//Verilog Parameters:
		//Verilog Ports in definition order:
		NetFlow* qwc; // net ID: qwc lsb: 0  msb: 0 OUTPUT
		NetFlow* qrd; // net ID: qrd lsb: 0  msb: 0 OUTPUT
		NetFlow* rd_gap1; // net ID: rd_gap1 lsb: 0  msb: 0 OUTPUT
		NetFlow* rst_bufg_wc; // net ID: rst_bufg_wc lsb: 0  msb: 0 INPUT
		NetFlow* rst_bufo_rc; // net ID: rst_bufo_rc lsb: 0  msb: 0 INPUT
		NetFlow* bufg_clk; // net ID: bufg_clk lsb: 0  msb: 0 INPUT
		NetFlow* bufo_clk; // net ID: bufo_clk lsb: 0  msb: 0 INPUT
		NetFlow* data; // net ID: data lsb: 0  msb: 0 INPUT
		NetFlow* extra; // net ID: extra lsb: 0  msb: 0 OUTPUT
		NetFlow* rst_bufop_rc; // net ID: rst_bufop_rc lsb: 0  msb: 0 INPUT
		NetFlow* bufop_clk; // net ID: bufop_clk lsb: 0  msb: 0 INPUT
		
		fifo_addr_oserdese1_vlog(
			const char * name,
			//Verilog Parameters:
			//Verilog Ports in definition order:
			NetFlow* qwc, // net ID: qwc lsb: 0  msb: 0 OUTPUT
			NetFlow* qrd, // net ID: qrd lsb: 0  msb: 0 OUTPUT
			NetFlow* rd_gap1, // net ID: rd_gap1 lsb: 0  msb: 0 OUTPUT
			NetFlow* rst_bufg_wc, // net ID: rst_bufg_wc lsb: 0  msb: 0 INPUT
			NetFlow* rst_bufo_rc, // net ID: rst_bufo_rc lsb: 0  msb: 0 INPUT
			NetFlow* bufg_clk, // net ID: bufg_clk lsb: 0  msb: 0 INPUT
			NetFlow* bufo_clk, // net ID: bufo_clk lsb: 0  msb: 0 INPUT
			NetFlow* data, // net ID: data lsb: 0  msb: 0 INPUT
			NetFlow* extra, // net ID: extra lsb: 0  msb: 0 OUTPUT
			NetFlow* rst_bufop_rc, // net ID: rst_bufop_rc lsb: 0  msb: 0 INPUT
			NetFlow* bufop_clk // net ID: bufop_clk lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			//Verilog Ports in definition order:
			this->qwc = qwc; // net ID: qwc lsb: 0  msb: 0 OUTPUT
			this->qrd = qrd; // net ID: qrd lsb: 0  msb: 0 OUTPUT
			this->rd_gap1 = rd_gap1; // net ID: rd_gap1 lsb: 0  msb: 0 OUTPUT
			this->rst_bufg_wc = rst_bufg_wc; // net ID: rst_bufg_wc lsb: 0  msb: 0 INPUT
			this->rst_bufo_rc = rst_bufo_rc; // net ID: rst_bufo_rc lsb: 0  msb: 0 INPUT
			this->bufg_clk = bufg_clk; // net ID: bufg_clk lsb: 0  msb: 0 INPUT
			this->bufo_clk = bufo_clk; // net ID: bufo_clk lsb: 0  msb: 0 INPUT
			this->data = data; // net ID: data lsb: 0  msb: 0 INPUT
			this->extra = extra; // net ID: extra lsb: 0  msb: 0 OUTPUT
			this->rst_bufop_rc = rst_bufop_rc; // net ID: rst_bufop_rc lsb: 0  msb: 0 INPUT
			this->bufop_clk = bufop_clk; // net ID: bufop_clk lsb: 0  msb: 0 INPUT
			
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
