/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class fifo_tdpipe_oserdese1_vlog: public Primitive{

		//Verilog Parameters:
		//Verilog Ports in definition order:
		NetFlow* muxout; // net ID: muxout lsb: 0  msb: 0 OUTPUT
		NetFlow* din; // net ID: din lsb: 0  msb: 0 INPUT
		NetFlow* qwc; // net ID: qwc lsb: 0  msb: 1 INPUT
		NetFlow* qrd; // net ID: qrd lsb: 0  msb: 1 INPUT
		NetFlow* rd_gap1; // net ID: rd_gap1 lsb: 0  msb: 0 INPUT
		NetFlow* bufg_clk; // net ID: bufg_clk lsb: 0  msb: 0 INPUT
		NetFlow* bufo_clk; // net ID: bufo_clk lsb: 0  msb: 0 INPUT
		NetFlow* rst_bufo_p; // net ID: rst_bufo_p lsb: 0  msb: 0 INPUT
		NetFlow* rst_bufg_p; // net ID: rst_bufg_p lsb: 0  msb: 0 INPUT
		NetFlow* DDR3_DATA; // net ID: DDR3_DATA lsb: 0  msb: 0 INPUT
		NetFlow* extra; // net ID: extra lsb: 0  msb: 0 INPUT
		NetFlow* ODV; // net ID: ODV lsb: 0  msb: 0 INPUT
		NetFlow* DDR3_MODE; // net ID: DDR3_MODE lsb: 0  msb: 0 INPUT
		
		fifo_tdpipe_oserdese1_vlog(
			const char * name,
			//Verilog Parameters:
			//Verilog Ports in definition order:
			NetFlow* muxout, // net ID: muxout lsb: 0  msb: 0 OUTPUT
			NetFlow* din, // net ID: din lsb: 0  msb: 0 INPUT
			NetFlow* qwc, // net ID: qwc lsb: 0  msb: 1 INPUT
			NetFlow* qrd, // net ID: qrd lsb: 0  msb: 1 INPUT
			NetFlow* rd_gap1, // net ID: rd_gap1 lsb: 0  msb: 0 INPUT
			NetFlow* bufg_clk, // net ID: bufg_clk lsb: 0  msb: 0 INPUT
			NetFlow* bufo_clk, // net ID: bufo_clk lsb: 0  msb: 0 INPUT
			NetFlow* rst_bufo_p, // net ID: rst_bufo_p lsb: 0  msb: 0 INPUT
			NetFlow* rst_bufg_p, // net ID: rst_bufg_p lsb: 0  msb: 0 INPUT
			NetFlow* DDR3_DATA, // net ID: DDR3_DATA lsb: 0  msb: 0 INPUT
			NetFlow* extra, // net ID: extra lsb: 0  msb: 0 INPUT
			NetFlow* ODV, // net ID: ODV lsb: 0  msb: 0 INPUT
			NetFlow* DDR3_MODE // net ID: DDR3_MODE lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			//Verilog Ports in definition order:
			this->muxout = muxout; // net ID: muxout lsb: 0  msb: 0 OUTPUT
			this->din = din; // net ID: din lsb: 0  msb: 0 INPUT
			this->qwc = qwc; // net ID: qwc lsb: 0  msb: 1 INPUT
			this->qrd = qrd; // net ID: qrd lsb: 0  msb: 1 INPUT
			this->rd_gap1 = rd_gap1; // net ID: rd_gap1 lsb: 0  msb: 0 INPUT
			this->bufg_clk = bufg_clk; // net ID: bufg_clk lsb: 0  msb: 0 INPUT
			this->bufo_clk = bufo_clk; // net ID: bufo_clk lsb: 0  msb: 0 INPUT
			this->rst_bufo_p = rst_bufo_p; // net ID: rst_bufo_p lsb: 0  msb: 0 INPUT
			this->rst_bufg_p = rst_bufg_p; // net ID: rst_bufg_p lsb: 0  msb: 0 INPUT
			this->DDR3_DATA = DDR3_DATA; // net ID: DDR3_DATA lsb: 0  msb: 0 INPUT
			this->extra = extra; // net ID: extra lsb: 0  msb: 0 INPUT
			this->ODV = ODV; // net ID: ODV lsb: 0  msb: 0 INPUT
			this->DDR3_MODE = DDR3_MODE; // net ID: DDR3_MODE lsb: 0  msb: 0 INPUT
			
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
