/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_SIM_CONFIG_V6_SERIAL_H
#define X_SIM_CONFIG_V6_SERIAL_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"
namespace CPrimitives {
	
	class X_SIM_CONFIG_V6_SERIAL: public Primitive{

		//Verilog Parameters:
		parameter_int_t DEVICE_ID;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* DONE_A0_B; // net ID: DONE lsb: 0  msb: 0 INOUT
		NetFlow* DOUT_A0_B; // net ID: DOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* CCLK_A0_B; // net ID: CCLK lsb: 0  msb: 0 INPUT
		NetFlow* DIN_A0_B; // net ID: DIN lsb: 0  msb: 0 INPUT
		NetFlow* INITB_A0_B; // net ID: INITB lsb: 0  msb: 0 INOUT
		NetFlow* M_A0_B; // net ID: M lsb: 0  msb: 2 INPUT
		NetFlow* M_A1_B; // net ID: M lsb: 0  msb: 2 INPUT
		NetFlow* M_A2_B; // net ID: M lsb: 0  msb: 2 INPUT
		NetFlow* PROGB_A0_B; // net ID: PROGB lsb: 0  msb: 0 INPUT
		
		public: X_SIM_CONFIG_V6_SERIAL(
			const char * name,
			//Verilog Parameters:
			parameter_int_t DEVICE_ID, // Default: 32'h0
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* DONE_A0_B, // net ID: DONE lsb: 0  msb: 0 INOUT
			NetFlow* DOUT_A0_B, // net ID: DOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* CCLK_A0_B, // net ID: CCLK lsb: 0  msb: 0 INPUT
			NetFlow* DIN_A0_B, // net ID: DIN lsb: 0  msb: 0 INPUT
			NetFlow* INITB_A0_B, // net ID: INITB lsb: 0  msb: 0 INOUT
			NetFlow* M_A0_B, // net ID: M lsb: 0  msb: 2 INPUT
			NetFlow* M_A1_B, // net ID: M lsb: 0  msb: 2 INPUT
			NetFlow* M_A2_B, // net ID: M lsb: 0  msb: 2 INPUT
			NetFlow* PROGB_A0_B // net ID: PROGB lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->DEVICE_ID = DEVICE_ID; // Default: 32'h0
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->DONE_A0_B = DONE_A0_B; // net ID: DONE lsb: 0  msb: 0 INOUT
			this->DOUT_A0_B = DOUT_A0_B; // net ID: DOUT lsb: 0  msb: 0 OUTPUT
			this->CCLK_A0_B = CCLK_A0_B; // net ID: CCLK lsb: 0  msb: 0 INPUT
			this->DIN_A0_B = DIN_A0_B; // net ID: DIN lsb: 0  msb: 0 INPUT
			this->INITB_A0_B = INITB_A0_B; // net ID: INITB lsb: 0  msb: 0 INOUT
			this->M_A0_B = M_A0_B; // net ID: M lsb: 0  msb: 2 INPUT
			this->M_A1_B = M_A1_B; // net ID: M lsb: 0  msb: 2 INPUT
			this->M_A2_B = M_A2_B; // net ID: M lsb: 0  msb: 2 INPUT
			this->PROGB_A0_B = PROGB_A0_B; // net ID: PROGB lsb: 0  msb: 0 INPUT
			
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
#endif // X_SIM_CONFIG_V6_SERIAL_H
