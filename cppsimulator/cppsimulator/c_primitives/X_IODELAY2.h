/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_IODELAY2{

		//Verilog Parameters:
		parameter_string_t LOC;
		parameter_string_t COUNTER_WRAPAROUND;
		parameter_string_t DATA_RATE;
		parameter_string_t DELAY_SRC;
		parameter_int_t IDELAY2_VALUE;
		parameter_string_t IDELAY_MODE;
		parameter_string_t IDELAY_TYPE;
		parameter_int_t IDELAY_VALUE;
		parameter_int_t ODELAY_VALUE;
		parameter_string_t SERDES_MODE;
		parameter_int_t SIM_IDATAIN_INDELAY;
		parameter_int_t SIM_ODATAIN_INDELAY;
		parameter_int_t SIM_TAPDELAY_VALUE;
		//Verilog Ports in definition order:
		NetFlow* BUSY; // OUTPUT
		NetFlow* DATAOUT; // OUTPUT
		NetFlow* DATAOUT2; // OUTPUT
		NetFlow* DOUT; // OUTPUT
		NetFlow* TOUT; // OUTPUT
		NetFlow* CAL; // INPUT
		NetFlow* CE; // INPUT
		NetFlow* CLK; // INPUT
		NetFlow* IDATAIN; // INPUT
		NetFlow* INC; // INPUT
		NetFlow* IOCLK0; // INPUT
		NetFlow* IOCLK1; // INPUT
		NetFlow* ODATAIN; // INPUT
		NetFlow* RST; // INPUT
		NetFlow* T; // INPUT
		
	
		X_IODELAY2(
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_string_t COUNTER_WRAPAROUND, // Default: "WRAPAROUND"; // "WRAPAROUND", "STAY_AT_LIMIT"
			parameter_string_t DATA_RATE, // Default: "SDR";       // "SDR", "DDR"
			parameter_string_t DELAY_SRC, // Default: "IO";        // "IO", "IDATAIN", "ODATAIN"
			parameter_int_t IDELAY2_VALUE, // Default: 0
			parameter_string_t IDELAY_MODE, // Default: "NORMAL";  // "NORMAL", "PCI"
			parameter_string_t IDELAY_TYPE, // Default: "DEFAULT";    // "DEFAULT", "DIFF_PHASE_DETECTOR", "FIXED", "VARIABLE_FROM_HALF_MAX", "VARIABLE_FROM_ZERO"
			parameter_int_t IDELAY_VALUE, // Default: 0
			parameter_int_t ODELAY_VALUE, // Default: 0
			parameter_string_t SERDES_MODE, // Default: "NONE";       // "NONE", "MASTER", "SLAVE"
			parameter_int_t SIM_IDATAIN_INDELAY, // Default: 110
			parameter_int_t SIM_ODATAIN_INDELAY, // Default: 110
			parameter_int_t SIM_TAPDELAY_VALUE, // Default: 75
			//Verilog Ports in definition order:
			NetFlow* BUSY, // OUTPUT
			NetFlow* DATAOUT, // OUTPUT
			NetFlow* DATAOUT2, // OUTPUT
			NetFlow* DOUT, // OUTPUT
			NetFlow* TOUT, // OUTPUT
			NetFlow* CAL, // INPUT
			NetFlow* CE, // INPUT
			NetFlow* CLK, // INPUT
			NetFlow* IDATAIN, // INPUT
			NetFlow* INC, // INPUT
			NetFlow* IOCLK0, // INPUT
			NetFlow* IOCLK1, // INPUT
			NetFlow* ODATAIN, // INPUT
			NetFlow* RST, // INPUT
			NetFlow* T // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			this->COUNTER_WRAPAROUND = COUNTER_WRAPAROUND; // Default: "WRAPAROUND"; // "WRAPAROUND", "STAY_AT_LIMIT"
			this->DATA_RATE = DATA_RATE; // Default: "SDR";       // "SDR", "DDR"
			this->DELAY_SRC = DELAY_SRC; // Default: "IO";        // "IO", "IDATAIN", "ODATAIN"
			this->IDELAY2_VALUE = IDELAY2_VALUE; // Default: 0
			this->IDELAY_MODE = IDELAY_MODE; // Default: "NORMAL";  // "NORMAL", "PCI"
			this->IDELAY_TYPE = IDELAY_TYPE; // Default: "DEFAULT";    // "DEFAULT", "DIFF_PHASE_DETECTOR", "FIXED", "VARIABLE_FROM_HALF_MAX", "VARIABLE_FROM_ZERO"
			this->IDELAY_VALUE = IDELAY_VALUE; // Default: 0
			this->ODELAY_VALUE = ODELAY_VALUE; // Default: 0
			this->SERDES_MODE = SERDES_MODE; // Default: "NONE";       // "NONE", "MASTER", "SLAVE"
			this->SIM_IDATAIN_INDELAY = SIM_IDATAIN_INDELAY; // Default: 110
			this->SIM_ODATAIN_INDELAY = SIM_ODATAIN_INDELAY; // Default: 110
			this->SIM_TAPDELAY_VALUE = SIM_TAPDELAY_VALUE; // Default: 75
			//Verilog Ports in definition order:
			this->BUSY = BUSY; // OUTPUT
			this->DATAOUT = DATAOUT; // OUTPUT
			this->DATAOUT2 = DATAOUT2; // OUTPUT
			this->DOUT = DOUT; // OUTPUT
			this->TOUT = TOUT; // OUTPUT
			this->CAL = CAL; // INPUT
			this->CE = CE; // INPUT
			this->CLK = CLK; // INPUT
			this->IDATAIN = IDATAIN; // INPUT
			this->INC = INC; // INPUT
			this->IOCLK0 = IOCLK0; // INPUT
			this->IOCLK1 = IOCLK1; // INPUT
			this->ODATAIN = ODATAIN; // INPUT
			this->RST = RST; // INPUT
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
