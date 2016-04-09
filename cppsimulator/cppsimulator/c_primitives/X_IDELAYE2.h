/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_IDELAYE2{

		//Verilog Parameters:
		parameter_enum_t CINVCTRL_SEL;
		parameter_string_t DELAY_SRC;
		parameter_enum_t HIGH_PERFORMANCE_MODE;
		parameter_string_t IDELAY_TYPE;
		parameter_int_t IDELAY_VALUE;
		parameter_enum_t PIPE_SEL;
		parameter_int_t REFCLK_FREQUENCY;
		parameter_string_t SIGNAL_PATTERN;
		parameter_string_t LOC;
		parameter_int_t SIM_DELAY_D;
		//Verilog Ports in definition order:
		NetFlow* CNTVALUEOUT; // OUTPUT
		NetFlow* DATAOUT; // OUTPUT
		NetFlow* C; // INPUT
		NetFlow* CE; // INPUT
		NetFlow* CINVCTRL; // INPUT
		NetFlow* CNTVALUEIN; // INPUT
		NetFlow* DATAIN; // INPUT
		NetFlow* IDATAIN; // INPUT
		NetFlow* INC; // INPUT
		NetFlow* LD; // INPUT
		NetFlow* LDPIPEEN; // INPUT
		NetFlow* REGRST; // INPUT
		
	
		X_IDELAYE2(
			//Verilog Parameters:
			parameter_enum_t CINVCTRL_SEL, // Default: "FALSE"
			parameter_string_t DELAY_SRC, // Default: "IDATAIN"
			parameter_enum_t HIGH_PERFORMANCE_MODE, // Default: "FALSE"
			parameter_string_t IDELAY_TYPE, // Default: "FIXED"
			parameter_int_t IDELAY_VALUE, // Default: 0
			parameter_enum_t PIPE_SEL, // Default: "FALSE"
			parameter_int_t REFCLK_FREQUENCY, // Default: 200.0
			parameter_string_t SIGNAL_PATTERN, // Default: "DATA"
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_int_t SIM_DELAY_D, // Default: 0
			//Verilog Ports in definition order:
			NetFlow* CNTVALUEOUT, // OUTPUT
			NetFlow* DATAOUT, // OUTPUT
			NetFlow* C, // INPUT
			NetFlow* CE, // INPUT
			NetFlow* CINVCTRL, // INPUT
			NetFlow* CNTVALUEIN, // INPUT
			NetFlow* DATAIN, // INPUT
			NetFlow* IDATAIN, // INPUT
			NetFlow* INC, // INPUT
			NetFlow* LD, // INPUT
			NetFlow* LDPIPEEN, // INPUT
			NetFlow* REGRST // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->CINVCTRL_SEL = CINVCTRL_SEL; // Default: "FALSE"
			this->DELAY_SRC = DELAY_SRC; // Default: "IDATAIN"
			this->HIGH_PERFORMANCE_MODE = HIGH_PERFORMANCE_MODE; // Default: "FALSE"
			this->IDELAY_TYPE = IDELAY_TYPE; // Default: "FIXED"
			this->IDELAY_VALUE = IDELAY_VALUE; // Default: 0
			this->PIPE_SEL = PIPE_SEL; // Default: "FALSE"
			this->REFCLK_FREQUENCY = REFCLK_FREQUENCY; // Default: 200.0
			this->SIGNAL_PATTERN = SIGNAL_PATTERN; // Default: "DATA"
			this->LOC = LOC; // Default: "UNPLACED"
			this->SIM_DELAY_D = SIM_DELAY_D; // Default: 0
			//Verilog Ports in definition order:
			this->CNTVALUEOUT = CNTVALUEOUT; // OUTPUT
			this->DATAOUT = DATAOUT; // OUTPUT
			this->C = C; // INPUT
			this->CE = CE; // INPUT
			this->CINVCTRL = CINVCTRL; // INPUT
			this->CNTVALUEIN = CNTVALUEIN; // INPUT
			this->DATAIN = DATAIN; // INPUT
			this->IDATAIN = IDATAIN; // INPUT
			this->INC = INC; // INPUT
			this->LD = LD; // INPUT
			this->LDPIPEEN = LDPIPEEN; // INPUT
			this->REGRST = REGRST; // INPUT
		
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
