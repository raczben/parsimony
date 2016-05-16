/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef TXBUFFER_OSERDESE1_VLOG_H
#define TXBUFFER_OSERDESE1_VLOG_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class txbuffer_oserdese1_vlog: public Primitive{

		//Verilog Parameters:
		//Verilog Ports in definition order:
		NetFlow* IODELAY__STATE_A0_B; // net ID: iodelay_state lsb: 0  msb: 0 OUTPUT
		NetFlow* QMUX1_A0_B; // net ID: qmux1 lsb: 0  msb: 0 OUTPUT
		NetFlow* QMUX2_A0_B; // net ID: qmux2 lsb: 0  msb: 0 OUTPUT
		NetFlow* TMUX1_A0_B; // net ID: tmux1 lsb: 0  msb: 0 OUTPUT
		NetFlow* TMUX2_A0_B; // net ID: tmux2 lsb: 0  msb: 0 OUTPUT
		NetFlow* D1_A0_B; // net ID: d1 lsb: 0  msb: 0 INPUT
		NetFlow* D2_A0_B; // net ID: d2 lsb: 0  msb: 0 INPUT
		NetFlow* T1_A0_B; // net ID: t1 lsb: 0  msb: 0 INPUT
		NetFlow* T2_A0_B; // net ID: t2 lsb: 0  msb: 0 INPUT
		NetFlow* TRIF_A0_B; // net ID: trif lsb: 0  msb: 0 INPUT
		NetFlow* WC_A0_B; // net ID: WC lsb: 0  msb: 0 INPUT
		NetFlow* ODV_A0_B; // net ID: ODV lsb: 0  msb: 0 INPUT
		NetFlow* EXTRA_A0_B; // net ID: extra lsb: 0  msb: 0 OUTPUT
		NetFlow* CLK_A0_B; // net ID: clk lsb: 0  msb: 0 INPUT
		NetFlow* CLKDIV_A0_B; // net ID: clkdiv lsb: 0  msb: 0 INPUT
		NetFlow* BUFO_A0_B; // net ID: bufo lsb: 0  msb: 0 INPUT
		NetFlow* BUFOP_A0_B; // net ID: bufop lsb: 0  msb: 0 INPUT
		NetFlow* RST_A0_B; // net ID: rst lsb: 0  msb: 0 INPUT
		NetFlow* ODELAY__USED_A0_B; // net ID: ODELAY_USED lsb: 0  msb: 0 INPUT
		NetFlow* DDR3__DATA_A0_B; // net ID: DDR3_DATA lsb: 0  msb: 0 INPUT
		NetFlow* DDR3__MODE_A0_B; // net ID: DDR3_MODE lsb: 0  msb: 0 INPUT
		
		public: txbuffer_oserdese1_vlog(
			const char * name,
			//Verilog Parameters:
			//Verilog Ports in definition order:
			NetFlow* IODELAY__STATE_A0_B, // net ID: iodelay_state lsb: 0  msb: 0 OUTPUT
			NetFlow* QMUX1_A0_B, // net ID: qmux1 lsb: 0  msb: 0 OUTPUT
			NetFlow* QMUX2_A0_B, // net ID: qmux2 lsb: 0  msb: 0 OUTPUT
			NetFlow* TMUX1_A0_B, // net ID: tmux1 lsb: 0  msb: 0 OUTPUT
			NetFlow* TMUX2_A0_B, // net ID: tmux2 lsb: 0  msb: 0 OUTPUT
			NetFlow* D1_A0_B, // net ID: d1 lsb: 0  msb: 0 INPUT
			NetFlow* D2_A0_B, // net ID: d2 lsb: 0  msb: 0 INPUT
			NetFlow* T1_A0_B, // net ID: t1 lsb: 0  msb: 0 INPUT
			NetFlow* T2_A0_B, // net ID: t2 lsb: 0  msb: 0 INPUT
			NetFlow* TRIF_A0_B, // net ID: trif lsb: 0  msb: 0 INPUT
			NetFlow* WC_A0_B, // net ID: WC lsb: 0  msb: 0 INPUT
			NetFlow* ODV_A0_B, // net ID: ODV lsb: 0  msb: 0 INPUT
			NetFlow* EXTRA_A0_B, // net ID: extra lsb: 0  msb: 0 OUTPUT
			NetFlow* CLK_A0_B, // net ID: clk lsb: 0  msb: 0 INPUT
			NetFlow* CLKDIV_A0_B, // net ID: clkdiv lsb: 0  msb: 0 INPUT
			NetFlow* BUFO_A0_B, // net ID: bufo lsb: 0  msb: 0 INPUT
			NetFlow* BUFOP_A0_B, // net ID: bufop lsb: 0  msb: 0 INPUT
			NetFlow* RST_A0_B, // net ID: rst lsb: 0  msb: 0 INPUT
			NetFlow* ODELAY__USED_A0_B, // net ID: ODELAY_USED lsb: 0  msb: 0 INPUT
			NetFlow* DDR3__DATA_A0_B, // net ID: DDR3_DATA lsb: 0  msb: 0 INPUT
			NetFlow* DDR3__MODE_A0_B // net ID: DDR3_MODE lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			//Verilog Ports in definition order:
			this->IODELAY__STATE_A0_B = IODELAY__STATE_A0_B; // net ID: iodelay_state lsb: 0  msb: 0 OUTPUT
			this->QMUX1_A0_B = QMUX1_A0_B; // net ID: qmux1 lsb: 0  msb: 0 OUTPUT
			this->QMUX2_A0_B = QMUX2_A0_B; // net ID: qmux2 lsb: 0  msb: 0 OUTPUT
			this->TMUX1_A0_B = TMUX1_A0_B; // net ID: tmux1 lsb: 0  msb: 0 OUTPUT
			this->TMUX2_A0_B = TMUX2_A0_B; // net ID: tmux2 lsb: 0  msb: 0 OUTPUT
			this->D1_A0_B = D1_A0_B; // net ID: d1 lsb: 0  msb: 0 INPUT
			this->D2_A0_B = D2_A0_B; // net ID: d2 lsb: 0  msb: 0 INPUT
			this->T1_A0_B = T1_A0_B; // net ID: t1 lsb: 0  msb: 0 INPUT
			this->T2_A0_B = T2_A0_B; // net ID: t2 lsb: 0  msb: 0 INPUT
			this->TRIF_A0_B = TRIF_A0_B; // net ID: trif lsb: 0  msb: 0 INPUT
			this->WC_A0_B = WC_A0_B; // net ID: WC lsb: 0  msb: 0 INPUT
			this->ODV_A0_B = ODV_A0_B; // net ID: ODV lsb: 0  msb: 0 INPUT
			this->EXTRA_A0_B = EXTRA_A0_B; // net ID: extra lsb: 0  msb: 0 OUTPUT
			this->CLK_A0_B = CLK_A0_B; // net ID: clk lsb: 0  msb: 0 INPUT
			this->CLKDIV_A0_B = CLKDIV_A0_B; // net ID: clkdiv lsb: 0  msb: 0 INPUT
			this->BUFO_A0_B = BUFO_A0_B; // net ID: bufo lsb: 0  msb: 0 INPUT
			this->BUFOP_A0_B = BUFOP_A0_B; // net ID: bufop lsb: 0  msb: 0 INPUT
			this->RST_A0_B = RST_A0_B; // net ID: rst lsb: 0  msb: 0 INPUT
			this->ODELAY__USED_A0_B = ODELAY__USED_A0_B; // net ID: ODELAY_USED lsb: 0  msb: 0 INPUT
			this->DDR3__DATA_A0_B = DDR3__DATA_A0_B; // net ID: DDR3_DATA lsb: 0  msb: 0 INPUT
			this->DDR3__MODE_A0_B = DDR3__MODE_A0_B; // net ID: DDR3_MODE lsb: 0  msb: 0 INPUT
			
			register_wait_on_event_nets();
			
		}
		
		void register_wait_on_event_nets(){
		// TODO
		}
		
		void calculate(simtime_t time){
		// TODO
		}
		};
		
}
#endif // TXBUFFER_OSERDESE1_VLOG_H
