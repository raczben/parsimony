/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef FPGA_STARTUP_VIRTEX4_H
#define FPGA_STARTUP_VIRTEX4_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class FPGA_startup_VIRTEX4: public Primitive{

		//Verilog Parameters:
		//Verilog Ports in definition order:
		NetFlow* BUS__RESET_A0_B; // net ID: bus_reset lsb: 0  msb: 0 OUTPUT
		NetFlow* GHIGH__B_A0_B; // net ID: ghigh_b lsb: 0  msb: 0 OUTPUT
		NetFlow* GSR_A0_B; // net ID: gsr lsb: 0  msb: 0 OUTPUT
		NetFlow* DONE_A0_B; // net ID: done lsb: 0  msb: 0 OUTPUT
		NetFlow* GWE_A0_B; // net ID: gwe lsb: 0  msb: 0 OUTPUT
		NetFlow* GTS__B_A0_B; // net ID: gts_b lsb: 0  msb: 0 OUTPUT
		NetFlow* SHUTDOWN_A0_B; // net ID: shutdown lsb: 0  msb: 0 INPUT
		NetFlow* CCLK_A0_B; // net ID: cclk lsb: 0  msb: 0 INPUT
		NetFlow* POR_A0_B; // net ID: por lsb: 0  msb: 0 INPUT
		
		public: FPGA_startup_VIRTEX4(
			const char * name,
			//Verilog Parameters:
			//Verilog Ports in definition order:
			NetFlow* BUS__RESET_A0_B, // net ID: bus_reset lsb: 0  msb: 0 OUTPUT
			NetFlow* GHIGH__B_A0_B, // net ID: ghigh_b lsb: 0  msb: 0 OUTPUT
			NetFlow* GSR_A0_B, // net ID: gsr lsb: 0  msb: 0 OUTPUT
			NetFlow* DONE_A0_B, // net ID: done lsb: 0  msb: 0 OUTPUT
			NetFlow* GWE_A0_B, // net ID: gwe lsb: 0  msb: 0 OUTPUT
			NetFlow* GTS__B_A0_B, // net ID: gts_b lsb: 0  msb: 0 OUTPUT
			NetFlow* SHUTDOWN_A0_B, // net ID: shutdown lsb: 0  msb: 0 INPUT
			NetFlow* CCLK_A0_B, // net ID: cclk lsb: 0  msb: 0 INPUT
			NetFlow* POR_A0_B // net ID: por lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			//Verilog Ports in definition order:
			this->BUS__RESET_A0_B = BUS__RESET_A0_B; // net ID: bus_reset lsb: 0  msb: 0 OUTPUT
			this->GHIGH__B_A0_B = GHIGH__B_A0_B; // net ID: ghigh_b lsb: 0  msb: 0 OUTPUT
			this->GSR_A0_B = GSR_A0_B; // net ID: gsr lsb: 0  msb: 0 OUTPUT
			this->DONE_A0_B = DONE_A0_B; // net ID: done lsb: 0  msb: 0 OUTPUT
			this->GWE_A0_B = GWE_A0_B; // net ID: gwe lsb: 0  msb: 0 OUTPUT
			this->GTS__B_A0_B = GTS__B_A0_B; // net ID: gts_b lsb: 0  msb: 0 OUTPUT
			this->SHUTDOWN_A0_B = SHUTDOWN_A0_B; // net ID: shutdown lsb: 0  msb: 0 INPUT
			this->CCLK_A0_B = CCLK_A0_B; // net ID: cclk lsb: 0  msb: 0 INPUT
			this->POR_A0_B = POR_A0_B; // net ID: por lsb: 0  msb: 0 INPUT
			
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
#endif // FPGA_STARTUP_VIRTEX4_H
