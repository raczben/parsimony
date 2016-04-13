/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_IBUFDS_INTERMDISABLE_TPWRGT: public Primitive{

		//Verilog Parameters:
		parameter_enum_t DIFF_TERM;
		parameter_enum_t IBUF_LOW_PWR;
		parameter_string_t IOSTANDARD;
		parameter_string_t LOC;
		parameter_enum_t USE_IBUFDISABLE;
		//Verilog Ports in definition order:
		NetFlow* O; // net ID: O lsb: 0  msb: 0 OUTPUT
		NetFlow* I; // net ID: I lsb: 0  msb: 0 INPUT
		NetFlow* IB; // net ID: IB lsb: 0  msb: 0 INPUT
		NetFlow* IBUFDISABLE; // net ID: IBUFDISABLE lsb: 0  msb: 0 INPUT
		NetFlow* INTERMDISABLE; // net ID: INTERMDISABLE lsb: 0  msb: 0 INPUT
		NetFlow* TPWRGT; // net ID: TPWRGT lsb: 0  msb: 0 INPUT
		
		X_IBUFDS_INTERMDISABLE_TPWRGT(
			const char * name,
			//Verilog Parameters:
			parameter_enum_t DIFF_TERM, // Default: "FALSE"
			parameter_enum_t IBUF_LOW_PWR, // Default: "TRUE"
			parameter_string_t IOSTANDARD, // Default: "DEFAULT"
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_enum_t USE_IBUFDISABLE, // Default: "TRUE"
			//Verilog Ports in definition order:
			NetFlow* O, // net ID: O lsb: 0  msb: 0 OUTPUT
			NetFlow* I, // net ID: I lsb: 0  msb: 0 INPUT
			NetFlow* IB, // net ID: IB lsb: 0  msb: 0 INPUT
			NetFlow* IBUFDISABLE, // net ID: IBUFDISABLE lsb: 0  msb: 0 INPUT
			NetFlow* INTERMDISABLE, // net ID: INTERMDISABLE lsb: 0  msb: 0 INPUT
			NetFlow* TPWRGT // net ID: TPWRGT lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->DIFF_TERM = DIFF_TERM; // Default: "FALSE"
			this->IBUF_LOW_PWR = IBUF_LOW_PWR; // Default: "TRUE"
			this->IOSTANDARD = IOSTANDARD; // Default: "DEFAULT"
			this->LOC = LOC; // Default: "UNPLACED"
			this->USE_IBUFDISABLE = USE_IBUFDISABLE; // Default: "TRUE"
			//Verilog Ports in definition order:
			this->O = O; // net ID: O lsb: 0  msb: 0 OUTPUT
			this->I = I; // net ID: I lsb: 0  msb: 0 INPUT
			this->IB = IB; // net ID: IB lsb: 0  msb: 0 INPUT
			this->IBUFDISABLE = IBUFDISABLE; // net ID: IBUFDISABLE lsb: 0  msb: 0 INPUT
			this->INTERMDISABLE = INTERMDISABLE; // net ID: INTERMDISABLE lsb: 0  msb: 0 INPUT
			this->TPWRGT = TPWRGT; // net ID: TPWRGT lsb: 0  msb: 0 INPUT
			
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
