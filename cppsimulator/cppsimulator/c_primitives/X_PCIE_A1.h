/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_PCIE_A1: public Primitive{

		//Verilog Parameters:
		parameter_string_t LOC;
		parameter_string_t BAR0;
		parameter_string_t BAR1;
		parameter_string_t BAR2;
		parameter_string_t BAR3;
		parameter_string_t BAR4;
		parameter_string_t BAR5;
		parameter_string_t CARDBUS_CIS_POINTER;
		parameter_string_t CLASS_CODE;
		parameter_string_t DEV_CAP_ENDPOINT_L0S_LATENCY;
		parameter_string_t DEV_CAP_ENDPOINT_L1_LATENCY;
		parameter_enum_t DEV_CAP_EXT_TAG_SUPPORTED;
		parameter_string_t DEV_CAP_MAX_PAYLOAD_SUPPORTED;
		parameter_string_t DEV_CAP_PHANTOM_FUNCTIONS_SUPPORT;
		parameter_enum_t DEV_CAP_ROLE_BASED_ERROR;
		parameter_enum_t DISABLE_BAR_FILTERING;
		parameter_enum_t DISABLE_ID_CHECK;
		parameter_enum_t DISABLE_SCRAMBLING;
		parameter_enum_t ENABLE_RX_TD_ECRC_TRIM;
		parameter_string_t EXPANSION_ROM;
		parameter_enum_t FAST_TRAIN;
		parameter_string_t GTP_SEL;
		parameter_string_t LINK_CAP_ASPM_SUPPORT;
		parameter_string_t LINK_CAP_L0S_EXIT_LATENCY;
		parameter_string_t LINK_CAP_L1_EXIT_LATENCY;
		parameter_enum_t LINK_STATUS_SLOT_CLOCK_CONFIG;
		parameter_string_t LL_ACK_TIMEOUT;
		parameter_enum_t LL_ACK_TIMEOUT_EN;
		parameter_string_t LL_REPLAY_TIMEOUT;
		parameter_enum_t LL_REPLAY_TIMEOUT_EN;
		parameter_string_t MSI_CAP_MULTIMSGCAP;
		parameter_string_t MSI_CAP_MULTIMSG_EXTENSION;
		parameter_string_t PCIE_CAP_CAPABILITY_VERSION;
		parameter_string_t PCIE_CAP_DEVICE_PORT_TYPE;
		parameter_string_t PCIE_CAP_INT_MSG_NUM;
		parameter_enum_t PCIE_CAP_SLOT_IMPLEMENTED;
		parameter_string_t PCIE_GENERIC;
		parameter_enum_t PLM_AUTO_CONFIG;
		parameter_string_t PM_CAP_AUXCURRENT;
		parameter_enum_t PM_CAP_D1SUPPORT;
		parameter_enum_t PM_CAP_D2SUPPORT;
		parameter_enum_t PM_CAP_DSI;
		parameter_string_t PM_CAP_PMESUPPORT;
		parameter_enum_t PM_CAP_PME_CLOCK;
		parameter_string_t PM_CAP_VERSION;
		parameter_string_t PM_DATA0;
		parameter_string_t PM_DATA1;
		parameter_string_t PM_DATA2;
		parameter_string_t PM_DATA3;
		parameter_string_t PM_DATA4;
		parameter_string_t PM_DATA5;
		parameter_string_t PM_DATA6;
		parameter_string_t PM_DATA7;
		parameter_string_t PM_DATA_SCALE0;
		parameter_string_t PM_DATA_SCALE1;
		parameter_string_t PM_DATA_SCALE2;
		parameter_string_t PM_DATA_SCALE3;
		parameter_string_t PM_DATA_SCALE4;
		parameter_string_t PM_DATA_SCALE5;
		parameter_string_t PM_DATA_SCALE6;
		parameter_string_t PM_DATA_SCALE7;
		parameter_string_t SIM_VERSION;
		parameter_enum_t SLOT_CAP_ATT_BUTTON_PRESENT;
		parameter_enum_t SLOT_CAP_ATT_INDICATOR_PRESENT;
		parameter_enum_t SLOT_CAP_POWER_INDICATOR_PRESENT;
		parameter_string_t TL_RX_RAM_RADDR_LATENCY;
		parameter_string_t TL_RX_RAM_RDATA_LATENCY;
		parameter_string_t TL_RX_RAM_WRITE_LATENCY;
		parameter_enum_t TL_TFC_DISABLE;
		parameter_enum_t TL_TX_CHECKS_DISABLE;
		parameter_string_t TL_TX_RAM_RADDR_LATENCY;
		parameter_string_t TL_TX_RAM_RDATA_LATENCY;
		parameter_enum_t USR_CFG;
		parameter_enum_t USR_EXT_CFG;
		parameter_enum_t VC0_CPL_INFINITE;
		parameter_string_t VC0_RX_RAM_LIMIT;
		parameter_string_t VC0_TOTAL_CREDITS_CD;
		parameter_string_t VC0_TOTAL_CREDITS_CH;
		parameter_string_t VC0_TOTAL_CREDITS_NPH;
		parameter_string_t VC0_TOTAL_CREDITS_PD;
		parameter_string_t VC0_TOTAL_CREDITS_PH;
		parameter_string_t VC0_TX_LASTPACKET;
		//Verilog Ports in definition order:
		NetFlow* CFGBUSNUMBER; // net ID: CFGBUSNUMBER lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGCOMMANDBUSMASTERENABLE; // net ID: CFGCOMMANDBUSMASTERENABLE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGCOMMANDINTERRUPTDISABLE; // net ID: CFGCOMMANDINTERRUPTDISABLE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGCOMMANDIOENABLE; // net ID: CFGCOMMANDIOENABLE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGCOMMANDMEMENABLE; // net ID: CFGCOMMANDMEMENABLE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGCOMMANDSERREN; // net ID: CFGCOMMANDSERREN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVCONTROLAUXPOWEREN; // net ID: CFGDEVCONTROLAUXPOWEREN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVCONTROLCORRERRREPORTINGEN; // net ID: CFGDEVCONTROLCORRERRREPORTINGEN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVCONTROLENABLERO; // net ID: CFGDEVCONTROLENABLERO lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVCONTROLEXTTAGEN; // net ID: CFGDEVCONTROLEXTTAGEN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVCONTROLFATALERRREPORTINGEN; // net ID: CFGDEVCONTROLFATALERRREPORTINGEN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVCONTROLMAXPAYLOAD; // net ID: CFGDEVCONTROLMAXPAYLOAD lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVCONTROLMAXREADREQ; // net ID: CFGDEVCONTROLMAXREADREQ lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVCONTROLNONFATALREPORTINGEN; // net ID: CFGDEVCONTROLNONFATALREPORTINGEN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVCONTROLNOSNOOPEN; // net ID: CFGDEVCONTROLNOSNOOPEN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVCONTROLPHANTOMEN; // net ID: CFGDEVCONTROLPHANTOMEN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVCONTROLURERRREPORTINGEN; // net ID: CFGDEVCONTROLURERRREPORTINGEN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVICENUMBER; // net ID: CFGDEVICENUMBER lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVSTATUSCORRERRDETECTED; // net ID: CFGDEVSTATUSCORRERRDETECTED lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVSTATUSFATALERRDETECTED; // net ID: CFGDEVSTATUSFATALERRDETECTED lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVSTATUSNONFATALERRDETECTED; // net ID: CFGDEVSTATUSNONFATALERRDETECTED lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVSTATUSURDETECTED; // net ID: CFGDEVSTATUSURDETECTED lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDO; // net ID: CFGDO lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGERRCPLRDYN; // net ID: CFGERRCPLRDYN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGFUNCTIONNUMBER; // net ID: CFGFUNCTIONNUMBER lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGINTERRUPTDO; // net ID: CFGINTERRUPTDO lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGINTERRUPTMMENABLE; // net ID: CFGINTERRUPTMMENABLE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGINTERRUPTMSIENABLE; // net ID: CFGINTERRUPTMSIENABLE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGINTERRUPTRDYN; // net ID: CFGINTERRUPTRDYN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGLINKCONTOLRCB; // net ID: CFGLINKCONTOLRCB lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGLINKCONTROLASPMCONTROL; // net ID: CFGLINKCONTROLASPMCONTROL lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGLINKCONTROLCOMMONCLOCK; // net ID: CFGLINKCONTROLCOMMONCLOCK lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGLINKCONTROLEXTENDEDSYNC; // net ID: CFGLINKCONTROLEXTENDEDSYNC lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGLTSSMSTATE; // net ID: CFGLTSSMSTATE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGPCIELINKSTATEN; // net ID: CFGPCIELINKSTATEN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGRDWRDONEN; // net ID: CFGRDWRDONEN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGTOTURNOFFN; // net ID: CFGTOTURNOFFN lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGBADDLLPSTATUS; // net ID: DBGBADDLLPSTATUS lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGBADTLPLCRC; // net ID: DBGBADTLPLCRC lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGBADTLPSEQNUM; // net ID: DBGBADTLPSEQNUM lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGBADTLPSTATUS; // net ID: DBGBADTLPSTATUS lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGDLPROTOCOLSTATUS; // net ID: DBGDLPROTOCOLSTATUS lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGFCPROTOCOLERRSTATUS; // net ID: DBGFCPROTOCOLERRSTATUS lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGMLFRMDLENGTH; // net ID: DBGMLFRMDLENGTH lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGMLFRMDMPS; // net ID: DBGMLFRMDMPS lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGMLFRMDTCVC; // net ID: DBGMLFRMDTCVC lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGMLFRMDTLPSTATUS; // net ID: DBGMLFRMDTLPSTATUS lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGMLFRMDUNRECTYPE; // net ID: DBGMLFRMDUNRECTYPE lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGPOISTLPSTATUS; // net ID: DBGPOISTLPSTATUS lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGRCVROVERFLOWSTATUS; // net ID: DBGRCVROVERFLOWSTATUS lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGREGDETECTEDCORRECTABLE; // net ID: DBGREGDETECTEDCORRECTABLE lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGREGDETECTEDFATAL; // net ID: DBGREGDETECTEDFATAL lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGREGDETECTEDNONFATAL; // net ID: DBGREGDETECTEDNONFATAL lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGREGDETECTEDUNSUPPORTED; // net ID: DBGREGDETECTEDUNSUPPORTED lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGRPLYROLLOVERSTATUS; // net ID: DBGRPLYROLLOVERSTATUS lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGRPLYTIMEOUTSTATUS; // net ID: DBGRPLYTIMEOUTSTATUS lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGURNOBARHIT; // net ID: DBGURNOBARHIT lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGURPOISCFGWR; // net ID: DBGURPOISCFGWR lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGURSTATUS; // net ID: DBGURSTATUS lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGURUNSUPMSG; // net ID: DBGURUNSUPMSG lsb: 0  msb: 0 OUTPUT
		NetFlow* MIMRXRADDR; // net ID: MIMRXRADDR lsb: 0  msb: 0 OUTPUT
		NetFlow* MIMRXREN; // net ID: MIMRXREN lsb: 0  msb: 0 OUTPUT
		NetFlow* MIMRXWADDR; // net ID: MIMRXWADDR lsb: 0  msb: 0 OUTPUT
		NetFlow* MIMRXWDATA; // net ID: MIMRXWDATA lsb: 0  msb: 0 OUTPUT
		NetFlow* MIMRXWEN; // net ID: MIMRXWEN lsb: 0  msb: 0 OUTPUT
		NetFlow* MIMTXRADDR; // net ID: MIMTXRADDR lsb: 0  msb: 0 OUTPUT
		NetFlow* MIMTXREN; // net ID: MIMTXREN lsb: 0  msb: 0 OUTPUT
		NetFlow* MIMTXWADDR; // net ID: MIMTXWADDR lsb: 0  msb: 0 OUTPUT
		NetFlow* MIMTXWDATA; // net ID: MIMTXWDATA lsb: 0  msb: 0 OUTPUT
		NetFlow* MIMTXWEN; // net ID: MIMTXWEN lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPEGTPOWERDOWNA; // net ID: PIPEGTPOWERDOWNA lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPEGTPOWERDOWNB; // net ID: PIPEGTPOWERDOWNB lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPEGTTXELECIDLEA; // net ID: PIPEGTTXELECIDLEA lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPEGTTXELECIDLEB; // net ID: PIPEGTTXELECIDLEB lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERXPOLARITYA; // net ID: PIPERXPOLARITYA lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERXPOLARITYB; // net ID: PIPERXPOLARITYB lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERXRESETA; // net ID: PIPERXRESETA lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERXRESETB; // net ID: PIPERXRESETB lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETXCHARDISPMODEA; // net ID: PIPETXCHARDISPMODEA lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETXCHARDISPMODEB; // net ID: PIPETXCHARDISPMODEB lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETXCHARDISPVALA; // net ID: PIPETXCHARDISPVALA lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETXCHARDISPVALB; // net ID: PIPETXCHARDISPVALB lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETXCHARISKA; // net ID: PIPETXCHARISKA lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETXCHARISKB; // net ID: PIPETXCHARISKB lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETXDATAA; // net ID: PIPETXDATAA lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETXDATAB; // net ID: PIPETXDATAB lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETXRCVRDETA; // net ID: PIPETXRCVRDETA lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETXRCVRDETB; // net ID: PIPETXRCVRDETB lsb: 0  msb: 0 OUTPUT
		NetFlow* RECEIVEDHOTRESET; // net ID: RECEIVEDHOTRESET lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNFCCPLD; // net ID: TRNFCCPLD lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNFCCPLH; // net ID: TRNFCCPLH lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNFCNPD; // net ID: TRNFCNPD lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNFCNPH; // net ID: TRNFCNPH lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNFCPD; // net ID: TRNFCPD lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNFCPH; // net ID: TRNFCPH lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNLNKUPN; // net ID: TRNLNKUPN lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNRBARHITN; // net ID: TRNRBARHITN lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNRD; // net ID: TRNRD lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNREOFN; // net ID: TRNREOFN lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNRERRFWDN; // net ID: TRNRERRFWDN lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNRSOFN; // net ID: TRNRSOFN lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNRSRCDSCN; // net ID: TRNRSRCDSCN lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNRSRCRDYN; // net ID: TRNRSRCRDYN lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNTBUFAV; // net ID: TRNTBUFAV lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNTCFGREQN; // net ID: TRNTCFGREQN lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNTDSTRDYN; // net ID: TRNTDSTRDYN lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNTERRDROPN; // net ID: TRNTERRDROPN lsb: 0  msb: 0 OUTPUT
		NetFlow* USERRSTN; // net ID: USERRSTN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVID; // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
		NetFlow* CFGDSN; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDWADDR; // net ID: CFGDWADDR lsb: 0  msb: 9 INPUT
		NetFlow* CFGERRCORN; // net ID: CFGERRCORN lsb: 0  msb: 0 INPUT
		NetFlow* CFGERRCPLABORTN; // net ID: CFGERRCPLABORTN lsb: 0  msb: 0 INPUT
		NetFlow* CFGERRCPLTIMEOUTN; // net ID: CFGERRCPLTIMEOUTN lsb: 0  msb: 0 INPUT
		NetFlow* CFGERRECRCN; // net ID: CFGERRECRCN lsb: 0  msb: 0 INPUT
		NetFlow* CFGERRLOCKEDN; // net ID: CFGERRLOCKEDN lsb: 0  msb: 0 INPUT
		NetFlow* CFGERRPOSTEDN; // net ID: CFGERRPOSTEDN lsb: 0  msb: 0 INPUT
		NetFlow* CFGERRTLPCPLHEADER; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRURN; // net ID: CFGERRURN lsb: 0  msb: 0 INPUT
		NetFlow* CFGINTERRUPTASSERTN; // net ID: CFGINTERRUPTASSERTN lsb: 0  msb: 0 INPUT
		NetFlow* CFGINTERRUPTDI; // net ID: CFGINTERRUPTDI lsb: 0  msb: 7 INPUT
		NetFlow* CFGINTERRUPTN; // net ID: CFGINTERRUPTN lsb: 0  msb: 0 INPUT
		NetFlow* CFGPMWAKEN; // net ID: CFGPMWAKEN lsb: 0  msb: 0 INPUT
		NetFlow* CFGRDENN; // net ID: CFGRDENN lsb: 0  msb: 0 INPUT
		NetFlow* CFGREVID; // net ID: CFGREVID lsb: 0  msb: 7 INPUT
		NetFlow* CFGSUBSYSID; // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
		NetFlow* CFGSUBSYSVENID; // net ID: CFGSUBSYSVENID lsb: 0  msb: 15 INPUT
		NetFlow* CFGTRNPENDINGN; // net ID: CFGTRNPENDINGN lsb: 0  msb: 0 INPUT
		NetFlow* CFGTURNOFFOKN; // net ID: CFGTURNOFFOKN lsb: 0  msb: 0 INPUT
		NetFlow* CFGVENID; // net ID: CFGVENID lsb: 0  msb: 15 INPUT
		NetFlow* CLOCKLOCKED; // net ID: CLOCKLOCKED lsb: 0  msb: 0 INPUT
		NetFlow* MGTCLK; // net ID: MGTCLK lsb: 0  msb: 0 INPUT
		NetFlow* MIMRXRDATA; // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
		NetFlow* MIMTXRDATA; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
		NetFlow* PIPEGTRESETDONEA; // net ID: PIPEGTRESETDONEA lsb: 0  msb: 0 INPUT
		NetFlow* PIPEGTRESETDONEB; // net ID: PIPEGTRESETDONEB lsb: 0  msb: 0 INPUT
		NetFlow* PIPEPHYSTATUSA; // net ID: PIPEPHYSTATUSA lsb: 0  msb: 0 INPUT
		NetFlow* PIPEPHYSTATUSB; // net ID: PIPEPHYSTATUSB lsb: 0  msb: 0 INPUT
		NetFlow* PIPERXCHARISKA; // net ID: PIPERXCHARISKA lsb: 0  msb: 1 INPUT
		NetFlow* PIPERXCHARISKB; // net ID: PIPERXCHARISKB lsb: 0  msb: 1 INPUT
		NetFlow* PIPERXDATAA; // net ID: PIPERXDATAA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERXDATAB; // net ID: PIPERXDATAB lsb: 0  msb: 15 INPUT
		NetFlow* PIPERXENTERELECIDLEA; // net ID: PIPERXENTERELECIDLEA lsb: 0  msb: 0 INPUT
		NetFlow* PIPERXENTERELECIDLEB; // net ID: PIPERXENTERELECIDLEB lsb: 0  msb: 0 INPUT
		NetFlow* PIPERXSTATUSA; // net ID: PIPERXSTATUSA lsb: 0  msb: 2 INPUT
		NetFlow* PIPERXSTATUSB; // net ID: PIPERXSTATUSB lsb: 0  msb: 2 INPUT
		NetFlow* SYSRESETN; // net ID: SYSRESETN lsb: 0  msb: 0 INPUT
		NetFlow* TRNFCSEL; // net ID: TRNFCSEL lsb: 0  msb: 2 INPUT
		NetFlow* TRNRDSTRDYN; // net ID: TRNRDSTRDYN lsb: 0  msb: 0 INPUT
		NetFlow* TRNRNPOKN; // net ID: TRNRNPOKN lsb: 0  msb: 0 INPUT
		NetFlow* TRNTCFGGNTN; // net ID: TRNTCFGGNTN lsb: 0  msb: 0 INPUT
		NetFlow* TRNTD; // net ID: TRNTD lsb: 0  msb: 31 INPUT
		NetFlow* TRNTEOFN; // net ID: TRNTEOFN lsb: 0  msb: 0 INPUT
		NetFlow* TRNTERRFWDN; // net ID: TRNTERRFWDN lsb: 0  msb: 0 INPUT
		NetFlow* TRNTSOFN; // net ID: TRNTSOFN lsb: 0  msb: 0 INPUT
		NetFlow* TRNTSRCDSCN; // net ID: TRNTSRCDSCN lsb: 0  msb: 0 INPUT
		NetFlow* TRNTSRCRDYN; // net ID: TRNTSRCRDYN lsb: 0  msb: 0 INPUT
		NetFlow* TRNTSTRN; // net ID: TRNTSTRN lsb: 0  msb: 0 INPUT
		NetFlow* USERCLK; // net ID: USERCLK lsb: 0  msb: 0 INPUT
		
		X_PCIE_A1(
			const char * name,
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_string_t BAR0, // Default: 32'h00000000
			parameter_string_t BAR1, // Default: 32'h00000000
			parameter_string_t BAR2, // Default: 32'h00000000
			parameter_string_t BAR3, // Default: 32'h00000000
			parameter_string_t BAR4, // Default: 32'h00000000
			parameter_string_t BAR5, // Default: 32'h00000000
			parameter_string_t CARDBUS_CIS_POINTER, // Default: 32'h00000000
			parameter_string_t CLASS_CODE, // Default: 24'h000000
			parameter_string_t DEV_CAP_ENDPOINT_L0S_LATENCY, // Default: 7
			parameter_string_t DEV_CAP_ENDPOINT_L1_LATENCY, // Default: 7
			parameter_enum_t DEV_CAP_EXT_TAG_SUPPORTED, // Default: "FALSE"
			parameter_string_t DEV_CAP_MAX_PAYLOAD_SUPPORTED, // Default: 2
			parameter_string_t DEV_CAP_PHANTOM_FUNCTIONS_SUPPORT, // Default: 0
			parameter_enum_t DEV_CAP_ROLE_BASED_ERROR, // Default: "TRUE"
			parameter_enum_t DISABLE_BAR_FILTERING, // Default: "FALSE"
			parameter_enum_t DISABLE_ID_CHECK, // Default: "FALSE"
			parameter_enum_t DISABLE_SCRAMBLING, // Default: "FALSE"
			parameter_enum_t ENABLE_RX_TD_ECRC_TRIM, // Default: "FALSE"
			parameter_string_t EXPANSION_ROM, // Default: 22'h000000
			parameter_enum_t FAST_TRAIN, // Default: "FALSE"
			parameter_string_t GTP_SEL, // Default: 0
			parameter_string_t LINK_CAP_ASPM_SUPPORT, // Default: 1
			parameter_string_t LINK_CAP_L0S_EXIT_LATENCY, // Default: 7
			parameter_string_t LINK_CAP_L1_EXIT_LATENCY, // Default: 7
			parameter_enum_t LINK_STATUS_SLOT_CLOCK_CONFIG, // Default: "FALSE"
			parameter_string_t LL_ACK_TIMEOUT, // Default: 15'h0204
			parameter_enum_t LL_ACK_TIMEOUT_EN, // Default: "FALSE"
			parameter_string_t LL_REPLAY_TIMEOUT, // Default: 15'h060D
			parameter_enum_t LL_REPLAY_TIMEOUT_EN, // Default: "FALSE"
			parameter_string_t MSI_CAP_MULTIMSGCAP, // Default: 0
			parameter_string_t MSI_CAP_MULTIMSG_EXTENSION, // Default: 0
			parameter_string_t PCIE_CAP_CAPABILITY_VERSION, // Default: 4'h1
			parameter_string_t PCIE_CAP_DEVICE_PORT_TYPE, // Default: 4'h0
			parameter_string_t PCIE_CAP_INT_MSG_NUM, // Default: 5'b00000
			parameter_enum_t PCIE_CAP_SLOT_IMPLEMENTED, // Default: "FALSE"
			parameter_string_t PCIE_GENERIC, // Default: 12'h000
			parameter_enum_t PLM_AUTO_CONFIG, // Default: "FALSE"
			parameter_string_t PM_CAP_AUXCURRENT, // Default: 0
			parameter_enum_t PM_CAP_D1SUPPORT, // Default: "TRUE"
			parameter_enum_t PM_CAP_D2SUPPORT, // Default: "TRUE"
			parameter_enum_t PM_CAP_DSI, // Default: "FALSE"
			parameter_string_t PM_CAP_PMESUPPORT, // Default: 5'b01111
			parameter_enum_t PM_CAP_PME_CLOCK, // Default: "FALSE"
			parameter_string_t PM_CAP_VERSION, // Default: 3
			parameter_string_t PM_DATA0, // Default: 8'h1E
			parameter_string_t PM_DATA1, // Default: 8'h1E
			parameter_string_t PM_DATA2, // Default: 8'h1E
			parameter_string_t PM_DATA3, // Default: 8'h1E
			parameter_string_t PM_DATA4, // Default: 8'h1E
			parameter_string_t PM_DATA5, // Default: 8'h1E
			parameter_string_t PM_DATA6, // Default: 8'h1E
			parameter_string_t PM_DATA7, // Default: 8'h1E
			parameter_string_t PM_DATA_SCALE0, // Default: 2'b01
			parameter_string_t PM_DATA_SCALE1, // Default: 2'b01
			parameter_string_t PM_DATA_SCALE2, // Default: 2'b01
			parameter_string_t PM_DATA_SCALE3, // Default: 2'b01
			parameter_string_t PM_DATA_SCALE4, // Default: 2'b01
			parameter_string_t PM_DATA_SCALE5, // Default: 2'b01
			parameter_string_t PM_DATA_SCALE6, // Default: 2'b01
			parameter_string_t PM_DATA_SCALE7, // Default: 2'b01
			parameter_string_t SIM_VERSION, // Default: "1.0"
			parameter_enum_t SLOT_CAP_ATT_BUTTON_PRESENT, // Default: "FALSE"
			parameter_enum_t SLOT_CAP_ATT_INDICATOR_PRESENT, // Default: "FALSE"
			parameter_enum_t SLOT_CAP_POWER_INDICATOR_PRESENT, // Default: "FALSE"
			parameter_string_t TL_RX_RAM_RADDR_LATENCY, // Default: 1
			parameter_string_t TL_RX_RAM_RDATA_LATENCY, // Default: 2
			parameter_string_t TL_RX_RAM_WRITE_LATENCY, // Default: 0
			parameter_enum_t TL_TFC_DISABLE, // Default: "FALSE"
			parameter_enum_t TL_TX_CHECKS_DISABLE, // Default: "FALSE"
			parameter_string_t TL_TX_RAM_RADDR_LATENCY, // Default: 0
			parameter_string_t TL_TX_RAM_RDATA_LATENCY, // Default: 2
			parameter_enum_t USR_CFG, // Default: "FALSE"
			parameter_enum_t USR_EXT_CFG, // Default: "FALSE"
			parameter_enum_t VC0_CPL_INFINITE, // Default: "TRUE"
			parameter_string_t VC0_RX_RAM_LIMIT, // Default: 12'h01E
			parameter_string_t VC0_TOTAL_CREDITS_CD, // Default: 104
			parameter_string_t VC0_TOTAL_CREDITS_CH, // Default: 36
			parameter_string_t VC0_TOTAL_CREDITS_NPH, // Default: 8
			parameter_string_t VC0_TOTAL_CREDITS_PD, // Default: 288
			parameter_string_t VC0_TOTAL_CREDITS_PH, // Default: 32
			parameter_string_t VC0_TX_LASTPACKET, // Default: 31
			//Verilog Ports in definition order:
			NetFlow* CFGBUSNUMBER, // net ID: CFGBUSNUMBER lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGCOMMANDBUSMASTERENABLE, // net ID: CFGCOMMANDBUSMASTERENABLE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGCOMMANDINTERRUPTDISABLE, // net ID: CFGCOMMANDINTERRUPTDISABLE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGCOMMANDIOENABLE, // net ID: CFGCOMMANDIOENABLE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGCOMMANDMEMENABLE, // net ID: CFGCOMMANDMEMENABLE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGCOMMANDSERREN, // net ID: CFGCOMMANDSERREN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVCONTROLAUXPOWEREN, // net ID: CFGDEVCONTROLAUXPOWEREN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVCONTROLCORRERRREPORTINGEN, // net ID: CFGDEVCONTROLCORRERRREPORTINGEN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVCONTROLENABLERO, // net ID: CFGDEVCONTROLENABLERO lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVCONTROLEXTTAGEN, // net ID: CFGDEVCONTROLEXTTAGEN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVCONTROLFATALERRREPORTINGEN, // net ID: CFGDEVCONTROLFATALERRREPORTINGEN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVCONTROLMAXPAYLOAD, // net ID: CFGDEVCONTROLMAXPAYLOAD lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVCONTROLMAXREADREQ, // net ID: CFGDEVCONTROLMAXREADREQ lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVCONTROLNONFATALREPORTINGEN, // net ID: CFGDEVCONTROLNONFATALREPORTINGEN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVCONTROLNOSNOOPEN, // net ID: CFGDEVCONTROLNOSNOOPEN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVCONTROLPHANTOMEN, // net ID: CFGDEVCONTROLPHANTOMEN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVCONTROLURERRREPORTINGEN, // net ID: CFGDEVCONTROLURERRREPORTINGEN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVICENUMBER, // net ID: CFGDEVICENUMBER lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVSTATUSCORRERRDETECTED, // net ID: CFGDEVSTATUSCORRERRDETECTED lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVSTATUSFATALERRDETECTED, // net ID: CFGDEVSTATUSFATALERRDETECTED lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVSTATUSNONFATALERRDETECTED, // net ID: CFGDEVSTATUSNONFATALERRDETECTED lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVSTATUSURDETECTED, // net ID: CFGDEVSTATUSURDETECTED lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDO, // net ID: CFGDO lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGERRCPLRDYN, // net ID: CFGERRCPLRDYN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGFUNCTIONNUMBER, // net ID: CFGFUNCTIONNUMBER lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGINTERRUPTDO, // net ID: CFGINTERRUPTDO lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGINTERRUPTMMENABLE, // net ID: CFGINTERRUPTMMENABLE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGINTERRUPTMSIENABLE, // net ID: CFGINTERRUPTMSIENABLE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGINTERRUPTRDYN, // net ID: CFGINTERRUPTRDYN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGLINKCONTOLRCB, // net ID: CFGLINKCONTOLRCB lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGLINKCONTROLASPMCONTROL, // net ID: CFGLINKCONTROLASPMCONTROL lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGLINKCONTROLCOMMONCLOCK, // net ID: CFGLINKCONTROLCOMMONCLOCK lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGLINKCONTROLEXTENDEDSYNC, // net ID: CFGLINKCONTROLEXTENDEDSYNC lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGLTSSMSTATE, // net ID: CFGLTSSMSTATE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGPCIELINKSTATEN, // net ID: CFGPCIELINKSTATEN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGRDWRDONEN, // net ID: CFGRDWRDONEN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGTOTURNOFFN, // net ID: CFGTOTURNOFFN lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGBADDLLPSTATUS, // net ID: DBGBADDLLPSTATUS lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGBADTLPLCRC, // net ID: DBGBADTLPLCRC lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGBADTLPSEQNUM, // net ID: DBGBADTLPSEQNUM lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGBADTLPSTATUS, // net ID: DBGBADTLPSTATUS lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGDLPROTOCOLSTATUS, // net ID: DBGDLPROTOCOLSTATUS lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGFCPROTOCOLERRSTATUS, // net ID: DBGFCPROTOCOLERRSTATUS lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGMLFRMDLENGTH, // net ID: DBGMLFRMDLENGTH lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGMLFRMDMPS, // net ID: DBGMLFRMDMPS lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGMLFRMDTCVC, // net ID: DBGMLFRMDTCVC lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGMLFRMDTLPSTATUS, // net ID: DBGMLFRMDTLPSTATUS lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGMLFRMDUNRECTYPE, // net ID: DBGMLFRMDUNRECTYPE lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGPOISTLPSTATUS, // net ID: DBGPOISTLPSTATUS lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGRCVROVERFLOWSTATUS, // net ID: DBGRCVROVERFLOWSTATUS lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGREGDETECTEDCORRECTABLE, // net ID: DBGREGDETECTEDCORRECTABLE lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGREGDETECTEDFATAL, // net ID: DBGREGDETECTEDFATAL lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGREGDETECTEDNONFATAL, // net ID: DBGREGDETECTEDNONFATAL lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGREGDETECTEDUNSUPPORTED, // net ID: DBGREGDETECTEDUNSUPPORTED lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGRPLYROLLOVERSTATUS, // net ID: DBGRPLYROLLOVERSTATUS lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGRPLYTIMEOUTSTATUS, // net ID: DBGRPLYTIMEOUTSTATUS lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGURNOBARHIT, // net ID: DBGURNOBARHIT lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGURPOISCFGWR, // net ID: DBGURPOISCFGWR lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGURSTATUS, // net ID: DBGURSTATUS lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGURUNSUPMSG, // net ID: DBGURUNSUPMSG lsb: 0  msb: 0 OUTPUT
			NetFlow* MIMRXRADDR, // net ID: MIMRXRADDR lsb: 0  msb: 0 OUTPUT
			NetFlow* MIMRXREN, // net ID: MIMRXREN lsb: 0  msb: 0 OUTPUT
			NetFlow* MIMRXWADDR, // net ID: MIMRXWADDR lsb: 0  msb: 0 OUTPUT
			NetFlow* MIMRXWDATA, // net ID: MIMRXWDATA lsb: 0  msb: 0 OUTPUT
			NetFlow* MIMRXWEN, // net ID: MIMRXWEN lsb: 0  msb: 0 OUTPUT
			NetFlow* MIMTXRADDR, // net ID: MIMTXRADDR lsb: 0  msb: 0 OUTPUT
			NetFlow* MIMTXREN, // net ID: MIMTXREN lsb: 0  msb: 0 OUTPUT
			NetFlow* MIMTXWADDR, // net ID: MIMTXWADDR lsb: 0  msb: 0 OUTPUT
			NetFlow* MIMTXWDATA, // net ID: MIMTXWDATA lsb: 0  msb: 0 OUTPUT
			NetFlow* MIMTXWEN, // net ID: MIMTXWEN lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPEGTPOWERDOWNA, // net ID: PIPEGTPOWERDOWNA lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPEGTPOWERDOWNB, // net ID: PIPEGTPOWERDOWNB lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPEGTTXELECIDLEA, // net ID: PIPEGTTXELECIDLEA lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPEGTTXELECIDLEB, // net ID: PIPEGTTXELECIDLEB lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERXPOLARITYA, // net ID: PIPERXPOLARITYA lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERXPOLARITYB, // net ID: PIPERXPOLARITYB lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERXRESETA, // net ID: PIPERXRESETA lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERXRESETB, // net ID: PIPERXRESETB lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETXCHARDISPMODEA, // net ID: PIPETXCHARDISPMODEA lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETXCHARDISPMODEB, // net ID: PIPETXCHARDISPMODEB lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETXCHARDISPVALA, // net ID: PIPETXCHARDISPVALA lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETXCHARDISPVALB, // net ID: PIPETXCHARDISPVALB lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETXCHARISKA, // net ID: PIPETXCHARISKA lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETXCHARISKB, // net ID: PIPETXCHARISKB lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETXDATAA, // net ID: PIPETXDATAA lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETXDATAB, // net ID: PIPETXDATAB lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETXRCVRDETA, // net ID: PIPETXRCVRDETA lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETXRCVRDETB, // net ID: PIPETXRCVRDETB lsb: 0  msb: 0 OUTPUT
			NetFlow* RECEIVEDHOTRESET, // net ID: RECEIVEDHOTRESET lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNFCCPLD, // net ID: TRNFCCPLD lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNFCCPLH, // net ID: TRNFCCPLH lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNFCNPD, // net ID: TRNFCNPD lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNFCNPH, // net ID: TRNFCNPH lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNFCPD, // net ID: TRNFCPD lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNFCPH, // net ID: TRNFCPH lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNLNKUPN, // net ID: TRNLNKUPN lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNRBARHITN, // net ID: TRNRBARHITN lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNRD, // net ID: TRNRD lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNREOFN, // net ID: TRNREOFN lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNRERRFWDN, // net ID: TRNRERRFWDN lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNRSOFN, // net ID: TRNRSOFN lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNRSRCDSCN, // net ID: TRNRSRCDSCN lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNRSRCRDYN, // net ID: TRNRSRCRDYN lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNTBUFAV, // net ID: TRNTBUFAV lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNTCFGREQN, // net ID: TRNTCFGREQN lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNTDSTRDYN, // net ID: TRNTDSTRDYN lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNTERRDROPN, // net ID: TRNTERRDROPN lsb: 0  msb: 0 OUTPUT
			NetFlow* USERRSTN, // net ID: USERRSTN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVID, // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
			NetFlow* CFGDSN, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDWADDR, // net ID: CFGDWADDR lsb: 0  msb: 9 INPUT
			NetFlow* CFGERRCORN, // net ID: CFGERRCORN lsb: 0  msb: 0 INPUT
			NetFlow* CFGERRCPLABORTN, // net ID: CFGERRCPLABORTN lsb: 0  msb: 0 INPUT
			NetFlow* CFGERRCPLTIMEOUTN, // net ID: CFGERRCPLTIMEOUTN lsb: 0  msb: 0 INPUT
			NetFlow* CFGERRECRCN, // net ID: CFGERRECRCN lsb: 0  msb: 0 INPUT
			NetFlow* CFGERRLOCKEDN, // net ID: CFGERRLOCKEDN lsb: 0  msb: 0 INPUT
			NetFlow* CFGERRPOSTEDN, // net ID: CFGERRPOSTEDN lsb: 0  msb: 0 INPUT
			NetFlow* CFGERRTLPCPLHEADER, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRURN, // net ID: CFGERRURN lsb: 0  msb: 0 INPUT
			NetFlow* CFGINTERRUPTASSERTN, // net ID: CFGINTERRUPTASSERTN lsb: 0  msb: 0 INPUT
			NetFlow* CFGINTERRUPTDI, // net ID: CFGINTERRUPTDI lsb: 0  msb: 7 INPUT
			NetFlow* CFGINTERRUPTN, // net ID: CFGINTERRUPTN lsb: 0  msb: 0 INPUT
			NetFlow* CFGPMWAKEN, // net ID: CFGPMWAKEN lsb: 0  msb: 0 INPUT
			NetFlow* CFGRDENN, // net ID: CFGRDENN lsb: 0  msb: 0 INPUT
			NetFlow* CFGREVID, // net ID: CFGREVID lsb: 0  msb: 7 INPUT
			NetFlow* CFGSUBSYSID, // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
			NetFlow* CFGSUBSYSVENID, // net ID: CFGSUBSYSVENID lsb: 0  msb: 15 INPUT
			NetFlow* CFGTRNPENDINGN, // net ID: CFGTRNPENDINGN lsb: 0  msb: 0 INPUT
			NetFlow* CFGTURNOFFOKN, // net ID: CFGTURNOFFOKN lsb: 0  msb: 0 INPUT
			NetFlow* CFGVENID, // net ID: CFGVENID lsb: 0  msb: 15 INPUT
			NetFlow* CLOCKLOCKED, // net ID: CLOCKLOCKED lsb: 0  msb: 0 INPUT
			NetFlow* MGTCLK, // net ID: MGTCLK lsb: 0  msb: 0 INPUT
			NetFlow* MIMRXRDATA, // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
			NetFlow* MIMTXRDATA, // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			NetFlow* PIPEGTRESETDONEA, // net ID: PIPEGTRESETDONEA lsb: 0  msb: 0 INPUT
			NetFlow* PIPEGTRESETDONEB, // net ID: PIPEGTRESETDONEB lsb: 0  msb: 0 INPUT
			NetFlow* PIPEPHYSTATUSA, // net ID: PIPEPHYSTATUSA lsb: 0  msb: 0 INPUT
			NetFlow* PIPEPHYSTATUSB, // net ID: PIPEPHYSTATUSB lsb: 0  msb: 0 INPUT
			NetFlow* PIPERXCHARISKA, // net ID: PIPERXCHARISKA lsb: 0  msb: 1 INPUT
			NetFlow* PIPERXCHARISKB, // net ID: PIPERXCHARISKB lsb: 0  msb: 1 INPUT
			NetFlow* PIPERXDATAA, // net ID: PIPERXDATAA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERXDATAB, // net ID: PIPERXDATAB lsb: 0  msb: 15 INPUT
			NetFlow* PIPERXENTERELECIDLEA, // net ID: PIPERXENTERELECIDLEA lsb: 0  msb: 0 INPUT
			NetFlow* PIPERXENTERELECIDLEB, // net ID: PIPERXENTERELECIDLEB lsb: 0  msb: 0 INPUT
			NetFlow* PIPERXSTATUSA, // net ID: PIPERXSTATUSA lsb: 0  msb: 2 INPUT
			NetFlow* PIPERXSTATUSB, // net ID: PIPERXSTATUSB lsb: 0  msb: 2 INPUT
			NetFlow* SYSRESETN, // net ID: SYSRESETN lsb: 0  msb: 0 INPUT
			NetFlow* TRNFCSEL, // net ID: TRNFCSEL lsb: 0  msb: 2 INPUT
			NetFlow* TRNRDSTRDYN, // net ID: TRNRDSTRDYN lsb: 0  msb: 0 INPUT
			NetFlow* TRNRNPOKN, // net ID: TRNRNPOKN lsb: 0  msb: 0 INPUT
			NetFlow* TRNTCFGGNTN, // net ID: TRNTCFGGNTN lsb: 0  msb: 0 INPUT
			NetFlow* TRNTD, // net ID: TRNTD lsb: 0  msb: 31 INPUT
			NetFlow* TRNTEOFN, // net ID: TRNTEOFN lsb: 0  msb: 0 INPUT
			NetFlow* TRNTERRFWDN, // net ID: TRNTERRFWDN lsb: 0  msb: 0 INPUT
			NetFlow* TRNTSOFN, // net ID: TRNTSOFN lsb: 0  msb: 0 INPUT
			NetFlow* TRNTSRCDSCN, // net ID: TRNTSRCDSCN lsb: 0  msb: 0 INPUT
			NetFlow* TRNTSRCRDYN, // net ID: TRNTSRCRDYN lsb: 0  msb: 0 INPUT
			NetFlow* TRNTSTRN, // net ID: TRNTSTRN lsb: 0  msb: 0 INPUT
			NetFlow* USERCLK // net ID: USERCLK lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			this->BAR0 = BAR0; // Default: 32'h00000000
			this->BAR1 = BAR1; // Default: 32'h00000000
			this->BAR2 = BAR2; // Default: 32'h00000000
			this->BAR3 = BAR3; // Default: 32'h00000000
			this->BAR4 = BAR4; // Default: 32'h00000000
			this->BAR5 = BAR5; // Default: 32'h00000000
			this->CARDBUS_CIS_POINTER = CARDBUS_CIS_POINTER; // Default: 32'h00000000
			this->CLASS_CODE = CLASS_CODE; // Default: 24'h000000
			this->DEV_CAP_ENDPOINT_L0S_LATENCY = DEV_CAP_ENDPOINT_L0S_LATENCY; // Default: 7
			this->DEV_CAP_ENDPOINT_L1_LATENCY = DEV_CAP_ENDPOINT_L1_LATENCY; // Default: 7
			this->DEV_CAP_EXT_TAG_SUPPORTED = DEV_CAP_EXT_TAG_SUPPORTED; // Default: "FALSE"
			this->DEV_CAP_MAX_PAYLOAD_SUPPORTED = DEV_CAP_MAX_PAYLOAD_SUPPORTED; // Default: 2
			this->DEV_CAP_PHANTOM_FUNCTIONS_SUPPORT = DEV_CAP_PHANTOM_FUNCTIONS_SUPPORT; // Default: 0
			this->DEV_CAP_ROLE_BASED_ERROR = DEV_CAP_ROLE_BASED_ERROR; // Default: "TRUE"
			this->DISABLE_BAR_FILTERING = DISABLE_BAR_FILTERING; // Default: "FALSE"
			this->DISABLE_ID_CHECK = DISABLE_ID_CHECK; // Default: "FALSE"
			this->DISABLE_SCRAMBLING = DISABLE_SCRAMBLING; // Default: "FALSE"
			this->ENABLE_RX_TD_ECRC_TRIM = ENABLE_RX_TD_ECRC_TRIM; // Default: "FALSE"
			this->EXPANSION_ROM = EXPANSION_ROM; // Default: 22'h000000
			this->FAST_TRAIN = FAST_TRAIN; // Default: "FALSE"
			this->GTP_SEL = GTP_SEL; // Default: 0
			this->LINK_CAP_ASPM_SUPPORT = LINK_CAP_ASPM_SUPPORT; // Default: 1
			this->LINK_CAP_L0S_EXIT_LATENCY = LINK_CAP_L0S_EXIT_LATENCY; // Default: 7
			this->LINK_CAP_L1_EXIT_LATENCY = LINK_CAP_L1_EXIT_LATENCY; // Default: 7
			this->LINK_STATUS_SLOT_CLOCK_CONFIG = LINK_STATUS_SLOT_CLOCK_CONFIG; // Default: "FALSE"
			this->LL_ACK_TIMEOUT = LL_ACK_TIMEOUT; // Default: 15'h0204
			this->LL_ACK_TIMEOUT_EN = LL_ACK_TIMEOUT_EN; // Default: "FALSE"
			this->LL_REPLAY_TIMEOUT = LL_REPLAY_TIMEOUT; // Default: 15'h060D
			this->LL_REPLAY_TIMEOUT_EN = LL_REPLAY_TIMEOUT_EN; // Default: "FALSE"
			this->MSI_CAP_MULTIMSGCAP = MSI_CAP_MULTIMSGCAP; // Default: 0
			this->MSI_CAP_MULTIMSG_EXTENSION = MSI_CAP_MULTIMSG_EXTENSION; // Default: 0
			this->PCIE_CAP_CAPABILITY_VERSION = PCIE_CAP_CAPABILITY_VERSION; // Default: 4'h1
			this->PCIE_CAP_DEVICE_PORT_TYPE = PCIE_CAP_DEVICE_PORT_TYPE; // Default: 4'h0
			this->PCIE_CAP_INT_MSG_NUM = PCIE_CAP_INT_MSG_NUM; // Default: 5'b00000
			this->PCIE_CAP_SLOT_IMPLEMENTED = PCIE_CAP_SLOT_IMPLEMENTED; // Default: "FALSE"
			this->PCIE_GENERIC = PCIE_GENERIC; // Default: 12'h000
			this->PLM_AUTO_CONFIG = PLM_AUTO_CONFIG; // Default: "FALSE"
			this->PM_CAP_AUXCURRENT = PM_CAP_AUXCURRENT; // Default: 0
			this->PM_CAP_D1SUPPORT = PM_CAP_D1SUPPORT; // Default: "TRUE"
			this->PM_CAP_D2SUPPORT = PM_CAP_D2SUPPORT; // Default: "TRUE"
			this->PM_CAP_DSI = PM_CAP_DSI; // Default: "FALSE"
			this->PM_CAP_PMESUPPORT = PM_CAP_PMESUPPORT; // Default: 5'b01111
			this->PM_CAP_PME_CLOCK = PM_CAP_PME_CLOCK; // Default: "FALSE"
			this->PM_CAP_VERSION = PM_CAP_VERSION; // Default: 3
			this->PM_DATA0 = PM_DATA0; // Default: 8'h1E
			this->PM_DATA1 = PM_DATA1; // Default: 8'h1E
			this->PM_DATA2 = PM_DATA2; // Default: 8'h1E
			this->PM_DATA3 = PM_DATA3; // Default: 8'h1E
			this->PM_DATA4 = PM_DATA4; // Default: 8'h1E
			this->PM_DATA5 = PM_DATA5; // Default: 8'h1E
			this->PM_DATA6 = PM_DATA6; // Default: 8'h1E
			this->PM_DATA7 = PM_DATA7; // Default: 8'h1E
			this->PM_DATA_SCALE0 = PM_DATA_SCALE0; // Default: 2'b01
			this->PM_DATA_SCALE1 = PM_DATA_SCALE1; // Default: 2'b01
			this->PM_DATA_SCALE2 = PM_DATA_SCALE2; // Default: 2'b01
			this->PM_DATA_SCALE3 = PM_DATA_SCALE3; // Default: 2'b01
			this->PM_DATA_SCALE4 = PM_DATA_SCALE4; // Default: 2'b01
			this->PM_DATA_SCALE5 = PM_DATA_SCALE5; // Default: 2'b01
			this->PM_DATA_SCALE6 = PM_DATA_SCALE6; // Default: 2'b01
			this->PM_DATA_SCALE7 = PM_DATA_SCALE7; // Default: 2'b01
			this->SIM_VERSION = SIM_VERSION; // Default: "1.0"
			this->SLOT_CAP_ATT_BUTTON_PRESENT = SLOT_CAP_ATT_BUTTON_PRESENT; // Default: "FALSE"
			this->SLOT_CAP_ATT_INDICATOR_PRESENT = SLOT_CAP_ATT_INDICATOR_PRESENT; // Default: "FALSE"
			this->SLOT_CAP_POWER_INDICATOR_PRESENT = SLOT_CAP_POWER_INDICATOR_PRESENT; // Default: "FALSE"
			this->TL_RX_RAM_RADDR_LATENCY = TL_RX_RAM_RADDR_LATENCY; // Default: 1
			this->TL_RX_RAM_RDATA_LATENCY = TL_RX_RAM_RDATA_LATENCY; // Default: 2
			this->TL_RX_RAM_WRITE_LATENCY = TL_RX_RAM_WRITE_LATENCY; // Default: 0
			this->TL_TFC_DISABLE = TL_TFC_DISABLE; // Default: "FALSE"
			this->TL_TX_CHECKS_DISABLE = TL_TX_CHECKS_DISABLE; // Default: "FALSE"
			this->TL_TX_RAM_RADDR_LATENCY = TL_TX_RAM_RADDR_LATENCY; // Default: 0
			this->TL_TX_RAM_RDATA_LATENCY = TL_TX_RAM_RDATA_LATENCY; // Default: 2
			this->USR_CFG = USR_CFG; // Default: "FALSE"
			this->USR_EXT_CFG = USR_EXT_CFG; // Default: "FALSE"
			this->VC0_CPL_INFINITE = VC0_CPL_INFINITE; // Default: "TRUE"
			this->VC0_RX_RAM_LIMIT = VC0_RX_RAM_LIMIT; // Default: 12'h01E
			this->VC0_TOTAL_CREDITS_CD = VC0_TOTAL_CREDITS_CD; // Default: 104
			this->VC0_TOTAL_CREDITS_CH = VC0_TOTAL_CREDITS_CH; // Default: 36
			this->VC0_TOTAL_CREDITS_NPH = VC0_TOTAL_CREDITS_NPH; // Default: 8
			this->VC0_TOTAL_CREDITS_PD = VC0_TOTAL_CREDITS_PD; // Default: 288
			this->VC0_TOTAL_CREDITS_PH = VC0_TOTAL_CREDITS_PH; // Default: 32
			this->VC0_TX_LASTPACKET = VC0_TX_LASTPACKET; // Default: 31
			//Verilog Ports in definition order:
			this->CFGBUSNUMBER = CFGBUSNUMBER; // net ID: CFGBUSNUMBER lsb: 0  msb: 0 OUTPUT
			this->CFGCOMMANDBUSMASTERENABLE = CFGCOMMANDBUSMASTERENABLE; // net ID: CFGCOMMANDBUSMASTERENABLE lsb: 0  msb: 0 OUTPUT
			this->CFGCOMMANDINTERRUPTDISABLE = CFGCOMMANDINTERRUPTDISABLE; // net ID: CFGCOMMANDINTERRUPTDISABLE lsb: 0  msb: 0 OUTPUT
			this->CFGCOMMANDIOENABLE = CFGCOMMANDIOENABLE; // net ID: CFGCOMMANDIOENABLE lsb: 0  msb: 0 OUTPUT
			this->CFGCOMMANDMEMENABLE = CFGCOMMANDMEMENABLE; // net ID: CFGCOMMANDMEMENABLE lsb: 0  msb: 0 OUTPUT
			this->CFGCOMMANDSERREN = CFGCOMMANDSERREN; // net ID: CFGCOMMANDSERREN lsb: 0  msb: 0 OUTPUT
			this->CFGDEVCONTROLAUXPOWEREN = CFGDEVCONTROLAUXPOWEREN; // net ID: CFGDEVCONTROLAUXPOWEREN lsb: 0  msb: 0 OUTPUT
			this->CFGDEVCONTROLCORRERRREPORTINGEN = CFGDEVCONTROLCORRERRREPORTINGEN; // net ID: CFGDEVCONTROLCORRERRREPORTINGEN lsb: 0  msb: 0 OUTPUT
			this->CFGDEVCONTROLENABLERO = CFGDEVCONTROLENABLERO; // net ID: CFGDEVCONTROLENABLERO lsb: 0  msb: 0 OUTPUT
			this->CFGDEVCONTROLEXTTAGEN = CFGDEVCONTROLEXTTAGEN; // net ID: CFGDEVCONTROLEXTTAGEN lsb: 0  msb: 0 OUTPUT
			this->CFGDEVCONTROLFATALERRREPORTINGEN = CFGDEVCONTROLFATALERRREPORTINGEN; // net ID: CFGDEVCONTROLFATALERRREPORTINGEN lsb: 0  msb: 0 OUTPUT
			this->CFGDEVCONTROLMAXPAYLOAD = CFGDEVCONTROLMAXPAYLOAD; // net ID: CFGDEVCONTROLMAXPAYLOAD lsb: 0  msb: 0 OUTPUT
			this->CFGDEVCONTROLMAXREADREQ = CFGDEVCONTROLMAXREADREQ; // net ID: CFGDEVCONTROLMAXREADREQ lsb: 0  msb: 0 OUTPUT
			this->CFGDEVCONTROLNONFATALREPORTINGEN = CFGDEVCONTROLNONFATALREPORTINGEN; // net ID: CFGDEVCONTROLNONFATALREPORTINGEN lsb: 0  msb: 0 OUTPUT
			this->CFGDEVCONTROLNOSNOOPEN = CFGDEVCONTROLNOSNOOPEN; // net ID: CFGDEVCONTROLNOSNOOPEN lsb: 0  msb: 0 OUTPUT
			this->CFGDEVCONTROLPHANTOMEN = CFGDEVCONTROLPHANTOMEN; // net ID: CFGDEVCONTROLPHANTOMEN lsb: 0  msb: 0 OUTPUT
			this->CFGDEVCONTROLURERRREPORTINGEN = CFGDEVCONTROLURERRREPORTINGEN; // net ID: CFGDEVCONTROLURERRREPORTINGEN lsb: 0  msb: 0 OUTPUT
			this->CFGDEVICENUMBER = CFGDEVICENUMBER; // net ID: CFGDEVICENUMBER lsb: 0  msb: 0 OUTPUT
			this->CFGDEVSTATUSCORRERRDETECTED = CFGDEVSTATUSCORRERRDETECTED; // net ID: CFGDEVSTATUSCORRERRDETECTED lsb: 0  msb: 0 OUTPUT
			this->CFGDEVSTATUSFATALERRDETECTED = CFGDEVSTATUSFATALERRDETECTED; // net ID: CFGDEVSTATUSFATALERRDETECTED lsb: 0  msb: 0 OUTPUT
			this->CFGDEVSTATUSNONFATALERRDETECTED = CFGDEVSTATUSNONFATALERRDETECTED; // net ID: CFGDEVSTATUSNONFATALERRDETECTED lsb: 0  msb: 0 OUTPUT
			this->CFGDEVSTATUSURDETECTED = CFGDEVSTATUSURDETECTED; // net ID: CFGDEVSTATUSURDETECTED lsb: 0  msb: 0 OUTPUT
			this->CFGDO = CFGDO; // net ID: CFGDO lsb: 0  msb: 0 OUTPUT
			this->CFGERRCPLRDYN = CFGERRCPLRDYN; // net ID: CFGERRCPLRDYN lsb: 0  msb: 0 OUTPUT
			this->CFGFUNCTIONNUMBER = CFGFUNCTIONNUMBER; // net ID: CFGFUNCTIONNUMBER lsb: 0  msb: 0 OUTPUT
			this->CFGINTERRUPTDO = CFGINTERRUPTDO; // net ID: CFGINTERRUPTDO lsb: 0  msb: 0 OUTPUT
			this->CFGINTERRUPTMMENABLE = CFGINTERRUPTMMENABLE; // net ID: CFGINTERRUPTMMENABLE lsb: 0  msb: 0 OUTPUT
			this->CFGINTERRUPTMSIENABLE = CFGINTERRUPTMSIENABLE; // net ID: CFGINTERRUPTMSIENABLE lsb: 0  msb: 0 OUTPUT
			this->CFGINTERRUPTRDYN = CFGINTERRUPTRDYN; // net ID: CFGINTERRUPTRDYN lsb: 0  msb: 0 OUTPUT
			this->CFGLINKCONTOLRCB = CFGLINKCONTOLRCB; // net ID: CFGLINKCONTOLRCB lsb: 0  msb: 0 OUTPUT
			this->CFGLINKCONTROLASPMCONTROL = CFGLINKCONTROLASPMCONTROL; // net ID: CFGLINKCONTROLASPMCONTROL lsb: 0  msb: 0 OUTPUT
			this->CFGLINKCONTROLCOMMONCLOCK = CFGLINKCONTROLCOMMONCLOCK; // net ID: CFGLINKCONTROLCOMMONCLOCK lsb: 0  msb: 0 OUTPUT
			this->CFGLINKCONTROLEXTENDEDSYNC = CFGLINKCONTROLEXTENDEDSYNC; // net ID: CFGLINKCONTROLEXTENDEDSYNC lsb: 0  msb: 0 OUTPUT
			this->CFGLTSSMSTATE = CFGLTSSMSTATE; // net ID: CFGLTSSMSTATE lsb: 0  msb: 0 OUTPUT
			this->CFGPCIELINKSTATEN = CFGPCIELINKSTATEN; // net ID: CFGPCIELINKSTATEN lsb: 0  msb: 0 OUTPUT
			this->CFGRDWRDONEN = CFGRDWRDONEN; // net ID: CFGRDWRDONEN lsb: 0  msb: 0 OUTPUT
			this->CFGTOTURNOFFN = CFGTOTURNOFFN; // net ID: CFGTOTURNOFFN lsb: 0  msb: 0 OUTPUT
			this->DBGBADDLLPSTATUS = DBGBADDLLPSTATUS; // net ID: DBGBADDLLPSTATUS lsb: 0  msb: 0 OUTPUT
			this->DBGBADTLPLCRC = DBGBADTLPLCRC; // net ID: DBGBADTLPLCRC lsb: 0  msb: 0 OUTPUT
			this->DBGBADTLPSEQNUM = DBGBADTLPSEQNUM; // net ID: DBGBADTLPSEQNUM lsb: 0  msb: 0 OUTPUT
			this->DBGBADTLPSTATUS = DBGBADTLPSTATUS; // net ID: DBGBADTLPSTATUS lsb: 0  msb: 0 OUTPUT
			this->DBGDLPROTOCOLSTATUS = DBGDLPROTOCOLSTATUS; // net ID: DBGDLPROTOCOLSTATUS lsb: 0  msb: 0 OUTPUT
			this->DBGFCPROTOCOLERRSTATUS = DBGFCPROTOCOLERRSTATUS; // net ID: DBGFCPROTOCOLERRSTATUS lsb: 0  msb: 0 OUTPUT
			this->DBGMLFRMDLENGTH = DBGMLFRMDLENGTH; // net ID: DBGMLFRMDLENGTH lsb: 0  msb: 0 OUTPUT
			this->DBGMLFRMDMPS = DBGMLFRMDMPS; // net ID: DBGMLFRMDMPS lsb: 0  msb: 0 OUTPUT
			this->DBGMLFRMDTCVC = DBGMLFRMDTCVC; // net ID: DBGMLFRMDTCVC lsb: 0  msb: 0 OUTPUT
			this->DBGMLFRMDTLPSTATUS = DBGMLFRMDTLPSTATUS; // net ID: DBGMLFRMDTLPSTATUS lsb: 0  msb: 0 OUTPUT
			this->DBGMLFRMDUNRECTYPE = DBGMLFRMDUNRECTYPE; // net ID: DBGMLFRMDUNRECTYPE lsb: 0  msb: 0 OUTPUT
			this->DBGPOISTLPSTATUS = DBGPOISTLPSTATUS; // net ID: DBGPOISTLPSTATUS lsb: 0  msb: 0 OUTPUT
			this->DBGRCVROVERFLOWSTATUS = DBGRCVROVERFLOWSTATUS; // net ID: DBGRCVROVERFLOWSTATUS lsb: 0  msb: 0 OUTPUT
			this->DBGREGDETECTEDCORRECTABLE = DBGREGDETECTEDCORRECTABLE; // net ID: DBGREGDETECTEDCORRECTABLE lsb: 0  msb: 0 OUTPUT
			this->DBGREGDETECTEDFATAL = DBGREGDETECTEDFATAL; // net ID: DBGREGDETECTEDFATAL lsb: 0  msb: 0 OUTPUT
			this->DBGREGDETECTEDNONFATAL = DBGREGDETECTEDNONFATAL; // net ID: DBGREGDETECTEDNONFATAL lsb: 0  msb: 0 OUTPUT
			this->DBGREGDETECTEDUNSUPPORTED = DBGREGDETECTEDUNSUPPORTED; // net ID: DBGREGDETECTEDUNSUPPORTED lsb: 0  msb: 0 OUTPUT
			this->DBGRPLYROLLOVERSTATUS = DBGRPLYROLLOVERSTATUS; // net ID: DBGRPLYROLLOVERSTATUS lsb: 0  msb: 0 OUTPUT
			this->DBGRPLYTIMEOUTSTATUS = DBGRPLYTIMEOUTSTATUS; // net ID: DBGRPLYTIMEOUTSTATUS lsb: 0  msb: 0 OUTPUT
			this->DBGURNOBARHIT = DBGURNOBARHIT; // net ID: DBGURNOBARHIT lsb: 0  msb: 0 OUTPUT
			this->DBGURPOISCFGWR = DBGURPOISCFGWR; // net ID: DBGURPOISCFGWR lsb: 0  msb: 0 OUTPUT
			this->DBGURSTATUS = DBGURSTATUS; // net ID: DBGURSTATUS lsb: 0  msb: 0 OUTPUT
			this->DBGURUNSUPMSG = DBGURUNSUPMSG; // net ID: DBGURUNSUPMSG lsb: 0  msb: 0 OUTPUT
			this->MIMRXRADDR = MIMRXRADDR; // net ID: MIMRXRADDR lsb: 0  msb: 0 OUTPUT
			this->MIMRXREN = MIMRXREN; // net ID: MIMRXREN lsb: 0  msb: 0 OUTPUT
			this->MIMRXWADDR = MIMRXWADDR; // net ID: MIMRXWADDR lsb: 0  msb: 0 OUTPUT
			this->MIMRXWDATA = MIMRXWDATA; // net ID: MIMRXWDATA lsb: 0  msb: 0 OUTPUT
			this->MIMRXWEN = MIMRXWEN; // net ID: MIMRXWEN lsb: 0  msb: 0 OUTPUT
			this->MIMTXRADDR = MIMTXRADDR; // net ID: MIMTXRADDR lsb: 0  msb: 0 OUTPUT
			this->MIMTXREN = MIMTXREN; // net ID: MIMTXREN lsb: 0  msb: 0 OUTPUT
			this->MIMTXWADDR = MIMTXWADDR; // net ID: MIMTXWADDR lsb: 0  msb: 0 OUTPUT
			this->MIMTXWDATA = MIMTXWDATA; // net ID: MIMTXWDATA lsb: 0  msb: 0 OUTPUT
			this->MIMTXWEN = MIMTXWEN; // net ID: MIMTXWEN lsb: 0  msb: 0 OUTPUT
			this->PIPEGTPOWERDOWNA = PIPEGTPOWERDOWNA; // net ID: PIPEGTPOWERDOWNA lsb: 0  msb: 0 OUTPUT
			this->PIPEGTPOWERDOWNB = PIPEGTPOWERDOWNB; // net ID: PIPEGTPOWERDOWNB lsb: 0  msb: 0 OUTPUT
			this->PIPEGTTXELECIDLEA = PIPEGTTXELECIDLEA; // net ID: PIPEGTTXELECIDLEA lsb: 0  msb: 0 OUTPUT
			this->PIPEGTTXELECIDLEB = PIPEGTTXELECIDLEB; // net ID: PIPEGTTXELECIDLEB lsb: 0  msb: 0 OUTPUT
			this->PIPERXPOLARITYA = PIPERXPOLARITYA; // net ID: PIPERXPOLARITYA lsb: 0  msb: 0 OUTPUT
			this->PIPERXPOLARITYB = PIPERXPOLARITYB; // net ID: PIPERXPOLARITYB lsb: 0  msb: 0 OUTPUT
			this->PIPERXRESETA = PIPERXRESETA; // net ID: PIPERXRESETA lsb: 0  msb: 0 OUTPUT
			this->PIPERXRESETB = PIPERXRESETB; // net ID: PIPERXRESETB lsb: 0  msb: 0 OUTPUT
			this->PIPETXCHARDISPMODEA = PIPETXCHARDISPMODEA; // net ID: PIPETXCHARDISPMODEA lsb: 0  msb: 0 OUTPUT
			this->PIPETXCHARDISPMODEB = PIPETXCHARDISPMODEB; // net ID: PIPETXCHARDISPMODEB lsb: 0  msb: 0 OUTPUT
			this->PIPETXCHARDISPVALA = PIPETXCHARDISPVALA; // net ID: PIPETXCHARDISPVALA lsb: 0  msb: 0 OUTPUT
			this->PIPETXCHARDISPVALB = PIPETXCHARDISPVALB; // net ID: PIPETXCHARDISPVALB lsb: 0  msb: 0 OUTPUT
			this->PIPETXCHARISKA = PIPETXCHARISKA; // net ID: PIPETXCHARISKA lsb: 0  msb: 0 OUTPUT
			this->PIPETXCHARISKB = PIPETXCHARISKB; // net ID: PIPETXCHARISKB lsb: 0  msb: 0 OUTPUT
			this->PIPETXDATAA = PIPETXDATAA; // net ID: PIPETXDATAA lsb: 0  msb: 0 OUTPUT
			this->PIPETXDATAB = PIPETXDATAB; // net ID: PIPETXDATAB lsb: 0  msb: 0 OUTPUT
			this->PIPETXRCVRDETA = PIPETXRCVRDETA; // net ID: PIPETXRCVRDETA lsb: 0  msb: 0 OUTPUT
			this->PIPETXRCVRDETB = PIPETXRCVRDETB; // net ID: PIPETXRCVRDETB lsb: 0  msb: 0 OUTPUT
			this->RECEIVEDHOTRESET = RECEIVEDHOTRESET; // net ID: RECEIVEDHOTRESET lsb: 0  msb: 0 OUTPUT
			this->TRNFCCPLD = TRNFCCPLD; // net ID: TRNFCCPLD lsb: 0  msb: 0 OUTPUT
			this->TRNFCCPLH = TRNFCCPLH; // net ID: TRNFCCPLH lsb: 0  msb: 0 OUTPUT
			this->TRNFCNPD = TRNFCNPD; // net ID: TRNFCNPD lsb: 0  msb: 0 OUTPUT
			this->TRNFCNPH = TRNFCNPH; // net ID: TRNFCNPH lsb: 0  msb: 0 OUTPUT
			this->TRNFCPD = TRNFCPD; // net ID: TRNFCPD lsb: 0  msb: 0 OUTPUT
			this->TRNFCPH = TRNFCPH; // net ID: TRNFCPH lsb: 0  msb: 0 OUTPUT
			this->TRNLNKUPN = TRNLNKUPN; // net ID: TRNLNKUPN lsb: 0  msb: 0 OUTPUT
			this->TRNRBARHITN = TRNRBARHITN; // net ID: TRNRBARHITN lsb: 0  msb: 0 OUTPUT
			this->TRNRD = TRNRD; // net ID: TRNRD lsb: 0  msb: 0 OUTPUT
			this->TRNREOFN = TRNREOFN; // net ID: TRNREOFN lsb: 0  msb: 0 OUTPUT
			this->TRNRERRFWDN = TRNRERRFWDN; // net ID: TRNRERRFWDN lsb: 0  msb: 0 OUTPUT
			this->TRNRSOFN = TRNRSOFN; // net ID: TRNRSOFN lsb: 0  msb: 0 OUTPUT
			this->TRNRSRCDSCN = TRNRSRCDSCN; // net ID: TRNRSRCDSCN lsb: 0  msb: 0 OUTPUT
			this->TRNRSRCRDYN = TRNRSRCRDYN; // net ID: TRNRSRCRDYN lsb: 0  msb: 0 OUTPUT
			this->TRNTBUFAV = TRNTBUFAV; // net ID: TRNTBUFAV lsb: 0  msb: 0 OUTPUT
			this->TRNTCFGREQN = TRNTCFGREQN; // net ID: TRNTCFGREQN lsb: 0  msb: 0 OUTPUT
			this->TRNTDSTRDYN = TRNTDSTRDYN; // net ID: TRNTDSTRDYN lsb: 0  msb: 0 OUTPUT
			this->TRNTERRDROPN = TRNTERRDROPN; // net ID: TRNTERRDROPN lsb: 0  msb: 0 OUTPUT
			this->USERRSTN = USERRSTN; // net ID: USERRSTN lsb: 0  msb: 0 OUTPUT
			this->CFGDEVID = CFGDEVID; // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
			this->CFGDSN = CFGDSN; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDWADDR = CFGDWADDR; // net ID: CFGDWADDR lsb: 0  msb: 9 INPUT
			this->CFGERRCORN = CFGERRCORN; // net ID: CFGERRCORN lsb: 0  msb: 0 INPUT
			this->CFGERRCPLABORTN = CFGERRCPLABORTN; // net ID: CFGERRCPLABORTN lsb: 0  msb: 0 INPUT
			this->CFGERRCPLTIMEOUTN = CFGERRCPLTIMEOUTN; // net ID: CFGERRCPLTIMEOUTN lsb: 0  msb: 0 INPUT
			this->CFGERRECRCN = CFGERRECRCN; // net ID: CFGERRECRCN lsb: 0  msb: 0 INPUT
			this->CFGERRLOCKEDN = CFGERRLOCKEDN; // net ID: CFGERRLOCKEDN lsb: 0  msb: 0 INPUT
			this->CFGERRPOSTEDN = CFGERRPOSTEDN; // net ID: CFGERRPOSTEDN lsb: 0  msb: 0 INPUT
			this->CFGERRTLPCPLHEADER = CFGERRTLPCPLHEADER; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRURN = CFGERRURN; // net ID: CFGERRURN lsb: 0  msb: 0 INPUT
			this->CFGINTERRUPTASSERTN = CFGINTERRUPTASSERTN; // net ID: CFGINTERRUPTASSERTN lsb: 0  msb: 0 INPUT
			this->CFGINTERRUPTDI = CFGINTERRUPTDI; // net ID: CFGINTERRUPTDI lsb: 0  msb: 7 INPUT
			this->CFGINTERRUPTN = CFGINTERRUPTN; // net ID: CFGINTERRUPTN lsb: 0  msb: 0 INPUT
			this->CFGPMWAKEN = CFGPMWAKEN; // net ID: CFGPMWAKEN lsb: 0  msb: 0 INPUT
			this->CFGRDENN = CFGRDENN; // net ID: CFGRDENN lsb: 0  msb: 0 INPUT
			this->CFGREVID = CFGREVID; // net ID: CFGREVID lsb: 0  msb: 7 INPUT
			this->CFGSUBSYSID = CFGSUBSYSID; // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
			this->CFGSUBSYSVENID = CFGSUBSYSVENID; // net ID: CFGSUBSYSVENID lsb: 0  msb: 15 INPUT
			this->CFGTRNPENDINGN = CFGTRNPENDINGN; // net ID: CFGTRNPENDINGN lsb: 0  msb: 0 INPUT
			this->CFGTURNOFFOKN = CFGTURNOFFOKN; // net ID: CFGTURNOFFOKN lsb: 0  msb: 0 INPUT
			this->CFGVENID = CFGVENID; // net ID: CFGVENID lsb: 0  msb: 15 INPUT
			this->CLOCKLOCKED = CLOCKLOCKED; // net ID: CLOCKLOCKED lsb: 0  msb: 0 INPUT
			this->MGTCLK = MGTCLK; // net ID: MGTCLK lsb: 0  msb: 0 INPUT
			this->MIMRXRDATA = MIMRXRDATA; // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
			this->MIMTXRDATA = MIMTXRDATA; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			this->PIPEGTRESETDONEA = PIPEGTRESETDONEA; // net ID: PIPEGTRESETDONEA lsb: 0  msb: 0 INPUT
			this->PIPEGTRESETDONEB = PIPEGTRESETDONEB; // net ID: PIPEGTRESETDONEB lsb: 0  msb: 0 INPUT
			this->PIPEPHYSTATUSA = PIPEPHYSTATUSA; // net ID: PIPEPHYSTATUSA lsb: 0  msb: 0 INPUT
			this->PIPEPHYSTATUSB = PIPEPHYSTATUSB; // net ID: PIPEPHYSTATUSB lsb: 0  msb: 0 INPUT
			this->PIPERXCHARISKA = PIPERXCHARISKA; // net ID: PIPERXCHARISKA lsb: 0  msb: 1 INPUT
			this->PIPERXCHARISKB = PIPERXCHARISKB; // net ID: PIPERXCHARISKB lsb: 0  msb: 1 INPUT
			this->PIPERXDATAA = PIPERXDATAA; // net ID: PIPERXDATAA lsb: 0  msb: 15 INPUT
			this->PIPERXDATAB = PIPERXDATAB; // net ID: PIPERXDATAB lsb: 0  msb: 15 INPUT
			this->PIPERXENTERELECIDLEA = PIPERXENTERELECIDLEA; // net ID: PIPERXENTERELECIDLEA lsb: 0  msb: 0 INPUT
			this->PIPERXENTERELECIDLEB = PIPERXENTERELECIDLEB; // net ID: PIPERXENTERELECIDLEB lsb: 0  msb: 0 INPUT
			this->PIPERXSTATUSA = PIPERXSTATUSA; // net ID: PIPERXSTATUSA lsb: 0  msb: 2 INPUT
			this->PIPERXSTATUSB = PIPERXSTATUSB; // net ID: PIPERXSTATUSB lsb: 0  msb: 2 INPUT
			this->SYSRESETN = SYSRESETN; // net ID: SYSRESETN lsb: 0  msb: 0 INPUT
			this->TRNFCSEL = TRNFCSEL; // net ID: TRNFCSEL lsb: 0  msb: 2 INPUT
			this->TRNRDSTRDYN = TRNRDSTRDYN; // net ID: TRNRDSTRDYN lsb: 0  msb: 0 INPUT
			this->TRNRNPOKN = TRNRNPOKN; // net ID: TRNRNPOKN lsb: 0  msb: 0 INPUT
			this->TRNTCFGGNTN = TRNTCFGGNTN; // net ID: TRNTCFGGNTN lsb: 0  msb: 0 INPUT
			this->TRNTD = TRNTD; // net ID: TRNTD lsb: 0  msb: 31 INPUT
			this->TRNTEOFN = TRNTEOFN; // net ID: TRNTEOFN lsb: 0  msb: 0 INPUT
			this->TRNTERRFWDN = TRNTERRFWDN; // net ID: TRNTERRFWDN lsb: 0  msb: 0 INPUT
			this->TRNTSOFN = TRNTSOFN; // net ID: TRNTSOFN lsb: 0  msb: 0 INPUT
			this->TRNTSRCDSCN = TRNTSRCDSCN; // net ID: TRNTSRCDSCN lsb: 0  msb: 0 INPUT
			this->TRNTSRCRDYN = TRNTSRCRDYN; // net ID: TRNTSRCRDYN lsb: 0  msb: 0 INPUT
			this->TRNTSTRN = TRNTSTRN; // net ID: TRNTSTRN lsb: 0  msb: 0 INPUT
			this->USERCLK = USERCLK; // net ID: USERCLK lsb: 0  msb: 0 INPUT
			
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
