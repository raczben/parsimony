/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_OSERDESE1: public Primitive{

		//Verilog Parameters:
		parameter_string_t DATA_RATE_OQ;
		parameter_string_t DATA_RATE_TQ;
		parameter_string_t DATA_WIDTH;
		parameter_string_t DDR3_DATA;
		parameter_string_t INIT_OQ;
		parameter_string_t INIT_TQ;
		parameter_string_t INTERFACE_TYPE;
		parameter_string_t ODELAY_USED;
		parameter_string_t SERDES_MODE;
		parameter_string_t SRVAL_OQ;
		parameter_string_t SRVAL_TQ;
		parameter_string_t TRISTATE_WIDTH;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* OCBEXTEND; // net ID: OCBEXTEND lsb: 0  msb: 0 OUTPUT
		NetFlow* OFB; // net ID: OFB lsb: 0  msb: 0 OUTPUT
		NetFlow* OQ; // net ID: OQ lsb: 0  msb: 0 OUTPUT
		NetFlow* SHIFTOUT1; // net ID: SHIFTOUT1 lsb: 0  msb: 0 OUTPUT
		NetFlow* SHIFTOUT2; // net ID: SHIFTOUT2 lsb: 0  msb: 0 OUTPUT
		NetFlow* TFB; // net ID: TFB lsb: 0  msb: 0 OUTPUT
		NetFlow* TQ; // net ID: TQ lsb: 0  msb: 0 OUTPUT
		NetFlow* CLK; // net ID: CLK lsb: 0  msb: 0 INPUT
		NetFlow* CLKDIV; // net ID: CLKDIV lsb: 0  msb: 0 INPUT
		NetFlow* CLKPERF; // net ID: CLKPERF lsb: 0  msb: 0 INPUT
		NetFlow* CLKPERFDELAY; // net ID: CLKPERFDELAY lsb: 0  msb: 0 INPUT
		NetFlow* D1; // net ID: D1 lsb: 0  msb: 0 INPUT
		NetFlow* D2; // net ID: D2 lsb: 0  msb: 0 INPUT
		NetFlow* D3; // net ID: D3 lsb: 0  msb: 0 INPUT
		NetFlow* D4; // net ID: D4 lsb: 0  msb: 0 INPUT
		NetFlow* D5; // net ID: D5 lsb: 0  msb: 0 INPUT
		NetFlow* D6; // net ID: D6 lsb: 0  msb: 0 INPUT
		NetFlow* OCE; // net ID: OCE lsb: 0  msb: 0 INPUT
		NetFlow* ODV; // net ID: ODV lsb: 0  msb: 0 INPUT
		NetFlow* RST; // net ID: RST lsb: 0  msb: 0 INPUT
		NetFlow* SHIFTIN1; // net ID: SHIFTIN1 lsb: 0  msb: 0 INPUT
		NetFlow* SHIFTIN2; // net ID: SHIFTIN2 lsb: 0  msb: 0 INPUT
		NetFlow* T1; // net ID: T1 lsb: 0  msb: 0 INPUT
		NetFlow* T2; // net ID: T2 lsb: 0  msb: 0 INPUT
		NetFlow* T3; // net ID: T3 lsb: 0  msb: 0 INPUT
		NetFlow* T4; // net ID: T4 lsb: 0  msb: 0 INPUT
		NetFlow* TCE; // net ID: TCE lsb: 0  msb: 0 INPUT
		NetFlow* WC; // net ID: WC lsb: 0  msb: 0 INPUT
		
		X_OSERDESE1(
			const char * name,
			//Verilog Parameters:
			parameter_string_t DATA_RATE_OQ, // Default: "DDR"
			parameter_string_t DATA_RATE_TQ, // Default: "DDR"
			parameter_string_t DATA_WIDTH, // Default: 4
			parameter_string_t DDR3_DATA, // Default: 1
			parameter_string_t INIT_OQ, // Default: 1'b0
			parameter_string_t INIT_TQ, // Default: 1'b0
			parameter_string_t INTERFACE_TYPE, // Default: "DEFAULT"
			parameter_string_t ODELAY_USED, // Default: 0
			parameter_string_t SERDES_MODE, // Default: "MASTER"
			parameter_string_t SRVAL_OQ, // Default: 1'b0
			parameter_string_t SRVAL_TQ, // Default: 1'b0
			parameter_string_t TRISTATE_WIDTH, // Default: 4
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* OCBEXTEND, // net ID: OCBEXTEND lsb: 0  msb: 0 OUTPUT
			NetFlow* OFB, // net ID: OFB lsb: 0  msb: 0 OUTPUT
			NetFlow* OQ, // net ID: OQ lsb: 0  msb: 0 OUTPUT
			NetFlow* SHIFTOUT1, // net ID: SHIFTOUT1 lsb: 0  msb: 0 OUTPUT
			NetFlow* SHIFTOUT2, // net ID: SHIFTOUT2 lsb: 0  msb: 0 OUTPUT
			NetFlow* TFB, // net ID: TFB lsb: 0  msb: 0 OUTPUT
			NetFlow* TQ, // net ID: TQ lsb: 0  msb: 0 OUTPUT
			NetFlow* CLK, // net ID: CLK lsb: 0  msb: 0 INPUT
			NetFlow* CLKDIV, // net ID: CLKDIV lsb: 0  msb: 0 INPUT
			NetFlow* CLKPERF, // net ID: CLKPERF lsb: 0  msb: 0 INPUT
			NetFlow* CLKPERFDELAY, // net ID: CLKPERFDELAY lsb: 0  msb: 0 INPUT
			NetFlow* D1, // net ID: D1 lsb: 0  msb: 0 INPUT
			NetFlow* D2, // net ID: D2 lsb: 0  msb: 0 INPUT
			NetFlow* D3, // net ID: D3 lsb: 0  msb: 0 INPUT
			NetFlow* D4, // net ID: D4 lsb: 0  msb: 0 INPUT
			NetFlow* D5, // net ID: D5 lsb: 0  msb: 0 INPUT
			NetFlow* D6, // net ID: D6 lsb: 0  msb: 0 INPUT
			NetFlow* OCE, // net ID: OCE lsb: 0  msb: 0 INPUT
			NetFlow* ODV, // net ID: ODV lsb: 0  msb: 0 INPUT
			NetFlow* RST, // net ID: RST lsb: 0  msb: 0 INPUT
			NetFlow* SHIFTIN1, // net ID: SHIFTIN1 lsb: 0  msb: 0 INPUT
			NetFlow* SHIFTIN2, // net ID: SHIFTIN2 lsb: 0  msb: 0 INPUT
			NetFlow* T1, // net ID: T1 lsb: 0  msb: 0 INPUT
			NetFlow* T2, // net ID: T2 lsb: 0  msb: 0 INPUT
			NetFlow* T3, // net ID: T3 lsb: 0  msb: 0 INPUT
			NetFlow* T4, // net ID: T4 lsb: 0  msb: 0 INPUT
			NetFlow* TCE, // net ID: TCE lsb: 0  msb: 0 INPUT
			NetFlow* WC // net ID: WC lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->DATA_RATE_OQ = DATA_RATE_OQ; // Default: "DDR"
			this->DATA_RATE_TQ = DATA_RATE_TQ; // Default: "DDR"
			this->DATA_WIDTH = DATA_WIDTH; // Default: 4
			this->DDR3_DATA = DDR3_DATA; // Default: 1
			this->INIT_OQ = INIT_OQ; // Default: 1'b0
			this->INIT_TQ = INIT_TQ; // Default: 1'b0
			this->INTERFACE_TYPE = INTERFACE_TYPE; // Default: "DEFAULT"
			this->ODELAY_USED = ODELAY_USED; // Default: 0
			this->SERDES_MODE = SERDES_MODE; // Default: "MASTER"
			this->SRVAL_OQ = SRVAL_OQ; // Default: 1'b0
			this->SRVAL_TQ = SRVAL_TQ; // Default: 1'b0
			this->TRISTATE_WIDTH = TRISTATE_WIDTH; // Default: 4
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->OCBEXTEND = OCBEXTEND; // net ID: OCBEXTEND lsb: 0  msb: 0 OUTPUT
			this->OFB = OFB; // net ID: OFB lsb: 0  msb: 0 OUTPUT
			this->OQ = OQ; // net ID: OQ lsb: 0  msb: 0 OUTPUT
			this->SHIFTOUT1 = SHIFTOUT1; // net ID: SHIFTOUT1 lsb: 0  msb: 0 OUTPUT
			this->SHIFTOUT2 = SHIFTOUT2; // net ID: SHIFTOUT2 lsb: 0  msb: 0 OUTPUT
			this->TFB = TFB; // net ID: TFB lsb: 0  msb: 0 OUTPUT
			this->TQ = TQ; // net ID: TQ lsb: 0  msb: 0 OUTPUT
			this->CLK = CLK; // net ID: CLK lsb: 0  msb: 0 INPUT
			this->CLKDIV = CLKDIV; // net ID: CLKDIV lsb: 0  msb: 0 INPUT
			this->CLKPERF = CLKPERF; // net ID: CLKPERF lsb: 0  msb: 0 INPUT
			this->CLKPERFDELAY = CLKPERFDELAY; // net ID: CLKPERFDELAY lsb: 0  msb: 0 INPUT
			this->D1 = D1; // net ID: D1 lsb: 0  msb: 0 INPUT
			this->D2 = D2; // net ID: D2 lsb: 0  msb: 0 INPUT
			this->D3 = D3; // net ID: D3 lsb: 0  msb: 0 INPUT
			this->D4 = D4; // net ID: D4 lsb: 0  msb: 0 INPUT
			this->D5 = D5; // net ID: D5 lsb: 0  msb: 0 INPUT
			this->D6 = D6; // net ID: D6 lsb: 0  msb: 0 INPUT
			this->OCE = OCE; // net ID: OCE lsb: 0  msb: 0 INPUT
			this->ODV = ODV; // net ID: ODV lsb: 0  msb: 0 INPUT
			this->RST = RST; // net ID: RST lsb: 0  msb: 0 INPUT
			this->SHIFTIN1 = SHIFTIN1; // net ID: SHIFTIN1 lsb: 0  msb: 0 INPUT
			this->SHIFTIN2 = SHIFTIN2; // net ID: SHIFTIN2 lsb: 0  msb: 0 INPUT
			this->T1 = T1; // net ID: T1 lsb: 0  msb: 0 INPUT
			this->T2 = T2; // net ID: T2 lsb: 0  msb: 0 INPUT
			this->T3 = T3; // net ID: T3 lsb: 0  msb: 0 INPUT
			this->T4 = T4; // net ID: T4 lsb: 0  msb: 0 INPUT
			this->TCE = TCE; // net ID: TCE lsb: 0  msb: 0 INPUT
			this->WC = WC; // net ID: WC lsb: 0  msb: 0 INPUT
			
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
