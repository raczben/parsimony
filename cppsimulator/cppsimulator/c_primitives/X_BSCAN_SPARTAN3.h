/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_BSCAN_SPARTAN3: public Primitive{

		//Verilog Parameters:
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* CAPTURE; // net ID: CAPTURE lsb: 0  msb: 0 OUTPUT
		NetFlow* DRCK1; // net ID: DRCK1 lsb: 0  msb: 0 OUTPUT
		NetFlow* DRCK2; // net ID: DRCK2 lsb: 0  msb: 0 OUTPUT
		NetFlow* RESET; // net ID: RESET lsb: 0  msb: 0 OUTPUT
		NetFlow* SEL1; // net ID: SEL1 lsb: 0  msb: 0 OUTPUT
		NetFlow* SEL2; // net ID: SEL2 lsb: 0  msb: 0 OUTPUT
		NetFlow* SHIFT; // net ID: SHIFT lsb: 0  msb: 0 OUTPUT
		NetFlow* TDI; // net ID: TDI lsb: 0  msb: 0 OUTPUT
		NetFlow* UPDATE; // net ID: UPDATE lsb: 0  msb: 0 OUTPUT
		NetFlow* TDO1; // net ID: TDO1 lsb: 0  msb: 0 INPUT
		NetFlow* TDO2; // net ID: TDO2 lsb: 0  msb: 0 INPUT
		
		X_BSCAN_SPARTAN3(
			const char * name,
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* CAPTURE, // net ID: CAPTURE lsb: 0  msb: 0 OUTPUT
			NetFlow* DRCK1, // net ID: DRCK1 lsb: 0  msb: 0 OUTPUT
			NetFlow* DRCK2, // net ID: DRCK2 lsb: 0  msb: 0 OUTPUT
			NetFlow* RESET, // net ID: RESET lsb: 0  msb: 0 OUTPUT
			NetFlow* SEL1, // net ID: SEL1 lsb: 0  msb: 0 OUTPUT
			NetFlow* SEL2, // net ID: SEL2 lsb: 0  msb: 0 OUTPUT
			NetFlow* SHIFT, // net ID: SHIFT lsb: 0  msb: 0 OUTPUT
			NetFlow* TDI, // net ID: TDI lsb: 0  msb: 0 OUTPUT
			NetFlow* UPDATE, // net ID: UPDATE lsb: 0  msb: 0 OUTPUT
			NetFlow* TDO1, // net ID: TDO1 lsb: 0  msb: 0 INPUT
			NetFlow* TDO2 // net ID: TDO2 lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->CAPTURE = CAPTURE; // net ID: CAPTURE lsb: 0  msb: 0 OUTPUT
			this->DRCK1 = DRCK1; // net ID: DRCK1 lsb: 0  msb: 0 OUTPUT
			this->DRCK2 = DRCK2; // net ID: DRCK2 lsb: 0  msb: 0 OUTPUT
			this->RESET = RESET; // net ID: RESET lsb: 0  msb: 0 OUTPUT
			this->SEL1 = SEL1; // net ID: SEL1 lsb: 0  msb: 0 OUTPUT
			this->SEL2 = SEL2; // net ID: SEL2 lsb: 0  msb: 0 OUTPUT
			this->SHIFT = SHIFT; // net ID: SHIFT lsb: 0  msb: 0 OUTPUT
			this->TDI = TDI; // net ID: TDI lsb: 0  msb: 0 OUTPUT
			this->UPDATE = UPDATE; // net ID: UPDATE lsb: 0  msb: 0 OUTPUT
			this->TDO1 = TDO1; // net ID: TDO1 lsb: 0  msb: 0 INPUT
			this->TDO2 = TDO2; // net ID: TDO2 lsb: 0  msb: 0 INPUT
			
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
