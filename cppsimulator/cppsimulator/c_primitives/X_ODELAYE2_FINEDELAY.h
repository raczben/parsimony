/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_ODELAYE2_FINEDELAY{

		//Verilog Parameters:
		parameter_enum_t CINVCTRL_SEL;
		parameter_string_t DELAY_SRC;
		parameter_string_t FINEDELAY;
		parameter_enum_t HIGH_PERFORMANCE_MODE;
		parameter_string_t ODELAY_TYPE;
		parameter_int_t ODELAY_VALUE;
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
		NetFlow* CLKIN; // INPUT
		NetFlow* CNTVALUEIN; // INPUT
		NetFlow* INC; // INPUT
		NetFlow* LD; // INPUT
		NetFlow* LDPIPEEN; // INPUT
		NetFlow* ODATAIN; // INPUT
		NetFlow* OFDLY; // INPUT
		NetFlow* REGRST; // INPUT
		
	
		X_ODELAYE2_FINEDELAY(
			//Verilog Parameters:
			parameter_enum_t CINVCTRL_SEL, // Default: "FALSE"
			parameter_string_t DELAY_SRC, // Default: "ODATAIN"
			parameter_string_t FINEDELAY, // Default: "BYPASS"
			parameter_enum_t HIGH_PERFORMANCE_MODE, // Default: "FALSE"
			parameter_string_t ODELAY_TYPE, // Default: "FIXED"
			parameter_int_t ODELAY_VALUE, // Default: 0
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
			NetFlow* CLKIN, // INPUT
			NetFlow* CNTVALUEIN, // INPUT
			NetFlow* INC, // INPUT
			NetFlow* LD, // INPUT
			NetFlow* LDPIPEEN, // INPUT
			NetFlow* ODATAIN, // INPUT
			NetFlow* OFDLY, // INPUT
			NetFlow* REGRST // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->CINVCTRL_SEL = CINVCTRL_SEL; // Default: "FALSE"
			this->DELAY_SRC = DELAY_SRC; // Default: "ODATAIN"
			this->FINEDELAY = FINEDELAY; // Default: "BYPASS"
			this->HIGH_PERFORMANCE_MODE = HIGH_PERFORMANCE_MODE; // Default: "FALSE"
			this->ODELAY_TYPE = ODELAY_TYPE; // Default: "FIXED"
			this->ODELAY_VALUE = ODELAY_VALUE; // Default: 0
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
			this->CLKIN = CLKIN; // INPUT
			this->CNTVALUEIN = CNTVALUEIN; // INPUT
			this->INC = INC; // INPUT
			this->LD = LD; // INPUT
			this->LDPIPEEN = LDPIPEEN; // INPUT
			this->ODATAIN = ODATAIN; // INPUT
			this->OFDLY = OFDLY; // INPUT
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
