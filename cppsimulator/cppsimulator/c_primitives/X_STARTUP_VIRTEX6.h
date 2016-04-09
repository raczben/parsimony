/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_STARTUP_VIRTEX6{

		//Verilog Parameters:
		parameter_string_t LOC;
		parameter_enum_t PROG_USR;
		//Verilog Ports in definition order:
		NetFlow* CFGCLK; // OUTPUT
		NetFlow* CFGMCLK; // OUTPUT
		NetFlow* DINSPI; // OUTPUT
		NetFlow* EOS; // OUTPUT
		NetFlow* PREQ; // OUTPUT
		NetFlow* TCKSPI; // OUTPUT
		NetFlow* CLK; // INPUT
		NetFlow* GSR; // INPUT
		NetFlow* GTS; // INPUT
		NetFlow* KEYCLEARB; // INPUT
		NetFlow* PACK; // INPUT
		NetFlow* USRCCLKO; // INPUT
		NetFlow* USRCCLKTS; // INPUT
		NetFlow* USRDONEO; // INPUT
		NetFlow* USRDONETS; // INPUT
		
	
		X_STARTUP_VIRTEX6(
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_enum_t PROG_USR, // Default: "FALSE"
			//Verilog Ports in definition order:
			NetFlow* CFGCLK, // OUTPUT
			NetFlow* CFGMCLK, // OUTPUT
			NetFlow* DINSPI, // OUTPUT
			NetFlow* EOS, // OUTPUT
			NetFlow* PREQ, // OUTPUT
			NetFlow* TCKSPI, // OUTPUT
			NetFlow* CLK, // INPUT
			NetFlow* GSR, // INPUT
			NetFlow* GTS, // INPUT
			NetFlow* KEYCLEARB, // INPUT
			NetFlow* PACK, // INPUT
			NetFlow* USRCCLKO, // INPUT
			NetFlow* USRCCLKTS, // INPUT
			NetFlow* USRDONEO, // INPUT
			NetFlow* USRDONETS // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			this->PROG_USR = PROG_USR; // Default: "FALSE"
			//Verilog Ports in definition order:
			this->CFGCLK = CFGCLK; // OUTPUT
			this->CFGMCLK = CFGMCLK; // OUTPUT
			this->DINSPI = DINSPI; // OUTPUT
			this->EOS = EOS; // OUTPUT
			this->PREQ = PREQ; // OUTPUT
			this->TCKSPI = TCKSPI; // OUTPUT
			this->CLK = CLK; // INPUT
			this->GSR = GSR; // INPUT
			this->GTS = GTS; // INPUT
			this->KEYCLEARB = KEYCLEARB; // INPUT
			this->PACK = PACK; // INPUT
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
