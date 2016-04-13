/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class selfheal_oserdese1_vlog: public Primitive{

		//Verilog Parameters:
		parameter_string_t FFD;
		parameter_string_t FFCD;
		parameter_string_t MXD;
		parameter_string_t MXR1;
		//Verilog Ports in definition order:
		NetFlow* dq3; // net ID: dq3 lsb: 0  msb: 0 INPUT
		NetFlow* dq2; // net ID: dq2 lsb: 0  msb: 0 INPUT
		NetFlow* dq1; // net ID: dq1 lsb: 0  msb: 0 INPUT
		NetFlow* dq0; // net ID: dq0 lsb: 0  msb: 0 INPUT
		NetFlow* CLKDIV; // net ID: CLKDIV lsb: 0  msb: 0 INPUT
		NetFlow* srint; // net ID: srint lsb: 0  msb: 0 INPUT
		NetFlow* rst; // net ID: rst lsb: 0  msb: 0 INPUT
		NetFlow* SHO; // net ID: SHO lsb: 0  msb: 0 OUTPUT
		
		selfheal_oserdese1_vlog(
			const char * name,
			//Verilog Parameters:
			parameter_string_t FFD, // Default: 10
			parameter_string_t FFCD, // Default: 10
			parameter_string_t MXD, // Default: 10
			parameter_string_t MXR1, // Default: 10
			//Verilog Ports in definition order:
			NetFlow* dq3, // net ID: dq3 lsb: 0  msb: 0 INPUT
			NetFlow* dq2, // net ID: dq2 lsb: 0  msb: 0 INPUT
			NetFlow* dq1, // net ID: dq1 lsb: 0  msb: 0 INPUT
			NetFlow* dq0, // net ID: dq0 lsb: 0  msb: 0 INPUT
			NetFlow* CLKDIV, // net ID: CLKDIV lsb: 0  msb: 0 INPUT
			NetFlow* srint, // net ID: srint lsb: 0  msb: 0 INPUT
			NetFlow* rst, // net ID: rst lsb: 0  msb: 0 INPUT
			NetFlow* SHO // net ID: SHO lsb: 0  msb: 0 OUTPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->FFD = FFD; // Default: 10
			this->FFCD = FFCD; // Default: 10
			this->MXD = MXD; // Default: 10
			this->MXR1 = MXR1; // Default: 10
			//Verilog Ports in definition order:
			this->dq3 = dq3; // net ID: dq3 lsb: 0  msb: 0 INPUT
			this->dq2 = dq2; // net ID: dq2 lsb: 0  msb: 0 INPUT
			this->dq1 = dq1; // net ID: dq1 lsb: 0  msb: 0 INPUT
			this->dq0 = dq0; // net ID: dq0 lsb: 0  msb: 0 INPUT
			this->CLKDIV = CLKDIV; // net ID: CLKDIV lsb: 0  msb: 0 INPUT
			this->srint = srint; // net ID: srint lsb: 0  msb: 0 INPUT
			this->rst = rst; // net ID: rst lsb: 0  msb: 0 INPUT
			this->SHO = SHO; // net ID: SHO lsb: 0  msb: 0 OUTPUT
			
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
