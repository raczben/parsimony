/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_IODELAYE1: public Primitive{

		//Verilog Parameters:
		parameter_enum_t CINVCTRL_SEL;
		parameter_string_t DELAY_SRC;
		parameter_enum_t HIGH_PERFORMANCE_MODE;
		parameter_string_t IDELAY_TYPE;
		parameter_string_t IDELAY_VALUE;
		parameter_string_t ODELAY_TYPE;
		parameter_string_t ODELAY_VALUE;
		parameter_string_t REFCLK_FREQUENCY;
		parameter_string_t SIGNAL_PATTERN;
		parameter_string_t ILEAK_ADJUST;
		parameter_string_t D_IOBDELAY_OFFSET;
		parameter_string_t LOC;
		parameter_string_t SIM_DELAY_D;
		parameter_string_t SIM_ODELAY_D;
		//Verilog Ports in definition order:
		NetFlow* CNTVALUEOUT; // net ID: CNTVALUEOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* DATAOUT; // net ID: DATAOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* C; // net ID: C lsb: 0  msb: 0 INPUT
		NetFlow* CE; // net ID: CE lsb: 0  msb: 0 INPUT
		NetFlow* CINVCTRL; // net ID: CINVCTRL lsb: 0  msb: 0 INPUT
		NetFlow* CLKIN; // net ID: CLKIN lsb: 0  msb: 0 INPUT
		NetFlow* CNTVALUEIN; // net ID: CNTVALUEIN lsb: 0  msb: 4 INPUT
		NetFlow* DATAIN; // net ID: DATAIN lsb: 0  msb: 0 INPUT
		NetFlow* IDATAIN; // net ID: IDATAIN lsb: 0  msb: 0 INPUT
		NetFlow* INC; // net ID: INC lsb: 0  msb: 0 INPUT
		NetFlow* ODATAIN; // net ID: ODATAIN lsb: 0  msb: 0 INPUT
		NetFlow* RST; // net ID: RST lsb: 0  msb: 0 INPUT
		NetFlow* T; // net ID: T lsb: 0  msb: 0 INPUT
		
		X_IODELAYE1(
			const char * name,
			//Verilog Parameters:
			parameter_enum_t CINVCTRL_SEL, // Default: "FALSE"
			parameter_string_t DELAY_SRC, // Default: "I"
			parameter_enum_t HIGH_PERFORMANCE_MODE, // Default: "FALSE"
			parameter_string_t IDELAY_TYPE, // Default: "DEFAULT"
			parameter_string_t IDELAY_VALUE, // Default: 0
			parameter_string_t ODELAY_TYPE, // Default: "FIXED"
			parameter_string_t ODELAY_VALUE, // Default: 0
			parameter_string_t REFCLK_FREQUENCY, // Default: 200.0
			parameter_string_t SIGNAL_PATTERN, // Default: "DATA"
			parameter_string_t ILEAK_ADJUST, // Default: 1.0
			parameter_string_t D_IOBDELAY_OFFSET, // Default: 0.0
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_string_t SIM_DELAY_D, // Default: 0
			parameter_string_t SIM_ODELAY_D, // Default: 0
			//Verilog Ports in definition order:
			NetFlow* CNTVALUEOUT, // net ID: CNTVALUEOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* DATAOUT, // net ID: DATAOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* C, // net ID: C lsb: 0  msb: 0 INPUT
			NetFlow* CE, // net ID: CE lsb: 0  msb: 0 INPUT
			NetFlow* CINVCTRL, // net ID: CINVCTRL lsb: 0  msb: 0 INPUT
			NetFlow* CLKIN, // net ID: CLKIN lsb: 0  msb: 0 INPUT
			NetFlow* CNTVALUEIN, // net ID: CNTVALUEIN lsb: 0  msb: 4 INPUT
			NetFlow* DATAIN, // net ID: DATAIN lsb: 0  msb: 0 INPUT
			NetFlow* IDATAIN, // net ID: IDATAIN lsb: 0  msb: 0 INPUT
			NetFlow* INC, // net ID: INC lsb: 0  msb: 0 INPUT
			NetFlow* ODATAIN, // net ID: ODATAIN lsb: 0  msb: 0 INPUT
			NetFlow* RST, // net ID: RST lsb: 0  msb: 0 INPUT
			NetFlow* T // net ID: T lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
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
			this->CNTVALUEOUT = CNTVALUEOUT; // net ID: CNTVALUEOUT lsb: 0  msb: 0 OUTPUT
			this->DATAOUT = DATAOUT; // net ID: DATAOUT lsb: 0  msb: 0 OUTPUT
			this->C = C; // net ID: C lsb: 0  msb: 0 INPUT
			this->CE = CE; // net ID: CE lsb: 0  msb: 0 INPUT
			this->CINVCTRL = CINVCTRL; // net ID: CINVCTRL lsb: 0  msb: 0 INPUT
			this->CLKIN = CLKIN; // net ID: CLKIN lsb: 0  msb: 0 INPUT
			this->CNTVALUEIN = CNTVALUEIN; // net ID: CNTVALUEIN lsb: 0  msb: 4 INPUT
			this->DATAIN = DATAIN; // net ID: DATAIN lsb: 0  msb: 0 INPUT
			this->IDATAIN = IDATAIN; // net ID: IDATAIN lsb: 0  msb: 0 INPUT
			this->INC = INC; // net ID: INC lsb: 0  msb: 0 INPUT
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
