/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_CLKDLL_H
#define X_CLKDLL_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_CLKDLL: public Primitive{

		//Verilog Parameters:
		parameter_int_t CLKDV_DIVIDE;
		parameter_string_t DLL_FREQUENCY_MODE;
		parameter_enum_t DUTY_CYCLE_CORRECTION;
		parameter_int_t FACTORY_JF;
		parameter_int_t MAXPERCLKIN;
		parameter_int_t SIM_CLKIN_CYCLE_JITTER;
		parameter_int_t SIM_CLKIN_PERIOD_JITTER;
		parameter_string_t LOC;
		parameter_enum_t STARTUP_WAIT;
		//Verilog Ports in definition order:
		NetFlow* CLK0_A0_B; // net ID: CLK0 lsb: 0  msb: 0 OUTPUT
		NetFlow* CLK180_A0_B; // net ID: CLK180 lsb: 0  msb: 0 OUTPUT
		NetFlow* CLK270_A0_B; // net ID: CLK270 lsb: 0  msb: 0 OUTPUT
		NetFlow* CLK2X_A0_B; // net ID: CLK2X lsb: 0  msb: 0 OUTPUT
		NetFlow* CLK90_A0_B; // net ID: CLK90 lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKDV_A0_B; // net ID: CLKDV lsb: 0  msb: 0 OUTPUT
		NetFlow* LOCKED_A0_B; // net ID: LOCKED lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKFB_A0_B; // net ID: CLKFB lsb: 0  msb: 0 INPUT
		NetFlow* CLKIN_A0_B; // net ID: CLKIN lsb: 0  msb: 0 INPUT
		NetFlow* RST_A0_B; // net ID: RST lsb: 0  msb: 0 INPUT
		
		public: X_CLKDLL(
			const char * name,
			//Verilog Parameters:
			parameter_int_t CLKDV_DIVIDE, // Default: 2.0
			parameter_string_t DLL_FREQUENCY_MODE, // Default: "LOW"
			parameter_enum_t DUTY_CYCLE_CORRECTION, // Default: "TRUE"
			parameter_int_t FACTORY_JF, // Default: 16'hC080
			parameter_int_t MAXPERCLKIN, // Default: 40000
			parameter_int_t SIM_CLKIN_CYCLE_JITTER, // Default: 300
			parameter_int_t SIM_CLKIN_PERIOD_JITTER, // Default: 1000
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_enum_t STARTUP_WAIT, // Default: "FALSE"
			//Verilog Ports in definition order:
			NetFlow* CLK0_A0_B, // net ID: CLK0 lsb: 0  msb: 0 OUTPUT
			NetFlow* CLK180_A0_B, // net ID: CLK180 lsb: 0  msb: 0 OUTPUT
			NetFlow* CLK270_A0_B, // net ID: CLK270 lsb: 0  msb: 0 OUTPUT
			NetFlow* CLK2X_A0_B, // net ID: CLK2X lsb: 0  msb: 0 OUTPUT
			NetFlow* CLK90_A0_B, // net ID: CLK90 lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKDV_A0_B, // net ID: CLKDV lsb: 0  msb: 0 OUTPUT
			NetFlow* LOCKED_A0_B, // net ID: LOCKED lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKFB_A0_B, // net ID: CLKFB lsb: 0  msb: 0 INPUT
			NetFlow* CLKIN_A0_B, // net ID: CLKIN lsb: 0  msb: 0 INPUT
			NetFlow* RST_A0_B // net ID: RST lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->CLKDV_DIVIDE = CLKDV_DIVIDE; // Default: 2.0
			this->DLL_FREQUENCY_MODE = DLL_FREQUENCY_MODE; // Default: "LOW"
			this->DUTY_CYCLE_CORRECTION = DUTY_CYCLE_CORRECTION; // Default: "TRUE"
			this->FACTORY_JF = FACTORY_JF; // Default: 16'hC080
			this->MAXPERCLKIN = MAXPERCLKIN; // Default: 40000
			this->SIM_CLKIN_CYCLE_JITTER = SIM_CLKIN_CYCLE_JITTER; // Default: 300
			this->SIM_CLKIN_PERIOD_JITTER = SIM_CLKIN_PERIOD_JITTER; // Default: 1000
			this->LOC = LOC; // Default: "UNPLACED"
			this->STARTUP_WAIT = STARTUP_WAIT; // Default: "FALSE"
			//Verilog Ports in definition order:
			this->CLK0_A0_B = CLK0_A0_B; // net ID: CLK0 lsb: 0  msb: 0 OUTPUT
			this->CLK180_A0_B = CLK180_A0_B; // net ID: CLK180 lsb: 0  msb: 0 OUTPUT
			this->CLK270_A0_B = CLK270_A0_B; // net ID: CLK270 lsb: 0  msb: 0 OUTPUT
			this->CLK2X_A0_B = CLK2X_A0_B; // net ID: CLK2X lsb: 0  msb: 0 OUTPUT
			this->CLK90_A0_B = CLK90_A0_B; // net ID: CLK90 lsb: 0  msb: 0 OUTPUT
			this->CLKDV_A0_B = CLKDV_A0_B; // net ID: CLKDV lsb: 0  msb: 0 OUTPUT
			this->LOCKED_A0_B = LOCKED_A0_B; // net ID: LOCKED lsb: 0  msb: 0 OUTPUT
			this->CLKFB_A0_B = CLKFB_A0_B; // net ID: CLKFB lsb: 0  msb: 0 INPUT
			this->CLKIN_A0_B = CLKIN_A0_B; // net ID: CLKIN lsb: 0  msb: 0 INPUT
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
#endif // X_CLKDLL_H
