/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef FIFO_RESET_OSERDESE1_VLOG_H
#define FIFO_RESET_OSERDESE1_VLOG_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class fifo_reset_oserdese1_vlog: public Primitive{

		//Verilog Parameters:
		//Verilog Ports in definition order:
		NetFlow* RST__BUFO__P_A0_B; // net ID: rst_bufo_p lsb: 0  msb: 0 OUTPUT
		NetFlow* RST__BUFO__RC_A0_B; // net ID: rst_bufo_rc lsb: 0  msb: 0 OUTPUT
		NetFlow* RST__BUFG__P_A0_B; // net ID: rst_bufg_p lsb: 0  msb: 0 OUTPUT
		NetFlow* RST__BUFG__WC_A0_B; // net ID: rst_bufg_wc lsb: 0  msb: 0 OUTPUT
		NetFlow* RST__CNTR_A0_B; // net ID: rst_cntr lsb: 0  msb: 0 INPUT
		NetFlow* BUFG__CLK_A0_B; // net ID: bufg_clk lsb: 0  msb: 0 INPUT
		NetFlow* BUFO__CLK_A0_B; // net ID: bufo_clk lsb: 0  msb: 0 INPUT
		NetFlow* CLKDIV_A0_B; // net ID: clkdiv lsb: 0  msb: 0 INPUT
		NetFlow* RST_A0_B; // net ID: rst lsb: 0  msb: 0 INPUT
		NetFlow* DIVIDE__2_A0_B; // net ID: divide_2 lsb: 0  msb: 0 INPUT
		NetFlow* BUFOP__CLK_A0_B; // net ID: bufop_clk lsb: 0  msb: 0 INPUT
		NetFlow* RST__BUFOP__RC_A0_B; // net ID: rst_bufop_rc lsb: 0  msb: 0 OUTPUT
		
		public: fifo_reset_oserdese1_vlog(
			const char * name,
			//Verilog Parameters:
			//Verilog Ports in definition order:
			NetFlow* RST__BUFO__P_A0_B, // net ID: rst_bufo_p lsb: 0  msb: 0 OUTPUT
			NetFlow* RST__BUFO__RC_A0_B, // net ID: rst_bufo_rc lsb: 0  msb: 0 OUTPUT
			NetFlow* RST__BUFG__P_A0_B, // net ID: rst_bufg_p lsb: 0  msb: 0 OUTPUT
			NetFlow* RST__BUFG__WC_A0_B, // net ID: rst_bufg_wc lsb: 0  msb: 0 OUTPUT
			NetFlow* RST__CNTR_A0_B, // net ID: rst_cntr lsb: 0  msb: 0 INPUT
			NetFlow* BUFG__CLK_A0_B, // net ID: bufg_clk lsb: 0  msb: 0 INPUT
			NetFlow* BUFO__CLK_A0_B, // net ID: bufo_clk lsb: 0  msb: 0 INPUT
			NetFlow* CLKDIV_A0_B, // net ID: clkdiv lsb: 0  msb: 0 INPUT
			NetFlow* RST_A0_B, // net ID: rst lsb: 0  msb: 0 INPUT
			NetFlow* DIVIDE__2_A0_B, // net ID: divide_2 lsb: 0  msb: 0 INPUT
			NetFlow* BUFOP__CLK_A0_B, // net ID: bufop_clk lsb: 0  msb: 0 INPUT
			NetFlow* RST__BUFOP__RC_A0_B // net ID: rst_bufop_rc lsb: 0  msb: 0 OUTPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			//Verilog Ports in definition order:
			this->RST__BUFO__P_A0_B = RST__BUFO__P_A0_B; // net ID: rst_bufo_p lsb: 0  msb: 0 OUTPUT
			this->RST__BUFO__RC_A0_B = RST__BUFO__RC_A0_B; // net ID: rst_bufo_rc lsb: 0  msb: 0 OUTPUT
			this->RST__BUFG__P_A0_B = RST__BUFG__P_A0_B; // net ID: rst_bufg_p lsb: 0  msb: 0 OUTPUT
			this->RST__BUFG__WC_A0_B = RST__BUFG__WC_A0_B; // net ID: rst_bufg_wc lsb: 0  msb: 0 OUTPUT
			this->RST__CNTR_A0_B = RST__CNTR_A0_B; // net ID: rst_cntr lsb: 0  msb: 0 INPUT
			this->BUFG__CLK_A0_B = BUFG__CLK_A0_B; // net ID: bufg_clk lsb: 0  msb: 0 INPUT
			this->BUFO__CLK_A0_B = BUFO__CLK_A0_B; // net ID: bufo_clk lsb: 0  msb: 0 INPUT
			this->CLKDIV_A0_B = CLKDIV_A0_B; // net ID: clkdiv lsb: 0  msb: 0 INPUT
			this->RST_A0_B = RST_A0_B; // net ID: rst lsb: 0  msb: 0 INPUT
			this->DIVIDE__2_A0_B = DIVIDE__2_A0_B; // net ID: divide_2 lsb: 0  msb: 0 INPUT
			this->BUFOP__CLK_A0_B = BUFOP__CLK_A0_B; // net ID: bufop_clk lsb: 0  msb: 0 INPUT
			this->RST__BUFOP__RC_A0_B = RST__BUFOP__RC_A0_B; // net ID: rst_bufop_rc lsb: 0  msb: 0 OUTPUT
			
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
#endif // FIFO_RESET_OSERDESE1_VLOG_H
