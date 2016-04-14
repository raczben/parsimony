/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_IBUFDS_GTE2_H
#define X_IBUFDS_GTE2_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"
namespace CPrimitives {
	
	class X_IBUFDS_GTE2: public Primitive{

		//Verilog Parameters:
		parameter_string_t LOC;
		parameter_enum_t CLKCM_CFG;
		parameter_enum_t CLKRCV_TRST;
		parameter_int_t CLKSWING_CFG;
		//Verilog Ports in definition order:
		NetFlow* O_A0_B; // net ID: O lsb: 0  msb: 0 OUTPUT
		NetFlow* ODIV2_A0_B; // net ID: ODIV2 lsb: 0  msb: 0 OUTPUT
		NetFlow* CEB_A0_B; // net ID: CEB lsb: 0  msb: 0 INPUT
		NetFlow* I_A0_B; // net ID: I lsb: 0  msb: 0 INPUT
		NetFlow* IB_A0_B; // net ID: IB lsb: 0  msb: 0 INPUT
		
		public: X_IBUFDS_GTE2(
			const char * name,
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_enum_t CLKCM_CFG, // Default: "TRUE"
			parameter_enum_t CLKRCV_TRST, // Default: "TRUE"
			parameter_int_t CLKSWING_CFG, // Default: 2'b11
			//Verilog Ports in definition order:
			NetFlow* O_A0_B, // net ID: O lsb: 0  msb: 0 OUTPUT
			NetFlow* ODIV2_A0_B, // net ID: ODIV2 lsb: 0  msb: 0 OUTPUT
			NetFlow* CEB_A0_B, // net ID: CEB lsb: 0  msb: 0 INPUT
			NetFlow* I_A0_B, // net ID: I lsb: 0  msb: 0 INPUT
			NetFlow* IB_A0_B // net ID: IB lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			this->CLKCM_CFG = CLKCM_CFG; // Default: "TRUE"
			this->CLKRCV_TRST = CLKRCV_TRST; // Default: "TRUE"
			this->CLKSWING_CFG = CLKSWING_CFG; // Default: 2'b11
			//Verilog Ports in definition order:
			this->O_A0_B = O_A0_B; // net ID: O lsb: 0  msb: 0 OUTPUT
			this->ODIV2_A0_B = ODIV2_A0_B; // net ID: ODIV2 lsb: 0  msb: 0 OUTPUT
			this->CEB_A0_B = CEB_A0_B; // net ID: CEB lsb: 0  msb: 0 INPUT
			this->I_A0_B = I_A0_B; // net ID: I lsb: 0  msb: 0 INPUT
			this->IB_A0_B = IB_A0_B; // net ID: IB lsb: 0  msb: 0 INPUT
			
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
#endif // X_IBUFDS_GTE2_H
