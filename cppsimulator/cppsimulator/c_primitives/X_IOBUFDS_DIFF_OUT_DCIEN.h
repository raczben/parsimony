/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_IOBUFDS_DIFF_OUT_DCIEN_H
#define X_IOBUFDS_DIFF_OUT_DCIEN_H

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
		NetFlow* O_A0_B; // net ID: O lsb: 0  msb: 0 OUTPUT
		NetFlow* OB_A0_B; // net ID: OB lsb: 0  msb: 0 OUTPUT
		NetFlow* IO_A0_B; // net ID: IO lsb: 0  msb: 0 UNDEFINED
		NetFlow* IOB_A0_B; // net ID: IOB lsb: 0  msb: 0 UNDEFINED
		NetFlow* DCITERMDISABLE_A0_B; // net ID: DCITERMDISABLE lsb: 0  msb: 0 INPUT
		NetFlow* I_A0_B; // net ID: I lsb: 0  msb: 0 INPUT
		NetFlow* IBUFDISABLE_A0_B; // net ID: IBUFDISABLE lsb: 0  msb: 0 INPUT
		NetFlow* TM_A0_B; // net ID: TM lsb: 0  msb: 0 INPUT
		NetFlow* TS_A0_B; // net ID: TS lsb: 0  msb: 0 INPUT
		
		public: X_IOBUFDS_DIFF_OUT_DCIEN(
			const char * name,
			//Verilog Parameters:
			parameter_enum_t DIFF_TERM, // Default: "FALSE"
			parameter_enum_t IBUF_LOW_PWR, // Default: "TRUE"
			parameter_string_t IOSTANDARD, // Default: "DEFAULT"
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_enum_t USE_IBUFDISABLE, // Default: "TRUE"
			//Verilog Ports in definition order:
			NetFlow* O_A0_B, // net ID: O lsb: 0  msb: 0 OUTPUT
			NetFlow* OB_A0_B, // net ID: OB lsb: 0  msb: 0 OUTPUT
			NetFlow* IO_A0_B, // net ID: IO lsb: 0  msb: 0 UNDEFINED
			NetFlow* IOB_A0_B, // net ID: IOB lsb: 0  msb: 0 UNDEFINED
			NetFlow* DCITERMDISABLE_A0_B, // net ID: DCITERMDISABLE lsb: 0  msb: 0 INPUT
			NetFlow* I_A0_B, // net ID: I lsb: 0  msb: 0 INPUT
			NetFlow* IBUFDISABLE_A0_B, // net ID: IBUFDISABLE lsb: 0  msb: 0 INPUT
			NetFlow* TM_A0_B, // net ID: TM lsb: 0  msb: 0 INPUT
			NetFlow* TS_A0_B // net ID: TS lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->DIFF_TERM = DIFF_TERM; // Default: "FALSE"
			this->IBUF_LOW_PWR = IBUF_LOW_PWR; // Default: "TRUE"
			this->IOSTANDARD = IOSTANDARD; // Default: "DEFAULT"
			this->LOC = LOC; // Default: "UNPLACED"
			this->USE_IBUFDISABLE = USE_IBUFDISABLE; // Default: "TRUE"
			//Verilog Ports in definition order:
			this->O_A0_B = O_A0_B; // net ID: O lsb: 0  msb: 0 OUTPUT
			this->OB_A0_B = OB_A0_B; // net ID: OB lsb: 0  msb: 0 OUTPUT
			this->IO_A0_B = IO_A0_B; // net ID: IO lsb: 0  msb: 0 UNDEFINED
			this->IOB_A0_B = IOB_A0_B; // net ID: IOB lsb: 0  msb: 0 UNDEFINED
			this->DCITERMDISABLE_A0_B = DCITERMDISABLE_A0_B; // net ID: DCITERMDISABLE lsb: 0  msb: 0 INPUT
			this->I_A0_B = I_A0_B; // net ID: I lsb: 0  msb: 0 INPUT
			this->IBUFDISABLE_A0_B = IBUFDISABLE_A0_B; // net ID: IBUFDISABLE lsb: 0  msb: 0 INPUT
			this->TM_A0_B = TM_A0_B; // net ID: TM lsb: 0  msb: 0 INPUT
			this->TS_A0_B = TS_A0_B; // net ID: TS lsb: 0  msb: 0 INPUT
			
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
#endif // X_IOBUFDS_DIFF_OUT_DCIEN_H
