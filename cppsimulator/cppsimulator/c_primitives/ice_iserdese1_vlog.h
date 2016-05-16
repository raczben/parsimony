/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef ICE_ISERDESE1_VLOG_H
#define ICE_ISERDESE1_VLOG_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class ice_iserdese1_vlog: public Primitive{

		//Verilog Parameters:
		//Verilog Ports in definition order:
		NetFlow* CE1_A0_B; // net ID: ce1 lsb: 0  msb: 0 INPUT
		NetFlow* CE2_A0_B; // net ID: ce2 lsb: 0  msb: 0 INPUT
		NetFlow* NUM__CE_A0_B; // net ID: NUM_CE lsb: 0  msb: 0 INPUT
		NetFlow* CLKDIV_A0_B; // net ID: clkdiv lsb: 0  msb: 0 INPUT
		NetFlow* R_A0_B; // net ID: r lsb: 0  msb: 0 INPUT
		NetFlow* ICE_A0_B; // net ID: ice lsb: 0  msb: 0 OUTPUT
		
		public: ice_iserdese1_vlog(
			const char * name,
			//Verilog Parameters:
			//Verilog Ports in definition order:
			NetFlow* CE1_A0_B, // net ID: ce1 lsb: 0  msb: 0 INPUT
			NetFlow* CE2_A0_B, // net ID: ce2 lsb: 0  msb: 0 INPUT
			NetFlow* NUM__CE_A0_B, // net ID: NUM_CE lsb: 0  msb: 0 INPUT
			NetFlow* CLKDIV_A0_B, // net ID: clkdiv lsb: 0  msb: 0 INPUT
			NetFlow* R_A0_B, // net ID: r lsb: 0  msb: 0 INPUT
			NetFlow* ICE_A0_B // net ID: ice lsb: 0  msb: 0 OUTPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			//Verilog Ports in definition order:
			this->CE1_A0_B = CE1_A0_B; // net ID: ce1 lsb: 0  msb: 0 INPUT
			this->CE2_A0_B = CE2_A0_B; // net ID: ce2 lsb: 0  msb: 0 INPUT
			this->NUM__CE_A0_B = NUM__CE_A0_B; // net ID: NUM_CE lsb: 0  msb: 0 INPUT
			this->CLKDIV_A0_B = CLKDIV_A0_B; // net ID: clkdiv lsb: 0  msb: 0 INPUT
			this->R_A0_B = R_A0_B; // net ID: r lsb: 0  msb: 0 INPUT
			this->ICE_A0_B = ICE_A0_B; // net ID: ice lsb: 0  msb: 0 OUTPUT
			
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
#endif // ICE_ISERDESE1_VLOG_H
