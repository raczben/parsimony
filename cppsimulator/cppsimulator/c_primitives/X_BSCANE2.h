/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_BSCANE2_H
#define X_BSCANE2_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_BSCANE2: public Primitive{

		//Verilog Parameters:
		parameter_enum_t DISABLE_JTAG;
		parameter_int_t JTAG_CHAIN;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* CAPTURE_A0_B; // net ID: CAPTURE lsb: 0  msb: 0 OUTPUT
		NetFlow* DRCK_A0_B; // net ID: DRCK lsb: 0  msb: 0 OUTPUT
		NetFlow* RESET_A0_B; // net ID: RESET lsb: 0  msb: 0 OUTPUT
		NetFlow* RUNTEST_A0_B; // net ID: RUNTEST lsb: 0  msb: 0 OUTPUT
		NetFlow* SEL_A0_B; // net ID: SEL lsb: 0  msb: 0 OUTPUT
		NetFlow* SHIFT_A0_B; // net ID: SHIFT lsb: 0  msb: 0 OUTPUT
		NetFlow* TCK_A0_B; // net ID: TCK lsb: 0  msb: 0 OUTPUT
		NetFlow* TDI_A0_B; // net ID: TDI lsb: 0  msb: 0 OUTPUT
		NetFlow* TMS_A0_B; // net ID: TMS lsb: 0  msb: 0 OUTPUT
		NetFlow* UPDATE_A0_B; // net ID: UPDATE lsb: 0  msb: 0 OUTPUT
		NetFlow* TDO_A0_B; // net ID: TDO lsb: 0  msb: 0 INPUT
		
		public: X_BSCANE2(
			const char * name,
			//Verilog Parameters:
			parameter_enum_t DISABLE_JTAG, // Default: "FALSE"
			parameter_int_t JTAG_CHAIN, // Default: 1
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* CAPTURE_A0_B, // net ID: CAPTURE lsb: 0  msb: 0 OUTPUT
			NetFlow* DRCK_A0_B, // net ID: DRCK lsb: 0  msb: 0 OUTPUT
			NetFlow* RESET_A0_B, // net ID: RESET lsb: 0  msb: 0 OUTPUT
			NetFlow* RUNTEST_A0_B, // net ID: RUNTEST lsb: 0  msb: 0 OUTPUT
			NetFlow* SEL_A0_B, // net ID: SEL lsb: 0  msb: 0 OUTPUT
			NetFlow* SHIFT_A0_B, // net ID: SHIFT lsb: 0  msb: 0 OUTPUT
			NetFlow* TCK_A0_B, // net ID: TCK lsb: 0  msb: 0 OUTPUT
			NetFlow* TDI_A0_B, // net ID: TDI lsb: 0  msb: 0 OUTPUT
			NetFlow* TMS_A0_B, // net ID: TMS lsb: 0  msb: 0 OUTPUT
			NetFlow* UPDATE_A0_B, // net ID: UPDATE lsb: 0  msb: 0 OUTPUT
			NetFlow* TDO_A0_B // net ID: TDO lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->DISABLE_JTAG = DISABLE_JTAG; // Default: "FALSE"
			this->JTAG_CHAIN = JTAG_CHAIN; // Default: 1
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->CAPTURE_A0_B = CAPTURE_A0_B; // net ID: CAPTURE lsb: 0  msb: 0 OUTPUT
			this->DRCK_A0_B = DRCK_A0_B; // net ID: DRCK lsb: 0  msb: 0 OUTPUT
			this->RESET_A0_B = RESET_A0_B; // net ID: RESET lsb: 0  msb: 0 OUTPUT
			this->RUNTEST_A0_B = RUNTEST_A0_B; // net ID: RUNTEST lsb: 0  msb: 0 OUTPUT
			this->SEL_A0_B = SEL_A0_B; // net ID: SEL lsb: 0  msb: 0 OUTPUT
			this->SHIFT_A0_B = SHIFT_A0_B; // net ID: SHIFT lsb: 0  msb: 0 OUTPUT
			this->TCK_A0_B = TCK_A0_B; // net ID: TCK lsb: 0  msb: 0 OUTPUT
			this->TDI_A0_B = TDI_A0_B; // net ID: TDI lsb: 0  msb: 0 OUTPUT
			this->TMS_A0_B = TMS_A0_B; // net ID: TMS lsb: 0  msb: 0 OUTPUT
			this->UPDATE_A0_B = UPDATE_A0_B; // net ID: UPDATE lsb: 0  msb: 0 OUTPUT
			this->TDO_A0_B = TDO_A0_B; // net ID: TDO lsb: 0  msb: 0 INPUT
			
			register_wait_on_event_nets();
			
		}
		
		void register_wait_on_event_nets(){
		// TODO
		}
		
		void calculate(simtime_t time){
		// TODO
		}
		};
		
}
#endif // X_BSCANE2_H
