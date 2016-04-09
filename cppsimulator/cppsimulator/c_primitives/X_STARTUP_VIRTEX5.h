/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_STARTUP_VIRTEX5{

		//Verilog Parameters:
		//Verilog Ports in definition order:
		NetFlow* CFGCLK; // OUTPUT
		NetFlow* CFGMCLK; // OUTPUT
		NetFlow* DINSPI; // OUTPUT
		NetFlow* EOS; // OUTPUT
		NetFlow* TCKSPI; // OUTPUT
		NetFlow* CLK; // INPUT
		NetFlow* GSR; // INPUT
		NetFlow* GTS; // INPUT
		NetFlow* USRCCLKO; // INPUT
		NetFlow* USRCCLKTS; // INPUT
		NetFlow* USRDONEO; // INPUT
		NetFlow* USRDONETS; // INPUT
		
	
		X_STARTUP_VIRTEX5(
			//Verilog Parameters:
			//Verilog Ports in definition order:
			NetFlow* CFGCLK, // OUTPUT
			NetFlow* CFGMCLK, // OUTPUT
			NetFlow* DINSPI, // OUTPUT
			NetFlow* EOS, // OUTPUT
			NetFlow* TCKSPI, // OUTPUT
			NetFlow* CLK, // INPUT
			NetFlow* GSR, // INPUT
			NetFlow* GTS, // INPUT
			NetFlow* USRCCLKO, // INPUT
			NetFlow* USRCCLKTS, // INPUT
			NetFlow* USRDONEO, // INPUT
			NetFlow* USRDONETS // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			//Verilog Ports in definition order:
			this->CFGCLK = CFGCLK; // OUTPUT
			this->CFGMCLK = CFGMCLK; // OUTPUT
			this->DINSPI = DINSPI; // OUTPUT
			this->EOS = EOS; // OUTPUT
			this->TCKSPI = TCKSPI; // OUTPUT
			this->CLK = CLK; // INPUT
			this->GSR = GSR; // INPUT
			this->GTS = GTS; // INPUT
			this->USRCCLKO = USRCCLKO; // INPUT
			this->USRCCLKTS = USRCCLKTS; // INPUT
			this->USRDONEO = USRDONEO; // INPUT
			this->USRDONETS = USRDONETS; // INPUT
		
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
