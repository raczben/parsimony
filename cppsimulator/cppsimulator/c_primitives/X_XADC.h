/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_XADC{

		//Verilog Parameters:
		parameter_int_t INIT_40;
		parameter_int_t INIT_41;
		parameter_int_t INIT_42;
		parameter_int_t INIT_43;
		parameter_int_t INIT_44;
		parameter_int_t INIT_45;
		parameter_int_t INIT_46;
		parameter_int_t INIT_47;
		parameter_int_t INIT_48;
		parameter_int_t INIT_49;
		parameter_int_t INIT_4A;
		parameter_int_t INIT_4B;
		parameter_int_t INIT_4C;
		parameter_int_t INIT_4D;
		parameter_int_t INIT_4E;
		parameter_int_t INIT_4F;
		parameter_int_t INIT_50;
		parameter_int_t INIT_51;
		parameter_int_t INIT_52;
		parameter_int_t INIT_53;
		parameter_int_t INIT_54;
		parameter_int_t INIT_55;
		parameter_int_t INIT_56;
		parameter_int_t INIT_57;
		parameter_int_t INIT_58;
		parameter_int_t INIT_59;
		parameter_int_t INIT_5A;
		parameter_int_t INIT_5B;
		parameter_int_t INIT_5C;
		parameter_int_t INIT_5D;
		parameter_int_t INIT_5E;
		parameter_int_t INIT_5F;
		parameter_string_t SIM_DEVICE;
		parameter_string_t SIM_MONITOR_FILE;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* ALM; // OUTPUT
		NetFlow* BUSY; // OUTPUT
		NetFlow* CHANNEL; // OUTPUT
		NetFlow* DO; // OUTPUT
		NetFlow* DRDY; // OUTPUT
		NetFlow* EOC; // OUTPUT
		NetFlow* EOS; // OUTPUT
		NetFlow* JTAGBUSY; // OUTPUT
		NetFlow* JTAGLOCKED; // OUTPUT
		NetFlow* JTAGMODIFIED; // OUTPUT
		NetFlow* MUXADDR; // OUTPUT
		NetFlow* OT; // OUTPUT
		NetFlow* CONVST; // INPUT
		NetFlow* CONVSTCLK; // INPUT
		NetFlow* DADDR; // INPUT
		NetFlow* DCLK; // INPUT
		NetFlow* DEN; // INPUT
		NetFlow* DI; // INPUT
		NetFlow* DWE; // INPUT
		NetFlow* RESET; // INPUT
		NetFlow* VAUXN; // INPUT
		NetFlow* VAUXP; // INPUT
		NetFlow* VN; // INPUT
		NetFlow* VP; // INPUT
		
	
		X_XADC(
			//Verilog Parameters:
			parameter_int_t INIT_40, // Default: 16'h0
			parameter_int_t INIT_41, // Default: 16'h0
			parameter_int_t INIT_42, // Default: 16'h0800
			parameter_int_t INIT_43, // Default: 16'h0
			parameter_int_t INIT_44, // Default: 16'h0
			parameter_int_t INIT_45, // Default: 16'h0
			parameter_int_t INIT_46, // Default: 16'h0
			parameter_int_t INIT_47, // Default: 16'h0
			parameter_int_t INIT_48, // Default: 16'h0
			parameter_int_t INIT_49, // Default: 16'h0
			parameter_int_t INIT_4A, // Default: 16'h0
			parameter_int_t INIT_4B, // Default: 16'h0
			parameter_int_t INIT_4C, // Default: 16'h0
			parameter_int_t INIT_4D, // Default: 16'h0
			parameter_int_t INIT_4E, // Default: 16'h0
			parameter_int_t INIT_4F, // Default: 16'h0
			parameter_int_t INIT_50, // Default: 16'h0
			parameter_int_t INIT_51, // Default: 16'h0
			parameter_int_t INIT_52, // Default: 16'h0
			parameter_int_t INIT_53, // Default: 16'h0
			parameter_int_t INIT_54, // Default: 16'h0
			parameter_int_t INIT_55, // Default: 16'h0
			parameter_int_t INIT_56, // Default: 16'h0
			parameter_int_t INIT_57, // Default: 16'h0
			parameter_int_t INIT_58, // Default: 16'h0
			parameter_int_t INIT_59, // Default: 16'h0
			parameter_int_t INIT_5A, // Default: 16'h0
			parameter_int_t INIT_5B, // Default: 16'h0
			parameter_int_t INIT_5C, // Default: 16'h0
			parameter_int_t INIT_5D, // Default: 16'h0
			parameter_int_t INIT_5E, // Default: 16'h0
			parameter_int_t INIT_5F, // Default: 16'h0
			parameter_string_t SIM_DEVICE, // Default: "7SERIES"
			parameter_string_t SIM_MONITOR_FILE, // Default: "design.txt"
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* ALM, // OUTPUT
			NetFlow* BUSY, // OUTPUT
			NetFlow* CHANNEL, // OUTPUT
			NetFlow* DO, // OUTPUT
			NetFlow* DRDY, // OUTPUT
			NetFlow* EOC, // OUTPUT
			NetFlow* EOS, // OUTPUT
			NetFlow* JTAGBUSY, // OUTPUT
			NetFlow* JTAGLOCKED, // OUTPUT
			NetFlow* JTAGMODIFIED, // OUTPUT
			NetFlow* MUXADDR, // OUTPUT
			NetFlow* OT, // OUTPUT
			NetFlow* CONVST, // INPUT
			NetFlow* CONVSTCLK, // INPUT
			NetFlow* DADDR, // INPUT
			NetFlow* DCLK, // INPUT
			NetFlow* DEN, // INPUT
			NetFlow* DI, // INPUT
			NetFlow* DWE, // INPUT
			NetFlow* RESET, // INPUT
			NetFlow* VAUXN, // INPUT
			NetFlow* VAUXP, // INPUT
			NetFlow* VN, // INPUT
			NetFlow* VP // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->INIT_40 = INIT_40; // Default: 16'h0
			this->INIT_41 = INIT_41; // Default: 16'h0
			this->INIT_42 = INIT_42; // Default: 16'h0800
			this->INIT_43 = INIT_43; // Default: 16'h0
			this->INIT_44 = INIT_44; // Default: 16'h0
			this->INIT_45 = INIT_45; // Default: 16'h0
			this->INIT_46 = INIT_46; // Default: 16'h0
			this->INIT_47 = INIT_47; // Default: 16'h0
			this->INIT_48 = INIT_48; // Default: 16'h0
			this->INIT_49 = INIT_49; // Default: 16'h0
			this->INIT_4A = INIT_4A; // Default: 16'h0
			this->INIT_4B = INIT_4B; // Default: 16'h0
			this->INIT_4C = INIT_4C; // Default: 16'h0
			this->INIT_4D = INIT_4D; // Default: 16'h0
			this->INIT_4E = INIT_4E; // Default: 16'h0
			this->INIT_4F = INIT_4F; // Default: 16'h0
			this->INIT_50 = INIT_50; // Default: 16'h0
			this->INIT_51 = INIT_51; // Default: 16'h0
			this->INIT_52 = INIT_52; // Default: 16'h0
			this->INIT_53 = INIT_53; // Default: 16'h0
			this->INIT_54 = INIT_54; // Default: 16'h0
			this->INIT_55 = INIT_55; // Default: 16'h0
			this->INIT_56 = INIT_56; // Default: 16'h0
			this->INIT_57 = INIT_57; // Default: 16'h0
			this->INIT_58 = INIT_58; // Default: 16'h0
			this->INIT_59 = INIT_59; // Default: 16'h0
			this->INIT_5A = INIT_5A; // Default: 16'h0
			this->INIT_5B = INIT_5B; // Default: 16'h0
			this->INIT_5C = INIT_5C; // Default: 16'h0
			this->INIT_5D = INIT_5D; // Default: 16'h0
			this->INIT_5E = INIT_5E; // Default: 16'h0
			this->INIT_5F = INIT_5F; // Default: 16'h0
			this->SIM_DEVICE = SIM_DEVICE; // Default: "7SERIES"
			this->SIM_MONITOR_FILE = SIM_MONITOR_FILE; // Default: "design.txt"
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->ALM = ALM; // OUTPUT
			this->BUSY = BUSY; // OUTPUT
			this->CHANNEL = CHANNEL; // OUTPUT
			this->DO = DO; // OUTPUT
			this->DRDY = DRDY; // OUTPUT
			this->EOC = EOC; // OUTPUT
			this->EOS = EOS; // OUTPUT
			this->JTAGBUSY = JTAGBUSY; // OUTPUT
			this->JTAGLOCKED = JTAGLOCKED; // OUTPUT
			this->JTAGMODIFIED = JTAGMODIFIED; // OUTPUT
			this->MUXADDR = MUXADDR; // OUTPUT
			this->OT = OT; // OUTPUT
			this->CONVST = CONVST; // INPUT
			this->CONVSTCLK = CONVSTCLK; // INPUT
			this->DADDR = DADDR; // INPUT
			this->DCLK = DCLK; // INPUT
			this->DEN = DEN; // INPUT
			this->DI = DI; // INPUT
			this->DWE = DWE; // INPUT
			this->RESET = RESET; // INPUT
			this->VAUXN = VAUXN; // INPUT
			this->VAUXP = VAUXP; // INPUT
			this->VN = VN; // INPUT
			this->VP = VP; // INPUT
		
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
