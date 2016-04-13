/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class txbuffer_oserdese1_vlog: public Primitive{

		//Verilog Parameters:
		//Verilog Ports in definition order:
		NetFlow* iodelay_state; // net ID: iodelay_state lsb: 0  msb: 0 OUTPUT
		NetFlow* qmux1; // net ID: qmux1 lsb: 0  msb: 0 OUTPUT
		NetFlow* qmux2; // net ID: qmux2 lsb: 0  msb: 0 OUTPUT
		NetFlow* tmux1; // net ID: tmux1 lsb: 0  msb: 0 OUTPUT
		NetFlow* tmux2; // net ID: tmux2 lsb: 0  msb: 0 OUTPUT
		NetFlow* d1; // net ID: d1 lsb: 0  msb: 0 INPUT
		NetFlow* d2; // net ID: d2 lsb: 0  msb: 0 INPUT
		NetFlow* t1; // net ID: t1 lsb: 0  msb: 0 INPUT
		NetFlow* t2; // net ID: t2 lsb: 0  msb: 0 INPUT
		NetFlow* trif; // net ID: trif lsb: 0  msb: 0 INPUT
		NetFlow* WC; // net ID: WC lsb: 0  msb: 0 INPUT
		NetFlow* ODV; // net ID: ODV lsb: 0  msb: 0 INPUT
		NetFlow* extra; // net ID: extra lsb: 0  msb: 0 OUTPUT
		NetFlow* clk; // net ID: clk lsb: 0  msb: 0 INPUT
		NetFlow* clkdiv; // net ID: clkdiv lsb: 0  msb: 0 INPUT
		NetFlow* bufo; // net ID: bufo lsb: 0  msb: 0 INPUT
		NetFlow* bufop; // net ID: bufop lsb: 0  msb: 0 INPUT
		NetFlow* rst; // net ID: rst lsb: 0  msb: 0 INPUT
		NetFlow* ODELAY_USED; // net ID: ODELAY_USED lsb: 0  msb: 0 INPUT
		NetFlow* DDR3_DATA; // net ID: DDR3_DATA lsb: 0  msb: 0 INPUT
		NetFlow* DDR3_MODE; // net ID: DDR3_MODE lsb: 0  msb: 0 INPUT
		
		txbuffer_oserdese1_vlog(
			const char * name,
			//Verilog Parameters:
			//Verilog Ports in definition order:
			NetFlow* iodelay_state, // net ID: iodelay_state lsb: 0  msb: 0 OUTPUT
			NetFlow* qmux1, // net ID: qmux1 lsb: 0  msb: 0 OUTPUT
			NetFlow* qmux2, // net ID: qmux2 lsb: 0  msb: 0 OUTPUT
			NetFlow* tmux1, // net ID: tmux1 lsb: 0  msb: 0 OUTPUT
			NetFlow* tmux2, // net ID: tmux2 lsb: 0  msb: 0 OUTPUT
			NetFlow* d1, // net ID: d1 lsb: 0  msb: 0 INPUT
			NetFlow* d2, // net ID: d2 lsb: 0  msb: 0 INPUT
			NetFlow* t1, // net ID: t1 lsb: 0  msb: 0 INPUT
			NetFlow* t2, // net ID: t2 lsb: 0  msb: 0 INPUT
			NetFlow* trif, // net ID: trif lsb: 0  msb: 0 INPUT
			NetFlow* WC, // net ID: WC lsb: 0  msb: 0 INPUT
			NetFlow* ODV, // net ID: ODV lsb: 0  msb: 0 INPUT
			NetFlow* extra, // net ID: extra lsb: 0  msb: 0 OUTPUT
			NetFlow* clk, // net ID: clk lsb: 0  msb: 0 INPUT
			NetFlow* clkdiv, // net ID: clkdiv lsb: 0  msb: 0 INPUT
			NetFlow* bufo, // net ID: bufo lsb: 0  msb: 0 INPUT
			NetFlow* bufop, // net ID: bufop lsb: 0  msb: 0 INPUT
			NetFlow* rst, // net ID: rst lsb: 0  msb: 0 INPUT
			NetFlow* ODELAY_USED, // net ID: ODELAY_USED lsb: 0  msb: 0 INPUT
			NetFlow* DDR3_DATA, // net ID: DDR3_DATA lsb: 0  msb: 0 INPUT
			NetFlow* DDR3_MODE // net ID: DDR3_MODE lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			//Verilog Ports in definition order:
			this->iodelay_state = iodelay_state; // net ID: iodelay_state lsb: 0  msb: 0 OUTPUT
			this->qmux1 = qmux1; // net ID: qmux1 lsb: 0  msb: 0 OUTPUT
			this->qmux2 = qmux2; // net ID: qmux2 lsb: 0  msb: 0 OUTPUT
			this->tmux1 = tmux1; // net ID: tmux1 lsb: 0  msb: 0 OUTPUT
			this->tmux2 = tmux2; // net ID: tmux2 lsb: 0  msb: 0 OUTPUT
			this->d1 = d1; // net ID: d1 lsb: 0  msb: 0 INPUT
			this->d2 = d2; // net ID: d2 lsb: 0  msb: 0 INPUT
			this->t1 = t1; // net ID: t1 lsb: 0  msb: 0 INPUT
			this->t2 = t2; // net ID: t2 lsb: 0  msb: 0 INPUT
			this->trif = trif; // net ID: trif lsb: 0  msb: 0 INPUT
			this->WC = WC; // net ID: WC lsb: 0  msb: 0 INPUT
			this->ODV = ODV; // net ID: ODV lsb: 0  msb: 0 INPUT
			this->extra = extra; // net ID: extra lsb: 0  msb: 0 OUTPUT
			this->clk = clk; // net ID: clk lsb: 0  msb: 0 INPUT
			this->clkdiv = clkdiv; // net ID: clkdiv lsb: 0  msb: 0 INPUT
			this->bufo = bufo; // net ID: bufo lsb: 0  msb: 0 INPUT
			this->bufop = bufop; // net ID: bufop lsb: 0  msb: 0 INPUT
			this->rst = rst; // net ID: rst lsb: 0  msb: 0 INPUT
			this->ODELAY_USED = ODELAY_USED; // net ID: ODELAY_USED lsb: 0  msb: 0 INPUT
			this->DDR3_DATA = DDR3_DATA; // net ID: DDR3_DATA lsb: 0  msb: 0 INPUT
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
