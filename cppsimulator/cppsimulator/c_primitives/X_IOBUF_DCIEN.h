/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_IOBUF_DCIEN_H
#define X_IOBUF_DCIEN_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"
namespace CPrimitives {
	
	class X_IOBUF_DCIEN: public Primitive{

		//Verilog Parameters:
		parameter_int_t DRIVE;
		parameter_enum_t IBUF_LOW_PWR;
		parameter_string_t IOSTANDARD;
		parameter_string_t LOC;
		parameter_string_t SLEW;
		parameter_enum_t USE_IBUFDISABLE;
		//Verilog Ports in definition order:
		NetFlow* O_A0_B; // net ID: O lsb: 0  msb: 0 OUTPUT
		NetFlow* IO_A0_B; // net ID: IO lsb: 0  msb: 0 INOUT
		NetFlow* DCITERMDISABLE_A0_B; // net ID: DCITERMDISABLE lsb: 0  msb: 0 INPUT
		NetFlow* I_A0_B; // net ID: I lsb: 0  msb: 0 INPUT
		NetFlow* IBUFDISABLE_A0_B; // net ID: IBUFDISABLE lsb: 0  msb: 0 INPUT
		NetFlow* T_A0_B; // net ID: T lsb: 0  msb: 0 INPUT
		
		public: X_IOBUF_DCIEN(
			const char * name,
			//Verilog Parameters:
			parameter_int_t DRIVE, // Default: 12
			parameter_enum_t IBUF_LOW_PWR, // Default: "TRUE"
			parameter_string_t IOSTANDARD, // Default: "DEFAULT"
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_string_t SLEW, // Default: "SLOW"
			parameter_enum_t USE_IBUFDISABLE, // Default: "TRUE"
			//Verilog Ports in definition order:
			NetFlow* O_A0_B, // net ID: O lsb: 0  msb: 0 OUTPUT
			NetFlow* IO_A0_B, // net ID: IO lsb: 0  msb: 0 INOUT
			NetFlow* DCITERMDISABLE_A0_B, // net ID: DCITERMDISABLE lsb: 0  msb: 0 INPUT
			NetFlow* I_A0_B, // net ID: I lsb: 0  msb: 0 INPUT
			NetFlow* IBUFDISABLE_A0_B, // net ID: IBUFDISABLE lsb: 0  msb: 0 INPUT
			NetFlow* T_A0_B // net ID: T lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->DRIVE = DRIVE; // Default: 12
			this->IBUF_LOW_PWR = IBUF_LOW_PWR; // Default: "TRUE"
			this->IOSTANDARD = IOSTANDARD; // Default: "DEFAULT"
			this->LOC = LOC; // Default: "UNPLACED"
			this->SLEW = SLEW; // Default: "SLOW"
			this->USE_IBUFDISABLE = USE_IBUFDISABLE; // Default: "TRUE"
			//Verilog Ports in definition order:
			this->O_A0_B = O_A0_B; // net ID: O lsb: 0  msb: 0 OUTPUT
			this->IO_A0_B = IO_A0_B; // net ID: IO lsb: 0  msb: 0 INOUT
			this->DCITERMDISABLE_A0_B = DCITERMDISABLE_A0_B; // net ID: DCITERMDISABLE lsb: 0  msb: 0 INPUT
			this->I_A0_B = I_A0_B; // net ID: I lsb: 0  msb: 0 INPUT
			this->IBUFDISABLE_A0_B = IBUFDISABLE_A0_B; // net ID: IBUFDISABLE lsb: 0  msb: 0 INPUT
			this->T_A0_B = T_A0_B; // net ID: T lsb: 0  msb: 0 INPUT
			
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
#endif // X_IOBUF_DCIEN_H
