/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_IODELAY2: public Primitive{

		//Verilog Parameters:
		parameter_string_t LOC;
		parameter_string_t COUNTER_WRAPAROUND;
		parameter_string_t DATA_RATE;
		parameter_string_t DELAY_SRC;
		parameter_string_t IDELAY2_VALUE;
		parameter_string_t IDELAY_MODE;
		parameter_string_t IDELAY_TYPE;
		parameter_string_t IDELAY_VALUE;
		parameter_string_t ODELAY_VALUE;
		parameter_string_t SERDES_MODE;
		parameter_string_t SIM_IDATAIN_INDELAY;
		parameter_string_t SIM_ODATAIN_INDELAY;
		parameter_string_t SIM_TAPDELAY_VALUE;
		//Verilog Ports in definition order:
		NetFlow* BUSY; // net ID: BUSY lsb: 0  msb: 0 OUTPUT
		NetFlow* DATAOUT; // net ID: DATAOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* DATAOUT2; // net ID: DATAOUT2 lsb: 0  msb: 0 OUTPUT
		NetFlow* DOUT; // net ID: DOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* TOUT; // net ID: TOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* CAL; // net ID: CAL lsb: 0  msb: 0 INPUT
		NetFlow* CE; // net ID: CE lsb: 0  msb: 0 INPUT
		NetFlow* CLK; // net ID: CLK lsb: 0  msb: 0 INPUT
		NetFlow* IDATAIN; // net ID: IDATAIN lsb: 0  msb: 0 INPUT
		NetFlow* INC; // net ID: INC lsb: 0  msb: 0 INPUT
		NetFlow* IOCLK0; // net ID: IOCLK0 lsb: 0  msb: 0 INPUT
		NetFlow* IOCLK1; // net ID: IOCLK1 lsb: 0  msb: 0 INPUT
		NetFlow* ODATAIN; // net ID: ODATAIN lsb: 0  msb: 0 INPUT
		NetFlow* RST; // net ID: RST lsb: 0  msb: 0 INPUT
		NetFlow* T; // net ID: T lsb: 0  msb: 0 INPUT
		
		X_IODELAY2(
			const char * name,
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_string_t COUNTER_WRAPAROUND, // Default: "WRAPAROUND"; // "WRAPAROUND", "STAY_AT_LIMIT"
			parameter_string_t DATA_RATE, // Default: "SDR";       // "SDR", "DDR"
			parameter_string_t DELAY_SRC, // Default: "IO";        // "IO", "IDATAIN", "ODATAIN"
			parameter_string_t IDELAY2_VALUE, // Default: 0
			parameter_string_t IDELAY_MODE, // Default: "NORMAL";  // "NORMAL", "PCI"
			parameter_string_t IDELAY_TYPE, // Default: "DEFAULT";    // "DEFAULT", "DIFF_PHASE_DETECTOR", "FIXED", "VARIABLE_FROM_HALF_MAX", "VARIABLE_FROM_ZERO"
			parameter_string_t IDELAY_VALUE, // Default: 0
			parameter_string_t ODELAY_VALUE, // Default: 0
			parameter_string_t SERDES_MODE, // Default: "NONE";       // "NONE", "MASTER", "SLAVE"
			parameter_string_t SIM_IDATAIN_INDELAY, // Default: 110
			parameter_string_t SIM_ODATAIN_INDELAY, // Default: 110
			parameter_string_t SIM_TAPDELAY_VALUE, // Default: 75
			//Verilog Ports in definition order:
			NetFlow* BUSY, // net ID: BUSY lsb: 0  msb: 0 OUTPUT
			NetFlow* DATAOUT, // net ID: DATAOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* DATAOUT2, // net ID: DATAOUT2 lsb: 0  msb: 0 OUTPUT
			NetFlow* DOUT, // net ID: DOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* TOUT, // net ID: TOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* CAL, // net ID: CAL lsb: 0  msb: 0 INPUT
			NetFlow* CE, // net ID: CE lsb: 0  msb: 0 INPUT
			NetFlow* CLK, // net ID: CLK lsb: 0  msb: 0 INPUT
			NetFlow* IDATAIN, // net ID: IDATAIN lsb: 0  msb: 0 INPUT
			NetFlow* INC, // net ID: INC lsb: 0  msb: 0 INPUT
			NetFlow* IOCLK0, // net ID: IOCLK0 lsb: 0  msb: 0 INPUT
			NetFlow* IOCLK1, // net ID: IOCLK1 lsb: 0  msb: 0 INPUT
			NetFlow* ODATAIN, // net ID: ODATAIN lsb: 0  msb: 0 INPUT
			NetFlow* RST, // net ID: RST lsb: 0  msb: 0 INPUT
			NetFlow* T // net ID: T lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
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
			this->BUSY = BUSY; // net ID: BUSY lsb: 0  msb: 0 OUTPUT
			this->DATAOUT = DATAOUT; // net ID: DATAOUT lsb: 0  msb: 0 OUTPUT
			this->DATAOUT2 = DATAOUT2; // net ID: DATAOUT2 lsb: 0  msb: 0 OUTPUT
			this->DOUT = DOUT; // net ID: DOUT lsb: 0  msb: 0 OUTPUT
			this->TOUT = TOUT; // net ID: TOUT lsb: 0  msb: 0 OUTPUT
			this->CAL = CAL; // net ID: CAL lsb: 0  msb: 0 INPUT
			this->CE = CE; // net ID: CE lsb: 0  msb: 0 INPUT
			this->CLK = CLK; // net ID: CLK lsb: 0  msb: 0 INPUT
			this->IDATAIN = IDATAIN; // net ID: IDATAIN lsb: 0  msb: 0 INPUT
			this->INC = INC; // net ID: INC lsb: 0  msb: 0 INPUT
			this->IOCLK0 = IOCLK0; // net ID: IOCLK0 lsb: 0  msb: 0 INPUT
			this->IOCLK1 = IOCLK1; // net ID: IOCLK1 lsb: 0  msb: 0 INPUT
			this->ODATAIN = ODATAIN; // net ID: ODATAIN lsb: 0  msb: 0 INPUT
			this->RST = RST; // net ID: RST lsb: 0  msb: 0 INPUT
			this->T = T; // net ID: T lsb: 0  msb: 0 INPUT
			
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
