/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_IBUFDS_GTXE1{

		//Verilog Parameters:
		parameter_enum_t CLKCM_CFG;
		parameter_enum_t CLKRCV_TRST;
		parameter_int_t REFCLKOUT_DLY;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* O; // OUTPUT
		NetFlow* ODIV2; // OUTPUT
		NetFlow* CEB; // INPUT
		NetFlow* I; // INPUT
		NetFlow* IB; // INPUT
		
	
		X_IBUFDS_GTXE1(
			//Verilog Parameters:
			parameter_enum_t CLKCM_CFG, // Default: "TRUE"
			parameter_enum_t CLKRCV_TRST, // Default: "TRUE"
			parameter_int_t REFCLKOUT_DLY, // Default: 10'b0000000000
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* O, // OUTPUT
			NetFlow* ODIV2, // OUTPUT
			NetFlow* CEB, // INPUT
			NetFlow* I, // INPUT
			NetFlow* IB // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->CLKCM_CFG = CLKCM_CFG; // Default: "TRUE"
			this->CLKRCV_TRST = CLKRCV_TRST; // Default: "TRUE"
			this->REFCLKOUT_DLY = REFCLKOUT_DLY; // Default: 10'b0000000000
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->O = O; // OUTPUT
			this->ODIV2 = ODIV2; // OUTPUT
			this->CEB = CEB; // INPUT
			this->I = I; // INPUT
			this->IB = IB; // INPUT
		
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
