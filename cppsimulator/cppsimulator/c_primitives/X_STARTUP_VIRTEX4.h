/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_STARTUP_VIRTEX4: public Primitive{

		//Verilog Parameters:
		//Verilog Ports in definition order:
		NetFlow* EOS; // net ID: EOS lsb: 0  msb: 0 OUTPUT
		NetFlow* CLK; // net ID: CLK lsb: 0  msb: 0 INPUT
		NetFlow* GSR; // net ID: GSR lsb: 0  msb: 0 INPUT
		NetFlow* GTS; // net ID: GTS lsb: 0  msb: 0 INPUT
		NetFlow* USRCCLKO; // net ID: USRCCLKO lsb: 0  msb: 0 INPUT
		NetFlow* USRCCLKTS; // net ID: USRCCLKTS lsb: 0  msb: 0 INPUT
		NetFlow* USRDONEO; // net ID: USRDONEO lsb: 0  msb: 0 INPUT
		NetFlow* USRDONETS; // net ID: USRDONETS lsb: 0  msb: 0 INPUT
		
		X_STARTUP_VIRTEX4(
			const char * name,
			//Verilog Parameters:
			//Verilog Ports in definition order:
			NetFlow* EOS, // net ID: EOS lsb: 0  msb: 0 OUTPUT
			NetFlow* CLK, // net ID: CLK lsb: 0  msb: 0 INPUT
			NetFlow* GSR, // net ID: GSR lsb: 0  msb: 0 INPUT
			NetFlow* GTS, // net ID: GTS lsb: 0  msb: 0 INPUT
			NetFlow* USRCCLKO, // net ID: USRCCLKO lsb: 0  msb: 0 INPUT
			NetFlow* USRCCLKTS, // net ID: USRCCLKTS lsb: 0  msb: 0 INPUT
			NetFlow* USRDONEO, // net ID: USRDONEO lsb: 0  msb: 0 INPUT
			NetFlow* USRDONETS // net ID: USRDONETS lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			//Verilog Ports in definition order:
			this->EOS = EOS; // net ID: EOS lsb: 0  msb: 0 OUTPUT
			this->CLK = CLK; // net ID: CLK lsb: 0  msb: 0 INPUT
			this->GSR = GSR; // net ID: GSR lsb: 0  msb: 0 INPUT
			this->GTS = GTS; // net ID: GTS lsb: 0  msb: 0 INPUT
			this->USRCCLKO = USRCCLKO; // net ID: USRCCLKO lsb: 0  msb: 0 INPUT
			this->USRCCLKTS = USRCCLKTS; // net ID: USRCCLKTS lsb: 0  msb: 0 INPUT
			this->USRDONEO = USRDONEO; // net ID: USRDONEO lsb: 0  msb: 0 INPUT
			this->USRDONETS = USRDONETS; // net ID: USRDONETS lsb: 0  msb: 0 INPUT
			
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
