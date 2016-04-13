/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_PHASER_OUT: public Primitive{

		//Verilog Parameters:
		parameter_string_t LOC;
		parameter_string_t CLKOUT_DIV;
		parameter_enum_t COARSE_BYPASS;
		parameter_string_t COARSE_DELAY;
		parameter_enum_t EN_OSERDES_RST;
		parameter_string_t FINE_DELAY;
		parameter_string_t MEMREFCLK_PERIOD;
		parameter_enum_t OCLKDELAY_INV;
		parameter_string_t OCLK_DELAY;
		parameter_string_t OUTPUT_CLK_SRC;
		parameter_string_t PHASEREFCLK_PERIOD;
		parameter_string_t PO;
		parameter_string_t REFCLK_PERIOD;
		parameter_enum_t SYNC_IN_DIV_RST;
		//Verilog Ports in definition order:
		NetFlow* COARSEOVERFLOW; // net ID: COARSEOVERFLOW lsb: 0  msb: 0 OUTPUT
		NetFlow* COUNTERREADVAL; // net ID: COUNTERREADVAL lsb: 0  msb: 0 OUTPUT
		NetFlow* FINEOVERFLOW; // net ID: FINEOVERFLOW lsb: 0  msb: 0 OUTPUT
		NetFlow* OCLK; // net ID: OCLK lsb: 0  msb: 0 OUTPUT
		NetFlow* OCLKDELAYED; // net ID: OCLKDELAYED lsb: 0  msb: 0 OUTPUT
		NetFlow* OCLKDIV; // net ID: OCLKDIV lsb: 0  msb: 0 OUTPUT
		NetFlow* OSERDESRST; // net ID: OSERDESRST lsb: 0  msb: 0 OUTPUT
		NetFlow* COARSEENABLE; // net ID: COARSEENABLE lsb: 0  msb: 0 INPUT
		NetFlow* COARSEINC; // net ID: COARSEINC lsb: 0  msb: 0 INPUT
		NetFlow* COUNTERLOADEN; // net ID: COUNTERLOADEN lsb: 0  msb: 0 INPUT
		NetFlow* COUNTERLOADVAL; // net ID: COUNTERLOADVAL lsb: 0  msb: 8 INPUT
		NetFlow* COUNTERREADEN; // net ID: COUNTERREADEN lsb: 0  msb: 0 INPUT
		NetFlow* DIVIDERST; // net ID: DIVIDERST lsb: 0  msb: 0 INPUT
		NetFlow* EDGEADV; // net ID: EDGEADV lsb: 0  msb: 0 INPUT
		NetFlow* FINEENABLE; // net ID: FINEENABLE lsb: 0  msb: 0 INPUT
		NetFlow* FINEINC; // net ID: FINEINC lsb: 0  msb: 0 INPUT
		NetFlow* FREQREFCLK; // net ID: FREQREFCLK lsb: 0  msb: 0 INPUT
		NetFlow* MEMREFCLK; // net ID: MEMREFCLK lsb: 0  msb: 0 INPUT
		NetFlow* PHASEREFCLK; // net ID: PHASEREFCLK lsb: 0  msb: 0 INPUT
		NetFlow* RST; // net ID: RST lsb: 0  msb: 0 INPUT
		NetFlow* SELFINEOCLKDELAY; // net ID: SELFINEOCLKDELAY lsb: 0  msb: 0 INPUT
		NetFlow* SYNCIN; // net ID: SYNCIN lsb: 0  msb: 0 INPUT
		NetFlow* SYSCLK; // net ID: SYSCLK lsb: 0  msb: 0 INPUT
		
		X_PHASER_OUT(
			const char * name,
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_string_t CLKOUT_DIV, // Default: 4
			parameter_enum_t COARSE_BYPASS, // Default: "FALSE"
			parameter_string_t COARSE_DELAY, // Default: 0
			parameter_enum_t EN_OSERDES_RST, // Default: "FALSE"
			parameter_string_t FINE_DELAY, // Default: 0
			parameter_string_t MEMREFCLK_PERIOD, // Default: 0.000
			parameter_enum_t OCLKDELAY_INV, // Default: "FALSE"
			parameter_string_t OCLK_DELAY, // Default: 0
			parameter_string_t OUTPUT_CLK_SRC, // Default: "PHASE_REF"
			parameter_string_t PHASEREFCLK_PERIOD, // Default: 0.000
			parameter_string_t PO, // Default: 3'b000
			parameter_string_t REFCLK_PERIOD, // Default: 0.000
			parameter_enum_t SYNC_IN_DIV_RST, // Default: "FALSE"
			//Verilog Ports in definition order:
			NetFlow* COARSEOVERFLOW, // net ID: COARSEOVERFLOW lsb: 0  msb: 0 OUTPUT
			NetFlow* COUNTERREADVAL, // net ID: COUNTERREADVAL lsb: 0  msb: 0 OUTPUT
			NetFlow* FINEOVERFLOW, // net ID: FINEOVERFLOW lsb: 0  msb: 0 OUTPUT
			NetFlow* OCLK, // net ID: OCLK lsb: 0  msb: 0 OUTPUT
			NetFlow* OCLKDELAYED, // net ID: OCLKDELAYED lsb: 0  msb: 0 OUTPUT
			NetFlow* OCLKDIV, // net ID: OCLKDIV lsb: 0  msb: 0 OUTPUT
			NetFlow* OSERDESRST, // net ID: OSERDESRST lsb: 0  msb: 0 OUTPUT
			NetFlow* COARSEENABLE, // net ID: COARSEENABLE lsb: 0  msb: 0 INPUT
			NetFlow* COARSEINC, // net ID: COARSEINC lsb: 0  msb: 0 INPUT
			NetFlow* COUNTERLOADEN, // net ID: COUNTERLOADEN lsb: 0  msb: 0 INPUT
			NetFlow* COUNTERLOADVAL, // net ID: COUNTERLOADVAL lsb: 0  msb: 8 INPUT
			NetFlow* COUNTERREADEN, // net ID: COUNTERREADEN lsb: 0  msb: 0 INPUT
			NetFlow* DIVIDERST, // net ID: DIVIDERST lsb: 0  msb: 0 INPUT
			NetFlow* EDGEADV, // net ID: EDGEADV lsb: 0  msb: 0 INPUT
			NetFlow* FINEENABLE, // net ID: FINEENABLE lsb: 0  msb: 0 INPUT
			NetFlow* FINEINC, // net ID: FINEINC lsb: 0  msb: 0 INPUT
			NetFlow* FREQREFCLK, // net ID: FREQREFCLK lsb: 0  msb: 0 INPUT
			NetFlow* MEMREFCLK, // net ID: MEMREFCLK lsb: 0  msb: 0 INPUT
			NetFlow* PHASEREFCLK, // net ID: PHASEREFCLK lsb: 0  msb: 0 INPUT
			NetFlow* RST, // net ID: RST lsb: 0  msb: 0 INPUT
			NetFlow* SELFINEOCLKDELAY, // net ID: SELFINEOCLKDELAY lsb: 0  msb: 0 INPUT
			NetFlow* SYNCIN, // net ID: SYNCIN lsb: 0  msb: 0 INPUT
			NetFlow* SYSCLK // net ID: SYSCLK lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			this->CLKOUT_DIV = CLKOUT_DIV; // Default: 4
			this->COARSE_BYPASS = COARSE_BYPASS; // Default: "FALSE"
			this->COARSE_DELAY = COARSE_DELAY; // Default: 0
			this->EN_OSERDES_RST = EN_OSERDES_RST; // Default: "FALSE"
			this->FINE_DELAY = FINE_DELAY; // Default: 0
			this->MEMREFCLK_PERIOD = MEMREFCLK_PERIOD; // Default: 0.000
			this->OCLKDELAY_INV = OCLKDELAY_INV; // Default: "FALSE"
			this->OCLK_DELAY = OCLK_DELAY; // Default: 0
			this->OUTPUT_CLK_SRC = OUTPUT_CLK_SRC; // Default: "PHASE_REF"
			this->PHASEREFCLK_PERIOD = PHASEREFCLK_PERIOD; // Default: 0.000
			this->PO = PO; // Default: 3'b000
			this->REFCLK_PERIOD = REFCLK_PERIOD; // Default: 0.000
			this->SYNC_IN_DIV_RST = SYNC_IN_DIV_RST; // Default: "FALSE"
			//Verilog Ports in definition order:
			this->COARSEOVERFLOW = COARSEOVERFLOW; // net ID: COARSEOVERFLOW lsb: 0  msb: 0 OUTPUT
			this->COUNTERREADVAL = COUNTERREADVAL; // net ID: COUNTERREADVAL lsb: 0  msb: 0 OUTPUT
			this->FINEOVERFLOW = FINEOVERFLOW; // net ID: FINEOVERFLOW lsb: 0  msb: 0 OUTPUT
			this->OCLK = OCLK; // net ID: OCLK lsb: 0  msb: 0 OUTPUT
			this->OCLKDELAYED = OCLKDELAYED; // net ID: OCLKDELAYED lsb: 0  msb: 0 OUTPUT
			this->OCLKDIV = OCLKDIV; // net ID: OCLKDIV lsb: 0  msb: 0 OUTPUT
			this->OSERDESRST = OSERDESRST; // net ID: OSERDESRST lsb: 0  msb: 0 OUTPUT
			this->COARSEENABLE = COARSEENABLE; // net ID: COARSEENABLE lsb: 0  msb: 0 INPUT
			this->COARSEINC = COARSEINC; // net ID: COARSEINC lsb: 0  msb: 0 INPUT
			this->COUNTERLOADEN = COUNTERLOADEN; // net ID: COUNTERLOADEN lsb: 0  msb: 0 INPUT
			this->COUNTERLOADVAL = COUNTERLOADVAL; // net ID: COUNTERLOADVAL lsb: 0  msb: 8 INPUT
			this->COUNTERREADEN = COUNTERREADEN; // net ID: COUNTERREADEN lsb: 0  msb: 0 INPUT
			this->DIVIDERST = DIVIDERST; // net ID: DIVIDERST lsb: 0  msb: 0 INPUT
			this->EDGEADV = EDGEADV; // net ID: EDGEADV lsb: 0  msb: 0 INPUT
			this->FINEENABLE = FINEENABLE; // net ID: FINEENABLE lsb: 0  msb: 0 INPUT
			this->FINEINC = FINEINC; // net ID: FINEINC lsb: 0  msb: 0 INPUT
			this->FREQREFCLK = FREQREFCLK; // net ID: FREQREFCLK lsb: 0  msb: 0 INPUT
			this->MEMREFCLK = MEMREFCLK; // net ID: MEMREFCLK lsb: 0  msb: 0 INPUT
			this->PHASEREFCLK = PHASEREFCLK; // net ID: PHASEREFCLK lsb: 0  msb: 0 INPUT
			this->RST = RST; // net ID: RST lsb: 0  msb: 0 INPUT
			this->SELFINEOCLKDELAY = SELFINEOCLKDELAY; // net ID: SELFINEOCLKDELAY lsb: 0  msb: 0 INPUT
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
