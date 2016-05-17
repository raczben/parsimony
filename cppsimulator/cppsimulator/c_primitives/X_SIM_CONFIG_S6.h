/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_SIM_CONFIG_S6_H
#define X_SIM_CONFIG_S6_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_SIM_CONFIG_S6: public Primitive{

		//Verilog Parameters:
		parameter_int_t cfg_Tprog;
		parameter_int_t cfg_Tpl;
		parameter_int_t DEVICE_ID;
		parameter_enum_t ICAP_SUPPORT;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* BUSY_A0_B; // net ID: BUSY lsb: 0  msb: 0 OUTPUT
		NetFlow* CSOB_A0_B; // net ID: CSOB lsb: 0  msb: 0 OUTPUT
		NetFlow* DONE_A0_B; // net ID: DONE lsb: 0  msb: 0 UNDEFINED
		NetFlow* CCLK_A0_B; // net ID: CCLK lsb: 0  msb: 0 INPUT
		NetFlow* D_A0_B; // net ID: D lsb: 0  msb: 0 UNDEFINED
		NetFlow* CSIB_A0_B; // net ID: CSIB lsb: 0  msb: 0 INPUT
		NetFlow* INITB_A0_B; // net ID: INITB lsb: 0  msb: 0 UNDEFINED
		NetFlow* M_A1_B; // net ID: M lsb: 0  msb: 1 INPUT
		NetFlow* M_A0_B; // net ID: M lsb: 0  msb: 1 INPUT
		NetFlow* PROGB_A0_B; // net ID: PROGB lsb: 0  msb: 0 INPUT
		NetFlow* RDWRB_A0_B; // net ID: RDWRB lsb: 0  msb: 0 INPUT
		
		public: X_SIM_CONFIG_S6(
			const char * name,
			//Verilog Parameters:
			parameter_int_t cfg_Tprog, // Default: 500000
			parameter_int_t cfg_Tpl, // Default: 5000000
			parameter_int_t DEVICE_ID, // Default: 32'h0
			parameter_enum_t ICAP_SUPPORT, // Default: "FALSE"
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* BUSY_A0_B, // net ID: BUSY lsb: 0  msb: 0 OUTPUT
			NetFlow* CSOB_A0_B, // net ID: CSOB lsb: 0  msb: 0 OUTPUT
			NetFlow* DONE_A0_B, // net ID: DONE lsb: 0  msb: 0 UNDEFINED
			NetFlow* CCLK_A0_B, // net ID: CCLK lsb: 0  msb: 0 INPUT
			NetFlow* D_A0_B, // net ID: D lsb: 0  msb: 0 UNDEFINED
			NetFlow* CSIB_A0_B, // net ID: CSIB lsb: 0  msb: 0 INPUT
			NetFlow* INITB_A0_B, // net ID: INITB lsb: 0  msb: 0 UNDEFINED
			NetFlow* M_A1_B, // net ID: M lsb: 0  msb: 1 INPUT
			NetFlow* M_A0_B, // net ID: M lsb: 0  msb: 1 INPUT
			NetFlow* PROGB_A0_B, // net ID: PROGB lsb: 0  msb: 0 INPUT
			NetFlow* RDWRB_A0_B // net ID: RDWRB lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->cfg_Tprog = cfg_Tprog; // Default: 500000
			this->cfg_Tpl = cfg_Tpl; // Default: 5000000
			this->DEVICE_ID = DEVICE_ID; // Default: 32'h0
			this->ICAP_SUPPORT = ICAP_SUPPORT; // Default: "FALSE"
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->BUSY_A0_B = BUSY_A0_B; // net ID: BUSY lsb: 0  msb: 0 OUTPUT
			this->CSOB_A0_B = CSOB_A0_B; // net ID: CSOB lsb: 0  msb: 0 OUTPUT
			this->DONE_A0_B = DONE_A0_B; // net ID: DONE lsb: 0  msb: 0 UNDEFINED
			this->CCLK_A0_B = CCLK_A0_B; // net ID: CCLK lsb: 0  msb: 0 INPUT
			this->D_A0_B = D_A0_B; // net ID: D lsb: 0  msb: 0 UNDEFINED
			this->CSIB_A0_B = CSIB_A0_B; // net ID: CSIB lsb: 0  msb: 0 INPUT
			this->INITB_A0_B = INITB_A0_B; // net ID: INITB lsb: 0  msb: 0 UNDEFINED
			this->M_A1_B = M_A1_B; // net ID: M lsb: 0  msb: 1 INPUT
			this->M_A0_B = M_A0_B; // net ID: M lsb: 0  msb: 1 INPUT
			this->PROGB_A0_B = PROGB_A0_B; // net ID: PROGB lsb: 0  msb: 0 INPUT
			this->RDWRB_A0_B = RDWRB_A0_B; // net ID: RDWRB lsb: 0  msb: 0 INPUT
			
			register_wait_on_event_nets();
			
		}
		
		void register_wait_on_event_nets(){
		// TODO
		}
		
		bool calculate(simtime_t time){
		// TODO
		}
		};
		
}
#endif // X_SIM_CONFIG_S6_H
