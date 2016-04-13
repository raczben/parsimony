/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_PHASER_IN: public Primitive{

		//Verilog Parameters:
		parameter_string_t LOC;
		parameter_string_t CLKOUT_DIV;
		parameter_enum_t DQS_BIAS_MODE;
		parameter_enum_t EN_ISERDES_RST;
		parameter_string_t FINE_DELAY;
		parameter_string_t FREQ_REF_DIV;
		parameter_string_t MEMREFCLK_PERIOD;
		parameter_string_t OUTPUT_CLK_SRC;
		parameter_string_t PHASEREFCLK_PERIOD;
		parameter_string_t REFCLK_PERIOD;
		parameter_string_t SEL_CLK_OFFSET;
		parameter_enum_t SYNC_IN_DIV_RST;
		//Verilog Ports in definition order:
		NetFlow* COUNTERREADVAL; // net ID: COUNTERREADVAL lsb: 0  msb: 0 OUTPUT
		NetFlow* FINEOVERFLOW; // net ID: FINEOVERFLOW lsb: 0  msb: 0 OUTPUT
		NetFlow* ICLK; // net ID: ICLK lsb: 0  msb: 0 OUTPUT
		NetFlow* ICLKDIV; // net ID: ICLKDIV lsb: 0  msb: 0 OUTPUT
		NetFlow* ISERDESRST; // net ID: ISERDESRST lsb: 0  msb: 0 OUTPUT
		NetFlow* RCLK; // net ID: RCLK lsb: 0  msb: 0 OUTPUT
		NetFlow* COUNTERLOADEN; // net ID: COUNTERLOADEN lsb: 0  msb: 0 INPUT
		NetFlow* COUNTERLOADVAL; // net ID: COUNTERLOADVAL lsb: 0  msb: 5 INPUT
		NetFlow* COUNTERREADEN; // net ID: COUNTERREADEN lsb: 0  msb: 0 INPUT
		NetFlow* DIVIDERST; // net ID: DIVIDERST lsb: 0  msb: 0 INPUT
		NetFlow* EDGEADV; // net ID: EDGEADV lsb: 0  msb: 0 INPUT
		NetFlow* FINEENABLE; // net ID: FINEENABLE lsb: 0  msb: 0 INPUT
		NetFlow* FINEINC; // net ID: FINEINC lsb: 0  msb: 0 INPUT
		NetFlow* FREQREFCLK; // net ID: FREQREFCLK lsb: 0  msb: 0 INPUT
		NetFlow* MEMREFCLK; // net ID: MEMREFCLK lsb: 0  msb: 0 INPUT
		NetFlow* PHASEREFCLK; // net ID: PHASEREFCLK lsb: 0  msb: 0 INPUT
		NetFlow* RANKSEL; // net ID: RANKSEL lsb: 0  msb: 1 INPUT
		NetFlow* RST; // net ID: RST lsb: 0  msb: 0 INPUT
		NetFlow* SYNCIN; // net ID: SYNCIN lsb: 0  msb: 0 INPUT
		NetFlow* SYSCLK; // net ID: SYSCLK lsb: 0  msb: 0 INPUT
		
		X_PHASER_IN(
			const char * name,
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_string_t CLKOUT_DIV, // Default: 4
			parameter_enum_t DQS_BIAS_MODE, // Default: "FALSE"
			parameter_enum_t EN_ISERDES_RST, // Default: "FALSE"
			parameter_string_t FINE_DELAY, // Default: 0
			parameter_string_t FREQ_REF_DIV, // Default: "NONE"
			parameter_string_t MEMREFCLK_PERIOD, // Default: 0.000
			parameter_string_t OUTPUT_CLK_SRC, // Default: "PHASE_REF"
			parameter_string_t PHASEREFCLK_PERIOD, // Default: 0.000
			parameter_string_t REFCLK_PERIOD, // Default: 0.000
			parameter_string_t SEL_CLK_OFFSET, // Default: 5
			parameter_enum_t SYNC_IN_DIV_RST, // Default: "FALSE"
			//Verilog Ports in definition order:
			NetFlow* COUNTERREADVAL, // net ID: COUNTERREADVAL lsb: 0  msb: 0 OUTPUT
			NetFlow* FINEOVERFLOW, // net ID: FINEOVERFLOW lsb: 0  msb: 0 OUTPUT
			NetFlow* ICLK, // net ID: ICLK lsb: 0  msb: 0 OUTPUT
			NetFlow* ICLKDIV, // net ID: ICLKDIV lsb: 0  msb: 0 OUTPUT
			NetFlow* ISERDESRST, // net ID: ISERDESRST lsb: 0  msb: 0 OUTPUT
			NetFlow* RCLK, // net ID: RCLK lsb: 0  msb: 0 OUTPUT
			NetFlow* COUNTERLOADEN, // net ID: COUNTERLOADEN lsb: 0  msb: 0 INPUT
			NetFlow* COUNTERLOADVAL, // net ID: COUNTERLOADVAL lsb: 0  msb: 5 INPUT
			NetFlow* COUNTERREADEN, // net ID: COUNTERREADEN lsb: 0  msb: 0 INPUT
			NetFlow* DIVIDERST, // net ID: DIVIDERST lsb: 0  msb: 0 INPUT
			NetFlow* EDGEADV, // net ID: EDGEADV lsb: 0  msb: 0 INPUT
			NetFlow* FINEENABLE, // net ID: FINEENABLE lsb: 0  msb: 0 INPUT
			NetFlow* FINEINC, // net ID: FINEINC lsb: 0  msb: 0 INPUT
			NetFlow* FREQREFCLK, // net ID: FREQREFCLK lsb: 0  msb: 0 INPUT
			NetFlow* MEMREFCLK, // net ID: MEMREFCLK lsb: 0  msb: 0 INPUT
			NetFlow* PHASEREFCLK, // net ID: PHASEREFCLK lsb: 0  msb: 0 INPUT
			NetFlow* RANKSEL, // net ID: RANKSEL lsb: 0  msb: 1 INPUT
			NetFlow* RST, // net ID: RST lsb: 0  msb: 0 INPUT
			NetFlow* SYNCIN, // net ID: SYNCIN lsb: 0  msb: 0 INPUT
			NetFlow* SYSCLK // net ID: SYSCLK lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			this->CLKOUT_DIV = CLKOUT_DIV; // Default: 4
			this->DQS_BIAS_MODE = DQS_BIAS_MODE; // Default: "FALSE"
			this->EN_ISERDES_RST = EN_ISERDES_RST; // Default: "FALSE"
			this->FINE_DELAY = FINE_DELAY; // Default: 0
			this->FREQ_REF_DIV = FREQ_REF_DIV; // Default: "NONE"
			this->MEMREFCLK_PERIOD = MEMREFCLK_PERIOD; // Default: 0.000
			this->OUTPUT_CLK_SRC = OUTPUT_CLK_SRC; // Default: "PHASE_REF"
			this->PHASEREFCLK_PERIOD = PHASEREFCLK_PERIOD; // Default: 0.000
			this->REFCLK_PERIOD = REFCLK_PERIOD; // Default: 0.000
			this->SEL_CLK_OFFSET = SEL_CLK_OFFSET; // Default: 5
			this->SYNC_IN_DIV_RST = SYNC_IN_DIV_RST; // Default: "FALSE"
			//Verilog Ports in definition order:
			this->COUNTERREADVAL = COUNTERREADVAL; // net ID: COUNTERREADVAL lsb: 0  msb: 0 OUTPUT
			this->FINEOVERFLOW = FINEOVERFLOW; // net ID: FINEOVERFLOW lsb: 0  msb: 0 OUTPUT
			this->ICLK = ICLK; // net ID: ICLK lsb: 0  msb: 0 OUTPUT
			this->ICLKDIV = ICLKDIV; // net ID: ICLKDIV lsb: 0  msb: 0 OUTPUT
			this->ISERDESRST = ISERDESRST; // net ID: ISERDESRST lsb: 0  msb: 0 OUTPUT
			this->RCLK = RCLK; // net ID: RCLK lsb: 0  msb: 0 OUTPUT
			this->COUNTERLOADEN = COUNTERLOADEN; // net ID: COUNTERLOADEN lsb: 0  msb: 0 INPUT
			this->COUNTERLOADVAL = COUNTERLOADVAL; // net ID: COUNTERLOADVAL lsb: 0  msb: 5 INPUT
			this->COUNTERREADEN = COUNTERREADEN; // net ID: COUNTERREADEN lsb: 0  msb: 0 INPUT
			this->DIVIDERST = DIVIDERST; // net ID: DIVIDERST lsb: 0  msb: 0 INPUT
			this->EDGEADV = EDGEADV; // net ID: EDGEADV lsb: 0  msb: 0 INPUT
			this->FINEENABLE = FINEENABLE; // net ID: FINEENABLE lsb: 0  msb: 0 INPUT
			this->FINEINC = FINEINC; // net ID: FINEINC lsb: 0  msb: 0 INPUT
			this->FREQREFCLK = FREQREFCLK; // net ID: FREQREFCLK lsb: 0  msb: 0 INPUT
			this->MEMREFCLK = MEMREFCLK; // net ID: MEMREFCLK lsb: 0  msb: 0 INPUT
			this->PHASEREFCLK = PHASEREFCLK; // net ID: PHASEREFCLK lsb: 0  msb: 0 INPUT
			this->RANKSEL = RANKSEL; // net ID: RANKSEL lsb: 0  msb: 1 INPUT
			this->RST = RST; // net ID: RST lsb: 0  msb: 0 INPUT
			this->SYNCIN = SYNCIN; // net ID: SYNCIN lsb: 0  msb: 0 INPUT
			this->SYSCLK = SYSCLK; // net ID: SYSCLK lsb: 0  msb: 0 INPUT
			
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
