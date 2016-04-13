/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class plg_oserdese1_vlog: public Primitive{

		//Verilog Parameters:
		parameter_string_t ffdcnt;
		parameter_string_t mxdcnt;
		parameter_string_t FFRST;
		//Verilog Ports in definition order:
		NetFlow* c23; // net ID: c23 lsb: 0  msb: 0 INPUT
		NetFlow* c45; // net ID: c45 lsb: 0  msb: 0 INPUT
		NetFlow* c67; // net ID: c67 lsb: 0  msb: 0 INPUT
		NetFlow* sel; // net ID: sel lsb: 0  msb: 1 INPUT
		NetFlow* clk; // net ID: clk lsb: 0  msb: 0 INPUT
		NetFlow* clkdiv; // net ID: clkdiv lsb: 0  msb: 0 INPUT
		NetFlow* rst; // net ID: rst lsb: 0  msb: 0 INPUT
		NetFlow* load; // net ID: load lsb: 0  msb: 0 OUTPUT
		NetFlow* IOCLK_GLITCH; // net ID: IOCLK_GLITCH lsb: 0  msb: 0 OUTPUT
		
		plg_oserdese1_vlog(
			const char * name,
			//Verilog Parameters:
			parameter_string_t ffdcnt, // Default: 1
			parameter_string_t mxdcnt, // Default: 1
			parameter_string_t FFRST, // Default: 145
			//Verilog Ports in definition order:
			NetFlow* c23, // net ID: c23 lsb: 0  msb: 0 INPUT
			NetFlow* c45, // net ID: c45 lsb: 0  msb: 0 INPUT
			NetFlow* c67, // net ID: c67 lsb: 0  msb: 0 INPUT
			NetFlow* sel, // net ID: sel lsb: 0  msb: 1 INPUT
			NetFlow* clk, // net ID: clk lsb: 0  msb: 0 INPUT
			NetFlow* clkdiv, // net ID: clkdiv lsb: 0  msb: 0 INPUT
			NetFlow* rst, // net ID: rst lsb: 0  msb: 0 INPUT
			NetFlow* load, // net ID: load lsb: 0  msb: 0 OUTPUT
			NetFlow* IOCLK_GLITCH // net ID: IOCLK_GLITCH lsb: 0  msb: 0 OUTPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->ffdcnt = ffdcnt; // Default: 1
			this->mxdcnt = mxdcnt; // Default: 1
			this->FFRST = FFRST; // Default: 145
			//Verilog Ports in definition order:
			this->c23 = c23; // net ID: c23 lsb: 0  msb: 0 INPUT
			this->c45 = c45; // net ID: c45 lsb: 0  msb: 0 INPUT
			this->c67 = c67; // net ID: c67 lsb: 0  msb: 0 INPUT
			this->sel = sel; // net ID: sel lsb: 0  msb: 1 INPUT
			this->clk = clk; // net ID: clk lsb: 0  msb: 0 INPUT
			this->clkdiv = clkdiv; // net ID: clkdiv lsb: 0  msb: 0 INPUT
			this->rst = rst; // net ID: rst lsb: 0  msb: 0 INPUT
			this->load = load; // net ID: load lsb: 0  msb: 0 OUTPUT
			this->IOCLK_GLITCH = IOCLK_GLITCH; // net ID: IOCLK_GLITCH lsb: 0  msb: 0 OUTPUT
			
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
