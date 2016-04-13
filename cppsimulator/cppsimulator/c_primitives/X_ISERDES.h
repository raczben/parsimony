/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_ISERDES: public Primitive{

		//Verilog Parameters:
		parameter_enum_t BITSLIP_ENABLE;
		parameter_string_t DATA_RATE;
		parameter_string_t DATA_WIDTH;
		parameter_string_t INIT_Q1;
		parameter_string_t INIT_Q2;
		parameter_string_t INIT_Q3;
		parameter_string_t INIT_Q4;
		parameter_string_t INTERFACE_TYPE;
		parameter_string_t IOBDELAY;
		parameter_string_t IOBDELAY_TYPE;
		parameter_string_t IOBDELAY_VALUE;
		parameter_string_t NUM_CE;
		parameter_string_t SERDES_MODE;
		parameter_string_t SIM_DELAY_D;
		parameter_string_t SIM_SETUP_D_CLK;
		parameter_string_t SIM_HOLD_D_CLK;
		parameter_string_t SRVAL_Q1;
		parameter_string_t SRVAL_Q2;
		parameter_string_t SRVAL_Q3;
		parameter_string_t SRVAL_Q4;
		parameter_string_t LOC;
		parameter_string_t SIM_TAPDELAY_VALUE;
		//Verilog Ports in definition order:
		NetFlow* O; // net ID: O lsb: 0  msb: 0 OUTPUT
		NetFlow* Q1; // net ID: Q1 lsb: 0  msb: 0 OUTPUT
		NetFlow* Q2; // net ID: Q2 lsb: 0  msb: 0 OUTPUT
		NetFlow* Q3; // net ID: Q3 lsb: 0  msb: 0 OUTPUT
		NetFlow* Q4; // net ID: Q4 lsb: 0  msb: 0 OUTPUT
		NetFlow* Q5; // net ID: Q5 lsb: 0  msb: 0 OUTPUT
		NetFlow* Q6; // net ID: Q6 lsb: 0  msb: 0 OUTPUT
		NetFlow* SHIFTOUT1; // net ID: SHIFTOUT1 lsb: 0  msb: 0 OUTPUT
		NetFlow* SHIFTOUT2; // net ID: SHIFTOUT2 lsb: 0  msb: 0 OUTPUT
		NetFlow* BITSLIP; // net ID: BITSLIP lsb: 0  msb: 0 INPUT
		NetFlow* CE1; // net ID: CE1 lsb: 0  msb: 0 INPUT
		NetFlow* CE2; // net ID: CE2 lsb: 0  msb: 0 INPUT
		NetFlow* CLK; // net ID: CLK lsb: 0  msb: 0 INPUT
		NetFlow* CLKDIV; // net ID: CLKDIV lsb: 0  msb: 0 INPUT
		NetFlow* D; // net ID: D lsb: 0  msb: 0 INPUT
		NetFlow* DLYCE; // net ID: DLYCE lsb: 0  msb: 0 INPUT
		NetFlow* DLYINC; // net ID: DLYINC lsb: 0  msb: 0 INPUT
		NetFlow* DLYRST; // net ID: DLYRST lsb: 0  msb: 0 INPUT
		NetFlow* OCLK; // net ID: OCLK lsb: 0  msb: 0 INPUT
		NetFlow* REV; // net ID: REV lsb: 0  msb: 0 INPUT
		NetFlow* SHIFTIN1; // net ID: SHIFTIN1 lsb: 0  msb: 0 INPUT
		NetFlow* SHIFTIN2; // net ID: SHIFTIN2 lsb: 0  msb: 0 INPUT
		NetFlow* SR; // net ID: SR lsb: 0  msb: 0 INPUT
		
		X_ISERDES(
			const char * name,
			//Verilog Parameters:
			parameter_enum_t BITSLIP_ENABLE, // Default: "FALSE"
			parameter_string_t DATA_RATE, // Default: "DDR"
			parameter_string_t DATA_WIDTH, // Default: 4
			parameter_string_t INIT_Q1, // Default: 1'b0
			parameter_string_t INIT_Q2, // Default: 1'b0
			parameter_string_t INIT_Q3, // Default: 1'b0
			parameter_string_t INIT_Q4, // Default: 1'b0
			parameter_string_t INTERFACE_TYPE, // Default: "MEMORY"
			parameter_string_t IOBDELAY, // Default: "NONE"
			parameter_string_t IOBDELAY_TYPE, // Default: "DEFAULT"
			parameter_string_t IOBDELAY_VALUE, // Default: 0
			parameter_string_t NUM_CE, // Default: 2
			parameter_string_t SERDES_MODE, // Default: "MASTER"
			parameter_string_t SIM_DELAY_D, // Default: 0
			parameter_string_t SIM_SETUP_D_CLK, // Default: 0
			parameter_string_t SIM_HOLD_D_CLK, // Default: 0
			parameter_string_t SRVAL_Q1, // Default: 1'b0
			parameter_string_t SRVAL_Q2, // Default: 1'b0
			parameter_string_t SRVAL_Q3, // Default: 1'b0
			parameter_string_t SRVAL_Q4, // Default: 1'b0
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_string_t SIM_TAPDELAY_VALUE, // Default: 75
			//Verilog Ports in definition order:
			NetFlow* O, // net ID: O lsb: 0  msb: 0 OUTPUT
			NetFlow* Q1, // net ID: Q1 lsb: 0  msb: 0 OUTPUT
			NetFlow* Q2, // net ID: Q2 lsb: 0  msb: 0 OUTPUT
			NetFlow* Q3, // net ID: Q3 lsb: 0  msb: 0 OUTPUT
			NetFlow* Q4, // net ID: Q4 lsb: 0  msb: 0 OUTPUT
			NetFlow* Q5, // net ID: Q5 lsb: 0  msb: 0 OUTPUT
			NetFlow* Q6, // net ID: Q6 lsb: 0  msb: 0 OUTPUT
			NetFlow* SHIFTOUT1, // net ID: SHIFTOUT1 lsb: 0  msb: 0 OUTPUT
			NetFlow* SHIFTOUT2, // net ID: SHIFTOUT2 lsb: 0  msb: 0 OUTPUT
			NetFlow* BITSLIP, // net ID: BITSLIP lsb: 0  msb: 0 INPUT
			NetFlow* CE1, // net ID: CE1 lsb: 0  msb: 0 INPUT
			NetFlow* CE2, // net ID: CE2 lsb: 0  msb: 0 INPUT
			NetFlow* CLK, // net ID: CLK lsb: 0  msb: 0 INPUT
			NetFlow* CLKDIV, // net ID: CLKDIV lsb: 0  msb: 0 INPUT
			NetFlow* D, // net ID: D lsb: 0  msb: 0 INPUT
			NetFlow* DLYCE, // net ID: DLYCE lsb: 0  msb: 0 INPUT
			NetFlow* DLYINC, // net ID: DLYINC lsb: 0  msb: 0 INPUT
			NetFlow* DLYRST, // net ID: DLYRST lsb: 0  msb: 0 INPUT
			NetFlow* OCLK, // net ID: OCLK lsb: 0  msb: 0 INPUT
			NetFlow* REV, // net ID: REV lsb: 0  msb: 0 INPUT
			NetFlow* SHIFTIN1, // net ID: SHIFTIN1 lsb: 0  msb: 0 INPUT
			NetFlow* SHIFTIN2, // net ID: SHIFTIN2 lsb: 0  msb: 0 INPUT
			NetFlow* SR // net ID: SR lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->BITSLIP_ENABLE = BITSLIP_ENABLE; // Default: "FALSE"
			this->DATA_RATE = DATA_RATE; // Default: "DDR"
			this->DATA_WIDTH = DATA_WIDTH; // Default: 4
			this->INIT_Q1 = INIT_Q1; // Default: 1'b0
			this->INIT_Q2 = INIT_Q2; // Default: 1'b0
			this->INIT_Q3 = INIT_Q3; // Default: 1'b0
			this->INIT_Q4 = INIT_Q4; // Default: 1'b0
			this->INTERFACE_TYPE = INTERFACE_TYPE; // Default: "MEMORY"
			this->IOBDELAY = IOBDELAY; // Default: "NONE"
			this->IOBDELAY_TYPE = IOBDELAY_TYPE; // Default: "DEFAULT"
			this->IOBDELAY_VALUE = IOBDELAY_VALUE; // Default: 0
			this->NUM_CE = NUM_CE; // Default: 2
			this->SERDES_MODE = SERDES_MODE; // Default: "MASTER"
			this->SIM_DELAY_D = SIM_DELAY_D; // Default: 0
			this->SIM_SETUP_D_CLK = SIM_SETUP_D_CLK; // Default: 0
			this->SIM_HOLD_D_CLK = SIM_HOLD_D_CLK; // Default: 0
			this->SRVAL_Q1 = SRVAL_Q1; // Default: 1'b0
			this->SRVAL_Q2 = SRVAL_Q2; // Default: 1'b0
			this->SRVAL_Q3 = SRVAL_Q3; // Default: 1'b0
			this->SRVAL_Q4 = SRVAL_Q4; // Default: 1'b0
			this->LOC = LOC; // Default: "UNPLACED"
			this->SIM_TAPDELAY_VALUE = SIM_TAPDELAY_VALUE; // Default: 75
			//Verilog Ports in definition order:
			this->O = O; // net ID: O lsb: 0  msb: 0 OUTPUT
			this->Q1 = Q1; // net ID: Q1 lsb: 0  msb: 0 OUTPUT
			this->Q2 = Q2; // net ID: Q2 lsb: 0  msb: 0 OUTPUT
			this->Q3 = Q3; // net ID: Q3 lsb: 0  msb: 0 OUTPUT
			this->Q4 = Q4; // net ID: Q4 lsb: 0  msb: 0 OUTPUT
			this->Q5 = Q5; // net ID: Q5 lsb: 0  msb: 0 OUTPUT
			this->Q6 = Q6; // net ID: Q6 lsb: 0  msb: 0 OUTPUT
			this->SHIFTOUT1 = SHIFTOUT1; // net ID: SHIFTOUT1 lsb: 0  msb: 0 OUTPUT
			this->SHIFTOUT2 = SHIFTOUT2; // net ID: SHIFTOUT2 lsb: 0  msb: 0 OUTPUT
			this->BITSLIP = BITSLIP; // net ID: BITSLIP lsb: 0  msb: 0 INPUT
			this->CE1 = CE1; // net ID: CE1 lsb: 0  msb: 0 INPUT
			this->CE2 = CE2; // net ID: CE2 lsb: 0  msb: 0 INPUT
			this->CLK = CLK; // net ID: CLK lsb: 0  msb: 0 INPUT
			this->CLKDIV = CLKDIV; // net ID: CLKDIV lsb: 0  msb: 0 INPUT
			this->D = D; // net ID: D lsb: 0  msb: 0 INPUT
			this->DLYCE = DLYCE; // net ID: DLYCE lsb: 0  msb: 0 INPUT
			this->DLYINC = DLYINC; // net ID: DLYINC lsb: 0  msb: 0 INPUT
			this->DLYRST = DLYRST; // net ID: DLYRST lsb: 0  msb: 0 INPUT
			this->OCLK = OCLK; // net ID: OCLK lsb: 0  msb: 0 INPUT
			this->REV = REV; // net ID: REV lsb: 0  msb: 0 INPUT
			this->SHIFTIN1 = SHIFTIN1; // net ID: SHIFTIN1 lsb: 0  msb: 0 INPUT
			this->SHIFTIN2 = SHIFTIN2; // net ID: SHIFTIN2 lsb: 0  msb: 0 INPUT
			this->SR = SR; // net ID: SR lsb: 0  msb: 0 INPUT
			
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
