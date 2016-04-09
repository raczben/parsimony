/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_IODRP2{

		//Verilog Parameters:
		parameter_string_t LOC;
		parameter_string_t DATA_RATE;
		parameter_int_t SIM_TAPDELAY_VALUE;
		//Verilog Ports in definition order:
		NetFlow* DATAOUT; // OUTPUT
		NetFlow* DATAOUT2; // OUTPUT
		NetFlow* DOUT; // OUTPUT
		NetFlow* SDO; // OUTPUT
		NetFlow* TOUT; // OUTPUT
		NetFlow* ADD; // INPUT
		NetFlow* BKST; // INPUT
		NetFlow* CLK; // INPUT
		NetFlow* CS; // INPUT
		NetFlow* IDATAIN; // INPUT
		NetFlow* IOCLK0; // INPUT
		NetFlow* IOCLK1; // INPUT
		NetFlow* ODATAIN; // INPUT
		NetFlow* SDI; // INPUT
		NetFlow* T; // INPUT
		
	
		X_IODRP2(
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_string_t DATA_RATE, // Default: "SDR";       // "SDR", "DDR"
			parameter_int_t SIM_TAPDELAY_VALUE, // Default: 75
			//Verilog Ports in definition order:
			NetFlow* DATAOUT, // OUTPUT
			NetFlow* DATAOUT2, // OUTPUT
			NetFlow* DOUT, // OUTPUT
			NetFlow* SDO, // OUTPUT
			NetFlow* TOUT, // OUTPUT
			NetFlow* ADD, // INPUT
			NetFlow* BKST, // INPUT
			NetFlow* CLK, // INPUT
			NetFlow* CS, // INPUT
			NetFlow* IDATAIN, // INPUT
			NetFlow* IOCLK0, // INPUT
			NetFlow* IOCLK1, // INPUT
			NetFlow* ODATAIN, // INPUT
			NetFlow* SDI, // INPUT
			NetFlow* T // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			this->DATA_RATE = DATA_RATE; // Default: "SDR";       // "SDR", "DDR"
			this->SIM_TAPDELAY_VALUE = SIM_TAPDELAY_VALUE; // Default: 75
			//Verilog Ports in definition order:
			this->DATAOUT = DATAOUT; // OUTPUT
			this->DATAOUT2 = DATAOUT2; // OUTPUT
			this->DOUT = DOUT; // OUTPUT
			this->SDO = SDO; // OUTPUT
			this->TOUT = TOUT; // OUTPUT
			this->ADD = ADD; // INPUT
			this->BKST = BKST; // INPUT
			this->CLK = CLK; // INPUT
			this->CS = CS; // INPUT
			this->IDATAIN = IDATAIN; // INPUT
			this->IOCLK0 = IOCLK0; // INPUT
			this->IOCLK1 = IOCLK1; // INPUT
			this->ODATAIN = ODATAIN; // INPUT
			this->SDI = SDI; // INPUT
			this->T = T; // INPUT
		
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
