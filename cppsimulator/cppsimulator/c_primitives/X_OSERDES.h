/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_OSERDES: public Primitive{

		//Verilog Parameters:
		parameter_string_t DATA_RATE_OQ;
		parameter_string_t DATA_RATE_TQ;
		parameter_string_t DATA_WIDTH;
		parameter_string_t INIT_OQ;
		parameter_string_t INIT_TQ;
		parameter_string_t LOC;
		parameter_string_t SERDES_MODE;
		parameter_string_t SRVAL_OQ;
		parameter_string_t SRVAL_TQ;
		parameter_string_t TRISTATE_WIDTH;
		//Verilog Ports in definition order:
		NetFlow* OQ; // net ID: OQ lsb: 0  msb: 0 OUTPUT
		NetFlow* SHIFTOUT1; // net ID: SHIFTOUT1 lsb: 0  msb: 0 OUTPUT
		NetFlow* SHIFTOUT2; // net ID: SHIFTOUT2 lsb: 0  msb: 0 OUTPUT
		NetFlow* TQ; // net ID: TQ lsb: 0  msb: 0 OUTPUT
		NetFlow* CLK; // net ID: CLK lsb: 0  msb: 0 INPUT
		NetFlow* CLKDIV; // net ID: CLKDIV lsb: 0  msb: 0 INPUT
		NetFlow* D1; // net ID: D1 lsb: 0  msb: 0 INPUT
		NetFlow* D2; // net ID: D2 lsb: 0  msb: 0 INPUT
		NetFlow* D3; // net ID: D3 lsb: 0  msb: 0 INPUT
		NetFlow* D4; // net ID: D4 lsb: 0  msb: 0 INPUT
		NetFlow* D5; // net ID: D5 lsb: 0  msb: 0 INPUT
		NetFlow* D6; // net ID: D6 lsb: 0  msb: 0 INPUT
		NetFlow* OCE; // net ID: OCE lsb: 0  msb: 0 INPUT
		NetFlow* REV; // net ID: REV lsb: 0  msb: 0 INPUT
		NetFlow* SHIFTIN1; // net ID: SHIFTIN1 lsb: 0  msb: 0 INPUT
		NetFlow* SHIFTIN2; // net ID: SHIFTIN2 lsb: 0  msb: 0 INPUT
		NetFlow* SR; // net ID: SR lsb: 0  msb: 0 INPUT
		NetFlow* T1; // net ID: T1 lsb: 0  msb: 0 INPUT
		NetFlow* T2; // net ID: T2 lsb: 0  msb: 0 INPUT
		NetFlow* T3; // net ID: T3 lsb: 0  msb: 0 INPUT
		NetFlow* T4; // net ID: T4 lsb: 0  msb: 0 INPUT
		NetFlow* TCE; // net ID: TCE lsb: 0  msb: 0 INPUT
		
		X_OSERDES(
			const char * name,
			//Verilog Parameters:
			parameter_string_t DATA_RATE_OQ, // Default: "DDR"
			parameter_string_t DATA_RATE_TQ, // Default: "DDR"
			parameter_string_t DATA_WIDTH, // Default: 4
			parameter_string_t INIT_OQ, // Default: 1'b0
			parameter_string_t INIT_TQ, // Default: 1'b0
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_string_t SERDES_MODE, // Default: "MASTER"
			parameter_string_t SRVAL_OQ, // Default: 1'b0
			parameter_string_t SRVAL_TQ, // Default: 1'b0
			parameter_string_t TRISTATE_WIDTH, // Default: 4
			//Verilog Ports in definition order:
			NetFlow* OQ, // net ID: OQ lsb: 0  msb: 0 OUTPUT
			NetFlow* SHIFTOUT1, // net ID: SHIFTOUT1 lsb: 0  msb: 0 OUTPUT
			NetFlow* SHIFTOUT2, // net ID: SHIFTOUT2 lsb: 0  msb: 0 OUTPUT
			NetFlow* TQ, // net ID: TQ lsb: 0  msb: 0 OUTPUT
			NetFlow* CLK, // net ID: CLK lsb: 0  msb: 0 INPUT
			NetFlow* CLKDIV, // net ID: CLKDIV lsb: 0  msb: 0 INPUT
			NetFlow* D1, // net ID: D1 lsb: 0  msb: 0 INPUT
			NetFlow* D2, // net ID: D2 lsb: 0  msb: 0 INPUT
			NetFlow* D3, // net ID: D3 lsb: 0  msb: 0 INPUT
			NetFlow* D4, // net ID: D4 lsb: 0  msb: 0 INPUT
			NetFlow* D5, // net ID: D5 lsb: 0  msb: 0 INPUT
			NetFlow* D6, // net ID: D6 lsb: 0  msb: 0 INPUT
			NetFlow* OCE, // net ID: OCE lsb: 0  msb: 0 INPUT
			NetFlow* REV, // net ID: REV lsb: 0  msb: 0 INPUT
			NetFlow* SHIFTIN1, // net ID: SHIFTIN1 lsb: 0  msb: 0 INPUT
			NetFlow* SHIFTIN2, // net ID: SHIFTIN2 lsb: 0  msb: 0 INPUT
			NetFlow* SR, // net ID: SR lsb: 0  msb: 0 INPUT
			NetFlow* T1, // net ID: T1 lsb: 0  msb: 0 INPUT
			NetFlow* T2, // net ID: T2 lsb: 0  msb: 0 INPUT
			NetFlow* T3, // net ID: T3 lsb: 0  msb: 0 INPUT
			NetFlow* T4, // net ID: T4 lsb: 0  msb: 0 INPUT
			NetFlow* TCE // net ID: TCE lsb: 0  msb: 0 INPUT
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
			this->OQ = OQ; // net ID: OQ lsb: 0  msb: 0 OUTPUT
			this->SHIFTOUT1 = SHIFTOUT1; // net ID: SHIFTOUT1 lsb: 0  msb: 0 OUTPUT
			this->SHIFTOUT2 = SHIFTOUT2; // net ID: SHIFTOUT2 lsb: 0  msb: 0 OUTPUT
			this->TQ = TQ; // net ID: TQ lsb: 0  msb: 0 OUTPUT
			this->CLK = CLK; // net ID: CLK lsb: 0  msb: 0 INPUT
			this->CLKDIV = CLKDIV; // net ID: CLKDIV lsb: 0  msb: 0 INPUT
			this->D1 = D1; // net ID: D1 lsb: 0  msb: 0 INPUT
			this->D2 = D2; // net ID: D2 lsb: 0  msb: 0 INPUT
			this->D3 = D3; // net ID: D3 lsb: 0  msb: 0 INPUT
			this->D4 = D4; // net ID: D4 lsb: 0  msb: 0 INPUT
			this->D5 = D5; // net ID: D5 lsb: 0  msb: 0 INPUT
			this->D6 = D6; // net ID: D6 lsb: 0  msb: 0 INPUT
			this->OCE = OCE; // net ID: OCE lsb: 0  msb: 0 INPUT
			this->REV = REV; // net ID: REV lsb: 0  msb: 0 INPUT
			this->SHIFTIN1 = SHIFTIN1; // net ID: SHIFTIN1 lsb: 0  msb: 0 INPUT
			this->SHIFTIN2 = SHIFTIN2; // net ID: SHIFTIN2 lsb: 0  msb: 0 INPUT
			this->SR = SR; // net ID: SR lsb: 0  msb: 0 INPUT
			this->T1 = T1; // net ID: T1 lsb: 0  msb: 0 INPUT
			this->T2 = T2; // net ID: T2 lsb: 0  msb: 0 INPUT
			this->T3 = T3; // net ID: T3 lsb: 0  msb: 0 INPUT
			this->T4 = T4; // net ID: T4 lsb: 0  msb: 0 INPUT
			this->TCE = TCE; // net ID: TCE lsb: 0  msb: 0 INPUT
			
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
