/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class plg_oserdese1_vlog{

		//Verilog Parameters:
		parameter_int_t ffdcnt;
		parameter_int_t mxdcnt;
		parameter_int_t FFRST;
		//Verilog Ports in definition order:
		NetFlow* c23; // INPUT
		NetFlow* c45; // INPUT
		NetFlow* c67; // INPUT
		NetFlow* sel; // INPUT
		NetFlow* clk; // INPUT
		NetFlow* clkdiv; // INPUT
		NetFlow* rst; // INPUT
		NetFlow* load; // OUTPUT
		NetFlow* IOCLK_GLITCH; // OUTPUT
		
	
		plg_oserdese1_vlog(
			//Verilog Parameters:
			parameter_int_t ffdcnt, // Default: 1
			parameter_int_t mxdcnt, // Default: 1
			parameter_int_t FFRST, // Default: 145
			//Verilog Ports in definition order:
			NetFlow* c23, // INPUT
			NetFlow* c45, // INPUT
			NetFlow* c67, // INPUT
			NetFlow* sel, // INPUT
			NetFlow* clk, // INPUT
			NetFlow* clkdiv, // INPUT
			NetFlow* rst, // INPUT
			NetFlow* load, // OUTPUT
			NetFlow* IOCLK_GLITCH // OUTPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->ffdcnt = ffdcnt; // Default: 1
			this->mxdcnt = mxdcnt; // Default: 1
			this->FFRST = FFRST; // Default: 145
			//Verilog Ports in definition order:
			this->c23 = c23; // INPUT
			this->c45 = c45; // INPUT
			this->c67 = c67; // INPUT
			this->sel = sel; // INPUT
			this->clk = clk; // INPUT
			this->clkdiv = clkdiv; // INPUT
			this->rst = rst; // INPUT
			this->load = load; // OUTPUT
			this->IOCLK_GLITCH = IOCLK_GLITCH; // OUTPUT
		
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
