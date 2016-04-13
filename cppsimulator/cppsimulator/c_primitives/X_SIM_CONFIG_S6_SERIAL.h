/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_SIM_CONFIG_S6_SERIAL: public Primitive{

		//Verilog Parameters:
		parameter_string_t DEVICE_ID;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* DONE; // net ID: DONE lsb: 0  msb: 0 INOUT
		NetFlow* CCLK; // net ID: CCLK lsb: 0  msb: 0 INPUT
		NetFlow* DIN; // net ID: DIN lsb: 0  msb: 0 INPUT
		NetFlow* INITB; // net ID: INITB lsb: 0  msb: 0 INOUT
		NetFlow* M; // net ID: M lsb: 0  msb: 1 INPUT
		NetFlow* PROGB; // net ID: PROGB lsb: 0  msb: 0 INPUT
		
		X_SIM_CONFIG_S6_SERIAL(
			const char * name,
			//Verilog Parameters:
			parameter_string_t DEVICE_ID, // Default: 32'h0
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* DONE, // net ID: DONE lsb: 0  msb: 0 INOUT
			NetFlow* CCLK, // net ID: CCLK lsb: 0  msb: 0 INPUT
			NetFlow* DIN, // net ID: DIN lsb: 0  msb: 0 INPUT
			NetFlow* INITB, // net ID: INITB lsb: 0  msb: 0 INOUT
			NetFlow* M, // net ID: M lsb: 0  msb: 1 INPUT
			NetFlow* PROGB // net ID: PROGB lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->DEVICE_ID = DEVICE_ID; // Default: 32'h0
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->DONE = DONE; // net ID: DONE lsb: 0  msb: 0 INOUT
			this->CCLK = CCLK; // net ID: CCLK lsb: 0  msb: 0 INPUT
			this->DIN = DIN; // net ID: DIN lsb: 0  msb: 0 INPUT
			this->INITB = INITB; // net ID: INITB lsb: 0  msb: 0 INOUT
			this->M = M; // net ID: M lsb: 0  msb: 1 INPUT
			this->PROGB = PROGB; // net ID: PROGB lsb: 0  msb: 0 INPUT
			
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
