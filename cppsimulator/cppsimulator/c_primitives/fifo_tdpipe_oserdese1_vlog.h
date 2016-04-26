/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef FIFO_TDPIPE_OSERDESE1_VLOG_H
#define FIFO_TDPIPE_OSERDESE1_VLOG_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class fifo_tdpipe_oserdese1_vlog: public Primitive{

		//Verilog Parameters:
		//Verilog Ports in definition order:
		NetFlow* MUXOUT_A0_B; // net ID: muxout lsb: 0  msb: 0 OUTPUT
		NetFlow* DIN_A0_B; // net ID: din lsb: 0  msb: 0 INPUT
		NetFlow* QWC_A0_B; // net ID: qwc lsb: 0  msb: 1 INPUT
		NetFlow* QWC_A1_B; // net ID: qwc lsb: 0  msb: 1 INPUT
		NetFlow* QRD_A0_B; // net ID: qrd lsb: 0  msb: 1 INPUT
		NetFlow* QRD_A1_B; // net ID: qrd lsb: 0  msb: 1 INPUT
		NetFlow* RD__GAP1_A0_B; // net ID: rd_gap1 lsb: 0  msb: 0 INPUT
		NetFlow* BUFG__CLK_A0_B; // net ID: bufg_clk lsb: 0  msb: 0 INPUT
		NetFlow* BUFO__CLK_A0_B; // net ID: bufo_clk lsb: 0  msb: 0 INPUT
		NetFlow* RST__BUFO__P_A0_B; // net ID: rst_bufo_p lsb: 0  msb: 0 INPUT
		NetFlow* RST__BUFG__P_A0_B; // net ID: rst_bufg_p lsb: 0  msb: 0 INPUT
		NetFlow* DDR3__DATA_A0_B; // net ID: DDR3_DATA lsb: 0  msb: 0 INPUT
		NetFlow* EXTRA_A0_B; // net ID: extra lsb: 0  msb: 0 INPUT
		NetFlow* ODV_A0_B; // net ID: ODV lsb: 0  msb: 0 INPUT
		NetFlow* DDR3__MODE_A0_B; // net ID: DDR3_MODE lsb: 0  msb: 0 INPUT
		
		public: fifo_tdpipe_oserdese1_vlog(
			const char * name,
			//Verilog Parameters:
			//Verilog Ports in definition order:
			NetFlow* MUXOUT_A0_B, // net ID: muxout lsb: 0  msb: 0 OUTPUT
			NetFlow* DIN_A0_B, // net ID: din lsb: 0  msb: 0 INPUT
			NetFlow* QWC_A0_B, // net ID: qwc lsb: 0  msb: 1 INPUT
			NetFlow* QWC_A1_B, // net ID: qwc lsb: 0  msb: 1 INPUT
			NetFlow* QRD_A0_B, // net ID: qrd lsb: 0  msb: 1 INPUT
			NetFlow* QRD_A1_B, // net ID: qrd lsb: 0  msb: 1 INPUT
			NetFlow* RD__GAP1_A0_B, // net ID: rd_gap1 lsb: 0  msb: 0 INPUT
			NetFlow* BUFG__CLK_A0_B, // net ID: bufg_clk lsb: 0  msb: 0 INPUT
			NetFlow* BUFO__CLK_A0_B, // net ID: bufo_clk lsb: 0  msb: 0 INPUT
			NetFlow* RST__BUFO__P_A0_B, // net ID: rst_bufo_p lsb: 0  msb: 0 INPUT
			NetFlow* RST__BUFG__P_A0_B, // net ID: rst_bufg_p lsb: 0  msb: 0 INPUT
			NetFlow* DDR3__DATA_A0_B, // net ID: DDR3_DATA lsb: 0  msb: 0 INPUT
			NetFlow* EXTRA_A0_B, // net ID: extra lsb: 0  msb: 0 INPUT
			NetFlow* ODV_A0_B, // net ID: ODV lsb: 0  msb: 0 INPUT
			NetFlow* DDR3__MODE_A0_B // net ID: DDR3_MODE lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			//Verilog Ports in definition order:
			this->MUXOUT_A0_B = MUXOUT_A0_B; // net ID: muxout lsb: 0  msb: 0 OUTPUT
			this->DIN_A0_B = DIN_A0_B; // net ID: din lsb: 0  msb: 0 INPUT
			this->QWC_A0_B = QWC_A0_B; // net ID: qwc lsb: 0  msb: 1 INPUT
			this->QWC_A1_B = QWC_A1_B; // net ID: qwc lsb: 0  msb: 1 INPUT
			this->QRD_A0_B = QRD_A0_B; // net ID: qrd lsb: 0  msb: 1 INPUT
			this->QRD_A1_B = QRD_A1_B; // net ID: qrd lsb: 0  msb: 1 INPUT
			this->RD__GAP1_A0_B = RD__GAP1_A0_B; // net ID: rd_gap1 lsb: 0  msb: 0 INPUT
			this->BUFG__CLK_A0_B = BUFG__CLK_A0_B; // net ID: bufg_clk lsb: 0  msb: 0 INPUT
			this->BUFO__CLK_A0_B = BUFO__CLK_A0_B; // net ID: bufo_clk lsb: 0  msb: 0 INPUT
			this->RST__BUFO__P_A0_B = RST__BUFO__P_A0_B; // net ID: rst_bufo_p lsb: 0  msb: 0 INPUT
			this->RST__BUFG__P_A0_B = RST__BUFG__P_A0_B; // net ID: rst_bufg_p lsb: 0  msb: 0 INPUT
			this->DDR3__DATA_A0_B = DDR3__DATA_A0_B; // net ID: DDR3_DATA lsb: 0  msb: 0 INPUT
			this->EXTRA_A0_B = EXTRA_A0_B; // net ID: extra lsb: 0  msb: 0 INPUT
			this->ODV_A0_B = ODV_A0_B; // net ID: ODV lsb: 0  msb: 0 INPUT
			this->DDR3__MODE_A0_B = DDR3__MODE_A0_B; // net ID: DDR3_MODE lsb: 0  msb: 0 INPUT
			
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
#endif // FIFO_TDPIPE_OSERDESE1_VLOG_H
