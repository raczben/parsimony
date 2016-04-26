/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef FIFO_ADDR_OSERDESE1_VLOG_H
#define FIFO_ADDR_OSERDESE1_VLOG_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class fifo_addr_oserdese1_vlog: public Primitive{

		//Verilog Parameters:
		//Verilog Ports in definition order:
		NetFlow* QWC_A0_B; // net ID: qwc lsb: 0  msb: 0 OUTPUT
		NetFlow* QRD_A0_B; // net ID: qrd lsb: 0  msb: 0 OUTPUT
		NetFlow* RD__GAP1_A0_B; // net ID: rd_gap1 lsb: 0  msb: 0 OUTPUT
		NetFlow* RST__BUFG__WC_A0_B; // net ID: rst_bufg_wc lsb: 0  msb: 0 INPUT
		NetFlow* RST__BUFO__RC_A0_B; // net ID: rst_bufo_rc lsb: 0  msb: 0 INPUT
		NetFlow* BUFG__CLK_A0_B; // net ID: bufg_clk lsb: 0  msb: 0 INPUT
		NetFlow* BUFO__CLK_A0_B; // net ID: bufo_clk lsb: 0  msb: 0 INPUT
		NetFlow* DATA_A0_B; // net ID: data lsb: 0  msb: 0 INPUT
		NetFlow* EXTRA_A0_B; // net ID: extra lsb: 0  msb: 0 OUTPUT
		NetFlow* RST__BUFOP__RC_A0_B; // net ID: rst_bufop_rc lsb: 0  msb: 0 INPUT
		NetFlow* BUFOP__CLK_A0_B; // net ID: bufop_clk lsb: 0  msb: 0 INPUT
		
		public: fifo_addr_oserdese1_vlog(
			const char * name,
			//Verilog Parameters:
			//Verilog Ports in definition order:
			NetFlow* QWC_A0_B, // net ID: qwc lsb: 0  msb: 0 OUTPUT
			NetFlow* QRD_A0_B, // net ID: qrd lsb: 0  msb: 0 OUTPUT
			NetFlow* RD__GAP1_A0_B, // net ID: rd_gap1 lsb: 0  msb: 0 OUTPUT
			NetFlow* RST__BUFG__WC_A0_B, // net ID: rst_bufg_wc lsb: 0  msb: 0 INPUT
			NetFlow* RST__BUFO__RC_A0_B, // net ID: rst_bufo_rc lsb: 0  msb: 0 INPUT
			NetFlow* BUFG__CLK_A0_B, // net ID: bufg_clk lsb: 0  msb: 0 INPUT
			NetFlow* BUFO__CLK_A0_B, // net ID: bufo_clk lsb: 0  msb: 0 INPUT
			NetFlow* DATA_A0_B, // net ID: data lsb: 0  msb: 0 INPUT
			NetFlow* EXTRA_A0_B, // net ID: extra lsb: 0  msb: 0 OUTPUT
			NetFlow* RST__BUFOP__RC_A0_B, // net ID: rst_bufop_rc lsb: 0  msb: 0 INPUT
			NetFlow* BUFOP__CLK_A0_B // net ID: bufop_clk lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			//Verilog Ports in definition order:
			this->QWC_A0_B = QWC_A0_B; // net ID: qwc lsb: 0  msb: 0 OUTPUT
			this->QRD_A0_B = QRD_A0_B; // net ID: qrd lsb: 0  msb: 0 OUTPUT
			this->RD__GAP1_A0_B = RD__GAP1_A0_B; // net ID: rd_gap1 lsb: 0  msb: 0 OUTPUT
			this->RST__BUFG__WC_A0_B = RST__BUFG__WC_A0_B; // net ID: rst_bufg_wc lsb: 0  msb: 0 INPUT
			this->RST__BUFO__RC_A0_B = RST__BUFO__RC_A0_B; // net ID: rst_bufo_rc lsb: 0  msb: 0 INPUT
			this->BUFG__CLK_A0_B = BUFG__CLK_A0_B; // net ID: bufg_clk lsb: 0  msb: 0 INPUT
			this->BUFO__CLK_A0_B = BUFO__CLK_A0_B; // net ID: bufo_clk lsb: 0  msb: 0 INPUT
			this->DATA_A0_B = DATA_A0_B; // net ID: data lsb: 0  msb: 0 INPUT
			this->EXTRA_A0_B = EXTRA_A0_B; // net ID: extra lsb: 0  msb: 0 OUTPUT
			this->RST__BUFOP__RC_A0_B = RST__BUFOP__RC_A0_B; // net ID: rst_bufop_rc lsb: 0  msb: 0 INPUT
			this->BUFOP__CLK_A0_B = BUFOP__CLK_A0_B; // net ID: bufop_clk lsb: 0  msb: 0 INPUT
			
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
#endif // FIFO_ADDR_OSERDESE1_VLOG_H
