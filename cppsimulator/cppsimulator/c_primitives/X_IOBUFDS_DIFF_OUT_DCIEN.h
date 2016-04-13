/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_IOBUFDS_DIFF_OUT_DCIEN: public Primitive{

		//Verilog Parameters:
		parameter_enum_t DIFF_TERM;
		parameter_enum_t IBUF_LOW_PWR;
		parameter_string_t IOSTANDARD;
		parameter_string_t LOC;
		parameter_enum_t USE_IBUFDISABLE;
		//Verilog Ports in definition order:
		NetFlow* O; // net ID: O lsb: 0  msb: 0 OUTPUT
		NetFlow* OB; // net ID: OB lsb: 0  msb: 0 OUTPUT
		NetFlow* IO; // net ID: IO lsb: 0  msb: 0 INOUT
		NetFlow* IOB; // net ID: IOB lsb: 0  msb: 0 INOUT
		NetFlow* DCITERMDISABLE; // net ID: DCITERMDISABLE lsb: 0  msb: 0 INPUT
		NetFlow* I; // net ID: I lsb: 0  msb: 0 INPUT
		NetFlow* IBUFDISABLE; // net ID: IBUFDISABLE lsb: 0  msb: 0 INPUT
		NetFlow* TM; // net ID: TM lsb: 0  msb: 0 INPUT
		NetFlow* TS; // net ID: TS lsb: 0  msb: 0 INPUT
		
		X_IOBUFDS_DIFF_OUT_DCIEN(
			const char * name,
			//Verilog Parameters:
			parameter_enum_t DIFF_TERM, // Default: "FALSE"
			parameter_enum_t IBUF_LOW_PWR, // Default: "TRUE"
			parameter_string_t IOSTANDARD, // Default: "DEFAULT"
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_enum_t USE_IBUFDISABLE, // Default: "TRUE"
			//Verilog Ports in definition order:
			NetFlow* O, // net ID: O lsb: 0  msb: 0 OUTPUT
			NetFlow* OB, // net ID: OB lsb: 0  msb: 0 OUTPUT
			NetFlow* IO, // net ID: IO lsb: 0  msb: 0 INOUT
			NetFlow* IOB, // net ID: IOB lsb: 0  msb: 0 INOUT
			NetFlow* DCITERMDISABLE, // net ID: DCITERMDISABLE lsb: 0  msb: 0 INPUT
			NetFlow* I, // net ID: I lsb: 0  msb: 0 INPUT
			NetFlow* IBUFDISABLE, // net ID: IBUFDISABLE lsb: 0  msb: 0 INPUT
			NetFlow* TM, // net ID: TM lsb: 0  msb: 0 INPUT
			NetFlow* TS // net ID: TS lsb: 0  msb: 0 INPUT
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
			this->OB = OB; // net ID: OB lsb: 0  msb: 0 OUTPUT
			this->IO = IO; // net ID: IO lsb: 0  msb: 0 INOUT
			this->IOB = IOB; // net ID: IOB lsb: 0  msb: 0 INOUT
			this->DCITERMDISABLE = DCITERMDISABLE; // net ID: DCITERMDISABLE lsb: 0  msb: 0 INPUT
			this->I = I; // net ID: I lsb: 0  msb: 0 INPUT
			this->IBUFDISABLE = IBUFDISABLE; // net ID: IBUFDISABLE lsb: 0  msb: 0 INPUT
			this->TM = TM; // net ID: TM lsb: 0  msb: 0 INPUT
			this->TS = TS; // net ID: TS lsb: 0  msb: 0 INPUT
			
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
