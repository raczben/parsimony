/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_IBUF_DLY_ADJ_H
#define X_IBUF_DLY_ADJ_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_IBUF_DLY_ADJ: public Primitive{

		//Verilog Parameters:
		parameter_string_t DELAY_OFFSET;
		parameter_string_t IOSTANDARD;
		parameter_string_t LOC;
		parameter_int_t SIM_TAPDELAY_VALUE;
		parameter_int_t SIM_DELAY0;
		parameter_int_t SIM_DELAY1;
		parameter_int_t SIM_DELAY2;
		parameter_int_t SIM_DELAY3;
		parameter_int_t SIM_DELAY4;
		parameter_int_t SIM_DELAY5;
		parameter_int_t SIM_DELAY6;
		parameter_int_t SIM_DELAY7;
		parameter_int_t SIM_DELAY8;
		parameter_int_t SIM_DELAY9;
		parameter_int_t SIM_DELAY10;
		parameter_int_t SIM_DELAY11;
		parameter_int_t SIM_DELAY12;
		parameter_int_t SIM_DELAY13;
		parameter_int_t SIM_DELAY14;
		parameter_int_t SIM_DELAY15;
		parameter_int_t SIM_DELAY16;
		parameter_int_t SPECTRUM_OFFSET_DELAY;
		//Verilog Ports in definition order:
		NetFlow* O_A0_B; // net ID: O lsb: 0  msb: 0 OUTPUT
		NetFlow* I_A0_B; // net ID: I lsb: 0  msb: 0 INPUT
		NetFlow* S_A2_B; // net ID: S lsb: 0  msb: 2 INPUT
		NetFlow* S_A1_B; // net ID: S lsb: 0  msb: 2 INPUT
		NetFlow* S_A0_B; // net ID: S lsb: 0  msb: 2 INPUT
		
		public: X_IBUF_DLY_ADJ(
			const char * name,
			//Verilog Parameters:
			parameter_string_t DELAY_OFFSET, // Default: "OFF"
			parameter_string_t IOSTANDARD, // Default: "DEFAULT"
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_int_t SIM_TAPDELAY_VALUE, // Default: 200
			parameter_int_t SIM_DELAY0, // Default: 0
			parameter_int_t SIM_DELAY1, // Default: 0
			parameter_int_t SIM_DELAY2, // Default: 0
			parameter_int_t SIM_DELAY3, // Default: 0
			parameter_int_t SIM_DELAY4, // Default: 0
			parameter_int_t SIM_DELAY5, // Default: 0
			parameter_int_t SIM_DELAY6, // Default: 0
			parameter_int_t SIM_DELAY7, // Default: 0
			parameter_int_t SIM_DELAY8, // Default: 0
			parameter_int_t SIM_DELAY9, // Default: 0
			parameter_int_t SIM_DELAY10, // Default: 0
			parameter_int_t SIM_DELAY11, // Default: 0
			parameter_int_t SIM_DELAY12, // Default: 0
			parameter_int_t SIM_DELAY13, // Default: 0
			parameter_int_t SIM_DELAY14, // Default: 0
			parameter_int_t SIM_DELAY15, // Default: 0
			parameter_int_t SIM_DELAY16, // Default: 0
			parameter_int_t SPECTRUM_OFFSET_DELAY, // Default: 1600
			//Verilog Ports in definition order:
			NetFlow* O_A0_B, // net ID: O lsb: 0  msb: 0 OUTPUT
			NetFlow* I_A0_B, // net ID: I lsb: 0  msb: 0 INPUT
			NetFlow* S_A2_B, // net ID: S lsb: 0  msb: 2 INPUT
			NetFlow* S_A1_B, // net ID: S lsb: 0  msb: 2 INPUT
			NetFlow* S_A0_B // net ID: S lsb: 0  msb: 2 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->DELAY_OFFSET = DELAY_OFFSET; // Default: "OFF"
			this->IOSTANDARD = IOSTANDARD; // Default: "DEFAULT"
			this->LOC = LOC; // Default: "UNPLACED"
			this->SIM_TAPDELAY_VALUE = SIM_TAPDELAY_VALUE; // Default: 200
			this->SIM_DELAY0 = SIM_DELAY0; // Default: 0
			this->SIM_DELAY1 = SIM_DELAY1; // Default: 0
			this->SIM_DELAY2 = SIM_DELAY2; // Default: 0
			this->SIM_DELAY3 = SIM_DELAY3; // Default: 0
			this->SIM_DELAY4 = SIM_DELAY4; // Default: 0
			this->SIM_DELAY5 = SIM_DELAY5; // Default: 0
			this->SIM_DELAY6 = SIM_DELAY6; // Default: 0
			this->SIM_DELAY7 = SIM_DELAY7; // Default: 0
			this->SIM_DELAY8 = SIM_DELAY8; // Default: 0
			this->SIM_DELAY9 = SIM_DELAY9; // Default: 0
			this->SIM_DELAY10 = SIM_DELAY10; // Default: 0
			this->SIM_DELAY11 = SIM_DELAY11; // Default: 0
			this->SIM_DELAY12 = SIM_DELAY12; // Default: 0
			this->SIM_DELAY13 = SIM_DELAY13; // Default: 0
			this->SIM_DELAY14 = SIM_DELAY14; // Default: 0
			this->SIM_DELAY15 = SIM_DELAY15; // Default: 0
			this->SIM_DELAY16 = SIM_DELAY16; // Default: 0
			this->SPECTRUM_OFFSET_DELAY = SPECTRUM_OFFSET_DELAY; // Default: 1600
			//Verilog Ports in definition order:
			this->O_A0_B = O_A0_B; // net ID: O lsb: 0  msb: 0 OUTPUT
			this->I_A0_B = I_A0_B; // net ID: I lsb: 0  msb: 0 INPUT
			this->S_A2_B = S_A2_B; // net ID: S lsb: 0  msb: 2 INPUT
			this->S_A1_B = S_A1_B; // net ID: S lsb: 0  msb: 2 INPUT
			this->S_A0_B = S_A0_B; // net ID: S lsb: 0  msb: 2 INPUT
			
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
#endif // X_IBUF_DLY_ADJ_H
