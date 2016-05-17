/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef IODLYCTRL_NPRE_OSERDESE1_VLOG_H
#define IODLYCTRL_NPRE_OSERDESE1_VLOG_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class iodlyctrl_npre_oserdese1_vlog: public Primitive{

		//Verilog Parameters:
		//Verilog Ports in definition order:
		NetFlow* IODELAY__STATE_A0_B; // net ID: iodelay_state lsb: 0  msb: 0 OUTPUT
		NetFlow* BUFO__OUT_A0_B; // net ID: bufo_out lsb: 0  msb: 0 OUTPUT
		NetFlow* RST__CNTR_A0_B; // net ID: rst_cntr lsb: 0  msb: 0 OUTPUT
		NetFlow* WC_A0_B; // net ID: wc lsb: 0  msb: 0 INPUT
		NetFlow* TRIF_A0_B; // net ID: trif lsb: 0  msb: 0 INPUT
		NetFlow* RST_A0_B; // net ID: rst lsb: 0  msb: 0 INPUT
		NetFlow* BUFG__CLK_A0_B; // net ID: bufg_clk lsb: 0  msb: 0 INPUT
		NetFlow* BUFO__CLK_A0_B; // net ID: bufo_clk lsb: 0  msb: 0 INPUT
		NetFlow* BUFG__CLKDIV_A0_B; // net ID: bufg_clkdiv lsb: 0  msb: 0 INPUT
		NetFlow* DDR3__DIMM_A0_B; // net ID: ddr3_dimm lsb: 0  msb: 0 INPUT
		NetFlow* WL6_A0_B; // net ID: wl6 lsb: 0  msb: 0 INPUT
		
		public: iodlyctrl_npre_oserdese1_vlog(
			const char * name,
			//Verilog Parameters:
			//Verilog Ports in definition order:
			NetFlow* IODELAY__STATE_A0_B, // net ID: iodelay_state lsb: 0  msb: 0 OUTPUT
			NetFlow* BUFO__OUT_A0_B, // net ID: bufo_out lsb: 0  msb: 0 OUTPUT
			NetFlow* RST__CNTR_A0_B, // net ID: rst_cntr lsb: 0  msb: 0 OUTPUT
			NetFlow* WC_A0_B, // net ID: wc lsb: 0  msb: 0 INPUT
			NetFlow* TRIF_A0_B, // net ID: trif lsb: 0  msb: 0 INPUT
			NetFlow* RST_A0_B, // net ID: rst lsb: 0  msb: 0 INPUT
			NetFlow* BUFG__CLK_A0_B, // net ID: bufg_clk lsb: 0  msb: 0 INPUT
			NetFlow* BUFO__CLK_A0_B, // net ID: bufo_clk lsb: 0  msb: 0 INPUT
			NetFlow* BUFG__CLKDIV_A0_B, // net ID: bufg_clkdiv lsb: 0  msb: 0 INPUT
			NetFlow* DDR3__DIMM_A0_B, // net ID: ddr3_dimm lsb: 0  msb: 0 INPUT
			NetFlow* WL6_A0_B // net ID: wl6 lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			//Verilog Ports in definition order:
			this->IODELAY__STATE_A0_B = IODELAY__STATE_A0_B; // net ID: iodelay_state lsb: 0  msb: 0 OUTPUT
			this->BUFO__OUT_A0_B = BUFO__OUT_A0_B; // net ID: bufo_out lsb: 0  msb: 0 OUTPUT
			this->RST__CNTR_A0_B = RST__CNTR_A0_B; // net ID: rst_cntr lsb: 0  msb: 0 OUTPUT
			this->WC_A0_B = WC_A0_B; // net ID: wc lsb: 0  msb: 0 INPUT
			this->TRIF_A0_B = TRIF_A0_B; // net ID: trif lsb: 0  msb: 0 INPUT
			this->RST_A0_B = RST_A0_B; // net ID: rst lsb: 0  msb: 0 INPUT
			this->BUFG__CLK_A0_B = BUFG__CLK_A0_B; // net ID: bufg_clk lsb: 0  msb: 0 INPUT
			this->BUFO__CLK_A0_B = BUFO__CLK_A0_B; // net ID: bufo_clk lsb: 0  msb: 0 INPUT
			this->BUFG__CLKDIV_A0_B = BUFG__CLKDIV_A0_B; // net ID: bufg_clkdiv lsb: 0  msb: 0 INPUT
			this->DDR3__DIMM_A0_B = DDR3__DIMM_A0_B; // net ID: ddr3_dimm lsb: 0  msb: 0 INPUT
			this->WL6_A0_B = WL6_A0_B; // net ID: wl6 lsb: 0  msb: 0 INPUT
			
			register_wait_on_event_nets();
			
		}
		
		void register_wait_on_event_nets(){
		// TODO
		}
		
		bool calculate(simtime_t time){
		// TODO
		}
		};
		
}
#endif // IODLYCTRL_NPRE_OSERDESE1_VLOG_H
