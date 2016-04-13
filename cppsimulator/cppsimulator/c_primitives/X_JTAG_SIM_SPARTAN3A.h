/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_JTAG_SIM_SPARTAN3A: public Primitive{

		//Verilog Parameters:
		parameter_string_t PART_NAME;
		//Verilog Ports in definition order:
		NetFlow* TDO; // net ID: TDO lsb: 0  msb: 0 OUTPUT
		NetFlow* TCK; // net ID: TCK lsb: 0  msb: 0 INPUT
		NetFlow* TDI; // net ID: TDI lsb: 0  msb: 0 INPUT
		NetFlow* TMS; // net ID: TMS lsb: 0  msb: 0 INPUT
		
		X_JTAG_SIM_SPARTAN3A(
			const char * name,
			//Verilog Parameters:
			parameter_string_t PART_NAME, // Default: "3S200A"
			//Verilog Ports in definition order:
			NetFlow* TDO, // net ID: TDO lsb: 0  msb: 0 OUTPUT
			NetFlow* TCK, // net ID: TCK lsb: 0  msb: 0 INPUT
			NetFlow* TDI, // net ID: TDI lsb: 0  msb: 0 INPUT
			NetFlow* TMS // net ID: TMS lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->PART_NAME = PART_NAME; // Default: "3S200A"
			//Verilog Ports in definition order:
			this->TDO = TDO; // net ID: TDO lsb: 0  msb: 0 OUTPUT
			this->TCK = TCK; // net ID: TCK lsb: 0  msb: 0 INPUT
			this->TDI = TDI; // net ID: TDI lsb: 0  msb: 0 INPUT
			this->TMS = TMS; // net ID: TMS lsb: 0  msb: 0 INPUT
			
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
