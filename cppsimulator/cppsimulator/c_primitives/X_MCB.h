/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_MCB: public Primitive{

		//Verilog Parameters:
		parameter_string_t LOC;
		parameter_string_t ARB_NUM_TIME_SLOTS;
		parameter_string_t ARB_TIME_SLOT_0;
		parameter_string_t ARB_TIME_SLOT_1;
		parameter_string_t ARB_TIME_SLOT_10;
		parameter_string_t ARB_TIME_SLOT_11;
		parameter_string_t ARB_TIME_SLOT_2;
		parameter_string_t ARB_TIME_SLOT_3;
		parameter_string_t ARB_TIME_SLOT_4;
		parameter_string_t ARB_TIME_SLOT_5;
		parameter_string_t ARB_TIME_SLOT_6;
		parameter_string_t ARB_TIME_SLOT_7;
		parameter_string_t ARB_TIME_SLOT_8;
		parameter_string_t ARB_TIME_SLOT_9;
		parameter_string_t CAL_BA;
		parameter_string_t CAL_BYPASS;
		parameter_string_t CAL_CA;
		parameter_string_t CAL_CALIBRATION_MODE;
		parameter_string_t CAL_CLK_DIV;
		parameter_string_t CAL_DELAY;
		parameter_string_t CAL_RA;
		parameter_string_t MEM_ADDR_ORDER;
		parameter_string_t MEM_BA_SIZE;
		parameter_string_t MEM_BURST_LEN;
		parameter_string_t MEM_CAS_LATENCY;
		parameter_string_t MEM_CA_SIZE;
		parameter_string_t MEM_DDR1_2_ODS;
		parameter_string_t MEM_DDR2_3_HIGH_TEMP_SR;
		parameter_string_t MEM_DDR2_3_PA_SR;
		parameter_string_t MEM_DDR2_ADD_LATENCY;
		parameter_string_t MEM_DDR2_DIFF_DQS_EN;
		parameter_string_t MEM_DDR2_RTT;
		parameter_string_t MEM_DDR2_WRT_RECOVERY;
		parameter_string_t MEM_DDR3_ADD_LATENCY;
		parameter_string_t MEM_DDR3_AUTO_SR;
		parameter_string_t MEM_DDR3_CAS_LATENCY;
		parameter_string_t MEM_DDR3_CAS_WR_LATENCY;
		parameter_string_t MEM_DDR3_DYN_WRT_ODT;
		parameter_string_t MEM_DDR3_ODS;
		parameter_string_t MEM_DDR3_RTT;
		parameter_string_t MEM_DDR3_WRT_RECOVERY;
		parameter_string_t MEM_MDDR_ODS;
		parameter_string_t MEM_MOBILE_PA_SR;
		parameter_string_t MEM_MOBILE_TC_SR;
		parameter_string_t MEM_RAS_VAL;
		parameter_string_t MEM_RA_SIZE;
		parameter_string_t MEM_RCD_VAL;
		parameter_string_t MEM_REFI_VAL;
		parameter_string_t MEM_RFC_VAL;
		parameter_string_t MEM_RP_VAL;
		parameter_string_t MEM_RTP_VAL;
		parameter_string_t MEM_TYPE;
		parameter_string_t MEM_WIDTH;
		parameter_string_t MEM_WR_VAL;
		parameter_string_t MEM_WTR_VAL;
		parameter_string_t PORT_CONFIG;
		//Verilog Ports in definition order:
		NetFlow* ADDR; // net ID: ADDR lsb: 0  msb: 0 OUTPUT
		NetFlow* BA; // net ID: BA lsb: 0  msb: 0 OUTPUT
		NetFlow* CAS; // net ID: CAS lsb: 0  msb: 0 OUTPUT
		NetFlow* CKE; // net ID: CKE lsb: 0  msb: 0 OUTPUT
		NetFlow* DQIOWEN0; // net ID: DQIOWEN0 lsb: 0  msb: 0 OUTPUT
		NetFlow* DQON; // net ID: DQON lsb: 0  msb: 0 OUTPUT
		NetFlow* DQOP; // net ID: DQOP lsb: 0  msb: 0 OUTPUT
		NetFlow* DQSIOWEN90N; // net ID: DQSIOWEN90N lsb: 0  msb: 0 OUTPUT
		NetFlow* DQSIOWEN90P; // net ID: DQSIOWEN90P lsb: 0  msb: 0 OUTPUT
		NetFlow* IOIDRPADD; // net ID: IOIDRPADD lsb: 0  msb: 0 OUTPUT
		NetFlow* IOIDRPADDR; // net ID: IOIDRPADDR lsb: 0  msb: 0 OUTPUT
		NetFlow* IOIDRPBROADCAST; // net ID: IOIDRPBROADCAST lsb: 0  msb: 0 OUTPUT
		NetFlow* IOIDRPCLK; // net ID: IOIDRPCLK lsb: 0  msb: 0 OUTPUT
		NetFlow* IOIDRPCS; // net ID: IOIDRPCS lsb: 0  msb: 0 OUTPUT
		NetFlow* IOIDRPSDO; // net ID: IOIDRPSDO lsb: 0  msb: 0 OUTPUT
		NetFlow* IOIDRPTRAIN; // net ID: IOIDRPTRAIN lsb: 0  msb: 0 OUTPUT
		NetFlow* IOIDRPUPDATE; // net ID: IOIDRPUPDATE lsb: 0  msb: 0 OUTPUT
		NetFlow* LDMN; // net ID: LDMN lsb: 0  msb: 0 OUTPUT
		NetFlow* LDMP; // net ID: LDMP lsb: 0  msb: 0 OUTPUT
		NetFlow* ODT; // net ID: ODT lsb: 0  msb: 0 OUTPUT
		NetFlow* P0CMDEMPTY; // net ID: P0CMDEMPTY lsb: 0  msb: 0 OUTPUT
		NetFlow* P0CMDFULL; // net ID: P0CMDFULL lsb: 0  msb: 0 OUTPUT
		NetFlow* P0RDCOUNT; // net ID: P0RDCOUNT lsb: 0  msb: 0 OUTPUT
		NetFlow* P0RDDATA; // net ID: P0RDDATA lsb: 0  msb: 0 OUTPUT
		NetFlow* P0RDEMPTY; // net ID: P0RDEMPTY lsb: 0  msb: 0 OUTPUT
		NetFlow* P0RDERROR; // net ID: P0RDERROR lsb: 0  msb: 0 OUTPUT
		NetFlow* P0RDFULL; // net ID: P0RDFULL lsb: 0  msb: 0 OUTPUT
		NetFlow* P0RDOVERFLOW; // net ID: P0RDOVERFLOW lsb: 0  msb: 0 OUTPUT
		NetFlow* P0WRCOUNT; // net ID: P0WRCOUNT lsb: 0  msb: 0 OUTPUT
		NetFlow* P0WREMPTY; // net ID: P0WREMPTY lsb: 0  msb: 0 OUTPUT
		NetFlow* P0WRERROR; // net ID: P0WRERROR lsb: 0  msb: 0 OUTPUT
		NetFlow* P0WRFULL; // net ID: P0WRFULL lsb: 0  msb: 0 OUTPUT
		NetFlow* P0WRUNDERRUN; // net ID: P0WRUNDERRUN lsb: 0  msb: 0 OUTPUT
		NetFlow* P1CMDEMPTY; // net ID: P1CMDEMPTY lsb: 0  msb: 0 OUTPUT
		NetFlow* P1CMDFULL; // net ID: P1CMDFULL lsb: 0  msb: 0 OUTPUT
		NetFlow* P1RDCOUNT; // net ID: P1RDCOUNT lsb: 0  msb: 0 OUTPUT
		NetFlow* P1RDDATA; // net ID: P1RDDATA lsb: 0  msb: 0 OUTPUT
		NetFlow* P1RDEMPTY; // net ID: P1RDEMPTY lsb: 0  msb: 0 OUTPUT
		NetFlow* P1RDERROR; // net ID: P1RDERROR lsb: 0  msb: 0 OUTPUT
		NetFlow* P1RDFULL; // net ID: P1RDFULL lsb: 0  msb: 0 OUTPUT
		NetFlow* P1RDOVERFLOW; // net ID: P1RDOVERFLOW lsb: 0  msb: 0 OUTPUT
		NetFlow* P1WRCOUNT; // net ID: P1WRCOUNT lsb: 0  msb: 0 OUTPUT
		NetFlow* P1WREMPTY; // net ID: P1WREMPTY lsb: 0  msb: 0 OUTPUT
		NetFlow* P1WRERROR; // net ID: P1WRERROR lsb: 0  msb: 0 OUTPUT
		NetFlow* P1WRFULL; // net ID: P1WRFULL lsb: 0  msb: 0 OUTPUT
		NetFlow* P1WRUNDERRUN; // net ID: P1WRUNDERRUN lsb: 0  msb: 0 OUTPUT
		NetFlow* P2CMDEMPTY; // net ID: P2CMDEMPTY lsb: 0  msb: 0 OUTPUT
		NetFlow* P2CMDFULL; // net ID: P2CMDFULL lsb: 0  msb: 0 OUTPUT
		NetFlow* P2COUNT; // net ID: P2COUNT lsb: 0  msb: 0 OUTPUT
		NetFlow* P2EMPTY; // net ID: P2EMPTY lsb: 0  msb: 0 OUTPUT
		NetFlow* P2ERROR; // net ID: P2ERROR lsb: 0  msb: 0 OUTPUT
		NetFlow* P2FULL; // net ID: P2FULL lsb: 0  msb: 0 OUTPUT
		NetFlow* P2RDDATA; // net ID: P2RDDATA lsb: 0  msb: 0 OUTPUT
		NetFlow* P2RDOVERFLOW; // net ID: P2RDOVERFLOW lsb: 0  msb: 0 OUTPUT
		NetFlow* P2WRUNDERRUN; // net ID: P2WRUNDERRUN lsb: 0  msb: 0 OUTPUT
		NetFlow* P3CMDEMPTY; // net ID: P3CMDEMPTY lsb: 0  msb: 0 OUTPUT
		NetFlow* P3CMDFULL; // net ID: P3CMDFULL lsb: 0  msb: 0 OUTPUT
		NetFlow* P3COUNT; // net ID: P3COUNT lsb: 0  msb: 0 OUTPUT
		NetFlow* P3EMPTY; // net ID: P3EMPTY lsb: 0  msb: 0 OUTPUT
		NetFlow* P3ERROR; // net ID: P3ERROR lsb: 0  msb: 0 OUTPUT
		NetFlow* P3FULL; // net ID: P3FULL lsb: 0  msb: 0 OUTPUT
		NetFlow* P3RDDATA; // net ID: P3RDDATA lsb: 0  msb: 0 OUTPUT
		NetFlow* P3RDOVERFLOW; // net ID: P3RDOVERFLOW lsb: 0  msb: 0 OUTPUT
		NetFlow* P3WRUNDERRUN; // net ID: P3WRUNDERRUN lsb: 0  msb: 0 OUTPUT
		NetFlow* P4CMDEMPTY; // net ID: P4CMDEMPTY lsb: 0  msb: 0 OUTPUT
		NetFlow* P4CMDFULL; // net ID: P4CMDFULL lsb: 0  msb: 0 OUTPUT
		NetFlow* P4COUNT; // net ID: P4COUNT lsb: 0  msb: 0 OUTPUT
		NetFlow* P4EMPTY; // net ID: P4EMPTY lsb: 0  msb: 0 OUTPUT
		NetFlow* P4ERROR; // net ID: P4ERROR lsb: 0  msb: 0 OUTPUT
		NetFlow* P4FULL; // net ID: P4FULL lsb: 0  msb: 0 OUTPUT
		NetFlow* P4RDDATA; // net ID: P4RDDATA lsb: 0  msb: 0 OUTPUT
		NetFlow* P4RDOVERFLOW; // net ID: P4RDOVERFLOW lsb: 0  msb: 0 OUTPUT
		NetFlow* P4WRUNDERRUN; // net ID: P4WRUNDERRUN lsb: 0  msb: 0 OUTPUT
		NetFlow* P5CMDEMPTY; // net ID: P5CMDEMPTY lsb: 0  msb: 0 OUTPUT
		NetFlow* P5CMDFULL; // net ID: P5CMDFULL lsb: 0  msb: 0 OUTPUT
		NetFlow* P5COUNT; // net ID: P5COUNT lsb: 0  msb: 0 OUTPUT
		NetFlow* P5EMPTY; // net ID: P5EMPTY lsb: 0  msb: 0 OUTPUT
		NetFlow* P5ERROR; // net ID: P5ERROR lsb: 0  msb: 0 OUTPUT
		NetFlow* P5FULL; // net ID: P5FULL lsb: 0  msb: 0 OUTPUT
		NetFlow* P5RDDATA; // net ID: P5RDDATA lsb: 0  msb: 0 OUTPUT
		NetFlow* P5RDOVERFLOW; // net ID: P5RDOVERFLOW lsb: 0  msb: 0 OUTPUT
		NetFlow* P5WRUNDERRUN; // net ID: P5WRUNDERRUN lsb: 0  msb: 0 OUTPUT
		NetFlow* RAS; // net ID: RAS lsb: 0  msb: 0 OUTPUT
		NetFlow* RST; // net ID: RST lsb: 0  msb: 0 OUTPUT
		NetFlow* SELFREFRESHMODE; // net ID: SELFREFRESHMODE lsb: 0  msb: 0 OUTPUT
		NetFlow* STATUS; // net ID: STATUS lsb: 0  msb: 0 OUTPUT
		NetFlow* UDMN; // net ID: UDMN lsb: 0  msb: 0 OUTPUT
		NetFlow* UDMP; // net ID: UDMP lsb: 0  msb: 0 OUTPUT
		NetFlow* UOCALSTART; // net ID: UOCALSTART lsb: 0  msb: 0 OUTPUT
		NetFlow* UOCMDREADYIN; // net ID: UOCMDREADYIN lsb: 0  msb: 0 OUTPUT
		NetFlow* UODATA; // net ID: UODATA lsb: 0  msb: 0 OUTPUT
		NetFlow* UODATAVALID; // net ID: UODATAVALID lsb: 0  msb: 0 OUTPUT
		NetFlow* UODONECAL; // net ID: UODONECAL lsb: 0  msb: 0 OUTPUT
		NetFlow* UOREFRSHFLAG; // net ID: UOREFRSHFLAG lsb: 0  msb: 0 OUTPUT
		NetFlow* UOSDO; // net ID: UOSDO lsb: 0  msb: 0 OUTPUT
		NetFlow* WE; // net ID: WE lsb: 0  msb: 0 OUTPUT
		NetFlow* DQI; // net ID: DQI lsb: 0  msb: 15 INPUT
		NetFlow* DQSIOIN; // net ID: DQSIOIN lsb: 0  msb: 0 INPUT
		NetFlow* DQSIOIP; // net ID: DQSIOIP lsb: 0  msb: 0 INPUT
		NetFlow* IOIDRPSDI; // net ID: IOIDRPSDI lsb: 0  msb: 0 INPUT
		NetFlow* P0ARBEN; // net ID: P0ARBEN lsb: 0  msb: 0 INPUT
		NetFlow* P0CMDBA; // net ID: P0CMDBA lsb: 0  msb: 2 INPUT
		NetFlow* P0CMDBL; // net ID: P0CMDBL lsb: 0  msb: 5 INPUT
		NetFlow* P0CMDCA; // net ID: P0CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P0CMDCLK; // net ID: P0CMDCLK lsb: 0  msb: 0 INPUT
		NetFlow* P0CMDEN; // net ID: P0CMDEN lsb: 0  msb: 0 INPUT
		NetFlow* P0CMDINSTR; // net ID: P0CMDINSTR lsb: 0  msb: 2 INPUT
		NetFlow* P0CMDRA; // net ID: P0CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P0RDCLK; // net ID: P0RDCLK lsb: 0  msb: 0 INPUT
		NetFlow* P0RDEN; // net ID: P0RDEN lsb: 0  msb: 0 INPUT
		NetFlow* P0RWRMASK; // net ID: P0RWRMASK lsb: 0  msb: 3 INPUT
		NetFlow* P0WRCLK; // net ID: P0WRCLK lsb: 0  msb: 0 INPUT
		NetFlow* P0WRDATA; // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P0WREN; // net ID: P0WREN lsb: 0  msb: 0 INPUT
		NetFlow* P1ARBEN; // net ID: P1ARBEN lsb: 0  msb: 0 INPUT
		NetFlow* P1CMDBA; // net ID: P1CMDBA lsb: 0  msb: 2 INPUT
		NetFlow* P1CMDBL; // net ID: P1CMDBL lsb: 0  msb: 5 INPUT
		NetFlow* P1CMDCA; // net ID: P1CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P1CMDCLK; // net ID: P1CMDCLK lsb: 0  msb: 0 INPUT
		NetFlow* P1CMDEN; // net ID: P1CMDEN lsb: 0  msb: 0 INPUT
		NetFlow* P1CMDINSTR; // net ID: P1CMDINSTR lsb: 0  msb: 2 INPUT
		NetFlow* P1CMDRA; // net ID: P1CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P1RDCLK; // net ID: P1RDCLK lsb: 0  msb: 0 INPUT
		NetFlow* P1RDEN; // net ID: P1RDEN lsb: 0  msb: 0 INPUT
		NetFlow* P1RWRMASK; // net ID: P1RWRMASK lsb: 0  msb: 3 INPUT
		NetFlow* P1WRCLK; // net ID: P1WRCLK lsb: 0  msb: 0 INPUT
		NetFlow* P1WRDATA; // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P1WREN; // net ID: P1WREN lsb: 0  msb: 0 INPUT
		NetFlow* P2ARBEN; // net ID: P2ARBEN lsb: 0  msb: 0 INPUT
		NetFlow* P2CLK; // net ID: P2CLK lsb: 0  msb: 0 INPUT
		NetFlow* P2CMDBA; // net ID: P2CMDBA lsb: 0  msb: 2 INPUT
		NetFlow* P2CMDBL; // net ID: P2CMDBL lsb: 0  msb: 5 INPUT
		NetFlow* P2CMDCA; // net ID: P2CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P2CMDCLK; // net ID: P2CMDCLK lsb: 0  msb: 0 INPUT
		NetFlow* P2CMDEN; // net ID: P2CMDEN lsb: 0  msb: 0 INPUT
		NetFlow* P2CMDINSTR; // net ID: P2CMDINSTR lsb: 0  msb: 2 INPUT
		NetFlow* P2CMDRA; // net ID: P2CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P2EN; // net ID: P2EN lsb: 0  msb: 0 INPUT
		NetFlow* P2WRDATA; // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P2WRMASK; // net ID: P2WRMASK lsb: 0  msb: 3 INPUT
		NetFlow* P3ARBEN; // net ID: P3ARBEN lsb: 0  msb: 0 INPUT
		NetFlow* P3CLK; // net ID: P3CLK lsb: 0  msb: 0 INPUT
		NetFlow* P3CMDBA; // net ID: P3CMDBA lsb: 0  msb: 2 INPUT
		NetFlow* P3CMDBL; // net ID: P3CMDBL lsb: 0  msb: 5 INPUT
		NetFlow* P3CMDCA; // net ID: P3CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P3CMDCLK; // net ID: P3CMDCLK lsb: 0  msb: 0 INPUT
		NetFlow* P3CMDEN; // net ID: P3CMDEN lsb: 0  msb: 0 INPUT
		NetFlow* P3CMDINSTR; // net ID: P3CMDINSTR lsb: 0  msb: 2 INPUT
		NetFlow* P3CMDRA; // net ID: P3CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P3EN; // net ID: P3EN lsb: 0  msb: 0 INPUT
		NetFlow* P3WRDATA; // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P3WRMASK; // net ID: P3WRMASK lsb: 0  msb: 3 INPUT
		NetFlow* P4ARBEN; // net ID: P4ARBEN lsb: 0  msb: 0 INPUT
		NetFlow* P4CLK; // net ID: P4CLK lsb: 0  msb: 0 INPUT
		NetFlow* P4CMDBA; // net ID: P4CMDBA lsb: 0  msb: 2 INPUT
		NetFlow* P4CMDBL; // net ID: P4CMDBL lsb: 0  msb: 5 INPUT
		NetFlow* P4CMDCA; // net ID: P4CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P4CMDCLK; // net ID: P4CMDCLK lsb: 0  msb: 0 INPUT
		NetFlow* P4CMDEN; // net ID: P4CMDEN lsb: 0  msb: 0 INPUT
		NetFlow* P4CMDINSTR; // net ID: P4CMDINSTR lsb: 0  msb: 2 INPUT
		NetFlow* P4CMDRA; // net ID: P4CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P4EN; // net ID: P4EN lsb: 0  msb: 0 INPUT
		NetFlow* P4WRDATA; // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P4WRMASK; // net ID: P4WRMASK lsb: 0  msb: 3 INPUT
		NetFlow* P5ARBEN; // net ID: P5ARBEN lsb: 0  msb: 0 INPUT
		NetFlow* P5CLK; // net ID: P5CLK lsb: 0  msb: 0 INPUT
		NetFlow* P5CMDBA; // net ID: P5CMDBA lsb: 0  msb: 2 INPUT
		NetFlow* P5CMDBL; // net ID: P5CMDBL lsb: 0  msb: 5 INPUT
		NetFlow* P5CMDCA; // net ID: P5CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P5CMDCLK; // net ID: P5CMDCLK lsb: 0  msb: 0 INPUT
		NetFlow* P5CMDEN; // net ID: P5CMDEN lsb: 0  msb: 0 INPUT
		NetFlow* P5CMDINSTR; // net ID: P5CMDINSTR lsb: 0  msb: 2 INPUT
		NetFlow* P5CMDRA; // net ID: P5CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P5EN; // net ID: P5EN lsb: 0  msb: 0 INPUT
		NetFlow* P5WRDATA; // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P5WRMASK; // net ID: P5WRMASK lsb: 0  msb: 3 INPUT
		NetFlow* PLLCE; // net ID: PLLCE lsb: 0  msb: 1 INPUT
		NetFlow* PLLCLK; // net ID: PLLCLK lsb: 0  msb: 1 INPUT
		NetFlow* PLLLOCK; // net ID: PLLLOCK lsb: 0  msb: 0 INPUT
		NetFlow* RECAL; // net ID: RECAL lsb: 0  msb: 0 INPUT
		NetFlow* SELFREFRESHENTER; // net ID: SELFREFRESHENTER lsb: 0  msb: 0 INPUT
		NetFlow* SYSRST; // net ID: SYSRST lsb: 0  msb: 0 INPUT
		NetFlow* UDQSIOIN; // net ID: UDQSIOIN lsb: 0  msb: 0 INPUT
		NetFlow* UDQSIOIP; // net ID: UDQSIOIP lsb: 0  msb: 0 INPUT
		NetFlow* UIADD; // net ID: UIADD lsb: 0  msb: 0 INPUT
		NetFlow* UIADDR; // net ID: UIADDR lsb: 0  msb: 4 INPUT
		NetFlow* UIBROADCAST; // net ID: UIBROADCAST lsb: 0  msb: 0 INPUT
		NetFlow* UICLK; // net ID: UICLK lsb: 0  msb: 0 INPUT
		NetFlow* UICMD; // net ID: UICMD lsb: 0  msb: 0 INPUT
		NetFlow* UICMDEN; // net ID: UICMDEN lsb: 0  msb: 0 INPUT
		NetFlow* UICMDIN; // net ID: UICMDIN lsb: 0  msb: 0 INPUT
		NetFlow* UICS; // net ID: UICS lsb: 0  msb: 0 INPUT
		NetFlow* UIDONECAL; // net ID: UIDONECAL lsb: 0  msb: 0 INPUT
		NetFlow* UIDQCOUNT; // net ID: UIDQCOUNT lsb: 0  msb: 3 INPUT
		NetFlow* UIDQLOWERDEC; // net ID: UIDQLOWERDEC lsb: 0  msb: 0 INPUT
		NetFlow* UIDQLOWERINC; // net ID: UIDQLOWERINC lsb: 0  msb: 0 INPUT
		NetFlow* UIDQUPPERDEC; // net ID: UIDQUPPERDEC lsb: 0  msb: 0 INPUT
		NetFlow* UIDQUPPERINC; // net ID: UIDQUPPERINC lsb: 0  msb: 0 INPUT
		NetFlow* UIDRPUPDATE; // net ID: UIDRPUPDATE lsb: 0  msb: 0 INPUT
		NetFlow* UILDQSDEC; // net ID: UILDQSDEC lsb: 0  msb: 0 INPUT
		NetFlow* UILDQSINC; // net ID: UILDQSINC lsb: 0  msb: 0 INPUT
		NetFlow* UIREAD; // net ID: UIREAD lsb: 0  msb: 0 INPUT
		NetFlow* UISDI; // net ID: UISDI lsb: 0  msb: 0 INPUT
		NetFlow* UIUDQSDEC; // net ID: UIUDQSDEC lsb: 0  msb: 0 INPUT
		NetFlow* UIUDQSINC; // net ID: UIUDQSINC lsb: 0  msb: 0 INPUT
		
		X_MCB(
			const char * name,
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_string_t ARB_NUM_TIME_SLOTS, // Default: 12
			parameter_string_t ARB_TIME_SLOT_0, // Default: 18'b111111111111111111
			parameter_string_t ARB_TIME_SLOT_1, // Default: 18'b111111111111111111
			parameter_string_t ARB_TIME_SLOT_10, // Default: 18'b111111111111111111
			parameter_string_t ARB_TIME_SLOT_11, // Default: 18'b111111111111111111
			parameter_string_t ARB_TIME_SLOT_2, // Default: 18'b111111111111111111
			parameter_string_t ARB_TIME_SLOT_3, // Default: 18'b111111111111111111
			parameter_string_t ARB_TIME_SLOT_4, // Default: 18'b111111111111111111
			parameter_string_t ARB_TIME_SLOT_5, // Default: 18'b111111111111111111
			parameter_string_t ARB_TIME_SLOT_6, // Default: 18'b111111111111111111
			parameter_string_t ARB_TIME_SLOT_7, // Default: 18'b111111111111111111
			parameter_string_t ARB_TIME_SLOT_8, // Default: 18'b111111111111111111
			parameter_string_t ARB_TIME_SLOT_9, // Default: 18'b111111111111111111
			parameter_string_t CAL_BA, // Default: 3'h0
			parameter_string_t CAL_BYPASS, // Default: "YES"
			parameter_string_t CAL_CA, // Default: 12'h000
			parameter_string_t CAL_CALIBRATION_MODE, // Default: "NOCALIBRATION"
			parameter_string_t CAL_CLK_DIV, // Default: 1
			parameter_string_t CAL_DELAY, // Default: "QUARTER"
			parameter_string_t CAL_RA, // Default: 15'h0000
			parameter_string_t MEM_ADDR_ORDER, // Default: "BANK_ROW_COLUMN"
			parameter_string_t MEM_BA_SIZE, // Default: 3
			parameter_string_t MEM_BURST_LEN, // Default: 8
			parameter_string_t MEM_CAS_LATENCY, // Default: 4
			parameter_string_t MEM_CA_SIZE, // Default: 11
			parameter_string_t MEM_DDR1_2_ODS, // Default: "FULL"
			parameter_string_t MEM_DDR2_3_HIGH_TEMP_SR, // Default: "NORMAL"
			parameter_string_t MEM_DDR2_3_PA_SR, // Default: "FULL"
			parameter_string_t MEM_DDR2_ADD_LATENCY, // Default: 0
			parameter_string_t MEM_DDR2_DIFF_DQS_EN, // Default: "YES"
			parameter_string_t MEM_DDR2_RTT, // Default: "50OHMS"
			parameter_string_t MEM_DDR2_WRT_RECOVERY, // Default: 4
			parameter_string_t MEM_DDR3_ADD_LATENCY, // Default: "OFF"
			parameter_string_t MEM_DDR3_AUTO_SR, // Default: "ENABLED"
			parameter_string_t MEM_DDR3_CAS_LATENCY, // Default: 7
			parameter_string_t MEM_DDR3_CAS_WR_LATENCY, // Default: 5
			parameter_string_t MEM_DDR3_DYN_WRT_ODT, // Default: "OFF"
			parameter_string_t MEM_DDR3_ODS, // Default: "DIV7"
			parameter_string_t MEM_DDR3_RTT, // Default: "DIV2"
			parameter_string_t MEM_DDR3_WRT_RECOVERY, // Default: 7
			parameter_string_t MEM_MDDR_ODS, // Default: "FULL"
			parameter_string_t MEM_MOBILE_PA_SR, // Default: "FULL"
			parameter_string_t MEM_MOBILE_TC_SR, // Default: 0
			parameter_string_t MEM_RAS_VAL, // Default: 0
			parameter_string_t MEM_RA_SIZE, // Default: 13
			parameter_string_t MEM_RCD_VAL, // Default: 1
			parameter_string_t MEM_REFI_VAL, // Default: 0
			parameter_string_t MEM_RFC_VAL, // Default: 0
			parameter_string_t MEM_RP_VAL, // Default: 0
			parameter_string_t MEM_RTP_VAL, // Default: 0
			parameter_string_t MEM_TYPE, // Default: "DDR3"
			parameter_string_t MEM_WIDTH, // Default: 4
			parameter_string_t MEM_WR_VAL, // Default: 0
			parameter_string_t MEM_WTR_VAL, // Default: 3
			parameter_string_t PORT_CONFIG, // Default: "B32_B32_B32_B32"
			//Verilog Ports in definition order:
			NetFlow* ADDR, // net ID: ADDR lsb: 0  msb: 0 OUTPUT
			NetFlow* BA, // net ID: BA lsb: 0  msb: 0 OUTPUT
			NetFlow* CAS, // net ID: CAS lsb: 0  msb: 0 OUTPUT
			NetFlow* CKE, // net ID: CKE lsb: 0  msb: 0 OUTPUT
			NetFlow* DQIOWEN0, // net ID: DQIOWEN0 lsb: 0  msb: 0 OUTPUT
			NetFlow* DQON, // net ID: DQON lsb: 0  msb: 0 OUTPUT
			NetFlow* DQOP, // net ID: DQOP lsb: 0  msb: 0 OUTPUT
			NetFlow* DQSIOWEN90N, // net ID: DQSIOWEN90N lsb: 0  msb: 0 OUTPUT
			NetFlow* DQSIOWEN90P, // net ID: DQSIOWEN90P lsb: 0  msb: 0 OUTPUT
			NetFlow* IOIDRPADD, // net ID: IOIDRPADD lsb: 0  msb: 0 OUTPUT
			NetFlow* IOIDRPADDR, // net ID: IOIDRPADDR lsb: 0  msb: 0 OUTPUT
			NetFlow* IOIDRPBROADCAST, // net ID: IOIDRPBROADCAST lsb: 0  msb: 0 OUTPUT
			NetFlow* IOIDRPCLK, // net ID: IOIDRPCLK lsb: 0  msb: 0 OUTPUT
			NetFlow* IOIDRPCS, // net ID: IOIDRPCS lsb: 0  msb: 0 OUTPUT
			NetFlow* IOIDRPSDO, // net ID: IOIDRPSDO lsb: 0  msb: 0 OUTPUT
			NetFlow* IOIDRPTRAIN, // net ID: IOIDRPTRAIN lsb: 0  msb: 0 OUTPUT
			NetFlow* IOIDRPUPDATE, // net ID: IOIDRPUPDATE lsb: 0  msb: 0 OUTPUT
			NetFlow* LDMN, // net ID: LDMN lsb: 0  msb: 0 OUTPUT
			NetFlow* LDMP, // net ID: LDMP lsb: 0  msb: 0 OUTPUT
			NetFlow* ODT, // net ID: ODT lsb: 0  msb: 0 OUTPUT
			NetFlow* P0CMDEMPTY, // net ID: P0CMDEMPTY lsb: 0  msb: 0 OUTPUT
			NetFlow* P0CMDFULL, // net ID: P0CMDFULL lsb: 0  msb: 0 OUTPUT
			NetFlow* P0RDCOUNT, // net ID: P0RDCOUNT lsb: 0  msb: 0 OUTPUT
			NetFlow* P0RDDATA, // net ID: P0RDDATA lsb: 0  msb: 0 OUTPUT
			NetFlow* P0RDEMPTY, // net ID: P0RDEMPTY lsb: 0  msb: 0 OUTPUT
			NetFlow* P0RDERROR, // net ID: P0RDERROR lsb: 0  msb: 0 OUTPUT
			NetFlow* P0RDFULL, // net ID: P0RDFULL lsb: 0  msb: 0 OUTPUT
			NetFlow* P0RDOVERFLOW, // net ID: P0RDOVERFLOW lsb: 0  msb: 0 OUTPUT
			NetFlow* P0WRCOUNT, // net ID: P0WRCOUNT lsb: 0  msb: 0 OUTPUT
			NetFlow* P0WREMPTY, // net ID: P0WREMPTY lsb: 0  msb: 0 OUTPUT
			NetFlow* P0WRERROR, // net ID: P0WRERROR lsb: 0  msb: 0 OUTPUT
			NetFlow* P0WRFULL, // net ID: P0WRFULL lsb: 0  msb: 0 OUTPUT
			NetFlow* P0WRUNDERRUN, // net ID: P0WRUNDERRUN lsb: 0  msb: 0 OUTPUT
			NetFlow* P1CMDEMPTY, // net ID: P1CMDEMPTY lsb: 0  msb: 0 OUTPUT
			NetFlow* P1CMDFULL, // net ID: P1CMDFULL lsb: 0  msb: 0 OUTPUT
			NetFlow* P1RDCOUNT, // net ID: P1RDCOUNT lsb: 0  msb: 0 OUTPUT
			NetFlow* P1RDDATA, // net ID: P1RDDATA lsb: 0  msb: 0 OUTPUT
			NetFlow* P1RDEMPTY, // net ID: P1RDEMPTY lsb: 0  msb: 0 OUTPUT
			NetFlow* P1RDERROR, // net ID: P1RDERROR lsb: 0  msb: 0 OUTPUT
			NetFlow* P1RDFULL, // net ID: P1RDFULL lsb: 0  msb: 0 OUTPUT
			NetFlow* P1RDOVERFLOW, // net ID: P1RDOVERFLOW lsb: 0  msb: 0 OUTPUT
			NetFlow* P1WRCOUNT, // net ID: P1WRCOUNT lsb: 0  msb: 0 OUTPUT
			NetFlow* P1WREMPTY, // net ID: P1WREMPTY lsb: 0  msb: 0 OUTPUT
			NetFlow* P1WRERROR, // net ID: P1WRERROR lsb: 0  msb: 0 OUTPUT
			NetFlow* P1WRFULL, // net ID: P1WRFULL lsb: 0  msb: 0 OUTPUT
			NetFlow* P1WRUNDERRUN, // net ID: P1WRUNDERRUN lsb: 0  msb: 0 OUTPUT
			NetFlow* P2CMDEMPTY, // net ID: P2CMDEMPTY lsb: 0  msb: 0 OUTPUT
			NetFlow* P2CMDFULL, // net ID: P2CMDFULL lsb: 0  msb: 0 OUTPUT
			NetFlow* P2COUNT, // net ID: P2COUNT lsb: 0  msb: 0 OUTPUT
			NetFlow* P2EMPTY, // net ID: P2EMPTY lsb: 0  msb: 0 OUTPUT
			NetFlow* P2ERROR, // net ID: P2ERROR lsb: 0  msb: 0 OUTPUT
			NetFlow* P2FULL, // net ID: P2FULL lsb: 0  msb: 0 OUTPUT
			NetFlow* P2RDDATA, // net ID: P2RDDATA lsb: 0  msb: 0 OUTPUT
			NetFlow* P2RDOVERFLOW, // net ID: P2RDOVERFLOW lsb: 0  msb: 0 OUTPUT
			NetFlow* P2WRUNDERRUN, // net ID: P2WRUNDERRUN lsb: 0  msb: 0 OUTPUT
			NetFlow* P3CMDEMPTY, // net ID: P3CMDEMPTY lsb: 0  msb: 0 OUTPUT
			NetFlow* P3CMDFULL, // net ID: P3CMDFULL lsb: 0  msb: 0 OUTPUT
			NetFlow* P3COUNT, // net ID: P3COUNT lsb: 0  msb: 0 OUTPUT
			NetFlow* P3EMPTY, // net ID: P3EMPTY lsb: 0  msb: 0 OUTPUT
			NetFlow* P3ERROR, // net ID: P3ERROR lsb: 0  msb: 0 OUTPUT
			NetFlow* P3FULL, // net ID: P3FULL lsb: 0  msb: 0 OUTPUT
			NetFlow* P3RDDATA, // net ID: P3RDDATA lsb: 0  msb: 0 OUTPUT
			NetFlow* P3RDOVERFLOW, // net ID: P3RDOVERFLOW lsb: 0  msb: 0 OUTPUT
			NetFlow* P3WRUNDERRUN, // net ID: P3WRUNDERRUN lsb: 0  msb: 0 OUTPUT
			NetFlow* P4CMDEMPTY, // net ID: P4CMDEMPTY lsb: 0  msb: 0 OUTPUT
			NetFlow* P4CMDFULL, // net ID: P4CMDFULL lsb: 0  msb: 0 OUTPUT
			NetFlow* P4COUNT, // net ID: P4COUNT lsb: 0  msb: 0 OUTPUT
			NetFlow* P4EMPTY, // net ID: P4EMPTY lsb: 0  msb: 0 OUTPUT
			NetFlow* P4ERROR, // net ID: P4ERROR lsb: 0  msb: 0 OUTPUT
			NetFlow* P4FULL, // net ID: P4FULL lsb: 0  msb: 0 OUTPUT
			NetFlow* P4RDDATA, // net ID: P4RDDATA lsb: 0  msb: 0 OUTPUT
			NetFlow* P4RDOVERFLOW, // net ID: P4RDOVERFLOW lsb: 0  msb: 0 OUTPUT
			NetFlow* P4WRUNDERRUN, // net ID: P4WRUNDERRUN lsb: 0  msb: 0 OUTPUT
			NetFlow* P5CMDEMPTY, // net ID: P5CMDEMPTY lsb: 0  msb: 0 OUTPUT
			NetFlow* P5CMDFULL, // net ID: P5CMDFULL lsb: 0  msb: 0 OUTPUT
			NetFlow* P5COUNT, // net ID: P5COUNT lsb: 0  msb: 0 OUTPUT
			NetFlow* P5EMPTY, // net ID: P5EMPTY lsb: 0  msb: 0 OUTPUT
			NetFlow* P5ERROR, // net ID: P5ERROR lsb: 0  msb: 0 OUTPUT
			NetFlow* P5FULL, // net ID: P5FULL lsb: 0  msb: 0 OUTPUT
			NetFlow* P5RDDATA, // net ID: P5RDDATA lsb: 0  msb: 0 OUTPUT
			NetFlow* P5RDOVERFLOW, // net ID: P5RDOVERFLOW lsb: 0  msb: 0 OUTPUT
			NetFlow* P5WRUNDERRUN, // net ID: P5WRUNDERRUN lsb: 0  msb: 0 OUTPUT
			NetFlow* RAS, // net ID: RAS lsb: 0  msb: 0 OUTPUT
			NetFlow* RST, // net ID: RST lsb: 0  msb: 0 OUTPUT
			NetFlow* SELFREFRESHMODE, // net ID: SELFREFRESHMODE lsb: 0  msb: 0 OUTPUT
			NetFlow* STATUS, // net ID: STATUS lsb: 0  msb: 0 OUTPUT
			NetFlow* UDMN, // net ID: UDMN lsb: 0  msb: 0 OUTPUT
			NetFlow* UDMP, // net ID: UDMP lsb: 0  msb: 0 OUTPUT
			NetFlow* UOCALSTART, // net ID: UOCALSTART lsb: 0  msb: 0 OUTPUT
			NetFlow* UOCMDREADYIN, // net ID: UOCMDREADYIN lsb: 0  msb: 0 OUTPUT
			NetFlow* UODATA, // net ID: UODATA lsb: 0  msb: 0 OUTPUT
			NetFlow* UODATAVALID, // net ID: UODATAVALID lsb: 0  msb: 0 OUTPUT
			NetFlow* UODONECAL, // net ID: UODONECAL lsb: 0  msb: 0 OUTPUT
			NetFlow* UOREFRSHFLAG, // net ID: UOREFRSHFLAG lsb: 0  msb: 0 OUTPUT
			NetFlow* UOSDO, // net ID: UOSDO lsb: 0  msb: 0 OUTPUT
			NetFlow* WE, // net ID: WE lsb: 0  msb: 0 OUTPUT
			NetFlow* DQI, // net ID: DQI lsb: 0  msb: 15 INPUT
			NetFlow* DQSIOIN, // net ID: DQSIOIN lsb: 0  msb: 0 INPUT
			NetFlow* DQSIOIP, // net ID: DQSIOIP lsb: 0  msb: 0 INPUT
			NetFlow* IOIDRPSDI, // net ID: IOIDRPSDI lsb: 0  msb: 0 INPUT
			NetFlow* P0ARBEN, // net ID: P0ARBEN lsb: 0  msb: 0 INPUT
			NetFlow* P0CMDBA, // net ID: P0CMDBA lsb: 0  msb: 2 INPUT
			NetFlow* P0CMDBL, // net ID: P0CMDBL lsb: 0  msb: 5 INPUT
			NetFlow* P0CMDCA, // net ID: P0CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P0CMDCLK, // net ID: P0CMDCLK lsb: 0  msb: 0 INPUT
			NetFlow* P0CMDEN, // net ID: P0CMDEN lsb: 0  msb: 0 INPUT
			NetFlow* P0CMDINSTR, // net ID: P0CMDINSTR lsb: 0  msb: 2 INPUT
			NetFlow* P0CMDRA, // net ID: P0CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P0RDCLK, // net ID: P0RDCLK lsb: 0  msb: 0 INPUT
			NetFlow* P0RDEN, // net ID: P0RDEN lsb: 0  msb: 0 INPUT
			NetFlow* P0RWRMASK, // net ID: P0RWRMASK lsb: 0  msb: 3 INPUT
			NetFlow* P0WRCLK, // net ID: P0WRCLK lsb: 0  msb: 0 INPUT
			NetFlow* P0WRDATA, // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P0WREN, // net ID: P0WREN lsb: 0  msb: 0 INPUT
			NetFlow* P1ARBEN, // net ID: P1ARBEN lsb: 0  msb: 0 INPUT
			NetFlow* P1CMDBA, // net ID: P1CMDBA lsb: 0  msb: 2 INPUT
			NetFlow* P1CMDBL, // net ID: P1CMDBL lsb: 0  msb: 5 INPUT
			NetFlow* P1CMDCA, // net ID: P1CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P1CMDCLK, // net ID: P1CMDCLK lsb: 0  msb: 0 INPUT
			NetFlow* P1CMDEN, // net ID: P1CMDEN lsb: 0  msb: 0 INPUT
			NetFlow* P1CMDINSTR, // net ID: P1CMDINSTR lsb: 0  msb: 2 INPUT
			NetFlow* P1CMDRA, // net ID: P1CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P1RDCLK, // net ID: P1RDCLK lsb: 0  msb: 0 INPUT
			NetFlow* P1RDEN, // net ID: P1RDEN lsb: 0  msb: 0 INPUT
			NetFlow* P1RWRMASK, // net ID: P1RWRMASK lsb: 0  msb: 3 INPUT
			NetFlow* P1WRCLK, // net ID: P1WRCLK lsb: 0  msb: 0 INPUT
			NetFlow* P1WRDATA, // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P1WREN, // net ID: P1WREN lsb: 0  msb: 0 INPUT
			NetFlow* P2ARBEN, // net ID: P2ARBEN lsb: 0  msb: 0 INPUT
			NetFlow* P2CLK, // net ID: P2CLK lsb: 0  msb: 0 INPUT
			NetFlow* P2CMDBA, // net ID: P2CMDBA lsb: 0  msb: 2 INPUT
			NetFlow* P2CMDBL, // net ID: P2CMDBL lsb: 0  msb: 5 INPUT
			NetFlow* P2CMDCA, // net ID: P2CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P2CMDCLK, // net ID: P2CMDCLK lsb: 0  msb: 0 INPUT
			NetFlow* P2CMDEN, // net ID: P2CMDEN lsb: 0  msb: 0 INPUT
			NetFlow* P2CMDINSTR, // net ID: P2CMDINSTR lsb: 0  msb: 2 INPUT
			NetFlow* P2CMDRA, // net ID: P2CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P2EN, // net ID: P2EN lsb: 0  msb: 0 INPUT
			NetFlow* P2WRDATA, // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P2WRMASK, // net ID: P2WRMASK lsb: 0  msb: 3 INPUT
			NetFlow* P3ARBEN, // net ID: P3ARBEN lsb: 0  msb: 0 INPUT
			NetFlow* P3CLK, // net ID: P3CLK lsb: 0  msb: 0 INPUT
			NetFlow* P3CMDBA, // net ID: P3CMDBA lsb: 0  msb: 2 INPUT
			NetFlow* P3CMDBL, // net ID: P3CMDBL lsb: 0  msb: 5 INPUT
			NetFlow* P3CMDCA, // net ID: P3CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P3CMDCLK, // net ID: P3CMDCLK lsb: 0  msb: 0 INPUT
			NetFlow* P3CMDEN, // net ID: P3CMDEN lsb: 0  msb: 0 INPUT
			NetFlow* P3CMDINSTR, // net ID: P3CMDINSTR lsb: 0  msb: 2 INPUT
			NetFlow* P3CMDRA, // net ID: P3CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P3EN, // net ID: P3EN lsb: 0  msb: 0 INPUT
			NetFlow* P3WRDATA, // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P3WRMASK, // net ID: P3WRMASK lsb: 0  msb: 3 INPUT
			NetFlow* P4ARBEN, // net ID: P4ARBEN lsb: 0  msb: 0 INPUT
			NetFlow* P4CLK, // net ID: P4CLK lsb: 0  msb: 0 INPUT
			NetFlow* P4CMDBA, // net ID: P4CMDBA lsb: 0  msb: 2 INPUT
			NetFlow* P4CMDBL, // net ID: P4CMDBL lsb: 0  msb: 5 INPUT
			NetFlow* P4CMDCA, // net ID: P4CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P4CMDCLK, // net ID: P4CMDCLK lsb: 0  msb: 0 INPUT
			NetFlow* P4CMDEN, // net ID: P4CMDEN lsb: 0  msb: 0 INPUT
			NetFlow* P4CMDINSTR, // net ID: P4CMDINSTR lsb: 0  msb: 2 INPUT
			NetFlow* P4CMDRA, // net ID: P4CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P4EN, // net ID: P4EN lsb: 0  msb: 0 INPUT
			NetFlow* P4WRDATA, // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P4WRMASK, // net ID: P4WRMASK lsb: 0  msb: 3 INPUT
			NetFlow* P5ARBEN, // net ID: P5ARBEN lsb: 0  msb: 0 INPUT
			NetFlow* P5CLK, // net ID: P5CLK lsb: 0  msb: 0 INPUT
			NetFlow* P5CMDBA, // net ID: P5CMDBA lsb: 0  msb: 2 INPUT
			NetFlow* P5CMDBL, // net ID: P5CMDBL lsb: 0  msb: 5 INPUT
			NetFlow* P5CMDCA, // net ID: P5CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P5CMDCLK, // net ID: P5CMDCLK lsb: 0  msb: 0 INPUT
			NetFlow* P5CMDEN, // net ID: P5CMDEN lsb: 0  msb: 0 INPUT
			NetFlow* P5CMDINSTR, // net ID: P5CMDINSTR lsb: 0  msb: 2 INPUT
			NetFlow* P5CMDRA, // net ID: P5CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P5EN, // net ID: P5EN lsb: 0  msb: 0 INPUT
			NetFlow* P5WRDATA, // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P5WRMASK, // net ID: P5WRMASK lsb: 0  msb: 3 INPUT
			NetFlow* PLLCE, // net ID: PLLCE lsb: 0  msb: 1 INPUT
			NetFlow* PLLCLK, // net ID: PLLCLK lsb: 0  msb: 1 INPUT
			NetFlow* PLLLOCK, // net ID: PLLLOCK lsb: 0  msb: 0 INPUT
			NetFlow* RECAL, // net ID: RECAL lsb: 0  msb: 0 INPUT
			NetFlow* SELFREFRESHENTER, // net ID: SELFREFRESHENTER lsb: 0  msb: 0 INPUT
			NetFlow* SYSRST, // net ID: SYSRST lsb: 0  msb: 0 INPUT
			NetFlow* UDQSIOIN, // net ID: UDQSIOIN lsb: 0  msb: 0 INPUT
			NetFlow* UDQSIOIP, // net ID: UDQSIOIP lsb: 0  msb: 0 INPUT
			NetFlow* UIADD, // net ID: UIADD lsb: 0  msb: 0 INPUT
			NetFlow* UIADDR, // net ID: UIADDR lsb: 0  msb: 4 INPUT
			NetFlow* UIBROADCAST, // net ID: UIBROADCAST lsb: 0  msb: 0 INPUT
			NetFlow* UICLK, // net ID: UICLK lsb: 0  msb: 0 INPUT
			NetFlow* UICMD, // net ID: UICMD lsb: 0  msb: 0 INPUT
			NetFlow* UICMDEN, // net ID: UICMDEN lsb: 0  msb: 0 INPUT
			NetFlow* UICMDIN, // net ID: UICMDIN lsb: 0  msb: 0 INPUT
			NetFlow* UICS, // net ID: UICS lsb: 0  msb: 0 INPUT
			NetFlow* UIDONECAL, // net ID: UIDONECAL lsb: 0  msb: 0 INPUT
			NetFlow* UIDQCOUNT, // net ID: UIDQCOUNT lsb: 0  msb: 3 INPUT
			NetFlow* UIDQLOWERDEC, // net ID: UIDQLOWERDEC lsb: 0  msb: 0 INPUT
			NetFlow* UIDQLOWERINC, // net ID: UIDQLOWERINC lsb: 0  msb: 0 INPUT
			NetFlow* UIDQUPPERDEC, // net ID: UIDQUPPERDEC lsb: 0  msb: 0 INPUT
			NetFlow* UIDQUPPERINC, // net ID: UIDQUPPERINC lsb: 0  msb: 0 INPUT
			NetFlow* UIDRPUPDATE, // net ID: UIDRPUPDATE lsb: 0  msb: 0 INPUT
			NetFlow* UILDQSDEC, // net ID: UILDQSDEC lsb: 0  msb: 0 INPUT
			NetFlow* UILDQSINC, // net ID: UILDQSINC lsb: 0  msb: 0 INPUT
			NetFlow* UIREAD, // net ID: UIREAD lsb: 0  msb: 0 INPUT
			NetFlow* UISDI, // net ID: UISDI lsb: 0  msb: 0 INPUT
			NetFlow* UIUDQSDEC, // net ID: UIUDQSDEC lsb: 0  msb: 0 INPUT
			NetFlow* UIUDQSINC // net ID: UIUDQSINC lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			this->ARB_NUM_TIME_SLOTS = ARB_NUM_TIME_SLOTS; // Default: 12
			this->ARB_TIME_SLOT_0 = ARB_TIME_SLOT_0; // Default: 18'b111111111111111111
			this->ARB_TIME_SLOT_1 = ARB_TIME_SLOT_1; // Default: 18'b111111111111111111
			this->ARB_TIME_SLOT_10 = ARB_TIME_SLOT_10; // Default: 18'b111111111111111111
			this->ARB_TIME_SLOT_11 = ARB_TIME_SLOT_11; // Default: 18'b111111111111111111
			this->ARB_TIME_SLOT_2 = ARB_TIME_SLOT_2; // Default: 18'b111111111111111111
			this->ARB_TIME_SLOT_3 = ARB_TIME_SLOT_3; // Default: 18'b111111111111111111
			this->ARB_TIME_SLOT_4 = ARB_TIME_SLOT_4; // Default: 18'b111111111111111111
			this->ARB_TIME_SLOT_5 = ARB_TIME_SLOT_5; // Default: 18'b111111111111111111
			this->ARB_TIME_SLOT_6 = ARB_TIME_SLOT_6; // Default: 18'b111111111111111111
			this->ARB_TIME_SLOT_7 = ARB_TIME_SLOT_7; // Default: 18'b111111111111111111
			this->ARB_TIME_SLOT_8 = ARB_TIME_SLOT_8; // Default: 18'b111111111111111111
			this->ARB_TIME_SLOT_9 = ARB_TIME_SLOT_9; // Default: 18'b111111111111111111
			this->CAL_BA = CAL_BA; // Default: 3'h0
			this->CAL_BYPASS = CAL_BYPASS; // Default: "YES"
			this->CAL_CA = CAL_CA; // Default: 12'h000
			this->CAL_CALIBRATION_MODE = CAL_CALIBRATION_MODE; // Default: "NOCALIBRATION"
			this->CAL_CLK_DIV = CAL_CLK_DIV; // Default: 1
			this->CAL_DELAY = CAL_DELAY; // Default: "QUARTER"
			this->CAL_RA = CAL_RA; // Default: 15'h0000
			this->MEM_ADDR_ORDER = MEM_ADDR_ORDER; // Default: "BANK_ROW_COLUMN"
			this->MEM_BA_SIZE = MEM_BA_SIZE; // Default: 3
			this->MEM_BURST_LEN = MEM_BURST_LEN; // Default: 8
			this->MEM_CAS_LATENCY = MEM_CAS_LATENCY; // Default: 4
			this->MEM_CA_SIZE = MEM_CA_SIZE; // Default: 11
			this->MEM_DDR1_2_ODS = MEM_DDR1_2_ODS; // Default: "FULL"
			this->MEM_DDR2_3_HIGH_TEMP_SR = MEM_DDR2_3_HIGH_TEMP_SR; // Default: "NORMAL"
			this->MEM_DDR2_3_PA_SR = MEM_DDR2_3_PA_SR; // Default: "FULL"
			this->MEM_DDR2_ADD_LATENCY = MEM_DDR2_ADD_LATENCY; // Default: 0
			this->MEM_DDR2_DIFF_DQS_EN = MEM_DDR2_DIFF_DQS_EN; // Default: "YES"
			this->MEM_DDR2_RTT = MEM_DDR2_RTT; // Default: "50OHMS"
			this->MEM_DDR2_WRT_RECOVERY = MEM_DDR2_WRT_RECOVERY; // Default: 4
			this->MEM_DDR3_ADD_LATENCY = MEM_DDR3_ADD_LATENCY; // Default: "OFF"
			this->MEM_DDR3_AUTO_SR = MEM_DDR3_AUTO_SR; // Default: "ENABLED"
			this->MEM_DDR3_CAS_LATENCY = MEM_DDR3_CAS_LATENCY; // Default: 7
			this->MEM_DDR3_CAS_WR_LATENCY = MEM_DDR3_CAS_WR_LATENCY; // Default: 5
			this->MEM_DDR3_DYN_WRT_ODT = MEM_DDR3_DYN_WRT_ODT; // Default: "OFF"
			this->MEM_DDR3_ODS = MEM_DDR3_ODS; // Default: "DIV7"
			this->MEM_DDR3_RTT = MEM_DDR3_RTT; // Default: "DIV2"
			this->MEM_DDR3_WRT_RECOVERY = MEM_DDR3_WRT_RECOVERY; // Default: 7
			this->MEM_MDDR_ODS = MEM_MDDR_ODS; // Default: "FULL"
			this->MEM_MOBILE_PA_SR = MEM_MOBILE_PA_SR; // Default: "FULL"
			this->MEM_MOBILE_TC_SR = MEM_MOBILE_TC_SR; // Default: 0
			this->MEM_RAS_VAL = MEM_RAS_VAL; // Default: 0
			this->MEM_RA_SIZE = MEM_RA_SIZE; // Default: 13
			this->MEM_RCD_VAL = MEM_RCD_VAL; // Default: 1
			this->MEM_REFI_VAL = MEM_REFI_VAL; // Default: 0
			this->MEM_RFC_VAL = MEM_RFC_VAL; // Default: 0
			this->MEM_RP_VAL = MEM_RP_VAL; // Default: 0
			this->MEM_RTP_VAL = MEM_RTP_VAL; // Default: 0
			this->MEM_TYPE = MEM_TYPE; // Default: "DDR3"
			this->MEM_WIDTH = MEM_WIDTH; // Default: 4
			this->MEM_WR_VAL = MEM_WR_VAL; // Default: 0
			this->MEM_WTR_VAL = MEM_WTR_VAL; // Default: 3
			this->PORT_CONFIG = PORT_CONFIG; // Default: "B32_B32_B32_B32"
			//Verilog Ports in definition order:
			this->ADDR = ADDR; // net ID: ADDR lsb: 0  msb: 0 OUTPUT
			this->BA = BA; // net ID: BA lsb: 0  msb: 0 OUTPUT
			this->CAS = CAS; // net ID: CAS lsb: 0  msb: 0 OUTPUT
			this->CKE = CKE; // net ID: CKE lsb: 0  msb: 0 OUTPUT
			this->DQIOWEN0 = DQIOWEN0; // net ID: DQIOWEN0 lsb: 0  msb: 0 OUTPUT
			this->DQON = DQON; // net ID: DQON lsb: 0  msb: 0 OUTPUT
			this->DQOP = DQOP; // net ID: DQOP lsb: 0  msb: 0 OUTPUT
			this->DQSIOWEN90N = DQSIOWEN90N; // net ID: DQSIOWEN90N lsb: 0  msb: 0 OUTPUT
			this->DQSIOWEN90P = DQSIOWEN90P; // net ID: DQSIOWEN90P lsb: 0  msb: 0 OUTPUT
			this->IOIDRPADD = IOIDRPADD; // net ID: IOIDRPADD lsb: 0  msb: 0 OUTPUT
			this->IOIDRPADDR = IOIDRPADDR; // net ID: IOIDRPADDR lsb: 0  msb: 0 OUTPUT
			this->IOIDRPBROADCAST = IOIDRPBROADCAST; // net ID: IOIDRPBROADCAST lsb: 0  msb: 0 OUTPUT
			this->IOIDRPCLK = IOIDRPCLK; // net ID: IOIDRPCLK lsb: 0  msb: 0 OUTPUT
			this->IOIDRPCS = IOIDRPCS; // net ID: IOIDRPCS lsb: 0  msb: 0 OUTPUT
			this->IOIDRPSDO = IOIDRPSDO; // net ID: IOIDRPSDO lsb: 0  msb: 0 OUTPUT
			this->IOIDRPTRAIN = IOIDRPTRAIN; // net ID: IOIDRPTRAIN lsb: 0  msb: 0 OUTPUT
			this->IOIDRPUPDATE = IOIDRPUPDATE; // net ID: IOIDRPUPDATE lsb: 0  msb: 0 OUTPUT
			this->LDMN = LDMN; // net ID: LDMN lsb: 0  msb: 0 OUTPUT
			this->LDMP = LDMP; // net ID: LDMP lsb: 0  msb: 0 OUTPUT
			this->ODT = ODT; // net ID: ODT lsb: 0  msb: 0 OUTPUT
			this->P0CMDEMPTY = P0CMDEMPTY; // net ID: P0CMDEMPTY lsb: 0  msb: 0 OUTPUT
			this->P0CMDFULL = P0CMDFULL; // net ID: P0CMDFULL lsb: 0  msb: 0 OUTPUT
			this->P0RDCOUNT = P0RDCOUNT; // net ID: P0RDCOUNT lsb: 0  msb: 0 OUTPUT
			this->P0RDDATA = P0RDDATA; // net ID: P0RDDATA lsb: 0  msb: 0 OUTPUT
			this->P0RDEMPTY = P0RDEMPTY; // net ID: P0RDEMPTY lsb: 0  msb: 0 OUTPUT
			this->P0RDERROR = P0RDERROR; // net ID: P0RDERROR lsb: 0  msb: 0 OUTPUT
			this->P0RDFULL = P0RDFULL; // net ID: P0RDFULL lsb: 0  msb: 0 OUTPUT
			this->P0RDOVERFLOW = P0RDOVERFLOW; // net ID: P0RDOVERFLOW lsb: 0  msb: 0 OUTPUT
			this->P0WRCOUNT = P0WRCOUNT; // net ID: P0WRCOUNT lsb: 0  msb: 0 OUTPUT
			this->P0WREMPTY = P0WREMPTY; // net ID: P0WREMPTY lsb: 0  msb: 0 OUTPUT
			this->P0WRERROR = P0WRERROR; // net ID: P0WRERROR lsb: 0  msb: 0 OUTPUT
			this->P0WRFULL = P0WRFULL; // net ID: P0WRFULL lsb: 0  msb: 0 OUTPUT
			this->P0WRUNDERRUN = P0WRUNDERRUN; // net ID: P0WRUNDERRUN lsb: 0  msb: 0 OUTPUT
			this->P1CMDEMPTY = P1CMDEMPTY; // net ID: P1CMDEMPTY lsb: 0  msb: 0 OUTPUT
			this->P1CMDFULL = P1CMDFULL; // net ID: P1CMDFULL lsb: 0  msb: 0 OUTPUT
			this->P1RDCOUNT = P1RDCOUNT; // net ID: P1RDCOUNT lsb: 0  msb: 0 OUTPUT
			this->P1RDDATA = P1RDDATA; // net ID: P1RDDATA lsb: 0  msb: 0 OUTPUT
			this->P1RDEMPTY = P1RDEMPTY; // net ID: P1RDEMPTY lsb: 0  msb: 0 OUTPUT
			this->P1RDERROR = P1RDERROR; // net ID: P1RDERROR lsb: 0  msb: 0 OUTPUT
			this->P1RDFULL = P1RDFULL; // net ID: P1RDFULL lsb: 0  msb: 0 OUTPUT
			this->P1RDOVERFLOW = P1RDOVERFLOW; // net ID: P1RDOVERFLOW lsb: 0  msb: 0 OUTPUT
			this->P1WRCOUNT = P1WRCOUNT; // net ID: P1WRCOUNT lsb: 0  msb: 0 OUTPUT
			this->P1WREMPTY = P1WREMPTY; // net ID: P1WREMPTY lsb: 0  msb: 0 OUTPUT
			this->P1WRERROR = P1WRERROR; // net ID: P1WRERROR lsb: 0  msb: 0 OUTPUT
			this->P1WRFULL = P1WRFULL; // net ID: P1WRFULL lsb: 0  msb: 0 OUTPUT
			this->P1WRUNDERRUN = P1WRUNDERRUN; // net ID: P1WRUNDERRUN lsb: 0  msb: 0 OUTPUT
			this->P2CMDEMPTY = P2CMDEMPTY; // net ID: P2CMDEMPTY lsb: 0  msb: 0 OUTPUT
			this->P2CMDFULL = P2CMDFULL; // net ID: P2CMDFULL lsb: 0  msb: 0 OUTPUT
			this->P2COUNT = P2COUNT; // net ID: P2COUNT lsb: 0  msb: 0 OUTPUT
			this->P2EMPTY = P2EMPTY; // net ID: P2EMPTY lsb: 0  msb: 0 OUTPUT
			this->P2ERROR = P2ERROR; // net ID: P2ERROR lsb: 0  msb: 0 OUTPUT
			this->P2FULL = P2FULL; // net ID: P2FULL lsb: 0  msb: 0 OUTPUT
			this->P2RDDATA = P2RDDATA; // net ID: P2RDDATA lsb: 0  msb: 0 OUTPUT
			this->P2RDOVERFLOW = P2RDOVERFLOW; // net ID: P2RDOVERFLOW lsb: 0  msb: 0 OUTPUT
			this->P2WRUNDERRUN = P2WRUNDERRUN; // net ID: P2WRUNDERRUN lsb: 0  msb: 0 OUTPUT
			this->P3CMDEMPTY = P3CMDEMPTY; // net ID: P3CMDEMPTY lsb: 0  msb: 0 OUTPUT
			this->P3CMDFULL = P3CMDFULL; // net ID: P3CMDFULL lsb: 0  msb: 0 OUTPUT
			this->P3COUNT = P3COUNT; // net ID: P3COUNT lsb: 0  msb: 0 OUTPUT
			this->P3EMPTY = P3EMPTY; // net ID: P3EMPTY lsb: 0  msb: 0 OUTPUT
			this->P3ERROR = P3ERROR; // net ID: P3ERROR lsb: 0  msb: 0 OUTPUT
			this->P3FULL = P3FULL; // net ID: P3FULL lsb: 0  msb: 0 OUTPUT
			this->P3RDDATA = P3RDDATA; // net ID: P3RDDATA lsb: 0  msb: 0 OUTPUT
			this->P3RDOVERFLOW = P3RDOVERFLOW; // net ID: P3RDOVERFLOW lsb: 0  msb: 0 OUTPUT
			this->P3WRUNDERRUN = P3WRUNDERRUN; // net ID: P3WRUNDERRUN lsb: 0  msb: 0 OUTPUT
			this->P4CMDEMPTY = P4CMDEMPTY; // net ID: P4CMDEMPTY lsb: 0  msb: 0 OUTPUT
			this->P4CMDFULL = P4CMDFULL; // net ID: P4CMDFULL lsb: 0  msb: 0 OUTPUT
			this->P4COUNT = P4COUNT; // net ID: P4COUNT lsb: 0  msb: 0 OUTPUT
			this->P4EMPTY = P4EMPTY; // net ID: P4EMPTY lsb: 0  msb: 0 OUTPUT
			this->P4ERROR = P4ERROR; // net ID: P4ERROR lsb: 0  msb: 0 OUTPUT
			this->P4FULL = P4FULL; // net ID: P4FULL lsb: 0  msb: 0 OUTPUT
			this->P4RDDATA = P4RDDATA; // net ID: P4RDDATA lsb: 0  msb: 0 OUTPUT
			this->P4RDOVERFLOW = P4RDOVERFLOW; // net ID: P4RDOVERFLOW lsb: 0  msb: 0 OUTPUT
			this->P4WRUNDERRUN = P4WRUNDERRUN; // net ID: P4WRUNDERRUN lsb: 0  msb: 0 OUTPUT
			this->P5CMDEMPTY = P5CMDEMPTY; // net ID: P5CMDEMPTY lsb: 0  msb: 0 OUTPUT
			this->P5CMDFULL = P5CMDFULL; // net ID: P5CMDFULL lsb: 0  msb: 0 OUTPUT
			this->P5COUNT = P5COUNT; // net ID: P5COUNT lsb: 0  msb: 0 OUTPUT
			this->P5EMPTY = P5EMPTY; // net ID: P5EMPTY lsb: 0  msb: 0 OUTPUT
			this->P5ERROR = P5ERROR; // net ID: P5ERROR lsb: 0  msb: 0 OUTPUT
			this->P5FULL = P5FULL; // net ID: P5FULL lsb: 0  msb: 0 OUTPUT
			this->P5RDDATA = P5RDDATA; // net ID: P5RDDATA lsb: 0  msb: 0 OUTPUT
			this->P5RDOVERFLOW = P5RDOVERFLOW; // net ID: P5RDOVERFLOW lsb: 0  msb: 0 OUTPUT
			this->P5WRUNDERRUN = P5WRUNDERRUN; // net ID: P5WRUNDERRUN lsb: 0  msb: 0 OUTPUT
			this->RAS = RAS; // net ID: RAS lsb: 0  msb: 0 OUTPUT
			this->RST = RST; // net ID: RST lsb: 0  msb: 0 OUTPUT
			this->SELFREFRESHMODE = SELFREFRESHMODE; // net ID: SELFREFRESHMODE lsb: 0  msb: 0 OUTPUT
			this->STATUS = STATUS; // net ID: STATUS lsb: 0  msb: 0 OUTPUT
			this->UDMN = UDMN; // net ID: UDMN lsb: 0  msb: 0 OUTPUT
			this->UDMP = UDMP; // net ID: UDMP lsb: 0  msb: 0 OUTPUT
			this->UOCALSTART = UOCALSTART; // net ID: UOCALSTART lsb: 0  msb: 0 OUTPUT
			this->UOCMDREADYIN = UOCMDREADYIN; // net ID: UOCMDREADYIN lsb: 0  msb: 0 OUTPUT
			this->UODATA = UODATA; // net ID: UODATA lsb: 0  msb: 0 OUTPUT
			this->UODATAVALID = UODATAVALID; // net ID: UODATAVALID lsb: 0  msb: 0 OUTPUT
			this->UODONECAL = UODONECAL; // net ID: UODONECAL lsb: 0  msb: 0 OUTPUT
			this->UOREFRSHFLAG = UOREFRSHFLAG; // net ID: UOREFRSHFLAG lsb: 0  msb: 0 OUTPUT
			this->UOSDO = UOSDO; // net ID: UOSDO lsb: 0  msb: 0 OUTPUT
			this->WE = WE; // net ID: WE lsb: 0  msb: 0 OUTPUT
			this->DQI = DQI; // net ID: DQI lsb: 0  msb: 15 INPUT
			this->DQSIOIN = DQSIOIN; // net ID: DQSIOIN lsb: 0  msb: 0 INPUT
			this->DQSIOIP = DQSIOIP; // net ID: DQSIOIP lsb: 0  msb: 0 INPUT
			this->IOIDRPSDI = IOIDRPSDI; // net ID: IOIDRPSDI lsb: 0  msb: 0 INPUT
			this->P0ARBEN = P0ARBEN; // net ID: P0ARBEN lsb: 0  msb: 0 INPUT
			this->P0CMDBA = P0CMDBA; // net ID: P0CMDBA lsb: 0  msb: 2 INPUT
			this->P0CMDBL = P0CMDBL; // net ID: P0CMDBL lsb: 0  msb: 5 INPUT
			this->P0CMDCA = P0CMDCA; // net ID: P0CMDCA lsb: 0  msb: 11 INPUT
			this->P0CMDCLK = P0CMDCLK; // net ID: P0CMDCLK lsb: 0  msb: 0 INPUT
			this->P0CMDEN = P0CMDEN; // net ID: P0CMDEN lsb: 0  msb: 0 INPUT
			this->P0CMDINSTR = P0CMDINSTR; // net ID: P0CMDINSTR lsb: 0  msb: 2 INPUT
			this->P0CMDRA = P0CMDRA; // net ID: P0CMDRA lsb: 0  msb: 14 INPUT
			this->P0RDCLK = P0RDCLK; // net ID: P0RDCLK lsb: 0  msb: 0 INPUT
			this->P0RDEN = P0RDEN; // net ID: P0RDEN lsb: 0  msb: 0 INPUT
			this->P0RWRMASK = P0RWRMASK; // net ID: P0RWRMASK lsb: 0  msb: 3 INPUT
			this->P0WRCLK = P0WRCLK; // net ID: P0WRCLK lsb: 0  msb: 0 INPUT
			this->P0WRDATA = P0WRDATA; // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
			this->P0WREN = P0WREN; // net ID: P0WREN lsb: 0  msb: 0 INPUT
			this->P1ARBEN = P1ARBEN; // net ID: P1ARBEN lsb: 0  msb: 0 INPUT
			this->P1CMDBA = P1CMDBA; // net ID: P1CMDBA lsb: 0  msb: 2 INPUT
			this->P1CMDBL = P1CMDBL; // net ID: P1CMDBL lsb: 0  msb: 5 INPUT
			this->P1CMDCA = P1CMDCA; // net ID: P1CMDCA lsb: 0  msb: 11 INPUT
			this->P1CMDCLK = P1CMDCLK; // net ID: P1CMDCLK lsb: 0  msb: 0 INPUT
			this->P1CMDEN = P1CMDEN; // net ID: P1CMDEN lsb: 0  msb: 0 INPUT
			this->P1CMDINSTR = P1CMDINSTR; // net ID: P1CMDINSTR lsb: 0  msb: 2 INPUT
			this->P1CMDRA = P1CMDRA; // net ID: P1CMDRA lsb: 0  msb: 14 INPUT
			this->P1RDCLK = P1RDCLK; // net ID: P1RDCLK lsb: 0  msb: 0 INPUT
			this->P1RDEN = P1RDEN; // net ID: P1RDEN lsb: 0  msb: 0 INPUT
			this->P1RWRMASK = P1RWRMASK; // net ID: P1RWRMASK lsb: 0  msb: 3 INPUT
			this->P1WRCLK = P1WRCLK; // net ID: P1WRCLK lsb: 0  msb: 0 INPUT
			this->P1WRDATA = P1WRDATA; // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
			this->P1WREN = P1WREN; // net ID: P1WREN lsb: 0  msb: 0 INPUT
			this->P2ARBEN = P2ARBEN; // net ID: P2ARBEN lsb: 0  msb: 0 INPUT
			this->P2CLK = P2CLK; // net ID: P2CLK lsb: 0  msb: 0 INPUT
			this->P2CMDBA = P2CMDBA; // net ID: P2CMDBA lsb: 0  msb: 2 INPUT
			this->P2CMDBL = P2CMDBL; // net ID: P2CMDBL lsb: 0  msb: 5 INPUT
			this->P2CMDCA = P2CMDCA; // net ID: P2CMDCA lsb: 0  msb: 11 INPUT
			this->P2CMDCLK = P2CMDCLK; // net ID: P2CMDCLK lsb: 0  msb: 0 INPUT
			this->P2CMDEN = P2CMDEN; // net ID: P2CMDEN lsb: 0  msb: 0 INPUT
			this->P2CMDINSTR = P2CMDINSTR; // net ID: P2CMDINSTR lsb: 0  msb: 2 INPUT
			this->P2CMDRA = P2CMDRA; // net ID: P2CMDRA lsb: 0  msb: 14 INPUT
			this->P2EN = P2EN; // net ID: P2EN lsb: 0  msb: 0 INPUT
			this->P2WRDATA = P2WRDATA; // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
			this->P2WRMASK = P2WRMASK; // net ID: P2WRMASK lsb: 0  msb: 3 INPUT
			this->P3ARBEN = P3ARBEN; // net ID: P3ARBEN lsb: 0  msb: 0 INPUT
			this->P3CLK = P3CLK; // net ID: P3CLK lsb: 0  msb: 0 INPUT
			this->P3CMDBA = P3CMDBA; // net ID: P3CMDBA lsb: 0  msb: 2 INPUT
			this->P3CMDBL = P3CMDBL; // net ID: P3CMDBL lsb: 0  msb: 5 INPUT
			this->P3CMDCA = P3CMDCA; // net ID: P3CMDCA lsb: 0  msb: 11 INPUT
			this->P3CMDCLK = P3CMDCLK; // net ID: P3CMDCLK lsb: 0  msb: 0 INPUT
			this->P3CMDEN = P3CMDEN; // net ID: P3CMDEN lsb: 0  msb: 0 INPUT
			this->P3CMDINSTR = P3CMDINSTR; // net ID: P3CMDINSTR lsb: 0  msb: 2 INPUT
			this->P3CMDRA = P3CMDRA; // net ID: P3CMDRA lsb: 0  msb: 14 INPUT
			this->P3EN = P3EN; // net ID: P3EN lsb: 0  msb: 0 INPUT
			this->P3WRDATA = P3WRDATA; // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
			this->P3WRMASK = P3WRMASK; // net ID: P3WRMASK lsb: 0  msb: 3 INPUT
			this->P4ARBEN = P4ARBEN; // net ID: P4ARBEN lsb: 0  msb: 0 INPUT
			this->P4CLK = P4CLK; // net ID: P4CLK lsb: 0  msb: 0 INPUT
			this->P4CMDBA = P4CMDBA; // net ID: P4CMDBA lsb: 0  msb: 2 INPUT
			this->P4CMDBL = P4CMDBL; // net ID: P4CMDBL lsb: 0  msb: 5 INPUT
			this->P4CMDCA = P4CMDCA; // net ID: P4CMDCA lsb: 0  msb: 11 INPUT
			this->P4CMDCLK = P4CMDCLK; // net ID: P4CMDCLK lsb: 0  msb: 0 INPUT
			this->P4CMDEN = P4CMDEN; // net ID: P4CMDEN lsb: 0  msb: 0 INPUT
			this->P4CMDINSTR = P4CMDINSTR; // net ID: P4CMDINSTR lsb: 0  msb: 2 INPUT
			this->P4CMDRA = P4CMDRA; // net ID: P4CMDRA lsb: 0  msb: 14 INPUT
			this->P4EN = P4EN; // net ID: P4EN lsb: 0  msb: 0 INPUT
			this->P4WRDATA = P4WRDATA; // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
			this->P4WRMASK = P4WRMASK; // net ID: P4WRMASK lsb: 0  msb: 3 INPUT
			this->P5ARBEN = P5ARBEN; // net ID: P5ARBEN lsb: 0  msb: 0 INPUT
			this->P5CLK = P5CLK; // net ID: P5CLK lsb: 0  msb: 0 INPUT
			this->P5CMDBA = P5CMDBA; // net ID: P5CMDBA lsb: 0  msb: 2 INPUT
			this->P5CMDBL = P5CMDBL; // net ID: P5CMDBL lsb: 0  msb: 5 INPUT
			this->P5CMDCA = P5CMDCA; // net ID: P5CMDCA lsb: 0  msb: 11 INPUT
			this->P5CMDCLK = P5CMDCLK; // net ID: P5CMDCLK lsb: 0  msb: 0 INPUT
			this->P5CMDEN = P5CMDEN; // net ID: P5CMDEN lsb: 0  msb: 0 INPUT
			this->P5CMDINSTR = P5CMDINSTR; // net ID: P5CMDINSTR lsb: 0  msb: 2 INPUT
			this->P5CMDRA = P5CMDRA; // net ID: P5CMDRA lsb: 0  msb: 14 INPUT
			this->P5EN = P5EN; // net ID: P5EN lsb: 0  msb: 0 INPUT
			this->P5WRDATA = P5WRDATA; // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
			this->P5WRMASK = P5WRMASK; // net ID: P5WRMASK lsb: 0  msb: 3 INPUT
			this->PLLCE = PLLCE; // net ID: PLLCE lsb: 0  msb: 1 INPUT
			this->PLLCLK = PLLCLK; // net ID: PLLCLK lsb: 0  msb: 1 INPUT
			this->PLLLOCK = PLLLOCK; // net ID: PLLLOCK lsb: 0  msb: 0 INPUT
			this->RECAL = RECAL; // net ID: RECAL lsb: 0  msb: 0 INPUT
			this->SELFREFRESHENTER = SELFREFRESHENTER; // net ID: SELFREFRESHENTER lsb: 0  msb: 0 INPUT
			this->SYSRST = SYSRST; // net ID: SYSRST lsb: 0  msb: 0 INPUT
			this->UDQSIOIN = UDQSIOIN; // net ID: UDQSIOIN lsb: 0  msb: 0 INPUT
			this->UDQSIOIP = UDQSIOIP; // net ID: UDQSIOIP lsb: 0  msb: 0 INPUT
			this->UIADD = UIADD; // net ID: UIADD lsb: 0  msb: 0 INPUT
			this->UIADDR = UIADDR; // net ID: UIADDR lsb: 0  msb: 4 INPUT
			this->UIBROADCAST = UIBROADCAST; // net ID: UIBROADCAST lsb: 0  msb: 0 INPUT
			this->UICLK = UICLK; // net ID: UICLK lsb: 0  msb: 0 INPUT
			this->UICMD = UICMD; // net ID: UICMD lsb: 0  msb: 0 INPUT
			this->UICMDEN = UICMDEN; // net ID: UICMDEN lsb: 0  msb: 0 INPUT
			this->UICMDIN = UICMDIN; // net ID: UICMDIN lsb: 0  msb: 0 INPUT
			this->UICS = UICS; // net ID: UICS lsb: 0  msb: 0 INPUT
			this->UIDONECAL = UIDONECAL; // net ID: UIDONECAL lsb: 0  msb: 0 INPUT
			this->UIDQCOUNT = UIDQCOUNT; // net ID: UIDQCOUNT lsb: 0  msb: 3 INPUT
			this->UIDQLOWERDEC = UIDQLOWERDEC; // net ID: UIDQLOWERDEC lsb: 0  msb: 0 INPUT
			this->UIDQLOWERINC = UIDQLOWERINC; // net ID: UIDQLOWERINC lsb: 0  msb: 0 INPUT
			this->UIDQUPPERDEC = UIDQUPPERDEC; // net ID: UIDQUPPERDEC lsb: 0  msb: 0 INPUT
			this->UIDQUPPERINC = UIDQUPPERINC; // net ID: UIDQUPPERINC lsb: 0  msb: 0 INPUT
			this->UIDRPUPDATE = UIDRPUPDATE; // net ID: UIDRPUPDATE lsb: 0  msb: 0 INPUT
			this->UILDQSDEC = UILDQSDEC; // net ID: UILDQSDEC lsb: 0  msb: 0 INPUT
			this->UILDQSINC = UILDQSINC; // net ID: UILDQSINC lsb: 0  msb: 0 INPUT
			this->UIREAD = UIREAD; // net ID: UIREAD lsb: 0  msb: 0 INPUT
			this->UISDI = UISDI; // net ID: UISDI lsb: 0  msb: 0 INPUT
			this->UIUDQSDEC = UIUDQSDEC; // net ID: UIUDQSDEC lsb: 0  msb: 0 INPUT
			this->UIUDQSINC = UIUDQSINC; // net ID: UIUDQSINC lsb: 0  msb: 0 INPUT
			
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
