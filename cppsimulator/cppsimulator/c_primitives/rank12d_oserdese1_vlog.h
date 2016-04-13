/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class rank12d_oserdese1_vlog: public Primitive{

		//Verilog Parameters:
		parameter_string_t FFD;
		parameter_string_t FFCD;
		parameter_string_t MXD;
		parameter_string_t MXR1;
		//Verilog Ports in definition order:
		NetFlow* D1; // net ID: D1 lsb: 0  msb: 0 INPUT
		NetFlow* D2; // net ID: D2 lsb: 0  msb: 0 INPUT
		NetFlow* D3; // net ID: D3 lsb: 0  msb: 0 INPUT
		NetFlow* D4; // net ID: D4 lsb: 0  msb: 0 INPUT
		NetFlow* D5; // net ID: D5 lsb: 0  msb: 0 INPUT
		NetFlow* D6; // net ID: D6 lsb: 0  msb: 0 INPUT
		NetFlow* d2rnk2; // net ID: d2rnk2 lsb: 0  msb: 0 INPUT
		NetFlow* SHIFTIN1; // net ID: SHIFTIN1 lsb: 0  msb: 0 INPUT
		NetFlow* SHIFTIN2; // net ID: SHIFTIN2 lsb: 0  msb: 0 INPUT
		NetFlow* C; // net ID: C lsb: 0  msb: 0 INPUT
		NetFlow* CLKDIV; // net ID: CLKDIV lsb: 0  msb: 0 INPUT
		NetFlow* SR; // net ID: SR lsb: 0  msb: 0 INPUT
		NetFlow* OCE; // net ID: OCE lsb: 0  msb: 0 INPUT
		NetFlow* data1; // net ID: data1 lsb: 0  msb: 0 OUTPUT
		NetFlow* data2; // net ID: data2 lsb: 0  msb: 0 OUTPUT
		NetFlow* SHIFTOUT1; // net ID: SHIFTOUT1 lsb: 0  msb: 0 OUTPUT
		NetFlow* SHIFTOUT2; // net ID: SHIFTOUT2 lsb: 0  msb: 0 OUTPUT
		NetFlow* DATA_RATE_OQ; // net ID: DATA_RATE_OQ lsb: 0  msb: 0 INPUT
		NetFlow* DATA_WIDTH; // net ID: DATA_WIDTH lsb: 0  msb: 3 INPUT
		NetFlow* SERDES_MODE; // net ID: SERDES_MODE lsb: 0  msb: 0 INPUT
		NetFlow* load; // net ID: load lsb: 0  msb: 0 OUTPUT
		NetFlow* IOCLK_GLITCH; // net ID: IOCLK_GLITCH lsb: 0  msb: 0 OUTPUT
		NetFlow* INIT_OQ; // net ID: INIT_OQ lsb: 0  msb: 0 INPUT
		NetFlow* SRVAL_OQ; // net ID: SRVAL_OQ lsb: 0  msb: 0 INPUT
		
		rank12d_oserdese1_vlog(
			const char * name,
			//Verilog Parameters:
			parameter_string_t FFD, // Default: 1
			parameter_string_t FFCD, // Default: 1
			parameter_string_t MXD, // Default: 1
			parameter_string_t MXR1, // Default: 1
			//Verilog Ports in definition order:
			NetFlow* D1, // net ID: D1 lsb: 0  msb: 0 INPUT
			NetFlow* D2, // net ID: D2 lsb: 0  msb: 0 INPUT
			NetFlow* D3, // net ID: D3 lsb: 0  msb: 0 INPUT
			NetFlow* D4, // net ID: D4 lsb: 0  msb: 0 INPUT
			NetFlow* D5, // net ID: D5 lsb: 0  msb: 0 INPUT
			NetFlow* D6, // net ID: D6 lsb: 0  msb: 0 INPUT
			NetFlow* d2rnk2, // net ID: d2rnk2 lsb: 0  msb: 0 INPUT
			NetFlow* SHIFTIN1, // net ID: SHIFTIN1 lsb: 0  msb: 0 INPUT
			NetFlow* SHIFTIN2, // net ID: SHIFTIN2 lsb: 0  msb: 0 INPUT
			NetFlow* C, // net ID: C lsb: 0  msb: 0 INPUT
			NetFlow* CLKDIV, // net ID: CLKDIV lsb: 0  msb: 0 INPUT
			NetFlow* SR, // net ID: SR lsb: 0  msb: 0 INPUT
			NetFlow* OCE, // net ID: OCE lsb: 0  msb: 0 INPUT
			NetFlow* data1, // net ID: data1 lsb: 0  msb: 0 OUTPUT
			NetFlow* data2, // net ID: data2 lsb: 0  msb: 0 OUTPUT
			NetFlow* SHIFTOUT1, // net ID: SHIFTOUT1 lsb: 0  msb: 0 OUTPUT
			NetFlow* SHIFTOUT2, // net ID: SHIFTOUT2 lsb: 0  msb: 0 OUTPUT
			NetFlow* DATA_RATE_OQ, // net ID: DATA_RATE_OQ lsb: 0  msb: 0 INPUT
			NetFlow* DATA_WIDTH, // net ID: DATA_WIDTH lsb: 0  msb: 3 INPUT
			NetFlow* SERDES_MODE, // net ID: SERDES_MODE lsb: 0  msb: 0 INPUT
			NetFlow* load, // net ID: load lsb: 0  msb: 0 OUTPUT
			NetFlow* IOCLK_GLITCH, // net ID: IOCLK_GLITCH lsb: 0  msb: 0 OUTPUT
			NetFlow* INIT_OQ, // net ID: INIT_OQ lsb: 0  msb: 0 INPUT
			NetFlow* SRVAL_OQ // net ID: SRVAL_OQ lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->FFD = FFD; // Default: 1
			this->FFCD = FFCD; // Default: 1
			this->MXD = MXD; // Default: 1
			this->MXR1 = MXR1; // Default: 1
			//Verilog Ports in definition order:
			this->D1 = D1; // net ID: D1 lsb: 0  msb: 0 INPUT
			this->D2 = D2; // net ID: D2 lsb: 0  msb: 0 INPUT
			this->D3 = D3; // net ID: D3 lsb: 0  msb: 0 INPUT
			this->D4 = D4; // net ID: D4 lsb: 0  msb: 0 INPUT
			this->D5 = D5; // net ID: D5 lsb: 0  msb: 0 INPUT
			this->D6 = D6; // net ID: D6 lsb: 0  msb: 0 INPUT
			this->d2rnk2 = d2rnk2; // net ID: d2rnk2 lsb: 0  msb: 0 INPUT
			this->SHIFTIN1 = SHIFTIN1; // net ID: SHIFTIN1 lsb: 0  msb: 0 INPUT
			this->SHIFTIN2 = SHIFTIN2; // net ID: SHIFTIN2 lsb: 0  msb: 0 INPUT
			this->C = C; // net ID: C lsb: 0  msb: 0 INPUT
			this->CLKDIV = CLKDIV; // net ID: CLKDIV lsb: 0  msb: 0 INPUT
			this->SR = SR; // net ID: SR lsb: 0  msb: 0 INPUT
			this->OCE = OCE; // net ID: OCE lsb: 0  msb: 0 INPUT
			this->data1 = data1; // net ID: data1 lsb: 0  msb: 0 OUTPUT
			this->data2 = data2; // net ID: data2 lsb: 0  msb: 0 OUTPUT
			this->SHIFTOUT1 = SHIFTOUT1; // net ID: SHIFTOUT1 lsb: 0  msb: 0 OUTPUT
			this->SHIFTOUT2 = SHIFTOUT2; // net ID: SHIFTOUT2 lsb: 0  msb: 0 OUTPUT
			this->DATA_RATE_OQ = DATA_RATE_OQ; // net ID: DATA_RATE_OQ lsb: 0  msb: 0 INPUT
			this->DATA_WIDTH = DATA_WIDTH; // net ID: DATA_WIDTH lsb: 0  msb: 3 INPUT
			this->SERDES_MODE = SERDES_MODE; // net ID: SERDES_MODE lsb: 0  msb: 0 INPUT
			this->load = load; // net ID: load lsb: 0  msb: 0 OUTPUT
			this->IOCLK_GLITCH = IOCLK_GLITCH; // net ID: IOCLK_GLITCH lsb: 0  msb: 0 OUTPUT
			this->INIT_OQ = INIT_OQ; // net ID: INIT_OQ lsb: 0  msb: 0 INPUT
			this->SRVAL_OQ = SRVAL_OQ; // net ID: SRVAL_OQ lsb: 0  msb: 0 INPUT
			
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
