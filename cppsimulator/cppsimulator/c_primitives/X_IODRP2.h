/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_IODRP2_H
#define X_IODRP2_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_IODRP2: public Primitive{

		//Verilog Parameters:
		parameter_string_t LOC;
		parameter_string_t DATA_RATE;
		parameter_int_t SIM_TAPDELAY_VALUE;
		//Verilog Ports in definition order:
		NetFlow* DATAOUT_A0_B; // net ID: DATAOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* DATAOUT2_A0_B; // net ID: DATAOUT2 lsb: 0  msb: 0 OUTPUT
		NetFlow* DOUT_A0_B; // net ID: DOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* SDO_A0_B; // net ID: SDO lsb: 0  msb: 0 OUTPUT
		NetFlow* TOUT_A0_B; // net ID: TOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* ADD_A0_B; // net ID: ADD lsb: 0  msb: 0 INPUT
		NetFlow* BKST_A0_B; // net ID: BKST lsb: 0  msb: 0 INPUT
		NetFlow* CLK_A0_B; // net ID: CLK lsb: 0  msb: 0 INPUT
		NetFlow* CS_A0_B; // net ID: CS lsb: 0  msb: 0 INPUT
		NetFlow* IDATAIN_A0_B; // net ID: IDATAIN lsb: 0  msb: 0 INPUT
		NetFlow* IOCLK0_A0_B; // net ID: IOCLK0 lsb: 0  msb: 0 INPUT
		NetFlow* IOCLK1_A0_B; // net ID: IOCLK1 lsb: 0  msb: 0 INPUT
		NetFlow* ODATAIN_A0_B; // net ID: ODATAIN lsb: 0  msb: 0 INPUT
		NetFlow* SDI_A0_B; // net ID: SDI lsb: 0  msb: 0 INPUT
		NetFlow* T_A0_B; // net ID: T lsb: 0  msb: 0 INPUT
		
		public: X_IODRP2(
			const char * name,
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_string_t DATA_RATE, // Default: "SDR";       // "SDR", "DDR"
			parameter_int_t SIM_TAPDELAY_VALUE, // Default: 75
			//Verilog Ports in definition order:
			NetFlow* DATAOUT_A0_B, // net ID: DATAOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* DATAOUT2_A0_B, // net ID: DATAOUT2 lsb: 0  msb: 0 OUTPUT
			NetFlow* DOUT_A0_B, // net ID: DOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* SDO_A0_B, // net ID: SDO lsb: 0  msb: 0 OUTPUT
			NetFlow* TOUT_A0_B, // net ID: TOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* ADD_A0_B, // net ID: ADD lsb: 0  msb: 0 INPUT
			NetFlow* BKST_A0_B, // net ID: BKST lsb: 0  msb: 0 INPUT
			NetFlow* CLK_A0_B, // net ID: CLK lsb: 0  msb: 0 INPUT
			NetFlow* CS_A0_B, // net ID: CS lsb: 0  msb: 0 INPUT
			NetFlow* IDATAIN_A0_B, // net ID: IDATAIN lsb: 0  msb: 0 INPUT
			NetFlow* IOCLK0_A0_B, // net ID: IOCLK0 lsb: 0  msb: 0 INPUT
			NetFlow* IOCLK1_A0_B, // net ID: IOCLK1 lsb: 0  msb: 0 INPUT
			NetFlow* ODATAIN_A0_B, // net ID: ODATAIN lsb: 0  msb: 0 INPUT
			NetFlow* SDI_A0_B, // net ID: SDI lsb: 0  msb: 0 INPUT
			NetFlow* T_A0_B // net ID: T lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			this->DATA_RATE = DATA_RATE; // Default: "SDR";       // "SDR", "DDR"
			this->SIM_TAPDELAY_VALUE = SIM_TAPDELAY_VALUE; // Default: 75
			//Verilog Ports in definition order:
			this->DATAOUT_A0_B = DATAOUT_A0_B; // net ID: DATAOUT lsb: 0  msb: 0 OUTPUT
			this->DATAOUT2_A0_B = DATAOUT2_A0_B; // net ID: DATAOUT2 lsb: 0  msb: 0 OUTPUT
			this->DOUT_A0_B = DOUT_A0_B; // net ID: DOUT lsb: 0  msb: 0 OUTPUT
			this->SDO_A0_B = SDO_A0_B; // net ID: SDO lsb: 0  msb: 0 OUTPUT
			this->TOUT_A0_B = TOUT_A0_B; // net ID: TOUT lsb: 0  msb: 0 OUTPUT
			this->ADD_A0_B = ADD_A0_B; // net ID: ADD lsb: 0  msb: 0 INPUT
			this->BKST_A0_B = BKST_A0_B; // net ID: BKST lsb: 0  msb: 0 INPUT
			this->CLK_A0_B = CLK_A0_B; // net ID: CLK lsb: 0  msb: 0 INPUT
			this->CS_A0_B = CS_A0_B; // net ID: CS lsb: 0  msb: 0 INPUT
			this->IDATAIN_A0_B = IDATAIN_A0_B; // net ID: IDATAIN lsb: 0  msb: 0 INPUT
			this->IOCLK0_A0_B = IOCLK0_A0_B; // net ID: IOCLK0 lsb: 0  msb: 0 INPUT
			this->IOCLK1_A0_B = IOCLK1_A0_B; // net ID: IOCLK1 lsb: 0  msb: 0 INPUT
			this->ODATAIN_A0_B = ODATAIN_A0_B; // net ID: ODATAIN lsb: 0  msb: 0 INPUT
			this->SDI_A0_B = SDI_A0_B; // net ID: SDI lsb: 0  msb: 0 INPUT
			this->T_A0_B = T_A0_B; // net ID: T lsb: 0  msb: 0 INPUT
			
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
#endif // X_IODRP2_H
