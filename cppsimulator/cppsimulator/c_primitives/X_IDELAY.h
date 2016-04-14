/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_IDELAY_H
#define X_IDELAY_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"
namespace CPrimitives {
	
	class X_IDELAY: public Primitive{

		//Verilog Parameters:
		parameter_string_t IOBDELAY_TYPE;
		parameter_int_t IOBDELAY_VALUE;
		parameter_string_t LOC;
		parameter_int_t SIM_DELAY_D;
		parameter_int_t SIM_TAPDELAY_VALUE;
		//Verilog Ports in definition order:
		NetFlow* O_A0_B; // net ID: O lsb: 0  msb: 0 OUTPUT
		NetFlow* C_A0_B; // net ID: C lsb: 0  msb: 0 INPUT
		NetFlow* CE_A0_B; // net ID: CE lsb: 0  msb: 0 INPUT
		NetFlow* I_A0_B; // net ID: I lsb: 0  msb: 0 INPUT
		NetFlow* INC_A0_B; // net ID: INC lsb: 0  msb: 0 INPUT
		NetFlow* RST_A0_B; // net ID: RST lsb: 0  msb: 0 INPUT
		
		public: X_IDELAY(
			const char * name,
			//Verilog Parameters:
			parameter_string_t IOBDELAY_TYPE, // Default: "DEFAULT"
			parameter_int_t IOBDELAY_VALUE, // Default: 0
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_int_t SIM_DELAY_D, // Default: 0
			parameter_int_t SIM_TAPDELAY_VALUE, // Default: 75
			//Verilog Ports in definition order:
			NetFlow* O_A0_B, // net ID: O lsb: 0  msb: 0 OUTPUT
			NetFlow* C_A0_B, // net ID: C lsb: 0  msb: 0 INPUT
			NetFlow* CE_A0_B, // net ID: CE lsb: 0  msb: 0 INPUT
			NetFlow* I_A0_B, // net ID: I lsb: 0  msb: 0 INPUT
			NetFlow* INC_A0_B, // net ID: INC lsb: 0  msb: 0 INPUT
			NetFlow* RST_A0_B // net ID: RST lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->IOBDELAY_TYPE = IOBDELAY_TYPE; // Default: "DEFAULT"
			this->IOBDELAY_VALUE = IOBDELAY_VALUE; // Default: 0
			this->LOC = LOC; // Default: "UNPLACED"
			this->SIM_DELAY_D = SIM_DELAY_D; // Default: 0
			this->SIM_TAPDELAY_VALUE = SIM_TAPDELAY_VALUE; // Default: 75
			//Verilog Ports in definition order:
			this->O_A0_B = O_A0_B; // net ID: O lsb: 0  msb: 0 OUTPUT
			this->C_A0_B = C_A0_B; // net ID: C lsb: 0  msb: 0 INPUT
			this->CE_A0_B = CE_A0_B; // net ID: CE lsb: 0  msb: 0 INPUT
			this->I_A0_B = I_A0_B; // net ID: I lsb: 0  msb: 0 INPUT
			this->INC_A0_B = INC_A0_B; // net ID: INC lsb: 0  msb: 0 INPUT
			this->RST_A0_B = RST_A0_B; // net ID: RST lsb: 0  msb: 0 INPUT
			
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
#endif // X_IDELAY_H
