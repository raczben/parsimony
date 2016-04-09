/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class txbuffer_oserdese1_vlog{

		//Verilog Parameters:
		//Verilog Ports in definition order:
		NetFlow* iodelay_state; // OUTPUT
		NetFlow* qmux1; // OUTPUT
		NetFlow* qmux2; // OUTPUT
		NetFlow* tmux1; // OUTPUT
		NetFlow* tmux2; // OUTPUT
		NetFlow* d1; // INPUT
		NetFlow* d2; // INPUT
		NetFlow* t1; // INPUT
		NetFlow* t2; // INPUT
		NetFlow* trif; // INPUT
		NetFlow* WC; // INPUT
		NetFlow* ODV; // INPUT
		NetFlow* extra; // OUTPUT
		NetFlow* clk; // INPUT
		NetFlow* clkdiv; // INPUT
		NetFlow* bufo; // INPUT
		NetFlow* bufop; // INPUT
		NetFlow* rst; // INPUT
		NetFlow* ODELAY_USED; // INPUT
		NetFlow* DDR3_DATA; // INPUT
		NetFlow* DDR3_MODE; // INPUT
		
	
		txbuffer_oserdese1_vlog(
			//Verilog Parameters:
			//Verilog Ports in definition order:
			NetFlow* iodelay_state, // OUTPUT
			NetFlow* qmux1, // OUTPUT
			NetFlow* qmux2, // OUTPUT
			NetFlow* tmux1, // OUTPUT
			NetFlow* tmux2, // OUTPUT
			NetFlow* d1, // INPUT
			NetFlow* d2, // INPUT
			NetFlow* t1, // INPUT
			NetFlow* t2, // INPUT
			NetFlow* trif, // INPUT
			NetFlow* WC, // INPUT
			NetFlow* ODV, // INPUT
			NetFlow* extra, // OUTPUT
			NetFlow* clk, // INPUT
			NetFlow* clkdiv, // INPUT
			NetFlow* bufo, // INPUT
			NetFlow* bufop, // INPUT
			NetFlow* rst, // INPUT
			NetFlow* ODELAY_USED, // INPUT
			NetFlow* DDR3_DATA, // INPUT
			NetFlow* DDR3_MODE // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			//Verilog Ports in definition order:
			this->iodelay_state = iodelay_state; // OUTPUT
			this->qmux1 = qmux1; // OUTPUT
			this->qmux2 = qmux2; // OUTPUT
			this->tmux1 = tmux1; // OUTPUT
			this->tmux2 = tmux2; // OUTPUT
			this->d1 = d1; // INPUT
			this->d2 = d2; // INPUT
			this->t1 = t1; // INPUT
			this->t2 = t2; // INPUT
			this->trif = trif; // INPUT
			this->WC = WC; // INPUT
			this->ODV = ODV; // INPUT
			this->extra = extra; // OUTPUT
			this->clk = clk; // INPUT
			this->clkdiv = clkdiv; // INPUT
			this->bufo = bufo; // INPUT
			this->bufop = bufop; // INPUT
			this->rst = rst; // INPUT
			this->ODELAY_USED = ODELAY_USED; // INPUT
			this->DDR3_DATA = DDR3_DATA; // INPUT
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
