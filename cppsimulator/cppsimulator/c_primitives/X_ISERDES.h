/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_ISERDES_H
#define X_ISERDES_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_ISERDES: public Primitive{

		//Verilog Parameters:
		parameter_enum_t BITSLIP_ENABLE;
		parameter_string_t DATA_RATE;
		parameter_int_t DATA_WIDTH;
		parameter_int_t INIT_Q1;
		parameter_int_t INIT_Q2;
		parameter_int_t INIT_Q3;
		parameter_int_t INIT_Q4;
		parameter_string_t INTERFACE_TYPE;
		parameter_string_t IOBDELAY;
		parameter_string_t IOBDELAY_TYPE;
		parameter_int_t IOBDELAY_VALUE;
		parameter_int_t NUM_CE;
		parameter_string_t SERDES_MODE;
		parameter_int_t SIM_DELAY_D;
		parameter_int_t SIM_SETUP_D_CLK;
		parameter_int_t SIM_HOLD_D_CLK;
		parameter_int_t SRVAL_Q1;
		parameter_int_t SRVAL_Q2;
		parameter_int_t SRVAL_Q3;
		parameter_int_t SRVAL_Q4;
		parameter_string_t LOC;
		parameter_int_t SIM_TAPDELAY_VALUE;
		//Verilog Ports in definition order:
		NetFlow* O_A0_B; // net ID: O lsb: 0  msb: 0 OUTPUT
		NetFlow* Q1_A0_B; // net ID: Q1 lsb: 0  msb: 0 OUTPUT
		NetFlow* Q2_A0_B; // net ID: Q2 lsb: 0  msb: 0 OUTPUT
		NetFlow* Q3_A0_B; // net ID: Q3 lsb: 0  msb: 0 OUTPUT
		NetFlow* Q4_A0_B; // net ID: Q4 lsb: 0  msb: 0 OUTPUT
		NetFlow* Q5_A0_B; // net ID: Q5 lsb: 0  msb: 0 OUTPUT
		NetFlow* Q6_A0_B; // net ID: Q6 lsb: 0  msb: 0 OUTPUT
		NetFlow* SHIFTOUT1_A0_B; // net ID: SHIFTOUT1 lsb: 0  msb: 0 OUTPUT
		NetFlow* SHIFTOUT2_A0_B; // net ID: SHIFTOUT2 lsb: 0  msb: 0 OUTPUT
		NetFlow* BITSLIP_A0_B; // net ID: BITSLIP lsb: 0  msb: 0 INPUT
		NetFlow* CE1_A0_B; // net ID: CE1 lsb: 0  msb: 0 INPUT
		NetFlow* CE2_A0_B; // net ID: CE2 lsb: 0  msb: 0 INPUT
		NetFlow* CLK_A0_B; // net ID: CLK lsb: 0  msb: 0 INPUT
		NetFlow* CLKDIV_A0_B; // net ID: CLKDIV lsb: 0  msb: 0 INPUT
		NetFlow* D_A0_B; // net ID: D lsb: 0  msb: 0 INPUT
		NetFlow* DLYCE_A0_B; // net ID: DLYCE lsb: 0  msb: 0 INPUT
		NetFlow* DLYINC_A0_B; // net ID: DLYINC lsb: 0  msb: 0 INPUT
		NetFlow* DLYRST_A0_B; // net ID: DLYRST lsb: 0  msb: 0 INPUT
		NetFlow* OCLK_A0_B; // net ID: OCLK lsb: 0  msb: 0 INPUT
		NetFlow* REV_A0_B; // net ID: REV lsb: 0  msb: 0 INPUT
		NetFlow* SHIFTIN1_A0_B; // net ID: SHIFTIN1 lsb: 0  msb: 0 INPUT
		NetFlow* SHIFTIN2_A0_B; // net ID: SHIFTIN2 lsb: 0  msb: 0 INPUT
		NetFlow* SR_A0_B; // net ID: SR lsb: 0  msb: 0 INPUT
		
		public: X_ISERDES(
			const char * name,
			//Verilog Parameters:
			parameter_enum_t BITSLIP_ENABLE, // Default: "FALSE"
			parameter_string_t DATA_RATE, // Default: "DDR"
			parameter_int_t DATA_WIDTH, // Default: 4
			parameter_int_t INIT_Q1, // Default: 1'b0
			parameter_int_t INIT_Q2, // Default: 1'b0
			parameter_int_t INIT_Q3, // Default: 1'b0
			parameter_int_t INIT_Q4, // Default: 1'b0
			parameter_string_t INTERFACE_TYPE, // Default: "MEMORY"
			parameter_string_t IOBDELAY, // Default: "NONE"
			parameter_string_t IOBDELAY_TYPE, // Default: "DEFAULT"
			parameter_int_t IOBDELAY_VALUE, // Default: 0
			parameter_int_t NUM_CE, // Default: 2
			parameter_string_t SERDES_MODE, // Default: "MASTER"
			parameter_int_t SIM_DELAY_D, // Default: 0
			parameter_int_t SIM_SETUP_D_CLK, // Default: 0
			parameter_int_t SIM_HOLD_D_CLK, // Default: 0
			parameter_int_t SRVAL_Q1, // Default: 1'b0
			parameter_int_t SRVAL_Q2, // Default: 1'b0
			parameter_int_t SRVAL_Q3, // Default: 1'b0
			parameter_int_t SRVAL_Q4, // Default: 1'b0
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_int_t SIM_TAPDELAY_VALUE, // Default: 75
			//Verilog Ports in definition order:
			NetFlow* O_A0_B, // net ID: O lsb: 0  msb: 0 OUTPUT
			NetFlow* Q1_A0_B, // net ID: Q1 lsb: 0  msb: 0 OUTPUT
			NetFlow* Q2_A0_B, // net ID: Q2 lsb: 0  msb: 0 OUTPUT
			NetFlow* Q3_A0_B, // net ID: Q3 lsb: 0  msb: 0 OUTPUT
			NetFlow* Q4_A0_B, // net ID: Q4 lsb: 0  msb: 0 OUTPUT
			NetFlow* Q5_A0_B, // net ID: Q5 lsb: 0  msb: 0 OUTPUT
			NetFlow* Q6_A0_B, // net ID: Q6 lsb: 0  msb: 0 OUTPUT
			NetFlow* SHIFTOUT1_A0_B, // net ID: SHIFTOUT1 lsb: 0  msb: 0 OUTPUT
			NetFlow* SHIFTOUT2_A0_B, // net ID: SHIFTOUT2 lsb: 0  msb: 0 OUTPUT
			NetFlow* BITSLIP_A0_B, // net ID: BITSLIP lsb: 0  msb: 0 INPUT
			NetFlow* CE1_A0_B, // net ID: CE1 lsb: 0  msb: 0 INPUT
			NetFlow* CE2_A0_B, // net ID: CE2 lsb: 0  msb: 0 INPUT
			NetFlow* CLK_A0_B, // net ID: CLK lsb: 0  msb: 0 INPUT
			NetFlow* CLKDIV_A0_B, // net ID: CLKDIV lsb: 0  msb: 0 INPUT
			NetFlow* D_A0_B, // net ID: D lsb: 0  msb: 0 INPUT
			NetFlow* DLYCE_A0_B, // net ID: DLYCE lsb: 0  msb: 0 INPUT
			NetFlow* DLYINC_A0_B, // net ID: DLYINC lsb: 0  msb: 0 INPUT
			NetFlow* DLYRST_A0_B, // net ID: DLYRST lsb: 0  msb: 0 INPUT
			NetFlow* OCLK_A0_B, // net ID: OCLK lsb: 0  msb: 0 INPUT
			NetFlow* REV_A0_B, // net ID: REV lsb: 0  msb: 0 INPUT
			NetFlow* SHIFTIN1_A0_B, // net ID: SHIFTIN1 lsb: 0  msb: 0 INPUT
			NetFlow* SHIFTIN2_A0_B, // net ID: SHIFTIN2 lsb: 0  msb: 0 INPUT
			NetFlow* SR_A0_B // net ID: SR lsb: 0  msb: 0 INPUT
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
			this->O_A0_B = O_A0_B; // net ID: O lsb: 0  msb: 0 OUTPUT
			this->Q1_A0_B = Q1_A0_B; // net ID: Q1 lsb: 0  msb: 0 OUTPUT
			this->Q2_A0_B = Q2_A0_B; // net ID: Q2 lsb: 0  msb: 0 OUTPUT
			this->Q3_A0_B = Q3_A0_B; // net ID: Q3 lsb: 0  msb: 0 OUTPUT
			this->Q4_A0_B = Q4_A0_B; // net ID: Q4 lsb: 0  msb: 0 OUTPUT
			this->Q5_A0_B = Q5_A0_B; // net ID: Q5 lsb: 0  msb: 0 OUTPUT
			this->Q6_A0_B = Q6_A0_B; // net ID: Q6 lsb: 0  msb: 0 OUTPUT
			this->SHIFTOUT1_A0_B = SHIFTOUT1_A0_B; // net ID: SHIFTOUT1 lsb: 0  msb: 0 OUTPUT
			this->SHIFTOUT2_A0_B = SHIFTOUT2_A0_B; // net ID: SHIFTOUT2 lsb: 0  msb: 0 OUTPUT
			this->BITSLIP_A0_B = BITSLIP_A0_B; // net ID: BITSLIP lsb: 0  msb: 0 INPUT
			this->CE1_A0_B = CE1_A0_B; // net ID: CE1 lsb: 0  msb: 0 INPUT
			this->CE2_A0_B = CE2_A0_B; // net ID: CE2 lsb: 0  msb: 0 INPUT
			this->CLK_A0_B = CLK_A0_B; // net ID: CLK lsb: 0  msb: 0 INPUT
			this->CLKDIV_A0_B = CLKDIV_A0_B; // net ID: CLKDIV lsb: 0  msb: 0 INPUT
			this->D_A0_B = D_A0_B; // net ID: D lsb: 0  msb: 0 INPUT
			this->DLYCE_A0_B = DLYCE_A0_B; // net ID: DLYCE lsb: 0  msb: 0 INPUT
			this->DLYINC_A0_B = DLYINC_A0_B; // net ID: DLYINC lsb: 0  msb: 0 INPUT
			this->DLYRST_A0_B = DLYRST_A0_B; // net ID: DLYRST lsb: 0  msb: 0 INPUT
			this->OCLK_A0_B = OCLK_A0_B; // net ID: OCLK lsb: 0  msb: 0 INPUT
			this->REV_A0_B = REV_A0_B; // net ID: REV lsb: 0  msb: 0 INPUT
			this->SHIFTIN1_A0_B = SHIFTIN1_A0_B; // net ID: SHIFTIN1 lsb: 0  msb: 0 INPUT
			this->SHIFTIN2_A0_B = SHIFTIN2_A0_B; // net ID: SHIFTIN2 lsb: 0  msb: 0 INPUT
			this->SR_A0_B = SR_A0_B; // net ID: SR lsb: 0  msb: 0 INPUT
			
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
#endif // X_ISERDES_H
