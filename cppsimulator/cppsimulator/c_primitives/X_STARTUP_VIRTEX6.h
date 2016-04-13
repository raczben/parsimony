/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_STARTUP_VIRTEX6: public Primitive{

		//Verilog Parameters:
		parameter_string_t LOC;
		parameter_enum_t PROG_USR;
		//Verilog Ports in definition order:
		NetFlow* CFGCLK; // net ID: CFGCLK lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGMCLK; // net ID: CFGMCLK lsb: 0  msb: 0 OUTPUT
		NetFlow* DINSPI; // net ID: DINSPI lsb: 0  msb: 0 OUTPUT
		NetFlow* EOS; // net ID: EOS lsb: 0  msb: 0 OUTPUT
		NetFlow* PREQ; // net ID: PREQ lsb: 0  msb: 0 OUTPUT
		NetFlow* TCKSPI; // net ID: TCKSPI lsb: 0  msb: 0 OUTPUT
		NetFlow* CLK; // net ID: CLK lsb: 0  msb: 0 INPUT
		NetFlow* GSR; // net ID: GSR lsb: 0  msb: 0 INPUT
		NetFlow* GTS; // net ID: GTS lsb: 0  msb: 0 INPUT
		NetFlow* KEYCLEARB; // net ID: KEYCLEARB lsb: 0  msb: 0 INPUT
		NetFlow* PACK; // net ID: PACK lsb: 0  msb: 0 INPUT
		NetFlow* USRCCLKO; // net ID: USRCCLKO lsb: 0  msb: 0 INPUT
		NetFlow* USRCCLKTS; // net ID: USRCCLKTS lsb: 0  msb: 0 INPUT
		NetFlow* USRDONEO; // net ID: USRDONEO lsb: 0  msb: 0 INPUT
		NetFlow* USRDONETS; // net ID: USRDONETS lsb: 0  msb: 0 INPUT
		
		X_STARTUP_VIRTEX6(
			const char * name,
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_enum_t PROG_USR, // Default: "FALSE"
			//Verilog Ports in definition order:
			NetFlow* CFGCLK, // net ID: CFGCLK lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGMCLK, // net ID: CFGMCLK lsb: 0  msb: 0 OUTPUT
			NetFlow* DINSPI, // net ID: DINSPI lsb: 0  msb: 0 OUTPUT
			NetFlow* EOS, // net ID: EOS lsb: 0  msb: 0 OUTPUT
			NetFlow* PREQ, // net ID: PREQ lsb: 0  msb: 0 OUTPUT
			NetFlow* TCKSPI, // net ID: TCKSPI lsb: 0  msb: 0 OUTPUT
			NetFlow* CLK, // net ID: CLK lsb: 0  msb: 0 INPUT
			NetFlow* GSR, // net ID: GSR lsb: 0  msb: 0 INPUT
			NetFlow* GTS, // net ID: GTS lsb: 0  msb: 0 INPUT
			NetFlow* KEYCLEARB, // net ID: KEYCLEARB lsb: 0  msb: 0 INPUT
			NetFlow* PACK, // net ID: PACK lsb: 0  msb: 0 INPUT
			NetFlow* USRCCLKO, // net ID: USRCCLKO lsb: 0  msb: 0 INPUT
			NetFlow* USRCCLKTS, // net ID: USRCCLKTS lsb: 0  msb: 0 INPUT
			NetFlow* USRDONEO, // net ID: USRDONEO lsb: 0  msb: 0 INPUT
			NetFlow* USRDONETS // net ID: USRDONETS lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			this->PROG_USR = PROG_USR; // Default: "FALSE"
			//Verilog Ports in definition order:
			this->CFGCLK = CFGCLK; // net ID: CFGCLK lsb: 0  msb: 0 OUTPUT
			this->CFGMCLK = CFGMCLK; // net ID: CFGMCLK lsb: 0  msb: 0 OUTPUT
			this->DINSPI = DINSPI; // net ID: DINSPI lsb: 0  msb: 0 OUTPUT
			this->EOS = EOS; // net ID: EOS lsb: 0  msb: 0 OUTPUT
			this->PREQ = PREQ; // net ID: PREQ lsb: 0  msb: 0 OUTPUT
			this->TCKSPI = TCKSPI; // net ID: TCKSPI lsb: 0  msb: 0 OUTPUT
			this->CLK = CLK; // net ID: CLK lsb: 0  msb: 0 INPUT
			this->GSR = GSR; // net ID: GSR lsb: 0  msb: 0 INPUT
			this->GTS = GTS; // net ID: GTS lsb: 0  msb: 0 INPUT
			this->KEYCLEARB = KEYCLEARB; // net ID: KEYCLEARB lsb: 0  msb: 0 INPUT
			this->PACK = PACK; // net ID: PACK lsb: 0  msb: 0 INPUT
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
