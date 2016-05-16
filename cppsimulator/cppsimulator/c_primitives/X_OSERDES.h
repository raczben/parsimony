/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_OSERDES_H
#define X_OSERDES_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_OSERDES: public Primitive{

		//Verilog Parameters:
		parameter_string_t DATA_RATE_OQ;
		parameter_string_t DATA_RATE_TQ;
		parameter_int_t DATA_WIDTH;
		parameter_int_t INIT_OQ;
		parameter_int_t INIT_TQ;
		parameter_string_t LOC;
		parameter_string_t SERDES_MODE;
		parameter_int_t SRVAL_OQ;
		parameter_int_t SRVAL_TQ;
		parameter_int_t TRISTATE_WIDTH;
		//Verilog Ports in definition order:
		NetFlow* OQ_A0_B; // net ID: OQ lsb: 0  msb: 0 OUTPUT
		NetFlow* SHIFTOUT1_A0_B; // net ID: SHIFTOUT1 lsb: 0  msb: 0 OUTPUT
		NetFlow* SHIFTOUT2_A0_B; // net ID: SHIFTOUT2 lsb: 0  msb: 0 OUTPUT
		NetFlow* TQ_A0_B; // net ID: TQ lsb: 0  msb: 0 OUTPUT
		NetFlow* CLK_A0_B; // net ID: CLK lsb: 0  msb: 0 INPUT
		NetFlow* CLKDIV_A0_B; // net ID: CLKDIV lsb: 0  msb: 0 INPUT
		NetFlow* D1_A0_B; // net ID: D1 lsb: 0  msb: 0 INPUT
		NetFlow* D2_A0_B; // net ID: D2 lsb: 0  msb: 0 INPUT
		NetFlow* D3_A0_B; // net ID: D3 lsb: 0  msb: 0 INPUT
		NetFlow* D4_A0_B; // net ID: D4 lsb: 0  msb: 0 INPUT
		NetFlow* D5_A0_B; // net ID: D5 lsb: 0  msb: 0 INPUT
		NetFlow* D6_A0_B; // net ID: D6 lsb: 0  msb: 0 INPUT
		NetFlow* OCE_A0_B; // net ID: OCE lsb: 0  msb: 0 INPUT
		NetFlow* REV_A0_B; // net ID: REV lsb: 0  msb: 0 INPUT
		NetFlow* SHIFTIN1_A0_B; // net ID: SHIFTIN1 lsb: 0  msb: 0 INPUT
		NetFlow* SHIFTIN2_A0_B; // net ID: SHIFTIN2 lsb: 0  msb: 0 INPUT
		NetFlow* SR_A0_B; // net ID: SR lsb: 0  msb: 0 INPUT
		NetFlow* T1_A0_B; // net ID: T1 lsb: 0  msb: 0 INPUT
		NetFlow* T2_A0_B; // net ID: T2 lsb: 0  msb: 0 INPUT
		NetFlow* T3_A0_B; // net ID: T3 lsb: 0  msb: 0 INPUT
		NetFlow* T4_A0_B; // net ID: T4 lsb: 0  msb: 0 INPUT
		NetFlow* TCE_A0_B; // net ID: TCE lsb: 0  msb: 0 INPUT
		
		public: X_OSERDES(
			const char * name,
			//Verilog Parameters:
			parameter_string_t DATA_RATE_OQ, // Default: "DDR"
			parameter_string_t DATA_RATE_TQ, // Default: "DDR"
			parameter_int_t DATA_WIDTH, // Default: 4
			parameter_int_t INIT_OQ, // Default: 1'b0
			parameter_int_t INIT_TQ, // Default: 1'b0
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_string_t SERDES_MODE, // Default: "MASTER"
			parameter_int_t SRVAL_OQ, // Default: 1'b0
			parameter_int_t SRVAL_TQ, // Default: 1'b0
			parameter_int_t TRISTATE_WIDTH, // Default: 4
			//Verilog Ports in definition order:
			NetFlow* OQ_A0_B, // net ID: OQ lsb: 0  msb: 0 OUTPUT
			NetFlow* SHIFTOUT1_A0_B, // net ID: SHIFTOUT1 lsb: 0  msb: 0 OUTPUT
			NetFlow* SHIFTOUT2_A0_B, // net ID: SHIFTOUT2 lsb: 0  msb: 0 OUTPUT
			NetFlow* TQ_A0_B, // net ID: TQ lsb: 0  msb: 0 OUTPUT
			NetFlow* CLK_A0_B, // net ID: CLK lsb: 0  msb: 0 INPUT
			NetFlow* CLKDIV_A0_B, // net ID: CLKDIV lsb: 0  msb: 0 INPUT
			NetFlow* D1_A0_B, // net ID: D1 lsb: 0  msb: 0 INPUT
			NetFlow* D2_A0_B, // net ID: D2 lsb: 0  msb: 0 INPUT
			NetFlow* D3_A0_B, // net ID: D3 lsb: 0  msb: 0 INPUT
			NetFlow* D4_A0_B, // net ID: D4 lsb: 0  msb: 0 INPUT
			NetFlow* D5_A0_B, // net ID: D5 lsb: 0  msb: 0 INPUT
			NetFlow* D6_A0_B, // net ID: D6 lsb: 0  msb: 0 INPUT
			NetFlow* OCE_A0_B, // net ID: OCE lsb: 0  msb: 0 INPUT
			NetFlow* REV_A0_B, // net ID: REV lsb: 0  msb: 0 INPUT
			NetFlow* SHIFTIN1_A0_B, // net ID: SHIFTIN1 lsb: 0  msb: 0 INPUT
			NetFlow* SHIFTIN2_A0_B, // net ID: SHIFTIN2 lsb: 0  msb: 0 INPUT
			NetFlow* SR_A0_B, // net ID: SR lsb: 0  msb: 0 INPUT
			NetFlow* T1_A0_B, // net ID: T1 lsb: 0  msb: 0 INPUT
			NetFlow* T2_A0_B, // net ID: T2 lsb: 0  msb: 0 INPUT
			NetFlow* T3_A0_B, // net ID: T3 lsb: 0  msb: 0 INPUT
			NetFlow* T4_A0_B, // net ID: T4 lsb: 0  msb: 0 INPUT
			NetFlow* TCE_A0_B // net ID: TCE lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->DATA_RATE_OQ = DATA_RATE_OQ; // Default: "DDR"
			this->DATA_RATE_TQ = DATA_RATE_TQ; // Default: "DDR"
			this->DATA_WIDTH = DATA_WIDTH; // Default: 4
			this->INIT_OQ = INIT_OQ; // Default: 1'b0
			this->INIT_TQ = INIT_TQ; // Default: 1'b0
			this->LOC = LOC; // Default: "UNPLACED"
			this->SERDES_MODE = SERDES_MODE; // Default: "MASTER"
			this->SRVAL_OQ = SRVAL_OQ; // Default: 1'b0
			this->SRVAL_TQ = SRVAL_TQ; // Default: 1'b0
			this->TRISTATE_WIDTH = TRISTATE_WIDTH; // Default: 4
			//Verilog Ports in definition order:
			this->OQ_A0_B = OQ_A0_B; // net ID: OQ lsb: 0  msb: 0 OUTPUT
			this->SHIFTOUT1_A0_B = SHIFTOUT1_A0_B; // net ID: SHIFTOUT1 lsb: 0  msb: 0 OUTPUT
			this->SHIFTOUT2_A0_B = SHIFTOUT2_A0_B; // net ID: SHIFTOUT2 lsb: 0  msb: 0 OUTPUT
			this->TQ_A0_B = TQ_A0_B; // net ID: TQ lsb: 0  msb: 0 OUTPUT
			this->CLK_A0_B = CLK_A0_B; // net ID: CLK lsb: 0  msb: 0 INPUT
			this->CLKDIV_A0_B = CLKDIV_A0_B; // net ID: CLKDIV lsb: 0  msb: 0 INPUT
			this->D1_A0_B = D1_A0_B; // net ID: D1 lsb: 0  msb: 0 INPUT
			this->D2_A0_B = D2_A0_B; // net ID: D2 lsb: 0  msb: 0 INPUT
			this->D3_A0_B = D3_A0_B; // net ID: D3 lsb: 0  msb: 0 INPUT
			this->D4_A0_B = D4_A0_B; // net ID: D4 lsb: 0  msb: 0 INPUT
			this->D5_A0_B = D5_A0_B; // net ID: D5 lsb: 0  msb: 0 INPUT
			this->D6_A0_B = D6_A0_B; // net ID: D6 lsb: 0  msb: 0 INPUT
			this->OCE_A0_B = OCE_A0_B; // net ID: OCE lsb: 0  msb: 0 INPUT
			this->REV_A0_B = REV_A0_B; // net ID: REV lsb: 0  msb: 0 INPUT
			this->SHIFTIN1_A0_B = SHIFTIN1_A0_B; // net ID: SHIFTIN1 lsb: 0  msb: 0 INPUT
			this->SHIFTIN2_A0_B = SHIFTIN2_A0_B; // net ID: SHIFTIN2 lsb: 0  msb: 0 INPUT
			this->SR_A0_B = SR_A0_B; // net ID: SR lsb: 0  msb: 0 INPUT
			this->T1_A0_B = T1_A0_B; // net ID: T1 lsb: 0  msb: 0 INPUT
			this->T2_A0_B = T2_A0_B; // net ID: T2 lsb: 0  msb: 0 INPUT
			this->T3_A0_B = T3_A0_B; // net ID: T3 lsb: 0  msb: 0 INPUT
			this->T4_A0_B = T4_A0_B; // net ID: T4 lsb: 0  msb: 0 INPUT
			this->TCE_A0_B = TCE_A0_B; // net ID: TCE lsb: 0  msb: 0 INPUT
			
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
#endif // X_OSERDES_H
