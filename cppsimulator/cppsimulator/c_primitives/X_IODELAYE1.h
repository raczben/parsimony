/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_IODELAYE1{

		//Verilog Parameters:
		parameter_enum_t CINVCTRL_SEL;
		parameter_string_t DELAY_SRC;
		parameter_enum_t HIGH_PERFORMANCE_MODE;
		parameter_string_t IDELAY_TYPE;
		parameter_int_t IDELAY_VALUE;
		parameter_string_t ODELAY_TYPE;
		parameter_int_t ODELAY_VALUE;
		parameter_int_t REFCLK_FREQUENCY;
		parameter_string_t SIGNAL_PATTERN;
		parameter_int_t ILEAK_ADJUST;
		parameter_int_t D_IOBDELAY_OFFSET;
		parameter_string_t LOC;
		parameter_int_t SIM_DELAY_D;
		parameter_int_t SIM_ODELAY_D;
		//Verilog Ports in definition order:
		NetFlow* CNTVALUEOUT; // OUTPUT
		NetFlow* DATAOUT; // OUTPUT
		NetFlow* C; // INPUT
		NetFlow* CE; // INPUT
		NetFlow* CINVCTRL; // INPUT
		NetFlow* CLKIN; // INPUT
		NetFlow* CNTVALUEIN; // INPUT
		NetFlow* DATAIN; // INPUT
		NetFlow* IDATAIN; // INPUT
		NetFlow* INC; // INPUT
		NetFlow* ODATAIN; // INPUT
		NetFlow* RST; // INPUT
		NetFlow* T; // INPUT
		
	
		X_IODELAYE1(
			//Verilog Parameters:
			parameter_enum_t CINVCTRL_SEL, // Default: "FALSE"
			parameter_string_t DELAY_SRC, // Default: "I"
			parameter_enum_t HIGH_PERFORMANCE_MODE, // Default: "FALSE"
			parameter_string_t IDELAY_TYPE, // Default: "DEFAULT"
			parameter_int_t IDELAY_VALUE, // Default: 0
			parameter_string_t ODELAY_TYPE, // Default: "FIXED"
			parameter_int_t ODELAY_VALUE, // Default: 0
			parameter_int_t REFCLK_FREQUENCY, // Default: 200.0
			parameter_string_t SIGNAL_PATTERN, // Default: "DATA"
			parameter_int_t ILEAK_ADJUST, // Default: 1.0
			parameter_int_t D_IOBDELAY_OFFSET, // Default: 0.0
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_int_t SIM_DELAY_D, // Default: 0
			parameter_int_t SIM_ODELAY_D, // Default: 0
			//Verilog Ports in definition order:
			NetFlow* CNTVALUEOUT, // OUTPUT
			NetFlow* DATAOUT, // OUTPUT
			NetFlow* C, // INPUT
			NetFlow* CE, // INPUT
			NetFlow* CINVCTRL, // INPUT
			NetFlow* CLKIN, // INPUT
			NetFlow* CNTVALUEIN, // INPUT
			NetFlow* DATAIN, // INPUT
			NetFlow* IDATAIN, // INPUT
			NetFlow* INC, // INPUT
			NetFlow* ODATAIN, // INPUT
			NetFlow* RST, // INPUT
			NetFlow* T // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->CINVCTRL_SEL = CINVCTRL_SEL; // Default: "FALSE"
			this->DELAY_SRC = DELAY_SRC; // Default: "I"
			this->HIGH_PERFORMANCE_MODE = HIGH_PERFORMANCE_MODE; // Default: "FALSE"
			this->IDELAY_TYPE = IDELAY_TYPE; // Default: "DEFAULT"
			this->IDELAY_VALUE = IDELAY_VALUE; // Default: 0
			this->ODELAY_TYPE = ODELAY_TYPE; // Default: "FIXED"
			this->ODELAY_VALUE = ODELAY_VALUE; // Default: 0
			this->REFCLK_FREQUENCY = REFCLK_FREQUENCY; // Default: 200.0
			this->SIGNAL_PATTERN = SIGNAL_PATTERN; // Default: "DATA"
			this->ILEAK_ADJUST = ILEAK_ADJUST; // Default: 1.0
			this->D_IOBDELAY_OFFSET = D_IOBDELAY_OFFSET; // Default: 0.0
			this->LOC = LOC; // Default: "UNPLACED"
			this->SIM_DELAY_D = SIM_DELAY_D; // Default: 0
			this->SIM_ODELAY_D = SIM_ODELAY_D; // Default: 0
			//Verilog Ports in definition order:
			this->CNTVALUEOUT = CNTVALUEOUT; // OUTPUT
			this->DATAOUT = DATAOUT; // OUTPUT
			this->C = C; // INPUT
			this->CE = CE; // INPUT
			this->CINVCTRL = CINVCTRL; // INPUT
			this->CLKIN = CLKIN; // INPUT
			this->CNTVALUEIN = CNTVALUEIN; // INPUT
			this->DATAIN = DATAIN; // INPUT
			this->IDATAIN = IDATAIN; // INPUT
			this->INC = INC; // INPUT
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
