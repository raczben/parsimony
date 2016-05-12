/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_IODELAYE1_H
#define X_IODELAYE1_H

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
		NetFlow* CNTVALUEOUT_A4_B; // net ID: CNTVALUEOUT lsb: 0  msb: 4 OUTPUT
		NetFlow* CNTVALUEOUT_A3_B; // net ID: CNTVALUEOUT lsb: 0  msb: 4 OUTPUT
		NetFlow* CNTVALUEOUT_A2_B; // net ID: CNTVALUEOUT lsb: 0  msb: 4 OUTPUT
		NetFlow* CNTVALUEOUT_A1_B; // net ID: CNTVALUEOUT lsb: 0  msb: 4 OUTPUT
		NetFlow* CNTVALUEOUT_A0_B; // net ID: CNTVALUEOUT lsb: 0  msb: 4 OUTPUT
		NetFlow* DATAOUT_A0_B; // net ID: DATAOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* C_A0_B; // net ID: C lsb: 0  msb: 0 INPUT
		NetFlow* CE_A0_B; // net ID: CE lsb: 0  msb: 0 INPUT
		NetFlow* CINVCTRL_A0_B; // net ID: CINVCTRL lsb: 0  msb: 0 INPUT
		NetFlow* CLKIN_A0_B; // net ID: CLKIN lsb: 0  msb: 0 INPUT
		NetFlow* CNTVALUEIN_A4_B; // net ID: CNTVALUEIN lsb: 0  msb: 4 INPUT
		NetFlow* CNTVALUEIN_A3_B; // net ID: CNTVALUEIN lsb: 0  msb: 4 INPUT
		NetFlow* CNTVALUEIN_A2_B; // net ID: CNTVALUEIN lsb: 0  msb: 4 INPUT
		NetFlow* CNTVALUEIN_A1_B; // net ID: CNTVALUEIN lsb: 0  msb: 4 INPUT
		NetFlow* CNTVALUEIN_A0_B; // net ID: CNTVALUEIN lsb: 0  msb: 4 INPUT
		NetFlow* DATAIN_A0_B; // net ID: DATAIN lsb: 0  msb: 0 INPUT
		NetFlow* IDATAIN_A0_B; // net ID: IDATAIN lsb: 0  msb: 0 INPUT
		NetFlow* INC_A0_B; // net ID: INC lsb: 0  msb: 0 INPUT
		NetFlow* ODATAIN_A0_B; // net ID: ODATAIN lsb: 0  msb: 0 INPUT
		NetFlow* RST_A0_B; // net ID: RST lsb: 0  msb: 0 INPUT
		NetFlow* T_A0_B; // net ID: T lsb: 0  msb: 0 INPUT
		
		public: X_IODELAYE1(
			const char * name,
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
			NetFlow* CNTVALUEOUT_A4_B, // net ID: CNTVALUEOUT lsb: 0  msb: 4 OUTPUT
			NetFlow* CNTVALUEOUT_A3_B, // net ID: CNTVALUEOUT lsb: 0  msb: 4 OUTPUT
			NetFlow* CNTVALUEOUT_A2_B, // net ID: CNTVALUEOUT lsb: 0  msb: 4 OUTPUT
			NetFlow* CNTVALUEOUT_A1_B, // net ID: CNTVALUEOUT lsb: 0  msb: 4 OUTPUT
			NetFlow* CNTVALUEOUT_A0_B, // net ID: CNTVALUEOUT lsb: 0  msb: 4 OUTPUT
			NetFlow* DATAOUT_A0_B, // net ID: DATAOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* C_A0_B, // net ID: C lsb: 0  msb: 0 INPUT
			NetFlow* CE_A0_B, // net ID: CE lsb: 0  msb: 0 INPUT
			NetFlow* CINVCTRL_A0_B, // net ID: CINVCTRL lsb: 0  msb: 0 INPUT
			NetFlow* CLKIN_A0_B, // net ID: CLKIN lsb: 0  msb: 0 INPUT
			NetFlow* CNTVALUEIN_A4_B, // net ID: CNTVALUEIN lsb: 0  msb: 4 INPUT
			NetFlow* CNTVALUEIN_A3_B, // net ID: CNTVALUEIN lsb: 0  msb: 4 INPUT
			NetFlow* CNTVALUEIN_A2_B, // net ID: CNTVALUEIN lsb: 0  msb: 4 INPUT
			NetFlow* CNTVALUEIN_A1_B, // net ID: CNTVALUEIN lsb: 0  msb: 4 INPUT
			NetFlow* CNTVALUEIN_A0_B, // net ID: CNTVALUEIN lsb: 0  msb: 4 INPUT
			NetFlow* DATAIN_A0_B, // net ID: DATAIN lsb: 0  msb: 0 INPUT
			NetFlow* IDATAIN_A0_B, // net ID: IDATAIN lsb: 0  msb: 0 INPUT
			NetFlow* INC_A0_B, // net ID: INC lsb: 0  msb: 0 INPUT
			NetFlow* ODATAIN_A0_B, // net ID: ODATAIN lsb: 0  msb: 0 INPUT
			NetFlow* RST_A0_B, // net ID: RST lsb: 0  msb: 0 INPUT
			NetFlow* T_A0_B // net ID: T lsb: 0  msb: 0 INPUT
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
			this->CNTVALUEOUT_A4_B = CNTVALUEOUT_A4_B; // net ID: CNTVALUEOUT lsb: 0  msb: 4 OUTPUT
			this->CNTVALUEOUT_A3_B = CNTVALUEOUT_A3_B; // net ID: CNTVALUEOUT lsb: 0  msb: 4 OUTPUT
			this->CNTVALUEOUT_A2_B = CNTVALUEOUT_A2_B; // net ID: CNTVALUEOUT lsb: 0  msb: 4 OUTPUT
			this->CNTVALUEOUT_A1_B = CNTVALUEOUT_A1_B; // net ID: CNTVALUEOUT lsb: 0  msb: 4 OUTPUT
			this->CNTVALUEOUT_A0_B = CNTVALUEOUT_A0_B; // net ID: CNTVALUEOUT lsb: 0  msb: 4 OUTPUT
			this->DATAOUT_A0_B = DATAOUT_A0_B; // net ID: DATAOUT lsb: 0  msb: 0 OUTPUT
			this->C_A0_B = C_A0_B; // net ID: C lsb: 0  msb: 0 INPUT
			this->CE_A0_B = CE_A0_B; // net ID: CE lsb: 0  msb: 0 INPUT
			this->CINVCTRL_A0_B = CINVCTRL_A0_B; // net ID: CINVCTRL lsb: 0  msb: 0 INPUT
			this->CLKIN_A0_B = CLKIN_A0_B; // net ID: CLKIN lsb: 0  msb: 0 INPUT
			this->CNTVALUEIN_A4_B = CNTVALUEIN_A4_B; // net ID: CNTVALUEIN lsb: 0  msb: 4 INPUT
			this->CNTVALUEIN_A3_B = CNTVALUEIN_A3_B; // net ID: CNTVALUEIN lsb: 0  msb: 4 INPUT
			this->CNTVALUEIN_A2_B = CNTVALUEIN_A2_B; // net ID: CNTVALUEIN lsb: 0  msb: 4 INPUT
			this->CNTVALUEIN_A1_B = CNTVALUEIN_A1_B; // net ID: CNTVALUEIN lsb: 0  msb: 4 INPUT
			this->CNTVALUEIN_A0_B = CNTVALUEIN_A0_B; // net ID: CNTVALUEIN lsb: 0  msb: 4 INPUT
			this->DATAIN_A0_B = DATAIN_A0_B; // net ID: DATAIN lsb: 0  msb: 0 INPUT
			this->IDATAIN_A0_B = IDATAIN_A0_B; // net ID: IDATAIN lsb: 0  msb: 0 INPUT
			this->INC_A0_B = INC_A0_B; // net ID: INC lsb: 0  msb: 0 INPUT
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
#endif // X_IODELAYE1_H
