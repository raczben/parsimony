/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_BSCAN_VIRTEX6: public Primitive{

		//Verilog Parameters:
		parameter_enum_t DISABLE_JTAG;
		parameter_string_t JTAG_CHAIN;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* CAPTURE; // net ID: CAPTURE lsb: 0  msb: 0 OUTPUT
		NetFlow* DRCK; // net ID: DRCK lsb: 0  msb: 0 OUTPUT
		NetFlow* RESET; // net ID: RESET lsb: 0  msb: 0 OUTPUT
		NetFlow* RUNTEST; // net ID: RUNTEST lsb: 0  msb: 0 OUTPUT
		NetFlow* SEL; // net ID: SEL lsb: 0  msb: 0 OUTPUT
		NetFlow* SHIFT; // net ID: SHIFT lsb: 0  msb: 0 OUTPUT
		NetFlow* TCK; // net ID: TCK lsb: 0  msb: 0 OUTPUT
		NetFlow* TDI; // net ID: TDI lsb: 0  msb: 0 OUTPUT
		NetFlow* TMS; // net ID: TMS lsb: 0  msb: 0 OUTPUT
		NetFlow* UPDATE; // net ID: UPDATE lsb: 0  msb: 0 OUTPUT
		NetFlow* TDO; // net ID: TDO lsb: 0  msb: 0 INPUT
		
		X_BSCAN_VIRTEX6(
			const char * name,
			//Verilog Parameters:
			parameter_enum_t DISABLE_JTAG, // Default: "FALSE"
			parameter_string_t JTAG_CHAIN, // Default: 1
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* CAPTURE, // net ID: CAPTURE lsb: 0  msb: 0 OUTPUT
			NetFlow* DRCK, // net ID: DRCK lsb: 0  msb: 0 OUTPUT
			NetFlow* RESET, // net ID: RESET lsb: 0  msb: 0 OUTPUT
			NetFlow* RUNTEST, // net ID: RUNTEST lsb: 0  msb: 0 OUTPUT
			NetFlow* SEL, // net ID: SEL lsb: 0  msb: 0 OUTPUT
			NetFlow* SHIFT, // net ID: SHIFT lsb: 0  msb: 0 OUTPUT
			NetFlow* TCK, // net ID: TCK lsb: 0  msb: 0 OUTPUT
			NetFlow* TDI, // net ID: TDI lsb: 0  msb: 0 OUTPUT
			NetFlow* TMS, // net ID: TMS lsb: 0  msb: 0 OUTPUT
			NetFlow* UPDATE, // net ID: UPDATE lsb: 0  msb: 0 OUTPUT
			NetFlow* TDO // net ID: TDO lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->DISABLE_JTAG = DISABLE_JTAG; // Default: "FALSE"
			this->JTAG_CHAIN = JTAG_CHAIN; // Default: 1
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->CAPTURE = CAPTURE; // net ID: CAPTURE lsb: 0  msb: 0 OUTPUT
			this->DRCK = DRCK; // net ID: DRCK lsb: 0  msb: 0 OUTPUT
			this->RESET = RESET; // net ID: RESET lsb: 0  msb: 0 OUTPUT
			this->RUNTEST = RUNTEST; // net ID: RUNTEST lsb: 0  msb: 0 OUTPUT
			this->SEL = SEL; // net ID: SEL lsb: 0  msb: 0 OUTPUT
			this->SHIFT = SHIFT; // net ID: SHIFT lsb: 0  msb: 0 OUTPUT
			this->TCK = TCK; // net ID: TCK lsb: 0  msb: 0 OUTPUT
			this->TDI = TDI; // net ID: TDI lsb: 0  msb: 0 OUTPUT
			this->TMS = TMS; // net ID: TMS lsb: 0  msb: 0 OUTPUT
			this->UPDATE = UPDATE; // net ID: UPDATE lsb: 0  msb: 0 OUTPUT
			this->TDO = TDO; // net ID: TDO lsb: 0  msb: 0 INPUT
			
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
