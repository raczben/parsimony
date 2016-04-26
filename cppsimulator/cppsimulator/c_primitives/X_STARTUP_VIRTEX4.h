/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_STARTUP_VIRTEX4_H
#define X_STARTUP_VIRTEX4_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_STARTUP_VIRTEX4: public Primitive{

		//Verilog Parameters:
		//Verilog Ports in definition order:
		NetFlow* EOS_A0_B; // net ID: EOS lsb: 0  msb: 0 OUTPUT
		NetFlow* CLK_A0_B; // net ID: CLK lsb: 0  msb: 0 INPUT
		NetFlow* GSR_A0_B; // net ID: GSR lsb: 0  msb: 0 INPUT
		NetFlow* GTS_A0_B; // net ID: GTS lsb: 0  msb: 0 INPUT
		NetFlow* USRCCLKO_A0_B; // net ID: USRCCLKO lsb: 0  msb: 0 INPUT
		NetFlow* USRCCLKTS_A0_B; // net ID: USRCCLKTS lsb: 0  msb: 0 INPUT
		NetFlow* USRDONEO_A0_B; // net ID: USRDONEO lsb: 0  msb: 0 INPUT
		NetFlow* USRDONETS_A0_B; // net ID: USRDONETS lsb: 0  msb: 0 INPUT
		
		public: X_STARTUP_VIRTEX4(
			const char * name,
			//Verilog Parameters:
			//Verilog Ports in definition order:
			NetFlow* EOS_A0_B, // net ID: EOS lsb: 0  msb: 0 OUTPUT
			NetFlow* CLK_A0_B, // net ID: CLK lsb: 0  msb: 0 INPUT
			NetFlow* GSR_A0_B, // net ID: GSR lsb: 0  msb: 0 INPUT
			NetFlow* GTS_A0_B, // net ID: GTS lsb: 0  msb: 0 INPUT
			NetFlow* USRCCLKO_A0_B, // net ID: USRCCLKO lsb: 0  msb: 0 INPUT
			NetFlow* USRCCLKTS_A0_B, // net ID: USRCCLKTS lsb: 0  msb: 0 INPUT
			NetFlow* USRDONEO_A0_B, // net ID: USRDONEO lsb: 0  msb: 0 INPUT
			NetFlow* USRDONETS_A0_B // net ID: USRDONETS lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			//Verilog Ports in definition order:
			this->EOS_A0_B = EOS_A0_B; // net ID: EOS lsb: 0  msb: 0 OUTPUT
			this->CLK_A0_B = CLK_A0_B; // net ID: CLK lsb: 0  msb: 0 INPUT
			this->GSR_A0_B = GSR_A0_B; // net ID: GSR lsb: 0  msb: 0 INPUT
			this->GTS_A0_B = GTS_A0_B; // net ID: GTS lsb: 0  msb: 0 INPUT
			this->USRCCLKO_A0_B = USRCCLKO_A0_B; // net ID: USRCCLKO lsb: 0  msb: 0 INPUT
			this->USRCCLKTS_A0_B = USRCCLKTS_A0_B; // net ID: USRCCLKTS lsb: 0  msb: 0 INPUT
			this->USRDONEO_A0_B = USRDONEO_A0_B; // net ID: USRDONEO lsb: 0  msb: 0 INPUT
			this->USRDONETS_A0_B = USRDONETS_A0_B; // net ID: USRDONETS lsb: 0  msb: 0 INPUT
			
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
#endif // X_STARTUP_VIRTEX4_H
