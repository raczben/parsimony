/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_BSCAN_SPARTAN3_H
#define X_BSCAN_SPARTAN3_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"
namespace CPrimitives {
	
	class X_BSCAN_SPARTAN3: public Primitive{

		//Verilog Parameters:
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* CAPTURE_A0_B; // net ID: CAPTURE lsb: 0  msb: 0 OUTPUT
		NetFlow* DRCK1_A0_B; // net ID: DRCK1 lsb: 0  msb: 0 OUTPUT
		NetFlow* DRCK2_A0_B; // net ID: DRCK2 lsb: 0  msb: 0 OUTPUT
		NetFlow* RESET_A0_B; // net ID: RESET lsb: 0  msb: 0 OUTPUT
		NetFlow* SEL1_A0_B; // net ID: SEL1 lsb: 0  msb: 0 OUTPUT
		NetFlow* SEL2_A0_B; // net ID: SEL2 lsb: 0  msb: 0 OUTPUT
		NetFlow* SHIFT_A0_B; // net ID: SHIFT lsb: 0  msb: 0 OUTPUT
		NetFlow* TDI_A0_B; // net ID: TDI lsb: 0  msb: 0 OUTPUT
		NetFlow* UPDATE_A0_B; // net ID: UPDATE lsb: 0  msb: 0 OUTPUT
		NetFlow* TDO1_A0_B; // net ID: TDO1 lsb: 0  msb: 0 INPUT
		NetFlow* TDO2_A0_B; // net ID: TDO2 lsb: 0  msb: 0 INPUT
		
		public: X_BSCAN_SPARTAN3(
			const char * name,
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* CAPTURE_A0_B, // net ID: CAPTURE lsb: 0  msb: 0 OUTPUT
			NetFlow* DRCK1_A0_B, // net ID: DRCK1 lsb: 0  msb: 0 OUTPUT
			NetFlow* DRCK2_A0_B, // net ID: DRCK2 lsb: 0  msb: 0 OUTPUT
			NetFlow* RESET_A0_B, // net ID: RESET lsb: 0  msb: 0 OUTPUT
			NetFlow* SEL1_A0_B, // net ID: SEL1 lsb: 0  msb: 0 OUTPUT
			NetFlow* SEL2_A0_B, // net ID: SEL2 lsb: 0  msb: 0 OUTPUT
			NetFlow* SHIFT_A0_B, // net ID: SHIFT lsb: 0  msb: 0 OUTPUT
			NetFlow* TDI_A0_B, // net ID: TDI lsb: 0  msb: 0 OUTPUT
			NetFlow* UPDATE_A0_B, // net ID: UPDATE lsb: 0  msb: 0 OUTPUT
			NetFlow* TDO1_A0_B, // net ID: TDO1 lsb: 0  msb: 0 INPUT
			NetFlow* TDO2_A0_B // net ID: TDO2 lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->CAPTURE_A0_B = CAPTURE_A0_B; // net ID: CAPTURE lsb: 0  msb: 0 OUTPUT
			this->DRCK1_A0_B = DRCK1_A0_B; // net ID: DRCK1 lsb: 0  msb: 0 OUTPUT
			this->DRCK2_A0_B = DRCK2_A0_B; // net ID: DRCK2 lsb: 0  msb: 0 OUTPUT
			this->RESET_A0_B = RESET_A0_B; // net ID: RESET lsb: 0  msb: 0 OUTPUT
			this->SEL1_A0_B = SEL1_A0_B; // net ID: SEL1 lsb: 0  msb: 0 OUTPUT
			this->SEL2_A0_B = SEL2_A0_B; // net ID: SEL2 lsb: 0  msb: 0 OUTPUT
			this->SHIFT_A0_B = SHIFT_A0_B; // net ID: SHIFT lsb: 0  msb: 0 OUTPUT
			this->TDI_A0_B = TDI_A0_B; // net ID: TDI lsb: 0  msb: 0 OUTPUT
			this->UPDATE_A0_B = UPDATE_A0_B; // net ID: UPDATE lsb: 0  msb: 0 OUTPUT
			this->TDO1_A0_B = TDO1_A0_B; // net ID: TDO1 lsb: 0  msb: 0 INPUT
			this->TDO2_A0_B = TDO2_A0_B; // net ID: TDO2 lsb: 0  msb: 0 INPUT
			
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
#endif // X_BSCAN_SPARTAN3_H
