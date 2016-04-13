/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class iodlyctrl_npre_oserdese1_vlog: public Primitive{

		//Verilog Parameters:
		//Verilog Ports in definition order:
		NetFlow* iodelay_state; // net ID: iodelay_state lsb: 0  msb: 0 OUTPUT
		NetFlow* bufo_out; // net ID: bufo_out lsb: 0  msb: 0 OUTPUT
		NetFlow* rst_cntr; // net ID: rst_cntr lsb: 0  msb: 0 OUTPUT
		NetFlow* wc; // net ID: wc lsb: 0  msb: 0 INPUT
		NetFlow* trif; // net ID: trif lsb: 0  msb: 0 INPUT
		NetFlow* rst; // net ID: rst lsb: 0  msb: 0 INPUT
		NetFlow* bufg_clk; // net ID: bufg_clk lsb: 0  msb: 0 INPUT
		NetFlow* bufo_clk; // net ID: bufo_clk lsb: 0  msb: 0 INPUT
		NetFlow* bufg_clkdiv; // net ID: bufg_clkdiv lsb: 0  msb: 0 INPUT
		NetFlow* ddr3_dimm; // net ID: ddr3_dimm lsb: 0  msb: 0 INPUT
		NetFlow* wl6; // net ID: wl6 lsb: 0  msb: 0 INPUT
		
		iodlyctrl_npre_oserdese1_vlog(
			const char * name,
			//Verilog Parameters:
			//Verilog Ports in definition order:
			NetFlow* iodelay_state, // net ID: iodelay_state lsb: 0  msb: 0 OUTPUT
			NetFlow* bufo_out, // net ID: bufo_out lsb: 0  msb: 0 OUTPUT
			NetFlow* rst_cntr, // net ID: rst_cntr lsb: 0  msb: 0 OUTPUT
			NetFlow* wc, // net ID: wc lsb: 0  msb: 0 INPUT
			NetFlow* trif, // net ID: trif lsb: 0  msb: 0 INPUT
			NetFlow* rst, // net ID: rst lsb: 0  msb: 0 INPUT
			NetFlow* bufg_clk, // net ID: bufg_clk lsb: 0  msb: 0 INPUT
			NetFlow* bufo_clk, // net ID: bufo_clk lsb: 0  msb: 0 INPUT
			NetFlow* bufg_clkdiv, // net ID: bufg_clkdiv lsb: 0  msb: 0 INPUT
			NetFlow* ddr3_dimm, // net ID: ddr3_dimm lsb: 0  msb: 0 INPUT
			NetFlow* wl6 // net ID: wl6 lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			//Verilog Ports in definition order:
			this->iodelay_state = iodelay_state; // net ID: iodelay_state lsb: 0  msb: 0 OUTPUT
			this->bufo_out = bufo_out; // net ID: bufo_out lsb: 0  msb: 0 OUTPUT
			this->rst_cntr = rst_cntr; // net ID: rst_cntr lsb: 0  msb: 0 OUTPUT
			this->wc = wc; // net ID: wc lsb: 0  msb: 0 INPUT
			this->trif = trif; // net ID: trif lsb: 0  msb: 0 INPUT
			this->rst = rst; // net ID: rst lsb: 0  msb: 0 INPUT
			this->bufg_clk = bufg_clk; // net ID: bufg_clk lsb: 0  msb: 0 INPUT
			this->bufo_clk = bufo_clk; // net ID: bufo_clk lsb: 0  msb: 0 INPUT
			this->bufg_clkdiv = bufg_clkdiv; // net ID: bufg_clkdiv lsb: 0  msb: 0 INPUT
			this->ddr3_dimm = ddr3_dimm; // net ID: ddr3_dimm lsb: 0  msb: 0 INPUT
			this->wl6 = wl6; // net ID: wl6 lsb: 0  msb: 0 INPUT
			
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
