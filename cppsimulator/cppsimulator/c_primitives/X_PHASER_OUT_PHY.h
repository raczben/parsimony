/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_PHASER_OUT_PHY{

		//Verilog Parameters:
		parameter_string_t LOC;
		parameter_int_t CLKOUT_DIV;
		parameter_enum_t COARSE_BYPASS;
		parameter_int_t COARSE_DELAY;
		parameter_enum_t DATA_CTL_N;
		parameter_enum_t DATA_RD_CYCLES;
		parameter_int_t FINE_DELAY;
		parameter_int_t MEMREFCLK_PERIOD;
		parameter_enum_t OCLKDELAY_INV;
		parameter_int_t OCLK_DELAY;
		parameter_string_t OUTPUT_CLK_SRC;
		parameter_int_t PHASEREFCLK_PERIOD;
		parameter_int_t PO;
		parameter_int_t REFCLK_PERIOD;
		parameter_enum_t SYNC_IN_DIV_RST;
		//Verilog Ports in definition order:
		NetFlow* COARSEOVERFLOW; // OUTPUT
		NetFlow* COUNTERREADVAL; // OUTPUT
		NetFlow* CTSBUS; // OUTPUT
		NetFlow* DQSBUS; // OUTPUT
		NetFlow* DTSBUS; // OUTPUT
		NetFlow* FINEOVERFLOW; // OUTPUT
		NetFlow* OCLK; // OUTPUT
		NetFlow* OCLKDELAYED; // OUTPUT
		NetFlow* OCLKDIV; // OUTPUT
		NetFlow* OSERDESRST; // OUTPUT
		NetFlow* RDENABLE; // OUTPUT
		NetFlow* BURSTPENDINGPHY; // INPUT
		NetFlow* COARSEENABLE; // INPUT
		NetFlow* COARSEINC; // INPUT
		NetFlow* COUNTERLOADEN; // INPUT
		NetFlow* COUNTERLOADVAL; // INPUT
		NetFlow* COUNTERREADEN; // INPUT
		NetFlow* ENCALIBPHY; // INPUT
		NetFlow* FINEENABLE; // INPUT
		NetFlow* FINEINC; // INPUT
		NetFlow* FREQREFCLK; // INPUT
		NetFlow* MEMREFCLK; // INPUT
		NetFlow* PHASEREFCLK; // INPUT
		NetFlow* RST; // INPUT
		NetFlow* SELFINEOCLKDELAY; // INPUT
		NetFlow* SYNCIN; // INPUT
		NetFlow* SYSCLK; // INPUT
		
	
		X_PHASER_OUT_PHY(
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_int_t CLKOUT_DIV, // Default: 4
			parameter_enum_t COARSE_BYPASS, // Default: "FALSE"
			parameter_int_t COARSE_DELAY, // Default: 0
			parameter_enum_t DATA_CTL_N, // Default: "FALSE"
			parameter_enum_t DATA_RD_CYCLES, // Default: "FALSE"
			parameter_int_t FINE_DELAY, // Default: 0
			parameter_int_t MEMREFCLK_PERIOD, // Default: 0.000
			parameter_enum_t OCLKDELAY_INV, // Default: "FALSE"
			parameter_int_t OCLK_DELAY, // Default: 0
			parameter_string_t OUTPUT_CLK_SRC, // Default: "PHASE_REF"
			parameter_int_t PHASEREFCLK_PERIOD, // Default: 0.000
			parameter_int_t PO, // Default: 3'b000
			parameter_int_t REFCLK_PERIOD, // Default: 0.000
			parameter_enum_t SYNC_IN_DIV_RST, // Default: "FALSE"
			//Verilog Ports in definition order:
			NetFlow* COARSEOVERFLOW, // OUTPUT
			NetFlow* COUNTERREADVAL, // OUTPUT
			NetFlow* CTSBUS, // OUTPUT
			NetFlow* DQSBUS, // OUTPUT
			NetFlow* DTSBUS, // OUTPUT
			NetFlow* FINEOVERFLOW, // OUTPUT
			NetFlow* OCLK, // OUTPUT
			NetFlow* OCLKDELAYED, // OUTPUT
			NetFlow* OCLKDIV, // OUTPUT
			NetFlow* OSERDESRST, // OUTPUT
			NetFlow* RDENABLE, // OUTPUT
			NetFlow* BURSTPENDINGPHY, // INPUT
			NetFlow* COARSEENABLE, // INPUT
			NetFlow* COARSEINC, // INPUT
			NetFlow* COUNTERLOADEN, // INPUT
			NetFlow* COUNTERLOADVAL, // INPUT
			NetFlow* COUNTERREADEN, // INPUT
			NetFlow* ENCALIBPHY, // INPUT
			NetFlow* FINEENABLE, // INPUT
			NetFlow* FINEINC, // INPUT
			NetFlow* FREQREFCLK, // INPUT
			NetFlow* MEMREFCLK, // INPUT
			NetFlow* PHASEREFCLK, // INPUT
			NetFlow* RST, // INPUT
			NetFlow* SELFINEOCLKDELAY, // INPUT
			NetFlow* SYNCIN, // INPUT
			NetFlow* SYSCLK // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			this->CLKOUT_DIV = CLKOUT_DIV; // Default: 4
			this->COARSE_BYPASS = COARSE_BYPASS; // Default: "FALSE"
			this->COARSE_DELAY = COARSE_DELAY; // Default: 0
			this->DATA_CTL_N = DATA_CTL_N; // Default: "FALSE"
			this->DATA_RD_CYCLES = DATA_RD_CYCLES; // Default: "FALSE"
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
			this->COARSEOVERFLOW = COARSEOVERFLOW; // OUTPUT
			this->COUNTERREADVAL = COUNTERREADVAL; // OUTPUT
			this->CTSBUS = CTSBUS; // OUTPUT
			this->DQSBUS = DQSBUS; // OUTPUT
			this->DTSBUS = DTSBUS; // OUTPUT
			this->FINEOVERFLOW = FINEOVERFLOW; // OUTPUT
			this->OCLK = OCLK; // OUTPUT
			this->OCLKDELAYED = OCLKDELAYED; // OUTPUT
			this->OCLKDIV = OCLKDIV; // OUTPUT
			this->OSERDESRST = OSERDESRST; // OUTPUT
			this->RDENABLE = RDENABLE; // OUTPUT
			this->BURSTPENDINGPHY = BURSTPENDINGPHY; // INPUT
			this->COARSEENABLE = COARSEENABLE; // INPUT
			this->COARSEINC = COARSEINC; // INPUT
			this->COUNTERLOADEN = COUNTERLOADEN; // INPUT
			this->COUNTERLOADVAL = COUNTERLOADVAL; // INPUT
			this->COUNTERREADEN = COUNTERREADEN; // INPUT
			this->ENCALIBPHY = ENCALIBPHY; // INPUT
			this->FINEENABLE = FINEENABLE; // INPUT
			this->FINEINC = FINEINC; // INPUT
			this->FREQREFCLK = FREQREFCLK; // INPUT
			this->MEMREFCLK = MEMREFCLK; // INPUT
			this->PHASEREFCLK = PHASEREFCLK; // INPUT
			this->RST = RST; // INPUT
			this->SELFINEOCLKDELAY = SELFINEOCLKDELAY; // INPUT
			this->SYNCIN = SYNCIN; // INPUT
			this->SYSCLK = SYSCLK; // INPUT
		
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
