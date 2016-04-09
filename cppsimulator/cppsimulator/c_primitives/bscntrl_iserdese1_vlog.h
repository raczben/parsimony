/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class bscntrl_iserdese1_vlog{

		//Verilog Parameters:
		//Verilog Ports in definition order:
		NetFlow* c23; // INPUT
		NetFlow* c45; // INPUT
		NetFlow* c67; // INPUT
		NetFlow* sel; // INPUT
		NetFlow* DATA_RATE; // INPUT
		NetFlow* bitslip; // INPUT
		NetFlow* clk; // INPUT
		NetFlow* clkdiv; // INPUT
		NetFlow* r; // INPUT
		NetFlow* clkdiv_int; // OUTPUT
		NetFlow* muxc; // OUTPUT
		
	
		bscntrl_iserdese1_vlog(
			//Verilog Parameters:
			//Verilog Ports in definition order:
			NetFlow* c23, // INPUT
			NetFlow* c45, // INPUT
			NetFlow* c67, // INPUT
			NetFlow* sel, // INPUT
			NetFlow* DATA_RATE, // INPUT
			NetFlow* bitslip, // INPUT
			NetFlow* clk, // INPUT
			NetFlow* clkdiv, // INPUT
			NetFlow* r, // INPUT
			NetFlow* clkdiv_int, // OUTPUT
			NetFlow* muxc // OUTPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			//Verilog Ports in definition order:
			this->c23 = c23; // INPUT
			this->c45 = c45; // INPUT
			this->c67 = c67; // INPUT
			this->sel = sel; // INPUT
			this->DATA_RATE = DATA_RATE; // INPUT
			this->bitslip = bitslip; // INPUT
			this->clk = clk; // INPUT
			this->clkdiv = clkdiv; // INPUT
			this->r = r; // INPUT
			this->clkdiv_int = clkdiv_int; // OUTPUT
			this->muxc = muxc; // OUTPUT
		
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
