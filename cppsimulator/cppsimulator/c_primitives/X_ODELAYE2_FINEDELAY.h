/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_ODELAYE2_FINEDELAY_H
#define X_ODELAYE2_FINEDELAY_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_ODELAYE2_FINEDELAY: public Primitive{

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
		NetFlow* CNTVALUEOUT_A0_B; // net ID: CNTVALUEOUT lsb: 0  msb: 4 OUTPUT
		NetFlow* CNTVALUEOUT_A1_B; // net ID: CNTVALUEOUT lsb: 0  msb: 4 OUTPUT
		NetFlow* CNTVALUEOUT_A2_B; // net ID: CNTVALUEOUT lsb: 0  msb: 4 OUTPUT
		NetFlow* CNTVALUEOUT_A3_B; // net ID: CNTVALUEOUT lsb: 0  msb: 4 OUTPUT
		NetFlow* CNTVALUEOUT_A4_B; // net ID: CNTVALUEOUT lsb: 0  msb: 4 OUTPUT
		NetFlow* DATAOUT_A0_B; // net ID: DATAOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* C_A0_B; // net ID: C lsb: 0  msb: 0 INPUT
		NetFlow* CE_A0_B; // net ID: CE lsb: 0  msb: 0 INPUT
		NetFlow* CINVCTRL_A0_B; // net ID: CINVCTRL lsb: 0  msb: 0 INPUT
		NetFlow* CLKIN_A0_B; // net ID: CLKIN lsb: 0  msb: 0 INPUT
		NetFlow* CNTVALUEIN_A0_B; // net ID: CNTVALUEIN lsb: 0  msb: 4 INPUT
		NetFlow* CNTVALUEIN_A1_B; // net ID: CNTVALUEIN lsb: 0  msb: 4 INPUT
		NetFlow* CNTVALUEIN_A2_B; // net ID: CNTVALUEIN lsb: 0  msb: 4 INPUT
		NetFlow* CNTVALUEIN_A3_B; // net ID: CNTVALUEIN lsb: 0  msb: 4 INPUT
		NetFlow* CNTVALUEIN_A4_B; // net ID: CNTVALUEIN lsb: 0  msb: 4 INPUT
		NetFlow* INC_A0_B; // net ID: INC lsb: 0  msb: 0 INPUT
		NetFlow* LD_A0_B; // net ID: LD lsb: 0  msb: 0 INPUT
		NetFlow* LDPIPEEN_A0_B; // net ID: LDPIPEEN lsb: 0  msb: 0 INPUT
		NetFlow* ODATAIN_A0_B; // net ID: ODATAIN lsb: 0  msb: 0 INPUT
		NetFlow* OFDLY_A0_B; // net ID: OFDLY lsb: 0  msb: 2 INPUT
		NetFlow* OFDLY_A1_B; // net ID: OFDLY lsb: 0  msb: 2 INPUT
		NetFlow* OFDLY_A2_B; // net ID: OFDLY lsb: 0  msb: 2 INPUT
		NetFlow* REGRST_A0_B; // net ID: REGRST lsb: 0  msb: 0 INPUT
		
		public: X_ODELAYE2_FINEDELAY(
			const char * name,
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
			NetFlow* CNTVALUEOUT_A0_B, // net ID: CNTVALUEOUT lsb: 0  msb: 4 OUTPUT
			NetFlow* CNTVALUEOUT_A1_B, // net ID: CNTVALUEOUT lsb: 0  msb: 4 OUTPUT
			NetFlow* CNTVALUEOUT_A2_B, // net ID: CNTVALUEOUT lsb: 0  msb: 4 OUTPUT
			NetFlow* CNTVALUEOUT_A3_B, // net ID: CNTVALUEOUT lsb: 0  msb: 4 OUTPUT
			NetFlow* CNTVALUEOUT_A4_B, // net ID: CNTVALUEOUT lsb: 0  msb: 4 OUTPUT
			NetFlow* DATAOUT_A0_B, // net ID: DATAOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* C_A0_B, // net ID: C lsb: 0  msb: 0 INPUT
			NetFlow* CE_A0_B, // net ID: CE lsb: 0  msb: 0 INPUT
			NetFlow* CINVCTRL_A0_B, // net ID: CINVCTRL lsb: 0  msb: 0 INPUT
			NetFlow* CLKIN_A0_B, // net ID: CLKIN lsb: 0  msb: 0 INPUT
			NetFlow* CNTVALUEIN_A0_B, // net ID: CNTVALUEIN lsb: 0  msb: 4 INPUT
			NetFlow* CNTVALUEIN_A1_B, // net ID: CNTVALUEIN lsb: 0  msb: 4 INPUT
			NetFlow* CNTVALUEIN_A2_B, // net ID: CNTVALUEIN lsb: 0  msb: 4 INPUT
			NetFlow* CNTVALUEIN_A3_B, // net ID: CNTVALUEIN lsb: 0  msb: 4 INPUT
			NetFlow* CNTVALUEIN_A4_B, // net ID: CNTVALUEIN lsb: 0  msb: 4 INPUT
			NetFlow* INC_A0_B, // net ID: INC lsb: 0  msb: 0 INPUT
			NetFlow* LD_A0_B, // net ID: LD lsb: 0  msb: 0 INPUT
			NetFlow* LDPIPEEN_A0_B, // net ID: LDPIPEEN lsb: 0  msb: 0 INPUT
			NetFlow* ODATAIN_A0_B, // net ID: ODATAIN lsb: 0  msb: 0 INPUT
			NetFlow* OFDLY_A0_B, // net ID: OFDLY lsb: 0  msb: 2 INPUT
			NetFlow* OFDLY_A1_B, // net ID: OFDLY lsb: 0  msb: 2 INPUT
			NetFlow* OFDLY_A2_B, // net ID: OFDLY lsb: 0  msb: 2 INPUT
			NetFlow* REGRST_A0_B // net ID: REGRST lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
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
			this->CNTVALUEOUT_A0_B = CNTVALUEOUT_A0_B; // net ID: CNTVALUEOUT lsb: 0  msb: 4 OUTPUT
			this->CNTVALUEOUT_A1_B = CNTVALUEOUT_A1_B; // net ID: CNTVALUEOUT lsb: 0  msb: 4 OUTPUT
			this->CNTVALUEOUT_A2_B = CNTVALUEOUT_A2_B; // net ID: CNTVALUEOUT lsb: 0  msb: 4 OUTPUT
			this->CNTVALUEOUT_A3_B = CNTVALUEOUT_A3_B; // net ID: CNTVALUEOUT lsb: 0  msb: 4 OUTPUT
			this->CNTVALUEOUT_A4_B = CNTVALUEOUT_A4_B; // net ID: CNTVALUEOUT lsb: 0  msb: 4 OUTPUT
			this->DATAOUT_A0_B = DATAOUT_A0_B; // net ID: DATAOUT lsb: 0  msb: 0 OUTPUT
			this->C_A0_B = C_A0_B; // net ID: C lsb: 0  msb: 0 INPUT
			this->CE_A0_B = CE_A0_B; // net ID: CE lsb: 0  msb: 0 INPUT
			this->CINVCTRL_A0_B = CINVCTRL_A0_B; // net ID: CINVCTRL lsb: 0  msb: 0 INPUT
			this->CLKIN_A0_B = CLKIN_A0_B; // net ID: CLKIN lsb: 0  msb: 0 INPUT
			this->CNTVALUEIN_A0_B = CNTVALUEIN_A0_B; // net ID: CNTVALUEIN lsb: 0  msb: 4 INPUT
			this->CNTVALUEIN_A1_B = CNTVALUEIN_A1_B; // net ID: CNTVALUEIN lsb: 0  msb: 4 INPUT
			this->CNTVALUEIN_A2_B = CNTVALUEIN_A2_B; // net ID: CNTVALUEIN lsb: 0  msb: 4 INPUT
			this->CNTVALUEIN_A3_B = CNTVALUEIN_A3_B; // net ID: CNTVALUEIN lsb: 0  msb: 4 INPUT
			this->CNTVALUEIN_A4_B = CNTVALUEIN_A4_B; // net ID: CNTVALUEIN lsb: 0  msb: 4 INPUT
			this->INC_A0_B = INC_A0_B; // net ID: INC lsb: 0  msb: 0 INPUT
			this->LD_A0_B = LD_A0_B; // net ID: LD lsb: 0  msb: 0 INPUT
			this->LDPIPEEN_A0_B = LDPIPEEN_A0_B; // net ID: LDPIPEEN lsb: 0  msb: 0 INPUT
			this->ODATAIN_A0_B = ODATAIN_A0_B; // net ID: ODATAIN lsb: 0  msb: 0 INPUT
			this->OFDLY_A0_B = OFDLY_A0_B; // net ID: OFDLY lsb: 0  msb: 2 INPUT
			this->OFDLY_A1_B = OFDLY_A1_B; // net ID: OFDLY lsb: 0  msb: 2 INPUT
			this->OFDLY_A2_B = OFDLY_A2_B; // net ID: OFDLY lsb: 0  msb: 2 INPUT
			this->REGRST_A0_B = REGRST_A0_B; // net ID: REGRST lsb: 0  msb: 0 INPUT
			
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
#endif // X_ODELAYE2_FINEDELAY_H
