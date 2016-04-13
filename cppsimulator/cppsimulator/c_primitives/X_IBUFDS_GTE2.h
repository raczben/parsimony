/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_IBUFDS_GTE2: public Primitive{

		//Verilog Parameters:
		parameter_string_t LOC;
		parameter_enum_t CLKCM_CFG;
		parameter_enum_t CLKRCV_TRST;
		parameter_string_t CLKSWING_CFG;
		//Verilog Ports in definition order:
		NetFlow* O; // net ID: O lsb: 0  msb: 0 OUTPUT
		NetFlow* ODIV2; // net ID: ODIV2 lsb: 0  msb: 0 OUTPUT
		NetFlow* CEB; // net ID: CEB lsb: 0  msb: 0 INPUT
		NetFlow* I; // net ID: I lsb: 0  msb: 0 INPUT
		NetFlow* IB; // net ID: IB lsb: 0  msb: 0 INPUT
		
		X_IBUFDS_GTE2(
			const char * name,
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_enum_t CLKCM_CFG, // Default: "TRUE"
			parameter_enum_t CLKRCV_TRST, // Default: "TRUE"
			parameter_string_t CLKSWING_CFG, // Default: 2'b11
			//Verilog Ports in definition order:
			NetFlow* O, // net ID: O lsb: 0  msb: 0 OUTPUT
			NetFlow* ODIV2, // net ID: ODIV2 lsb: 0  msb: 0 OUTPUT
			NetFlow* CEB, // net ID: CEB lsb: 0  msb: 0 INPUT
			NetFlow* I, // net ID: I lsb: 0  msb: 0 INPUT
			NetFlow* IB // net ID: IB lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			this->CLKCM_CFG = CLKCM_CFG; // Default: "TRUE"
			this->CLKRCV_TRST = CLKRCV_TRST; // Default: "TRUE"
			this->CLKSWING_CFG = CLKSWING_CFG; // Default: 2'b11
			//Verilog Ports in definition order:
			this->O = O; // net ID: O lsb: 0  msb: 0 OUTPUT
			this->ODIV2 = ODIV2; // net ID: ODIV2 lsb: 0  msb: 0 OUTPUT
			this->CEB = CEB; // net ID: CEB lsb: 0  msb: 0 INPUT
			this->I = I; // net ID: I lsb: 0  msb: 0 INPUT
			this->IB = IB; // net ID: IB lsb: 0  msb: 0 INPUT
			
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
