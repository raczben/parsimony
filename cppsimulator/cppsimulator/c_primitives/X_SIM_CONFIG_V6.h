/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_SIM_CONFIG_V6: public Primitive{

		//Verilog Parameters:
		parameter_string_t DEVICE_ID;
		parameter_enum_t ICAP_SUPPORT;
		parameter_string_t ICAP_WIDTH;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* BUSY; // net ID: BUSY lsb: 0  msb: 0 OUTPUT
		NetFlow* CSOB; // net ID: CSOB lsb: 0  msb: 0 OUTPUT
		NetFlow* DONE; // net ID: DONE lsb: 0  msb: 0 INOUT
		NetFlow* CCLK; // net ID: CCLK lsb: 0  msb: 0 INPUT
		NetFlow* CSB; // net ID: CSB lsb: 0  msb: 0 INPUT
		NetFlow* D; // net ID: D lsb: 0  msb: 0 INOUT
		NetFlow* INITB; // net ID: INITB lsb: 0  msb: 0 INOUT
		NetFlow* M; // net ID: M lsb: 0  msb: 2 INPUT
		NetFlow* PROGB; // net ID: PROGB lsb: 0  msb: 0 INPUT
		NetFlow* RDWRB; // net ID: RDWRB lsb: 0  msb: 0 INPUT
		
		X_SIM_CONFIG_V6(
			const char * name,
			//Verilog Parameters:
			parameter_string_t DEVICE_ID, // Default: 32'h0
			parameter_enum_t ICAP_SUPPORT, // Default: "FALSE"
			parameter_string_t ICAP_WIDTH, // Default: "X8"
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* BUSY, // net ID: BUSY lsb: 0  msb: 0 OUTPUT
			NetFlow* CSOB, // net ID: CSOB lsb: 0  msb: 0 OUTPUT
			NetFlow* DONE, // net ID: DONE lsb: 0  msb: 0 INOUT
			NetFlow* CCLK, // net ID: CCLK lsb: 0  msb: 0 INPUT
			NetFlow* CSB, // net ID: CSB lsb: 0  msb: 0 INPUT
			NetFlow* D, // net ID: D lsb: 0  msb: 0 INOUT
			NetFlow* INITB, // net ID: INITB lsb: 0  msb: 0 INOUT
			NetFlow* M, // net ID: M lsb: 0  msb: 2 INPUT
			NetFlow* PROGB, // net ID: PROGB lsb: 0  msb: 0 INPUT
			NetFlow* RDWRB // net ID: RDWRB lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->DEVICE_ID = DEVICE_ID; // Default: 32'h0
			this->ICAP_SUPPORT = ICAP_SUPPORT; // Default: "FALSE"
			this->ICAP_WIDTH = ICAP_WIDTH; // Default: "X8"
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->BUSY = BUSY; // net ID: BUSY lsb: 0  msb: 0 OUTPUT
			this->CSOB = CSOB; // net ID: CSOB lsb: 0  msb: 0 OUTPUT
			this->DONE = DONE; // net ID: DONE lsb: 0  msb: 0 INOUT
			this->CCLK = CCLK; // net ID: CCLK lsb: 0  msb: 0 INPUT
			this->CSB = CSB; // net ID: CSB lsb: 0  msb: 0 INPUT
			this->D = D; // net ID: D lsb: 0  msb: 0 INOUT
			this->INITB = INITB; // net ID: INITB lsb: 0  msb: 0 INOUT
			this->M = M; // net ID: M lsb: 0  msb: 2 INPUT
			this->PROGB = PROGB; // net ID: PROGB lsb: 0  msb: 0 INPUT
			this->RDWRB = RDWRB; // net ID: RDWRB lsb: 0  msb: 0 INPUT
			
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
