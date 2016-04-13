/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class FPGA_startup_VIRTEX4: public Primitive{

		//Verilog Parameters:
		//Verilog Ports in definition order:
		NetFlow* bus_reset; // net ID: bus_reset lsb: 0  msb: 0 OUTPUT
		NetFlow* ghigh_b; // net ID: ghigh_b lsb: 0  msb: 0 OUTPUT
		NetFlow* gsr; // net ID: gsr lsb: 0  msb: 0 OUTPUT
		NetFlow* done; // net ID: done lsb: 0  msb: 0 OUTPUT
		NetFlow* gwe; // net ID: gwe lsb: 0  msb: 0 OUTPUT
		NetFlow* gts_b; // net ID: gts_b lsb: 0  msb: 0 OUTPUT
		NetFlow* shutdown; // net ID: shutdown lsb: 0  msb: 0 INPUT
		NetFlow* cclk; // net ID: cclk lsb: 0  msb: 0 INPUT
		NetFlow* por; // net ID: por lsb: 0  msb: 0 INPUT
		
		FPGA_startup_VIRTEX4(
			const char * name,
			//Verilog Parameters:
			//Verilog Ports in definition order:
			NetFlow* bus_reset, // net ID: bus_reset lsb: 0  msb: 0 OUTPUT
			NetFlow* ghigh_b, // net ID: ghigh_b lsb: 0  msb: 0 OUTPUT
			NetFlow* gsr, // net ID: gsr lsb: 0  msb: 0 OUTPUT
			NetFlow* done, // net ID: done lsb: 0  msb: 0 OUTPUT
			NetFlow* gwe, // net ID: gwe lsb: 0  msb: 0 OUTPUT
			NetFlow* gts_b, // net ID: gts_b lsb: 0  msb: 0 OUTPUT
			NetFlow* shutdown, // net ID: shutdown lsb: 0  msb: 0 INPUT
			NetFlow* cclk, // net ID: cclk lsb: 0  msb: 0 INPUT
			NetFlow* por // net ID: por lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			//Verilog Ports in definition order:
			this->bus_reset = bus_reset; // net ID: bus_reset lsb: 0  msb: 0 OUTPUT
			this->ghigh_b = ghigh_b; // net ID: ghigh_b lsb: 0  msb: 0 OUTPUT
			this->gsr = gsr; // net ID: gsr lsb: 0  msb: 0 OUTPUT
			this->done = done; // net ID: done lsb: 0  msb: 0 OUTPUT
			this->gwe = gwe; // net ID: gwe lsb: 0  msb: 0 OUTPUT
			this->gts_b = gts_b; // net ID: gts_b lsb: 0  msb: 0 OUTPUT
			this->shutdown = shutdown; // net ID: shutdown lsb: 0  msb: 0 INPUT
			this->cclk = cclk; // net ID: cclk lsb: 0  msb: 0 INPUT
			this->por = por; // net ID: por lsb: 0  msb: 0 INPUT
			
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
