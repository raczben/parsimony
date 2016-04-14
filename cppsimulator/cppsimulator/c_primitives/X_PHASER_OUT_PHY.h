/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_PHASER_OUT_PHY_H
#define X_PHASER_OUT_PHY_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"
namespace CPrimitives {
	
	class X_PHASER_OUT_PHY: public Primitive{

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
		NetFlow* COARSEOVERFLOW_A0_B; // net ID: COARSEOVERFLOW lsb: 0  msb: 0 OUTPUT
		NetFlow* COUNTERREADVAL_A0_B; // net ID: COUNTERREADVAL lsb: 0  msb: 0 OUTPUT
		NetFlow* CTSBUS_A0_B; // net ID: CTSBUS lsb: 0  msb: 0 OUTPUT
		NetFlow* DQSBUS_A0_B; // net ID: DQSBUS lsb: 0  msb: 0 OUTPUT
		NetFlow* DTSBUS_A0_B; // net ID: DTSBUS lsb: 0  msb: 0 OUTPUT
		NetFlow* FINEOVERFLOW_A0_B; // net ID: FINEOVERFLOW lsb: 0  msb: 0 OUTPUT
		NetFlow* OCLK_A0_B; // net ID: OCLK lsb: 0  msb: 0 OUTPUT
		NetFlow* OCLKDELAYED_A0_B; // net ID: OCLKDELAYED lsb: 0  msb: 0 OUTPUT
		NetFlow* OCLKDIV_A0_B; // net ID: OCLKDIV lsb: 0  msb: 0 OUTPUT
		NetFlow* OSERDESRST_A0_B; // net ID: OSERDESRST lsb: 0  msb: 0 OUTPUT
		NetFlow* RDENABLE_A0_B; // net ID: RDENABLE lsb: 0  msb: 0 OUTPUT
		NetFlow* BURSTPENDINGPHY_A0_B; // net ID: BURSTPENDINGPHY lsb: 0  msb: 0 INPUT
		NetFlow* COARSEENABLE_A0_B; // net ID: COARSEENABLE lsb: 0  msb: 0 INPUT
		NetFlow* COARSEINC_A0_B; // net ID: COARSEINC lsb: 0  msb: 0 INPUT
		NetFlow* COUNTERLOADEN_A0_B; // net ID: COUNTERLOADEN lsb: 0  msb: 0 INPUT
		NetFlow* COUNTERLOADVAL_A0_B; // net ID: COUNTERLOADVAL lsb: 0  msb: 8 INPUT
		NetFlow* COUNTERLOADVAL_A1_B; // net ID: COUNTERLOADVAL lsb: 0  msb: 8 INPUT
		NetFlow* COUNTERLOADVAL_A2_B; // net ID: COUNTERLOADVAL lsb: 0  msb: 8 INPUT
		NetFlow* COUNTERLOADVAL_A3_B; // net ID: COUNTERLOADVAL lsb: 0  msb: 8 INPUT
		NetFlow* COUNTERLOADVAL_A4_B; // net ID: COUNTERLOADVAL lsb: 0  msb: 8 INPUT
		NetFlow* COUNTERLOADVAL_A5_B; // net ID: COUNTERLOADVAL lsb: 0  msb: 8 INPUT
		NetFlow* COUNTERLOADVAL_A6_B; // net ID: COUNTERLOADVAL lsb: 0  msb: 8 INPUT
		NetFlow* COUNTERLOADVAL_A7_B; // net ID: COUNTERLOADVAL lsb: 0  msb: 8 INPUT
		NetFlow* COUNTERLOADVAL_A8_B; // net ID: COUNTERLOADVAL lsb: 0  msb: 8 INPUT
		NetFlow* COUNTERREADEN_A0_B; // net ID: COUNTERREADEN lsb: 0  msb: 0 INPUT
		NetFlow* ENCALIBPHY_A0_B; // net ID: ENCALIBPHY lsb: 0  msb: 1 INPUT
		NetFlow* ENCALIBPHY_A1_B; // net ID: ENCALIBPHY lsb: 0  msb: 1 INPUT
		NetFlow* FINEENABLE_A0_B; // net ID: FINEENABLE lsb: 0  msb: 0 INPUT
		NetFlow* FINEINC_A0_B; // net ID: FINEINC lsb: 0  msb: 0 INPUT
		NetFlow* FREQREFCLK_A0_B; // net ID: FREQREFCLK lsb: 0  msb: 0 INPUT
		NetFlow* MEMREFCLK_A0_B; // net ID: MEMREFCLK lsb: 0  msb: 0 INPUT
		NetFlow* PHASEREFCLK_A0_B; // net ID: PHASEREFCLK lsb: 0  msb: 0 INPUT
		NetFlow* RST_A0_B; // net ID: RST lsb: 0  msb: 0 INPUT
		NetFlow* SELFINEOCLKDELAY_A0_B; // net ID: SELFINEOCLKDELAY lsb: 0  msb: 0 INPUT
		NetFlow* SYNCIN_A0_B; // net ID: SYNCIN lsb: 0  msb: 0 INPUT
		NetFlow* SYSCLK_A0_B; // net ID: SYSCLK lsb: 0  msb: 0 INPUT
		
		public: X_PHASER_OUT_PHY(
			const char * name,
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
			NetFlow* COARSEOVERFLOW_A0_B, // net ID: COARSEOVERFLOW lsb: 0  msb: 0 OUTPUT
			NetFlow* COUNTERREADVAL_A0_B, // net ID: COUNTERREADVAL lsb: 0  msb: 0 OUTPUT
			NetFlow* CTSBUS_A0_B, // net ID: CTSBUS lsb: 0  msb: 0 OUTPUT
			NetFlow* DQSBUS_A0_B, // net ID: DQSBUS lsb: 0  msb: 0 OUTPUT
			NetFlow* DTSBUS_A0_B, // net ID: DTSBUS lsb: 0  msb: 0 OUTPUT
			NetFlow* FINEOVERFLOW_A0_B, // net ID: FINEOVERFLOW lsb: 0  msb: 0 OUTPUT
			NetFlow* OCLK_A0_B, // net ID: OCLK lsb: 0  msb: 0 OUTPUT
			NetFlow* OCLKDELAYED_A0_B, // net ID: OCLKDELAYED lsb: 0  msb: 0 OUTPUT
			NetFlow* OCLKDIV_A0_B, // net ID: OCLKDIV lsb: 0  msb: 0 OUTPUT
			NetFlow* OSERDESRST_A0_B, // net ID: OSERDESRST lsb: 0  msb: 0 OUTPUT
			NetFlow* RDENABLE_A0_B, // net ID: RDENABLE lsb: 0  msb: 0 OUTPUT
			NetFlow* BURSTPENDINGPHY_A0_B, // net ID: BURSTPENDINGPHY lsb: 0  msb: 0 INPUT
			NetFlow* COARSEENABLE_A0_B, // net ID: COARSEENABLE lsb: 0  msb: 0 INPUT
			NetFlow* COARSEINC_A0_B, // net ID: COARSEINC lsb: 0  msb: 0 INPUT
			NetFlow* COUNTERLOADEN_A0_B, // net ID: COUNTERLOADEN lsb: 0  msb: 0 INPUT
			NetFlow* COUNTERLOADVAL_A0_B, // net ID: COUNTERLOADVAL lsb: 0  msb: 8 INPUT
			NetFlow* COUNTERLOADVAL_A1_B, // net ID: COUNTERLOADVAL lsb: 0  msb: 8 INPUT
			NetFlow* COUNTERLOADVAL_A2_B, // net ID: COUNTERLOADVAL lsb: 0  msb: 8 INPUT
			NetFlow* COUNTERLOADVAL_A3_B, // net ID: COUNTERLOADVAL lsb: 0  msb: 8 INPUT
			NetFlow* COUNTERLOADVAL_A4_B, // net ID: COUNTERLOADVAL lsb: 0  msb: 8 INPUT
			NetFlow* COUNTERLOADVAL_A5_B, // net ID: COUNTERLOADVAL lsb: 0  msb: 8 INPUT
			NetFlow* COUNTERLOADVAL_A6_B, // net ID: COUNTERLOADVAL lsb: 0  msb: 8 INPUT
			NetFlow* COUNTERLOADVAL_A7_B, // net ID: COUNTERLOADVAL lsb: 0  msb: 8 INPUT
			NetFlow* COUNTERLOADVAL_A8_B, // net ID: COUNTERLOADVAL lsb: 0  msb: 8 INPUT
			NetFlow* COUNTERREADEN_A0_B, // net ID: COUNTERREADEN lsb: 0  msb: 0 INPUT
			NetFlow* ENCALIBPHY_A0_B, // net ID: ENCALIBPHY lsb: 0  msb: 1 INPUT
			NetFlow* ENCALIBPHY_A1_B, // net ID: ENCALIBPHY lsb: 0  msb: 1 INPUT
			NetFlow* FINEENABLE_A0_B, // net ID: FINEENABLE lsb: 0  msb: 0 INPUT
			NetFlow* FINEINC_A0_B, // net ID: FINEINC lsb: 0  msb: 0 INPUT
			NetFlow* FREQREFCLK_A0_B, // net ID: FREQREFCLK lsb: 0  msb: 0 INPUT
			NetFlow* MEMREFCLK_A0_B, // net ID: MEMREFCLK lsb: 0  msb: 0 INPUT
			NetFlow* PHASEREFCLK_A0_B, // net ID: PHASEREFCLK lsb: 0  msb: 0 INPUT
			NetFlow* RST_A0_B, // net ID: RST lsb: 0  msb: 0 INPUT
			NetFlow* SELFINEOCLKDELAY_A0_B, // net ID: SELFINEOCLKDELAY lsb: 0  msb: 0 INPUT
			NetFlow* SYNCIN_A0_B, // net ID: SYNCIN lsb: 0  msb: 0 INPUT
			NetFlow* SYSCLK_A0_B // net ID: SYSCLK lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
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
			this->COARSEOVERFLOW_A0_B = COARSEOVERFLOW_A0_B; // net ID: COARSEOVERFLOW lsb: 0  msb: 0 OUTPUT
			this->COUNTERREADVAL_A0_B = COUNTERREADVAL_A0_B; // net ID: COUNTERREADVAL lsb: 0  msb: 0 OUTPUT
			this->CTSBUS_A0_B = CTSBUS_A0_B; // net ID: CTSBUS lsb: 0  msb: 0 OUTPUT
			this->DQSBUS_A0_B = DQSBUS_A0_B; // net ID: DQSBUS lsb: 0  msb: 0 OUTPUT
			this->DTSBUS_A0_B = DTSBUS_A0_B; // net ID: DTSBUS lsb: 0  msb: 0 OUTPUT
			this->FINEOVERFLOW_A0_B = FINEOVERFLOW_A0_B; // net ID: FINEOVERFLOW lsb: 0  msb: 0 OUTPUT
			this->OCLK_A0_B = OCLK_A0_B; // net ID: OCLK lsb: 0  msb: 0 OUTPUT
			this->OCLKDELAYED_A0_B = OCLKDELAYED_A0_B; // net ID: OCLKDELAYED lsb: 0  msb: 0 OUTPUT
			this->OCLKDIV_A0_B = OCLKDIV_A0_B; // net ID: OCLKDIV lsb: 0  msb: 0 OUTPUT
			this->OSERDESRST_A0_B = OSERDESRST_A0_B; // net ID: OSERDESRST lsb: 0  msb: 0 OUTPUT
			this->RDENABLE_A0_B = RDENABLE_A0_B; // net ID: RDENABLE lsb: 0  msb: 0 OUTPUT
			this->BURSTPENDINGPHY_A0_B = BURSTPENDINGPHY_A0_B; // net ID: BURSTPENDINGPHY lsb: 0  msb: 0 INPUT
			this->COARSEENABLE_A0_B = COARSEENABLE_A0_B; // net ID: COARSEENABLE lsb: 0  msb: 0 INPUT
			this->COARSEINC_A0_B = COARSEINC_A0_B; // net ID: COARSEINC lsb: 0  msb: 0 INPUT
			this->COUNTERLOADEN_A0_B = COUNTERLOADEN_A0_B; // net ID: COUNTERLOADEN lsb: 0  msb: 0 INPUT
			this->COUNTERLOADVAL_A0_B = COUNTERLOADVAL_A0_B; // net ID: COUNTERLOADVAL lsb: 0  msb: 8 INPUT
			this->COUNTERLOADVAL_A1_B = COUNTERLOADVAL_A1_B; // net ID: COUNTERLOADVAL lsb: 0  msb: 8 INPUT
			this->COUNTERLOADVAL_A2_B = COUNTERLOADVAL_A2_B; // net ID: COUNTERLOADVAL lsb: 0  msb: 8 INPUT
			this->COUNTERLOADVAL_A3_B = COUNTERLOADVAL_A3_B; // net ID: COUNTERLOADVAL lsb: 0  msb: 8 INPUT
			this->COUNTERLOADVAL_A4_B = COUNTERLOADVAL_A4_B; // net ID: COUNTERLOADVAL lsb: 0  msb: 8 INPUT
			this->COUNTERLOADVAL_A5_B = COUNTERLOADVAL_A5_B; // net ID: COUNTERLOADVAL lsb: 0  msb: 8 INPUT
			this->COUNTERLOADVAL_A6_B = COUNTERLOADVAL_A6_B; // net ID: COUNTERLOADVAL lsb: 0  msb: 8 INPUT
			this->COUNTERLOADVAL_A7_B = COUNTERLOADVAL_A7_B; // net ID: COUNTERLOADVAL lsb: 0  msb: 8 INPUT
			this->COUNTERLOADVAL_A8_B = COUNTERLOADVAL_A8_B; // net ID: COUNTERLOADVAL lsb: 0  msb: 8 INPUT
			this->COUNTERREADEN_A0_B = COUNTERREADEN_A0_B; // net ID: COUNTERREADEN lsb: 0  msb: 0 INPUT
			this->ENCALIBPHY_A0_B = ENCALIBPHY_A0_B; // net ID: ENCALIBPHY lsb: 0  msb: 1 INPUT
			this->ENCALIBPHY_A1_B = ENCALIBPHY_A1_B; // net ID: ENCALIBPHY lsb: 0  msb: 1 INPUT
			this->FINEENABLE_A0_B = FINEENABLE_A0_B; // net ID: FINEENABLE lsb: 0  msb: 0 INPUT
			this->FINEINC_A0_B = FINEINC_A0_B; // net ID: FINEINC lsb: 0  msb: 0 INPUT
			this->FREQREFCLK_A0_B = FREQREFCLK_A0_B; // net ID: FREQREFCLK lsb: 0  msb: 0 INPUT
			this->MEMREFCLK_A0_B = MEMREFCLK_A0_B; // net ID: MEMREFCLK lsb: 0  msb: 0 INPUT
			this->PHASEREFCLK_A0_B = PHASEREFCLK_A0_B; // net ID: PHASEREFCLK lsb: 0  msb: 0 INPUT
			this->RST_A0_B = RST_A0_B; // net ID: RST lsb: 0  msb: 0 INPUT
			this->SELFINEOCLKDELAY_A0_B = SELFINEOCLKDELAY_A0_B; // net ID: SELFINEOCLKDELAY lsb: 0  msb: 0 INPUT
			this->SYNCIN_A0_B = SYNCIN_A0_B; // net ID: SYNCIN lsb: 0  msb: 0 INPUT
			this->SYSCLK_A0_B = SYSCLK_A0_B; // net ID: SYSCLK lsb: 0  msb: 0 INPUT
			
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
#endif // X_PHASER_OUT_PHY_H
