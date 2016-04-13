/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class bscntrl_iserdese1_vlog: public Primitive{

		//Verilog Parameters:
		//Verilog Ports in definition order:
		NetFlow* c23; // net ID: c23 lsb: 0  msb: 0 INPUT
		NetFlow* c45; // net ID: c45 lsb: 0  msb: 0 INPUT
		NetFlow* c67; // net ID: c67 lsb: 0  msb: 0 INPUT
		NetFlow* sel; // net ID: sel lsb: 0  msb: 1 INPUT
		NetFlow* DATA_RATE; // net ID: DATA_RATE lsb: 0  msb: 0 INPUT
		NetFlow* bitslip; // net ID: bitslip lsb: 0  msb: 0 INPUT
		NetFlow* clk; // net ID: clk lsb: 0  msb: 0 INPUT
		NetFlow* clkdiv; // net ID: clkdiv lsb: 0  msb: 0 INPUT
		NetFlow* r; // net ID: r lsb: 0  msb: 0 INPUT
		NetFlow* clkdiv_int; // net ID: clkdiv_int lsb: 0  msb: 0 OUTPUT
		NetFlow* muxc; // net ID: muxc lsb: 0  msb: 0 OUTPUT
		
		bscntrl_iserdese1_vlog(
			const char * name,
			//Verilog Parameters:
			//Verilog Ports in definition order:
			NetFlow* c23, // net ID: c23 lsb: 0  msb: 0 INPUT
			NetFlow* c45, // net ID: c45 lsb: 0  msb: 0 INPUT
			NetFlow* c67, // net ID: c67 lsb: 0  msb: 0 INPUT
			NetFlow* sel, // net ID: sel lsb: 0  msb: 1 INPUT
			NetFlow* DATA_RATE, // net ID: DATA_RATE lsb: 0  msb: 0 INPUT
			NetFlow* bitslip, // net ID: bitslip lsb: 0  msb: 0 INPUT
			NetFlow* clk, // net ID: clk lsb: 0  msb: 0 INPUT
			NetFlow* clkdiv, // net ID: clkdiv lsb: 0  msb: 0 INPUT
			NetFlow* r, // net ID: r lsb: 0  msb: 0 INPUT
			NetFlow* clkdiv_int, // net ID: clkdiv_int lsb: 0  msb: 0 OUTPUT
			NetFlow* muxc // net ID: muxc lsb: 0  msb: 0 OUTPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			//Verilog Ports in definition order:
			this->c23 = c23; // net ID: c23 lsb: 0  msb: 0 INPUT
			this->c45 = c45; // net ID: c45 lsb: 0  msb: 0 INPUT
			this->c67 = c67; // net ID: c67 lsb: 0  msb: 0 INPUT
			this->sel = sel; // net ID: sel lsb: 0  msb: 1 INPUT
			this->DATA_RATE = DATA_RATE; // net ID: DATA_RATE lsb: 0  msb: 0 INPUT
			this->bitslip = bitslip; // net ID: bitslip lsb: 0  msb: 0 INPUT
			this->clk = clk; // net ID: clk lsb: 0  msb: 0 INPUT
			this->clkdiv = clkdiv; // net ID: clkdiv lsb: 0  msb: 0 INPUT
			this->r = r; // net ID: r lsb: 0  msb: 0 INPUT
			this->clkdiv_int = clkdiv_int; // net ID: clkdiv_int lsb: 0  msb: 0 OUTPUT
			this->muxc = muxc; // net ID: muxc lsb: 0  msb: 0 OUTPUT
			
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
