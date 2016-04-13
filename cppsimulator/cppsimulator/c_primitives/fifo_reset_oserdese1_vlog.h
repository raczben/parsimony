/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class fifo_reset_oserdese1_vlog: public Primitive{

		//Verilog Parameters:
		//Verilog Ports in definition order:
		NetFlow* rst_bufo_p; // net ID: rst_bufo_p lsb: 0  msb: 0 OUTPUT
		NetFlow* rst_bufo_rc; // net ID: rst_bufo_rc lsb: 0  msb: 0 OUTPUT
		NetFlow* rst_bufg_p; // net ID: rst_bufg_p lsb: 0  msb: 0 OUTPUT
		NetFlow* rst_bufg_wc; // net ID: rst_bufg_wc lsb: 0  msb: 0 OUTPUT
		NetFlow* rst_cntr; // net ID: rst_cntr lsb: 0  msb: 0 INPUT
		NetFlow* bufg_clk; // net ID: bufg_clk lsb: 0  msb: 0 INPUT
		NetFlow* bufo_clk; // net ID: bufo_clk lsb: 0  msb: 0 INPUT
		NetFlow* clkdiv; // net ID: clkdiv lsb: 0  msb: 0 INPUT
		NetFlow* rst; // net ID: rst lsb: 0  msb: 0 INPUT
		NetFlow* divide_2; // net ID: divide_2 lsb: 0  msb: 0 INPUT
		NetFlow* bufop_clk; // net ID: bufop_clk lsb: 0  msb: 0 INPUT
		NetFlow* rst_bufop_rc; // net ID: rst_bufop_rc lsb: 0  msb: 0 OUTPUT
		
		fifo_reset_oserdese1_vlog(
			const char * name,
			//Verilog Parameters:
			//Verilog Ports in definition order:
			NetFlow* rst_bufo_p, // net ID: rst_bufo_p lsb: 0  msb: 0 OUTPUT
			NetFlow* rst_bufo_rc, // net ID: rst_bufo_rc lsb: 0  msb: 0 OUTPUT
			NetFlow* rst_bufg_p, // net ID: rst_bufg_p lsb: 0  msb: 0 OUTPUT
			NetFlow* rst_bufg_wc, // net ID: rst_bufg_wc lsb: 0  msb: 0 OUTPUT
			NetFlow* rst_cntr, // net ID: rst_cntr lsb: 0  msb: 0 INPUT
			NetFlow* bufg_clk, // net ID: bufg_clk lsb: 0  msb: 0 INPUT
			NetFlow* bufo_clk, // net ID: bufo_clk lsb: 0  msb: 0 INPUT
			NetFlow* clkdiv, // net ID: clkdiv lsb: 0  msb: 0 INPUT
			NetFlow* rst, // net ID: rst lsb: 0  msb: 0 INPUT
			NetFlow* divide_2, // net ID: divide_2 lsb: 0  msb: 0 INPUT
			NetFlow* bufop_clk, // net ID: bufop_clk lsb: 0  msb: 0 INPUT
			NetFlow* rst_bufop_rc // net ID: rst_bufop_rc lsb: 0  msb: 0 OUTPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			//Verilog Ports in definition order:
			this->rst_bufo_p = rst_bufo_p; // net ID: rst_bufo_p lsb: 0  msb: 0 OUTPUT
			this->rst_bufo_rc = rst_bufo_rc; // net ID: rst_bufo_rc lsb: 0  msb: 0 OUTPUT
			this->rst_bufg_p = rst_bufg_p; // net ID: rst_bufg_p lsb: 0  msb: 0 OUTPUT
			this->rst_bufg_wc = rst_bufg_wc; // net ID: rst_bufg_wc lsb: 0  msb: 0 OUTPUT
			this->rst_cntr = rst_cntr; // net ID: rst_cntr lsb: 0  msb: 0 INPUT
			this->bufg_clk = bufg_clk; // net ID: bufg_clk lsb: 0  msb: 0 INPUT
			this->bufo_clk = bufo_clk; // net ID: bufo_clk lsb: 0  msb: 0 INPUT
			this->clkdiv = clkdiv; // net ID: clkdiv lsb: 0  msb: 0 INPUT
			this->rst = rst; // net ID: rst lsb: 0  msb: 0 INPUT
			this->divide_2 = divide_2; // net ID: divide_2 lsb: 0  msb: 0 INPUT
			this->bufop_clk = bufop_clk; // net ID: bufop_clk lsb: 0  msb: 0 INPUT
			this->rst_bufop_rc = rst_bufop_rc; // net ID: rst_bufop_rc lsb: 0  msb: 0 OUTPUT
			
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
