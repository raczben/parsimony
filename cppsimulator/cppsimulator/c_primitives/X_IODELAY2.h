/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_IODELAY2_H
#define X_IODELAY2_H

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
		NetFlow* BUSY_A0_B; // net ID: BUSY lsb: 0  msb: 0 OUTPUT
		NetFlow* DATAOUT_A0_B; // net ID: DATAOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* DATAOUT2_A0_B; // net ID: DATAOUT2 lsb: 0  msb: 0 OUTPUT
		NetFlow* DOUT_A0_B; // net ID: DOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* TOUT_A0_B; // net ID: TOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* CAL_A0_B; // net ID: CAL lsb: 0  msb: 0 INPUT
		NetFlow* CE_A0_B; // net ID: CE lsb: 0  msb: 0 INPUT
		NetFlow* CLK_A0_B; // net ID: CLK lsb: 0  msb: 0 INPUT
		NetFlow* IDATAIN_A0_B; // net ID: IDATAIN lsb: 0  msb: 0 INPUT
		NetFlow* INC_A0_B; // net ID: INC lsb: 0  msb: 0 INPUT
		NetFlow* IOCLK0_A0_B; // net ID: IOCLK0 lsb: 0  msb: 0 INPUT
		NetFlow* IOCLK1_A0_B; // net ID: IOCLK1 lsb: 0  msb: 0 INPUT
		NetFlow* ODATAIN_A0_B; // net ID: ODATAIN lsb: 0  msb: 0 INPUT
		NetFlow* RST_A0_B; // net ID: RST lsb: 0  msb: 0 INPUT
		NetFlow* T_A0_B; // net ID: T lsb: 0  msb: 0 INPUT
		
		public: X_IODELAY2(
			const char * name,
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
			NetFlow* BUSY_A0_B, // net ID: BUSY lsb: 0  msb: 0 OUTPUT
			NetFlow* DATAOUT_A0_B, // net ID: DATAOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* DATAOUT2_A0_B, // net ID: DATAOUT2 lsb: 0  msb: 0 OUTPUT
			NetFlow* DOUT_A0_B, // net ID: DOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* TOUT_A0_B, // net ID: TOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* CAL_A0_B, // net ID: CAL lsb: 0  msb: 0 INPUT
			NetFlow* CE_A0_B, // net ID: CE lsb: 0  msb: 0 INPUT
			NetFlow* CLK_A0_B, // net ID: CLK lsb: 0  msb: 0 INPUT
			NetFlow* IDATAIN_A0_B, // net ID: IDATAIN lsb: 0  msb: 0 INPUT
			NetFlow* INC_A0_B, // net ID: INC lsb: 0  msb: 0 INPUT
			NetFlow* IOCLK0_A0_B, // net ID: IOCLK0 lsb: 0  msb: 0 INPUT
			NetFlow* IOCLK1_A0_B, // net ID: IOCLK1 lsb: 0  msb: 0 INPUT
			NetFlow* ODATAIN_A0_B, // net ID: ODATAIN lsb: 0  msb: 0 INPUT
			NetFlow* RST_A0_B, // net ID: RST lsb: 0  msb: 0 INPUT
			NetFlow* T_A0_B // net ID: T lsb: 0  msb: 0 INPUT
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
			this->BUSY_A0_B = BUSY_A0_B; // net ID: BUSY lsb: 0  msb: 0 OUTPUT
			this->DATAOUT_A0_B = DATAOUT_A0_B; // net ID: DATAOUT lsb: 0  msb: 0 OUTPUT
			this->DATAOUT2_A0_B = DATAOUT2_A0_B; // net ID: DATAOUT2 lsb: 0  msb: 0 OUTPUT
			this->DOUT_A0_B = DOUT_A0_B; // net ID: DOUT lsb: 0  msb: 0 OUTPUT
			this->TOUT_A0_B = TOUT_A0_B; // net ID: TOUT lsb: 0  msb: 0 OUTPUT
			this->CAL_A0_B = CAL_A0_B; // net ID: CAL lsb: 0  msb: 0 INPUT
			this->CE_A0_B = CE_A0_B; // net ID: CE lsb: 0  msb: 0 INPUT
			this->CLK_A0_B = CLK_A0_B; // net ID: CLK lsb: 0  msb: 0 INPUT
			this->IDATAIN_A0_B = IDATAIN_A0_B; // net ID: IDATAIN lsb: 0  msb: 0 INPUT
			this->INC_A0_B = INC_A0_B; // net ID: INC lsb: 0  msb: 0 INPUT
			this->IOCLK0_A0_B = IOCLK0_A0_B; // net ID: IOCLK0 lsb: 0  msb: 0 INPUT
			this->IOCLK1_A0_B = IOCLK1_A0_B; // net ID: IOCLK1 lsb: 0  msb: 0 INPUT
			this->ODATAIN_A0_B = ODATAIN_A0_B; // net ID: ODATAIN lsb: 0  msb: 0 INPUT
			this->RST_A0_B = RST_A0_B; // net ID: RST lsb: 0  msb: 0 INPUT
			this->T_A0_B = T_A0_B; // net ID: T lsb: 0  msb: 0 INPUT
			
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
#endif // X_IODELAY2_H
