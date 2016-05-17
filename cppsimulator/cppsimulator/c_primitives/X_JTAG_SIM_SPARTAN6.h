/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_JTAG_SIM_SPARTAN6_H
#define X_JTAG_SIM_SPARTAN6_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_JTAG_SIM_SPARTAN6: public Primitive{

		//Verilog Parameters:
		parameter_string_t PART_NAME;
		//Verilog Ports in definition order:
		NetFlow* TDO_A0_B; // net ID: TDO lsb: 0  msb: 0 OUTPUT
		NetFlow* TCK_A0_B; // net ID: TCK lsb: 0  msb: 0 INPUT
		NetFlow* TDI_A0_B; // net ID: TDI lsb: 0  msb: 0 INPUT
		NetFlow* TMS_A0_B; // net ID: TMS lsb: 0  msb: 0 INPUT
		
		public: X_JTAG_SIM_SPARTAN6(
			const char * name,
			//Verilog Parameters:
			parameter_string_t PART_NAME, // Default: "LX4"
			//Verilog Ports in definition order:
			NetFlow* TDO_A0_B, // net ID: TDO lsb: 0  msb: 0 OUTPUT
			NetFlow* TCK_A0_B, // net ID: TCK lsb: 0  msb: 0 INPUT
			NetFlow* TDI_A0_B, // net ID: TDI lsb: 0  msb: 0 INPUT
			NetFlow* TMS_A0_B // net ID: TMS lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->PART_NAME = PART_NAME; // Default: "LX4"
			//Verilog Ports in definition order:
			this->TDO_A0_B = TDO_A0_B; // net ID: TDO lsb: 0  msb: 0 OUTPUT
			this->TCK_A0_B = TCK_A0_B; // net ID: TCK lsb: 0  msb: 0 INPUT
			this->TDI_A0_B = TDI_A0_B; // net ID: TDI lsb: 0  msb: 0 INPUT
			this->TMS_A0_B = TMS_A0_B; // net ID: TMS lsb: 0  msb: 0 INPUT
			
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
#endif // X_JTAG_SIM_SPARTAN6_H
