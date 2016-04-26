/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_PCIE_A1_H
#define X_PCIE_A1_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_PCIE_A1: public Primitive{

		//Verilog Parameters:
		parameter_string_t LOC;
		parameter_int_t BAR0;
		parameter_int_t BAR1;
		parameter_int_t BAR2;
		parameter_int_t BAR3;
		parameter_int_t BAR4;
		parameter_int_t BAR5;
		parameter_int_t CARDBUS_CIS_POINTER;
		parameter_int_t CLASS_CODE;
		parameter_int_t DEV_CAP_ENDPOINT_L0S_LATENCY;
		parameter_int_t DEV_CAP_ENDPOINT_L1_LATENCY;
		parameter_enum_t DEV_CAP_EXT_TAG_SUPPORTED;
		parameter_int_t DEV_CAP_MAX_PAYLOAD_SUPPORTED;
		parameter_int_t DEV_CAP_PHANTOM_FUNCTIONS_SUPPORT;
		parameter_enum_t DEV_CAP_ROLE_BASED_ERROR;
		parameter_enum_t DISABLE_BAR_FILTERING;
		parameter_enum_t DISABLE_ID_CHECK;
		parameter_enum_t DISABLE_SCRAMBLING;
		parameter_enum_t ENABLE_RX_TD_ECRC_TRIM;
		parameter_int_t EXPANSION_ROM;
		parameter_enum_t FAST_TRAIN;
		parameter_int_t GTP_SEL;
		parameter_int_t LINK_CAP_ASPM_SUPPORT;
		parameter_int_t LINK_CAP_L0S_EXIT_LATENCY;
		parameter_int_t LINK_CAP_L1_EXIT_LATENCY;
		parameter_enum_t LINK_STATUS_SLOT_CLOCK_CONFIG;
		parameter_int_t LL_ACK_TIMEOUT;
		parameter_enum_t LL_ACK_TIMEOUT_EN;
		parameter_int_t LL_REPLAY_TIMEOUT;
		parameter_enum_t LL_REPLAY_TIMEOUT_EN;
		parameter_int_t MSI_CAP_MULTIMSGCAP;
		parameter_int_t MSI_CAP_MULTIMSG_EXTENSION;
		parameter_int_t PCIE_CAP_CAPABILITY_VERSION;
		parameter_int_t PCIE_CAP_DEVICE_PORT_TYPE;
		parameter_int_t PCIE_CAP_INT_MSG_NUM;
		parameter_enum_t PCIE_CAP_SLOT_IMPLEMENTED;
		parameter_int_t PCIE_GENERIC;
		parameter_enum_t PLM_AUTO_CONFIG;
		parameter_int_t PM_CAP_AUXCURRENT;
		parameter_enum_t PM_CAP_D1SUPPORT;
		parameter_enum_t PM_CAP_D2SUPPORT;
		parameter_enum_t PM_CAP_DSI;
		parameter_int_t PM_CAP_PMESUPPORT;
		parameter_enum_t PM_CAP_PME_CLOCK;
		parameter_int_t PM_CAP_VERSION;
		parameter_int_t PM_DATA0;
		parameter_int_t PM_DATA1;
		parameter_int_t PM_DATA2;
		parameter_int_t PM_DATA3;
		parameter_int_t PM_DATA4;
		parameter_int_t PM_DATA5;
		parameter_int_t PM_DATA6;
		parameter_int_t PM_DATA7;
		parameter_int_t PM_DATA_SCALE0;
		parameter_int_t PM_DATA_SCALE1;
		parameter_int_t PM_DATA_SCALE2;
		parameter_int_t PM_DATA_SCALE3;
		parameter_int_t PM_DATA_SCALE4;
		parameter_int_t PM_DATA_SCALE5;
		parameter_int_t PM_DATA_SCALE6;
		parameter_int_t PM_DATA_SCALE7;
		parameter_string_t SIM_VERSION;
		parameter_enum_t SLOT_CAP_ATT_BUTTON_PRESENT;
		parameter_enum_t SLOT_CAP_ATT_INDICATOR_PRESENT;
		parameter_enum_t SLOT_CAP_POWER_INDICATOR_PRESENT;
		parameter_int_t TL_RX_RAM_RADDR_LATENCY;
		parameter_int_t TL_RX_RAM_RDATA_LATENCY;
		parameter_int_t TL_RX_RAM_WRITE_LATENCY;
		parameter_enum_t TL_TFC_DISABLE;
		parameter_enum_t TL_TX_CHECKS_DISABLE;
		parameter_int_t TL_TX_RAM_RADDR_LATENCY;
		parameter_int_t TL_TX_RAM_RDATA_LATENCY;
		parameter_enum_t USR_CFG;
		parameter_enum_t USR_EXT_CFG;
		parameter_enum_t VC0_CPL_INFINITE;
		parameter_int_t VC0_RX_RAM_LIMIT;
		parameter_int_t VC0_TOTAL_CREDITS_CD;
		parameter_int_t VC0_TOTAL_CREDITS_CH;
		parameter_int_t VC0_TOTAL_CREDITS_NPH;
		parameter_int_t VC0_TOTAL_CREDITS_PD;
		parameter_int_t VC0_TOTAL_CREDITS_PH;
		parameter_int_t VC0_TX_LASTPACKET;
		//Verilog Ports in definition order:
		NetFlow* CFGBUSNUMBER_A0_B; // net ID: CFGBUSNUMBER lsb: 0  msb: 7 OUTPUT
		NetFlow* CFGBUSNUMBER_A1_B; // net ID: CFGBUSNUMBER lsb: 0  msb: 7 OUTPUT
		NetFlow* CFGBUSNUMBER_A2_B; // net ID: CFGBUSNUMBER lsb: 0  msb: 7 OUTPUT
		NetFlow* CFGBUSNUMBER_A3_B; // net ID: CFGBUSNUMBER lsb: 0  msb: 7 OUTPUT
		NetFlow* CFGBUSNUMBER_A4_B; // net ID: CFGBUSNUMBER lsb: 0  msb: 7 OUTPUT
		NetFlow* CFGBUSNUMBER_A5_B; // net ID: CFGBUSNUMBER lsb: 0  msb: 7 OUTPUT
		NetFlow* CFGBUSNUMBER_A6_B; // net ID: CFGBUSNUMBER lsb: 0  msb: 7 OUTPUT
		NetFlow* CFGBUSNUMBER_A7_B; // net ID: CFGBUSNUMBER lsb: 0  msb: 7 OUTPUT
		NetFlow* CFGCOMMANDBUSMASTERENABLE_A0_B; // net ID: CFGCOMMANDBUSMASTERENABLE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGCOMMANDINTERRUPTDISABLE_A0_B; // net ID: CFGCOMMANDINTERRUPTDISABLE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGCOMMANDIOENABLE_A0_B; // net ID: CFGCOMMANDIOENABLE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGCOMMANDMEMENABLE_A0_B; // net ID: CFGCOMMANDMEMENABLE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGCOMMANDSERREN_A0_B; // net ID: CFGCOMMANDSERREN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVCONTROLAUXPOWEREN_A0_B; // net ID: CFGDEVCONTROLAUXPOWEREN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVCONTROLCORRERRREPORTINGEN_A0_B; // net ID: CFGDEVCONTROLCORRERRREPORTINGEN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVCONTROLENABLERO_A0_B; // net ID: CFGDEVCONTROLENABLERO lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVCONTROLEXTTAGEN_A0_B; // net ID: CFGDEVCONTROLEXTTAGEN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVCONTROLFATALERRREPORTINGEN_A0_B; // net ID: CFGDEVCONTROLFATALERRREPORTINGEN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVCONTROLMAXPAYLOAD_A0_B; // net ID: CFGDEVCONTROLMAXPAYLOAD lsb: 0  msb: 2 OUTPUT
		NetFlow* CFGDEVCONTROLMAXPAYLOAD_A1_B; // net ID: CFGDEVCONTROLMAXPAYLOAD lsb: 0  msb: 2 OUTPUT
		NetFlow* CFGDEVCONTROLMAXPAYLOAD_A2_B; // net ID: CFGDEVCONTROLMAXPAYLOAD lsb: 0  msb: 2 OUTPUT
		NetFlow* CFGDEVCONTROLMAXREADREQ_A0_B; // net ID: CFGDEVCONTROLMAXREADREQ lsb: 0  msb: 2 OUTPUT
		NetFlow* CFGDEVCONTROLMAXREADREQ_A1_B; // net ID: CFGDEVCONTROLMAXREADREQ lsb: 0  msb: 2 OUTPUT
		NetFlow* CFGDEVCONTROLMAXREADREQ_A2_B; // net ID: CFGDEVCONTROLMAXREADREQ lsb: 0  msb: 2 OUTPUT
		NetFlow* CFGDEVCONTROLNONFATALREPORTINGEN_A0_B; // net ID: CFGDEVCONTROLNONFATALREPORTINGEN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVCONTROLNOSNOOPEN_A0_B; // net ID: CFGDEVCONTROLNOSNOOPEN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVCONTROLPHANTOMEN_A0_B; // net ID: CFGDEVCONTROLPHANTOMEN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVCONTROLURERRREPORTINGEN_A0_B; // net ID: CFGDEVCONTROLURERRREPORTINGEN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVICENUMBER_A0_B; // net ID: CFGDEVICENUMBER lsb: 0  msb: 4 OUTPUT
		NetFlow* CFGDEVICENUMBER_A1_B; // net ID: CFGDEVICENUMBER lsb: 0  msb: 4 OUTPUT
		NetFlow* CFGDEVICENUMBER_A2_B; // net ID: CFGDEVICENUMBER lsb: 0  msb: 4 OUTPUT
		NetFlow* CFGDEVICENUMBER_A3_B; // net ID: CFGDEVICENUMBER lsb: 0  msb: 4 OUTPUT
		NetFlow* CFGDEVICENUMBER_A4_B; // net ID: CFGDEVICENUMBER lsb: 0  msb: 4 OUTPUT
		NetFlow* CFGDEVSTATUSCORRERRDETECTED_A0_B; // net ID: CFGDEVSTATUSCORRERRDETECTED lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVSTATUSFATALERRDETECTED_A0_B; // net ID: CFGDEVSTATUSFATALERRDETECTED lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVSTATUSNONFATALERRDETECTED_A0_B; // net ID: CFGDEVSTATUSNONFATALERRDETECTED lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVSTATUSURDETECTED_A0_B; // net ID: CFGDEVSTATUSURDETECTED lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDO_A0_B; // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
		NetFlow* CFGDO_A1_B; // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
		NetFlow* CFGDO_A2_B; // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
		NetFlow* CFGDO_A3_B; // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
		NetFlow* CFGDO_A4_B; // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
		NetFlow* CFGDO_A5_B; // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
		NetFlow* CFGDO_A6_B; // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
		NetFlow* CFGDO_A7_B; // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
		NetFlow* CFGDO_A8_B; // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
		NetFlow* CFGDO_A9_B; // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
		NetFlow* CFGDO_A10_B; // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
		NetFlow* CFGDO_A11_B; // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
		NetFlow* CFGDO_A12_B; // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
		NetFlow* CFGDO_A13_B; // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
		NetFlow* CFGDO_A14_B; // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
		NetFlow* CFGDO_A15_B; // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
		NetFlow* CFGDO_A16_B; // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
		NetFlow* CFGDO_A17_B; // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
		NetFlow* CFGDO_A18_B; // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
		NetFlow* CFGDO_A19_B; // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
		NetFlow* CFGDO_A20_B; // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
		NetFlow* CFGDO_A21_B; // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
		NetFlow* CFGDO_A22_B; // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
		NetFlow* CFGDO_A23_B; // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
		NetFlow* CFGDO_A24_B; // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
		NetFlow* CFGDO_A25_B; // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
		NetFlow* CFGDO_A26_B; // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
		NetFlow* CFGDO_A27_B; // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
		NetFlow* CFGDO_A28_B; // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
		NetFlow* CFGDO_A29_B; // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
		NetFlow* CFGDO_A30_B; // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
		NetFlow* CFGDO_A31_B; // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
		NetFlow* CFGERRCPLRDYN_A0_B; // net ID: CFGERRCPLRDYN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGFUNCTIONNUMBER_A0_B; // net ID: CFGFUNCTIONNUMBER lsb: 0  msb: 2 OUTPUT
		NetFlow* CFGFUNCTIONNUMBER_A1_B; // net ID: CFGFUNCTIONNUMBER lsb: 0  msb: 2 OUTPUT
		NetFlow* CFGFUNCTIONNUMBER_A2_B; // net ID: CFGFUNCTIONNUMBER lsb: 0  msb: 2 OUTPUT
		NetFlow* CFGINTERRUPTDO_A0_B; // net ID: CFGINTERRUPTDO lsb: 0  msb: 7 OUTPUT
		NetFlow* CFGINTERRUPTDO_A1_B; // net ID: CFGINTERRUPTDO lsb: 0  msb: 7 OUTPUT
		NetFlow* CFGINTERRUPTDO_A2_B; // net ID: CFGINTERRUPTDO lsb: 0  msb: 7 OUTPUT
		NetFlow* CFGINTERRUPTDO_A3_B; // net ID: CFGINTERRUPTDO lsb: 0  msb: 7 OUTPUT
		NetFlow* CFGINTERRUPTDO_A4_B; // net ID: CFGINTERRUPTDO lsb: 0  msb: 7 OUTPUT
		NetFlow* CFGINTERRUPTDO_A5_B; // net ID: CFGINTERRUPTDO lsb: 0  msb: 7 OUTPUT
		NetFlow* CFGINTERRUPTDO_A6_B; // net ID: CFGINTERRUPTDO lsb: 0  msb: 7 OUTPUT
		NetFlow* CFGINTERRUPTDO_A7_B; // net ID: CFGINTERRUPTDO lsb: 0  msb: 7 OUTPUT
		NetFlow* CFGINTERRUPTMMENABLE_A0_B; // net ID: CFGINTERRUPTMMENABLE lsb: 0  msb: 2 OUTPUT
		NetFlow* CFGINTERRUPTMMENABLE_A1_B; // net ID: CFGINTERRUPTMMENABLE lsb: 0  msb: 2 OUTPUT
		NetFlow* CFGINTERRUPTMMENABLE_A2_B; // net ID: CFGINTERRUPTMMENABLE lsb: 0  msb: 2 OUTPUT
		NetFlow* CFGINTERRUPTMSIENABLE_A0_B; // net ID: CFGINTERRUPTMSIENABLE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGINTERRUPTRDYN_A0_B; // net ID: CFGINTERRUPTRDYN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGLINKCONTOLRCB_A0_B; // net ID: CFGLINKCONTOLRCB lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGLINKCONTROLASPMCONTROL_A0_B; // net ID: CFGLINKCONTROLASPMCONTROL lsb: 0  msb: 1 OUTPUT
		NetFlow* CFGLINKCONTROLASPMCONTROL_A1_B; // net ID: CFGLINKCONTROLASPMCONTROL lsb: 0  msb: 1 OUTPUT
		NetFlow* CFGLINKCONTROLCOMMONCLOCK_A0_B; // net ID: CFGLINKCONTROLCOMMONCLOCK lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGLINKCONTROLEXTENDEDSYNC_A0_B; // net ID: CFGLINKCONTROLEXTENDEDSYNC lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGLTSSMSTATE_A0_B; // net ID: CFGLTSSMSTATE lsb: 0  msb: 4 OUTPUT
		NetFlow* CFGLTSSMSTATE_A1_B; // net ID: CFGLTSSMSTATE lsb: 0  msb: 4 OUTPUT
		NetFlow* CFGLTSSMSTATE_A2_B; // net ID: CFGLTSSMSTATE lsb: 0  msb: 4 OUTPUT
		NetFlow* CFGLTSSMSTATE_A3_B; // net ID: CFGLTSSMSTATE lsb: 0  msb: 4 OUTPUT
		NetFlow* CFGLTSSMSTATE_A4_B; // net ID: CFGLTSSMSTATE lsb: 0  msb: 4 OUTPUT
		NetFlow* CFGPCIELINKSTATEN_A0_B; // net ID: CFGPCIELINKSTATEN lsb: 0  msb: 2 OUTPUT
		NetFlow* CFGPCIELINKSTATEN_A1_B; // net ID: CFGPCIELINKSTATEN lsb: 0  msb: 2 OUTPUT
		NetFlow* CFGPCIELINKSTATEN_A2_B; // net ID: CFGPCIELINKSTATEN lsb: 0  msb: 2 OUTPUT
		NetFlow* CFGRDWRDONEN_A0_B; // net ID: CFGRDWRDONEN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGTOTURNOFFN_A0_B; // net ID: CFGTOTURNOFFN lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGBADDLLPSTATUS_A0_B; // net ID: DBGBADDLLPSTATUS lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGBADTLPLCRC_A0_B; // net ID: DBGBADTLPLCRC lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGBADTLPSEQNUM_A0_B; // net ID: DBGBADTLPSEQNUM lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGBADTLPSTATUS_A0_B; // net ID: DBGBADTLPSTATUS lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGDLPROTOCOLSTATUS_A0_B; // net ID: DBGDLPROTOCOLSTATUS lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGFCPROTOCOLERRSTATUS_A0_B; // net ID: DBGFCPROTOCOLERRSTATUS lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGMLFRMDLENGTH_A0_B; // net ID: DBGMLFRMDLENGTH lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGMLFRMDMPS_A0_B; // net ID: DBGMLFRMDMPS lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGMLFRMDTCVC_A0_B; // net ID: DBGMLFRMDTCVC lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGMLFRMDTLPSTATUS_A0_B; // net ID: DBGMLFRMDTLPSTATUS lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGMLFRMDUNRECTYPE_A0_B; // net ID: DBGMLFRMDUNRECTYPE lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGPOISTLPSTATUS_A0_B; // net ID: DBGPOISTLPSTATUS lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGRCVROVERFLOWSTATUS_A0_B; // net ID: DBGRCVROVERFLOWSTATUS lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGREGDETECTEDCORRECTABLE_A0_B; // net ID: DBGREGDETECTEDCORRECTABLE lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGREGDETECTEDFATAL_A0_B; // net ID: DBGREGDETECTEDFATAL lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGREGDETECTEDNONFATAL_A0_B; // net ID: DBGREGDETECTEDNONFATAL lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGREGDETECTEDUNSUPPORTED_A0_B; // net ID: DBGREGDETECTEDUNSUPPORTED lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGRPLYROLLOVERSTATUS_A0_B; // net ID: DBGRPLYROLLOVERSTATUS lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGRPLYTIMEOUTSTATUS_A0_B; // net ID: DBGRPLYTIMEOUTSTATUS lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGURNOBARHIT_A0_B; // net ID: DBGURNOBARHIT lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGURPOISCFGWR_A0_B; // net ID: DBGURPOISCFGWR lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGURSTATUS_A0_B; // net ID: DBGURSTATUS lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGURUNSUPMSG_A0_B; // net ID: DBGURUNSUPMSG lsb: 0  msb: 0 OUTPUT
		NetFlow* MIMRXRADDR_A0_B; // net ID: MIMRXRADDR lsb: 0  msb: 11 OUTPUT
		NetFlow* MIMRXRADDR_A1_B; // net ID: MIMRXRADDR lsb: 0  msb: 11 OUTPUT
		NetFlow* MIMRXRADDR_A2_B; // net ID: MIMRXRADDR lsb: 0  msb: 11 OUTPUT
		NetFlow* MIMRXRADDR_A3_B; // net ID: MIMRXRADDR lsb: 0  msb: 11 OUTPUT
		NetFlow* MIMRXRADDR_A4_B; // net ID: MIMRXRADDR lsb: 0  msb: 11 OUTPUT
		NetFlow* MIMRXRADDR_A5_B; // net ID: MIMRXRADDR lsb: 0  msb: 11 OUTPUT
		NetFlow* MIMRXRADDR_A6_B; // net ID: MIMRXRADDR lsb: 0  msb: 11 OUTPUT
		NetFlow* MIMRXRADDR_A7_B; // net ID: MIMRXRADDR lsb: 0  msb: 11 OUTPUT
		NetFlow* MIMRXRADDR_A8_B; // net ID: MIMRXRADDR lsb: 0  msb: 11 OUTPUT
		NetFlow* MIMRXRADDR_A9_B; // net ID: MIMRXRADDR lsb: 0  msb: 11 OUTPUT
		NetFlow* MIMRXRADDR_A10_B; // net ID: MIMRXRADDR lsb: 0  msb: 11 OUTPUT
		NetFlow* MIMRXRADDR_A11_B; // net ID: MIMRXRADDR lsb: 0  msb: 11 OUTPUT
		NetFlow* MIMRXREN_A0_B; // net ID: MIMRXREN lsb: 0  msb: 0 OUTPUT
		NetFlow* MIMRXWADDR_A0_B; // net ID: MIMRXWADDR lsb: 0  msb: 11 OUTPUT
		NetFlow* MIMRXWADDR_A1_B; // net ID: MIMRXWADDR lsb: 0  msb: 11 OUTPUT
		NetFlow* MIMRXWADDR_A2_B; // net ID: MIMRXWADDR lsb: 0  msb: 11 OUTPUT
		NetFlow* MIMRXWADDR_A3_B; // net ID: MIMRXWADDR lsb: 0  msb: 11 OUTPUT
		NetFlow* MIMRXWADDR_A4_B; // net ID: MIMRXWADDR lsb: 0  msb: 11 OUTPUT
		NetFlow* MIMRXWADDR_A5_B; // net ID: MIMRXWADDR lsb: 0  msb: 11 OUTPUT
		NetFlow* MIMRXWADDR_A6_B; // net ID: MIMRXWADDR lsb: 0  msb: 11 OUTPUT
		NetFlow* MIMRXWADDR_A7_B; // net ID: MIMRXWADDR lsb: 0  msb: 11 OUTPUT
		NetFlow* MIMRXWADDR_A8_B; // net ID: MIMRXWADDR lsb: 0  msb: 11 OUTPUT
		NetFlow* MIMRXWADDR_A9_B; // net ID: MIMRXWADDR lsb: 0  msb: 11 OUTPUT
		NetFlow* MIMRXWADDR_A10_B; // net ID: MIMRXWADDR lsb: 0  msb: 11 OUTPUT
		NetFlow* MIMRXWADDR_A11_B; // net ID: MIMRXWADDR lsb: 0  msb: 11 OUTPUT
		NetFlow* MIMRXWDATA_A0_B; // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
		NetFlow* MIMRXWDATA_A1_B; // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
		NetFlow* MIMRXWDATA_A2_B; // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
		NetFlow* MIMRXWDATA_A3_B; // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
		NetFlow* MIMRXWDATA_A4_B; // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
		NetFlow* MIMRXWDATA_A5_B; // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
		NetFlow* MIMRXWDATA_A6_B; // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
		NetFlow* MIMRXWDATA_A7_B; // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
		NetFlow* MIMRXWDATA_A8_B; // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
		NetFlow* MIMRXWDATA_A9_B; // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
		NetFlow* MIMRXWDATA_A10_B; // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
		NetFlow* MIMRXWDATA_A11_B; // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
		NetFlow* MIMRXWDATA_A12_B; // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
		NetFlow* MIMRXWDATA_A13_B; // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
		NetFlow* MIMRXWDATA_A14_B; // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
		NetFlow* MIMRXWDATA_A15_B; // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
		NetFlow* MIMRXWDATA_A16_B; // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
		NetFlow* MIMRXWDATA_A17_B; // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
		NetFlow* MIMRXWDATA_A18_B; // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
		NetFlow* MIMRXWDATA_A19_B; // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
		NetFlow* MIMRXWDATA_A20_B; // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
		NetFlow* MIMRXWDATA_A21_B; // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
		NetFlow* MIMRXWDATA_A22_B; // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
		NetFlow* MIMRXWDATA_A23_B; // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
		NetFlow* MIMRXWDATA_A24_B; // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
		NetFlow* MIMRXWDATA_A25_B; // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
		NetFlow* MIMRXWDATA_A26_B; // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
		NetFlow* MIMRXWDATA_A27_B; // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
		NetFlow* MIMRXWDATA_A28_B; // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
		NetFlow* MIMRXWDATA_A29_B; // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
		NetFlow* MIMRXWDATA_A30_B; // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
		NetFlow* MIMRXWDATA_A31_B; // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
		NetFlow* MIMRXWDATA_A32_B; // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
		NetFlow* MIMRXWDATA_A33_B; // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
		NetFlow* MIMRXWDATA_A34_B; // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
		NetFlow* MIMRXWEN_A0_B; // net ID: MIMRXWEN lsb: 0  msb: 0 OUTPUT
		NetFlow* MIMTXRADDR_A0_B; // net ID: MIMTXRADDR lsb: 0  msb: 11 OUTPUT
		NetFlow* MIMTXRADDR_A1_B; // net ID: MIMTXRADDR lsb: 0  msb: 11 OUTPUT
		NetFlow* MIMTXRADDR_A2_B; // net ID: MIMTXRADDR lsb: 0  msb: 11 OUTPUT
		NetFlow* MIMTXRADDR_A3_B; // net ID: MIMTXRADDR lsb: 0  msb: 11 OUTPUT
		NetFlow* MIMTXRADDR_A4_B; // net ID: MIMTXRADDR lsb: 0  msb: 11 OUTPUT
		NetFlow* MIMTXRADDR_A5_B; // net ID: MIMTXRADDR lsb: 0  msb: 11 OUTPUT
		NetFlow* MIMTXRADDR_A6_B; // net ID: MIMTXRADDR lsb: 0  msb: 11 OUTPUT
		NetFlow* MIMTXRADDR_A7_B; // net ID: MIMTXRADDR lsb: 0  msb: 11 OUTPUT
		NetFlow* MIMTXRADDR_A8_B; // net ID: MIMTXRADDR lsb: 0  msb: 11 OUTPUT
		NetFlow* MIMTXRADDR_A9_B; // net ID: MIMTXRADDR lsb: 0  msb: 11 OUTPUT
		NetFlow* MIMTXRADDR_A10_B; // net ID: MIMTXRADDR lsb: 0  msb: 11 OUTPUT
		NetFlow* MIMTXRADDR_A11_B; // net ID: MIMTXRADDR lsb: 0  msb: 11 OUTPUT
		NetFlow* MIMTXREN_A0_B; // net ID: MIMTXREN lsb: 0  msb: 0 OUTPUT
		NetFlow* MIMTXWADDR_A0_B; // net ID: MIMTXWADDR lsb: 0  msb: 11 OUTPUT
		NetFlow* MIMTXWADDR_A1_B; // net ID: MIMTXWADDR lsb: 0  msb: 11 OUTPUT
		NetFlow* MIMTXWADDR_A2_B; // net ID: MIMTXWADDR lsb: 0  msb: 11 OUTPUT
		NetFlow* MIMTXWADDR_A3_B; // net ID: MIMTXWADDR lsb: 0  msb: 11 OUTPUT
		NetFlow* MIMTXWADDR_A4_B; // net ID: MIMTXWADDR lsb: 0  msb: 11 OUTPUT
		NetFlow* MIMTXWADDR_A5_B; // net ID: MIMTXWADDR lsb: 0  msb: 11 OUTPUT
		NetFlow* MIMTXWADDR_A6_B; // net ID: MIMTXWADDR lsb: 0  msb: 11 OUTPUT
		NetFlow* MIMTXWADDR_A7_B; // net ID: MIMTXWADDR lsb: 0  msb: 11 OUTPUT
		NetFlow* MIMTXWADDR_A8_B; // net ID: MIMTXWADDR lsb: 0  msb: 11 OUTPUT
		NetFlow* MIMTXWADDR_A9_B; // net ID: MIMTXWADDR lsb: 0  msb: 11 OUTPUT
		NetFlow* MIMTXWADDR_A10_B; // net ID: MIMTXWADDR lsb: 0  msb: 11 OUTPUT
		NetFlow* MIMTXWADDR_A11_B; // net ID: MIMTXWADDR lsb: 0  msb: 11 OUTPUT
		NetFlow* MIMTXWDATA_A0_B; // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
		NetFlow* MIMTXWDATA_A1_B; // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
		NetFlow* MIMTXWDATA_A2_B; // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
		NetFlow* MIMTXWDATA_A3_B; // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
		NetFlow* MIMTXWDATA_A4_B; // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
		NetFlow* MIMTXWDATA_A5_B; // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
		NetFlow* MIMTXWDATA_A6_B; // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
		NetFlow* MIMTXWDATA_A7_B; // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
		NetFlow* MIMTXWDATA_A8_B; // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
		NetFlow* MIMTXWDATA_A9_B; // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
		NetFlow* MIMTXWDATA_A10_B; // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
		NetFlow* MIMTXWDATA_A11_B; // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
		NetFlow* MIMTXWDATA_A12_B; // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
		NetFlow* MIMTXWDATA_A13_B; // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
		NetFlow* MIMTXWDATA_A14_B; // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
		NetFlow* MIMTXWDATA_A15_B; // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
		NetFlow* MIMTXWDATA_A16_B; // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
		NetFlow* MIMTXWDATA_A17_B; // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
		NetFlow* MIMTXWDATA_A18_B; // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
		NetFlow* MIMTXWDATA_A19_B; // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
		NetFlow* MIMTXWDATA_A20_B; // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
		NetFlow* MIMTXWDATA_A21_B; // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
		NetFlow* MIMTXWDATA_A22_B; // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
		NetFlow* MIMTXWDATA_A23_B; // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
		NetFlow* MIMTXWDATA_A24_B; // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
		NetFlow* MIMTXWDATA_A25_B; // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
		NetFlow* MIMTXWDATA_A26_B; // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
		NetFlow* MIMTXWDATA_A27_B; // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
		NetFlow* MIMTXWDATA_A28_B; // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
		NetFlow* MIMTXWDATA_A29_B; // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
		NetFlow* MIMTXWDATA_A30_B; // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
		NetFlow* MIMTXWDATA_A31_B; // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
		NetFlow* MIMTXWDATA_A32_B; // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
		NetFlow* MIMTXWDATA_A33_B; // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
		NetFlow* MIMTXWDATA_A34_B; // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
		NetFlow* MIMTXWDATA_A35_B; // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
		NetFlow* MIMTXWEN_A0_B; // net ID: MIMTXWEN lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPEGTPOWERDOWNA_A0_B; // net ID: PIPEGTPOWERDOWNA lsb: 0  msb: 1 OUTPUT
		NetFlow* PIPEGTPOWERDOWNA_A1_B; // net ID: PIPEGTPOWERDOWNA lsb: 0  msb: 1 OUTPUT
		NetFlow* PIPEGTPOWERDOWNB_A0_B; // net ID: PIPEGTPOWERDOWNB lsb: 0  msb: 1 OUTPUT
		NetFlow* PIPEGTPOWERDOWNB_A1_B; // net ID: PIPEGTPOWERDOWNB lsb: 0  msb: 1 OUTPUT
		NetFlow* PIPEGTTXELECIDLEA_A0_B; // net ID: PIPEGTTXELECIDLEA lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPEGTTXELECIDLEB_A0_B; // net ID: PIPEGTTXELECIDLEB lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERXPOLARITYA_A0_B; // net ID: PIPERXPOLARITYA lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERXPOLARITYB_A0_B; // net ID: PIPERXPOLARITYB lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERXRESETA_A0_B; // net ID: PIPERXRESETA lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERXRESETB_A0_B; // net ID: PIPERXRESETB lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETXCHARDISPMODEA_A0_B; // net ID: PIPETXCHARDISPMODEA lsb: 0  msb: 1 OUTPUT
		NetFlow* PIPETXCHARDISPMODEA_A1_B; // net ID: PIPETXCHARDISPMODEA lsb: 0  msb: 1 OUTPUT
		NetFlow* PIPETXCHARDISPMODEB_A0_B; // net ID: PIPETXCHARDISPMODEB lsb: 0  msb: 1 OUTPUT
		NetFlow* PIPETXCHARDISPMODEB_A1_B; // net ID: PIPETXCHARDISPMODEB lsb: 0  msb: 1 OUTPUT
		NetFlow* PIPETXCHARDISPVALA_A0_B; // net ID: PIPETXCHARDISPVALA lsb: 0  msb: 1 OUTPUT
		NetFlow* PIPETXCHARDISPVALA_A1_B; // net ID: PIPETXCHARDISPVALA lsb: 0  msb: 1 OUTPUT
		NetFlow* PIPETXCHARDISPVALB_A0_B; // net ID: PIPETXCHARDISPVALB lsb: 0  msb: 1 OUTPUT
		NetFlow* PIPETXCHARDISPVALB_A1_B; // net ID: PIPETXCHARDISPVALB lsb: 0  msb: 1 OUTPUT
		NetFlow* PIPETXCHARISKA_A0_B; // net ID: PIPETXCHARISKA lsb: 0  msb: 1 OUTPUT
		NetFlow* PIPETXCHARISKA_A1_B; // net ID: PIPETXCHARISKA lsb: 0  msb: 1 OUTPUT
		NetFlow* PIPETXCHARISKB_A0_B; // net ID: PIPETXCHARISKB lsb: 0  msb: 1 OUTPUT
		NetFlow* PIPETXCHARISKB_A1_B; // net ID: PIPETXCHARISKB lsb: 0  msb: 1 OUTPUT
		NetFlow* PIPETXDATAA_A0_B; // net ID: PIPETXDATAA lsb: 0  msb: 15 OUTPUT
		NetFlow* PIPETXDATAA_A1_B; // net ID: PIPETXDATAA lsb: 0  msb: 15 OUTPUT
		NetFlow* PIPETXDATAA_A2_B; // net ID: PIPETXDATAA lsb: 0  msb: 15 OUTPUT
		NetFlow* PIPETXDATAA_A3_B; // net ID: PIPETXDATAA lsb: 0  msb: 15 OUTPUT
		NetFlow* PIPETXDATAA_A4_B; // net ID: PIPETXDATAA lsb: 0  msb: 15 OUTPUT
		NetFlow* PIPETXDATAA_A5_B; // net ID: PIPETXDATAA lsb: 0  msb: 15 OUTPUT
		NetFlow* PIPETXDATAA_A6_B; // net ID: PIPETXDATAA lsb: 0  msb: 15 OUTPUT
		NetFlow* PIPETXDATAA_A7_B; // net ID: PIPETXDATAA lsb: 0  msb: 15 OUTPUT
		NetFlow* PIPETXDATAA_A8_B; // net ID: PIPETXDATAA lsb: 0  msb: 15 OUTPUT
		NetFlow* PIPETXDATAA_A9_B; // net ID: PIPETXDATAA lsb: 0  msb: 15 OUTPUT
		NetFlow* PIPETXDATAA_A10_B; // net ID: PIPETXDATAA lsb: 0  msb: 15 OUTPUT
		NetFlow* PIPETXDATAA_A11_B; // net ID: PIPETXDATAA lsb: 0  msb: 15 OUTPUT
		NetFlow* PIPETXDATAA_A12_B; // net ID: PIPETXDATAA lsb: 0  msb: 15 OUTPUT
		NetFlow* PIPETXDATAA_A13_B; // net ID: PIPETXDATAA lsb: 0  msb: 15 OUTPUT
		NetFlow* PIPETXDATAA_A14_B; // net ID: PIPETXDATAA lsb: 0  msb: 15 OUTPUT
		NetFlow* PIPETXDATAA_A15_B; // net ID: PIPETXDATAA lsb: 0  msb: 15 OUTPUT
		NetFlow* PIPETXDATAB_A0_B; // net ID: PIPETXDATAB lsb: 0  msb: 15 OUTPUT
		NetFlow* PIPETXDATAB_A1_B; // net ID: PIPETXDATAB lsb: 0  msb: 15 OUTPUT
		NetFlow* PIPETXDATAB_A2_B; // net ID: PIPETXDATAB lsb: 0  msb: 15 OUTPUT
		NetFlow* PIPETXDATAB_A3_B; // net ID: PIPETXDATAB lsb: 0  msb: 15 OUTPUT
		NetFlow* PIPETXDATAB_A4_B; // net ID: PIPETXDATAB lsb: 0  msb: 15 OUTPUT
		NetFlow* PIPETXDATAB_A5_B; // net ID: PIPETXDATAB lsb: 0  msb: 15 OUTPUT
		NetFlow* PIPETXDATAB_A6_B; // net ID: PIPETXDATAB lsb: 0  msb: 15 OUTPUT
		NetFlow* PIPETXDATAB_A7_B; // net ID: PIPETXDATAB lsb: 0  msb: 15 OUTPUT
		NetFlow* PIPETXDATAB_A8_B; // net ID: PIPETXDATAB lsb: 0  msb: 15 OUTPUT
		NetFlow* PIPETXDATAB_A9_B; // net ID: PIPETXDATAB lsb: 0  msb: 15 OUTPUT
		NetFlow* PIPETXDATAB_A10_B; // net ID: PIPETXDATAB lsb: 0  msb: 15 OUTPUT
		NetFlow* PIPETXDATAB_A11_B; // net ID: PIPETXDATAB lsb: 0  msb: 15 OUTPUT
		NetFlow* PIPETXDATAB_A12_B; // net ID: PIPETXDATAB lsb: 0  msb: 15 OUTPUT
		NetFlow* PIPETXDATAB_A13_B; // net ID: PIPETXDATAB lsb: 0  msb: 15 OUTPUT
		NetFlow* PIPETXDATAB_A14_B; // net ID: PIPETXDATAB lsb: 0  msb: 15 OUTPUT
		NetFlow* PIPETXDATAB_A15_B; // net ID: PIPETXDATAB lsb: 0  msb: 15 OUTPUT
		NetFlow* PIPETXRCVRDETA_A0_B; // net ID: PIPETXRCVRDETA lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETXRCVRDETB_A0_B; // net ID: PIPETXRCVRDETB lsb: 0  msb: 0 OUTPUT
		NetFlow* RECEIVEDHOTRESET_A0_B; // net ID: RECEIVEDHOTRESET lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNFCCPLD_A0_B; // net ID: TRNFCCPLD lsb: 0  msb: 11 OUTPUT
		NetFlow* TRNFCCPLD_A1_B; // net ID: TRNFCCPLD lsb: 0  msb: 11 OUTPUT
		NetFlow* TRNFCCPLD_A2_B; // net ID: TRNFCCPLD lsb: 0  msb: 11 OUTPUT
		NetFlow* TRNFCCPLD_A3_B; // net ID: TRNFCCPLD lsb: 0  msb: 11 OUTPUT
		NetFlow* TRNFCCPLD_A4_B; // net ID: TRNFCCPLD lsb: 0  msb: 11 OUTPUT
		NetFlow* TRNFCCPLD_A5_B; // net ID: TRNFCCPLD lsb: 0  msb: 11 OUTPUT
		NetFlow* TRNFCCPLD_A6_B; // net ID: TRNFCCPLD lsb: 0  msb: 11 OUTPUT
		NetFlow* TRNFCCPLD_A7_B; // net ID: TRNFCCPLD lsb: 0  msb: 11 OUTPUT
		NetFlow* TRNFCCPLD_A8_B; // net ID: TRNFCCPLD lsb: 0  msb: 11 OUTPUT
		NetFlow* TRNFCCPLD_A9_B; // net ID: TRNFCCPLD lsb: 0  msb: 11 OUTPUT
		NetFlow* TRNFCCPLD_A10_B; // net ID: TRNFCCPLD lsb: 0  msb: 11 OUTPUT
		NetFlow* TRNFCCPLD_A11_B; // net ID: TRNFCCPLD lsb: 0  msb: 11 OUTPUT
		NetFlow* TRNFCCPLH_A0_B; // net ID: TRNFCCPLH lsb: 0  msb: 7 OUTPUT
		NetFlow* TRNFCCPLH_A1_B; // net ID: TRNFCCPLH lsb: 0  msb: 7 OUTPUT
		NetFlow* TRNFCCPLH_A2_B; // net ID: TRNFCCPLH lsb: 0  msb: 7 OUTPUT
		NetFlow* TRNFCCPLH_A3_B; // net ID: TRNFCCPLH lsb: 0  msb: 7 OUTPUT
		NetFlow* TRNFCCPLH_A4_B; // net ID: TRNFCCPLH lsb: 0  msb: 7 OUTPUT
		NetFlow* TRNFCCPLH_A5_B; // net ID: TRNFCCPLH lsb: 0  msb: 7 OUTPUT
		NetFlow* TRNFCCPLH_A6_B; // net ID: TRNFCCPLH lsb: 0  msb: 7 OUTPUT
		NetFlow* TRNFCCPLH_A7_B; // net ID: TRNFCCPLH lsb: 0  msb: 7 OUTPUT
		NetFlow* TRNFCNPD_A0_B; // net ID: TRNFCNPD lsb: 0  msb: 11 OUTPUT
		NetFlow* TRNFCNPD_A1_B; // net ID: TRNFCNPD lsb: 0  msb: 11 OUTPUT
		NetFlow* TRNFCNPD_A2_B; // net ID: TRNFCNPD lsb: 0  msb: 11 OUTPUT
		NetFlow* TRNFCNPD_A3_B; // net ID: TRNFCNPD lsb: 0  msb: 11 OUTPUT
		NetFlow* TRNFCNPD_A4_B; // net ID: TRNFCNPD lsb: 0  msb: 11 OUTPUT
		NetFlow* TRNFCNPD_A5_B; // net ID: TRNFCNPD lsb: 0  msb: 11 OUTPUT
		NetFlow* TRNFCNPD_A6_B; // net ID: TRNFCNPD lsb: 0  msb: 11 OUTPUT
		NetFlow* TRNFCNPD_A7_B; // net ID: TRNFCNPD lsb: 0  msb: 11 OUTPUT
		NetFlow* TRNFCNPD_A8_B; // net ID: TRNFCNPD lsb: 0  msb: 11 OUTPUT
		NetFlow* TRNFCNPD_A9_B; // net ID: TRNFCNPD lsb: 0  msb: 11 OUTPUT
		NetFlow* TRNFCNPD_A10_B; // net ID: TRNFCNPD lsb: 0  msb: 11 OUTPUT
		NetFlow* TRNFCNPD_A11_B; // net ID: TRNFCNPD lsb: 0  msb: 11 OUTPUT
		NetFlow* TRNFCNPH_A0_B; // net ID: TRNFCNPH lsb: 0  msb: 7 OUTPUT
		NetFlow* TRNFCNPH_A1_B; // net ID: TRNFCNPH lsb: 0  msb: 7 OUTPUT
		NetFlow* TRNFCNPH_A2_B; // net ID: TRNFCNPH lsb: 0  msb: 7 OUTPUT
		NetFlow* TRNFCNPH_A3_B; // net ID: TRNFCNPH lsb: 0  msb: 7 OUTPUT
		NetFlow* TRNFCNPH_A4_B; // net ID: TRNFCNPH lsb: 0  msb: 7 OUTPUT
		NetFlow* TRNFCNPH_A5_B; // net ID: TRNFCNPH lsb: 0  msb: 7 OUTPUT
		NetFlow* TRNFCNPH_A6_B; // net ID: TRNFCNPH lsb: 0  msb: 7 OUTPUT
		NetFlow* TRNFCNPH_A7_B; // net ID: TRNFCNPH lsb: 0  msb: 7 OUTPUT
		NetFlow* TRNFCPD_A0_B; // net ID: TRNFCPD lsb: 0  msb: 11 OUTPUT
		NetFlow* TRNFCPD_A1_B; // net ID: TRNFCPD lsb: 0  msb: 11 OUTPUT
		NetFlow* TRNFCPD_A2_B; // net ID: TRNFCPD lsb: 0  msb: 11 OUTPUT
		NetFlow* TRNFCPD_A3_B; // net ID: TRNFCPD lsb: 0  msb: 11 OUTPUT
		NetFlow* TRNFCPD_A4_B; // net ID: TRNFCPD lsb: 0  msb: 11 OUTPUT
		NetFlow* TRNFCPD_A5_B; // net ID: TRNFCPD lsb: 0  msb: 11 OUTPUT
		NetFlow* TRNFCPD_A6_B; // net ID: TRNFCPD lsb: 0  msb: 11 OUTPUT
		NetFlow* TRNFCPD_A7_B; // net ID: TRNFCPD lsb: 0  msb: 11 OUTPUT
		NetFlow* TRNFCPD_A8_B; // net ID: TRNFCPD lsb: 0  msb: 11 OUTPUT
		NetFlow* TRNFCPD_A9_B; // net ID: TRNFCPD lsb: 0  msb: 11 OUTPUT
		NetFlow* TRNFCPD_A10_B; // net ID: TRNFCPD lsb: 0  msb: 11 OUTPUT
		NetFlow* TRNFCPD_A11_B; // net ID: TRNFCPD lsb: 0  msb: 11 OUTPUT
		NetFlow* TRNFCPH_A0_B; // net ID: TRNFCPH lsb: 0  msb: 7 OUTPUT
		NetFlow* TRNFCPH_A1_B; // net ID: TRNFCPH lsb: 0  msb: 7 OUTPUT
		NetFlow* TRNFCPH_A2_B; // net ID: TRNFCPH lsb: 0  msb: 7 OUTPUT
		NetFlow* TRNFCPH_A3_B; // net ID: TRNFCPH lsb: 0  msb: 7 OUTPUT
		NetFlow* TRNFCPH_A4_B; // net ID: TRNFCPH lsb: 0  msb: 7 OUTPUT
		NetFlow* TRNFCPH_A5_B; // net ID: TRNFCPH lsb: 0  msb: 7 OUTPUT
		NetFlow* TRNFCPH_A6_B; // net ID: TRNFCPH lsb: 0  msb: 7 OUTPUT
		NetFlow* TRNFCPH_A7_B; // net ID: TRNFCPH lsb: 0  msb: 7 OUTPUT
		NetFlow* TRNLNKUPN_A0_B; // net ID: TRNLNKUPN lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNRBARHITN_A0_B; // net ID: TRNRBARHITN lsb: 0  msb: 6 OUTPUT
		NetFlow* TRNRBARHITN_A1_B; // net ID: TRNRBARHITN lsb: 0  msb: 6 OUTPUT
		NetFlow* TRNRBARHITN_A2_B; // net ID: TRNRBARHITN lsb: 0  msb: 6 OUTPUT
		NetFlow* TRNRBARHITN_A3_B; // net ID: TRNRBARHITN lsb: 0  msb: 6 OUTPUT
		NetFlow* TRNRBARHITN_A4_B; // net ID: TRNRBARHITN lsb: 0  msb: 6 OUTPUT
		NetFlow* TRNRBARHITN_A5_B; // net ID: TRNRBARHITN lsb: 0  msb: 6 OUTPUT
		NetFlow* TRNRBARHITN_A6_B; // net ID: TRNRBARHITN lsb: 0  msb: 6 OUTPUT
		NetFlow* TRNRD_A0_B; // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
		NetFlow* TRNRD_A1_B; // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
		NetFlow* TRNRD_A2_B; // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
		NetFlow* TRNRD_A3_B; // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
		NetFlow* TRNRD_A4_B; // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
		NetFlow* TRNRD_A5_B; // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
		NetFlow* TRNRD_A6_B; // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
		NetFlow* TRNRD_A7_B; // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
		NetFlow* TRNRD_A8_B; // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
		NetFlow* TRNRD_A9_B; // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
		NetFlow* TRNRD_A10_B; // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
		NetFlow* TRNRD_A11_B; // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
		NetFlow* TRNRD_A12_B; // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
		NetFlow* TRNRD_A13_B; // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
		NetFlow* TRNRD_A14_B; // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
		NetFlow* TRNRD_A15_B; // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
		NetFlow* TRNRD_A16_B; // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
		NetFlow* TRNRD_A17_B; // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
		NetFlow* TRNRD_A18_B; // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
		NetFlow* TRNRD_A19_B; // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
		NetFlow* TRNRD_A20_B; // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
		NetFlow* TRNRD_A21_B; // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
		NetFlow* TRNRD_A22_B; // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
		NetFlow* TRNRD_A23_B; // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
		NetFlow* TRNRD_A24_B; // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
		NetFlow* TRNRD_A25_B; // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
		NetFlow* TRNRD_A26_B; // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
		NetFlow* TRNRD_A27_B; // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
		NetFlow* TRNRD_A28_B; // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
		NetFlow* TRNRD_A29_B; // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
		NetFlow* TRNRD_A30_B; // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
		NetFlow* TRNRD_A31_B; // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
		NetFlow* TRNREOFN_A0_B; // net ID: TRNREOFN lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNRERRFWDN_A0_B; // net ID: TRNRERRFWDN lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNRSOFN_A0_B; // net ID: TRNRSOFN lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNRSRCDSCN_A0_B; // net ID: TRNRSRCDSCN lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNRSRCRDYN_A0_B; // net ID: TRNRSRCRDYN lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNTBUFAV_A0_B; // net ID: TRNTBUFAV lsb: 0  msb: 5 OUTPUT
		NetFlow* TRNTBUFAV_A1_B; // net ID: TRNTBUFAV lsb: 0  msb: 5 OUTPUT
		NetFlow* TRNTBUFAV_A2_B; // net ID: TRNTBUFAV lsb: 0  msb: 5 OUTPUT
		NetFlow* TRNTBUFAV_A3_B; // net ID: TRNTBUFAV lsb: 0  msb: 5 OUTPUT
		NetFlow* TRNTBUFAV_A4_B; // net ID: TRNTBUFAV lsb: 0  msb: 5 OUTPUT
		NetFlow* TRNTBUFAV_A5_B; // net ID: TRNTBUFAV lsb: 0  msb: 5 OUTPUT
		NetFlow* TRNTCFGREQN_A0_B; // net ID: TRNTCFGREQN lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNTDSTRDYN_A0_B; // net ID: TRNTDSTRDYN lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNTERRDROPN_A0_B; // net ID: TRNTERRDROPN lsb: 0  msb: 0 OUTPUT
		NetFlow* USERRSTN_A0_B; // net ID: USERRSTN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVID_A0_B; // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
		NetFlow* CFGDEVID_A1_B; // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
		NetFlow* CFGDEVID_A2_B; // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
		NetFlow* CFGDEVID_A3_B; // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
		NetFlow* CFGDEVID_A4_B; // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
		NetFlow* CFGDEVID_A5_B; // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
		NetFlow* CFGDEVID_A6_B; // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
		NetFlow* CFGDEVID_A7_B; // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
		NetFlow* CFGDEVID_A8_B; // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
		NetFlow* CFGDEVID_A9_B; // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
		NetFlow* CFGDEVID_A10_B; // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
		NetFlow* CFGDEVID_A11_B; // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
		NetFlow* CFGDEVID_A12_B; // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
		NetFlow* CFGDEVID_A13_B; // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
		NetFlow* CFGDEVID_A14_B; // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
		NetFlow* CFGDEVID_A15_B; // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
		NetFlow* CFGDSN_A0_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A1_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A2_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A3_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A4_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A5_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A6_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A7_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A8_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A9_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A10_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A11_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A12_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A13_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A14_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A15_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A16_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A17_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A18_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A19_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A20_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A21_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A22_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A23_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A24_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A25_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A26_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A27_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A28_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A29_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A30_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A31_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A32_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A33_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A34_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A35_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A36_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A37_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A38_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A39_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A40_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A41_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A42_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A43_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A44_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A45_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A46_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A47_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A48_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A49_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A50_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A51_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A52_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A53_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A54_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A55_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A56_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A57_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A58_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A59_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A60_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A61_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A62_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A63_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDWADDR_A0_B; // net ID: CFGDWADDR lsb: 0  msb: 9 INPUT
		NetFlow* CFGDWADDR_A1_B; // net ID: CFGDWADDR lsb: 0  msb: 9 INPUT
		NetFlow* CFGDWADDR_A2_B; // net ID: CFGDWADDR lsb: 0  msb: 9 INPUT
		NetFlow* CFGDWADDR_A3_B; // net ID: CFGDWADDR lsb: 0  msb: 9 INPUT
		NetFlow* CFGDWADDR_A4_B; // net ID: CFGDWADDR lsb: 0  msb: 9 INPUT
		NetFlow* CFGDWADDR_A5_B; // net ID: CFGDWADDR lsb: 0  msb: 9 INPUT
		NetFlow* CFGDWADDR_A6_B; // net ID: CFGDWADDR lsb: 0  msb: 9 INPUT
		NetFlow* CFGDWADDR_A7_B; // net ID: CFGDWADDR lsb: 0  msb: 9 INPUT
		NetFlow* CFGDWADDR_A8_B; // net ID: CFGDWADDR lsb: 0  msb: 9 INPUT
		NetFlow* CFGDWADDR_A9_B; // net ID: CFGDWADDR lsb: 0  msb: 9 INPUT
		NetFlow* CFGERRCORN_A0_B; // net ID: CFGERRCORN lsb: 0  msb: 0 INPUT
		NetFlow* CFGERRCPLABORTN_A0_B; // net ID: CFGERRCPLABORTN lsb: 0  msb: 0 INPUT
		NetFlow* CFGERRCPLTIMEOUTN_A0_B; // net ID: CFGERRCPLTIMEOUTN lsb: 0  msb: 0 INPUT
		NetFlow* CFGERRECRCN_A0_B; // net ID: CFGERRECRCN lsb: 0  msb: 0 INPUT
		NetFlow* CFGERRLOCKEDN_A0_B; // net ID: CFGERRLOCKEDN lsb: 0  msb: 0 INPUT
		NetFlow* CFGERRPOSTEDN_A0_B; // net ID: CFGERRPOSTEDN lsb: 0  msb: 0 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A0_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A1_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A2_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A3_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A4_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A5_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A6_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A7_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A8_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A9_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A10_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A11_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A12_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A13_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A14_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A15_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A16_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A17_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A18_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A19_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A20_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A21_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A22_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A23_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A24_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A25_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A26_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A27_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A28_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A29_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A30_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A31_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A32_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A33_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A34_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A35_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A36_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A37_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A38_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A39_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A40_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A41_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A42_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A43_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A44_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A45_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A46_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A47_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRURN_A0_B; // net ID: CFGERRURN lsb: 0  msb: 0 INPUT
		NetFlow* CFGINTERRUPTASSERTN_A0_B; // net ID: CFGINTERRUPTASSERTN lsb: 0  msb: 0 INPUT
		NetFlow* CFGINTERRUPTDI_A0_B; // net ID: CFGINTERRUPTDI lsb: 0  msb: 7 INPUT
		NetFlow* CFGINTERRUPTDI_A1_B; // net ID: CFGINTERRUPTDI lsb: 0  msb: 7 INPUT
		NetFlow* CFGINTERRUPTDI_A2_B; // net ID: CFGINTERRUPTDI lsb: 0  msb: 7 INPUT
		NetFlow* CFGINTERRUPTDI_A3_B; // net ID: CFGINTERRUPTDI lsb: 0  msb: 7 INPUT
		NetFlow* CFGINTERRUPTDI_A4_B; // net ID: CFGINTERRUPTDI lsb: 0  msb: 7 INPUT
		NetFlow* CFGINTERRUPTDI_A5_B; // net ID: CFGINTERRUPTDI lsb: 0  msb: 7 INPUT
		NetFlow* CFGINTERRUPTDI_A6_B; // net ID: CFGINTERRUPTDI lsb: 0  msb: 7 INPUT
		NetFlow* CFGINTERRUPTDI_A7_B; // net ID: CFGINTERRUPTDI lsb: 0  msb: 7 INPUT
		NetFlow* CFGINTERRUPTN_A0_B; // net ID: CFGINTERRUPTN lsb: 0  msb: 0 INPUT
		NetFlow* CFGPMWAKEN_A0_B; // net ID: CFGPMWAKEN lsb: 0  msb: 0 INPUT
		NetFlow* CFGRDENN_A0_B; // net ID: CFGRDENN lsb: 0  msb: 0 INPUT
		NetFlow* CFGREVID_A0_B; // net ID: CFGREVID lsb: 0  msb: 7 INPUT
		NetFlow* CFGREVID_A1_B; // net ID: CFGREVID lsb: 0  msb: 7 INPUT
		NetFlow* CFGREVID_A2_B; // net ID: CFGREVID lsb: 0  msb: 7 INPUT
		NetFlow* CFGREVID_A3_B; // net ID: CFGREVID lsb: 0  msb: 7 INPUT
		NetFlow* CFGREVID_A4_B; // net ID: CFGREVID lsb: 0  msb: 7 INPUT
		NetFlow* CFGREVID_A5_B; // net ID: CFGREVID lsb: 0  msb: 7 INPUT
		NetFlow* CFGREVID_A6_B; // net ID: CFGREVID lsb: 0  msb: 7 INPUT
		NetFlow* CFGREVID_A7_B; // net ID: CFGREVID lsb: 0  msb: 7 INPUT
		NetFlow* CFGSUBSYSID_A0_B; // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
		NetFlow* CFGSUBSYSID_A1_B; // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
		NetFlow* CFGSUBSYSID_A2_B; // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
		NetFlow* CFGSUBSYSID_A3_B; // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
		NetFlow* CFGSUBSYSID_A4_B; // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
		NetFlow* CFGSUBSYSID_A5_B; // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
		NetFlow* CFGSUBSYSID_A6_B; // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
		NetFlow* CFGSUBSYSID_A7_B; // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
		NetFlow* CFGSUBSYSID_A8_B; // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
		NetFlow* CFGSUBSYSID_A9_B; // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
		NetFlow* CFGSUBSYSID_A10_B; // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
		NetFlow* CFGSUBSYSID_A11_B; // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
		NetFlow* CFGSUBSYSID_A12_B; // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
		NetFlow* CFGSUBSYSID_A13_B; // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
		NetFlow* CFGSUBSYSID_A14_B; // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
		NetFlow* CFGSUBSYSID_A15_B; // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
		NetFlow* CFGSUBSYSVENID_A0_B; // net ID: CFGSUBSYSVENID lsb: 0  msb: 15 INPUT
		NetFlow* CFGSUBSYSVENID_A1_B; // net ID: CFGSUBSYSVENID lsb: 0  msb: 15 INPUT
		NetFlow* CFGSUBSYSVENID_A2_B; // net ID: CFGSUBSYSVENID lsb: 0  msb: 15 INPUT
		NetFlow* CFGSUBSYSVENID_A3_B; // net ID: CFGSUBSYSVENID lsb: 0  msb: 15 INPUT
		NetFlow* CFGSUBSYSVENID_A4_B; // net ID: CFGSUBSYSVENID lsb: 0  msb: 15 INPUT
		NetFlow* CFGSUBSYSVENID_A5_B; // net ID: CFGSUBSYSVENID lsb: 0  msb: 15 INPUT
		NetFlow* CFGSUBSYSVENID_A6_B; // net ID: CFGSUBSYSVENID lsb: 0  msb: 15 INPUT
		NetFlow* CFGSUBSYSVENID_A7_B; // net ID: CFGSUBSYSVENID lsb: 0  msb: 15 INPUT
		NetFlow* CFGSUBSYSVENID_A8_B; // net ID: CFGSUBSYSVENID lsb: 0  msb: 15 INPUT
		NetFlow* CFGSUBSYSVENID_A9_B; // net ID: CFGSUBSYSVENID lsb: 0  msb: 15 INPUT
		NetFlow* CFGSUBSYSVENID_A10_B; // net ID: CFGSUBSYSVENID lsb: 0  msb: 15 INPUT
		NetFlow* CFGSUBSYSVENID_A11_B; // net ID: CFGSUBSYSVENID lsb: 0  msb: 15 INPUT
		NetFlow* CFGSUBSYSVENID_A12_B; // net ID: CFGSUBSYSVENID lsb: 0  msb: 15 INPUT
		NetFlow* CFGSUBSYSVENID_A13_B; // net ID: CFGSUBSYSVENID lsb: 0  msb: 15 INPUT
		NetFlow* CFGSUBSYSVENID_A14_B; // net ID: CFGSUBSYSVENID lsb: 0  msb: 15 INPUT
		NetFlow* CFGSUBSYSVENID_A15_B; // net ID: CFGSUBSYSVENID lsb: 0  msb: 15 INPUT
		NetFlow* CFGTRNPENDINGN_A0_B; // net ID: CFGTRNPENDINGN lsb: 0  msb: 0 INPUT
		NetFlow* CFGTURNOFFOKN_A0_B; // net ID: CFGTURNOFFOKN lsb: 0  msb: 0 INPUT
		NetFlow* CFGVENID_A0_B; // net ID: CFGVENID lsb: 0  msb: 15 INPUT
		NetFlow* CFGVENID_A1_B; // net ID: CFGVENID lsb: 0  msb: 15 INPUT
		NetFlow* CFGVENID_A2_B; // net ID: CFGVENID lsb: 0  msb: 15 INPUT
		NetFlow* CFGVENID_A3_B; // net ID: CFGVENID lsb: 0  msb: 15 INPUT
		NetFlow* CFGVENID_A4_B; // net ID: CFGVENID lsb: 0  msb: 15 INPUT
		NetFlow* CFGVENID_A5_B; // net ID: CFGVENID lsb: 0  msb: 15 INPUT
		NetFlow* CFGVENID_A6_B; // net ID: CFGVENID lsb: 0  msb: 15 INPUT
		NetFlow* CFGVENID_A7_B; // net ID: CFGVENID lsb: 0  msb: 15 INPUT
		NetFlow* CFGVENID_A8_B; // net ID: CFGVENID lsb: 0  msb: 15 INPUT
		NetFlow* CFGVENID_A9_B; // net ID: CFGVENID lsb: 0  msb: 15 INPUT
		NetFlow* CFGVENID_A10_B; // net ID: CFGVENID lsb: 0  msb: 15 INPUT
		NetFlow* CFGVENID_A11_B; // net ID: CFGVENID lsb: 0  msb: 15 INPUT
		NetFlow* CFGVENID_A12_B; // net ID: CFGVENID lsb: 0  msb: 15 INPUT
		NetFlow* CFGVENID_A13_B; // net ID: CFGVENID lsb: 0  msb: 15 INPUT
		NetFlow* CFGVENID_A14_B; // net ID: CFGVENID lsb: 0  msb: 15 INPUT
		NetFlow* CFGVENID_A15_B; // net ID: CFGVENID lsb: 0  msb: 15 INPUT
		NetFlow* CLOCKLOCKED_A0_B; // net ID: CLOCKLOCKED lsb: 0  msb: 0 INPUT
		NetFlow* MGTCLK_A0_B; // net ID: MGTCLK lsb: 0  msb: 0 INPUT
		NetFlow* MIMRXRDATA_A0_B; // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
		NetFlow* MIMRXRDATA_A1_B; // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
		NetFlow* MIMRXRDATA_A2_B; // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
		NetFlow* MIMRXRDATA_A3_B; // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
		NetFlow* MIMRXRDATA_A4_B; // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
		NetFlow* MIMRXRDATA_A5_B; // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
		NetFlow* MIMRXRDATA_A6_B; // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
		NetFlow* MIMRXRDATA_A7_B; // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
		NetFlow* MIMRXRDATA_A8_B; // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
		NetFlow* MIMRXRDATA_A9_B; // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
		NetFlow* MIMRXRDATA_A10_B; // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
		NetFlow* MIMRXRDATA_A11_B; // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
		NetFlow* MIMRXRDATA_A12_B; // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
		NetFlow* MIMRXRDATA_A13_B; // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
		NetFlow* MIMRXRDATA_A14_B; // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
		NetFlow* MIMRXRDATA_A15_B; // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
		NetFlow* MIMRXRDATA_A16_B; // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
		NetFlow* MIMRXRDATA_A17_B; // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
		NetFlow* MIMRXRDATA_A18_B; // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
		NetFlow* MIMRXRDATA_A19_B; // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
		NetFlow* MIMRXRDATA_A20_B; // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
		NetFlow* MIMRXRDATA_A21_B; // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
		NetFlow* MIMRXRDATA_A22_B; // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
		NetFlow* MIMRXRDATA_A23_B; // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
		NetFlow* MIMRXRDATA_A24_B; // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
		NetFlow* MIMRXRDATA_A25_B; // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
		NetFlow* MIMRXRDATA_A26_B; // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
		NetFlow* MIMRXRDATA_A27_B; // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
		NetFlow* MIMRXRDATA_A28_B; // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
		NetFlow* MIMRXRDATA_A29_B; // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
		NetFlow* MIMRXRDATA_A30_B; // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
		NetFlow* MIMRXRDATA_A31_B; // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
		NetFlow* MIMRXRDATA_A32_B; // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
		NetFlow* MIMRXRDATA_A33_B; // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
		NetFlow* MIMRXRDATA_A34_B; // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
		NetFlow* MIMTXRDATA_A0_B; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
		NetFlow* MIMTXRDATA_A1_B; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
		NetFlow* MIMTXRDATA_A2_B; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
		NetFlow* MIMTXRDATA_A3_B; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
		NetFlow* MIMTXRDATA_A4_B; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
		NetFlow* MIMTXRDATA_A5_B; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
		NetFlow* MIMTXRDATA_A6_B; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
		NetFlow* MIMTXRDATA_A7_B; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
		NetFlow* MIMTXRDATA_A8_B; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
		NetFlow* MIMTXRDATA_A9_B; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
		NetFlow* MIMTXRDATA_A10_B; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
		NetFlow* MIMTXRDATA_A11_B; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
		NetFlow* MIMTXRDATA_A12_B; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
		NetFlow* MIMTXRDATA_A13_B; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
		NetFlow* MIMTXRDATA_A14_B; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
		NetFlow* MIMTXRDATA_A15_B; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
		NetFlow* MIMTXRDATA_A16_B; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
		NetFlow* MIMTXRDATA_A17_B; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
		NetFlow* MIMTXRDATA_A18_B; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
		NetFlow* MIMTXRDATA_A19_B; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
		NetFlow* MIMTXRDATA_A20_B; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
		NetFlow* MIMTXRDATA_A21_B; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
		NetFlow* MIMTXRDATA_A22_B; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
		NetFlow* MIMTXRDATA_A23_B; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
		NetFlow* MIMTXRDATA_A24_B; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
		NetFlow* MIMTXRDATA_A25_B; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
		NetFlow* MIMTXRDATA_A26_B; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
		NetFlow* MIMTXRDATA_A27_B; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
		NetFlow* MIMTXRDATA_A28_B; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
		NetFlow* MIMTXRDATA_A29_B; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
		NetFlow* MIMTXRDATA_A30_B; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
		NetFlow* MIMTXRDATA_A31_B; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
		NetFlow* MIMTXRDATA_A32_B; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
		NetFlow* MIMTXRDATA_A33_B; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
		NetFlow* MIMTXRDATA_A34_B; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
		NetFlow* MIMTXRDATA_A35_B; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
		NetFlow* PIPEGTRESETDONEA_A0_B; // net ID: PIPEGTRESETDONEA lsb: 0  msb: 0 INPUT
		NetFlow* PIPEGTRESETDONEB_A0_B; // net ID: PIPEGTRESETDONEB lsb: 0  msb: 0 INPUT
		NetFlow* PIPEPHYSTATUSA_A0_B; // net ID: PIPEPHYSTATUSA lsb: 0  msb: 0 INPUT
		NetFlow* PIPEPHYSTATUSB_A0_B; // net ID: PIPEPHYSTATUSB lsb: 0  msb: 0 INPUT
		NetFlow* PIPERXCHARISKA_A0_B; // net ID: PIPERXCHARISKA lsb: 0  msb: 1 INPUT
		NetFlow* PIPERXCHARISKA_A1_B; // net ID: PIPERXCHARISKA lsb: 0  msb: 1 INPUT
		NetFlow* PIPERXCHARISKB_A0_B; // net ID: PIPERXCHARISKB lsb: 0  msb: 1 INPUT
		NetFlow* PIPERXCHARISKB_A1_B; // net ID: PIPERXCHARISKB lsb: 0  msb: 1 INPUT
		NetFlow* PIPERXDATAA_A0_B; // net ID: PIPERXDATAA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERXDATAA_A1_B; // net ID: PIPERXDATAA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERXDATAA_A2_B; // net ID: PIPERXDATAA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERXDATAA_A3_B; // net ID: PIPERXDATAA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERXDATAA_A4_B; // net ID: PIPERXDATAA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERXDATAA_A5_B; // net ID: PIPERXDATAA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERXDATAA_A6_B; // net ID: PIPERXDATAA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERXDATAA_A7_B; // net ID: PIPERXDATAA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERXDATAA_A8_B; // net ID: PIPERXDATAA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERXDATAA_A9_B; // net ID: PIPERXDATAA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERXDATAA_A10_B; // net ID: PIPERXDATAA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERXDATAA_A11_B; // net ID: PIPERXDATAA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERXDATAA_A12_B; // net ID: PIPERXDATAA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERXDATAA_A13_B; // net ID: PIPERXDATAA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERXDATAA_A14_B; // net ID: PIPERXDATAA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERXDATAA_A15_B; // net ID: PIPERXDATAA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERXDATAB_A0_B; // net ID: PIPERXDATAB lsb: 0  msb: 15 INPUT
		NetFlow* PIPERXDATAB_A1_B; // net ID: PIPERXDATAB lsb: 0  msb: 15 INPUT
		NetFlow* PIPERXDATAB_A2_B; // net ID: PIPERXDATAB lsb: 0  msb: 15 INPUT
		NetFlow* PIPERXDATAB_A3_B; // net ID: PIPERXDATAB lsb: 0  msb: 15 INPUT
		NetFlow* PIPERXDATAB_A4_B; // net ID: PIPERXDATAB lsb: 0  msb: 15 INPUT
		NetFlow* PIPERXDATAB_A5_B; // net ID: PIPERXDATAB lsb: 0  msb: 15 INPUT
		NetFlow* PIPERXDATAB_A6_B; // net ID: PIPERXDATAB lsb: 0  msb: 15 INPUT
		NetFlow* PIPERXDATAB_A7_B; // net ID: PIPERXDATAB lsb: 0  msb: 15 INPUT
		NetFlow* PIPERXDATAB_A8_B; // net ID: PIPERXDATAB lsb: 0  msb: 15 INPUT
		NetFlow* PIPERXDATAB_A9_B; // net ID: PIPERXDATAB lsb: 0  msb: 15 INPUT
		NetFlow* PIPERXDATAB_A10_B; // net ID: PIPERXDATAB lsb: 0  msb: 15 INPUT
		NetFlow* PIPERXDATAB_A11_B; // net ID: PIPERXDATAB lsb: 0  msb: 15 INPUT
		NetFlow* PIPERXDATAB_A12_B; // net ID: PIPERXDATAB lsb: 0  msb: 15 INPUT
		NetFlow* PIPERXDATAB_A13_B; // net ID: PIPERXDATAB lsb: 0  msb: 15 INPUT
		NetFlow* PIPERXDATAB_A14_B; // net ID: PIPERXDATAB lsb: 0  msb: 15 INPUT
		NetFlow* PIPERXDATAB_A15_B; // net ID: PIPERXDATAB lsb: 0  msb: 15 INPUT
		NetFlow* PIPERXENTERELECIDLEA_A0_B; // net ID: PIPERXENTERELECIDLEA lsb: 0  msb: 0 INPUT
		NetFlow* PIPERXENTERELECIDLEB_A0_B; // net ID: PIPERXENTERELECIDLEB lsb: 0  msb: 0 INPUT
		NetFlow* PIPERXSTATUSA_A0_B; // net ID: PIPERXSTATUSA lsb: 0  msb: 2 INPUT
		NetFlow* PIPERXSTATUSA_A1_B; // net ID: PIPERXSTATUSA lsb: 0  msb: 2 INPUT
		NetFlow* PIPERXSTATUSA_A2_B; // net ID: PIPERXSTATUSA lsb: 0  msb: 2 INPUT
		NetFlow* PIPERXSTATUSB_A0_B; // net ID: PIPERXSTATUSB lsb: 0  msb: 2 INPUT
		NetFlow* PIPERXSTATUSB_A1_B; // net ID: PIPERXSTATUSB lsb: 0  msb: 2 INPUT
		NetFlow* PIPERXSTATUSB_A2_B; // net ID: PIPERXSTATUSB lsb: 0  msb: 2 INPUT
		NetFlow* SYSRESETN_A0_B; // net ID: SYSRESETN lsb: 0  msb: 0 INPUT
		NetFlow* TRNFCSEL_A0_B; // net ID: TRNFCSEL lsb: 0  msb: 2 INPUT
		NetFlow* TRNFCSEL_A1_B; // net ID: TRNFCSEL lsb: 0  msb: 2 INPUT
		NetFlow* TRNFCSEL_A2_B; // net ID: TRNFCSEL lsb: 0  msb: 2 INPUT
		NetFlow* TRNRDSTRDYN_A0_B; // net ID: TRNRDSTRDYN lsb: 0  msb: 0 INPUT
		NetFlow* TRNRNPOKN_A0_B; // net ID: TRNRNPOKN lsb: 0  msb: 0 INPUT
		NetFlow* TRNTCFGGNTN_A0_B; // net ID: TRNTCFGGNTN lsb: 0  msb: 0 INPUT
		NetFlow* TRNTD_A0_B; // net ID: TRNTD lsb: 0  msb: 31 INPUT
		NetFlow* TRNTD_A1_B; // net ID: TRNTD lsb: 0  msb: 31 INPUT
		NetFlow* TRNTD_A2_B; // net ID: TRNTD lsb: 0  msb: 31 INPUT
		NetFlow* TRNTD_A3_B; // net ID: TRNTD lsb: 0  msb: 31 INPUT
		NetFlow* TRNTD_A4_B; // net ID: TRNTD lsb: 0  msb: 31 INPUT
		NetFlow* TRNTD_A5_B; // net ID: TRNTD lsb: 0  msb: 31 INPUT
		NetFlow* TRNTD_A6_B; // net ID: TRNTD lsb: 0  msb: 31 INPUT
		NetFlow* TRNTD_A7_B; // net ID: TRNTD lsb: 0  msb: 31 INPUT
		NetFlow* TRNTD_A8_B; // net ID: TRNTD lsb: 0  msb: 31 INPUT
		NetFlow* TRNTD_A9_B; // net ID: TRNTD lsb: 0  msb: 31 INPUT
		NetFlow* TRNTD_A10_B; // net ID: TRNTD lsb: 0  msb: 31 INPUT
		NetFlow* TRNTD_A11_B; // net ID: TRNTD lsb: 0  msb: 31 INPUT
		NetFlow* TRNTD_A12_B; // net ID: TRNTD lsb: 0  msb: 31 INPUT
		NetFlow* TRNTD_A13_B; // net ID: TRNTD lsb: 0  msb: 31 INPUT
		NetFlow* TRNTD_A14_B; // net ID: TRNTD lsb: 0  msb: 31 INPUT
		NetFlow* TRNTD_A15_B; // net ID: TRNTD lsb: 0  msb: 31 INPUT
		NetFlow* TRNTD_A16_B; // net ID: TRNTD lsb: 0  msb: 31 INPUT
		NetFlow* TRNTD_A17_B; // net ID: TRNTD lsb: 0  msb: 31 INPUT
		NetFlow* TRNTD_A18_B; // net ID: TRNTD lsb: 0  msb: 31 INPUT
		NetFlow* TRNTD_A19_B; // net ID: TRNTD lsb: 0  msb: 31 INPUT
		NetFlow* TRNTD_A20_B; // net ID: TRNTD lsb: 0  msb: 31 INPUT
		NetFlow* TRNTD_A21_B; // net ID: TRNTD lsb: 0  msb: 31 INPUT
		NetFlow* TRNTD_A22_B; // net ID: TRNTD lsb: 0  msb: 31 INPUT
		NetFlow* TRNTD_A23_B; // net ID: TRNTD lsb: 0  msb: 31 INPUT
		NetFlow* TRNTD_A24_B; // net ID: TRNTD lsb: 0  msb: 31 INPUT
		NetFlow* TRNTD_A25_B; // net ID: TRNTD lsb: 0  msb: 31 INPUT
		NetFlow* TRNTD_A26_B; // net ID: TRNTD lsb: 0  msb: 31 INPUT
		NetFlow* TRNTD_A27_B; // net ID: TRNTD lsb: 0  msb: 31 INPUT
		NetFlow* TRNTD_A28_B; // net ID: TRNTD lsb: 0  msb: 31 INPUT
		NetFlow* TRNTD_A29_B; // net ID: TRNTD lsb: 0  msb: 31 INPUT
		NetFlow* TRNTD_A30_B; // net ID: TRNTD lsb: 0  msb: 31 INPUT
		NetFlow* TRNTD_A31_B; // net ID: TRNTD lsb: 0  msb: 31 INPUT
		NetFlow* TRNTEOFN_A0_B; // net ID: TRNTEOFN lsb: 0  msb: 0 INPUT
		NetFlow* TRNTERRFWDN_A0_B; // net ID: TRNTERRFWDN lsb: 0  msb: 0 INPUT
		NetFlow* TRNTSOFN_A0_B; // net ID: TRNTSOFN lsb: 0  msb: 0 INPUT
		NetFlow* TRNTSRCDSCN_A0_B; // net ID: TRNTSRCDSCN lsb: 0  msb: 0 INPUT
		NetFlow* TRNTSRCRDYN_A0_B; // net ID: TRNTSRCRDYN lsb: 0  msb: 0 INPUT
		NetFlow* TRNTSTRN_A0_B; // net ID: TRNTSTRN lsb: 0  msb: 0 INPUT
		NetFlow* USERCLK_A0_B; // net ID: USERCLK lsb: 0  msb: 0 INPUT
		
		public: X_PCIE_A1(
			const char * name,
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_int_t BAR0, // Default: 32'h00000000
			parameter_int_t BAR1, // Default: 32'h00000000
			parameter_int_t BAR2, // Default: 32'h00000000
			parameter_int_t BAR3, // Default: 32'h00000000
			parameter_int_t BAR4, // Default: 32'h00000000
			parameter_int_t BAR5, // Default: 32'h00000000
			parameter_int_t CARDBUS_CIS_POINTER, // Default: 32'h00000000
			parameter_int_t CLASS_CODE, // Default: 24'h000000
			parameter_int_t DEV_CAP_ENDPOINT_L0S_LATENCY, // Default: 7
			parameter_int_t DEV_CAP_ENDPOINT_L1_LATENCY, // Default: 7
			parameter_enum_t DEV_CAP_EXT_TAG_SUPPORTED, // Default: "FALSE"
			parameter_int_t DEV_CAP_MAX_PAYLOAD_SUPPORTED, // Default: 2
			parameter_int_t DEV_CAP_PHANTOM_FUNCTIONS_SUPPORT, // Default: 0
			parameter_enum_t DEV_CAP_ROLE_BASED_ERROR, // Default: "TRUE"
			parameter_enum_t DISABLE_BAR_FILTERING, // Default: "FALSE"
			parameter_enum_t DISABLE_ID_CHECK, // Default: "FALSE"
			parameter_enum_t DISABLE_SCRAMBLING, // Default: "FALSE"
			parameter_enum_t ENABLE_RX_TD_ECRC_TRIM, // Default: "FALSE"
			parameter_int_t EXPANSION_ROM, // Default: 22'h000000
			parameter_enum_t FAST_TRAIN, // Default: "FALSE"
			parameter_int_t GTP_SEL, // Default: 0
			parameter_int_t LINK_CAP_ASPM_SUPPORT, // Default: 1
			parameter_int_t LINK_CAP_L0S_EXIT_LATENCY, // Default: 7
			parameter_int_t LINK_CAP_L1_EXIT_LATENCY, // Default: 7
			parameter_enum_t LINK_STATUS_SLOT_CLOCK_CONFIG, // Default: "FALSE"
			parameter_int_t LL_ACK_TIMEOUT, // Default: 15'h0204
			parameter_enum_t LL_ACK_TIMEOUT_EN, // Default: "FALSE"
			parameter_int_t LL_REPLAY_TIMEOUT, // Default: 15'h060D
			parameter_enum_t LL_REPLAY_TIMEOUT_EN, // Default: "FALSE"
			parameter_int_t MSI_CAP_MULTIMSGCAP, // Default: 0
			parameter_int_t MSI_CAP_MULTIMSG_EXTENSION, // Default: 0
			parameter_int_t PCIE_CAP_CAPABILITY_VERSION, // Default: 4'h1
			parameter_int_t PCIE_CAP_DEVICE_PORT_TYPE, // Default: 4'h0
			parameter_int_t PCIE_CAP_INT_MSG_NUM, // Default: 5'b00000
			parameter_enum_t PCIE_CAP_SLOT_IMPLEMENTED, // Default: "FALSE"
			parameter_int_t PCIE_GENERIC, // Default: 12'h000
			parameter_enum_t PLM_AUTO_CONFIG, // Default: "FALSE"
			parameter_int_t PM_CAP_AUXCURRENT, // Default: 0
			parameter_enum_t PM_CAP_D1SUPPORT, // Default: "TRUE"
			parameter_enum_t PM_CAP_D2SUPPORT, // Default: "TRUE"
			parameter_enum_t PM_CAP_DSI, // Default: "FALSE"
			parameter_int_t PM_CAP_PMESUPPORT, // Default: 5'b01111
			parameter_enum_t PM_CAP_PME_CLOCK, // Default: "FALSE"
			parameter_int_t PM_CAP_VERSION, // Default: 3
			parameter_int_t PM_DATA0, // Default: 8'h1E
			parameter_int_t PM_DATA1, // Default: 8'h1E
			parameter_int_t PM_DATA2, // Default: 8'h1E
			parameter_int_t PM_DATA3, // Default: 8'h1E
			parameter_int_t PM_DATA4, // Default: 8'h1E
			parameter_int_t PM_DATA5, // Default: 8'h1E
			parameter_int_t PM_DATA6, // Default: 8'h1E
			parameter_int_t PM_DATA7, // Default: 8'h1E
			parameter_int_t PM_DATA_SCALE0, // Default: 2'b01
			parameter_int_t PM_DATA_SCALE1, // Default: 2'b01
			parameter_int_t PM_DATA_SCALE2, // Default: 2'b01
			parameter_int_t PM_DATA_SCALE3, // Default: 2'b01
			parameter_int_t PM_DATA_SCALE4, // Default: 2'b01
			parameter_int_t PM_DATA_SCALE5, // Default: 2'b01
			parameter_int_t PM_DATA_SCALE6, // Default: 2'b01
			parameter_int_t PM_DATA_SCALE7, // Default: 2'b01
			parameter_string_t SIM_VERSION, // Default: "1.0"
			parameter_enum_t SLOT_CAP_ATT_BUTTON_PRESENT, // Default: "FALSE"
			parameter_enum_t SLOT_CAP_ATT_INDICATOR_PRESENT, // Default: "FALSE"
			parameter_enum_t SLOT_CAP_POWER_INDICATOR_PRESENT, // Default: "FALSE"
			parameter_int_t TL_RX_RAM_RADDR_LATENCY, // Default: 1
			parameter_int_t TL_RX_RAM_RDATA_LATENCY, // Default: 2
			parameter_int_t TL_RX_RAM_WRITE_LATENCY, // Default: 0
			parameter_enum_t TL_TFC_DISABLE, // Default: "FALSE"
			parameter_enum_t TL_TX_CHECKS_DISABLE, // Default: "FALSE"
			parameter_int_t TL_TX_RAM_RADDR_LATENCY, // Default: 0
			parameter_int_t TL_TX_RAM_RDATA_LATENCY, // Default: 2
			parameter_enum_t USR_CFG, // Default: "FALSE"
			parameter_enum_t USR_EXT_CFG, // Default: "FALSE"
			parameter_enum_t VC0_CPL_INFINITE, // Default: "TRUE"
			parameter_int_t VC0_RX_RAM_LIMIT, // Default: 12'h01E
			parameter_int_t VC0_TOTAL_CREDITS_CD, // Default: 104
			parameter_int_t VC0_TOTAL_CREDITS_CH, // Default: 36
			parameter_int_t VC0_TOTAL_CREDITS_NPH, // Default: 8
			parameter_int_t VC0_TOTAL_CREDITS_PD, // Default: 288
			parameter_int_t VC0_TOTAL_CREDITS_PH, // Default: 32
			parameter_int_t VC0_TX_LASTPACKET, // Default: 31
			//Verilog Ports in definition order:
			NetFlow* CFGBUSNUMBER_A0_B, // net ID: CFGBUSNUMBER lsb: 0  msb: 7 OUTPUT
			NetFlow* CFGBUSNUMBER_A1_B, // net ID: CFGBUSNUMBER lsb: 0  msb: 7 OUTPUT
			NetFlow* CFGBUSNUMBER_A2_B, // net ID: CFGBUSNUMBER lsb: 0  msb: 7 OUTPUT
			NetFlow* CFGBUSNUMBER_A3_B, // net ID: CFGBUSNUMBER lsb: 0  msb: 7 OUTPUT
			NetFlow* CFGBUSNUMBER_A4_B, // net ID: CFGBUSNUMBER lsb: 0  msb: 7 OUTPUT
			NetFlow* CFGBUSNUMBER_A5_B, // net ID: CFGBUSNUMBER lsb: 0  msb: 7 OUTPUT
			NetFlow* CFGBUSNUMBER_A6_B, // net ID: CFGBUSNUMBER lsb: 0  msb: 7 OUTPUT
			NetFlow* CFGBUSNUMBER_A7_B, // net ID: CFGBUSNUMBER lsb: 0  msb: 7 OUTPUT
			NetFlow* CFGCOMMANDBUSMASTERENABLE_A0_B, // net ID: CFGCOMMANDBUSMASTERENABLE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGCOMMANDINTERRUPTDISABLE_A0_B, // net ID: CFGCOMMANDINTERRUPTDISABLE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGCOMMANDIOENABLE_A0_B, // net ID: CFGCOMMANDIOENABLE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGCOMMANDMEMENABLE_A0_B, // net ID: CFGCOMMANDMEMENABLE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGCOMMANDSERREN_A0_B, // net ID: CFGCOMMANDSERREN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVCONTROLAUXPOWEREN_A0_B, // net ID: CFGDEVCONTROLAUXPOWEREN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVCONTROLCORRERRREPORTINGEN_A0_B, // net ID: CFGDEVCONTROLCORRERRREPORTINGEN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVCONTROLENABLERO_A0_B, // net ID: CFGDEVCONTROLENABLERO lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVCONTROLEXTTAGEN_A0_B, // net ID: CFGDEVCONTROLEXTTAGEN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVCONTROLFATALERRREPORTINGEN_A0_B, // net ID: CFGDEVCONTROLFATALERRREPORTINGEN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVCONTROLMAXPAYLOAD_A0_B, // net ID: CFGDEVCONTROLMAXPAYLOAD lsb: 0  msb: 2 OUTPUT
			NetFlow* CFGDEVCONTROLMAXPAYLOAD_A1_B, // net ID: CFGDEVCONTROLMAXPAYLOAD lsb: 0  msb: 2 OUTPUT
			NetFlow* CFGDEVCONTROLMAXPAYLOAD_A2_B, // net ID: CFGDEVCONTROLMAXPAYLOAD lsb: 0  msb: 2 OUTPUT
			NetFlow* CFGDEVCONTROLMAXREADREQ_A0_B, // net ID: CFGDEVCONTROLMAXREADREQ lsb: 0  msb: 2 OUTPUT
			NetFlow* CFGDEVCONTROLMAXREADREQ_A1_B, // net ID: CFGDEVCONTROLMAXREADREQ lsb: 0  msb: 2 OUTPUT
			NetFlow* CFGDEVCONTROLMAXREADREQ_A2_B, // net ID: CFGDEVCONTROLMAXREADREQ lsb: 0  msb: 2 OUTPUT
			NetFlow* CFGDEVCONTROLNONFATALREPORTINGEN_A0_B, // net ID: CFGDEVCONTROLNONFATALREPORTINGEN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVCONTROLNOSNOOPEN_A0_B, // net ID: CFGDEVCONTROLNOSNOOPEN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVCONTROLPHANTOMEN_A0_B, // net ID: CFGDEVCONTROLPHANTOMEN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVCONTROLURERRREPORTINGEN_A0_B, // net ID: CFGDEVCONTROLURERRREPORTINGEN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVICENUMBER_A0_B, // net ID: CFGDEVICENUMBER lsb: 0  msb: 4 OUTPUT
			NetFlow* CFGDEVICENUMBER_A1_B, // net ID: CFGDEVICENUMBER lsb: 0  msb: 4 OUTPUT
			NetFlow* CFGDEVICENUMBER_A2_B, // net ID: CFGDEVICENUMBER lsb: 0  msb: 4 OUTPUT
			NetFlow* CFGDEVICENUMBER_A3_B, // net ID: CFGDEVICENUMBER lsb: 0  msb: 4 OUTPUT
			NetFlow* CFGDEVICENUMBER_A4_B, // net ID: CFGDEVICENUMBER lsb: 0  msb: 4 OUTPUT
			NetFlow* CFGDEVSTATUSCORRERRDETECTED_A0_B, // net ID: CFGDEVSTATUSCORRERRDETECTED lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVSTATUSFATALERRDETECTED_A0_B, // net ID: CFGDEVSTATUSFATALERRDETECTED lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVSTATUSNONFATALERRDETECTED_A0_B, // net ID: CFGDEVSTATUSNONFATALERRDETECTED lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVSTATUSURDETECTED_A0_B, // net ID: CFGDEVSTATUSURDETECTED lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDO_A0_B, // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
			NetFlow* CFGDO_A1_B, // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
			NetFlow* CFGDO_A2_B, // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
			NetFlow* CFGDO_A3_B, // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
			NetFlow* CFGDO_A4_B, // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
			NetFlow* CFGDO_A5_B, // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
			NetFlow* CFGDO_A6_B, // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
			NetFlow* CFGDO_A7_B, // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
			NetFlow* CFGDO_A8_B, // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
			NetFlow* CFGDO_A9_B, // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
			NetFlow* CFGDO_A10_B, // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
			NetFlow* CFGDO_A11_B, // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
			NetFlow* CFGDO_A12_B, // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
			NetFlow* CFGDO_A13_B, // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
			NetFlow* CFGDO_A14_B, // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
			NetFlow* CFGDO_A15_B, // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
			NetFlow* CFGDO_A16_B, // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
			NetFlow* CFGDO_A17_B, // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
			NetFlow* CFGDO_A18_B, // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
			NetFlow* CFGDO_A19_B, // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
			NetFlow* CFGDO_A20_B, // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
			NetFlow* CFGDO_A21_B, // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
			NetFlow* CFGDO_A22_B, // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
			NetFlow* CFGDO_A23_B, // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
			NetFlow* CFGDO_A24_B, // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
			NetFlow* CFGDO_A25_B, // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
			NetFlow* CFGDO_A26_B, // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
			NetFlow* CFGDO_A27_B, // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
			NetFlow* CFGDO_A28_B, // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
			NetFlow* CFGDO_A29_B, // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
			NetFlow* CFGDO_A30_B, // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
			NetFlow* CFGDO_A31_B, // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
			NetFlow* CFGERRCPLRDYN_A0_B, // net ID: CFGERRCPLRDYN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGFUNCTIONNUMBER_A0_B, // net ID: CFGFUNCTIONNUMBER lsb: 0  msb: 2 OUTPUT
			NetFlow* CFGFUNCTIONNUMBER_A1_B, // net ID: CFGFUNCTIONNUMBER lsb: 0  msb: 2 OUTPUT
			NetFlow* CFGFUNCTIONNUMBER_A2_B, // net ID: CFGFUNCTIONNUMBER lsb: 0  msb: 2 OUTPUT
			NetFlow* CFGINTERRUPTDO_A0_B, // net ID: CFGINTERRUPTDO lsb: 0  msb: 7 OUTPUT
			NetFlow* CFGINTERRUPTDO_A1_B, // net ID: CFGINTERRUPTDO lsb: 0  msb: 7 OUTPUT
			NetFlow* CFGINTERRUPTDO_A2_B, // net ID: CFGINTERRUPTDO lsb: 0  msb: 7 OUTPUT
			NetFlow* CFGINTERRUPTDO_A3_B, // net ID: CFGINTERRUPTDO lsb: 0  msb: 7 OUTPUT
			NetFlow* CFGINTERRUPTDO_A4_B, // net ID: CFGINTERRUPTDO lsb: 0  msb: 7 OUTPUT
			NetFlow* CFGINTERRUPTDO_A5_B, // net ID: CFGINTERRUPTDO lsb: 0  msb: 7 OUTPUT
			NetFlow* CFGINTERRUPTDO_A6_B, // net ID: CFGINTERRUPTDO lsb: 0  msb: 7 OUTPUT
			NetFlow* CFGINTERRUPTDO_A7_B, // net ID: CFGINTERRUPTDO lsb: 0  msb: 7 OUTPUT
			NetFlow* CFGINTERRUPTMMENABLE_A0_B, // net ID: CFGINTERRUPTMMENABLE lsb: 0  msb: 2 OUTPUT
			NetFlow* CFGINTERRUPTMMENABLE_A1_B, // net ID: CFGINTERRUPTMMENABLE lsb: 0  msb: 2 OUTPUT
			NetFlow* CFGINTERRUPTMMENABLE_A2_B, // net ID: CFGINTERRUPTMMENABLE lsb: 0  msb: 2 OUTPUT
			NetFlow* CFGINTERRUPTMSIENABLE_A0_B, // net ID: CFGINTERRUPTMSIENABLE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGINTERRUPTRDYN_A0_B, // net ID: CFGINTERRUPTRDYN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGLINKCONTOLRCB_A0_B, // net ID: CFGLINKCONTOLRCB lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGLINKCONTROLASPMCONTROL_A0_B, // net ID: CFGLINKCONTROLASPMCONTROL lsb: 0  msb: 1 OUTPUT
			NetFlow* CFGLINKCONTROLASPMCONTROL_A1_B, // net ID: CFGLINKCONTROLASPMCONTROL lsb: 0  msb: 1 OUTPUT
			NetFlow* CFGLINKCONTROLCOMMONCLOCK_A0_B, // net ID: CFGLINKCONTROLCOMMONCLOCK lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGLINKCONTROLEXTENDEDSYNC_A0_B, // net ID: CFGLINKCONTROLEXTENDEDSYNC lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGLTSSMSTATE_A0_B, // net ID: CFGLTSSMSTATE lsb: 0  msb: 4 OUTPUT
			NetFlow* CFGLTSSMSTATE_A1_B, // net ID: CFGLTSSMSTATE lsb: 0  msb: 4 OUTPUT
			NetFlow* CFGLTSSMSTATE_A2_B, // net ID: CFGLTSSMSTATE lsb: 0  msb: 4 OUTPUT
			NetFlow* CFGLTSSMSTATE_A3_B, // net ID: CFGLTSSMSTATE lsb: 0  msb: 4 OUTPUT
			NetFlow* CFGLTSSMSTATE_A4_B, // net ID: CFGLTSSMSTATE lsb: 0  msb: 4 OUTPUT
			NetFlow* CFGPCIELINKSTATEN_A0_B, // net ID: CFGPCIELINKSTATEN lsb: 0  msb: 2 OUTPUT
			NetFlow* CFGPCIELINKSTATEN_A1_B, // net ID: CFGPCIELINKSTATEN lsb: 0  msb: 2 OUTPUT
			NetFlow* CFGPCIELINKSTATEN_A2_B, // net ID: CFGPCIELINKSTATEN lsb: 0  msb: 2 OUTPUT
			NetFlow* CFGRDWRDONEN_A0_B, // net ID: CFGRDWRDONEN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGTOTURNOFFN_A0_B, // net ID: CFGTOTURNOFFN lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGBADDLLPSTATUS_A0_B, // net ID: DBGBADDLLPSTATUS lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGBADTLPLCRC_A0_B, // net ID: DBGBADTLPLCRC lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGBADTLPSEQNUM_A0_B, // net ID: DBGBADTLPSEQNUM lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGBADTLPSTATUS_A0_B, // net ID: DBGBADTLPSTATUS lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGDLPROTOCOLSTATUS_A0_B, // net ID: DBGDLPROTOCOLSTATUS lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGFCPROTOCOLERRSTATUS_A0_B, // net ID: DBGFCPROTOCOLERRSTATUS lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGMLFRMDLENGTH_A0_B, // net ID: DBGMLFRMDLENGTH lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGMLFRMDMPS_A0_B, // net ID: DBGMLFRMDMPS lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGMLFRMDTCVC_A0_B, // net ID: DBGMLFRMDTCVC lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGMLFRMDTLPSTATUS_A0_B, // net ID: DBGMLFRMDTLPSTATUS lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGMLFRMDUNRECTYPE_A0_B, // net ID: DBGMLFRMDUNRECTYPE lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGPOISTLPSTATUS_A0_B, // net ID: DBGPOISTLPSTATUS lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGRCVROVERFLOWSTATUS_A0_B, // net ID: DBGRCVROVERFLOWSTATUS lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGREGDETECTEDCORRECTABLE_A0_B, // net ID: DBGREGDETECTEDCORRECTABLE lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGREGDETECTEDFATAL_A0_B, // net ID: DBGREGDETECTEDFATAL lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGREGDETECTEDNONFATAL_A0_B, // net ID: DBGREGDETECTEDNONFATAL lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGREGDETECTEDUNSUPPORTED_A0_B, // net ID: DBGREGDETECTEDUNSUPPORTED lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGRPLYROLLOVERSTATUS_A0_B, // net ID: DBGRPLYROLLOVERSTATUS lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGRPLYTIMEOUTSTATUS_A0_B, // net ID: DBGRPLYTIMEOUTSTATUS lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGURNOBARHIT_A0_B, // net ID: DBGURNOBARHIT lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGURPOISCFGWR_A0_B, // net ID: DBGURPOISCFGWR lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGURSTATUS_A0_B, // net ID: DBGURSTATUS lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGURUNSUPMSG_A0_B, // net ID: DBGURUNSUPMSG lsb: 0  msb: 0 OUTPUT
			NetFlow* MIMRXRADDR_A0_B, // net ID: MIMRXRADDR lsb: 0  msb: 11 OUTPUT
			NetFlow* MIMRXRADDR_A1_B, // net ID: MIMRXRADDR lsb: 0  msb: 11 OUTPUT
			NetFlow* MIMRXRADDR_A2_B, // net ID: MIMRXRADDR lsb: 0  msb: 11 OUTPUT
			NetFlow* MIMRXRADDR_A3_B, // net ID: MIMRXRADDR lsb: 0  msb: 11 OUTPUT
			NetFlow* MIMRXRADDR_A4_B, // net ID: MIMRXRADDR lsb: 0  msb: 11 OUTPUT
			NetFlow* MIMRXRADDR_A5_B, // net ID: MIMRXRADDR lsb: 0  msb: 11 OUTPUT
			NetFlow* MIMRXRADDR_A6_B, // net ID: MIMRXRADDR lsb: 0  msb: 11 OUTPUT
			NetFlow* MIMRXRADDR_A7_B, // net ID: MIMRXRADDR lsb: 0  msb: 11 OUTPUT
			NetFlow* MIMRXRADDR_A8_B, // net ID: MIMRXRADDR lsb: 0  msb: 11 OUTPUT
			NetFlow* MIMRXRADDR_A9_B, // net ID: MIMRXRADDR lsb: 0  msb: 11 OUTPUT
			NetFlow* MIMRXRADDR_A10_B, // net ID: MIMRXRADDR lsb: 0  msb: 11 OUTPUT
			NetFlow* MIMRXRADDR_A11_B, // net ID: MIMRXRADDR lsb: 0  msb: 11 OUTPUT
			NetFlow* MIMRXREN_A0_B, // net ID: MIMRXREN lsb: 0  msb: 0 OUTPUT
			NetFlow* MIMRXWADDR_A0_B, // net ID: MIMRXWADDR lsb: 0  msb: 11 OUTPUT
			NetFlow* MIMRXWADDR_A1_B, // net ID: MIMRXWADDR lsb: 0  msb: 11 OUTPUT
			NetFlow* MIMRXWADDR_A2_B, // net ID: MIMRXWADDR lsb: 0  msb: 11 OUTPUT
			NetFlow* MIMRXWADDR_A3_B, // net ID: MIMRXWADDR lsb: 0  msb: 11 OUTPUT
			NetFlow* MIMRXWADDR_A4_B, // net ID: MIMRXWADDR lsb: 0  msb: 11 OUTPUT
			NetFlow* MIMRXWADDR_A5_B, // net ID: MIMRXWADDR lsb: 0  msb: 11 OUTPUT
			NetFlow* MIMRXWADDR_A6_B, // net ID: MIMRXWADDR lsb: 0  msb: 11 OUTPUT
			NetFlow* MIMRXWADDR_A7_B, // net ID: MIMRXWADDR lsb: 0  msb: 11 OUTPUT
			NetFlow* MIMRXWADDR_A8_B, // net ID: MIMRXWADDR lsb: 0  msb: 11 OUTPUT
			NetFlow* MIMRXWADDR_A9_B, // net ID: MIMRXWADDR lsb: 0  msb: 11 OUTPUT
			NetFlow* MIMRXWADDR_A10_B, // net ID: MIMRXWADDR lsb: 0  msb: 11 OUTPUT
			NetFlow* MIMRXWADDR_A11_B, // net ID: MIMRXWADDR lsb: 0  msb: 11 OUTPUT
			NetFlow* MIMRXWDATA_A0_B, // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
			NetFlow* MIMRXWDATA_A1_B, // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
			NetFlow* MIMRXWDATA_A2_B, // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
			NetFlow* MIMRXWDATA_A3_B, // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
			NetFlow* MIMRXWDATA_A4_B, // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
			NetFlow* MIMRXWDATA_A5_B, // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
			NetFlow* MIMRXWDATA_A6_B, // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
			NetFlow* MIMRXWDATA_A7_B, // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
			NetFlow* MIMRXWDATA_A8_B, // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
			NetFlow* MIMRXWDATA_A9_B, // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
			NetFlow* MIMRXWDATA_A10_B, // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
			NetFlow* MIMRXWDATA_A11_B, // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
			NetFlow* MIMRXWDATA_A12_B, // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
			NetFlow* MIMRXWDATA_A13_B, // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
			NetFlow* MIMRXWDATA_A14_B, // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
			NetFlow* MIMRXWDATA_A15_B, // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
			NetFlow* MIMRXWDATA_A16_B, // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
			NetFlow* MIMRXWDATA_A17_B, // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
			NetFlow* MIMRXWDATA_A18_B, // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
			NetFlow* MIMRXWDATA_A19_B, // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
			NetFlow* MIMRXWDATA_A20_B, // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
			NetFlow* MIMRXWDATA_A21_B, // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
			NetFlow* MIMRXWDATA_A22_B, // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
			NetFlow* MIMRXWDATA_A23_B, // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
			NetFlow* MIMRXWDATA_A24_B, // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
			NetFlow* MIMRXWDATA_A25_B, // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
			NetFlow* MIMRXWDATA_A26_B, // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
			NetFlow* MIMRXWDATA_A27_B, // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
			NetFlow* MIMRXWDATA_A28_B, // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
			NetFlow* MIMRXWDATA_A29_B, // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
			NetFlow* MIMRXWDATA_A30_B, // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
			NetFlow* MIMRXWDATA_A31_B, // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
			NetFlow* MIMRXWDATA_A32_B, // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
			NetFlow* MIMRXWDATA_A33_B, // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
			NetFlow* MIMRXWDATA_A34_B, // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
			NetFlow* MIMRXWEN_A0_B, // net ID: MIMRXWEN lsb: 0  msb: 0 OUTPUT
			NetFlow* MIMTXRADDR_A0_B, // net ID: MIMTXRADDR lsb: 0  msb: 11 OUTPUT
			NetFlow* MIMTXRADDR_A1_B, // net ID: MIMTXRADDR lsb: 0  msb: 11 OUTPUT
			NetFlow* MIMTXRADDR_A2_B, // net ID: MIMTXRADDR lsb: 0  msb: 11 OUTPUT
			NetFlow* MIMTXRADDR_A3_B, // net ID: MIMTXRADDR lsb: 0  msb: 11 OUTPUT
			NetFlow* MIMTXRADDR_A4_B, // net ID: MIMTXRADDR lsb: 0  msb: 11 OUTPUT
			NetFlow* MIMTXRADDR_A5_B, // net ID: MIMTXRADDR lsb: 0  msb: 11 OUTPUT
			NetFlow* MIMTXRADDR_A6_B, // net ID: MIMTXRADDR lsb: 0  msb: 11 OUTPUT
			NetFlow* MIMTXRADDR_A7_B, // net ID: MIMTXRADDR lsb: 0  msb: 11 OUTPUT
			NetFlow* MIMTXRADDR_A8_B, // net ID: MIMTXRADDR lsb: 0  msb: 11 OUTPUT
			NetFlow* MIMTXRADDR_A9_B, // net ID: MIMTXRADDR lsb: 0  msb: 11 OUTPUT
			NetFlow* MIMTXRADDR_A10_B, // net ID: MIMTXRADDR lsb: 0  msb: 11 OUTPUT
			NetFlow* MIMTXRADDR_A11_B, // net ID: MIMTXRADDR lsb: 0  msb: 11 OUTPUT
			NetFlow* MIMTXREN_A0_B, // net ID: MIMTXREN lsb: 0  msb: 0 OUTPUT
			NetFlow* MIMTXWADDR_A0_B, // net ID: MIMTXWADDR lsb: 0  msb: 11 OUTPUT
			NetFlow* MIMTXWADDR_A1_B, // net ID: MIMTXWADDR lsb: 0  msb: 11 OUTPUT
			NetFlow* MIMTXWADDR_A2_B, // net ID: MIMTXWADDR lsb: 0  msb: 11 OUTPUT
			NetFlow* MIMTXWADDR_A3_B, // net ID: MIMTXWADDR lsb: 0  msb: 11 OUTPUT
			NetFlow* MIMTXWADDR_A4_B, // net ID: MIMTXWADDR lsb: 0  msb: 11 OUTPUT
			NetFlow* MIMTXWADDR_A5_B, // net ID: MIMTXWADDR lsb: 0  msb: 11 OUTPUT
			NetFlow* MIMTXWADDR_A6_B, // net ID: MIMTXWADDR lsb: 0  msb: 11 OUTPUT
			NetFlow* MIMTXWADDR_A7_B, // net ID: MIMTXWADDR lsb: 0  msb: 11 OUTPUT
			NetFlow* MIMTXWADDR_A8_B, // net ID: MIMTXWADDR lsb: 0  msb: 11 OUTPUT
			NetFlow* MIMTXWADDR_A9_B, // net ID: MIMTXWADDR lsb: 0  msb: 11 OUTPUT
			NetFlow* MIMTXWADDR_A10_B, // net ID: MIMTXWADDR lsb: 0  msb: 11 OUTPUT
			NetFlow* MIMTXWADDR_A11_B, // net ID: MIMTXWADDR lsb: 0  msb: 11 OUTPUT
			NetFlow* MIMTXWDATA_A0_B, // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
			NetFlow* MIMTXWDATA_A1_B, // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
			NetFlow* MIMTXWDATA_A2_B, // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
			NetFlow* MIMTXWDATA_A3_B, // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
			NetFlow* MIMTXWDATA_A4_B, // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
			NetFlow* MIMTXWDATA_A5_B, // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
			NetFlow* MIMTXWDATA_A6_B, // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
			NetFlow* MIMTXWDATA_A7_B, // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
			NetFlow* MIMTXWDATA_A8_B, // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
			NetFlow* MIMTXWDATA_A9_B, // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
			NetFlow* MIMTXWDATA_A10_B, // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
			NetFlow* MIMTXWDATA_A11_B, // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
			NetFlow* MIMTXWDATA_A12_B, // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
			NetFlow* MIMTXWDATA_A13_B, // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
			NetFlow* MIMTXWDATA_A14_B, // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
			NetFlow* MIMTXWDATA_A15_B, // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
			NetFlow* MIMTXWDATA_A16_B, // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
			NetFlow* MIMTXWDATA_A17_B, // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
			NetFlow* MIMTXWDATA_A18_B, // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
			NetFlow* MIMTXWDATA_A19_B, // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
			NetFlow* MIMTXWDATA_A20_B, // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
			NetFlow* MIMTXWDATA_A21_B, // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
			NetFlow* MIMTXWDATA_A22_B, // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
			NetFlow* MIMTXWDATA_A23_B, // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
			NetFlow* MIMTXWDATA_A24_B, // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
			NetFlow* MIMTXWDATA_A25_B, // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
			NetFlow* MIMTXWDATA_A26_B, // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
			NetFlow* MIMTXWDATA_A27_B, // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
			NetFlow* MIMTXWDATA_A28_B, // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
			NetFlow* MIMTXWDATA_A29_B, // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
			NetFlow* MIMTXWDATA_A30_B, // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
			NetFlow* MIMTXWDATA_A31_B, // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
			NetFlow* MIMTXWDATA_A32_B, // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
			NetFlow* MIMTXWDATA_A33_B, // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
			NetFlow* MIMTXWDATA_A34_B, // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
			NetFlow* MIMTXWDATA_A35_B, // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
			NetFlow* MIMTXWEN_A0_B, // net ID: MIMTXWEN lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPEGTPOWERDOWNA_A0_B, // net ID: PIPEGTPOWERDOWNA lsb: 0  msb: 1 OUTPUT
			NetFlow* PIPEGTPOWERDOWNA_A1_B, // net ID: PIPEGTPOWERDOWNA lsb: 0  msb: 1 OUTPUT
			NetFlow* PIPEGTPOWERDOWNB_A0_B, // net ID: PIPEGTPOWERDOWNB lsb: 0  msb: 1 OUTPUT
			NetFlow* PIPEGTPOWERDOWNB_A1_B, // net ID: PIPEGTPOWERDOWNB lsb: 0  msb: 1 OUTPUT
			NetFlow* PIPEGTTXELECIDLEA_A0_B, // net ID: PIPEGTTXELECIDLEA lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPEGTTXELECIDLEB_A0_B, // net ID: PIPEGTTXELECIDLEB lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERXPOLARITYA_A0_B, // net ID: PIPERXPOLARITYA lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERXPOLARITYB_A0_B, // net ID: PIPERXPOLARITYB lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERXRESETA_A0_B, // net ID: PIPERXRESETA lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERXRESETB_A0_B, // net ID: PIPERXRESETB lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETXCHARDISPMODEA_A0_B, // net ID: PIPETXCHARDISPMODEA lsb: 0  msb: 1 OUTPUT
			NetFlow* PIPETXCHARDISPMODEA_A1_B, // net ID: PIPETXCHARDISPMODEA lsb: 0  msb: 1 OUTPUT
			NetFlow* PIPETXCHARDISPMODEB_A0_B, // net ID: PIPETXCHARDISPMODEB lsb: 0  msb: 1 OUTPUT
			NetFlow* PIPETXCHARDISPMODEB_A1_B, // net ID: PIPETXCHARDISPMODEB lsb: 0  msb: 1 OUTPUT
			NetFlow* PIPETXCHARDISPVALA_A0_B, // net ID: PIPETXCHARDISPVALA lsb: 0  msb: 1 OUTPUT
			NetFlow* PIPETXCHARDISPVALA_A1_B, // net ID: PIPETXCHARDISPVALA lsb: 0  msb: 1 OUTPUT
			NetFlow* PIPETXCHARDISPVALB_A0_B, // net ID: PIPETXCHARDISPVALB lsb: 0  msb: 1 OUTPUT
			NetFlow* PIPETXCHARDISPVALB_A1_B, // net ID: PIPETXCHARDISPVALB lsb: 0  msb: 1 OUTPUT
			NetFlow* PIPETXCHARISKA_A0_B, // net ID: PIPETXCHARISKA lsb: 0  msb: 1 OUTPUT
			NetFlow* PIPETXCHARISKA_A1_B, // net ID: PIPETXCHARISKA lsb: 0  msb: 1 OUTPUT
			NetFlow* PIPETXCHARISKB_A0_B, // net ID: PIPETXCHARISKB lsb: 0  msb: 1 OUTPUT
			NetFlow* PIPETXCHARISKB_A1_B, // net ID: PIPETXCHARISKB lsb: 0  msb: 1 OUTPUT
			NetFlow* PIPETXDATAA_A0_B, // net ID: PIPETXDATAA lsb: 0  msb: 15 OUTPUT
			NetFlow* PIPETXDATAA_A1_B, // net ID: PIPETXDATAA lsb: 0  msb: 15 OUTPUT
			NetFlow* PIPETXDATAA_A2_B, // net ID: PIPETXDATAA lsb: 0  msb: 15 OUTPUT
			NetFlow* PIPETXDATAA_A3_B, // net ID: PIPETXDATAA lsb: 0  msb: 15 OUTPUT
			NetFlow* PIPETXDATAA_A4_B, // net ID: PIPETXDATAA lsb: 0  msb: 15 OUTPUT
			NetFlow* PIPETXDATAA_A5_B, // net ID: PIPETXDATAA lsb: 0  msb: 15 OUTPUT
			NetFlow* PIPETXDATAA_A6_B, // net ID: PIPETXDATAA lsb: 0  msb: 15 OUTPUT
			NetFlow* PIPETXDATAA_A7_B, // net ID: PIPETXDATAA lsb: 0  msb: 15 OUTPUT
			NetFlow* PIPETXDATAA_A8_B, // net ID: PIPETXDATAA lsb: 0  msb: 15 OUTPUT
			NetFlow* PIPETXDATAA_A9_B, // net ID: PIPETXDATAA lsb: 0  msb: 15 OUTPUT
			NetFlow* PIPETXDATAA_A10_B, // net ID: PIPETXDATAA lsb: 0  msb: 15 OUTPUT
			NetFlow* PIPETXDATAA_A11_B, // net ID: PIPETXDATAA lsb: 0  msb: 15 OUTPUT
			NetFlow* PIPETXDATAA_A12_B, // net ID: PIPETXDATAA lsb: 0  msb: 15 OUTPUT
			NetFlow* PIPETXDATAA_A13_B, // net ID: PIPETXDATAA lsb: 0  msb: 15 OUTPUT
			NetFlow* PIPETXDATAA_A14_B, // net ID: PIPETXDATAA lsb: 0  msb: 15 OUTPUT
			NetFlow* PIPETXDATAA_A15_B, // net ID: PIPETXDATAA lsb: 0  msb: 15 OUTPUT
			NetFlow* PIPETXDATAB_A0_B, // net ID: PIPETXDATAB lsb: 0  msb: 15 OUTPUT
			NetFlow* PIPETXDATAB_A1_B, // net ID: PIPETXDATAB lsb: 0  msb: 15 OUTPUT
			NetFlow* PIPETXDATAB_A2_B, // net ID: PIPETXDATAB lsb: 0  msb: 15 OUTPUT
			NetFlow* PIPETXDATAB_A3_B, // net ID: PIPETXDATAB lsb: 0  msb: 15 OUTPUT
			NetFlow* PIPETXDATAB_A4_B, // net ID: PIPETXDATAB lsb: 0  msb: 15 OUTPUT
			NetFlow* PIPETXDATAB_A5_B, // net ID: PIPETXDATAB lsb: 0  msb: 15 OUTPUT
			NetFlow* PIPETXDATAB_A6_B, // net ID: PIPETXDATAB lsb: 0  msb: 15 OUTPUT
			NetFlow* PIPETXDATAB_A7_B, // net ID: PIPETXDATAB lsb: 0  msb: 15 OUTPUT
			NetFlow* PIPETXDATAB_A8_B, // net ID: PIPETXDATAB lsb: 0  msb: 15 OUTPUT
			NetFlow* PIPETXDATAB_A9_B, // net ID: PIPETXDATAB lsb: 0  msb: 15 OUTPUT
			NetFlow* PIPETXDATAB_A10_B, // net ID: PIPETXDATAB lsb: 0  msb: 15 OUTPUT
			NetFlow* PIPETXDATAB_A11_B, // net ID: PIPETXDATAB lsb: 0  msb: 15 OUTPUT
			NetFlow* PIPETXDATAB_A12_B, // net ID: PIPETXDATAB lsb: 0  msb: 15 OUTPUT
			NetFlow* PIPETXDATAB_A13_B, // net ID: PIPETXDATAB lsb: 0  msb: 15 OUTPUT
			NetFlow* PIPETXDATAB_A14_B, // net ID: PIPETXDATAB lsb: 0  msb: 15 OUTPUT
			NetFlow* PIPETXDATAB_A15_B, // net ID: PIPETXDATAB lsb: 0  msb: 15 OUTPUT
			NetFlow* PIPETXRCVRDETA_A0_B, // net ID: PIPETXRCVRDETA lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETXRCVRDETB_A0_B, // net ID: PIPETXRCVRDETB lsb: 0  msb: 0 OUTPUT
			NetFlow* RECEIVEDHOTRESET_A0_B, // net ID: RECEIVEDHOTRESET lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNFCCPLD_A0_B, // net ID: TRNFCCPLD lsb: 0  msb: 11 OUTPUT
			NetFlow* TRNFCCPLD_A1_B, // net ID: TRNFCCPLD lsb: 0  msb: 11 OUTPUT
			NetFlow* TRNFCCPLD_A2_B, // net ID: TRNFCCPLD lsb: 0  msb: 11 OUTPUT
			NetFlow* TRNFCCPLD_A3_B, // net ID: TRNFCCPLD lsb: 0  msb: 11 OUTPUT
			NetFlow* TRNFCCPLD_A4_B, // net ID: TRNFCCPLD lsb: 0  msb: 11 OUTPUT
			NetFlow* TRNFCCPLD_A5_B, // net ID: TRNFCCPLD lsb: 0  msb: 11 OUTPUT
			NetFlow* TRNFCCPLD_A6_B, // net ID: TRNFCCPLD lsb: 0  msb: 11 OUTPUT
			NetFlow* TRNFCCPLD_A7_B, // net ID: TRNFCCPLD lsb: 0  msb: 11 OUTPUT
			NetFlow* TRNFCCPLD_A8_B, // net ID: TRNFCCPLD lsb: 0  msb: 11 OUTPUT
			NetFlow* TRNFCCPLD_A9_B, // net ID: TRNFCCPLD lsb: 0  msb: 11 OUTPUT
			NetFlow* TRNFCCPLD_A10_B, // net ID: TRNFCCPLD lsb: 0  msb: 11 OUTPUT
			NetFlow* TRNFCCPLD_A11_B, // net ID: TRNFCCPLD lsb: 0  msb: 11 OUTPUT
			NetFlow* TRNFCCPLH_A0_B, // net ID: TRNFCCPLH lsb: 0  msb: 7 OUTPUT
			NetFlow* TRNFCCPLH_A1_B, // net ID: TRNFCCPLH lsb: 0  msb: 7 OUTPUT
			NetFlow* TRNFCCPLH_A2_B, // net ID: TRNFCCPLH lsb: 0  msb: 7 OUTPUT
			NetFlow* TRNFCCPLH_A3_B, // net ID: TRNFCCPLH lsb: 0  msb: 7 OUTPUT
			NetFlow* TRNFCCPLH_A4_B, // net ID: TRNFCCPLH lsb: 0  msb: 7 OUTPUT
			NetFlow* TRNFCCPLH_A5_B, // net ID: TRNFCCPLH lsb: 0  msb: 7 OUTPUT
			NetFlow* TRNFCCPLH_A6_B, // net ID: TRNFCCPLH lsb: 0  msb: 7 OUTPUT
			NetFlow* TRNFCCPLH_A7_B, // net ID: TRNFCCPLH lsb: 0  msb: 7 OUTPUT
			NetFlow* TRNFCNPD_A0_B, // net ID: TRNFCNPD lsb: 0  msb: 11 OUTPUT
			NetFlow* TRNFCNPD_A1_B, // net ID: TRNFCNPD lsb: 0  msb: 11 OUTPUT
			NetFlow* TRNFCNPD_A2_B, // net ID: TRNFCNPD lsb: 0  msb: 11 OUTPUT
			NetFlow* TRNFCNPD_A3_B, // net ID: TRNFCNPD lsb: 0  msb: 11 OUTPUT
			NetFlow* TRNFCNPD_A4_B, // net ID: TRNFCNPD lsb: 0  msb: 11 OUTPUT
			NetFlow* TRNFCNPD_A5_B, // net ID: TRNFCNPD lsb: 0  msb: 11 OUTPUT
			NetFlow* TRNFCNPD_A6_B, // net ID: TRNFCNPD lsb: 0  msb: 11 OUTPUT
			NetFlow* TRNFCNPD_A7_B, // net ID: TRNFCNPD lsb: 0  msb: 11 OUTPUT
			NetFlow* TRNFCNPD_A8_B, // net ID: TRNFCNPD lsb: 0  msb: 11 OUTPUT
			NetFlow* TRNFCNPD_A9_B, // net ID: TRNFCNPD lsb: 0  msb: 11 OUTPUT
			NetFlow* TRNFCNPD_A10_B, // net ID: TRNFCNPD lsb: 0  msb: 11 OUTPUT
			NetFlow* TRNFCNPD_A11_B, // net ID: TRNFCNPD lsb: 0  msb: 11 OUTPUT
			NetFlow* TRNFCNPH_A0_B, // net ID: TRNFCNPH lsb: 0  msb: 7 OUTPUT
			NetFlow* TRNFCNPH_A1_B, // net ID: TRNFCNPH lsb: 0  msb: 7 OUTPUT
			NetFlow* TRNFCNPH_A2_B, // net ID: TRNFCNPH lsb: 0  msb: 7 OUTPUT
			NetFlow* TRNFCNPH_A3_B, // net ID: TRNFCNPH lsb: 0  msb: 7 OUTPUT
			NetFlow* TRNFCNPH_A4_B, // net ID: TRNFCNPH lsb: 0  msb: 7 OUTPUT
			NetFlow* TRNFCNPH_A5_B, // net ID: TRNFCNPH lsb: 0  msb: 7 OUTPUT
			NetFlow* TRNFCNPH_A6_B, // net ID: TRNFCNPH lsb: 0  msb: 7 OUTPUT
			NetFlow* TRNFCNPH_A7_B, // net ID: TRNFCNPH lsb: 0  msb: 7 OUTPUT
			NetFlow* TRNFCPD_A0_B, // net ID: TRNFCPD lsb: 0  msb: 11 OUTPUT
			NetFlow* TRNFCPD_A1_B, // net ID: TRNFCPD lsb: 0  msb: 11 OUTPUT
			NetFlow* TRNFCPD_A2_B, // net ID: TRNFCPD lsb: 0  msb: 11 OUTPUT
			NetFlow* TRNFCPD_A3_B, // net ID: TRNFCPD lsb: 0  msb: 11 OUTPUT
			NetFlow* TRNFCPD_A4_B, // net ID: TRNFCPD lsb: 0  msb: 11 OUTPUT
			NetFlow* TRNFCPD_A5_B, // net ID: TRNFCPD lsb: 0  msb: 11 OUTPUT
			NetFlow* TRNFCPD_A6_B, // net ID: TRNFCPD lsb: 0  msb: 11 OUTPUT
			NetFlow* TRNFCPD_A7_B, // net ID: TRNFCPD lsb: 0  msb: 11 OUTPUT
			NetFlow* TRNFCPD_A8_B, // net ID: TRNFCPD lsb: 0  msb: 11 OUTPUT
			NetFlow* TRNFCPD_A9_B, // net ID: TRNFCPD lsb: 0  msb: 11 OUTPUT
			NetFlow* TRNFCPD_A10_B, // net ID: TRNFCPD lsb: 0  msb: 11 OUTPUT
			NetFlow* TRNFCPD_A11_B, // net ID: TRNFCPD lsb: 0  msb: 11 OUTPUT
			NetFlow* TRNFCPH_A0_B, // net ID: TRNFCPH lsb: 0  msb: 7 OUTPUT
			NetFlow* TRNFCPH_A1_B, // net ID: TRNFCPH lsb: 0  msb: 7 OUTPUT
			NetFlow* TRNFCPH_A2_B, // net ID: TRNFCPH lsb: 0  msb: 7 OUTPUT
			NetFlow* TRNFCPH_A3_B, // net ID: TRNFCPH lsb: 0  msb: 7 OUTPUT
			NetFlow* TRNFCPH_A4_B, // net ID: TRNFCPH lsb: 0  msb: 7 OUTPUT
			NetFlow* TRNFCPH_A5_B, // net ID: TRNFCPH lsb: 0  msb: 7 OUTPUT
			NetFlow* TRNFCPH_A6_B, // net ID: TRNFCPH lsb: 0  msb: 7 OUTPUT
			NetFlow* TRNFCPH_A7_B, // net ID: TRNFCPH lsb: 0  msb: 7 OUTPUT
			NetFlow* TRNLNKUPN_A0_B, // net ID: TRNLNKUPN lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNRBARHITN_A0_B, // net ID: TRNRBARHITN lsb: 0  msb: 6 OUTPUT
			NetFlow* TRNRBARHITN_A1_B, // net ID: TRNRBARHITN lsb: 0  msb: 6 OUTPUT
			NetFlow* TRNRBARHITN_A2_B, // net ID: TRNRBARHITN lsb: 0  msb: 6 OUTPUT
			NetFlow* TRNRBARHITN_A3_B, // net ID: TRNRBARHITN lsb: 0  msb: 6 OUTPUT
			NetFlow* TRNRBARHITN_A4_B, // net ID: TRNRBARHITN lsb: 0  msb: 6 OUTPUT
			NetFlow* TRNRBARHITN_A5_B, // net ID: TRNRBARHITN lsb: 0  msb: 6 OUTPUT
			NetFlow* TRNRBARHITN_A6_B, // net ID: TRNRBARHITN lsb: 0  msb: 6 OUTPUT
			NetFlow* TRNRD_A0_B, // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
			NetFlow* TRNRD_A1_B, // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
			NetFlow* TRNRD_A2_B, // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
			NetFlow* TRNRD_A3_B, // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
			NetFlow* TRNRD_A4_B, // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
			NetFlow* TRNRD_A5_B, // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
			NetFlow* TRNRD_A6_B, // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
			NetFlow* TRNRD_A7_B, // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
			NetFlow* TRNRD_A8_B, // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
			NetFlow* TRNRD_A9_B, // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
			NetFlow* TRNRD_A10_B, // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
			NetFlow* TRNRD_A11_B, // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
			NetFlow* TRNRD_A12_B, // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
			NetFlow* TRNRD_A13_B, // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
			NetFlow* TRNRD_A14_B, // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
			NetFlow* TRNRD_A15_B, // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
			NetFlow* TRNRD_A16_B, // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
			NetFlow* TRNRD_A17_B, // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
			NetFlow* TRNRD_A18_B, // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
			NetFlow* TRNRD_A19_B, // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
			NetFlow* TRNRD_A20_B, // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
			NetFlow* TRNRD_A21_B, // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
			NetFlow* TRNRD_A22_B, // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
			NetFlow* TRNRD_A23_B, // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
			NetFlow* TRNRD_A24_B, // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
			NetFlow* TRNRD_A25_B, // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
			NetFlow* TRNRD_A26_B, // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
			NetFlow* TRNRD_A27_B, // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
			NetFlow* TRNRD_A28_B, // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
			NetFlow* TRNRD_A29_B, // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
			NetFlow* TRNRD_A30_B, // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
			NetFlow* TRNRD_A31_B, // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
			NetFlow* TRNREOFN_A0_B, // net ID: TRNREOFN lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNRERRFWDN_A0_B, // net ID: TRNRERRFWDN lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNRSOFN_A0_B, // net ID: TRNRSOFN lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNRSRCDSCN_A0_B, // net ID: TRNRSRCDSCN lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNRSRCRDYN_A0_B, // net ID: TRNRSRCRDYN lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNTBUFAV_A0_B, // net ID: TRNTBUFAV lsb: 0  msb: 5 OUTPUT
			NetFlow* TRNTBUFAV_A1_B, // net ID: TRNTBUFAV lsb: 0  msb: 5 OUTPUT
			NetFlow* TRNTBUFAV_A2_B, // net ID: TRNTBUFAV lsb: 0  msb: 5 OUTPUT
			NetFlow* TRNTBUFAV_A3_B, // net ID: TRNTBUFAV lsb: 0  msb: 5 OUTPUT
			NetFlow* TRNTBUFAV_A4_B, // net ID: TRNTBUFAV lsb: 0  msb: 5 OUTPUT
			NetFlow* TRNTBUFAV_A5_B, // net ID: TRNTBUFAV lsb: 0  msb: 5 OUTPUT
			NetFlow* TRNTCFGREQN_A0_B, // net ID: TRNTCFGREQN lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNTDSTRDYN_A0_B, // net ID: TRNTDSTRDYN lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNTERRDROPN_A0_B, // net ID: TRNTERRDROPN lsb: 0  msb: 0 OUTPUT
			NetFlow* USERRSTN_A0_B, // net ID: USERRSTN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVID_A0_B, // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
			NetFlow* CFGDEVID_A1_B, // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
			NetFlow* CFGDEVID_A2_B, // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
			NetFlow* CFGDEVID_A3_B, // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
			NetFlow* CFGDEVID_A4_B, // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
			NetFlow* CFGDEVID_A5_B, // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
			NetFlow* CFGDEVID_A6_B, // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
			NetFlow* CFGDEVID_A7_B, // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
			NetFlow* CFGDEVID_A8_B, // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
			NetFlow* CFGDEVID_A9_B, // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
			NetFlow* CFGDEVID_A10_B, // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
			NetFlow* CFGDEVID_A11_B, // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
			NetFlow* CFGDEVID_A12_B, // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
			NetFlow* CFGDEVID_A13_B, // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
			NetFlow* CFGDEVID_A14_B, // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
			NetFlow* CFGDEVID_A15_B, // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
			NetFlow* CFGDSN_A0_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A1_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A2_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A3_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A4_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A5_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A6_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A7_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A8_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A9_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A10_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A11_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A12_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A13_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A14_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A15_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A16_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A17_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A18_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A19_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A20_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A21_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A22_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A23_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A24_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A25_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A26_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A27_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A28_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A29_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A30_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A31_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A32_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A33_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A34_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A35_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A36_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A37_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A38_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A39_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A40_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A41_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A42_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A43_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A44_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A45_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A46_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A47_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A48_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A49_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A50_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A51_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A52_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A53_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A54_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A55_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A56_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A57_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A58_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A59_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A60_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A61_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A62_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A63_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDWADDR_A0_B, // net ID: CFGDWADDR lsb: 0  msb: 9 INPUT
			NetFlow* CFGDWADDR_A1_B, // net ID: CFGDWADDR lsb: 0  msb: 9 INPUT
			NetFlow* CFGDWADDR_A2_B, // net ID: CFGDWADDR lsb: 0  msb: 9 INPUT
			NetFlow* CFGDWADDR_A3_B, // net ID: CFGDWADDR lsb: 0  msb: 9 INPUT
			NetFlow* CFGDWADDR_A4_B, // net ID: CFGDWADDR lsb: 0  msb: 9 INPUT
			NetFlow* CFGDWADDR_A5_B, // net ID: CFGDWADDR lsb: 0  msb: 9 INPUT
			NetFlow* CFGDWADDR_A6_B, // net ID: CFGDWADDR lsb: 0  msb: 9 INPUT
			NetFlow* CFGDWADDR_A7_B, // net ID: CFGDWADDR lsb: 0  msb: 9 INPUT
			NetFlow* CFGDWADDR_A8_B, // net ID: CFGDWADDR lsb: 0  msb: 9 INPUT
			NetFlow* CFGDWADDR_A9_B, // net ID: CFGDWADDR lsb: 0  msb: 9 INPUT
			NetFlow* CFGERRCORN_A0_B, // net ID: CFGERRCORN lsb: 0  msb: 0 INPUT
			NetFlow* CFGERRCPLABORTN_A0_B, // net ID: CFGERRCPLABORTN lsb: 0  msb: 0 INPUT
			NetFlow* CFGERRCPLTIMEOUTN_A0_B, // net ID: CFGERRCPLTIMEOUTN lsb: 0  msb: 0 INPUT
			NetFlow* CFGERRECRCN_A0_B, // net ID: CFGERRECRCN lsb: 0  msb: 0 INPUT
			NetFlow* CFGERRLOCKEDN_A0_B, // net ID: CFGERRLOCKEDN lsb: 0  msb: 0 INPUT
			NetFlow* CFGERRPOSTEDN_A0_B, // net ID: CFGERRPOSTEDN lsb: 0  msb: 0 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A0_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A1_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A2_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A3_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A4_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A5_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A6_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A7_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A8_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A9_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A10_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A11_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A12_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A13_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A14_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A15_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A16_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A17_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A18_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A19_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A20_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A21_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A22_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A23_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A24_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A25_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A26_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A27_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A28_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A29_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A30_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A31_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A32_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A33_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A34_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A35_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A36_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A37_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A38_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A39_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A40_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A41_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A42_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A43_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A44_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A45_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A46_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A47_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRURN_A0_B, // net ID: CFGERRURN lsb: 0  msb: 0 INPUT
			NetFlow* CFGINTERRUPTASSERTN_A0_B, // net ID: CFGINTERRUPTASSERTN lsb: 0  msb: 0 INPUT
			NetFlow* CFGINTERRUPTDI_A0_B, // net ID: CFGINTERRUPTDI lsb: 0  msb: 7 INPUT
			NetFlow* CFGINTERRUPTDI_A1_B, // net ID: CFGINTERRUPTDI lsb: 0  msb: 7 INPUT
			NetFlow* CFGINTERRUPTDI_A2_B, // net ID: CFGINTERRUPTDI lsb: 0  msb: 7 INPUT
			NetFlow* CFGINTERRUPTDI_A3_B, // net ID: CFGINTERRUPTDI lsb: 0  msb: 7 INPUT
			NetFlow* CFGINTERRUPTDI_A4_B, // net ID: CFGINTERRUPTDI lsb: 0  msb: 7 INPUT
			NetFlow* CFGINTERRUPTDI_A5_B, // net ID: CFGINTERRUPTDI lsb: 0  msb: 7 INPUT
			NetFlow* CFGINTERRUPTDI_A6_B, // net ID: CFGINTERRUPTDI lsb: 0  msb: 7 INPUT
			NetFlow* CFGINTERRUPTDI_A7_B, // net ID: CFGINTERRUPTDI lsb: 0  msb: 7 INPUT
			NetFlow* CFGINTERRUPTN_A0_B, // net ID: CFGINTERRUPTN lsb: 0  msb: 0 INPUT
			NetFlow* CFGPMWAKEN_A0_B, // net ID: CFGPMWAKEN lsb: 0  msb: 0 INPUT
			NetFlow* CFGRDENN_A0_B, // net ID: CFGRDENN lsb: 0  msb: 0 INPUT
			NetFlow* CFGREVID_A0_B, // net ID: CFGREVID lsb: 0  msb: 7 INPUT
			NetFlow* CFGREVID_A1_B, // net ID: CFGREVID lsb: 0  msb: 7 INPUT
			NetFlow* CFGREVID_A2_B, // net ID: CFGREVID lsb: 0  msb: 7 INPUT
			NetFlow* CFGREVID_A3_B, // net ID: CFGREVID lsb: 0  msb: 7 INPUT
			NetFlow* CFGREVID_A4_B, // net ID: CFGREVID lsb: 0  msb: 7 INPUT
			NetFlow* CFGREVID_A5_B, // net ID: CFGREVID lsb: 0  msb: 7 INPUT
			NetFlow* CFGREVID_A6_B, // net ID: CFGREVID lsb: 0  msb: 7 INPUT
			NetFlow* CFGREVID_A7_B, // net ID: CFGREVID lsb: 0  msb: 7 INPUT
			NetFlow* CFGSUBSYSID_A0_B, // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
			NetFlow* CFGSUBSYSID_A1_B, // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
			NetFlow* CFGSUBSYSID_A2_B, // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
			NetFlow* CFGSUBSYSID_A3_B, // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
			NetFlow* CFGSUBSYSID_A4_B, // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
			NetFlow* CFGSUBSYSID_A5_B, // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
			NetFlow* CFGSUBSYSID_A6_B, // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
			NetFlow* CFGSUBSYSID_A7_B, // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
			NetFlow* CFGSUBSYSID_A8_B, // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
			NetFlow* CFGSUBSYSID_A9_B, // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
			NetFlow* CFGSUBSYSID_A10_B, // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
			NetFlow* CFGSUBSYSID_A11_B, // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
			NetFlow* CFGSUBSYSID_A12_B, // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
			NetFlow* CFGSUBSYSID_A13_B, // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
			NetFlow* CFGSUBSYSID_A14_B, // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
			NetFlow* CFGSUBSYSID_A15_B, // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
			NetFlow* CFGSUBSYSVENID_A0_B, // net ID: CFGSUBSYSVENID lsb: 0  msb: 15 INPUT
			NetFlow* CFGSUBSYSVENID_A1_B, // net ID: CFGSUBSYSVENID lsb: 0  msb: 15 INPUT
			NetFlow* CFGSUBSYSVENID_A2_B, // net ID: CFGSUBSYSVENID lsb: 0  msb: 15 INPUT
			NetFlow* CFGSUBSYSVENID_A3_B, // net ID: CFGSUBSYSVENID lsb: 0  msb: 15 INPUT
			NetFlow* CFGSUBSYSVENID_A4_B, // net ID: CFGSUBSYSVENID lsb: 0  msb: 15 INPUT
			NetFlow* CFGSUBSYSVENID_A5_B, // net ID: CFGSUBSYSVENID lsb: 0  msb: 15 INPUT
			NetFlow* CFGSUBSYSVENID_A6_B, // net ID: CFGSUBSYSVENID lsb: 0  msb: 15 INPUT
			NetFlow* CFGSUBSYSVENID_A7_B, // net ID: CFGSUBSYSVENID lsb: 0  msb: 15 INPUT
			NetFlow* CFGSUBSYSVENID_A8_B, // net ID: CFGSUBSYSVENID lsb: 0  msb: 15 INPUT
			NetFlow* CFGSUBSYSVENID_A9_B, // net ID: CFGSUBSYSVENID lsb: 0  msb: 15 INPUT
			NetFlow* CFGSUBSYSVENID_A10_B, // net ID: CFGSUBSYSVENID lsb: 0  msb: 15 INPUT
			NetFlow* CFGSUBSYSVENID_A11_B, // net ID: CFGSUBSYSVENID lsb: 0  msb: 15 INPUT
			NetFlow* CFGSUBSYSVENID_A12_B, // net ID: CFGSUBSYSVENID lsb: 0  msb: 15 INPUT
			NetFlow* CFGSUBSYSVENID_A13_B, // net ID: CFGSUBSYSVENID lsb: 0  msb: 15 INPUT
			NetFlow* CFGSUBSYSVENID_A14_B, // net ID: CFGSUBSYSVENID lsb: 0  msb: 15 INPUT
			NetFlow* CFGSUBSYSVENID_A15_B, // net ID: CFGSUBSYSVENID lsb: 0  msb: 15 INPUT
			NetFlow* CFGTRNPENDINGN_A0_B, // net ID: CFGTRNPENDINGN lsb: 0  msb: 0 INPUT
			NetFlow* CFGTURNOFFOKN_A0_B, // net ID: CFGTURNOFFOKN lsb: 0  msb: 0 INPUT
			NetFlow* CFGVENID_A0_B, // net ID: CFGVENID lsb: 0  msb: 15 INPUT
			NetFlow* CFGVENID_A1_B, // net ID: CFGVENID lsb: 0  msb: 15 INPUT
			NetFlow* CFGVENID_A2_B, // net ID: CFGVENID lsb: 0  msb: 15 INPUT
			NetFlow* CFGVENID_A3_B, // net ID: CFGVENID lsb: 0  msb: 15 INPUT
			NetFlow* CFGVENID_A4_B, // net ID: CFGVENID lsb: 0  msb: 15 INPUT
			NetFlow* CFGVENID_A5_B, // net ID: CFGVENID lsb: 0  msb: 15 INPUT
			NetFlow* CFGVENID_A6_B, // net ID: CFGVENID lsb: 0  msb: 15 INPUT
			NetFlow* CFGVENID_A7_B, // net ID: CFGVENID lsb: 0  msb: 15 INPUT
			NetFlow* CFGVENID_A8_B, // net ID: CFGVENID lsb: 0  msb: 15 INPUT
			NetFlow* CFGVENID_A9_B, // net ID: CFGVENID lsb: 0  msb: 15 INPUT
			NetFlow* CFGVENID_A10_B, // net ID: CFGVENID lsb: 0  msb: 15 INPUT
			NetFlow* CFGVENID_A11_B, // net ID: CFGVENID lsb: 0  msb: 15 INPUT
			NetFlow* CFGVENID_A12_B, // net ID: CFGVENID lsb: 0  msb: 15 INPUT
			NetFlow* CFGVENID_A13_B, // net ID: CFGVENID lsb: 0  msb: 15 INPUT
			NetFlow* CFGVENID_A14_B, // net ID: CFGVENID lsb: 0  msb: 15 INPUT
			NetFlow* CFGVENID_A15_B, // net ID: CFGVENID lsb: 0  msb: 15 INPUT
			NetFlow* CLOCKLOCKED_A0_B, // net ID: CLOCKLOCKED lsb: 0  msb: 0 INPUT
			NetFlow* MGTCLK_A0_B, // net ID: MGTCLK lsb: 0  msb: 0 INPUT
			NetFlow* MIMRXRDATA_A0_B, // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
			NetFlow* MIMRXRDATA_A1_B, // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
			NetFlow* MIMRXRDATA_A2_B, // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
			NetFlow* MIMRXRDATA_A3_B, // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
			NetFlow* MIMRXRDATA_A4_B, // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
			NetFlow* MIMRXRDATA_A5_B, // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
			NetFlow* MIMRXRDATA_A6_B, // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
			NetFlow* MIMRXRDATA_A7_B, // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
			NetFlow* MIMRXRDATA_A8_B, // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
			NetFlow* MIMRXRDATA_A9_B, // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
			NetFlow* MIMRXRDATA_A10_B, // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
			NetFlow* MIMRXRDATA_A11_B, // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
			NetFlow* MIMRXRDATA_A12_B, // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
			NetFlow* MIMRXRDATA_A13_B, // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
			NetFlow* MIMRXRDATA_A14_B, // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
			NetFlow* MIMRXRDATA_A15_B, // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
			NetFlow* MIMRXRDATA_A16_B, // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
			NetFlow* MIMRXRDATA_A17_B, // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
			NetFlow* MIMRXRDATA_A18_B, // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
			NetFlow* MIMRXRDATA_A19_B, // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
			NetFlow* MIMRXRDATA_A20_B, // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
			NetFlow* MIMRXRDATA_A21_B, // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
			NetFlow* MIMRXRDATA_A22_B, // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
			NetFlow* MIMRXRDATA_A23_B, // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
			NetFlow* MIMRXRDATA_A24_B, // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
			NetFlow* MIMRXRDATA_A25_B, // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
			NetFlow* MIMRXRDATA_A26_B, // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
			NetFlow* MIMRXRDATA_A27_B, // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
			NetFlow* MIMRXRDATA_A28_B, // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
			NetFlow* MIMRXRDATA_A29_B, // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
			NetFlow* MIMRXRDATA_A30_B, // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
			NetFlow* MIMRXRDATA_A31_B, // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
			NetFlow* MIMRXRDATA_A32_B, // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
			NetFlow* MIMRXRDATA_A33_B, // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
			NetFlow* MIMRXRDATA_A34_B, // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
			NetFlow* MIMTXRDATA_A0_B, // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			NetFlow* MIMTXRDATA_A1_B, // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			NetFlow* MIMTXRDATA_A2_B, // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			NetFlow* MIMTXRDATA_A3_B, // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			NetFlow* MIMTXRDATA_A4_B, // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			NetFlow* MIMTXRDATA_A5_B, // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			NetFlow* MIMTXRDATA_A6_B, // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			NetFlow* MIMTXRDATA_A7_B, // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			NetFlow* MIMTXRDATA_A8_B, // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			NetFlow* MIMTXRDATA_A9_B, // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			NetFlow* MIMTXRDATA_A10_B, // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			NetFlow* MIMTXRDATA_A11_B, // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			NetFlow* MIMTXRDATA_A12_B, // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			NetFlow* MIMTXRDATA_A13_B, // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			NetFlow* MIMTXRDATA_A14_B, // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			NetFlow* MIMTXRDATA_A15_B, // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			NetFlow* MIMTXRDATA_A16_B, // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			NetFlow* MIMTXRDATA_A17_B, // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			NetFlow* MIMTXRDATA_A18_B, // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			NetFlow* MIMTXRDATA_A19_B, // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			NetFlow* MIMTXRDATA_A20_B, // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			NetFlow* MIMTXRDATA_A21_B, // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			NetFlow* MIMTXRDATA_A22_B, // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			NetFlow* MIMTXRDATA_A23_B, // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			NetFlow* MIMTXRDATA_A24_B, // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			NetFlow* MIMTXRDATA_A25_B, // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			NetFlow* MIMTXRDATA_A26_B, // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			NetFlow* MIMTXRDATA_A27_B, // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			NetFlow* MIMTXRDATA_A28_B, // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			NetFlow* MIMTXRDATA_A29_B, // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			NetFlow* MIMTXRDATA_A30_B, // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			NetFlow* MIMTXRDATA_A31_B, // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			NetFlow* MIMTXRDATA_A32_B, // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			NetFlow* MIMTXRDATA_A33_B, // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			NetFlow* MIMTXRDATA_A34_B, // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			NetFlow* MIMTXRDATA_A35_B, // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			NetFlow* PIPEGTRESETDONEA_A0_B, // net ID: PIPEGTRESETDONEA lsb: 0  msb: 0 INPUT
			NetFlow* PIPEGTRESETDONEB_A0_B, // net ID: PIPEGTRESETDONEB lsb: 0  msb: 0 INPUT
			NetFlow* PIPEPHYSTATUSA_A0_B, // net ID: PIPEPHYSTATUSA lsb: 0  msb: 0 INPUT
			NetFlow* PIPEPHYSTATUSB_A0_B, // net ID: PIPEPHYSTATUSB lsb: 0  msb: 0 INPUT
			NetFlow* PIPERXCHARISKA_A0_B, // net ID: PIPERXCHARISKA lsb: 0  msb: 1 INPUT
			NetFlow* PIPERXCHARISKA_A1_B, // net ID: PIPERXCHARISKA lsb: 0  msb: 1 INPUT
			NetFlow* PIPERXCHARISKB_A0_B, // net ID: PIPERXCHARISKB lsb: 0  msb: 1 INPUT
			NetFlow* PIPERXCHARISKB_A1_B, // net ID: PIPERXCHARISKB lsb: 0  msb: 1 INPUT
			NetFlow* PIPERXDATAA_A0_B, // net ID: PIPERXDATAA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERXDATAA_A1_B, // net ID: PIPERXDATAA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERXDATAA_A2_B, // net ID: PIPERXDATAA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERXDATAA_A3_B, // net ID: PIPERXDATAA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERXDATAA_A4_B, // net ID: PIPERXDATAA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERXDATAA_A5_B, // net ID: PIPERXDATAA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERXDATAA_A6_B, // net ID: PIPERXDATAA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERXDATAA_A7_B, // net ID: PIPERXDATAA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERXDATAA_A8_B, // net ID: PIPERXDATAA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERXDATAA_A9_B, // net ID: PIPERXDATAA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERXDATAA_A10_B, // net ID: PIPERXDATAA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERXDATAA_A11_B, // net ID: PIPERXDATAA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERXDATAA_A12_B, // net ID: PIPERXDATAA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERXDATAA_A13_B, // net ID: PIPERXDATAA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERXDATAA_A14_B, // net ID: PIPERXDATAA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERXDATAA_A15_B, // net ID: PIPERXDATAA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERXDATAB_A0_B, // net ID: PIPERXDATAB lsb: 0  msb: 15 INPUT
			NetFlow* PIPERXDATAB_A1_B, // net ID: PIPERXDATAB lsb: 0  msb: 15 INPUT
			NetFlow* PIPERXDATAB_A2_B, // net ID: PIPERXDATAB lsb: 0  msb: 15 INPUT
			NetFlow* PIPERXDATAB_A3_B, // net ID: PIPERXDATAB lsb: 0  msb: 15 INPUT
			NetFlow* PIPERXDATAB_A4_B, // net ID: PIPERXDATAB lsb: 0  msb: 15 INPUT
			NetFlow* PIPERXDATAB_A5_B, // net ID: PIPERXDATAB lsb: 0  msb: 15 INPUT
			NetFlow* PIPERXDATAB_A6_B, // net ID: PIPERXDATAB lsb: 0  msb: 15 INPUT
			NetFlow* PIPERXDATAB_A7_B, // net ID: PIPERXDATAB lsb: 0  msb: 15 INPUT
			NetFlow* PIPERXDATAB_A8_B, // net ID: PIPERXDATAB lsb: 0  msb: 15 INPUT
			NetFlow* PIPERXDATAB_A9_B, // net ID: PIPERXDATAB lsb: 0  msb: 15 INPUT
			NetFlow* PIPERXDATAB_A10_B, // net ID: PIPERXDATAB lsb: 0  msb: 15 INPUT
			NetFlow* PIPERXDATAB_A11_B, // net ID: PIPERXDATAB lsb: 0  msb: 15 INPUT
			NetFlow* PIPERXDATAB_A12_B, // net ID: PIPERXDATAB lsb: 0  msb: 15 INPUT
			NetFlow* PIPERXDATAB_A13_B, // net ID: PIPERXDATAB lsb: 0  msb: 15 INPUT
			NetFlow* PIPERXDATAB_A14_B, // net ID: PIPERXDATAB lsb: 0  msb: 15 INPUT
			NetFlow* PIPERXDATAB_A15_B, // net ID: PIPERXDATAB lsb: 0  msb: 15 INPUT
			NetFlow* PIPERXENTERELECIDLEA_A0_B, // net ID: PIPERXENTERELECIDLEA lsb: 0  msb: 0 INPUT
			NetFlow* PIPERXENTERELECIDLEB_A0_B, // net ID: PIPERXENTERELECIDLEB lsb: 0  msb: 0 INPUT
			NetFlow* PIPERXSTATUSA_A0_B, // net ID: PIPERXSTATUSA lsb: 0  msb: 2 INPUT
			NetFlow* PIPERXSTATUSA_A1_B, // net ID: PIPERXSTATUSA lsb: 0  msb: 2 INPUT
			NetFlow* PIPERXSTATUSA_A2_B, // net ID: PIPERXSTATUSA lsb: 0  msb: 2 INPUT
			NetFlow* PIPERXSTATUSB_A0_B, // net ID: PIPERXSTATUSB lsb: 0  msb: 2 INPUT
			NetFlow* PIPERXSTATUSB_A1_B, // net ID: PIPERXSTATUSB lsb: 0  msb: 2 INPUT
			NetFlow* PIPERXSTATUSB_A2_B, // net ID: PIPERXSTATUSB lsb: 0  msb: 2 INPUT
			NetFlow* SYSRESETN_A0_B, // net ID: SYSRESETN lsb: 0  msb: 0 INPUT
			NetFlow* TRNFCSEL_A0_B, // net ID: TRNFCSEL lsb: 0  msb: 2 INPUT
			NetFlow* TRNFCSEL_A1_B, // net ID: TRNFCSEL lsb: 0  msb: 2 INPUT
			NetFlow* TRNFCSEL_A2_B, // net ID: TRNFCSEL lsb: 0  msb: 2 INPUT
			NetFlow* TRNRDSTRDYN_A0_B, // net ID: TRNRDSTRDYN lsb: 0  msb: 0 INPUT
			NetFlow* TRNRNPOKN_A0_B, // net ID: TRNRNPOKN lsb: 0  msb: 0 INPUT
			NetFlow* TRNTCFGGNTN_A0_B, // net ID: TRNTCFGGNTN lsb: 0  msb: 0 INPUT
			NetFlow* TRNTD_A0_B, // net ID: TRNTD lsb: 0  msb: 31 INPUT
			NetFlow* TRNTD_A1_B, // net ID: TRNTD lsb: 0  msb: 31 INPUT
			NetFlow* TRNTD_A2_B, // net ID: TRNTD lsb: 0  msb: 31 INPUT
			NetFlow* TRNTD_A3_B, // net ID: TRNTD lsb: 0  msb: 31 INPUT
			NetFlow* TRNTD_A4_B, // net ID: TRNTD lsb: 0  msb: 31 INPUT
			NetFlow* TRNTD_A5_B, // net ID: TRNTD lsb: 0  msb: 31 INPUT
			NetFlow* TRNTD_A6_B, // net ID: TRNTD lsb: 0  msb: 31 INPUT
			NetFlow* TRNTD_A7_B, // net ID: TRNTD lsb: 0  msb: 31 INPUT
			NetFlow* TRNTD_A8_B, // net ID: TRNTD lsb: 0  msb: 31 INPUT
			NetFlow* TRNTD_A9_B, // net ID: TRNTD lsb: 0  msb: 31 INPUT
			NetFlow* TRNTD_A10_B, // net ID: TRNTD lsb: 0  msb: 31 INPUT
			NetFlow* TRNTD_A11_B, // net ID: TRNTD lsb: 0  msb: 31 INPUT
			NetFlow* TRNTD_A12_B, // net ID: TRNTD lsb: 0  msb: 31 INPUT
			NetFlow* TRNTD_A13_B, // net ID: TRNTD lsb: 0  msb: 31 INPUT
			NetFlow* TRNTD_A14_B, // net ID: TRNTD lsb: 0  msb: 31 INPUT
			NetFlow* TRNTD_A15_B, // net ID: TRNTD lsb: 0  msb: 31 INPUT
			NetFlow* TRNTD_A16_B, // net ID: TRNTD lsb: 0  msb: 31 INPUT
			NetFlow* TRNTD_A17_B, // net ID: TRNTD lsb: 0  msb: 31 INPUT
			NetFlow* TRNTD_A18_B, // net ID: TRNTD lsb: 0  msb: 31 INPUT
			NetFlow* TRNTD_A19_B, // net ID: TRNTD lsb: 0  msb: 31 INPUT
			NetFlow* TRNTD_A20_B, // net ID: TRNTD lsb: 0  msb: 31 INPUT
			NetFlow* TRNTD_A21_B, // net ID: TRNTD lsb: 0  msb: 31 INPUT
			NetFlow* TRNTD_A22_B, // net ID: TRNTD lsb: 0  msb: 31 INPUT
			NetFlow* TRNTD_A23_B, // net ID: TRNTD lsb: 0  msb: 31 INPUT
			NetFlow* TRNTD_A24_B, // net ID: TRNTD lsb: 0  msb: 31 INPUT
			NetFlow* TRNTD_A25_B, // net ID: TRNTD lsb: 0  msb: 31 INPUT
			NetFlow* TRNTD_A26_B, // net ID: TRNTD lsb: 0  msb: 31 INPUT
			NetFlow* TRNTD_A27_B, // net ID: TRNTD lsb: 0  msb: 31 INPUT
			NetFlow* TRNTD_A28_B, // net ID: TRNTD lsb: 0  msb: 31 INPUT
			NetFlow* TRNTD_A29_B, // net ID: TRNTD lsb: 0  msb: 31 INPUT
			NetFlow* TRNTD_A30_B, // net ID: TRNTD lsb: 0  msb: 31 INPUT
			NetFlow* TRNTD_A31_B, // net ID: TRNTD lsb: 0  msb: 31 INPUT
			NetFlow* TRNTEOFN_A0_B, // net ID: TRNTEOFN lsb: 0  msb: 0 INPUT
			NetFlow* TRNTERRFWDN_A0_B, // net ID: TRNTERRFWDN lsb: 0  msb: 0 INPUT
			NetFlow* TRNTSOFN_A0_B, // net ID: TRNTSOFN lsb: 0  msb: 0 INPUT
			NetFlow* TRNTSRCDSCN_A0_B, // net ID: TRNTSRCDSCN lsb: 0  msb: 0 INPUT
			NetFlow* TRNTSRCRDYN_A0_B, // net ID: TRNTSRCRDYN lsb: 0  msb: 0 INPUT
			NetFlow* TRNTSTRN_A0_B, // net ID: TRNTSTRN lsb: 0  msb: 0 INPUT
			NetFlow* USERCLK_A0_B // net ID: USERCLK lsb: 0  msb: 0 INPUT
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
			this->CFGBUSNUMBER_A0_B = CFGBUSNUMBER_A0_B; // net ID: CFGBUSNUMBER lsb: 0  msb: 7 OUTPUT
			this->CFGBUSNUMBER_A1_B = CFGBUSNUMBER_A1_B; // net ID: CFGBUSNUMBER lsb: 0  msb: 7 OUTPUT
			this->CFGBUSNUMBER_A2_B = CFGBUSNUMBER_A2_B; // net ID: CFGBUSNUMBER lsb: 0  msb: 7 OUTPUT
			this->CFGBUSNUMBER_A3_B = CFGBUSNUMBER_A3_B; // net ID: CFGBUSNUMBER lsb: 0  msb: 7 OUTPUT
			this->CFGBUSNUMBER_A4_B = CFGBUSNUMBER_A4_B; // net ID: CFGBUSNUMBER lsb: 0  msb: 7 OUTPUT
			this->CFGBUSNUMBER_A5_B = CFGBUSNUMBER_A5_B; // net ID: CFGBUSNUMBER lsb: 0  msb: 7 OUTPUT
			this->CFGBUSNUMBER_A6_B = CFGBUSNUMBER_A6_B; // net ID: CFGBUSNUMBER lsb: 0  msb: 7 OUTPUT
			this->CFGBUSNUMBER_A7_B = CFGBUSNUMBER_A7_B; // net ID: CFGBUSNUMBER lsb: 0  msb: 7 OUTPUT
			this->CFGCOMMANDBUSMASTERENABLE_A0_B = CFGCOMMANDBUSMASTERENABLE_A0_B; // net ID: CFGCOMMANDBUSMASTERENABLE lsb: 0  msb: 0 OUTPUT
			this->CFGCOMMANDINTERRUPTDISABLE_A0_B = CFGCOMMANDINTERRUPTDISABLE_A0_B; // net ID: CFGCOMMANDINTERRUPTDISABLE lsb: 0  msb: 0 OUTPUT
			this->CFGCOMMANDIOENABLE_A0_B = CFGCOMMANDIOENABLE_A0_B; // net ID: CFGCOMMANDIOENABLE lsb: 0  msb: 0 OUTPUT
			this->CFGCOMMANDMEMENABLE_A0_B = CFGCOMMANDMEMENABLE_A0_B; // net ID: CFGCOMMANDMEMENABLE lsb: 0  msb: 0 OUTPUT
			this->CFGCOMMANDSERREN_A0_B = CFGCOMMANDSERREN_A0_B; // net ID: CFGCOMMANDSERREN lsb: 0  msb: 0 OUTPUT
			this->CFGDEVCONTROLAUXPOWEREN_A0_B = CFGDEVCONTROLAUXPOWEREN_A0_B; // net ID: CFGDEVCONTROLAUXPOWEREN lsb: 0  msb: 0 OUTPUT
			this->CFGDEVCONTROLCORRERRREPORTINGEN_A0_B = CFGDEVCONTROLCORRERRREPORTINGEN_A0_B; // net ID: CFGDEVCONTROLCORRERRREPORTINGEN lsb: 0  msb: 0 OUTPUT
			this->CFGDEVCONTROLENABLERO_A0_B = CFGDEVCONTROLENABLERO_A0_B; // net ID: CFGDEVCONTROLENABLERO lsb: 0  msb: 0 OUTPUT
			this->CFGDEVCONTROLEXTTAGEN_A0_B = CFGDEVCONTROLEXTTAGEN_A0_B; // net ID: CFGDEVCONTROLEXTTAGEN lsb: 0  msb: 0 OUTPUT
			this->CFGDEVCONTROLFATALERRREPORTINGEN_A0_B = CFGDEVCONTROLFATALERRREPORTINGEN_A0_B; // net ID: CFGDEVCONTROLFATALERRREPORTINGEN lsb: 0  msb: 0 OUTPUT
			this->CFGDEVCONTROLMAXPAYLOAD_A0_B = CFGDEVCONTROLMAXPAYLOAD_A0_B; // net ID: CFGDEVCONTROLMAXPAYLOAD lsb: 0  msb: 2 OUTPUT
			this->CFGDEVCONTROLMAXPAYLOAD_A1_B = CFGDEVCONTROLMAXPAYLOAD_A1_B; // net ID: CFGDEVCONTROLMAXPAYLOAD lsb: 0  msb: 2 OUTPUT
			this->CFGDEVCONTROLMAXPAYLOAD_A2_B = CFGDEVCONTROLMAXPAYLOAD_A2_B; // net ID: CFGDEVCONTROLMAXPAYLOAD lsb: 0  msb: 2 OUTPUT
			this->CFGDEVCONTROLMAXREADREQ_A0_B = CFGDEVCONTROLMAXREADREQ_A0_B; // net ID: CFGDEVCONTROLMAXREADREQ lsb: 0  msb: 2 OUTPUT
			this->CFGDEVCONTROLMAXREADREQ_A1_B = CFGDEVCONTROLMAXREADREQ_A1_B; // net ID: CFGDEVCONTROLMAXREADREQ lsb: 0  msb: 2 OUTPUT
			this->CFGDEVCONTROLMAXREADREQ_A2_B = CFGDEVCONTROLMAXREADREQ_A2_B; // net ID: CFGDEVCONTROLMAXREADREQ lsb: 0  msb: 2 OUTPUT
			this->CFGDEVCONTROLNONFATALREPORTINGEN_A0_B = CFGDEVCONTROLNONFATALREPORTINGEN_A0_B; // net ID: CFGDEVCONTROLNONFATALREPORTINGEN lsb: 0  msb: 0 OUTPUT
			this->CFGDEVCONTROLNOSNOOPEN_A0_B = CFGDEVCONTROLNOSNOOPEN_A0_B; // net ID: CFGDEVCONTROLNOSNOOPEN lsb: 0  msb: 0 OUTPUT
			this->CFGDEVCONTROLPHANTOMEN_A0_B = CFGDEVCONTROLPHANTOMEN_A0_B; // net ID: CFGDEVCONTROLPHANTOMEN lsb: 0  msb: 0 OUTPUT
			this->CFGDEVCONTROLURERRREPORTINGEN_A0_B = CFGDEVCONTROLURERRREPORTINGEN_A0_B; // net ID: CFGDEVCONTROLURERRREPORTINGEN lsb: 0  msb: 0 OUTPUT
			this->CFGDEVICENUMBER_A0_B = CFGDEVICENUMBER_A0_B; // net ID: CFGDEVICENUMBER lsb: 0  msb: 4 OUTPUT
			this->CFGDEVICENUMBER_A1_B = CFGDEVICENUMBER_A1_B; // net ID: CFGDEVICENUMBER lsb: 0  msb: 4 OUTPUT
			this->CFGDEVICENUMBER_A2_B = CFGDEVICENUMBER_A2_B; // net ID: CFGDEVICENUMBER lsb: 0  msb: 4 OUTPUT
			this->CFGDEVICENUMBER_A3_B = CFGDEVICENUMBER_A3_B; // net ID: CFGDEVICENUMBER lsb: 0  msb: 4 OUTPUT
			this->CFGDEVICENUMBER_A4_B = CFGDEVICENUMBER_A4_B; // net ID: CFGDEVICENUMBER lsb: 0  msb: 4 OUTPUT
			this->CFGDEVSTATUSCORRERRDETECTED_A0_B = CFGDEVSTATUSCORRERRDETECTED_A0_B; // net ID: CFGDEVSTATUSCORRERRDETECTED lsb: 0  msb: 0 OUTPUT
			this->CFGDEVSTATUSFATALERRDETECTED_A0_B = CFGDEVSTATUSFATALERRDETECTED_A0_B; // net ID: CFGDEVSTATUSFATALERRDETECTED lsb: 0  msb: 0 OUTPUT
			this->CFGDEVSTATUSNONFATALERRDETECTED_A0_B = CFGDEVSTATUSNONFATALERRDETECTED_A0_B; // net ID: CFGDEVSTATUSNONFATALERRDETECTED lsb: 0  msb: 0 OUTPUT
			this->CFGDEVSTATUSURDETECTED_A0_B = CFGDEVSTATUSURDETECTED_A0_B; // net ID: CFGDEVSTATUSURDETECTED lsb: 0  msb: 0 OUTPUT
			this->CFGDO_A0_B = CFGDO_A0_B; // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
			this->CFGDO_A1_B = CFGDO_A1_B; // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
			this->CFGDO_A2_B = CFGDO_A2_B; // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
			this->CFGDO_A3_B = CFGDO_A3_B; // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
			this->CFGDO_A4_B = CFGDO_A4_B; // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
			this->CFGDO_A5_B = CFGDO_A5_B; // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
			this->CFGDO_A6_B = CFGDO_A6_B; // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
			this->CFGDO_A7_B = CFGDO_A7_B; // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
			this->CFGDO_A8_B = CFGDO_A8_B; // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
			this->CFGDO_A9_B = CFGDO_A9_B; // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
			this->CFGDO_A10_B = CFGDO_A10_B; // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
			this->CFGDO_A11_B = CFGDO_A11_B; // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
			this->CFGDO_A12_B = CFGDO_A12_B; // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
			this->CFGDO_A13_B = CFGDO_A13_B; // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
			this->CFGDO_A14_B = CFGDO_A14_B; // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
			this->CFGDO_A15_B = CFGDO_A15_B; // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
			this->CFGDO_A16_B = CFGDO_A16_B; // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
			this->CFGDO_A17_B = CFGDO_A17_B; // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
			this->CFGDO_A18_B = CFGDO_A18_B; // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
			this->CFGDO_A19_B = CFGDO_A19_B; // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
			this->CFGDO_A20_B = CFGDO_A20_B; // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
			this->CFGDO_A21_B = CFGDO_A21_B; // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
			this->CFGDO_A22_B = CFGDO_A22_B; // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
			this->CFGDO_A23_B = CFGDO_A23_B; // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
			this->CFGDO_A24_B = CFGDO_A24_B; // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
			this->CFGDO_A25_B = CFGDO_A25_B; // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
			this->CFGDO_A26_B = CFGDO_A26_B; // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
			this->CFGDO_A27_B = CFGDO_A27_B; // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
			this->CFGDO_A28_B = CFGDO_A28_B; // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
			this->CFGDO_A29_B = CFGDO_A29_B; // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
			this->CFGDO_A30_B = CFGDO_A30_B; // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
			this->CFGDO_A31_B = CFGDO_A31_B; // net ID: CFGDO lsb: 0  msb: 31 OUTPUT
			this->CFGERRCPLRDYN_A0_B = CFGERRCPLRDYN_A0_B; // net ID: CFGERRCPLRDYN lsb: 0  msb: 0 OUTPUT
			this->CFGFUNCTIONNUMBER_A0_B = CFGFUNCTIONNUMBER_A0_B; // net ID: CFGFUNCTIONNUMBER lsb: 0  msb: 2 OUTPUT
			this->CFGFUNCTIONNUMBER_A1_B = CFGFUNCTIONNUMBER_A1_B; // net ID: CFGFUNCTIONNUMBER lsb: 0  msb: 2 OUTPUT
			this->CFGFUNCTIONNUMBER_A2_B = CFGFUNCTIONNUMBER_A2_B; // net ID: CFGFUNCTIONNUMBER lsb: 0  msb: 2 OUTPUT
			this->CFGINTERRUPTDO_A0_B = CFGINTERRUPTDO_A0_B; // net ID: CFGINTERRUPTDO lsb: 0  msb: 7 OUTPUT
			this->CFGINTERRUPTDO_A1_B = CFGINTERRUPTDO_A1_B; // net ID: CFGINTERRUPTDO lsb: 0  msb: 7 OUTPUT
			this->CFGINTERRUPTDO_A2_B = CFGINTERRUPTDO_A2_B; // net ID: CFGINTERRUPTDO lsb: 0  msb: 7 OUTPUT
			this->CFGINTERRUPTDO_A3_B = CFGINTERRUPTDO_A3_B; // net ID: CFGINTERRUPTDO lsb: 0  msb: 7 OUTPUT
			this->CFGINTERRUPTDO_A4_B = CFGINTERRUPTDO_A4_B; // net ID: CFGINTERRUPTDO lsb: 0  msb: 7 OUTPUT
			this->CFGINTERRUPTDO_A5_B = CFGINTERRUPTDO_A5_B; // net ID: CFGINTERRUPTDO lsb: 0  msb: 7 OUTPUT
			this->CFGINTERRUPTDO_A6_B = CFGINTERRUPTDO_A6_B; // net ID: CFGINTERRUPTDO lsb: 0  msb: 7 OUTPUT
			this->CFGINTERRUPTDO_A7_B = CFGINTERRUPTDO_A7_B; // net ID: CFGINTERRUPTDO lsb: 0  msb: 7 OUTPUT
			this->CFGINTERRUPTMMENABLE_A0_B = CFGINTERRUPTMMENABLE_A0_B; // net ID: CFGINTERRUPTMMENABLE lsb: 0  msb: 2 OUTPUT
			this->CFGINTERRUPTMMENABLE_A1_B = CFGINTERRUPTMMENABLE_A1_B; // net ID: CFGINTERRUPTMMENABLE lsb: 0  msb: 2 OUTPUT
			this->CFGINTERRUPTMMENABLE_A2_B = CFGINTERRUPTMMENABLE_A2_B; // net ID: CFGINTERRUPTMMENABLE lsb: 0  msb: 2 OUTPUT
			this->CFGINTERRUPTMSIENABLE_A0_B = CFGINTERRUPTMSIENABLE_A0_B; // net ID: CFGINTERRUPTMSIENABLE lsb: 0  msb: 0 OUTPUT
			this->CFGINTERRUPTRDYN_A0_B = CFGINTERRUPTRDYN_A0_B; // net ID: CFGINTERRUPTRDYN lsb: 0  msb: 0 OUTPUT
			this->CFGLINKCONTOLRCB_A0_B = CFGLINKCONTOLRCB_A0_B; // net ID: CFGLINKCONTOLRCB lsb: 0  msb: 0 OUTPUT
			this->CFGLINKCONTROLASPMCONTROL_A0_B = CFGLINKCONTROLASPMCONTROL_A0_B; // net ID: CFGLINKCONTROLASPMCONTROL lsb: 0  msb: 1 OUTPUT
			this->CFGLINKCONTROLASPMCONTROL_A1_B = CFGLINKCONTROLASPMCONTROL_A1_B; // net ID: CFGLINKCONTROLASPMCONTROL lsb: 0  msb: 1 OUTPUT
			this->CFGLINKCONTROLCOMMONCLOCK_A0_B = CFGLINKCONTROLCOMMONCLOCK_A0_B; // net ID: CFGLINKCONTROLCOMMONCLOCK lsb: 0  msb: 0 OUTPUT
			this->CFGLINKCONTROLEXTENDEDSYNC_A0_B = CFGLINKCONTROLEXTENDEDSYNC_A0_B; // net ID: CFGLINKCONTROLEXTENDEDSYNC lsb: 0  msb: 0 OUTPUT
			this->CFGLTSSMSTATE_A0_B = CFGLTSSMSTATE_A0_B; // net ID: CFGLTSSMSTATE lsb: 0  msb: 4 OUTPUT
			this->CFGLTSSMSTATE_A1_B = CFGLTSSMSTATE_A1_B; // net ID: CFGLTSSMSTATE lsb: 0  msb: 4 OUTPUT
			this->CFGLTSSMSTATE_A2_B = CFGLTSSMSTATE_A2_B; // net ID: CFGLTSSMSTATE lsb: 0  msb: 4 OUTPUT
			this->CFGLTSSMSTATE_A3_B = CFGLTSSMSTATE_A3_B; // net ID: CFGLTSSMSTATE lsb: 0  msb: 4 OUTPUT
			this->CFGLTSSMSTATE_A4_B = CFGLTSSMSTATE_A4_B; // net ID: CFGLTSSMSTATE lsb: 0  msb: 4 OUTPUT
			this->CFGPCIELINKSTATEN_A0_B = CFGPCIELINKSTATEN_A0_B; // net ID: CFGPCIELINKSTATEN lsb: 0  msb: 2 OUTPUT
			this->CFGPCIELINKSTATEN_A1_B = CFGPCIELINKSTATEN_A1_B; // net ID: CFGPCIELINKSTATEN lsb: 0  msb: 2 OUTPUT
			this->CFGPCIELINKSTATEN_A2_B = CFGPCIELINKSTATEN_A2_B; // net ID: CFGPCIELINKSTATEN lsb: 0  msb: 2 OUTPUT
			this->CFGRDWRDONEN_A0_B = CFGRDWRDONEN_A0_B; // net ID: CFGRDWRDONEN lsb: 0  msb: 0 OUTPUT
			this->CFGTOTURNOFFN_A0_B = CFGTOTURNOFFN_A0_B; // net ID: CFGTOTURNOFFN lsb: 0  msb: 0 OUTPUT
			this->DBGBADDLLPSTATUS_A0_B = DBGBADDLLPSTATUS_A0_B; // net ID: DBGBADDLLPSTATUS lsb: 0  msb: 0 OUTPUT
			this->DBGBADTLPLCRC_A0_B = DBGBADTLPLCRC_A0_B; // net ID: DBGBADTLPLCRC lsb: 0  msb: 0 OUTPUT
			this->DBGBADTLPSEQNUM_A0_B = DBGBADTLPSEQNUM_A0_B; // net ID: DBGBADTLPSEQNUM lsb: 0  msb: 0 OUTPUT
			this->DBGBADTLPSTATUS_A0_B = DBGBADTLPSTATUS_A0_B; // net ID: DBGBADTLPSTATUS lsb: 0  msb: 0 OUTPUT
			this->DBGDLPROTOCOLSTATUS_A0_B = DBGDLPROTOCOLSTATUS_A0_B; // net ID: DBGDLPROTOCOLSTATUS lsb: 0  msb: 0 OUTPUT
			this->DBGFCPROTOCOLERRSTATUS_A0_B = DBGFCPROTOCOLERRSTATUS_A0_B; // net ID: DBGFCPROTOCOLERRSTATUS lsb: 0  msb: 0 OUTPUT
			this->DBGMLFRMDLENGTH_A0_B = DBGMLFRMDLENGTH_A0_B; // net ID: DBGMLFRMDLENGTH lsb: 0  msb: 0 OUTPUT
			this->DBGMLFRMDMPS_A0_B = DBGMLFRMDMPS_A0_B; // net ID: DBGMLFRMDMPS lsb: 0  msb: 0 OUTPUT
			this->DBGMLFRMDTCVC_A0_B = DBGMLFRMDTCVC_A0_B; // net ID: DBGMLFRMDTCVC lsb: 0  msb: 0 OUTPUT
			this->DBGMLFRMDTLPSTATUS_A0_B = DBGMLFRMDTLPSTATUS_A0_B; // net ID: DBGMLFRMDTLPSTATUS lsb: 0  msb: 0 OUTPUT
			this->DBGMLFRMDUNRECTYPE_A0_B = DBGMLFRMDUNRECTYPE_A0_B; // net ID: DBGMLFRMDUNRECTYPE lsb: 0  msb: 0 OUTPUT
			this->DBGPOISTLPSTATUS_A0_B = DBGPOISTLPSTATUS_A0_B; // net ID: DBGPOISTLPSTATUS lsb: 0  msb: 0 OUTPUT
			this->DBGRCVROVERFLOWSTATUS_A0_B = DBGRCVROVERFLOWSTATUS_A0_B; // net ID: DBGRCVROVERFLOWSTATUS lsb: 0  msb: 0 OUTPUT
			this->DBGREGDETECTEDCORRECTABLE_A0_B = DBGREGDETECTEDCORRECTABLE_A0_B; // net ID: DBGREGDETECTEDCORRECTABLE lsb: 0  msb: 0 OUTPUT
			this->DBGREGDETECTEDFATAL_A0_B = DBGREGDETECTEDFATAL_A0_B; // net ID: DBGREGDETECTEDFATAL lsb: 0  msb: 0 OUTPUT
			this->DBGREGDETECTEDNONFATAL_A0_B = DBGREGDETECTEDNONFATAL_A0_B; // net ID: DBGREGDETECTEDNONFATAL lsb: 0  msb: 0 OUTPUT
			this->DBGREGDETECTEDUNSUPPORTED_A0_B = DBGREGDETECTEDUNSUPPORTED_A0_B; // net ID: DBGREGDETECTEDUNSUPPORTED lsb: 0  msb: 0 OUTPUT
			this->DBGRPLYROLLOVERSTATUS_A0_B = DBGRPLYROLLOVERSTATUS_A0_B; // net ID: DBGRPLYROLLOVERSTATUS lsb: 0  msb: 0 OUTPUT
			this->DBGRPLYTIMEOUTSTATUS_A0_B = DBGRPLYTIMEOUTSTATUS_A0_B; // net ID: DBGRPLYTIMEOUTSTATUS lsb: 0  msb: 0 OUTPUT
			this->DBGURNOBARHIT_A0_B = DBGURNOBARHIT_A0_B; // net ID: DBGURNOBARHIT lsb: 0  msb: 0 OUTPUT
			this->DBGURPOISCFGWR_A0_B = DBGURPOISCFGWR_A0_B; // net ID: DBGURPOISCFGWR lsb: 0  msb: 0 OUTPUT
			this->DBGURSTATUS_A0_B = DBGURSTATUS_A0_B; // net ID: DBGURSTATUS lsb: 0  msb: 0 OUTPUT
			this->DBGURUNSUPMSG_A0_B = DBGURUNSUPMSG_A0_B; // net ID: DBGURUNSUPMSG lsb: 0  msb: 0 OUTPUT
			this->MIMRXRADDR_A0_B = MIMRXRADDR_A0_B; // net ID: MIMRXRADDR lsb: 0  msb: 11 OUTPUT
			this->MIMRXRADDR_A1_B = MIMRXRADDR_A1_B; // net ID: MIMRXRADDR lsb: 0  msb: 11 OUTPUT
			this->MIMRXRADDR_A2_B = MIMRXRADDR_A2_B; // net ID: MIMRXRADDR lsb: 0  msb: 11 OUTPUT
			this->MIMRXRADDR_A3_B = MIMRXRADDR_A3_B; // net ID: MIMRXRADDR lsb: 0  msb: 11 OUTPUT
			this->MIMRXRADDR_A4_B = MIMRXRADDR_A4_B; // net ID: MIMRXRADDR lsb: 0  msb: 11 OUTPUT
			this->MIMRXRADDR_A5_B = MIMRXRADDR_A5_B; // net ID: MIMRXRADDR lsb: 0  msb: 11 OUTPUT
			this->MIMRXRADDR_A6_B = MIMRXRADDR_A6_B; // net ID: MIMRXRADDR lsb: 0  msb: 11 OUTPUT
			this->MIMRXRADDR_A7_B = MIMRXRADDR_A7_B; // net ID: MIMRXRADDR lsb: 0  msb: 11 OUTPUT
			this->MIMRXRADDR_A8_B = MIMRXRADDR_A8_B; // net ID: MIMRXRADDR lsb: 0  msb: 11 OUTPUT
			this->MIMRXRADDR_A9_B = MIMRXRADDR_A9_B; // net ID: MIMRXRADDR lsb: 0  msb: 11 OUTPUT
			this->MIMRXRADDR_A10_B = MIMRXRADDR_A10_B; // net ID: MIMRXRADDR lsb: 0  msb: 11 OUTPUT
			this->MIMRXRADDR_A11_B = MIMRXRADDR_A11_B; // net ID: MIMRXRADDR lsb: 0  msb: 11 OUTPUT
			this->MIMRXREN_A0_B = MIMRXREN_A0_B; // net ID: MIMRXREN lsb: 0  msb: 0 OUTPUT
			this->MIMRXWADDR_A0_B = MIMRXWADDR_A0_B; // net ID: MIMRXWADDR lsb: 0  msb: 11 OUTPUT
			this->MIMRXWADDR_A1_B = MIMRXWADDR_A1_B; // net ID: MIMRXWADDR lsb: 0  msb: 11 OUTPUT
			this->MIMRXWADDR_A2_B = MIMRXWADDR_A2_B; // net ID: MIMRXWADDR lsb: 0  msb: 11 OUTPUT
			this->MIMRXWADDR_A3_B = MIMRXWADDR_A3_B; // net ID: MIMRXWADDR lsb: 0  msb: 11 OUTPUT
			this->MIMRXWADDR_A4_B = MIMRXWADDR_A4_B; // net ID: MIMRXWADDR lsb: 0  msb: 11 OUTPUT
			this->MIMRXWADDR_A5_B = MIMRXWADDR_A5_B; // net ID: MIMRXWADDR lsb: 0  msb: 11 OUTPUT
			this->MIMRXWADDR_A6_B = MIMRXWADDR_A6_B; // net ID: MIMRXWADDR lsb: 0  msb: 11 OUTPUT
			this->MIMRXWADDR_A7_B = MIMRXWADDR_A7_B; // net ID: MIMRXWADDR lsb: 0  msb: 11 OUTPUT
			this->MIMRXWADDR_A8_B = MIMRXWADDR_A8_B; // net ID: MIMRXWADDR lsb: 0  msb: 11 OUTPUT
			this->MIMRXWADDR_A9_B = MIMRXWADDR_A9_B; // net ID: MIMRXWADDR lsb: 0  msb: 11 OUTPUT
			this->MIMRXWADDR_A10_B = MIMRXWADDR_A10_B; // net ID: MIMRXWADDR lsb: 0  msb: 11 OUTPUT
			this->MIMRXWADDR_A11_B = MIMRXWADDR_A11_B; // net ID: MIMRXWADDR lsb: 0  msb: 11 OUTPUT
			this->MIMRXWDATA_A0_B = MIMRXWDATA_A0_B; // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
			this->MIMRXWDATA_A1_B = MIMRXWDATA_A1_B; // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
			this->MIMRXWDATA_A2_B = MIMRXWDATA_A2_B; // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
			this->MIMRXWDATA_A3_B = MIMRXWDATA_A3_B; // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
			this->MIMRXWDATA_A4_B = MIMRXWDATA_A4_B; // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
			this->MIMRXWDATA_A5_B = MIMRXWDATA_A5_B; // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
			this->MIMRXWDATA_A6_B = MIMRXWDATA_A6_B; // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
			this->MIMRXWDATA_A7_B = MIMRXWDATA_A7_B; // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
			this->MIMRXWDATA_A8_B = MIMRXWDATA_A8_B; // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
			this->MIMRXWDATA_A9_B = MIMRXWDATA_A9_B; // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
			this->MIMRXWDATA_A10_B = MIMRXWDATA_A10_B; // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
			this->MIMRXWDATA_A11_B = MIMRXWDATA_A11_B; // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
			this->MIMRXWDATA_A12_B = MIMRXWDATA_A12_B; // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
			this->MIMRXWDATA_A13_B = MIMRXWDATA_A13_B; // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
			this->MIMRXWDATA_A14_B = MIMRXWDATA_A14_B; // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
			this->MIMRXWDATA_A15_B = MIMRXWDATA_A15_B; // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
			this->MIMRXWDATA_A16_B = MIMRXWDATA_A16_B; // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
			this->MIMRXWDATA_A17_B = MIMRXWDATA_A17_B; // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
			this->MIMRXWDATA_A18_B = MIMRXWDATA_A18_B; // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
			this->MIMRXWDATA_A19_B = MIMRXWDATA_A19_B; // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
			this->MIMRXWDATA_A20_B = MIMRXWDATA_A20_B; // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
			this->MIMRXWDATA_A21_B = MIMRXWDATA_A21_B; // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
			this->MIMRXWDATA_A22_B = MIMRXWDATA_A22_B; // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
			this->MIMRXWDATA_A23_B = MIMRXWDATA_A23_B; // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
			this->MIMRXWDATA_A24_B = MIMRXWDATA_A24_B; // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
			this->MIMRXWDATA_A25_B = MIMRXWDATA_A25_B; // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
			this->MIMRXWDATA_A26_B = MIMRXWDATA_A26_B; // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
			this->MIMRXWDATA_A27_B = MIMRXWDATA_A27_B; // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
			this->MIMRXWDATA_A28_B = MIMRXWDATA_A28_B; // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
			this->MIMRXWDATA_A29_B = MIMRXWDATA_A29_B; // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
			this->MIMRXWDATA_A30_B = MIMRXWDATA_A30_B; // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
			this->MIMRXWDATA_A31_B = MIMRXWDATA_A31_B; // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
			this->MIMRXWDATA_A32_B = MIMRXWDATA_A32_B; // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
			this->MIMRXWDATA_A33_B = MIMRXWDATA_A33_B; // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
			this->MIMRXWDATA_A34_B = MIMRXWDATA_A34_B; // net ID: MIMRXWDATA lsb: 0  msb: 34 OUTPUT
			this->MIMRXWEN_A0_B = MIMRXWEN_A0_B; // net ID: MIMRXWEN lsb: 0  msb: 0 OUTPUT
			this->MIMTXRADDR_A0_B = MIMTXRADDR_A0_B; // net ID: MIMTXRADDR lsb: 0  msb: 11 OUTPUT
			this->MIMTXRADDR_A1_B = MIMTXRADDR_A1_B; // net ID: MIMTXRADDR lsb: 0  msb: 11 OUTPUT
			this->MIMTXRADDR_A2_B = MIMTXRADDR_A2_B; // net ID: MIMTXRADDR lsb: 0  msb: 11 OUTPUT
			this->MIMTXRADDR_A3_B = MIMTXRADDR_A3_B; // net ID: MIMTXRADDR lsb: 0  msb: 11 OUTPUT
			this->MIMTXRADDR_A4_B = MIMTXRADDR_A4_B; // net ID: MIMTXRADDR lsb: 0  msb: 11 OUTPUT
			this->MIMTXRADDR_A5_B = MIMTXRADDR_A5_B; // net ID: MIMTXRADDR lsb: 0  msb: 11 OUTPUT
			this->MIMTXRADDR_A6_B = MIMTXRADDR_A6_B; // net ID: MIMTXRADDR lsb: 0  msb: 11 OUTPUT
			this->MIMTXRADDR_A7_B = MIMTXRADDR_A7_B; // net ID: MIMTXRADDR lsb: 0  msb: 11 OUTPUT
			this->MIMTXRADDR_A8_B = MIMTXRADDR_A8_B; // net ID: MIMTXRADDR lsb: 0  msb: 11 OUTPUT
			this->MIMTXRADDR_A9_B = MIMTXRADDR_A9_B; // net ID: MIMTXRADDR lsb: 0  msb: 11 OUTPUT
			this->MIMTXRADDR_A10_B = MIMTXRADDR_A10_B; // net ID: MIMTXRADDR lsb: 0  msb: 11 OUTPUT
			this->MIMTXRADDR_A11_B = MIMTXRADDR_A11_B; // net ID: MIMTXRADDR lsb: 0  msb: 11 OUTPUT
			this->MIMTXREN_A0_B = MIMTXREN_A0_B; // net ID: MIMTXREN lsb: 0  msb: 0 OUTPUT
			this->MIMTXWADDR_A0_B = MIMTXWADDR_A0_B; // net ID: MIMTXWADDR lsb: 0  msb: 11 OUTPUT
			this->MIMTXWADDR_A1_B = MIMTXWADDR_A1_B; // net ID: MIMTXWADDR lsb: 0  msb: 11 OUTPUT
			this->MIMTXWADDR_A2_B = MIMTXWADDR_A2_B; // net ID: MIMTXWADDR lsb: 0  msb: 11 OUTPUT
			this->MIMTXWADDR_A3_B = MIMTXWADDR_A3_B; // net ID: MIMTXWADDR lsb: 0  msb: 11 OUTPUT
			this->MIMTXWADDR_A4_B = MIMTXWADDR_A4_B; // net ID: MIMTXWADDR lsb: 0  msb: 11 OUTPUT
			this->MIMTXWADDR_A5_B = MIMTXWADDR_A5_B; // net ID: MIMTXWADDR lsb: 0  msb: 11 OUTPUT
			this->MIMTXWADDR_A6_B = MIMTXWADDR_A6_B; // net ID: MIMTXWADDR lsb: 0  msb: 11 OUTPUT
			this->MIMTXWADDR_A7_B = MIMTXWADDR_A7_B; // net ID: MIMTXWADDR lsb: 0  msb: 11 OUTPUT
			this->MIMTXWADDR_A8_B = MIMTXWADDR_A8_B; // net ID: MIMTXWADDR lsb: 0  msb: 11 OUTPUT
			this->MIMTXWADDR_A9_B = MIMTXWADDR_A9_B; // net ID: MIMTXWADDR lsb: 0  msb: 11 OUTPUT
			this->MIMTXWADDR_A10_B = MIMTXWADDR_A10_B; // net ID: MIMTXWADDR lsb: 0  msb: 11 OUTPUT
			this->MIMTXWADDR_A11_B = MIMTXWADDR_A11_B; // net ID: MIMTXWADDR lsb: 0  msb: 11 OUTPUT
			this->MIMTXWDATA_A0_B = MIMTXWDATA_A0_B; // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
			this->MIMTXWDATA_A1_B = MIMTXWDATA_A1_B; // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
			this->MIMTXWDATA_A2_B = MIMTXWDATA_A2_B; // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
			this->MIMTXWDATA_A3_B = MIMTXWDATA_A3_B; // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
			this->MIMTXWDATA_A4_B = MIMTXWDATA_A4_B; // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
			this->MIMTXWDATA_A5_B = MIMTXWDATA_A5_B; // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
			this->MIMTXWDATA_A6_B = MIMTXWDATA_A6_B; // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
			this->MIMTXWDATA_A7_B = MIMTXWDATA_A7_B; // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
			this->MIMTXWDATA_A8_B = MIMTXWDATA_A8_B; // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
			this->MIMTXWDATA_A9_B = MIMTXWDATA_A9_B; // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
			this->MIMTXWDATA_A10_B = MIMTXWDATA_A10_B; // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
			this->MIMTXWDATA_A11_B = MIMTXWDATA_A11_B; // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
			this->MIMTXWDATA_A12_B = MIMTXWDATA_A12_B; // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
			this->MIMTXWDATA_A13_B = MIMTXWDATA_A13_B; // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
			this->MIMTXWDATA_A14_B = MIMTXWDATA_A14_B; // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
			this->MIMTXWDATA_A15_B = MIMTXWDATA_A15_B; // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
			this->MIMTXWDATA_A16_B = MIMTXWDATA_A16_B; // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
			this->MIMTXWDATA_A17_B = MIMTXWDATA_A17_B; // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
			this->MIMTXWDATA_A18_B = MIMTXWDATA_A18_B; // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
			this->MIMTXWDATA_A19_B = MIMTXWDATA_A19_B; // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
			this->MIMTXWDATA_A20_B = MIMTXWDATA_A20_B; // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
			this->MIMTXWDATA_A21_B = MIMTXWDATA_A21_B; // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
			this->MIMTXWDATA_A22_B = MIMTXWDATA_A22_B; // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
			this->MIMTXWDATA_A23_B = MIMTXWDATA_A23_B; // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
			this->MIMTXWDATA_A24_B = MIMTXWDATA_A24_B; // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
			this->MIMTXWDATA_A25_B = MIMTXWDATA_A25_B; // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
			this->MIMTXWDATA_A26_B = MIMTXWDATA_A26_B; // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
			this->MIMTXWDATA_A27_B = MIMTXWDATA_A27_B; // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
			this->MIMTXWDATA_A28_B = MIMTXWDATA_A28_B; // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
			this->MIMTXWDATA_A29_B = MIMTXWDATA_A29_B; // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
			this->MIMTXWDATA_A30_B = MIMTXWDATA_A30_B; // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
			this->MIMTXWDATA_A31_B = MIMTXWDATA_A31_B; // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
			this->MIMTXWDATA_A32_B = MIMTXWDATA_A32_B; // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
			this->MIMTXWDATA_A33_B = MIMTXWDATA_A33_B; // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
			this->MIMTXWDATA_A34_B = MIMTXWDATA_A34_B; // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
			this->MIMTXWDATA_A35_B = MIMTXWDATA_A35_B; // net ID: MIMTXWDATA lsb: 0  msb: 35 OUTPUT
			this->MIMTXWEN_A0_B = MIMTXWEN_A0_B; // net ID: MIMTXWEN lsb: 0  msb: 0 OUTPUT
			this->PIPEGTPOWERDOWNA_A0_B = PIPEGTPOWERDOWNA_A0_B; // net ID: PIPEGTPOWERDOWNA lsb: 0  msb: 1 OUTPUT
			this->PIPEGTPOWERDOWNA_A1_B = PIPEGTPOWERDOWNA_A1_B; // net ID: PIPEGTPOWERDOWNA lsb: 0  msb: 1 OUTPUT
			this->PIPEGTPOWERDOWNB_A0_B = PIPEGTPOWERDOWNB_A0_B; // net ID: PIPEGTPOWERDOWNB lsb: 0  msb: 1 OUTPUT
			this->PIPEGTPOWERDOWNB_A1_B = PIPEGTPOWERDOWNB_A1_B; // net ID: PIPEGTPOWERDOWNB lsb: 0  msb: 1 OUTPUT
			this->PIPEGTTXELECIDLEA_A0_B = PIPEGTTXELECIDLEA_A0_B; // net ID: PIPEGTTXELECIDLEA lsb: 0  msb: 0 OUTPUT
			this->PIPEGTTXELECIDLEB_A0_B = PIPEGTTXELECIDLEB_A0_B; // net ID: PIPEGTTXELECIDLEB lsb: 0  msb: 0 OUTPUT
			this->PIPERXPOLARITYA_A0_B = PIPERXPOLARITYA_A0_B; // net ID: PIPERXPOLARITYA lsb: 0  msb: 0 OUTPUT
			this->PIPERXPOLARITYB_A0_B = PIPERXPOLARITYB_A0_B; // net ID: PIPERXPOLARITYB lsb: 0  msb: 0 OUTPUT
			this->PIPERXRESETA_A0_B = PIPERXRESETA_A0_B; // net ID: PIPERXRESETA lsb: 0  msb: 0 OUTPUT
			this->PIPERXRESETB_A0_B = PIPERXRESETB_A0_B; // net ID: PIPERXRESETB lsb: 0  msb: 0 OUTPUT
			this->PIPETXCHARDISPMODEA_A0_B = PIPETXCHARDISPMODEA_A0_B; // net ID: PIPETXCHARDISPMODEA lsb: 0  msb: 1 OUTPUT
			this->PIPETXCHARDISPMODEA_A1_B = PIPETXCHARDISPMODEA_A1_B; // net ID: PIPETXCHARDISPMODEA lsb: 0  msb: 1 OUTPUT
			this->PIPETXCHARDISPMODEB_A0_B = PIPETXCHARDISPMODEB_A0_B; // net ID: PIPETXCHARDISPMODEB lsb: 0  msb: 1 OUTPUT
			this->PIPETXCHARDISPMODEB_A1_B = PIPETXCHARDISPMODEB_A1_B; // net ID: PIPETXCHARDISPMODEB lsb: 0  msb: 1 OUTPUT
			this->PIPETXCHARDISPVALA_A0_B = PIPETXCHARDISPVALA_A0_B; // net ID: PIPETXCHARDISPVALA lsb: 0  msb: 1 OUTPUT
			this->PIPETXCHARDISPVALA_A1_B = PIPETXCHARDISPVALA_A1_B; // net ID: PIPETXCHARDISPVALA lsb: 0  msb: 1 OUTPUT
			this->PIPETXCHARDISPVALB_A0_B = PIPETXCHARDISPVALB_A0_B; // net ID: PIPETXCHARDISPVALB lsb: 0  msb: 1 OUTPUT
			this->PIPETXCHARDISPVALB_A1_B = PIPETXCHARDISPVALB_A1_B; // net ID: PIPETXCHARDISPVALB lsb: 0  msb: 1 OUTPUT
			this->PIPETXCHARISKA_A0_B = PIPETXCHARISKA_A0_B; // net ID: PIPETXCHARISKA lsb: 0  msb: 1 OUTPUT
			this->PIPETXCHARISKA_A1_B = PIPETXCHARISKA_A1_B; // net ID: PIPETXCHARISKA lsb: 0  msb: 1 OUTPUT
			this->PIPETXCHARISKB_A0_B = PIPETXCHARISKB_A0_B; // net ID: PIPETXCHARISKB lsb: 0  msb: 1 OUTPUT
			this->PIPETXCHARISKB_A1_B = PIPETXCHARISKB_A1_B; // net ID: PIPETXCHARISKB lsb: 0  msb: 1 OUTPUT
			this->PIPETXDATAA_A0_B = PIPETXDATAA_A0_B; // net ID: PIPETXDATAA lsb: 0  msb: 15 OUTPUT
			this->PIPETXDATAA_A1_B = PIPETXDATAA_A1_B; // net ID: PIPETXDATAA lsb: 0  msb: 15 OUTPUT
			this->PIPETXDATAA_A2_B = PIPETXDATAA_A2_B; // net ID: PIPETXDATAA lsb: 0  msb: 15 OUTPUT
			this->PIPETXDATAA_A3_B = PIPETXDATAA_A3_B; // net ID: PIPETXDATAA lsb: 0  msb: 15 OUTPUT
			this->PIPETXDATAA_A4_B = PIPETXDATAA_A4_B; // net ID: PIPETXDATAA lsb: 0  msb: 15 OUTPUT
			this->PIPETXDATAA_A5_B = PIPETXDATAA_A5_B; // net ID: PIPETXDATAA lsb: 0  msb: 15 OUTPUT
			this->PIPETXDATAA_A6_B = PIPETXDATAA_A6_B; // net ID: PIPETXDATAA lsb: 0  msb: 15 OUTPUT
			this->PIPETXDATAA_A7_B = PIPETXDATAA_A7_B; // net ID: PIPETXDATAA lsb: 0  msb: 15 OUTPUT
			this->PIPETXDATAA_A8_B = PIPETXDATAA_A8_B; // net ID: PIPETXDATAA lsb: 0  msb: 15 OUTPUT
			this->PIPETXDATAA_A9_B = PIPETXDATAA_A9_B; // net ID: PIPETXDATAA lsb: 0  msb: 15 OUTPUT
			this->PIPETXDATAA_A10_B = PIPETXDATAA_A10_B; // net ID: PIPETXDATAA lsb: 0  msb: 15 OUTPUT
			this->PIPETXDATAA_A11_B = PIPETXDATAA_A11_B; // net ID: PIPETXDATAA lsb: 0  msb: 15 OUTPUT
			this->PIPETXDATAA_A12_B = PIPETXDATAA_A12_B; // net ID: PIPETXDATAA lsb: 0  msb: 15 OUTPUT
			this->PIPETXDATAA_A13_B = PIPETXDATAA_A13_B; // net ID: PIPETXDATAA lsb: 0  msb: 15 OUTPUT
			this->PIPETXDATAA_A14_B = PIPETXDATAA_A14_B; // net ID: PIPETXDATAA lsb: 0  msb: 15 OUTPUT
			this->PIPETXDATAA_A15_B = PIPETXDATAA_A15_B; // net ID: PIPETXDATAA lsb: 0  msb: 15 OUTPUT
			this->PIPETXDATAB_A0_B = PIPETXDATAB_A0_B; // net ID: PIPETXDATAB lsb: 0  msb: 15 OUTPUT
			this->PIPETXDATAB_A1_B = PIPETXDATAB_A1_B; // net ID: PIPETXDATAB lsb: 0  msb: 15 OUTPUT
			this->PIPETXDATAB_A2_B = PIPETXDATAB_A2_B; // net ID: PIPETXDATAB lsb: 0  msb: 15 OUTPUT
			this->PIPETXDATAB_A3_B = PIPETXDATAB_A3_B; // net ID: PIPETXDATAB lsb: 0  msb: 15 OUTPUT
			this->PIPETXDATAB_A4_B = PIPETXDATAB_A4_B; // net ID: PIPETXDATAB lsb: 0  msb: 15 OUTPUT
			this->PIPETXDATAB_A5_B = PIPETXDATAB_A5_B; // net ID: PIPETXDATAB lsb: 0  msb: 15 OUTPUT
			this->PIPETXDATAB_A6_B = PIPETXDATAB_A6_B; // net ID: PIPETXDATAB lsb: 0  msb: 15 OUTPUT
			this->PIPETXDATAB_A7_B = PIPETXDATAB_A7_B; // net ID: PIPETXDATAB lsb: 0  msb: 15 OUTPUT
			this->PIPETXDATAB_A8_B = PIPETXDATAB_A8_B; // net ID: PIPETXDATAB lsb: 0  msb: 15 OUTPUT
			this->PIPETXDATAB_A9_B = PIPETXDATAB_A9_B; // net ID: PIPETXDATAB lsb: 0  msb: 15 OUTPUT
			this->PIPETXDATAB_A10_B = PIPETXDATAB_A10_B; // net ID: PIPETXDATAB lsb: 0  msb: 15 OUTPUT
			this->PIPETXDATAB_A11_B = PIPETXDATAB_A11_B; // net ID: PIPETXDATAB lsb: 0  msb: 15 OUTPUT
			this->PIPETXDATAB_A12_B = PIPETXDATAB_A12_B; // net ID: PIPETXDATAB lsb: 0  msb: 15 OUTPUT
			this->PIPETXDATAB_A13_B = PIPETXDATAB_A13_B; // net ID: PIPETXDATAB lsb: 0  msb: 15 OUTPUT
			this->PIPETXDATAB_A14_B = PIPETXDATAB_A14_B; // net ID: PIPETXDATAB lsb: 0  msb: 15 OUTPUT
			this->PIPETXDATAB_A15_B = PIPETXDATAB_A15_B; // net ID: PIPETXDATAB lsb: 0  msb: 15 OUTPUT
			this->PIPETXRCVRDETA_A0_B = PIPETXRCVRDETA_A0_B; // net ID: PIPETXRCVRDETA lsb: 0  msb: 0 OUTPUT
			this->PIPETXRCVRDETB_A0_B = PIPETXRCVRDETB_A0_B; // net ID: PIPETXRCVRDETB lsb: 0  msb: 0 OUTPUT
			this->RECEIVEDHOTRESET_A0_B = RECEIVEDHOTRESET_A0_B; // net ID: RECEIVEDHOTRESET lsb: 0  msb: 0 OUTPUT
			this->TRNFCCPLD_A0_B = TRNFCCPLD_A0_B; // net ID: TRNFCCPLD lsb: 0  msb: 11 OUTPUT
			this->TRNFCCPLD_A1_B = TRNFCCPLD_A1_B; // net ID: TRNFCCPLD lsb: 0  msb: 11 OUTPUT
			this->TRNFCCPLD_A2_B = TRNFCCPLD_A2_B; // net ID: TRNFCCPLD lsb: 0  msb: 11 OUTPUT
			this->TRNFCCPLD_A3_B = TRNFCCPLD_A3_B; // net ID: TRNFCCPLD lsb: 0  msb: 11 OUTPUT
			this->TRNFCCPLD_A4_B = TRNFCCPLD_A4_B; // net ID: TRNFCCPLD lsb: 0  msb: 11 OUTPUT
			this->TRNFCCPLD_A5_B = TRNFCCPLD_A5_B; // net ID: TRNFCCPLD lsb: 0  msb: 11 OUTPUT
			this->TRNFCCPLD_A6_B = TRNFCCPLD_A6_B; // net ID: TRNFCCPLD lsb: 0  msb: 11 OUTPUT
			this->TRNFCCPLD_A7_B = TRNFCCPLD_A7_B; // net ID: TRNFCCPLD lsb: 0  msb: 11 OUTPUT
			this->TRNFCCPLD_A8_B = TRNFCCPLD_A8_B; // net ID: TRNFCCPLD lsb: 0  msb: 11 OUTPUT
			this->TRNFCCPLD_A9_B = TRNFCCPLD_A9_B; // net ID: TRNFCCPLD lsb: 0  msb: 11 OUTPUT
			this->TRNFCCPLD_A10_B = TRNFCCPLD_A10_B; // net ID: TRNFCCPLD lsb: 0  msb: 11 OUTPUT
			this->TRNFCCPLD_A11_B = TRNFCCPLD_A11_B; // net ID: TRNFCCPLD lsb: 0  msb: 11 OUTPUT
			this->TRNFCCPLH_A0_B = TRNFCCPLH_A0_B; // net ID: TRNFCCPLH lsb: 0  msb: 7 OUTPUT
			this->TRNFCCPLH_A1_B = TRNFCCPLH_A1_B; // net ID: TRNFCCPLH lsb: 0  msb: 7 OUTPUT
			this->TRNFCCPLH_A2_B = TRNFCCPLH_A2_B; // net ID: TRNFCCPLH lsb: 0  msb: 7 OUTPUT
			this->TRNFCCPLH_A3_B = TRNFCCPLH_A3_B; // net ID: TRNFCCPLH lsb: 0  msb: 7 OUTPUT
			this->TRNFCCPLH_A4_B = TRNFCCPLH_A4_B; // net ID: TRNFCCPLH lsb: 0  msb: 7 OUTPUT
			this->TRNFCCPLH_A5_B = TRNFCCPLH_A5_B; // net ID: TRNFCCPLH lsb: 0  msb: 7 OUTPUT
			this->TRNFCCPLH_A6_B = TRNFCCPLH_A6_B; // net ID: TRNFCCPLH lsb: 0  msb: 7 OUTPUT
			this->TRNFCCPLH_A7_B = TRNFCCPLH_A7_B; // net ID: TRNFCCPLH lsb: 0  msb: 7 OUTPUT
			this->TRNFCNPD_A0_B = TRNFCNPD_A0_B; // net ID: TRNFCNPD lsb: 0  msb: 11 OUTPUT
			this->TRNFCNPD_A1_B = TRNFCNPD_A1_B; // net ID: TRNFCNPD lsb: 0  msb: 11 OUTPUT
			this->TRNFCNPD_A2_B = TRNFCNPD_A2_B; // net ID: TRNFCNPD lsb: 0  msb: 11 OUTPUT
			this->TRNFCNPD_A3_B = TRNFCNPD_A3_B; // net ID: TRNFCNPD lsb: 0  msb: 11 OUTPUT
			this->TRNFCNPD_A4_B = TRNFCNPD_A4_B; // net ID: TRNFCNPD lsb: 0  msb: 11 OUTPUT
			this->TRNFCNPD_A5_B = TRNFCNPD_A5_B; // net ID: TRNFCNPD lsb: 0  msb: 11 OUTPUT
			this->TRNFCNPD_A6_B = TRNFCNPD_A6_B; // net ID: TRNFCNPD lsb: 0  msb: 11 OUTPUT
			this->TRNFCNPD_A7_B = TRNFCNPD_A7_B; // net ID: TRNFCNPD lsb: 0  msb: 11 OUTPUT
			this->TRNFCNPD_A8_B = TRNFCNPD_A8_B; // net ID: TRNFCNPD lsb: 0  msb: 11 OUTPUT
			this->TRNFCNPD_A9_B = TRNFCNPD_A9_B; // net ID: TRNFCNPD lsb: 0  msb: 11 OUTPUT
			this->TRNFCNPD_A10_B = TRNFCNPD_A10_B; // net ID: TRNFCNPD lsb: 0  msb: 11 OUTPUT
			this->TRNFCNPD_A11_B = TRNFCNPD_A11_B; // net ID: TRNFCNPD lsb: 0  msb: 11 OUTPUT
			this->TRNFCNPH_A0_B = TRNFCNPH_A0_B; // net ID: TRNFCNPH lsb: 0  msb: 7 OUTPUT
			this->TRNFCNPH_A1_B = TRNFCNPH_A1_B; // net ID: TRNFCNPH lsb: 0  msb: 7 OUTPUT
			this->TRNFCNPH_A2_B = TRNFCNPH_A2_B; // net ID: TRNFCNPH lsb: 0  msb: 7 OUTPUT
			this->TRNFCNPH_A3_B = TRNFCNPH_A3_B; // net ID: TRNFCNPH lsb: 0  msb: 7 OUTPUT
			this->TRNFCNPH_A4_B = TRNFCNPH_A4_B; // net ID: TRNFCNPH lsb: 0  msb: 7 OUTPUT
			this->TRNFCNPH_A5_B = TRNFCNPH_A5_B; // net ID: TRNFCNPH lsb: 0  msb: 7 OUTPUT
			this->TRNFCNPH_A6_B = TRNFCNPH_A6_B; // net ID: TRNFCNPH lsb: 0  msb: 7 OUTPUT
			this->TRNFCNPH_A7_B = TRNFCNPH_A7_B; // net ID: TRNFCNPH lsb: 0  msb: 7 OUTPUT
			this->TRNFCPD_A0_B = TRNFCPD_A0_B; // net ID: TRNFCPD lsb: 0  msb: 11 OUTPUT
			this->TRNFCPD_A1_B = TRNFCPD_A1_B; // net ID: TRNFCPD lsb: 0  msb: 11 OUTPUT
			this->TRNFCPD_A2_B = TRNFCPD_A2_B; // net ID: TRNFCPD lsb: 0  msb: 11 OUTPUT
			this->TRNFCPD_A3_B = TRNFCPD_A3_B; // net ID: TRNFCPD lsb: 0  msb: 11 OUTPUT
			this->TRNFCPD_A4_B = TRNFCPD_A4_B; // net ID: TRNFCPD lsb: 0  msb: 11 OUTPUT
			this->TRNFCPD_A5_B = TRNFCPD_A5_B; // net ID: TRNFCPD lsb: 0  msb: 11 OUTPUT
			this->TRNFCPD_A6_B = TRNFCPD_A6_B; // net ID: TRNFCPD lsb: 0  msb: 11 OUTPUT
			this->TRNFCPD_A7_B = TRNFCPD_A7_B; // net ID: TRNFCPD lsb: 0  msb: 11 OUTPUT
			this->TRNFCPD_A8_B = TRNFCPD_A8_B; // net ID: TRNFCPD lsb: 0  msb: 11 OUTPUT
			this->TRNFCPD_A9_B = TRNFCPD_A9_B; // net ID: TRNFCPD lsb: 0  msb: 11 OUTPUT
			this->TRNFCPD_A10_B = TRNFCPD_A10_B; // net ID: TRNFCPD lsb: 0  msb: 11 OUTPUT
			this->TRNFCPD_A11_B = TRNFCPD_A11_B; // net ID: TRNFCPD lsb: 0  msb: 11 OUTPUT
			this->TRNFCPH_A0_B = TRNFCPH_A0_B; // net ID: TRNFCPH lsb: 0  msb: 7 OUTPUT
			this->TRNFCPH_A1_B = TRNFCPH_A1_B; // net ID: TRNFCPH lsb: 0  msb: 7 OUTPUT
			this->TRNFCPH_A2_B = TRNFCPH_A2_B; // net ID: TRNFCPH lsb: 0  msb: 7 OUTPUT
			this->TRNFCPH_A3_B = TRNFCPH_A3_B; // net ID: TRNFCPH lsb: 0  msb: 7 OUTPUT
			this->TRNFCPH_A4_B = TRNFCPH_A4_B; // net ID: TRNFCPH lsb: 0  msb: 7 OUTPUT
			this->TRNFCPH_A5_B = TRNFCPH_A5_B; // net ID: TRNFCPH lsb: 0  msb: 7 OUTPUT
			this->TRNFCPH_A6_B = TRNFCPH_A6_B; // net ID: TRNFCPH lsb: 0  msb: 7 OUTPUT
			this->TRNFCPH_A7_B = TRNFCPH_A7_B; // net ID: TRNFCPH lsb: 0  msb: 7 OUTPUT
			this->TRNLNKUPN_A0_B = TRNLNKUPN_A0_B; // net ID: TRNLNKUPN lsb: 0  msb: 0 OUTPUT
			this->TRNRBARHITN_A0_B = TRNRBARHITN_A0_B; // net ID: TRNRBARHITN lsb: 0  msb: 6 OUTPUT
			this->TRNRBARHITN_A1_B = TRNRBARHITN_A1_B; // net ID: TRNRBARHITN lsb: 0  msb: 6 OUTPUT
			this->TRNRBARHITN_A2_B = TRNRBARHITN_A2_B; // net ID: TRNRBARHITN lsb: 0  msb: 6 OUTPUT
			this->TRNRBARHITN_A3_B = TRNRBARHITN_A3_B; // net ID: TRNRBARHITN lsb: 0  msb: 6 OUTPUT
			this->TRNRBARHITN_A4_B = TRNRBARHITN_A4_B; // net ID: TRNRBARHITN lsb: 0  msb: 6 OUTPUT
			this->TRNRBARHITN_A5_B = TRNRBARHITN_A5_B; // net ID: TRNRBARHITN lsb: 0  msb: 6 OUTPUT
			this->TRNRBARHITN_A6_B = TRNRBARHITN_A6_B; // net ID: TRNRBARHITN lsb: 0  msb: 6 OUTPUT
			this->TRNRD_A0_B = TRNRD_A0_B; // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
			this->TRNRD_A1_B = TRNRD_A1_B; // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
			this->TRNRD_A2_B = TRNRD_A2_B; // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
			this->TRNRD_A3_B = TRNRD_A3_B; // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
			this->TRNRD_A4_B = TRNRD_A4_B; // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
			this->TRNRD_A5_B = TRNRD_A5_B; // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
			this->TRNRD_A6_B = TRNRD_A6_B; // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
			this->TRNRD_A7_B = TRNRD_A7_B; // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
			this->TRNRD_A8_B = TRNRD_A8_B; // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
			this->TRNRD_A9_B = TRNRD_A9_B; // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
			this->TRNRD_A10_B = TRNRD_A10_B; // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
			this->TRNRD_A11_B = TRNRD_A11_B; // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
			this->TRNRD_A12_B = TRNRD_A12_B; // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
			this->TRNRD_A13_B = TRNRD_A13_B; // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
			this->TRNRD_A14_B = TRNRD_A14_B; // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
			this->TRNRD_A15_B = TRNRD_A15_B; // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
			this->TRNRD_A16_B = TRNRD_A16_B; // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
			this->TRNRD_A17_B = TRNRD_A17_B; // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
			this->TRNRD_A18_B = TRNRD_A18_B; // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
			this->TRNRD_A19_B = TRNRD_A19_B; // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
			this->TRNRD_A20_B = TRNRD_A20_B; // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
			this->TRNRD_A21_B = TRNRD_A21_B; // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
			this->TRNRD_A22_B = TRNRD_A22_B; // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
			this->TRNRD_A23_B = TRNRD_A23_B; // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
			this->TRNRD_A24_B = TRNRD_A24_B; // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
			this->TRNRD_A25_B = TRNRD_A25_B; // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
			this->TRNRD_A26_B = TRNRD_A26_B; // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
			this->TRNRD_A27_B = TRNRD_A27_B; // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
			this->TRNRD_A28_B = TRNRD_A28_B; // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
			this->TRNRD_A29_B = TRNRD_A29_B; // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
			this->TRNRD_A30_B = TRNRD_A30_B; // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
			this->TRNRD_A31_B = TRNRD_A31_B; // net ID: TRNRD lsb: 0  msb: 31 OUTPUT
			this->TRNREOFN_A0_B = TRNREOFN_A0_B; // net ID: TRNREOFN lsb: 0  msb: 0 OUTPUT
			this->TRNRERRFWDN_A0_B = TRNRERRFWDN_A0_B; // net ID: TRNRERRFWDN lsb: 0  msb: 0 OUTPUT
			this->TRNRSOFN_A0_B = TRNRSOFN_A0_B; // net ID: TRNRSOFN lsb: 0  msb: 0 OUTPUT
			this->TRNRSRCDSCN_A0_B = TRNRSRCDSCN_A0_B; // net ID: TRNRSRCDSCN lsb: 0  msb: 0 OUTPUT
			this->TRNRSRCRDYN_A0_B = TRNRSRCRDYN_A0_B; // net ID: TRNRSRCRDYN lsb: 0  msb: 0 OUTPUT
			this->TRNTBUFAV_A0_B = TRNTBUFAV_A0_B; // net ID: TRNTBUFAV lsb: 0  msb: 5 OUTPUT
			this->TRNTBUFAV_A1_B = TRNTBUFAV_A1_B; // net ID: TRNTBUFAV lsb: 0  msb: 5 OUTPUT
			this->TRNTBUFAV_A2_B = TRNTBUFAV_A2_B; // net ID: TRNTBUFAV lsb: 0  msb: 5 OUTPUT
			this->TRNTBUFAV_A3_B = TRNTBUFAV_A3_B; // net ID: TRNTBUFAV lsb: 0  msb: 5 OUTPUT
			this->TRNTBUFAV_A4_B = TRNTBUFAV_A4_B; // net ID: TRNTBUFAV lsb: 0  msb: 5 OUTPUT
			this->TRNTBUFAV_A5_B = TRNTBUFAV_A5_B; // net ID: TRNTBUFAV lsb: 0  msb: 5 OUTPUT
			this->TRNTCFGREQN_A0_B = TRNTCFGREQN_A0_B; // net ID: TRNTCFGREQN lsb: 0  msb: 0 OUTPUT
			this->TRNTDSTRDYN_A0_B = TRNTDSTRDYN_A0_B; // net ID: TRNTDSTRDYN lsb: 0  msb: 0 OUTPUT
			this->TRNTERRDROPN_A0_B = TRNTERRDROPN_A0_B; // net ID: TRNTERRDROPN lsb: 0  msb: 0 OUTPUT
			this->USERRSTN_A0_B = USERRSTN_A0_B; // net ID: USERRSTN lsb: 0  msb: 0 OUTPUT
			this->CFGDEVID_A0_B = CFGDEVID_A0_B; // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
			this->CFGDEVID_A1_B = CFGDEVID_A1_B; // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
			this->CFGDEVID_A2_B = CFGDEVID_A2_B; // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
			this->CFGDEVID_A3_B = CFGDEVID_A3_B; // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
			this->CFGDEVID_A4_B = CFGDEVID_A4_B; // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
			this->CFGDEVID_A5_B = CFGDEVID_A5_B; // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
			this->CFGDEVID_A6_B = CFGDEVID_A6_B; // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
			this->CFGDEVID_A7_B = CFGDEVID_A7_B; // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
			this->CFGDEVID_A8_B = CFGDEVID_A8_B; // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
			this->CFGDEVID_A9_B = CFGDEVID_A9_B; // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
			this->CFGDEVID_A10_B = CFGDEVID_A10_B; // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
			this->CFGDEVID_A11_B = CFGDEVID_A11_B; // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
			this->CFGDEVID_A12_B = CFGDEVID_A12_B; // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
			this->CFGDEVID_A13_B = CFGDEVID_A13_B; // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
			this->CFGDEVID_A14_B = CFGDEVID_A14_B; // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
			this->CFGDEVID_A15_B = CFGDEVID_A15_B; // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
			this->CFGDSN_A0_B = CFGDSN_A0_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A1_B = CFGDSN_A1_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A2_B = CFGDSN_A2_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A3_B = CFGDSN_A3_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A4_B = CFGDSN_A4_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A5_B = CFGDSN_A5_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A6_B = CFGDSN_A6_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A7_B = CFGDSN_A7_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A8_B = CFGDSN_A8_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A9_B = CFGDSN_A9_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A10_B = CFGDSN_A10_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A11_B = CFGDSN_A11_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A12_B = CFGDSN_A12_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A13_B = CFGDSN_A13_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A14_B = CFGDSN_A14_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A15_B = CFGDSN_A15_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A16_B = CFGDSN_A16_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A17_B = CFGDSN_A17_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A18_B = CFGDSN_A18_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A19_B = CFGDSN_A19_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A20_B = CFGDSN_A20_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A21_B = CFGDSN_A21_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A22_B = CFGDSN_A22_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A23_B = CFGDSN_A23_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A24_B = CFGDSN_A24_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A25_B = CFGDSN_A25_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A26_B = CFGDSN_A26_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A27_B = CFGDSN_A27_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A28_B = CFGDSN_A28_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A29_B = CFGDSN_A29_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A30_B = CFGDSN_A30_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A31_B = CFGDSN_A31_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A32_B = CFGDSN_A32_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A33_B = CFGDSN_A33_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A34_B = CFGDSN_A34_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A35_B = CFGDSN_A35_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A36_B = CFGDSN_A36_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A37_B = CFGDSN_A37_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A38_B = CFGDSN_A38_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A39_B = CFGDSN_A39_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A40_B = CFGDSN_A40_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A41_B = CFGDSN_A41_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A42_B = CFGDSN_A42_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A43_B = CFGDSN_A43_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A44_B = CFGDSN_A44_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A45_B = CFGDSN_A45_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A46_B = CFGDSN_A46_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A47_B = CFGDSN_A47_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A48_B = CFGDSN_A48_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A49_B = CFGDSN_A49_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A50_B = CFGDSN_A50_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A51_B = CFGDSN_A51_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A52_B = CFGDSN_A52_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A53_B = CFGDSN_A53_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A54_B = CFGDSN_A54_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A55_B = CFGDSN_A55_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A56_B = CFGDSN_A56_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A57_B = CFGDSN_A57_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A58_B = CFGDSN_A58_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A59_B = CFGDSN_A59_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A60_B = CFGDSN_A60_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A61_B = CFGDSN_A61_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A62_B = CFGDSN_A62_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A63_B = CFGDSN_A63_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDWADDR_A0_B = CFGDWADDR_A0_B; // net ID: CFGDWADDR lsb: 0  msb: 9 INPUT
			this->CFGDWADDR_A1_B = CFGDWADDR_A1_B; // net ID: CFGDWADDR lsb: 0  msb: 9 INPUT
			this->CFGDWADDR_A2_B = CFGDWADDR_A2_B; // net ID: CFGDWADDR lsb: 0  msb: 9 INPUT
			this->CFGDWADDR_A3_B = CFGDWADDR_A3_B; // net ID: CFGDWADDR lsb: 0  msb: 9 INPUT
			this->CFGDWADDR_A4_B = CFGDWADDR_A4_B; // net ID: CFGDWADDR lsb: 0  msb: 9 INPUT
			this->CFGDWADDR_A5_B = CFGDWADDR_A5_B; // net ID: CFGDWADDR lsb: 0  msb: 9 INPUT
			this->CFGDWADDR_A6_B = CFGDWADDR_A6_B; // net ID: CFGDWADDR lsb: 0  msb: 9 INPUT
			this->CFGDWADDR_A7_B = CFGDWADDR_A7_B; // net ID: CFGDWADDR lsb: 0  msb: 9 INPUT
			this->CFGDWADDR_A8_B = CFGDWADDR_A8_B; // net ID: CFGDWADDR lsb: 0  msb: 9 INPUT
			this->CFGDWADDR_A9_B = CFGDWADDR_A9_B; // net ID: CFGDWADDR lsb: 0  msb: 9 INPUT
			this->CFGERRCORN_A0_B = CFGERRCORN_A0_B; // net ID: CFGERRCORN lsb: 0  msb: 0 INPUT
			this->CFGERRCPLABORTN_A0_B = CFGERRCPLABORTN_A0_B; // net ID: CFGERRCPLABORTN lsb: 0  msb: 0 INPUT
			this->CFGERRCPLTIMEOUTN_A0_B = CFGERRCPLTIMEOUTN_A0_B; // net ID: CFGERRCPLTIMEOUTN lsb: 0  msb: 0 INPUT
			this->CFGERRECRCN_A0_B = CFGERRECRCN_A0_B; // net ID: CFGERRECRCN lsb: 0  msb: 0 INPUT
			this->CFGERRLOCKEDN_A0_B = CFGERRLOCKEDN_A0_B; // net ID: CFGERRLOCKEDN lsb: 0  msb: 0 INPUT
			this->CFGERRPOSTEDN_A0_B = CFGERRPOSTEDN_A0_B; // net ID: CFGERRPOSTEDN lsb: 0  msb: 0 INPUT
			this->CFGERRTLPCPLHEADER_A0_B = CFGERRTLPCPLHEADER_A0_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A1_B = CFGERRTLPCPLHEADER_A1_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A2_B = CFGERRTLPCPLHEADER_A2_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A3_B = CFGERRTLPCPLHEADER_A3_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A4_B = CFGERRTLPCPLHEADER_A4_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A5_B = CFGERRTLPCPLHEADER_A5_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A6_B = CFGERRTLPCPLHEADER_A6_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A7_B = CFGERRTLPCPLHEADER_A7_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A8_B = CFGERRTLPCPLHEADER_A8_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A9_B = CFGERRTLPCPLHEADER_A9_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A10_B = CFGERRTLPCPLHEADER_A10_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A11_B = CFGERRTLPCPLHEADER_A11_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A12_B = CFGERRTLPCPLHEADER_A12_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A13_B = CFGERRTLPCPLHEADER_A13_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A14_B = CFGERRTLPCPLHEADER_A14_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A15_B = CFGERRTLPCPLHEADER_A15_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A16_B = CFGERRTLPCPLHEADER_A16_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A17_B = CFGERRTLPCPLHEADER_A17_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A18_B = CFGERRTLPCPLHEADER_A18_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A19_B = CFGERRTLPCPLHEADER_A19_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A20_B = CFGERRTLPCPLHEADER_A20_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A21_B = CFGERRTLPCPLHEADER_A21_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A22_B = CFGERRTLPCPLHEADER_A22_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A23_B = CFGERRTLPCPLHEADER_A23_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A24_B = CFGERRTLPCPLHEADER_A24_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A25_B = CFGERRTLPCPLHEADER_A25_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A26_B = CFGERRTLPCPLHEADER_A26_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A27_B = CFGERRTLPCPLHEADER_A27_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A28_B = CFGERRTLPCPLHEADER_A28_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A29_B = CFGERRTLPCPLHEADER_A29_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A30_B = CFGERRTLPCPLHEADER_A30_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A31_B = CFGERRTLPCPLHEADER_A31_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A32_B = CFGERRTLPCPLHEADER_A32_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A33_B = CFGERRTLPCPLHEADER_A33_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A34_B = CFGERRTLPCPLHEADER_A34_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A35_B = CFGERRTLPCPLHEADER_A35_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A36_B = CFGERRTLPCPLHEADER_A36_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A37_B = CFGERRTLPCPLHEADER_A37_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A38_B = CFGERRTLPCPLHEADER_A38_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A39_B = CFGERRTLPCPLHEADER_A39_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A40_B = CFGERRTLPCPLHEADER_A40_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A41_B = CFGERRTLPCPLHEADER_A41_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A42_B = CFGERRTLPCPLHEADER_A42_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A43_B = CFGERRTLPCPLHEADER_A43_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A44_B = CFGERRTLPCPLHEADER_A44_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A45_B = CFGERRTLPCPLHEADER_A45_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A46_B = CFGERRTLPCPLHEADER_A46_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A47_B = CFGERRTLPCPLHEADER_A47_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRURN_A0_B = CFGERRURN_A0_B; // net ID: CFGERRURN lsb: 0  msb: 0 INPUT
			this->CFGINTERRUPTASSERTN_A0_B = CFGINTERRUPTASSERTN_A0_B; // net ID: CFGINTERRUPTASSERTN lsb: 0  msb: 0 INPUT
			this->CFGINTERRUPTDI_A0_B = CFGINTERRUPTDI_A0_B; // net ID: CFGINTERRUPTDI lsb: 0  msb: 7 INPUT
			this->CFGINTERRUPTDI_A1_B = CFGINTERRUPTDI_A1_B; // net ID: CFGINTERRUPTDI lsb: 0  msb: 7 INPUT
			this->CFGINTERRUPTDI_A2_B = CFGINTERRUPTDI_A2_B; // net ID: CFGINTERRUPTDI lsb: 0  msb: 7 INPUT
			this->CFGINTERRUPTDI_A3_B = CFGINTERRUPTDI_A3_B; // net ID: CFGINTERRUPTDI lsb: 0  msb: 7 INPUT
			this->CFGINTERRUPTDI_A4_B = CFGINTERRUPTDI_A4_B; // net ID: CFGINTERRUPTDI lsb: 0  msb: 7 INPUT
			this->CFGINTERRUPTDI_A5_B = CFGINTERRUPTDI_A5_B; // net ID: CFGINTERRUPTDI lsb: 0  msb: 7 INPUT
			this->CFGINTERRUPTDI_A6_B = CFGINTERRUPTDI_A6_B; // net ID: CFGINTERRUPTDI lsb: 0  msb: 7 INPUT
			this->CFGINTERRUPTDI_A7_B = CFGINTERRUPTDI_A7_B; // net ID: CFGINTERRUPTDI lsb: 0  msb: 7 INPUT
			this->CFGINTERRUPTN_A0_B = CFGINTERRUPTN_A0_B; // net ID: CFGINTERRUPTN lsb: 0  msb: 0 INPUT
			this->CFGPMWAKEN_A0_B = CFGPMWAKEN_A0_B; // net ID: CFGPMWAKEN lsb: 0  msb: 0 INPUT
			this->CFGRDENN_A0_B = CFGRDENN_A0_B; // net ID: CFGRDENN lsb: 0  msb: 0 INPUT
			this->CFGREVID_A0_B = CFGREVID_A0_B; // net ID: CFGREVID lsb: 0  msb: 7 INPUT
			this->CFGREVID_A1_B = CFGREVID_A1_B; // net ID: CFGREVID lsb: 0  msb: 7 INPUT
			this->CFGREVID_A2_B = CFGREVID_A2_B; // net ID: CFGREVID lsb: 0  msb: 7 INPUT
			this->CFGREVID_A3_B = CFGREVID_A3_B; // net ID: CFGREVID lsb: 0  msb: 7 INPUT
			this->CFGREVID_A4_B = CFGREVID_A4_B; // net ID: CFGREVID lsb: 0  msb: 7 INPUT
			this->CFGREVID_A5_B = CFGREVID_A5_B; // net ID: CFGREVID lsb: 0  msb: 7 INPUT
			this->CFGREVID_A6_B = CFGREVID_A6_B; // net ID: CFGREVID lsb: 0  msb: 7 INPUT
			this->CFGREVID_A7_B = CFGREVID_A7_B; // net ID: CFGREVID lsb: 0  msb: 7 INPUT
			this->CFGSUBSYSID_A0_B = CFGSUBSYSID_A0_B; // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
			this->CFGSUBSYSID_A1_B = CFGSUBSYSID_A1_B; // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
			this->CFGSUBSYSID_A2_B = CFGSUBSYSID_A2_B; // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
			this->CFGSUBSYSID_A3_B = CFGSUBSYSID_A3_B; // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
			this->CFGSUBSYSID_A4_B = CFGSUBSYSID_A4_B; // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
			this->CFGSUBSYSID_A5_B = CFGSUBSYSID_A5_B; // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
			this->CFGSUBSYSID_A6_B = CFGSUBSYSID_A6_B; // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
			this->CFGSUBSYSID_A7_B = CFGSUBSYSID_A7_B; // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
			this->CFGSUBSYSID_A8_B = CFGSUBSYSID_A8_B; // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
			this->CFGSUBSYSID_A9_B = CFGSUBSYSID_A9_B; // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
			this->CFGSUBSYSID_A10_B = CFGSUBSYSID_A10_B; // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
			this->CFGSUBSYSID_A11_B = CFGSUBSYSID_A11_B; // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
			this->CFGSUBSYSID_A12_B = CFGSUBSYSID_A12_B; // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
			this->CFGSUBSYSID_A13_B = CFGSUBSYSID_A13_B; // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
			this->CFGSUBSYSID_A14_B = CFGSUBSYSID_A14_B; // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
			this->CFGSUBSYSID_A15_B = CFGSUBSYSID_A15_B; // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
			this->CFGSUBSYSVENID_A0_B = CFGSUBSYSVENID_A0_B; // net ID: CFGSUBSYSVENID lsb: 0  msb: 15 INPUT
			this->CFGSUBSYSVENID_A1_B = CFGSUBSYSVENID_A1_B; // net ID: CFGSUBSYSVENID lsb: 0  msb: 15 INPUT
			this->CFGSUBSYSVENID_A2_B = CFGSUBSYSVENID_A2_B; // net ID: CFGSUBSYSVENID lsb: 0  msb: 15 INPUT
			this->CFGSUBSYSVENID_A3_B = CFGSUBSYSVENID_A3_B; // net ID: CFGSUBSYSVENID lsb: 0  msb: 15 INPUT
			this->CFGSUBSYSVENID_A4_B = CFGSUBSYSVENID_A4_B; // net ID: CFGSUBSYSVENID lsb: 0  msb: 15 INPUT
			this->CFGSUBSYSVENID_A5_B = CFGSUBSYSVENID_A5_B; // net ID: CFGSUBSYSVENID lsb: 0  msb: 15 INPUT
			this->CFGSUBSYSVENID_A6_B = CFGSUBSYSVENID_A6_B; // net ID: CFGSUBSYSVENID lsb: 0  msb: 15 INPUT
			this->CFGSUBSYSVENID_A7_B = CFGSUBSYSVENID_A7_B; // net ID: CFGSUBSYSVENID lsb: 0  msb: 15 INPUT
			this->CFGSUBSYSVENID_A8_B = CFGSUBSYSVENID_A8_B; // net ID: CFGSUBSYSVENID lsb: 0  msb: 15 INPUT
			this->CFGSUBSYSVENID_A9_B = CFGSUBSYSVENID_A9_B; // net ID: CFGSUBSYSVENID lsb: 0  msb: 15 INPUT
			this->CFGSUBSYSVENID_A10_B = CFGSUBSYSVENID_A10_B; // net ID: CFGSUBSYSVENID lsb: 0  msb: 15 INPUT
			this->CFGSUBSYSVENID_A11_B = CFGSUBSYSVENID_A11_B; // net ID: CFGSUBSYSVENID lsb: 0  msb: 15 INPUT
			this->CFGSUBSYSVENID_A12_B = CFGSUBSYSVENID_A12_B; // net ID: CFGSUBSYSVENID lsb: 0  msb: 15 INPUT
			this->CFGSUBSYSVENID_A13_B = CFGSUBSYSVENID_A13_B; // net ID: CFGSUBSYSVENID lsb: 0  msb: 15 INPUT
			this->CFGSUBSYSVENID_A14_B = CFGSUBSYSVENID_A14_B; // net ID: CFGSUBSYSVENID lsb: 0  msb: 15 INPUT
			this->CFGSUBSYSVENID_A15_B = CFGSUBSYSVENID_A15_B; // net ID: CFGSUBSYSVENID lsb: 0  msb: 15 INPUT
			this->CFGTRNPENDINGN_A0_B = CFGTRNPENDINGN_A0_B; // net ID: CFGTRNPENDINGN lsb: 0  msb: 0 INPUT
			this->CFGTURNOFFOKN_A0_B = CFGTURNOFFOKN_A0_B; // net ID: CFGTURNOFFOKN lsb: 0  msb: 0 INPUT
			this->CFGVENID_A0_B = CFGVENID_A0_B; // net ID: CFGVENID lsb: 0  msb: 15 INPUT
			this->CFGVENID_A1_B = CFGVENID_A1_B; // net ID: CFGVENID lsb: 0  msb: 15 INPUT
			this->CFGVENID_A2_B = CFGVENID_A2_B; // net ID: CFGVENID lsb: 0  msb: 15 INPUT
			this->CFGVENID_A3_B = CFGVENID_A3_B; // net ID: CFGVENID lsb: 0  msb: 15 INPUT
			this->CFGVENID_A4_B = CFGVENID_A4_B; // net ID: CFGVENID lsb: 0  msb: 15 INPUT
			this->CFGVENID_A5_B = CFGVENID_A5_B; // net ID: CFGVENID lsb: 0  msb: 15 INPUT
			this->CFGVENID_A6_B = CFGVENID_A6_B; // net ID: CFGVENID lsb: 0  msb: 15 INPUT
			this->CFGVENID_A7_B = CFGVENID_A7_B; // net ID: CFGVENID lsb: 0  msb: 15 INPUT
			this->CFGVENID_A8_B = CFGVENID_A8_B; // net ID: CFGVENID lsb: 0  msb: 15 INPUT
			this->CFGVENID_A9_B = CFGVENID_A9_B; // net ID: CFGVENID lsb: 0  msb: 15 INPUT
			this->CFGVENID_A10_B = CFGVENID_A10_B; // net ID: CFGVENID lsb: 0  msb: 15 INPUT
			this->CFGVENID_A11_B = CFGVENID_A11_B; // net ID: CFGVENID lsb: 0  msb: 15 INPUT
			this->CFGVENID_A12_B = CFGVENID_A12_B; // net ID: CFGVENID lsb: 0  msb: 15 INPUT
			this->CFGVENID_A13_B = CFGVENID_A13_B; // net ID: CFGVENID lsb: 0  msb: 15 INPUT
			this->CFGVENID_A14_B = CFGVENID_A14_B; // net ID: CFGVENID lsb: 0  msb: 15 INPUT
			this->CFGVENID_A15_B = CFGVENID_A15_B; // net ID: CFGVENID lsb: 0  msb: 15 INPUT
			this->CLOCKLOCKED_A0_B = CLOCKLOCKED_A0_B; // net ID: CLOCKLOCKED lsb: 0  msb: 0 INPUT
			this->MGTCLK_A0_B = MGTCLK_A0_B; // net ID: MGTCLK lsb: 0  msb: 0 INPUT
			this->MIMRXRDATA_A0_B = MIMRXRDATA_A0_B; // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
			this->MIMRXRDATA_A1_B = MIMRXRDATA_A1_B; // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
			this->MIMRXRDATA_A2_B = MIMRXRDATA_A2_B; // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
			this->MIMRXRDATA_A3_B = MIMRXRDATA_A3_B; // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
			this->MIMRXRDATA_A4_B = MIMRXRDATA_A4_B; // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
			this->MIMRXRDATA_A5_B = MIMRXRDATA_A5_B; // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
			this->MIMRXRDATA_A6_B = MIMRXRDATA_A6_B; // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
			this->MIMRXRDATA_A7_B = MIMRXRDATA_A7_B; // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
			this->MIMRXRDATA_A8_B = MIMRXRDATA_A8_B; // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
			this->MIMRXRDATA_A9_B = MIMRXRDATA_A9_B; // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
			this->MIMRXRDATA_A10_B = MIMRXRDATA_A10_B; // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
			this->MIMRXRDATA_A11_B = MIMRXRDATA_A11_B; // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
			this->MIMRXRDATA_A12_B = MIMRXRDATA_A12_B; // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
			this->MIMRXRDATA_A13_B = MIMRXRDATA_A13_B; // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
			this->MIMRXRDATA_A14_B = MIMRXRDATA_A14_B; // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
			this->MIMRXRDATA_A15_B = MIMRXRDATA_A15_B; // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
			this->MIMRXRDATA_A16_B = MIMRXRDATA_A16_B; // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
			this->MIMRXRDATA_A17_B = MIMRXRDATA_A17_B; // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
			this->MIMRXRDATA_A18_B = MIMRXRDATA_A18_B; // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
			this->MIMRXRDATA_A19_B = MIMRXRDATA_A19_B; // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
			this->MIMRXRDATA_A20_B = MIMRXRDATA_A20_B; // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
			this->MIMRXRDATA_A21_B = MIMRXRDATA_A21_B; // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
			this->MIMRXRDATA_A22_B = MIMRXRDATA_A22_B; // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
			this->MIMRXRDATA_A23_B = MIMRXRDATA_A23_B; // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
			this->MIMRXRDATA_A24_B = MIMRXRDATA_A24_B; // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
			this->MIMRXRDATA_A25_B = MIMRXRDATA_A25_B; // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
			this->MIMRXRDATA_A26_B = MIMRXRDATA_A26_B; // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
			this->MIMRXRDATA_A27_B = MIMRXRDATA_A27_B; // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
			this->MIMRXRDATA_A28_B = MIMRXRDATA_A28_B; // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
			this->MIMRXRDATA_A29_B = MIMRXRDATA_A29_B; // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
			this->MIMRXRDATA_A30_B = MIMRXRDATA_A30_B; // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
			this->MIMRXRDATA_A31_B = MIMRXRDATA_A31_B; // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
			this->MIMRXRDATA_A32_B = MIMRXRDATA_A32_B; // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
			this->MIMRXRDATA_A33_B = MIMRXRDATA_A33_B; // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
			this->MIMRXRDATA_A34_B = MIMRXRDATA_A34_B; // net ID: MIMRXRDATA lsb: 0  msb: 34 INPUT
			this->MIMTXRDATA_A0_B = MIMTXRDATA_A0_B; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			this->MIMTXRDATA_A1_B = MIMTXRDATA_A1_B; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			this->MIMTXRDATA_A2_B = MIMTXRDATA_A2_B; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			this->MIMTXRDATA_A3_B = MIMTXRDATA_A3_B; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			this->MIMTXRDATA_A4_B = MIMTXRDATA_A4_B; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			this->MIMTXRDATA_A5_B = MIMTXRDATA_A5_B; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			this->MIMTXRDATA_A6_B = MIMTXRDATA_A6_B; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			this->MIMTXRDATA_A7_B = MIMTXRDATA_A7_B; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			this->MIMTXRDATA_A8_B = MIMTXRDATA_A8_B; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			this->MIMTXRDATA_A9_B = MIMTXRDATA_A9_B; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			this->MIMTXRDATA_A10_B = MIMTXRDATA_A10_B; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			this->MIMTXRDATA_A11_B = MIMTXRDATA_A11_B; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			this->MIMTXRDATA_A12_B = MIMTXRDATA_A12_B; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			this->MIMTXRDATA_A13_B = MIMTXRDATA_A13_B; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			this->MIMTXRDATA_A14_B = MIMTXRDATA_A14_B; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			this->MIMTXRDATA_A15_B = MIMTXRDATA_A15_B; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			this->MIMTXRDATA_A16_B = MIMTXRDATA_A16_B; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			this->MIMTXRDATA_A17_B = MIMTXRDATA_A17_B; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			this->MIMTXRDATA_A18_B = MIMTXRDATA_A18_B; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			this->MIMTXRDATA_A19_B = MIMTXRDATA_A19_B; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			this->MIMTXRDATA_A20_B = MIMTXRDATA_A20_B; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			this->MIMTXRDATA_A21_B = MIMTXRDATA_A21_B; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			this->MIMTXRDATA_A22_B = MIMTXRDATA_A22_B; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			this->MIMTXRDATA_A23_B = MIMTXRDATA_A23_B; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			this->MIMTXRDATA_A24_B = MIMTXRDATA_A24_B; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			this->MIMTXRDATA_A25_B = MIMTXRDATA_A25_B; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			this->MIMTXRDATA_A26_B = MIMTXRDATA_A26_B; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			this->MIMTXRDATA_A27_B = MIMTXRDATA_A27_B; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			this->MIMTXRDATA_A28_B = MIMTXRDATA_A28_B; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			this->MIMTXRDATA_A29_B = MIMTXRDATA_A29_B; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			this->MIMTXRDATA_A30_B = MIMTXRDATA_A30_B; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			this->MIMTXRDATA_A31_B = MIMTXRDATA_A31_B; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			this->MIMTXRDATA_A32_B = MIMTXRDATA_A32_B; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			this->MIMTXRDATA_A33_B = MIMTXRDATA_A33_B; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			this->MIMTXRDATA_A34_B = MIMTXRDATA_A34_B; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			this->MIMTXRDATA_A35_B = MIMTXRDATA_A35_B; // net ID: MIMTXRDATA lsb: 0  msb: 35 INPUT
			this->PIPEGTRESETDONEA_A0_B = PIPEGTRESETDONEA_A0_B; // net ID: PIPEGTRESETDONEA lsb: 0  msb: 0 INPUT
			this->PIPEGTRESETDONEB_A0_B = PIPEGTRESETDONEB_A0_B; // net ID: PIPEGTRESETDONEB lsb: 0  msb: 0 INPUT
			this->PIPEPHYSTATUSA_A0_B = PIPEPHYSTATUSA_A0_B; // net ID: PIPEPHYSTATUSA lsb: 0  msb: 0 INPUT
			this->PIPEPHYSTATUSB_A0_B = PIPEPHYSTATUSB_A0_B; // net ID: PIPEPHYSTATUSB lsb: 0  msb: 0 INPUT
			this->PIPERXCHARISKA_A0_B = PIPERXCHARISKA_A0_B; // net ID: PIPERXCHARISKA lsb: 0  msb: 1 INPUT
			this->PIPERXCHARISKA_A1_B = PIPERXCHARISKA_A1_B; // net ID: PIPERXCHARISKA lsb: 0  msb: 1 INPUT
			this->PIPERXCHARISKB_A0_B = PIPERXCHARISKB_A0_B; // net ID: PIPERXCHARISKB lsb: 0  msb: 1 INPUT
			this->PIPERXCHARISKB_A1_B = PIPERXCHARISKB_A1_B; // net ID: PIPERXCHARISKB lsb: 0  msb: 1 INPUT
			this->PIPERXDATAA_A0_B = PIPERXDATAA_A0_B; // net ID: PIPERXDATAA lsb: 0  msb: 15 INPUT
			this->PIPERXDATAA_A1_B = PIPERXDATAA_A1_B; // net ID: PIPERXDATAA lsb: 0  msb: 15 INPUT
			this->PIPERXDATAA_A2_B = PIPERXDATAA_A2_B; // net ID: PIPERXDATAA lsb: 0  msb: 15 INPUT
			this->PIPERXDATAA_A3_B = PIPERXDATAA_A3_B; // net ID: PIPERXDATAA lsb: 0  msb: 15 INPUT
			this->PIPERXDATAA_A4_B = PIPERXDATAA_A4_B; // net ID: PIPERXDATAA lsb: 0  msb: 15 INPUT
			this->PIPERXDATAA_A5_B = PIPERXDATAA_A5_B; // net ID: PIPERXDATAA lsb: 0  msb: 15 INPUT
			this->PIPERXDATAA_A6_B = PIPERXDATAA_A6_B; // net ID: PIPERXDATAA lsb: 0  msb: 15 INPUT
			this->PIPERXDATAA_A7_B = PIPERXDATAA_A7_B; // net ID: PIPERXDATAA lsb: 0  msb: 15 INPUT
			this->PIPERXDATAA_A8_B = PIPERXDATAA_A8_B; // net ID: PIPERXDATAA lsb: 0  msb: 15 INPUT
			this->PIPERXDATAA_A9_B = PIPERXDATAA_A9_B; // net ID: PIPERXDATAA lsb: 0  msb: 15 INPUT
			this->PIPERXDATAA_A10_B = PIPERXDATAA_A10_B; // net ID: PIPERXDATAA lsb: 0  msb: 15 INPUT
			this->PIPERXDATAA_A11_B = PIPERXDATAA_A11_B; // net ID: PIPERXDATAA lsb: 0  msb: 15 INPUT
			this->PIPERXDATAA_A12_B = PIPERXDATAA_A12_B; // net ID: PIPERXDATAA lsb: 0  msb: 15 INPUT
			this->PIPERXDATAA_A13_B = PIPERXDATAA_A13_B; // net ID: PIPERXDATAA lsb: 0  msb: 15 INPUT
			this->PIPERXDATAA_A14_B = PIPERXDATAA_A14_B; // net ID: PIPERXDATAA lsb: 0  msb: 15 INPUT
			this->PIPERXDATAA_A15_B = PIPERXDATAA_A15_B; // net ID: PIPERXDATAA lsb: 0  msb: 15 INPUT
			this->PIPERXDATAB_A0_B = PIPERXDATAB_A0_B; // net ID: PIPERXDATAB lsb: 0  msb: 15 INPUT
			this->PIPERXDATAB_A1_B = PIPERXDATAB_A1_B; // net ID: PIPERXDATAB lsb: 0  msb: 15 INPUT
			this->PIPERXDATAB_A2_B = PIPERXDATAB_A2_B; // net ID: PIPERXDATAB lsb: 0  msb: 15 INPUT
			this->PIPERXDATAB_A3_B = PIPERXDATAB_A3_B; // net ID: PIPERXDATAB lsb: 0  msb: 15 INPUT
			this->PIPERXDATAB_A4_B = PIPERXDATAB_A4_B; // net ID: PIPERXDATAB lsb: 0  msb: 15 INPUT
			this->PIPERXDATAB_A5_B = PIPERXDATAB_A5_B; // net ID: PIPERXDATAB lsb: 0  msb: 15 INPUT
			this->PIPERXDATAB_A6_B = PIPERXDATAB_A6_B; // net ID: PIPERXDATAB lsb: 0  msb: 15 INPUT
			this->PIPERXDATAB_A7_B = PIPERXDATAB_A7_B; // net ID: PIPERXDATAB lsb: 0  msb: 15 INPUT
			this->PIPERXDATAB_A8_B = PIPERXDATAB_A8_B; // net ID: PIPERXDATAB lsb: 0  msb: 15 INPUT
			this->PIPERXDATAB_A9_B = PIPERXDATAB_A9_B; // net ID: PIPERXDATAB lsb: 0  msb: 15 INPUT
			this->PIPERXDATAB_A10_B = PIPERXDATAB_A10_B; // net ID: PIPERXDATAB lsb: 0  msb: 15 INPUT
			this->PIPERXDATAB_A11_B = PIPERXDATAB_A11_B; // net ID: PIPERXDATAB lsb: 0  msb: 15 INPUT
			this->PIPERXDATAB_A12_B = PIPERXDATAB_A12_B; // net ID: PIPERXDATAB lsb: 0  msb: 15 INPUT
			this->PIPERXDATAB_A13_B = PIPERXDATAB_A13_B; // net ID: PIPERXDATAB lsb: 0  msb: 15 INPUT
			this->PIPERXDATAB_A14_B = PIPERXDATAB_A14_B; // net ID: PIPERXDATAB lsb: 0  msb: 15 INPUT
			this->PIPERXDATAB_A15_B = PIPERXDATAB_A15_B; // net ID: PIPERXDATAB lsb: 0  msb: 15 INPUT
			this->PIPERXENTERELECIDLEA_A0_B = PIPERXENTERELECIDLEA_A0_B; // net ID: PIPERXENTERELECIDLEA lsb: 0  msb: 0 INPUT
			this->PIPERXENTERELECIDLEB_A0_B = PIPERXENTERELECIDLEB_A0_B; // net ID: PIPERXENTERELECIDLEB lsb: 0  msb: 0 INPUT
			this->PIPERXSTATUSA_A0_B = PIPERXSTATUSA_A0_B; // net ID: PIPERXSTATUSA lsb: 0  msb: 2 INPUT
			this->PIPERXSTATUSA_A1_B = PIPERXSTATUSA_A1_B; // net ID: PIPERXSTATUSA lsb: 0  msb: 2 INPUT
			this->PIPERXSTATUSA_A2_B = PIPERXSTATUSA_A2_B; // net ID: PIPERXSTATUSA lsb: 0  msb: 2 INPUT
			this->PIPERXSTATUSB_A0_B = PIPERXSTATUSB_A0_B; // net ID: PIPERXSTATUSB lsb: 0  msb: 2 INPUT
			this->PIPERXSTATUSB_A1_B = PIPERXSTATUSB_A1_B; // net ID: PIPERXSTATUSB lsb: 0  msb: 2 INPUT
			this->PIPERXSTATUSB_A2_B = PIPERXSTATUSB_A2_B; // net ID: PIPERXSTATUSB lsb: 0  msb: 2 INPUT
			this->SYSRESETN_A0_B = SYSRESETN_A0_B; // net ID: SYSRESETN lsb: 0  msb: 0 INPUT
			this->TRNFCSEL_A0_B = TRNFCSEL_A0_B; // net ID: TRNFCSEL lsb: 0  msb: 2 INPUT
			this->TRNFCSEL_A1_B = TRNFCSEL_A1_B; // net ID: TRNFCSEL lsb: 0  msb: 2 INPUT
			this->TRNFCSEL_A2_B = TRNFCSEL_A2_B; // net ID: TRNFCSEL lsb: 0  msb: 2 INPUT
			this->TRNRDSTRDYN_A0_B = TRNRDSTRDYN_A0_B; // net ID: TRNRDSTRDYN lsb: 0  msb: 0 INPUT
			this->TRNRNPOKN_A0_B = TRNRNPOKN_A0_B; // net ID: TRNRNPOKN lsb: 0  msb: 0 INPUT
			this->TRNTCFGGNTN_A0_B = TRNTCFGGNTN_A0_B; // net ID: TRNTCFGGNTN lsb: 0  msb: 0 INPUT
			this->TRNTD_A0_B = TRNTD_A0_B; // net ID: TRNTD lsb: 0  msb: 31 INPUT
			this->TRNTD_A1_B = TRNTD_A1_B; // net ID: TRNTD lsb: 0  msb: 31 INPUT
			this->TRNTD_A2_B = TRNTD_A2_B; // net ID: TRNTD lsb: 0  msb: 31 INPUT
			this->TRNTD_A3_B = TRNTD_A3_B; // net ID: TRNTD lsb: 0  msb: 31 INPUT
			this->TRNTD_A4_B = TRNTD_A4_B; // net ID: TRNTD lsb: 0  msb: 31 INPUT
			this->TRNTD_A5_B = TRNTD_A5_B; // net ID: TRNTD lsb: 0  msb: 31 INPUT
			this->TRNTD_A6_B = TRNTD_A6_B; // net ID: TRNTD lsb: 0  msb: 31 INPUT
			this->TRNTD_A7_B = TRNTD_A7_B; // net ID: TRNTD lsb: 0  msb: 31 INPUT
			this->TRNTD_A8_B = TRNTD_A8_B; // net ID: TRNTD lsb: 0  msb: 31 INPUT
			this->TRNTD_A9_B = TRNTD_A9_B; // net ID: TRNTD lsb: 0  msb: 31 INPUT
			this->TRNTD_A10_B = TRNTD_A10_B; // net ID: TRNTD lsb: 0  msb: 31 INPUT
			this->TRNTD_A11_B = TRNTD_A11_B; // net ID: TRNTD lsb: 0  msb: 31 INPUT
			this->TRNTD_A12_B = TRNTD_A12_B; // net ID: TRNTD lsb: 0  msb: 31 INPUT
			this->TRNTD_A13_B = TRNTD_A13_B; // net ID: TRNTD lsb: 0  msb: 31 INPUT
			this->TRNTD_A14_B = TRNTD_A14_B; // net ID: TRNTD lsb: 0  msb: 31 INPUT
			this->TRNTD_A15_B = TRNTD_A15_B; // net ID: TRNTD lsb: 0  msb: 31 INPUT
			this->TRNTD_A16_B = TRNTD_A16_B; // net ID: TRNTD lsb: 0  msb: 31 INPUT
			this->TRNTD_A17_B = TRNTD_A17_B; // net ID: TRNTD lsb: 0  msb: 31 INPUT
			this->TRNTD_A18_B = TRNTD_A18_B; // net ID: TRNTD lsb: 0  msb: 31 INPUT
			this->TRNTD_A19_B = TRNTD_A19_B; // net ID: TRNTD lsb: 0  msb: 31 INPUT
			this->TRNTD_A20_B = TRNTD_A20_B; // net ID: TRNTD lsb: 0  msb: 31 INPUT
			this->TRNTD_A21_B = TRNTD_A21_B; // net ID: TRNTD lsb: 0  msb: 31 INPUT
			this->TRNTD_A22_B = TRNTD_A22_B; // net ID: TRNTD lsb: 0  msb: 31 INPUT
			this->TRNTD_A23_B = TRNTD_A23_B; // net ID: TRNTD lsb: 0  msb: 31 INPUT
			this->TRNTD_A24_B = TRNTD_A24_B; // net ID: TRNTD lsb: 0  msb: 31 INPUT
			this->TRNTD_A25_B = TRNTD_A25_B; // net ID: TRNTD lsb: 0  msb: 31 INPUT
			this->TRNTD_A26_B = TRNTD_A26_B; // net ID: TRNTD lsb: 0  msb: 31 INPUT
			this->TRNTD_A27_B = TRNTD_A27_B; // net ID: TRNTD lsb: 0  msb: 31 INPUT
			this->TRNTD_A28_B = TRNTD_A28_B; // net ID: TRNTD lsb: 0  msb: 31 INPUT
			this->TRNTD_A29_B = TRNTD_A29_B; // net ID: TRNTD lsb: 0  msb: 31 INPUT
			this->TRNTD_A30_B = TRNTD_A30_B; // net ID: TRNTD lsb: 0  msb: 31 INPUT
			this->TRNTD_A31_B = TRNTD_A31_B; // net ID: TRNTD lsb: 0  msb: 31 INPUT
			this->TRNTEOFN_A0_B = TRNTEOFN_A0_B; // net ID: TRNTEOFN lsb: 0  msb: 0 INPUT
			this->TRNTERRFWDN_A0_B = TRNTERRFWDN_A0_B; // net ID: TRNTERRFWDN lsb: 0  msb: 0 INPUT
			this->TRNTSOFN_A0_B = TRNTSOFN_A0_B; // net ID: TRNTSOFN lsb: 0  msb: 0 INPUT
			this->TRNTSRCDSCN_A0_B = TRNTSRCDSCN_A0_B; // net ID: TRNTSRCDSCN lsb: 0  msb: 0 INPUT
			this->TRNTSRCRDYN_A0_B = TRNTSRCRDYN_A0_B; // net ID: TRNTSRCRDYN lsb: 0  msb: 0 INPUT
			this->TRNTSTRN_A0_B = TRNTSTRN_A0_B; // net ID: TRNTSTRN lsb: 0  msb: 0 INPUT
			this->USERCLK_A0_B = USERCLK_A0_B; // net ID: USERCLK lsb: 0  msb: 0 INPUT
			
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
#endif // X_PCIE_A1_H
