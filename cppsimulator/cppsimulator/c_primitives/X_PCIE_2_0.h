/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_PCIE_2_0{

		//Verilog Parameters:
		parameter_string_t LOC;
		parameter_int_t AER_BASE_PTR;
		parameter_enum_t AER_CAP_ECRC_CHECK_CAPABLE;
		parameter_enum_t AER_CAP_ECRC_GEN_CAPABLE;
		parameter_int_t AER_CAP_ID;
		parameter_int_t AER_CAP_INT_MSG_NUM_MSI;
		parameter_int_t AER_CAP_INT_MSG_NUM_MSIX;
		parameter_int_t AER_CAP_NEXTPTR;
		parameter_enum_t AER_CAP_ON;
		parameter_enum_t AER_CAP_PERMIT_ROOTERR_UPDATE;
		parameter_int_t AER_CAP_VERSION;
		parameter_enum_t ALLOW_X8_GEN2;
		parameter_int_t BAR0;
		parameter_int_t BAR1;
		parameter_int_t BAR2;
		parameter_int_t BAR3;
		parameter_int_t BAR4;
		parameter_int_t BAR5;
		parameter_int_t CAPABILITIES_PTR;
		parameter_int_t CARDBUS_CIS_POINTER;
		parameter_int_t CLASS_CODE;
		parameter_enum_t CMD_INTX_IMPLEMENTED;
		parameter_enum_t CPL_TIMEOUT_DISABLE_SUPPORTED;
		parameter_int_t CPL_TIMEOUT_RANGES_SUPPORTED;
		parameter_int_t CRM_MODULE_RSTS;
		parameter_int_t DEVICE_ID;
		parameter_enum_t DEV_CAP_ENABLE_SLOT_PWR_LIMIT_SCALE;
		parameter_enum_t DEV_CAP_ENABLE_SLOT_PWR_LIMIT_VALUE;
		parameter_int_t DEV_CAP_ENDPOINT_L0S_LATENCY;
		parameter_int_t DEV_CAP_ENDPOINT_L1_LATENCY;
		parameter_enum_t DEV_CAP_EXT_TAG_SUPPORTED;
		parameter_enum_t DEV_CAP_FUNCTION_LEVEL_RESET_CAPABLE;
		parameter_int_t DEV_CAP_MAX_PAYLOAD_SUPPORTED;
		parameter_int_t DEV_CAP_PHANTOM_FUNCTIONS_SUPPORT;
		parameter_enum_t DEV_CAP_ROLE_BASED_ERROR;
		parameter_int_t DEV_CAP_RSVD_14_12;
		parameter_int_t DEV_CAP_RSVD_17_16;
		parameter_int_t DEV_CAP_RSVD_31_29;
		parameter_enum_t DEV_CONTROL_AUX_POWER_SUPPORTED;
		parameter_enum_t DISABLE_ASPM_L1_TIMER;
		parameter_enum_t DISABLE_BAR_FILTERING;
		parameter_enum_t DISABLE_ID_CHECK;
		parameter_enum_t DISABLE_LANE_REVERSAL;
		parameter_enum_t DISABLE_RX_TC_FILTER;
		parameter_enum_t DISABLE_SCRAMBLING;
		parameter_int_t DNSTREAM_LINK_NUM;
		parameter_int_t DSN_BASE_PTR;
		parameter_int_t DSN_CAP_ID;
		parameter_int_t DSN_CAP_NEXTPTR;
		parameter_enum_t DSN_CAP_ON;
		parameter_int_t DSN_CAP_VERSION;
		parameter_int_t ENABLE_MSG_ROUTE;
		parameter_enum_t ENABLE_RX_TD_ECRC_TRIM;
		parameter_enum_t ENTER_RVRY_EI_L0;
		parameter_enum_t EXIT_LOOPBACK_ON_EI;
		parameter_int_t EXPANSION_ROM;
		parameter_int_t EXT_CFG_CAP_PTR;
		parameter_int_t EXT_CFG_XP_CAP_PTR;
		parameter_int_t HEADER_TYPE;
		parameter_int_t INFER_EI;
		parameter_int_t INTERRUPT_PIN;
		parameter_enum_t IS_SWITCH;
		parameter_int_t LAST_CONFIG_DWORD;
		parameter_int_t LINK_CAP_ASPM_SUPPORT;
		parameter_enum_t LINK_CAP_CLOCK_POWER_MANAGEMENT;
		parameter_enum_t LINK_CAP_DLL_LINK_ACTIVE_REPORTING_CAP;
		parameter_int_t LINK_CAP_L0S_EXIT_LATENCY_COMCLK_GEN1;
		parameter_int_t LINK_CAP_L0S_EXIT_LATENCY_COMCLK_GEN2;
		parameter_int_t LINK_CAP_L0S_EXIT_LATENCY_GEN1;
		parameter_int_t LINK_CAP_L0S_EXIT_LATENCY_GEN2;
		parameter_int_t LINK_CAP_L1_EXIT_LATENCY_COMCLK_GEN1;
		parameter_int_t LINK_CAP_L1_EXIT_LATENCY_COMCLK_GEN2;
		parameter_int_t LINK_CAP_L1_EXIT_LATENCY_GEN1;
		parameter_int_t LINK_CAP_L1_EXIT_LATENCY_GEN2;
		parameter_enum_t LINK_CAP_LINK_BANDWIDTH_NOTIFICATION_CAP;
		parameter_int_t LINK_CAP_MAX_LINK_SPEED;
		parameter_int_t LINK_CAP_MAX_LINK_WIDTH;
		parameter_int_t LINK_CAP_RSVD_23_22;
		parameter_enum_t LINK_CAP_SURPRISE_DOWN_ERROR_CAPABLE;
		parameter_int_t LINK_CONTROL_RCB;
		parameter_enum_t LINK_CTRL2_DEEMPHASIS;
		parameter_enum_t LINK_CTRL2_HW_AUTONOMOUS_SPEED_DISABLE;
		parameter_int_t LINK_CTRL2_TARGET_LINK_SPEED;
		parameter_enum_t LINK_STATUS_SLOT_CLOCK_CONFIG;
		parameter_int_t LL_ACK_TIMEOUT;
		parameter_enum_t LL_ACK_TIMEOUT_EN;
		parameter_int_t LL_ACK_TIMEOUT_FUNC;
		parameter_int_t LL_REPLAY_TIMEOUT;
		parameter_enum_t LL_REPLAY_TIMEOUT_EN;
		parameter_int_t LL_REPLAY_TIMEOUT_FUNC;
		parameter_int_t LTSSM_MAX_LINK_WIDTH;
		parameter_int_t MSIX_BASE_PTR;
		parameter_int_t MSIX_CAP_ID;
		parameter_int_t MSIX_CAP_NEXTPTR;
		parameter_enum_t MSIX_CAP_ON;
		parameter_int_t MSIX_CAP_PBA_BIR;
		parameter_int_t MSIX_CAP_PBA_OFFSET;
		parameter_int_t MSIX_CAP_TABLE_BIR;
		parameter_int_t MSIX_CAP_TABLE_OFFSET;
		parameter_int_t MSIX_CAP_TABLE_SIZE;
		parameter_int_t MSI_BASE_PTR;
		parameter_enum_t MSI_CAP_64_BIT_ADDR_CAPABLE;
		parameter_int_t MSI_CAP_ID;
		parameter_int_t MSI_CAP_MULTIMSGCAP;
		parameter_int_t MSI_CAP_MULTIMSG_EXTENSION;
		parameter_int_t MSI_CAP_NEXTPTR;
		parameter_enum_t MSI_CAP_ON;
		parameter_enum_t MSI_CAP_PER_VECTOR_MASKING_CAPABLE;
		parameter_int_t N_FTS_COMCLK_GEN1;
		parameter_int_t N_FTS_COMCLK_GEN2;
		parameter_int_t N_FTS_GEN1;
		parameter_int_t N_FTS_GEN2;
		parameter_int_t PCIE_BASE_PTR;
		parameter_int_t PCIE_CAP_CAPABILITY_ID;
		parameter_int_t PCIE_CAP_CAPABILITY_VERSION;
		parameter_int_t PCIE_CAP_DEVICE_PORT_TYPE;
		parameter_int_t PCIE_CAP_INT_MSG_NUM;
		parameter_int_t PCIE_CAP_NEXTPTR;
		parameter_enum_t PCIE_CAP_ON;
		parameter_int_t PCIE_CAP_RSVD_15_14;
		parameter_enum_t PCIE_CAP_SLOT_IMPLEMENTED;
		parameter_int_t PCIE_REVISION;
		parameter_int_t PGL0_LANE;
		parameter_int_t PGL1_LANE;
		parameter_int_t PGL2_LANE;
		parameter_int_t PGL3_LANE;
		parameter_int_t PGL4_LANE;
		parameter_int_t PGL5_LANE;
		parameter_int_t PGL6_LANE;
		parameter_int_t PGL7_LANE;
		parameter_int_t PL_AUTO_CONFIG;
		parameter_enum_t PL_FAST_TRAIN;
		parameter_int_t PM_BASE_PTR;
		parameter_int_t PM_CAP_AUXCURRENT;
		parameter_enum_t PM_CAP_D1SUPPORT;
		parameter_enum_t PM_CAP_D2SUPPORT;
		parameter_enum_t PM_CAP_DSI;
		parameter_int_t PM_CAP_ID;
		parameter_int_t PM_CAP_NEXTPTR;
		parameter_enum_t PM_CAP_ON;
		parameter_int_t PM_CAP_PMESUPPORT;
		parameter_enum_t PM_CAP_PME_CLOCK;
		parameter_int_t PM_CAP_RSVD_04;
		parameter_int_t PM_CAP_VERSION;
		parameter_enum_t PM_CSR_B2B3;
		parameter_enum_t PM_CSR_BPCCEN;
		parameter_enum_t PM_CSR_NOSOFTRST;
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
		parameter_int_t RECRC_CHK;
		parameter_enum_t RECRC_CHK_TRIM;
		parameter_int_t REVISION_ID;
		parameter_enum_t ROOT_CAP_CRS_SW_VISIBILITY;
		parameter_enum_t SELECT_DLL_IF;
		parameter_string_t SIM_VERSION;
		parameter_enum_t SLOT_CAP_ATT_BUTTON_PRESENT;
		parameter_enum_t SLOT_CAP_ATT_INDICATOR_PRESENT;
		parameter_enum_t SLOT_CAP_ELEC_INTERLOCK_PRESENT;
		parameter_enum_t SLOT_CAP_HOTPLUG_CAPABLE;
		parameter_enum_t SLOT_CAP_HOTPLUG_SURPRISE;
		parameter_enum_t SLOT_CAP_MRL_SENSOR_PRESENT;
		parameter_enum_t SLOT_CAP_NO_CMD_COMPLETED_SUPPORT;
		parameter_int_t SLOT_CAP_PHYSICAL_SLOT_NUM;
		parameter_enum_t SLOT_CAP_POWER_CONTROLLER_PRESENT;
		parameter_enum_t SLOT_CAP_POWER_INDICATOR_PRESENT;
		parameter_int_t SLOT_CAP_SLOT_POWER_LIMIT_SCALE;
		parameter_int_t SLOT_CAP_SLOT_POWER_LIMIT_VALUE;
		parameter_int_t SPARE_BIT0;
		parameter_int_t SPARE_BIT1;
		parameter_int_t SPARE_BIT2;
		parameter_int_t SPARE_BIT3;
		parameter_int_t SPARE_BIT4;
		parameter_int_t SPARE_BIT5;
		parameter_int_t SPARE_BIT6;
		parameter_int_t SPARE_BIT7;
		parameter_int_t SPARE_BIT8;
		parameter_int_t SPARE_BYTE0;
		parameter_int_t SPARE_BYTE1;
		parameter_int_t SPARE_BYTE2;
		parameter_int_t SPARE_BYTE3;
		parameter_int_t SPARE_WORD0;
		parameter_int_t SPARE_WORD1;
		parameter_int_t SPARE_WORD2;
		parameter_int_t SPARE_WORD3;
		parameter_int_t SUBSYSTEM_ID;
		parameter_int_t SUBSYSTEM_VENDOR_ID;
		parameter_enum_t TL_RBYPASS;
		parameter_int_t TL_RX_RAM_RADDR_LATENCY;
		parameter_int_t TL_RX_RAM_RDATA_LATENCY;
		parameter_int_t TL_RX_RAM_WRITE_LATENCY;
		parameter_enum_t TL_TFC_DISABLE;
		parameter_enum_t TL_TX_CHECKS_DISABLE;
		parameter_int_t TL_TX_RAM_RADDR_LATENCY;
		parameter_int_t TL_TX_RAM_RDATA_LATENCY;
		parameter_int_t TL_TX_RAM_WRITE_LATENCY;
		parameter_enum_t UPCONFIG_CAPABLE;
		parameter_enum_t UPSTREAM_FACING;
		parameter_enum_t UR_INV_REQ;
		parameter_int_t USER_CLK_FREQ;
		parameter_enum_t VC0_CPL_INFINITE;
		parameter_int_t VC0_RX_RAM_LIMIT;
		parameter_int_t VC0_TOTAL_CREDITS_CD;
		parameter_int_t VC0_TOTAL_CREDITS_CH;
		parameter_int_t VC0_TOTAL_CREDITS_NPH;
		parameter_int_t VC0_TOTAL_CREDITS_PD;
		parameter_int_t VC0_TOTAL_CREDITS_PH;
		parameter_int_t VC0_TX_LASTPACKET;
		parameter_int_t VC_BASE_PTR;
		parameter_int_t VC_CAP_ID;
		parameter_int_t VC_CAP_NEXTPTR;
		parameter_enum_t VC_CAP_ON;
		parameter_enum_t VC_CAP_REJECT_SNOOP_TRANSACTIONS;
		parameter_int_t VC_CAP_VERSION;
		parameter_int_t VENDOR_ID;
		parameter_int_t VSEC_BASE_PTR;
		parameter_int_t VSEC_CAP_HDR_ID;
		parameter_int_t VSEC_CAP_HDR_LENGTH;
		parameter_int_t VSEC_CAP_HDR_REVISION;
		parameter_int_t VSEC_CAP_ID;
		parameter_enum_t VSEC_CAP_IS_LINK_VISIBLE;
		parameter_int_t VSEC_CAP_NEXTPTR;
		parameter_enum_t VSEC_CAP_ON;
		parameter_int_t VSEC_CAP_VERSION;
		//Verilog Ports in definition order:
		NetFlow* CFGAERECRCCHECKEN; // OUTPUT
		NetFlow* CFGAERECRCGENEN; // OUTPUT
		NetFlow* CFGCOMMANDBUSMASTERENABLE; // OUTPUT
		NetFlow* CFGCOMMANDINTERRUPTDISABLE; // OUTPUT
		NetFlow* CFGCOMMANDIOENABLE; // OUTPUT
		NetFlow* CFGCOMMANDMEMENABLE; // OUTPUT
		NetFlow* CFGCOMMANDSERREN; // OUTPUT
		NetFlow* CFGDEVCONTROL2CPLTIMEOUTDIS; // OUTPUT
		NetFlow* CFGDEVCONTROL2CPLTIMEOUTVAL; // OUTPUT
		NetFlow* CFGDEVCONTROLAUXPOWEREN; // OUTPUT
		NetFlow* CFGDEVCONTROLCORRERRREPORTINGEN; // OUTPUT
		NetFlow* CFGDEVCONTROLENABLERO; // OUTPUT
		NetFlow* CFGDEVCONTROLEXTTAGEN; // OUTPUT
		NetFlow* CFGDEVCONTROLFATALERRREPORTINGEN; // OUTPUT
		NetFlow* CFGDEVCONTROLMAXPAYLOAD; // OUTPUT
		NetFlow* CFGDEVCONTROLMAXREADREQ; // OUTPUT
		NetFlow* CFGDEVCONTROLNONFATALREPORTINGEN; // OUTPUT
		NetFlow* CFGDEVCONTROLNOSNOOPEN; // OUTPUT
		NetFlow* CFGDEVCONTROLPHANTOMEN; // OUTPUT
		NetFlow* CFGDEVCONTROLURERRREPORTINGEN; // OUTPUT
		NetFlow* CFGDEVSTATUSCORRERRDETECTED; // OUTPUT
		NetFlow* CFGDEVSTATUSFATALERRDETECTED; // OUTPUT
		NetFlow* CFGDEVSTATUSNONFATALERRDETECTED; // OUTPUT
		NetFlow* CFGDEVSTATUSURDETECTED; // OUTPUT
		NetFlow* CFGDO; // OUTPUT
		NetFlow* CFGERRAERHEADERLOGSETN; // OUTPUT
		NetFlow* CFGERRCPLRDYN; // OUTPUT
		NetFlow* CFGINTERRUPTDO; // OUTPUT
		NetFlow* CFGINTERRUPTMMENABLE; // OUTPUT
		NetFlow* CFGINTERRUPTMSIENABLE; // OUTPUT
		NetFlow* CFGINTERRUPTMSIXENABLE; // OUTPUT
		NetFlow* CFGINTERRUPTMSIXFM; // OUTPUT
		NetFlow* CFGINTERRUPTRDYN; // OUTPUT
		NetFlow* CFGLINKCONTROLASPMCONTROL; // OUTPUT
		NetFlow* CFGLINKCONTROLAUTOBANDWIDTHINTEN; // OUTPUT
		NetFlow* CFGLINKCONTROLBANDWIDTHINTEN; // OUTPUT
		NetFlow* CFGLINKCONTROLCLOCKPMEN; // OUTPUT
		NetFlow* CFGLINKCONTROLCOMMONCLOCK; // OUTPUT
		NetFlow* CFGLINKCONTROLEXTENDEDSYNC; // OUTPUT
		NetFlow* CFGLINKCONTROLHWAUTOWIDTHDIS; // OUTPUT
		NetFlow* CFGLINKCONTROLLINKDISABLE; // OUTPUT
		NetFlow* CFGLINKCONTROLRCB; // OUTPUT
		NetFlow* CFGLINKCONTROLRETRAINLINK; // OUTPUT
		NetFlow* CFGLINKSTATUSAUTOBANDWIDTHSTATUS; // OUTPUT
		NetFlow* CFGLINKSTATUSBANDWITHSTATUS; // OUTPUT
		NetFlow* CFGLINKSTATUSCURRENTSPEED; // OUTPUT
		NetFlow* CFGLINKSTATUSDLLACTIVE; // OUTPUT
		NetFlow* CFGLINKSTATUSLINKTRAINING; // OUTPUT
		NetFlow* CFGLINKSTATUSNEGOTIATEDWIDTH; // OUTPUT
		NetFlow* CFGMSGDATA; // OUTPUT
		NetFlow* CFGMSGRECEIVED; // OUTPUT
		NetFlow* CFGMSGRECEIVEDASSERTINTA; // OUTPUT
		NetFlow* CFGMSGRECEIVEDASSERTINTB; // OUTPUT
		NetFlow* CFGMSGRECEIVEDASSERTINTC; // OUTPUT
		NetFlow* CFGMSGRECEIVEDASSERTINTD; // OUTPUT
		NetFlow* CFGMSGRECEIVEDDEASSERTINTA; // OUTPUT
		NetFlow* CFGMSGRECEIVEDDEASSERTINTB; // OUTPUT
		NetFlow* CFGMSGRECEIVEDDEASSERTINTC; // OUTPUT
		NetFlow* CFGMSGRECEIVEDDEASSERTINTD; // OUTPUT
		NetFlow* CFGMSGRECEIVEDERRCOR; // OUTPUT
		NetFlow* CFGMSGRECEIVEDERRFATAL; // OUTPUT
		NetFlow* CFGMSGRECEIVEDERRNONFATAL; // OUTPUT
		NetFlow* CFGMSGRECEIVEDPMASNAK; // OUTPUT
		NetFlow* CFGMSGRECEIVEDPMETO; // OUTPUT
		NetFlow* CFGMSGRECEIVEDPMETOACK; // OUTPUT
		NetFlow* CFGMSGRECEIVEDPMPME; // OUTPUT
		NetFlow* CFGMSGRECEIVEDSETSLOTPOWERLIMIT; // OUTPUT
		NetFlow* CFGMSGRECEIVEDUNLOCK; // OUTPUT
		NetFlow* CFGPCIELINKSTATE; // OUTPUT
		NetFlow* CFGPMCSRPMEEN; // OUTPUT
		NetFlow* CFGPMCSRPMESTATUS; // OUTPUT
		NetFlow* CFGPMCSRPOWERSTATE; // OUTPUT
		NetFlow* CFGPMRCVASREQL1N; // OUTPUT
		NetFlow* CFGPMRCVENTERL1N; // OUTPUT
		NetFlow* CFGPMRCVENTERL23N; // OUTPUT
		NetFlow* CFGPMRCVREQACKN; // OUTPUT
		NetFlow* CFGRDWRDONEN; // OUTPUT
		NetFlow* CFGSLOTCONTROLELECTROMECHILCTLPULSE; // OUTPUT
		NetFlow* CFGTRANSACTION; // OUTPUT
		NetFlow* CFGTRANSACTIONADDR; // OUTPUT
		NetFlow* CFGTRANSACTIONTYPE; // OUTPUT
		NetFlow* CFGVCTCVCMAP; // OUTPUT
		NetFlow* DBGSCLRA; // OUTPUT
		NetFlow* DBGSCLRB; // OUTPUT
		NetFlow* DBGSCLRC; // OUTPUT
		NetFlow* DBGSCLRD; // OUTPUT
		NetFlow* DBGSCLRE; // OUTPUT
		NetFlow* DBGSCLRF; // OUTPUT
		NetFlow* DBGSCLRG; // OUTPUT
		NetFlow* DBGSCLRH; // OUTPUT
		NetFlow* DBGSCLRI; // OUTPUT
		NetFlow* DBGSCLRJ; // OUTPUT
		NetFlow* DBGSCLRK; // OUTPUT
		NetFlow* DBGVECA; // OUTPUT
		NetFlow* DBGVECB; // OUTPUT
		NetFlow* DBGVECC; // OUTPUT
		NetFlow* DRPDO; // OUTPUT
		NetFlow* DRPDRDY; // OUTPUT
		NetFlow* LL2BADDLLPERRN; // OUTPUT
		NetFlow* LL2BADTLPERRN; // OUTPUT
		NetFlow* LL2PROTOCOLERRN; // OUTPUT
		NetFlow* LL2REPLAYROERRN; // OUTPUT
		NetFlow* LL2REPLAYTOERRN; // OUTPUT
		NetFlow* LL2SUSPENDOKN; // OUTPUT
		NetFlow* LL2TFCINIT1SEQN; // OUTPUT
		NetFlow* LL2TFCINIT2SEQN; // OUTPUT
		NetFlow* LNKCLKEN; // OUTPUT
		NetFlow* MIMRXRADDR; // OUTPUT
		NetFlow* MIMRXRCE; // OUTPUT
		NetFlow* MIMRXREN; // OUTPUT
		NetFlow* MIMRXWADDR; // OUTPUT
		NetFlow* MIMRXWDATA; // OUTPUT
		NetFlow* MIMRXWEN; // OUTPUT
		NetFlow* MIMTXRADDR; // OUTPUT
		NetFlow* MIMTXRCE; // OUTPUT
		NetFlow* MIMTXREN; // OUTPUT
		NetFlow* MIMTXWADDR; // OUTPUT
		NetFlow* MIMTXWDATA; // OUTPUT
		NetFlow* MIMTXWEN; // OUTPUT
		NetFlow* PIPERX0POLARITY; // OUTPUT
		NetFlow* PIPERX1POLARITY; // OUTPUT
		NetFlow* PIPERX2POLARITY; // OUTPUT
		NetFlow* PIPERX3POLARITY; // OUTPUT
		NetFlow* PIPERX4POLARITY; // OUTPUT
		NetFlow* PIPERX5POLARITY; // OUTPUT
		NetFlow* PIPERX6POLARITY; // OUTPUT
		NetFlow* PIPERX7POLARITY; // OUTPUT
		NetFlow* PIPETX0CHARISK; // OUTPUT
		NetFlow* PIPETX0COMPLIANCE; // OUTPUT
		NetFlow* PIPETX0DATA; // OUTPUT
		NetFlow* PIPETX0ELECIDLE; // OUTPUT
		NetFlow* PIPETX0POWERDOWN; // OUTPUT
		NetFlow* PIPETX1CHARISK; // OUTPUT
		NetFlow* PIPETX1COMPLIANCE; // OUTPUT
		NetFlow* PIPETX1DATA; // OUTPUT
		NetFlow* PIPETX1ELECIDLE; // OUTPUT
		NetFlow* PIPETX1POWERDOWN; // OUTPUT
		NetFlow* PIPETX2CHARISK; // OUTPUT
		NetFlow* PIPETX2COMPLIANCE; // OUTPUT
		NetFlow* PIPETX2DATA; // OUTPUT
		NetFlow* PIPETX2ELECIDLE; // OUTPUT
		NetFlow* PIPETX2POWERDOWN; // OUTPUT
		NetFlow* PIPETX3CHARISK; // OUTPUT
		NetFlow* PIPETX3COMPLIANCE; // OUTPUT
		NetFlow* PIPETX3DATA; // OUTPUT
		NetFlow* PIPETX3ELECIDLE; // OUTPUT
		NetFlow* PIPETX3POWERDOWN; // OUTPUT
		NetFlow* PIPETX4CHARISK; // OUTPUT
		NetFlow* PIPETX4COMPLIANCE; // OUTPUT
		NetFlow* PIPETX4DATA; // OUTPUT
		NetFlow* PIPETX4ELECIDLE; // OUTPUT
		NetFlow* PIPETX4POWERDOWN; // OUTPUT
		NetFlow* PIPETX5CHARISK; // OUTPUT
		NetFlow* PIPETX5COMPLIANCE; // OUTPUT
		NetFlow* PIPETX5DATA; // OUTPUT
		NetFlow* PIPETX5ELECIDLE; // OUTPUT
		NetFlow* PIPETX5POWERDOWN; // OUTPUT
		NetFlow* PIPETX6CHARISK; // OUTPUT
		NetFlow* PIPETX6COMPLIANCE; // OUTPUT
		NetFlow* PIPETX6DATA; // OUTPUT
		NetFlow* PIPETX6ELECIDLE; // OUTPUT
		NetFlow* PIPETX6POWERDOWN; // OUTPUT
		NetFlow* PIPETX7CHARISK; // OUTPUT
		NetFlow* PIPETX7COMPLIANCE; // OUTPUT
		NetFlow* PIPETX7DATA; // OUTPUT
		NetFlow* PIPETX7ELECIDLE; // OUTPUT
		NetFlow* PIPETX7POWERDOWN; // OUTPUT
		NetFlow* PIPETXDEEMPH; // OUTPUT
		NetFlow* PIPETXMARGIN; // OUTPUT
		NetFlow* PIPETXRATE; // OUTPUT
		NetFlow* PIPETXRCVRDET; // OUTPUT
		NetFlow* PIPETXRESET; // OUTPUT
		NetFlow* PL2LINKUPN; // OUTPUT
		NetFlow* PL2RECEIVERERRN; // OUTPUT
		NetFlow* PL2RECOVERYN; // OUTPUT
		NetFlow* PL2RXELECIDLE; // OUTPUT
		NetFlow* PL2SUSPENDOK; // OUTPUT
		NetFlow* PLDBGVEC; // OUTPUT
		NetFlow* PLINITIALLINKWIDTH; // OUTPUT
		NetFlow* PLLANEREVERSALMODE; // OUTPUT
		NetFlow* PLLINKGEN2CAP; // OUTPUT
		NetFlow* PLLINKPARTNERGEN2SUPPORTED; // OUTPUT
		NetFlow* PLLINKUPCFGCAP; // OUTPUT
		NetFlow* PLLTSSMSTATE; // OUTPUT
		NetFlow* PLPHYLNKUPN; // OUTPUT
		NetFlow* PLRECEIVEDHOTRST; // OUTPUT
		NetFlow* PLRXPMSTATE; // OUTPUT
		NetFlow* PLSELLNKRATE; // OUTPUT
		NetFlow* PLSELLNKWIDTH; // OUTPUT
		NetFlow* PLTXPMSTATE; // OUTPUT
		NetFlow* RECEIVEDFUNCLVLRSTN; // OUTPUT
		NetFlow* TL2ASPMSUSPENDCREDITCHECKOKN; // OUTPUT
		NetFlow* TL2ASPMSUSPENDREQN; // OUTPUT
		NetFlow* TL2PPMSUSPENDOKN; // OUTPUT
		NetFlow* TRNFCCPLD; // OUTPUT
		NetFlow* TRNFCCPLH; // OUTPUT
		NetFlow* TRNFCNPD; // OUTPUT
		NetFlow* TRNFCNPH; // OUTPUT
		NetFlow* TRNFCPD; // OUTPUT
		NetFlow* TRNFCPH; // OUTPUT
		NetFlow* TRNLNKUPN; // OUTPUT
		NetFlow* TRNRBARHITN; // OUTPUT
		NetFlow* TRNRD; // OUTPUT
		NetFlow* TRNRDLLPDATA; // OUTPUT
		NetFlow* TRNRDLLPSRCRDYN; // OUTPUT
		NetFlow* TRNRECRCERRN; // OUTPUT
		NetFlow* TRNREOFN; // OUTPUT
		NetFlow* TRNRERRFWDN; // OUTPUT
		NetFlow* TRNRREMN; // OUTPUT
		NetFlow* TRNRSOFN; // OUTPUT
		NetFlow* TRNRSRCDSCN; // OUTPUT
		NetFlow* TRNRSRCRDYN; // OUTPUT
		NetFlow* TRNTBUFAV; // OUTPUT
		NetFlow* TRNTCFGREQN; // OUTPUT
		NetFlow* TRNTDLLPDSTRDYN; // OUTPUT
		NetFlow* TRNTDSTRDYN; // OUTPUT
		NetFlow* TRNTERRDROPN; // OUTPUT
		NetFlow* USERRSTN; // OUTPUT
		NetFlow* CFGBYTEENN; // INPUT
		NetFlow* CFGDI; // INPUT
		NetFlow* CFGDSBUSNUMBER; // INPUT
		NetFlow* CFGDSDEVICENUMBER; // INPUT
		NetFlow* CFGDSFUNCTIONNUMBER; // INPUT
		NetFlow* CFGDSN; // INPUT
		NetFlow* CFGDWADDR; // INPUT
		NetFlow* CFGERRACSN; // INPUT
		NetFlow* CFGERRAERHEADERLOG; // INPUT
		NetFlow* CFGERRCORN; // INPUT
		NetFlow* CFGERRCPLABORTN; // INPUT
		NetFlow* CFGERRCPLTIMEOUTN; // INPUT
		NetFlow* CFGERRCPLUNEXPECTN; // INPUT
		NetFlow* CFGERRECRCN; // INPUT
		NetFlow* CFGERRLOCKEDN; // INPUT
		NetFlow* CFGERRPOSTEDN; // INPUT
		NetFlow* CFGERRTLPCPLHEADER; // INPUT
		NetFlow* CFGERRURN; // INPUT
		NetFlow* CFGINTERRUPTASSERTN; // INPUT
		NetFlow* CFGINTERRUPTDI; // INPUT
		NetFlow* CFGINTERRUPTN; // INPUT
		NetFlow* CFGPMDIRECTASPML1N; // INPUT
		NetFlow* CFGPMSENDPMACKN; // INPUT
		NetFlow* CFGPMSENDPMETON; // INPUT
		NetFlow* CFGPMSENDPMNAKN; // INPUT
		NetFlow* CFGPMTURNOFFOKN; // INPUT
		NetFlow* CFGPMWAKEN; // INPUT
		NetFlow* CFGPORTNUMBER; // INPUT
		NetFlow* CFGRDENN; // INPUT
		NetFlow* CFGTRNPENDINGN; // INPUT
		NetFlow* CFGWRENN; // INPUT
		NetFlow* CFGWRREADONLYN; // INPUT
		NetFlow* CFGWRRW1CASRWN; // INPUT
		NetFlow* CMRSTN; // INPUT
		NetFlow* CMSTICKYRSTN; // INPUT
		NetFlow* DBGMODE; // INPUT
		NetFlow* DBGSUBMODE; // INPUT
		NetFlow* DLRSTN; // INPUT
		NetFlow* DRPCLK; // INPUT
		NetFlow* DRPDADDR; // INPUT
		NetFlow* DRPDEN; // INPUT
		NetFlow* DRPDI; // INPUT
		NetFlow* DRPDWE; // INPUT
		NetFlow* FUNCLVLRSTN; // INPUT
		NetFlow* LL2SENDASREQL1N; // INPUT
		NetFlow* LL2SENDENTERL1N; // INPUT
		NetFlow* LL2SENDENTERL23N; // INPUT
		NetFlow* LL2SUSPENDNOWN; // INPUT
		NetFlow* LL2TLPRCVN; // INPUT
		NetFlow* MIMRXRDATA; // INPUT
		NetFlow* MIMTXRDATA; // INPUT
		NetFlow* PIPECLK; // INPUT
		NetFlow* PIPERX0CHANISALIGNED; // INPUT
		NetFlow* PIPERX0CHARISK; // INPUT
		NetFlow* PIPERX0DATA; // INPUT
		NetFlow* PIPERX0ELECIDLE; // INPUT
		NetFlow* PIPERX0PHYSTATUS; // INPUT
		NetFlow* PIPERX0STATUS; // INPUT
		NetFlow* PIPERX0VALID; // INPUT
		NetFlow* PIPERX1CHANISALIGNED; // INPUT
		NetFlow* PIPERX1CHARISK; // INPUT
		NetFlow* PIPERX1DATA; // INPUT
		NetFlow* PIPERX1ELECIDLE; // INPUT
		NetFlow* PIPERX1PHYSTATUS; // INPUT
		NetFlow* PIPERX1STATUS; // INPUT
		NetFlow* PIPERX1VALID; // INPUT
		NetFlow* PIPERX2CHANISALIGNED; // INPUT
		NetFlow* PIPERX2CHARISK; // INPUT
		NetFlow* PIPERX2DATA; // INPUT
		NetFlow* PIPERX2ELECIDLE; // INPUT
		NetFlow* PIPERX2PHYSTATUS; // INPUT
		NetFlow* PIPERX2STATUS; // INPUT
		NetFlow* PIPERX2VALID; // INPUT
		NetFlow* PIPERX3CHANISALIGNED; // INPUT
		NetFlow* PIPERX3CHARISK; // INPUT
		NetFlow* PIPERX3DATA; // INPUT
		NetFlow* PIPERX3ELECIDLE; // INPUT
		NetFlow* PIPERX3PHYSTATUS; // INPUT
		NetFlow* PIPERX3STATUS; // INPUT
		NetFlow* PIPERX3VALID; // INPUT
		NetFlow* PIPERX4CHANISALIGNED; // INPUT
		NetFlow* PIPERX4CHARISK; // INPUT
		NetFlow* PIPERX4DATA; // INPUT
		NetFlow* PIPERX4ELECIDLE; // INPUT
		NetFlow* PIPERX4PHYSTATUS; // INPUT
		NetFlow* PIPERX4STATUS; // INPUT
		NetFlow* PIPERX4VALID; // INPUT
		NetFlow* PIPERX5CHANISALIGNED; // INPUT
		NetFlow* PIPERX5CHARISK; // INPUT
		NetFlow* PIPERX5DATA; // INPUT
		NetFlow* PIPERX5ELECIDLE; // INPUT
		NetFlow* PIPERX5PHYSTATUS; // INPUT
		NetFlow* PIPERX5STATUS; // INPUT
		NetFlow* PIPERX5VALID; // INPUT
		NetFlow* PIPERX6CHANISALIGNED; // INPUT
		NetFlow* PIPERX6CHARISK; // INPUT
		NetFlow* PIPERX6DATA; // INPUT
		NetFlow* PIPERX6ELECIDLE; // INPUT
		NetFlow* PIPERX6PHYSTATUS; // INPUT
		NetFlow* PIPERX6STATUS; // INPUT
		NetFlow* PIPERX6VALID; // INPUT
		NetFlow* PIPERX7CHANISALIGNED; // INPUT
		NetFlow* PIPERX7CHARISK; // INPUT
		NetFlow* PIPERX7DATA; // INPUT
		NetFlow* PIPERX7ELECIDLE; // INPUT
		NetFlow* PIPERX7PHYSTATUS; // INPUT
		NetFlow* PIPERX7STATUS; // INPUT
		NetFlow* PIPERX7VALID; // INPUT
		NetFlow* PL2DIRECTEDLSTATE; // INPUT
		NetFlow* PLDBGMODE; // INPUT
		NetFlow* PLDIRECTEDLINKAUTON; // INPUT
		NetFlow* PLDIRECTEDLINKCHANGE; // INPUT
		NetFlow* PLDIRECTEDLINKSPEED; // INPUT
		NetFlow* PLDIRECTEDLINKWIDTH; // INPUT
		NetFlow* PLDOWNSTREAMDEEMPHSOURCE; // INPUT
		NetFlow* PLRSTN; // INPUT
		NetFlow* PLTRANSMITHOTRST; // INPUT
		NetFlow* PLUPSTREAMPREFERDEEMPH; // INPUT
		NetFlow* SYSRSTN; // INPUT
		NetFlow* TL2ASPMSUSPENDCREDITCHECKN; // INPUT
		NetFlow* TL2PPMSUSPENDREQN; // INPUT
		NetFlow* TLRSTN; // INPUT
		NetFlow* TRNFCSEL; // INPUT
		NetFlow* TRNRDSTRDYN; // INPUT
		NetFlow* TRNRNPOKN; // INPUT
		NetFlow* TRNTCFGGNTN; // INPUT
		NetFlow* TRNTD; // INPUT
		NetFlow* TRNTDLLPDATA; // INPUT
		NetFlow* TRNTDLLPSRCRDYN; // INPUT
		NetFlow* TRNTECRCGENN; // INPUT
		NetFlow* TRNTEOFN; // INPUT
		NetFlow* TRNTERRFWDN; // INPUT
		NetFlow* TRNTREMN; // INPUT
		NetFlow* TRNTSOFN; // INPUT
		NetFlow* TRNTSRCDSCN; // INPUT
		NetFlow* TRNTSRCRDYN; // INPUT
		NetFlow* TRNTSTRN; // INPUT
		NetFlow* USERCLK; // INPUT
		
	
		X_PCIE_2_0(
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_int_t AER_BASE_PTR, // Default: 12'h128
			parameter_enum_t AER_CAP_ECRC_CHECK_CAPABLE, // Default: "FALSE"
			parameter_enum_t AER_CAP_ECRC_GEN_CAPABLE, // Default: "FALSE"
			parameter_int_t AER_CAP_ID, // Default: 16'h0001
			parameter_int_t AER_CAP_INT_MSG_NUM_MSI, // Default: 5'h0A
			parameter_int_t AER_CAP_INT_MSG_NUM_MSIX, // Default: 5'h15
			parameter_int_t AER_CAP_NEXTPTR, // Default: 12'h160
			parameter_enum_t AER_CAP_ON, // Default: "FALSE"
			parameter_enum_t AER_CAP_PERMIT_ROOTERR_UPDATE, // Default: "TRUE"
			parameter_int_t AER_CAP_VERSION, // Default: 4'h1
			parameter_enum_t ALLOW_X8_GEN2, // Default: "FALSE"
			parameter_int_t BAR0, // Default: 32'hFFFFFF00
			parameter_int_t BAR1, // Default: 32'hFFFF0000
			parameter_int_t BAR2, // Default: 32'hFFFF000C
			parameter_int_t BAR3, // Default: 32'hFFFFFFFF
			parameter_int_t BAR4, // Default: 32'h00000000
			parameter_int_t BAR5, // Default: 32'h00000000
			parameter_int_t CAPABILITIES_PTR, // Default: 8'h40
			parameter_int_t CARDBUS_CIS_POINTER, // Default: 32'h00000000
			parameter_int_t CLASS_CODE, // Default: 24'h000000
			parameter_enum_t CMD_INTX_IMPLEMENTED, // Default: "TRUE"
			parameter_enum_t CPL_TIMEOUT_DISABLE_SUPPORTED, // Default: "FALSE"
			parameter_int_t CPL_TIMEOUT_RANGES_SUPPORTED, // Default: 4'h0
			parameter_int_t CRM_MODULE_RSTS, // Default: 7'h00
			parameter_int_t DEVICE_ID, // Default: 16'h0007
			parameter_enum_t DEV_CAP_ENABLE_SLOT_PWR_LIMIT_SCALE, // Default: "TRUE"
			parameter_enum_t DEV_CAP_ENABLE_SLOT_PWR_LIMIT_VALUE, // Default: "TRUE"
			parameter_int_t DEV_CAP_ENDPOINT_L0S_LATENCY, // Default: 0
			parameter_int_t DEV_CAP_ENDPOINT_L1_LATENCY, // Default: 0
			parameter_enum_t DEV_CAP_EXT_TAG_SUPPORTED, // Default: "TRUE"
			parameter_enum_t DEV_CAP_FUNCTION_LEVEL_RESET_CAPABLE, // Default: "FALSE"
			parameter_int_t DEV_CAP_MAX_PAYLOAD_SUPPORTED, // Default: 2
			parameter_int_t DEV_CAP_PHANTOM_FUNCTIONS_SUPPORT, // Default: 0
			parameter_enum_t DEV_CAP_ROLE_BASED_ERROR, // Default: "TRUE"
			parameter_int_t DEV_CAP_RSVD_14_12, // Default: 0
			parameter_int_t DEV_CAP_RSVD_17_16, // Default: 0
			parameter_int_t DEV_CAP_RSVD_31_29, // Default: 0
			parameter_enum_t DEV_CONTROL_AUX_POWER_SUPPORTED, // Default: "FALSE"
			parameter_enum_t DISABLE_ASPM_L1_TIMER, // Default: "FALSE"
			parameter_enum_t DISABLE_BAR_FILTERING, // Default: "FALSE"
			parameter_enum_t DISABLE_ID_CHECK, // Default: "FALSE"
			parameter_enum_t DISABLE_LANE_REVERSAL, // Default: "FALSE"
			parameter_enum_t DISABLE_RX_TC_FILTER, // Default: "FALSE"
			parameter_enum_t DISABLE_SCRAMBLING, // Default: "FALSE"
			parameter_int_t DNSTREAM_LINK_NUM, // Default: 8'h00
			parameter_int_t DSN_BASE_PTR, // Default: 12'h100
			parameter_int_t DSN_CAP_ID, // Default: 16'h0003
			parameter_int_t DSN_CAP_NEXTPTR, // Default: 12'h000
			parameter_enum_t DSN_CAP_ON, // Default: "TRUE"
			parameter_int_t DSN_CAP_VERSION, // Default: 4'h1
			parameter_int_t ENABLE_MSG_ROUTE, // Default: 11'h000
			parameter_enum_t ENABLE_RX_TD_ECRC_TRIM, // Default: "FALSE"
			parameter_enum_t ENTER_RVRY_EI_L0, // Default: "TRUE"
			parameter_enum_t EXIT_LOOPBACK_ON_EI, // Default: "TRUE"
			parameter_int_t EXPANSION_ROM, // Default: 32'hFFFFF001
			parameter_int_t EXT_CFG_CAP_PTR, // Default: 6'h3F
			parameter_int_t EXT_CFG_XP_CAP_PTR, // Default: 10'h3FF
			parameter_int_t HEADER_TYPE, // Default: 8'h00
			parameter_int_t INFER_EI, // Default: 5'h00
			parameter_int_t INTERRUPT_PIN, // Default: 8'h01
			parameter_enum_t IS_SWITCH, // Default: "FALSE"
			parameter_int_t LAST_CONFIG_DWORD, // Default: 10'h042
			parameter_int_t LINK_CAP_ASPM_SUPPORT, // Default: 1
			parameter_enum_t LINK_CAP_CLOCK_POWER_MANAGEMENT, // Default: "FALSE"
			parameter_enum_t LINK_CAP_DLL_LINK_ACTIVE_REPORTING_CAP, // Default: "FALSE"
			parameter_int_t LINK_CAP_L0S_EXIT_LATENCY_COMCLK_GEN1, // Default: 7
			parameter_int_t LINK_CAP_L0S_EXIT_LATENCY_COMCLK_GEN2, // Default: 7
			parameter_int_t LINK_CAP_L0S_EXIT_LATENCY_GEN1, // Default: 7
			parameter_int_t LINK_CAP_L0S_EXIT_LATENCY_GEN2, // Default: 7
			parameter_int_t LINK_CAP_L1_EXIT_LATENCY_COMCLK_GEN1, // Default: 7
			parameter_int_t LINK_CAP_L1_EXIT_LATENCY_COMCLK_GEN2, // Default: 7
			parameter_int_t LINK_CAP_L1_EXIT_LATENCY_GEN1, // Default: 7
			parameter_int_t LINK_CAP_L1_EXIT_LATENCY_GEN2, // Default: 7
			parameter_enum_t LINK_CAP_LINK_BANDWIDTH_NOTIFICATION_CAP, // Default: "FALSE"
			parameter_int_t LINK_CAP_MAX_LINK_SPEED, // Default: 4'h1
			parameter_int_t LINK_CAP_MAX_LINK_WIDTH, // Default: 6'h08
			parameter_int_t LINK_CAP_RSVD_23_22, // Default: 0
			parameter_enum_t LINK_CAP_SURPRISE_DOWN_ERROR_CAPABLE, // Default: "FALSE"
			parameter_int_t LINK_CONTROL_RCB, // Default: 0
			parameter_enum_t LINK_CTRL2_DEEMPHASIS, // Default: "FALSE"
			parameter_enum_t LINK_CTRL2_HW_AUTONOMOUS_SPEED_DISABLE, // Default: "FALSE"
			parameter_int_t LINK_CTRL2_TARGET_LINK_SPEED, // Default: 4'h2
			parameter_enum_t LINK_STATUS_SLOT_CLOCK_CONFIG, // Default: "TRUE"
			parameter_int_t LL_ACK_TIMEOUT, // Default: 15'h0000
			parameter_enum_t LL_ACK_TIMEOUT_EN, // Default: "FALSE"
			parameter_int_t LL_ACK_TIMEOUT_FUNC, // Default: 0
			parameter_int_t LL_REPLAY_TIMEOUT, // Default: 15'h0000
			parameter_enum_t LL_REPLAY_TIMEOUT_EN, // Default: "FALSE"
			parameter_int_t LL_REPLAY_TIMEOUT_FUNC, // Default: 0
			parameter_int_t LTSSM_MAX_LINK_WIDTH, // Default: 6'h01
			parameter_int_t MSIX_BASE_PTR, // Default: 8'h9C
			parameter_int_t MSIX_CAP_ID, // Default: 8'h11
			parameter_int_t MSIX_CAP_NEXTPTR, // Default: 8'h00
			parameter_enum_t MSIX_CAP_ON, // Default: "FALSE"
			parameter_int_t MSIX_CAP_PBA_BIR, // Default: 0
			parameter_int_t MSIX_CAP_PBA_OFFSET, // Default: 29'h00000050
			parameter_int_t MSIX_CAP_TABLE_BIR, // Default: 0
			parameter_int_t MSIX_CAP_TABLE_OFFSET, // Default: 29'h00000040
			parameter_int_t MSIX_CAP_TABLE_SIZE, // Default: 11'h000
			parameter_int_t MSI_BASE_PTR, // Default: 8'h48
			parameter_enum_t MSI_CAP_64_BIT_ADDR_CAPABLE, // Default: "TRUE"
			parameter_int_t MSI_CAP_ID, // Default: 8'h05
			parameter_int_t MSI_CAP_MULTIMSGCAP, // Default: 0
			parameter_int_t MSI_CAP_MULTIMSG_EXTENSION, // Default: 0
			parameter_int_t MSI_CAP_NEXTPTR, // Default: 8'h60
			parameter_enum_t MSI_CAP_ON, // Default: "FALSE"
			parameter_enum_t MSI_CAP_PER_VECTOR_MASKING_CAPABLE, // Default: "TRUE"
			parameter_int_t N_FTS_COMCLK_GEN1, // Default: 255
			parameter_int_t N_FTS_COMCLK_GEN2, // Default: 255
			parameter_int_t N_FTS_GEN1, // Default: 255
			parameter_int_t N_FTS_GEN2, // Default: 255
			parameter_int_t PCIE_BASE_PTR, // Default: 8'h60
			parameter_int_t PCIE_CAP_CAPABILITY_ID, // Default: 8'h10
			parameter_int_t PCIE_CAP_CAPABILITY_VERSION, // Default: 4'h2
			parameter_int_t PCIE_CAP_DEVICE_PORT_TYPE, // Default: 4'h0
			parameter_int_t PCIE_CAP_INT_MSG_NUM, // Default: 5'h00
			parameter_int_t PCIE_CAP_NEXTPTR, // Default: 8'h00
			parameter_enum_t PCIE_CAP_ON, // Default: "TRUE"
			parameter_int_t PCIE_CAP_RSVD_15_14, // Default: 0
			parameter_enum_t PCIE_CAP_SLOT_IMPLEMENTED, // Default: "FALSE"
			parameter_int_t PCIE_REVISION, // Default: 2
			parameter_int_t PGL0_LANE, // Default: 0
			parameter_int_t PGL1_LANE, // Default: 1
			parameter_int_t PGL2_LANE, // Default: 2
			parameter_int_t PGL3_LANE, // Default: 3
			parameter_int_t PGL4_LANE, // Default: 4
			parameter_int_t PGL5_LANE, // Default: 5
			parameter_int_t PGL6_LANE, // Default: 6
			parameter_int_t PGL7_LANE, // Default: 7
			parameter_int_t PL_AUTO_CONFIG, // Default: 0
			parameter_enum_t PL_FAST_TRAIN, // Default: "FALSE"
			parameter_int_t PM_BASE_PTR, // Default: 8'h40
			parameter_int_t PM_CAP_AUXCURRENT, // Default: 0
			parameter_enum_t PM_CAP_D1SUPPORT, // Default: "TRUE"
			parameter_enum_t PM_CAP_D2SUPPORT, // Default: "TRUE"
			parameter_enum_t PM_CAP_DSI, // Default: "FALSE"
			parameter_int_t PM_CAP_ID, // Default: 8'h01
			parameter_int_t PM_CAP_NEXTPTR, // Default: 8'h48
			parameter_enum_t PM_CAP_ON, // Default: "TRUE"
			parameter_int_t PM_CAP_PMESUPPORT, // Default: 5'h0F
			parameter_enum_t PM_CAP_PME_CLOCK, // Default: "FALSE"
			parameter_int_t PM_CAP_RSVD_04, // Default: 0
			parameter_int_t PM_CAP_VERSION, // Default: 3
			parameter_enum_t PM_CSR_B2B3, // Default: "FALSE"
			parameter_enum_t PM_CSR_BPCCEN, // Default: "FALSE"
			parameter_enum_t PM_CSR_NOSOFTRST, // Default: "TRUE"
			parameter_int_t PM_DATA0, // Default: 8'h01
			parameter_int_t PM_DATA1, // Default: 8'h01
			parameter_int_t PM_DATA2, // Default: 8'h01
			parameter_int_t PM_DATA3, // Default: 8'h01
			parameter_int_t PM_DATA4, // Default: 8'h01
			parameter_int_t PM_DATA5, // Default: 8'h01
			parameter_int_t PM_DATA6, // Default: 8'h01
			parameter_int_t PM_DATA7, // Default: 8'h01
			parameter_int_t PM_DATA_SCALE0, // Default: 2'h1
			parameter_int_t PM_DATA_SCALE1, // Default: 2'h1
			parameter_int_t PM_DATA_SCALE2, // Default: 2'h1
			parameter_int_t PM_DATA_SCALE3, // Default: 2'h1
			parameter_int_t PM_DATA_SCALE4, // Default: 2'h1
			parameter_int_t PM_DATA_SCALE5, // Default: 2'h1
			parameter_int_t PM_DATA_SCALE6, // Default: 2'h1
			parameter_int_t PM_DATA_SCALE7, // Default: 2'h1
			parameter_int_t RECRC_CHK, // Default: 0
			parameter_enum_t RECRC_CHK_TRIM, // Default: "FALSE"
			parameter_int_t REVISION_ID, // Default: 8'h00
			parameter_enum_t ROOT_CAP_CRS_SW_VISIBILITY, // Default: "FALSE"
			parameter_enum_t SELECT_DLL_IF, // Default: "FALSE"
			parameter_string_t SIM_VERSION, // Default: "1.0"
			parameter_enum_t SLOT_CAP_ATT_BUTTON_PRESENT, // Default: "FALSE"
			parameter_enum_t SLOT_CAP_ATT_INDICATOR_PRESENT, // Default: "FALSE"
			parameter_enum_t SLOT_CAP_ELEC_INTERLOCK_PRESENT, // Default: "FALSE"
			parameter_enum_t SLOT_CAP_HOTPLUG_CAPABLE, // Default: "FALSE"
			parameter_enum_t SLOT_CAP_HOTPLUG_SURPRISE, // Default: "FALSE"
			parameter_enum_t SLOT_CAP_MRL_SENSOR_PRESENT, // Default: "FALSE"
			parameter_enum_t SLOT_CAP_NO_CMD_COMPLETED_SUPPORT, // Default: "FALSE"
			parameter_int_t SLOT_CAP_PHYSICAL_SLOT_NUM, // Default: 13'h0000
			parameter_enum_t SLOT_CAP_POWER_CONTROLLER_PRESENT, // Default: "FALSE"
			parameter_enum_t SLOT_CAP_POWER_INDICATOR_PRESENT, // Default: "FALSE"
			parameter_int_t SLOT_CAP_SLOT_POWER_LIMIT_SCALE, // Default: 0
			parameter_int_t SLOT_CAP_SLOT_POWER_LIMIT_VALUE, // Default: 8'h00
			parameter_int_t SPARE_BIT0, // Default: 0
			parameter_int_t SPARE_BIT1, // Default: 0
			parameter_int_t SPARE_BIT2, // Default: 0
			parameter_int_t SPARE_BIT3, // Default: 0
			parameter_int_t SPARE_BIT4, // Default: 0
			parameter_int_t SPARE_BIT5, // Default: 0
			parameter_int_t SPARE_BIT6, // Default: 0
			parameter_int_t SPARE_BIT7, // Default: 0
			parameter_int_t SPARE_BIT8, // Default: 0
			parameter_int_t SPARE_BYTE0, // Default: 8'h00
			parameter_int_t SPARE_BYTE1, // Default: 8'h00
			parameter_int_t SPARE_BYTE2, // Default: 8'h00
			parameter_int_t SPARE_BYTE3, // Default: 8'h00
			parameter_int_t SPARE_WORD0, // Default: 32'h00000000
			parameter_int_t SPARE_WORD1, // Default: 32'h00000000
			parameter_int_t SPARE_WORD2, // Default: 32'h00000000
			parameter_int_t SPARE_WORD3, // Default: 32'h00000000
			parameter_int_t SUBSYSTEM_ID, // Default: 16'h0007
			parameter_int_t SUBSYSTEM_VENDOR_ID, // Default: 16'h10EE
			parameter_enum_t TL_RBYPASS, // Default: "FALSE"
			parameter_int_t TL_RX_RAM_RADDR_LATENCY, // Default: 0
			parameter_int_t TL_RX_RAM_RDATA_LATENCY, // Default: 2
			parameter_int_t TL_RX_RAM_WRITE_LATENCY, // Default: 0
			parameter_enum_t TL_TFC_DISABLE, // Default: "FALSE"
			parameter_enum_t TL_TX_CHECKS_DISABLE, // Default: "FALSE"
			parameter_int_t TL_TX_RAM_RADDR_LATENCY, // Default: 0
			parameter_int_t TL_TX_RAM_RDATA_LATENCY, // Default: 2
			parameter_int_t TL_TX_RAM_WRITE_LATENCY, // Default: 0
			parameter_enum_t UPCONFIG_CAPABLE, // Default: "TRUE"
			parameter_enum_t UPSTREAM_FACING, // Default: "TRUE"
			parameter_enum_t UR_INV_REQ, // Default: "TRUE"
			parameter_int_t USER_CLK_FREQ, // Default: 3
			parameter_enum_t VC0_CPL_INFINITE, // Default: "TRUE"
			parameter_int_t VC0_RX_RAM_LIMIT, // Default: 13'h03FF
			parameter_int_t VC0_TOTAL_CREDITS_CD, // Default: 127
			parameter_int_t VC0_TOTAL_CREDITS_CH, // Default: 31
			parameter_int_t VC0_TOTAL_CREDITS_NPH, // Default: 12
			parameter_int_t VC0_TOTAL_CREDITS_PD, // Default: 288
			parameter_int_t VC0_TOTAL_CREDITS_PH, // Default: 32
			parameter_int_t VC0_TX_LASTPACKET, // Default: 31
			parameter_int_t VC_BASE_PTR, // Default: 12'h10C
			parameter_int_t VC_CAP_ID, // Default: 16'h0002
			parameter_int_t VC_CAP_NEXTPTR, // Default: 12'h000
			parameter_enum_t VC_CAP_ON, // Default: "FALSE"
			parameter_enum_t VC_CAP_REJECT_SNOOP_TRANSACTIONS, // Default: "FALSE"
			parameter_int_t VC_CAP_VERSION, // Default: 4'h1
			parameter_int_t VENDOR_ID, // Default: 16'h10EE
			parameter_int_t VSEC_BASE_PTR, // Default: 12'h160
			parameter_int_t VSEC_CAP_HDR_ID, // Default: 16'h1234
			parameter_int_t VSEC_CAP_HDR_LENGTH, // Default: 12'h018
			parameter_int_t VSEC_CAP_HDR_REVISION, // Default: 4'h1
			parameter_int_t VSEC_CAP_ID, // Default: 16'h000B
			parameter_enum_t VSEC_CAP_IS_LINK_VISIBLE, // Default: "TRUE"
			parameter_int_t VSEC_CAP_NEXTPTR, // Default: 12'h000
			parameter_enum_t VSEC_CAP_ON, // Default: "FALSE"
			parameter_int_t VSEC_CAP_VERSION, // Default: 4'h1
			//Verilog Ports in definition order:
			NetFlow* CFGAERECRCCHECKEN, // OUTPUT
			NetFlow* CFGAERECRCGENEN, // OUTPUT
			NetFlow* CFGCOMMANDBUSMASTERENABLE, // OUTPUT
			NetFlow* CFGCOMMANDINTERRUPTDISABLE, // OUTPUT
			NetFlow* CFGCOMMANDIOENABLE, // OUTPUT
			NetFlow* CFGCOMMANDMEMENABLE, // OUTPUT
			NetFlow* CFGCOMMANDSERREN, // OUTPUT
			NetFlow* CFGDEVCONTROL2CPLTIMEOUTDIS, // OUTPUT
			NetFlow* CFGDEVCONTROL2CPLTIMEOUTVAL, // OUTPUT
			NetFlow* CFGDEVCONTROLAUXPOWEREN, // OUTPUT
			NetFlow* CFGDEVCONTROLCORRERRREPORTINGEN, // OUTPUT
			NetFlow* CFGDEVCONTROLENABLERO, // OUTPUT
			NetFlow* CFGDEVCONTROLEXTTAGEN, // OUTPUT
			NetFlow* CFGDEVCONTROLFATALERRREPORTINGEN, // OUTPUT
			NetFlow* CFGDEVCONTROLMAXPAYLOAD, // OUTPUT
			NetFlow* CFGDEVCONTROLMAXREADREQ, // OUTPUT
			NetFlow* CFGDEVCONTROLNONFATALREPORTINGEN, // OUTPUT
			NetFlow* CFGDEVCONTROLNOSNOOPEN, // OUTPUT
			NetFlow* CFGDEVCONTROLPHANTOMEN, // OUTPUT
			NetFlow* CFGDEVCONTROLURERRREPORTINGEN, // OUTPUT
			NetFlow* CFGDEVSTATUSCORRERRDETECTED, // OUTPUT
			NetFlow* CFGDEVSTATUSFATALERRDETECTED, // OUTPUT
			NetFlow* CFGDEVSTATUSNONFATALERRDETECTED, // OUTPUT
			NetFlow* CFGDEVSTATUSURDETECTED, // OUTPUT
			NetFlow* CFGDO, // OUTPUT
			NetFlow* CFGERRAERHEADERLOGSETN, // OUTPUT
			NetFlow* CFGERRCPLRDYN, // OUTPUT
			NetFlow* CFGINTERRUPTDO, // OUTPUT
			NetFlow* CFGINTERRUPTMMENABLE, // OUTPUT
			NetFlow* CFGINTERRUPTMSIENABLE, // OUTPUT
			NetFlow* CFGINTERRUPTMSIXENABLE, // OUTPUT
			NetFlow* CFGINTERRUPTMSIXFM, // OUTPUT
			NetFlow* CFGINTERRUPTRDYN, // OUTPUT
			NetFlow* CFGLINKCONTROLASPMCONTROL, // OUTPUT
			NetFlow* CFGLINKCONTROLAUTOBANDWIDTHINTEN, // OUTPUT
			NetFlow* CFGLINKCONTROLBANDWIDTHINTEN, // OUTPUT
			NetFlow* CFGLINKCONTROLCLOCKPMEN, // OUTPUT
			NetFlow* CFGLINKCONTROLCOMMONCLOCK, // OUTPUT
			NetFlow* CFGLINKCONTROLEXTENDEDSYNC, // OUTPUT
			NetFlow* CFGLINKCONTROLHWAUTOWIDTHDIS, // OUTPUT
			NetFlow* CFGLINKCONTROLLINKDISABLE, // OUTPUT
			NetFlow* CFGLINKCONTROLRCB, // OUTPUT
			NetFlow* CFGLINKCONTROLRETRAINLINK, // OUTPUT
			NetFlow* CFGLINKSTATUSAUTOBANDWIDTHSTATUS, // OUTPUT
			NetFlow* CFGLINKSTATUSBANDWITHSTATUS, // OUTPUT
			NetFlow* CFGLINKSTATUSCURRENTSPEED, // OUTPUT
			NetFlow* CFGLINKSTATUSDLLACTIVE, // OUTPUT
			NetFlow* CFGLINKSTATUSLINKTRAINING, // OUTPUT
			NetFlow* CFGLINKSTATUSNEGOTIATEDWIDTH, // OUTPUT
			NetFlow* CFGMSGDATA, // OUTPUT
			NetFlow* CFGMSGRECEIVED, // OUTPUT
			NetFlow* CFGMSGRECEIVEDASSERTINTA, // OUTPUT
			NetFlow* CFGMSGRECEIVEDASSERTINTB, // OUTPUT
			NetFlow* CFGMSGRECEIVEDASSERTINTC, // OUTPUT
			NetFlow* CFGMSGRECEIVEDASSERTINTD, // OUTPUT
			NetFlow* CFGMSGRECEIVEDDEASSERTINTA, // OUTPUT
			NetFlow* CFGMSGRECEIVEDDEASSERTINTB, // OUTPUT
			NetFlow* CFGMSGRECEIVEDDEASSERTINTC, // OUTPUT
			NetFlow* CFGMSGRECEIVEDDEASSERTINTD, // OUTPUT
			NetFlow* CFGMSGRECEIVEDERRCOR, // OUTPUT
			NetFlow* CFGMSGRECEIVEDERRFATAL, // OUTPUT
			NetFlow* CFGMSGRECEIVEDERRNONFATAL, // OUTPUT
			NetFlow* CFGMSGRECEIVEDPMASNAK, // OUTPUT
			NetFlow* CFGMSGRECEIVEDPMETO, // OUTPUT
			NetFlow* CFGMSGRECEIVEDPMETOACK, // OUTPUT
			NetFlow* CFGMSGRECEIVEDPMPME, // OUTPUT
			NetFlow* CFGMSGRECEIVEDSETSLOTPOWERLIMIT, // OUTPUT
			NetFlow* CFGMSGRECEIVEDUNLOCK, // OUTPUT
			NetFlow* CFGPCIELINKSTATE, // OUTPUT
			NetFlow* CFGPMCSRPMEEN, // OUTPUT
			NetFlow* CFGPMCSRPMESTATUS, // OUTPUT
			NetFlow* CFGPMCSRPOWERSTATE, // OUTPUT
			NetFlow* CFGPMRCVASREQL1N, // OUTPUT
			NetFlow* CFGPMRCVENTERL1N, // OUTPUT
			NetFlow* CFGPMRCVENTERL23N, // OUTPUT
			NetFlow* CFGPMRCVREQACKN, // OUTPUT
			NetFlow* CFGRDWRDONEN, // OUTPUT
			NetFlow* CFGSLOTCONTROLELECTROMECHILCTLPULSE, // OUTPUT
			NetFlow* CFGTRANSACTION, // OUTPUT
			NetFlow* CFGTRANSACTIONADDR, // OUTPUT
			NetFlow* CFGTRANSACTIONTYPE, // OUTPUT
			NetFlow* CFGVCTCVCMAP, // OUTPUT
			NetFlow* DBGSCLRA, // OUTPUT
			NetFlow* DBGSCLRB, // OUTPUT
			NetFlow* DBGSCLRC, // OUTPUT
			NetFlow* DBGSCLRD, // OUTPUT
			NetFlow* DBGSCLRE, // OUTPUT
			NetFlow* DBGSCLRF, // OUTPUT
			NetFlow* DBGSCLRG, // OUTPUT
			NetFlow* DBGSCLRH, // OUTPUT
			NetFlow* DBGSCLRI, // OUTPUT
			NetFlow* DBGSCLRJ, // OUTPUT
			NetFlow* DBGSCLRK, // OUTPUT
			NetFlow* DBGVECA, // OUTPUT
			NetFlow* DBGVECB, // OUTPUT
			NetFlow* DBGVECC, // OUTPUT
			NetFlow* DRPDO, // OUTPUT
			NetFlow* DRPDRDY, // OUTPUT
			NetFlow* LL2BADDLLPERRN, // OUTPUT
			NetFlow* LL2BADTLPERRN, // OUTPUT
			NetFlow* LL2PROTOCOLERRN, // OUTPUT
			NetFlow* LL2REPLAYROERRN, // OUTPUT
			NetFlow* LL2REPLAYTOERRN, // OUTPUT
			NetFlow* LL2SUSPENDOKN, // OUTPUT
			NetFlow* LL2TFCINIT1SEQN, // OUTPUT
			NetFlow* LL2TFCINIT2SEQN, // OUTPUT
			NetFlow* LNKCLKEN, // OUTPUT
			NetFlow* MIMRXRADDR, // OUTPUT
			NetFlow* MIMRXRCE, // OUTPUT
			NetFlow* MIMRXREN, // OUTPUT
			NetFlow* MIMRXWADDR, // OUTPUT
			NetFlow* MIMRXWDATA, // OUTPUT
			NetFlow* MIMRXWEN, // OUTPUT
			NetFlow* MIMTXRADDR, // OUTPUT
			NetFlow* MIMTXRCE, // OUTPUT
			NetFlow* MIMTXREN, // OUTPUT
			NetFlow* MIMTXWADDR, // OUTPUT
			NetFlow* MIMTXWDATA, // OUTPUT
			NetFlow* MIMTXWEN, // OUTPUT
			NetFlow* PIPERX0POLARITY, // OUTPUT
			NetFlow* PIPERX1POLARITY, // OUTPUT
			NetFlow* PIPERX2POLARITY, // OUTPUT
			NetFlow* PIPERX3POLARITY, // OUTPUT
			NetFlow* PIPERX4POLARITY, // OUTPUT
			NetFlow* PIPERX5POLARITY, // OUTPUT
			NetFlow* PIPERX6POLARITY, // OUTPUT
			NetFlow* PIPERX7POLARITY, // OUTPUT
			NetFlow* PIPETX0CHARISK, // OUTPUT
			NetFlow* PIPETX0COMPLIANCE, // OUTPUT
			NetFlow* PIPETX0DATA, // OUTPUT
			NetFlow* PIPETX0ELECIDLE, // OUTPUT
			NetFlow* PIPETX0POWERDOWN, // OUTPUT
			NetFlow* PIPETX1CHARISK, // OUTPUT
			NetFlow* PIPETX1COMPLIANCE, // OUTPUT
			NetFlow* PIPETX1DATA, // OUTPUT
			NetFlow* PIPETX1ELECIDLE, // OUTPUT
			NetFlow* PIPETX1POWERDOWN, // OUTPUT
			NetFlow* PIPETX2CHARISK, // OUTPUT
			NetFlow* PIPETX2COMPLIANCE, // OUTPUT
			NetFlow* PIPETX2DATA, // OUTPUT
			NetFlow* PIPETX2ELECIDLE, // OUTPUT
			NetFlow* PIPETX2POWERDOWN, // OUTPUT
			NetFlow* PIPETX3CHARISK, // OUTPUT
			NetFlow* PIPETX3COMPLIANCE, // OUTPUT
			NetFlow* PIPETX3DATA, // OUTPUT
			NetFlow* PIPETX3ELECIDLE, // OUTPUT
			NetFlow* PIPETX3POWERDOWN, // OUTPUT
			NetFlow* PIPETX4CHARISK, // OUTPUT
			NetFlow* PIPETX4COMPLIANCE, // OUTPUT
			NetFlow* PIPETX4DATA, // OUTPUT
			NetFlow* PIPETX4ELECIDLE, // OUTPUT
			NetFlow* PIPETX4POWERDOWN, // OUTPUT
			NetFlow* PIPETX5CHARISK, // OUTPUT
			NetFlow* PIPETX5COMPLIANCE, // OUTPUT
			NetFlow* PIPETX5DATA, // OUTPUT
			NetFlow* PIPETX5ELECIDLE, // OUTPUT
			NetFlow* PIPETX5POWERDOWN, // OUTPUT
			NetFlow* PIPETX6CHARISK, // OUTPUT
			NetFlow* PIPETX6COMPLIANCE, // OUTPUT
			NetFlow* PIPETX6DATA, // OUTPUT
			NetFlow* PIPETX6ELECIDLE, // OUTPUT
			NetFlow* PIPETX6POWERDOWN, // OUTPUT
			NetFlow* PIPETX7CHARISK, // OUTPUT
			NetFlow* PIPETX7COMPLIANCE, // OUTPUT
			NetFlow* PIPETX7DATA, // OUTPUT
			NetFlow* PIPETX7ELECIDLE, // OUTPUT
			NetFlow* PIPETX7POWERDOWN, // OUTPUT
			NetFlow* PIPETXDEEMPH, // OUTPUT
			NetFlow* PIPETXMARGIN, // OUTPUT
			NetFlow* PIPETXRATE, // OUTPUT
			NetFlow* PIPETXRCVRDET, // OUTPUT
			NetFlow* PIPETXRESET, // OUTPUT
			NetFlow* PL2LINKUPN, // OUTPUT
			NetFlow* PL2RECEIVERERRN, // OUTPUT
			NetFlow* PL2RECOVERYN, // OUTPUT
			NetFlow* PL2RXELECIDLE, // OUTPUT
			NetFlow* PL2SUSPENDOK, // OUTPUT
			NetFlow* PLDBGVEC, // OUTPUT
			NetFlow* PLINITIALLINKWIDTH, // OUTPUT
			NetFlow* PLLANEREVERSALMODE, // OUTPUT
			NetFlow* PLLINKGEN2CAP, // OUTPUT
			NetFlow* PLLINKPARTNERGEN2SUPPORTED, // OUTPUT
			NetFlow* PLLINKUPCFGCAP, // OUTPUT
			NetFlow* PLLTSSMSTATE, // OUTPUT
			NetFlow* PLPHYLNKUPN, // OUTPUT
			NetFlow* PLRECEIVEDHOTRST, // OUTPUT
			NetFlow* PLRXPMSTATE, // OUTPUT
			NetFlow* PLSELLNKRATE, // OUTPUT
			NetFlow* PLSELLNKWIDTH, // OUTPUT
			NetFlow* PLTXPMSTATE, // OUTPUT
			NetFlow* RECEIVEDFUNCLVLRSTN, // OUTPUT
			NetFlow* TL2ASPMSUSPENDCREDITCHECKOKN, // OUTPUT
			NetFlow* TL2ASPMSUSPENDREQN, // OUTPUT
			NetFlow* TL2PPMSUSPENDOKN, // OUTPUT
			NetFlow* TRNFCCPLD, // OUTPUT
			NetFlow* TRNFCCPLH, // OUTPUT
			NetFlow* TRNFCNPD, // OUTPUT
			NetFlow* TRNFCNPH, // OUTPUT
			NetFlow* TRNFCPD, // OUTPUT
			NetFlow* TRNFCPH, // OUTPUT
			NetFlow* TRNLNKUPN, // OUTPUT
			NetFlow* TRNRBARHITN, // OUTPUT
			NetFlow* TRNRD, // OUTPUT
			NetFlow* TRNRDLLPDATA, // OUTPUT
			NetFlow* TRNRDLLPSRCRDYN, // OUTPUT
			NetFlow* TRNRECRCERRN, // OUTPUT
			NetFlow* TRNREOFN, // OUTPUT
			NetFlow* TRNRERRFWDN, // OUTPUT
			NetFlow* TRNRREMN, // OUTPUT
			NetFlow* TRNRSOFN, // OUTPUT
			NetFlow* TRNRSRCDSCN, // OUTPUT
			NetFlow* TRNRSRCRDYN, // OUTPUT
			NetFlow* TRNTBUFAV, // OUTPUT
			NetFlow* TRNTCFGREQN, // OUTPUT
			NetFlow* TRNTDLLPDSTRDYN, // OUTPUT
			NetFlow* TRNTDSTRDYN, // OUTPUT
			NetFlow* TRNTERRDROPN, // OUTPUT
			NetFlow* USERRSTN, // OUTPUT
			NetFlow* CFGBYTEENN, // INPUT
			NetFlow* CFGDI, // INPUT
			NetFlow* CFGDSBUSNUMBER, // INPUT
			NetFlow* CFGDSDEVICENUMBER, // INPUT
			NetFlow* CFGDSFUNCTIONNUMBER, // INPUT
			NetFlow* CFGDSN, // INPUT
			NetFlow* CFGDWADDR, // INPUT
			NetFlow* CFGERRACSN, // INPUT
			NetFlow* CFGERRAERHEADERLOG, // INPUT
			NetFlow* CFGERRCORN, // INPUT
			NetFlow* CFGERRCPLABORTN, // INPUT
			NetFlow* CFGERRCPLTIMEOUTN, // INPUT
			NetFlow* CFGERRCPLUNEXPECTN, // INPUT
			NetFlow* CFGERRECRCN, // INPUT
			NetFlow* CFGERRLOCKEDN, // INPUT
			NetFlow* CFGERRPOSTEDN, // INPUT
			NetFlow* CFGERRTLPCPLHEADER, // INPUT
			NetFlow* CFGERRURN, // INPUT
			NetFlow* CFGINTERRUPTASSERTN, // INPUT
			NetFlow* CFGINTERRUPTDI, // INPUT
			NetFlow* CFGINTERRUPTN, // INPUT
			NetFlow* CFGPMDIRECTASPML1N, // INPUT
			NetFlow* CFGPMSENDPMACKN, // INPUT
			NetFlow* CFGPMSENDPMETON, // INPUT
			NetFlow* CFGPMSENDPMNAKN, // INPUT
			NetFlow* CFGPMTURNOFFOKN, // INPUT
			NetFlow* CFGPMWAKEN, // INPUT
			NetFlow* CFGPORTNUMBER, // INPUT
			NetFlow* CFGRDENN, // INPUT
			NetFlow* CFGTRNPENDINGN, // INPUT
			NetFlow* CFGWRENN, // INPUT
			NetFlow* CFGWRREADONLYN, // INPUT
			NetFlow* CFGWRRW1CASRWN, // INPUT
			NetFlow* CMRSTN, // INPUT
			NetFlow* CMSTICKYRSTN, // INPUT
			NetFlow* DBGMODE, // INPUT
			NetFlow* DBGSUBMODE, // INPUT
			NetFlow* DLRSTN, // INPUT
			NetFlow* DRPCLK, // INPUT
			NetFlow* DRPDADDR, // INPUT
			NetFlow* DRPDEN, // INPUT
			NetFlow* DRPDI, // INPUT
			NetFlow* DRPDWE, // INPUT
			NetFlow* FUNCLVLRSTN, // INPUT
			NetFlow* LL2SENDASREQL1N, // INPUT
			NetFlow* LL2SENDENTERL1N, // INPUT
			NetFlow* LL2SENDENTERL23N, // INPUT
			NetFlow* LL2SUSPENDNOWN, // INPUT
			NetFlow* LL2TLPRCVN, // INPUT
			NetFlow* MIMRXRDATA, // INPUT
			NetFlow* MIMTXRDATA, // INPUT
			NetFlow* PIPECLK, // INPUT
			NetFlow* PIPERX0CHANISALIGNED, // INPUT
			NetFlow* PIPERX0CHARISK, // INPUT
			NetFlow* PIPERX0DATA, // INPUT
			NetFlow* PIPERX0ELECIDLE, // INPUT
			NetFlow* PIPERX0PHYSTATUS, // INPUT
			NetFlow* PIPERX0STATUS, // INPUT
			NetFlow* PIPERX0VALID, // INPUT
			NetFlow* PIPERX1CHANISALIGNED, // INPUT
			NetFlow* PIPERX1CHARISK, // INPUT
			NetFlow* PIPERX1DATA, // INPUT
			NetFlow* PIPERX1ELECIDLE, // INPUT
			NetFlow* PIPERX1PHYSTATUS, // INPUT
			NetFlow* PIPERX1STATUS, // INPUT
			NetFlow* PIPERX1VALID, // INPUT
			NetFlow* PIPERX2CHANISALIGNED, // INPUT
			NetFlow* PIPERX2CHARISK, // INPUT
			NetFlow* PIPERX2DATA, // INPUT
			NetFlow* PIPERX2ELECIDLE, // INPUT
			NetFlow* PIPERX2PHYSTATUS, // INPUT
			NetFlow* PIPERX2STATUS, // INPUT
			NetFlow* PIPERX2VALID, // INPUT
			NetFlow* PIPERX3CHANISALIGNED, // INPUT
			NetFlow* PIPERX3CHARISK, // INPUT
			NetFlow* PIPERX3DATA, // INPUT
			NetFlow* PIPERX3ELECIDLE, // INPUT
			NetFlow* PIPERX3PHYSTATUS, // INPUT
			NetFlow* PIPERX3STATUS, // INPUT
			NetFlow* PIPERX3VALID, // INPUT
			NetFlow* PIPERX4CHANISALIGNED, // INPUT
			NetFlow* PIPERX4CHARISK, // INPUT
			NetFlow* PIPERX4DATA, // INPUT
			NetFlow* PIPERX4ELECIDLE, // INPUT
			NetFlow* PIPERX4PHYSTATUS, // INPUT
			NetFlow* PIPERX4STATUS, // INPUT
			NetFlow* PIPERX4VALID, // INPUT
			NetFlow* PIPERX5CHANISALIGNED, // INPUT
			NetFlow* PIPERX5CHARISK, // INPUT
			NetFlow* PIPERX5DATA, // INPUT
			NetFlow* PIPERX5ELECIDLE, // INPUT
			NetFlow* PIPERX5PHYSTATUS, // INPUT
			NetFlow* PIPERX5STATUS, // INPUT
			NetFlow* PIPERX5VALID, // INPUT
			NetFlow* PIPERX6CHANISALIGNED, // INPUT
			NetFlow* PIPERX6CHARISK, // INPUT
			NetFlow* PIPERX6DATA, // INPUT
			NetFlow* PIPERX6ELECIDLE, // INPUT
			NetFlow* PIPERX6PHYSTATUS, // INPUT
			NetFlow* PIPERX6STATUS, // INPUT
			NetFlow* PIPERX6VALID, // INPUT
			NetFlow* PIPERX7CHANISALIGNED, // INPUT
			NetFlow* PIPERX7CHARISK, // INPUT
			NetFlow* PIPERX7DATA, // INPUT
			NetFlow* PIPERX7ELECIDLE, // INPUT
			NetFlow* PIPERX7PHYSTATUS, // INPUT
			NetFlow* PIPERX7STATUS, // INPUT
			NetFlow* PIPERX7VALID, // INPUT
			NetFlow* PL2DIRECTEDLSTATE, // INPUT
			NetFlow* PLDBGMODE, // INPUT
			NetFlow* PLDIRECTEDLINKAUTON, // INPUT
			NetFlow* PLDIRECTEDLINKCHANGE, // INPUT
			NetFlow* PLDIRECTEDLINKSPEED, // INPUT
			NetFlow* PLDIRECTEDLINKWIDTH, // INPUT
			NetFlow* PLDOWNSTREAMDEEMPHSOURCE, // INPUT
			NetFlow* PLRSTN, // INPUT
			NetFlow* PLTRANSMITHOTRST, // INPUT
			NetFlow* PLUPSTREAMPREFERDEEMPH, // INPUT
			NetFlow* SYSRSTN, // INPUT
			NetFlow* TL2ASPMSUSPENDCREDITCHECKN, // INPUT
			NetFlow* TL2PPMSUSPENDREQN, // INPUT
			NetFlow* TLRSTN, // INPUT
			NetFlow* TRNFCSEL, // INPUT
			NetFlow* TRNRDSTRDYN, // INPUT
			NetFlow* TRNRNPOKN, // INPUT
			NetFlow* TRNTCFGGNTN, // INPUT
			NetFlow* TRNTD, // INPUT
			NetFlow* TRNTDLLPDATA, // INPUT
			NetFlow* TRNTDLLPSRCRDYN, // INPUT
			NetFlow* TRNTECRCGENN, // INPUT
			NetFlow* TRNTEOFN, // INPUT
			NetFlow* TRNTERRFWDN, // INPUT
			NetFlow* TRNTREMN, // INPUT
			NetFlow* TRNTSOFN, // INPUT
			NetFlow* TRNTSRCDSCN, // INPUT
			NetFlow* TRNTSRCRDYN, // INPUT
			NetFlow* TRNTSTRN, // INPUT
			NetFlow* USERCLK // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			this->AER_BASE_PTR = AER_BASE_PTR; // Default: 12'h128
			this->AER_CAP_ECRC_CHECK_CAPABLE = AER_CAP_ECRC_CHECK_CAPABLE; // Default: "FALSE"
			this->AER_CAP_ECRC_GEN_CAPABLE = AER_CAP_ECRC_GEN_CAPABLE; // Default: "FALSE"
			this->AER_CAP_ID = AER_CAP_ID; // Default: 16'h0001
			this->AER_CAP_INT_MSG_NUM_MSI = AER_CAP_INT_MSG_NUM_MSI; // Default: 5'h0A
			this->AER_CAP_INT_MSG_NUM_MSIX = AER_CAP_INT_MSG_NUM_MSIX; // Default: 5'h15
			this->AER_CAP_NEXTPTR = AER_CAP_NEXTPTR; // Default: 12'h160
			this->AER_CAP_ON = AER_CAP_ON; // Default: "FALSE"
			this->AER_CAP_PERMIT_ROOTERR_UPDATE = AER_CAP_PERMIT_ROOTERR_UPDATE; // Default: "TRUE"
			this->AER_CAP_VERSION = AER_CAP_VERSION; // Default: 4'h1
			this->ALLOW_X8_GEN2 = ALLOW_X8_GEN2; // Default: "FALSE"
			this->BAR0 = BAR0; // Default: 32'hFFFFFF00
			this->BAR1 = BAR1; // Default: 32'hFFFF0000
			this->BAR2 = BAR2; // Default: 32'hFFFF000C
			this->BAR3 = BAR3; // Default: 32'hFFFFFFFF
			this->BAR4 = BAR4; // Default: 32'h00000000
			this->BAR5 = BAR5; // Default: 32'h00000000
			this->CAPABILITIES_PTR = CAPABILITIES_PTR; // Default: 8'h40
			this->CARDBUS_CIS_POINTER = CARDBUS_CIS_POINTER; // Default: 32'h00000000
			this->CLASS_CODE = CLASS_CODE; // Default: 24'h000000
			this->CMD_INTX_IMPLEMENTED = CMD_INTX_IMPLEMENTED; // Default: "TRUE"
			this->CPL_TIMEOUT_DISABLE_SUPPORTED = CPL_TIMEOUT_DISABLE_SUPPORTED; // Default: "FALSE"
			this->CPL_TIMEOUT_RANGES_SUPPORTED = CPL_TIMEOUT_RANGES_SUPPORTED; // Default: 4'h0
			this->CRM_MODULE_RSTS = CRM_MODULE_RSTS; // Default: 7'h00
			this->DEVICE_ID = DEVICE_ID; // Default: 16'h0007
			this->DEV_CAP_ENABLE_SLOT_PWR_LIMIT_SCALE = DEV_CAP_ENABLE_SLOT_PWR_LIMIT_SCALE; // Default: "TRUE"
			this->DEV_CAP_ENABLE_SLOT_PWR_LIMIT_VALUE = DEV_CAP_ENABLE_SLOT_PWR_LIMIT_VALUE; // Default: "TRUE"
			this->DEV_CAP_ENDPOINT_L0S_LATENCY = DEV_CAP_ENDPOINT_L0S_LATENCY; // Default: 0
			this->DEV_CAP_ENDPOINT_L1_LATENCY = DEV_CAP_ENDPOINT_L1_LATENCY; // Default: 0
			this->DEV_CAP_EXT_TAG_SUPPORTED = DEV_CAP_EXT_TAG_SUPPORTED; // Default: "TRUE"
			this->DEV_CAP_FUNCTION_LEVEL_RESET_CAPABLE = DEV_CAP_FUNCTION_LEVEL_RESET_CAPABLE; // Default: "FALSE"
			this->DEV_CAP_MAX_PAYLOAD_SUPPORTED = DEV_CAP_MAX_PAYLOAD_SUPPORTED; // Default: 2
			this->DEV_CAP_PHANTOM_FUNCTIONS_SUPPORT = DEV_CAP_PHANTOM_FUNCTIONS_SUPPORT; // Default: 0
			this->DEV_CAP_ROLE_BASED_ERROR = DEV_CAP_ROLE_BASED_ERROR; // Default: "TRUE"
			this->DEV_CAP_RSVD_14_12 = DEV_CAP_RSVD_14_12; // Default: 0
			this->DEV_CAP_RSVD_17_16 = DEV_CAP_RSVD_17_16; // Default: 0
			this->DEV_CAP_RSVD_31_29 = DEV_CAP_RSVD_31_29; // Default: 0
			this->DEV_CONTROL_AUX_POWER_SUPPORTED = DEV_CONTROL_AUX_POWER_SUPPORTED; // Default: "FALSE"
			this->DISABLE_ASPM_L1_TIMER = DISABLE_ASPM_L1_TIMER; // Default: "FALSE"
			this->DISABLE_BAR_FILTERING = DISABLE_BAR_FILTERING; // Default: "FALSE"
			this->DISABLE_ID_CHECK = DISABLE_ID_CHECK; // Default: "FALSE"
			this->DISABLE_LANE_REVERSAL = DISABLE_LANE_REVERSAL; // Default: "FALSE"
			this->DISABLE_RX_TC_FILTER = DISABLE_RX_TC_FILTER; // Default: "FALSE"
			this->DISABLE_SCRAMBLING = DISABLE_SCRAMBLING; // Default: "FALSE"
			this->DNSTREAM_LINK_NUM = DNSTREAM_LINK_NUM; // Default: 8'h00
			this->DSN_BASE_PTR = DSN_BASE_PTR; // Default: 12'h100
			this->DSN_CAP_ID = DSN_CAP_ID; // Default: 16'h0003
			this->DSN_CAP_NEXTPTR = DSN_CAP_NEXTPTR; // Default: 12'h000
			this->DSN_CAP_ON = DSN_CAP_ON; // Default: "TRUE"
			this->DSN_CAP_VERSION = DSN_CAP_VERSION; // Default: 4'h1
			this->ENABLE_MSG_ROUTE = ENABLE_MSG_ROUTE; // Default: 11'h000
			this->ENABLE_RX_TD_ECRC_TRIM = ENABLE_RX_TD_ECRC_TRIM; // Default: "FALSE"
			this->ENTER_RVRY_EI_L0 = ENTER_RVRY_EI_L0; // Default: "TRUE"
			this->EXIT_LOOPBACK_ON_EI = EXIT_LOOPBACK_ON_EI; // Default: "TRUE"
			this->EXPANSION_ROM = EXPANSION_ROM; // Default: 32'hFFFFF001
			this->EXT_CFG_CAP_PTR = EXT_CFG_CAP_PTR; // Default: 6'h3F
			this->EXT_CFG_XP_CAP_PTR = EXT_CFG_XP_CAP_PTR; // Default: 10'h3FF
			this->HEADER_TYPE = HEADER_TYPE; // Default: 8'h00
			this->INFER_EI = INFER_EI; // Default: 5'h00
			this->INTERRUPT_PIN = INTERRUPT_PIN; // Default: 8'h01
			this->IS_SWITCH = IS_SWITCH; // Default: "FALSE"
			this->LAST_CONFIG_DWORD = LAST_CONFIG_DWORD; // Default: 10'h042
			this->LINK_CAP_ASPM_SUPPORT = LINK_CAP_ASPM_SUPPORT; // Default: 1
			this->LINK_CAP_CLOCK_POWER_MANAGEMENT = LINK_CAP_CLOCK_POWER_MANAGEMENT; // Default: "FALSE"
			this->LINK_CAP_DLL_LINK_ACTIVE_REPORTING_CAP = LINK_CAP_DLL_LINK_ACTIVE_REPORTING_CAP; // Default: "FALSE"
			this->LINK_CAP_L0S_EXIT_LATENCY_COMCLK_GEN1 = LINK_CAP_L0S_EXIT_LATENCY_COMCLK_GEN1; // Default: 7
			this->LINK_CAP_L0S_EXIT_LATENCY_COMCLK_GEN2 = LINK_CAP_L0S_EXIT_LATENCY_COMCLK_GEN2; // Default: 7
			this->LINK_CAP_L0S_EXIT_LATENCY_GEN1 = LINK_CAP_L0S_EXIT_LATENCY_GEN1; // Default: 7
			this->LINK_CAP_L0S_EXIT_LATENCY_GEN2 = LINK_CAP_L0S_EXIT_LATENCY_GEN2; // Default: 7
			this->LINK_CAP_L1_EXIT_LATENCY_COMCLK_GEN1 = LINK_CAP_L1_EXIT_LATENCY_COMCLK_GEN1; // Default: 7
			this->LINK_CAP_L1_EXIT_LATENCY_COMCLK_GEN2 = LINK_CAP_L1_EXIT_LATENCY_COMCLK_GEN2; // Default: 7
			this->LINK_CAP_L1_EXIT_LATENCY_GEN1 = LINK_CAP_L1_EXIT_LATENCY_GEN1; // Default: 7
			this->LINK_CAP_L1_EXIT_LATENCY_GEN2 = LINK_CAP_L1_EXIT_LATENCY_GEN2; // Default: 7
			this->LINK_CAP_LINK_BANDWIDTH_NOTIFICATION_CAP = LINK_CAP_LINK_BANDWIDTH_NOTIFICATION_CAP; // Default: "FALSE"
			this->LINK_CAP_MAX_LINK_SPEED = LINK_CAP_MAX_LINK_SPEED; // Default: 4'h1
			this->LINK_CAP_MAX_LINK_WIDTH = LINK_CAP_MAX_LINK_WIDTH; // Default: 6'h08
			this->LINK_CAP_RSVD_23_22 = LINK_CAP_RSVD_23_22; // Default: 0
			this->LINK_CAP_SURPRISE_DOWN_ERROR_CAPABLE = LINK_CAP_SURPRISE_DOWN_ERROR_CAPABLE; // Default: "FALSE"
			this->LINK_CONTROL_RCB = LINK_CONTROL_RCB; // Default: 0
			this->LINK_CTRL2_DEEMPHASIS = LINK_CTRL2_DEEMPHASIS; // Default: "FALSE"
			this->LINK_CTRL2_HW_AUTONOMOUS_SPEED_DISABLE = LINK_CTRL2_HW_AUTONOMOUS_SPEED_DISABLE; // Default: "FALSE"
			this->LINK_CTRL2_TARGET_LINK_SPEED = LINK_CTRL2_TARGET_LINK_SPEED; // Default: 4'h2
			this->LINK_STATUS_SLOT_CLOCK_CONFIG = LINK_STATUS_SLOT_CLOCK_CONFIG; // Default: "TRUE"
			this->LL_ACK_TIMEOUT = LL_ACK_TIMEOUT; // Default: 15'h0000
			this->LL_ACK_TIMEOUT_EN = LL_ACK_TIMEOUT_EN; // Default: "FALSE"
			this->LL_ACK_TIMEOUT_FUNC = LL_ACK_TIMEOUT_FUNC; // Default: 0
			this->LL_REPLAY_TIMEOUT = LL_REPLAY_TIMEOUT; // Default: 15'h0000
			this->LL_REPLAY_TIMEOUT_EN = LL_REPLAY_TIMEOUT_EN; // Default: "FALSE"
			this->LL_REPLAY_TIMEOUT_FUNC = LL_REPLAY_TIMEOUT_FUNC; // Default: 0
			this->LTSSM_MAX_LINK_WIDTH = LTSSM_MAX_LINK_WIDTH; // Default: 6'h01
			this->MSIX_BASE_PTR = MSIX_BASE_PTR; // Default: 8'h9C
			this->MSIX_CAP_ID = MSIX_CAP_ID; // Default: 8'h11
			this->MSIX_CAP_NEXTPTR = MSIX_CAP_NEXTPTR; // Default: 8'h00
			this->MSIX_CAP_ON = MSIX_CAP_ON; // Default: "FALSE"
			this->MSIX_CAP_PBA_BIR = MSIX_CAP_PBA_BIR; // Default: 0
			this->MSIX_CAP_PBA_OFFSET = MSIX_CAP_PBA_OFFSET; // Default: 29'h00000050
			this->MSIX_CAP_TABLE_BIR = MSIX_CAP_TABLE_BIR; // Default: 0
			this->MSIX_CAP_TABLE_OFFSET = MSIX_CAP_TABLE_OFFSET; // Default: 29'h00000040
			this->MSIX_CAP_TABLE_SIZE = MSIX_CAP_TABLE_SIZE; // Default: 11'h000
			this->MSI_BASE_PTR = MSI_BASE_PTR; // Default: 8'h48
			this->MSI_CAP_64_BIT_ADDR_CAPABLE = MSI_CAP_64_BIT_ADDR_CAPABLE; // Default: "TRUE"
			this->MSI_CAP_ID = MSI_CAP_ID; // Default: 8'h05
			this->MSI_CAP_MULTIMSGCAP = MSI_CAP_MULTIMSGCAP; // Default: 0
			this->MSI_CAP_MULTIMSG_EXTENSION = MSI_CAP_MULTIMSG_EXTENSION; // Default: 0
			this->MSI_CAP_NEXTPTR = MSI_CAP_NEXTPTR; // Default: 8'h60
			this->MSI_CAP_ON = MSI_CAP_ON; // Default: "FALSE"
			this->MSI_CAP_PER_VECTOR_MASKING_CAPABLE = MSI_CAP_PER_VECTOR_MASKING_CAPABLE; // Default: "TRUE"
			this->N_FTS_COMCLK_GEN1 = N_FTS_COMCLK_GEN1; // Default: 255
			this->N_FTS_COMCLK_GEN2 = N_FTS_COMCLK_GEN2; // Default: 255
			this->N_FTS_GEN1 = N_FTS_GEN1; // Default: 255
			this->N_FTS_GEN2 = N_FTS_GEN2; // Default: 255
			this->PCIE_BASE_PTR = PCIE_BASE_PTR; // Default: 8'h60
			this->PCIE_CAP_CAPABILITY_ID = PCIE_CAP_CAPABILITY_ID; // Default: 8'h10
			this->PCIE_CAP_CAPABILITY_VERSION = PCIE_CAP_CAPABILITY_VERSION; // Default: 4'h2
			this->PCIE_CAP_DEVICE_PORT_TYPE = PCIE_CAP_DEVICE_PORT_TYPE; // Default: 4'h0
			this->PCIE_CAP_INT_MSG_NUM = PCIE_CAP_INT_MSG_NUM; // Default: 5'h00
			this->PCIE_CAP_NEXTPTR = PCIE_CAP_NEXTPTR; // Default: 8'h00
			this->PCIE_CAP_ON = PCIE_CAP_ON; // Default: "TRUE"
			this->PCIE_CAP_RSVD_15_14 = PCIE_CAP_RSVD_15_14; // Default: 0
			this->PCIE_CAP_SLOT_IMPLEMENTED = PCIE_CAP_SLOT_IMPLEMENTED; // Default: "FALSE"
			this->PCIE_REVISION = PCIE_REVISION; // Default: 2
			this->PGL0_LANE = PGL0_LANE; // Default: 0
			this->PGL1_LANE = PGL1_LANE; // Default: 1
			this->PGL2_LANE = PGL2_LANE; // Default: 2
			this->PGL3_LANE = PGL3_LANE; // Default: 3
			this->PGL4_LANE = PGL4_LANE; // Default: 4
			this->PGL5_LANE = PGL5_LANE; // Default: 5
			this->PGL6_LANE = PGL6_LANE; // Default: 6
			this->PGL7_LANE = PGL7_LANE; // Default: 7
			this->PL_AUTO_CONFIG = PL_AUTO_CONFIG; // Default: 0
			this->PL_FAST_TRAIN = PL_FAST_TRAIN; // Default: "FALSE"
			this->PM_BASE_PTR = PM_BASE_PTR; // Default: 8'h40
			this->PM_CAP_AUXCURRENT = PM_CAP_AUXCURRENT; // Default: 0
			this->PM_CAP_D1SUPPORT = PM_CAP_D1SUPPORT; // Default: "TRUE"
			this->PM_CAP_D2SUPPORT = PM_CAP_D2SUPPORT; // Default: "TRUE"
			this->PM_CAP_DSI = PM_CAP_DSI; // Default: "FALSE"
			this->PM_CAP_ID = PM_CAP_ID; // Default: 8'h01
			this->PM_CAP_NEXTPTR = PM_CAP_NEXTPTR; // Default: 8'h48
			this->PM_CAP_ON = PM_CAP_ON; // Default: "TRUE"
			this->PM_CAP_PMESUPPORT = PM_CAP_PMESUPPORT; // Default: 5'h0F
			this->PM_CAP_PME_CLOCK = PM_CAP_PME_CLOCK; // Default: "FALSE"
			this->PM_CAP_RSVD_04 = PM_CAP_RSVD_04; // Default: 0
			this->PM_CAP_VERSION = PM_CAP_VERSION; // Default: 3
			this->PM_CSR_B2B3 = PM_CSR_B2B3; // Default: "FALSE"
			this->PM_CSR_BPCCEN = PM_CSR_BPCCEN; // Default: "FALSE"
			this->PM_CSR_NOSOFTRST = PM_CSR_NOSOFTRST; // Default: "TRUE"
			this->PM_DATA0 = PM_DATA0; // Default: 8'h01
			this->PM_DATA1 = PM_DATA1; // Default: 8'h01
			this->PM_DATA2 = PM_DATA2; // Default: 8'h01
			this->PM_DATA3 = PM_DATA3; // Default: 8'h01
			this->PM_DATA4 = PM_DATA4; // Default: 8'h01
			this->PM_DATA5 = PM_DATA5; // Default: 8'h01
			this->PM_DATA6 = PM_DATA6; // Default: 8'h01
			this->PM_DATA7 = PM_DATA7; // Default: 8'h01
			this->PM_DATA_SCALE0 = PM_DATA_SCALE0; // Default: 2'h1
			this->PM_DATA_SCALE1 = PM_DATA_SCALE1; // Default: 2'h1
			this->PM_DATA_SCALE2 = PM_DATA_SCALE2; // Default: 2'h1
			this->PM_DATA_SCALE3 = PM_DATA_SCALE3; // Default: 2'h1
			this->PM_DATA_SCALE4 = PM_DATA_SCALE4; // Default: 2'h1
			this->PM_DATA_SCALE5 = PM_DATA_SCALE5; // Default: 2'h1
			this->PM_DATA_SCALE6 = PM_DATA_SCALE6; // Default: 2'h1
			this->PM_DATA_SCALE7 = PM_DATA_SCALE7; // Default: 2'h1
			this->RECRC_CHK = RECRC_CHK; // Default: 0
			this->RECRC_CHK_TRIM = RECRC_CHK_TRIM; // Default: "FALSE"
			this->REVISION_ID = REVISION_ID; // Default: 8'h00
			this->ROOT_CAP_CRS_SW_VISIBILITY = ROOT_CAP_CRS_SW_VISIBILITY; // Default: "FALSE"
			this->SELECT_DLL_IF = SELECT_DLL_IF; // Default: "FALSE"
			this->SIM_VERSION = SIM_VERSION; // Default: "1.0"
			this->SLOT_CAP_ATT_BUTTON_PRESENT = SLOT_CAP_ATT_BUTTON_PRESENT; // Default: "FALSE"
			this->SLOT_CAP_ATT_INDICATOR_PRESENT = SLOT_CAP_ATT_INDICATOR_PRESENT; // Default: "FALSE"
			this->SLOT_CAP_ELEC_INTERLOCK_PRESENT = SLOT_CAP_ELEC_INTERLOCK_PRESENT; // Default: "FALSE"
			this->SLOT_CAP_HOTPLUG_CAPABLE = SLOT_CAP_HOTPLUG_CAPABLE; // Default: "FALSE"
			this->SLOT_CAP_HOTPLUG_SURPRISE = SLOT_CAP_HOTPLUG_SURPRISE; // Default: "FALSE"
			this->SLOT_CAP_MRL_SENSOR_PRESENT = SLOT_CAP_MRL_SENSOR_PRESENT; // Default: "FALSE"
			this->SLOT_CAP_NO_CMD_COMPLETED_SUPPORT = SLOT_CAP_NO_CMD_COMPLETED_SUPPORT; // Default: "FALSE"
			this->SLOT_CAP_PHYSICAL_SLOT_NUM = SLOT_CAP_PHYSICAL_SLOT_NUM; // Default: 13'h0000
			this->SLOT_CAP_POWER_CONTROLLER_PRESENT = SLOT_CAP_POWER_CONTROLLER_PRESENT; // Default: "FALSE"
			this->SLOT_CAP_POWER_INDICATOR_PRESENT = SLOT_CAP_POWER_INDICATOR_PRESENT; // Default: "FALSE"
			this->SLOT_CAP_SLOT_POWER_LIMIT_SCALE = SLOT_CAP_SLOT_POWER_LIMIT_SCALE; // Default: 0
			this->SLOT_CAP_SLOT_POWER_LIMIT_VALUE = SLOT_CAP_SLOT_POWER_LIMIT_VALUE; // Default: 8'h00
			this->SPARE_BIT0 = SPARE_BIT0; // Default: 0
			this->SPARE_BIT1 = SPARE_BIT1; // Default: 0
			this->SPARE_BIT2 = SPARE_BIT2; // Default: 0
			this->SPARE_BIT3 = SPARE_BIT3; // Default: 0
			this->SPARE_BIT4 = SPARE_BIT4; // Default: 0
			this->SPARE_BIT5 = SPARE_BIT5; // Default: 0
			this->SPARE_BIT6 = SPARE_BIT6; // Default: 0
			this->SPARE_BIT7 = SPARE_BIT7; // Default: 0
			this->SPARE_BIT8 = SPARE_BIT8; // Default: 0
			this->SPARE_BYTE0 = SPARE_BYTE0; // Default: 8'h00
			this->SPARE_BYTE1 = SPARE_BYTE1; // Default: 8'h00
			this->SPARE_BYTE2 = SPARE_BYTE2; // Default: 8'h00
			this->SPARE_BYTE3 = SPARE_BYTE3; // Default: 8'h00
			this->SPARE_WORD0 = SPARE_WORD0; // Default: 32'h00000000
			this->SPARE_WORD1 = SPARE_WORD1; // Default: 32'h00000000
			this->SPARE_WORD2 = SPARE_WORD2; // Default: 32'h00000000
			this->SPARE_WORD3 = SPARE_WORD3; // Default: 32'h00000000
			this->SUBSYSTEM_ID = SUBSYSTEM_ID; // Default: 16'h0007
			this->SUBSYSTEM_VENDOR_ID = SUBSYSTEM_VENDOR_ID; // Default: 16'h10EE
			this->TL_RBYPASS = TL_RBYPASS; // Default: "FALSE"
			this->TL_RX_RAM_RADDR_LATENCY = TL_RX_RAM_RADDR_LATENCY; // Default: 0
			this->TL_RX_RAM_RDATA_LATENCY = TL_RX_RAM_RDATA_LATENCY; // Default: 2
			this->TL_RX_RAM_WRITE_LATENCY = TL_RX_RAM_WRITE_LATENCY; // Default: 0
			this->TL_TFC_DISABLE = TL_TFC_DISABLE; // Default: "FALSE"
			this->TL_TX_CHECKS_DISABLE = TL_TX_CHECKS_DISABLE; // Default: "FALSE"
			this->TL_TX_RAM_RADDR_LATENCY = TL_TX_RAM_RADDR_LATENCY; // Default: 0
			this->TL_TX_RAM_RDATA_LATENCY = TL_TX_RAM_RDATA_LATENCY; // Default: 2
			this->TL_TX_RAM_WRITE_LATENCY = TL_TX_RAM_WRITE_LATENCY; // Default: 0
			this->UPCONFIG_CAPABLE = UPCONFIG_CAPABLE; // Default: "TRUE"
			this->UPSTREAM_FACING = UPSTREAM_FACING; // Default: "TRUE"
			this->UR_INV_REQ = UR_INV_REQ; // Default: "TRUE"
			this->USER_CLK_FREQ = USER_CLK_FREQ; // Default: 3
			this->VC0_CPL_INFINITE = VC0_CPL_INFINITE; // Default: "TRUE"
			this->VC0_RX_RAM_LIMIT = VC0_RX_RAM_LIMIT; // Default: 13'h03FF
			this->VC0_TOTAL_CREDITS_CD = VC0_TOTAL_CREDITS_CD; // Default: 127
			this->VC0_TOTAL_CREDITS_CH = VC0_TOTAL_CREDITS_CH; // Default: 31
			this->VC0_TOTAL_CREDITS_NPH = VC0_TOTAL_CREDITS_NPH; // Default: 12
			this->VC0_TOTAL_CREDITS_PD = VC0_TOTAL_CREDITS_PD; // Default: 288
			this->VC0_TOTAL_CREDITS_PH = VC0_TOTAL_CREDITS_PH; // Default: 32
			this->VC0_TX_LASTPACKET = VC0_TX_LASTPACKET; // Default: 31
			this->VC_BASE_PTR = VC_BASE_PTR; // Default: 12'h10C
			this->VC_CAP_ID = VC_CAP_ID; // Default: 16'h0002
			this->VC_CAP_NEXTPTR = VC_CAP_NEXTPTR; // Default: 12'h000
			this->VC_CAP_ON = VC_CAP_ON; // Default: "FALSE"
			this->VC_CAP_REJECT_SNOOP_TRANSACTIONS = VC_CAP_REJECT_SNOOP_TRANSACTIONS; // Default: "FALSE"
			this->VC_CAP_VERSION = VC_CAP_VERSION; // Default: 4'h1
			this->VENDOR_ID = VENDOR_ID; // Default: 16'h10EE
			this->VSEC_BASE_PTR = VSEC_BASE_PTR; // Default: 12'h160
			this->VSEC_CAP_HDR_ID = VSEC_CAP_HDR_ID; // Default: 16'h1234
			this->VSEC_CAP_HDR_LENGTH = VSEC_CAP_HDR_LENGTH; // Default: 12'h018
			this->VSEC_CAP_HDR_REVISION = VSEC_CAP_HDR_REVISION; // Default: 4'h1
			this->VSEC_CAP_ID = VSEC_CAP_ID; // Default: 16'h000B
			this->VSEC_CAP_IS_LINK_VISIBLE = VSEC_CAP_IS_LINK_VISIBLE; // Default: "TRUE"
			this->VSEC_CAP_NEXTPTR = VSEC_CAP_NEXTPTR; // Default: 12'h000
			this->VSEC_CAP_ON = VSEC_CAP_ON; // Default: "FALSE"
			this->VSEC_CAP_VERSION = VSEC_CAP_VERSION; // Default: 4'h1
			//Verilog Ports in definition order:
			this->CFGAERECRCCHECKEN = CFGAERECRCCHECKEN; // OUTPUT
			this->CFGAERECRCGENEN = CFGAERECRCGENEN; // OUTPUT
			this->CFGCOMMANDBUSMASTERENABLE = CFGCOMMANDBUSMASTERENABLE; // OUTPUT
			this->CFGCOMMANDINTERRUPTDISABLE = CFGCOMMANDINTERRUPTDISABLE; // OUTPUT
			this->CFGCOMMANDIOENABLE = CFGCOMMANDIOENABLE; // OUTPUT
			this->CFGCOMMANDMEMENABLE = CFGCOMMANDMEMENABLE; // OUTPUT
			this->CFGCOMMANDSERREN = CFGCOMMANDSERREN; // OUTPUT
			this->CFGDEVCONTROL2CPLTIMEOUTDIS = CFGDEVCONTROL2CPLTIMEOUTDIS; // OUTPUT
			this->CFGDEVCONTROL2CPLTIMEOUTVAL = CFGDEVCONTROL2CPLTIMEOUTVAL; // OUTPUT
			this->CFGDEVCONTROLAUXPOWEREN = CFGDEVCONTROLAUXPOWEREN; // OUTPUT
			this->CFGDEVCONTROLCORRERRREPORTINGEN = CFGDEVCONTROLCORRERRREPORTINGEN; // OUTPUT
			this->CFGDEVCONTROLENABLERO = CFGDEVCONTROLENABLERO; // OUTPUT
			this->CFGDEVCONTROLEXTTAGEN = CFGDEVCONTROLEXTTAGEN; // OUTPUT
			this->CFGDEVCONTROLFATALERRREPORTINGEN = CFGDEVCONTROLFATALERRREPORTINGEN; // OUTPUT
			this->CFGDEVCONTROLMAXPAYLOAD = CFGDEVCONTROLMAXPAYLOAD; // OUTPUT
			this->CFGDEVCONTROLMAXREADREQ = CFGDEVCONTROLMAXREADREQ; // OUTPUT
			this->CFGDEVCONTROLNONFATALREPORTINGEN = CFGDEVCONTROLNONFATALREPORTINGEN; // OUTPUT
			this->CFGDEVCONTROLNOSNOOPEN = CFGDEVCONTROLNOSNOOPEN; // OUTPUT
			this->CFGDEVCONTROLPHANTOMEN = CFGDEVCONTROLPHANTOMEN; // OUTPUT
			this->CFGDEVCONTROLURERRREPORTINGEN = CFGDEVCONTROLURERRREPORTINGEN; // OUTPUT
			this->CFGDEVSTATUSCORRERRDETECTED = CFGDEVSTATUSCORRERRDETECTED; // OUTPUT
			this->CFGDEVSTATUSFATALERRDETECTED = CFGDEVSTATUSFATALERRDETECTED; // OUTPUT
			this->CFGDEVSTATUSNONFATALERRDETECTED = CFGDEVSTATUSNONFATALERRDETECTED; // OUTPUT
			this->CFGDEVSTATUSURDETECTED = CFGDEVSTATUSURDETECTED; // OUTPUT
			this->CFGDO = CFGDO; // OUTPUT
			this->CFGERRAERHEADERLOGSETN = CFGERRAERHEADERLOGSETN; // OUTPUT
			this->CFGERRCPLRDYN = CFGERRCPLRDYN; // OUTPUT
			this->CFGINTERRUPTDO = CFGINTERRUPTDO; // OUTPUT
			this->CFGINTERRUPTMMENABLE = CFGINTERRUPTMMENABLE; // OUTPUT
			this->CFGINTERRUPTMSIENABLE = CFGINTERRUPTMSIENABLE; // OUTPUT
			this->CFGINTERRUPTMSIXENABLE = CFGINTERRUPTMSIXENABLE; // OUTPUT
			this->CFGINTERRUPTMSIXFM = CFGINTERRUPTMSIXFM; // OUTPUT
			this->CFGINTERRUPTRDYN = CFGINTERRUPTRDYN; // OUTPUT
			this->CFGLINKCONTROLASPMCONTROL = CFGLINKCONTROLASPMCONTROL; // OUTPUT
			this->CFGLINKCONTROLAUTOBANDWIDTHINTEN = CFGLINKCONTROLAUTOBANDWIDTHINTEN; // OUTPUT
			this->CFGLINKCONTROLBANDWIDTHINTEN = CFGLINKCONTROLBANDWIDTHINTEN; // OUTPUT
			this->CFGLINKCONTROLCLOCKPMEN = CFGLINKCONTROLCLOCKPMEN; // OUTPUT
			this->CFGLINKCONTROLCOMMONCLOCK = CFGLINKCONTROLCOMMONCLOCK; // OUTPUT
			this->CFGLINKCONTROLEXTENDEDSYNC = CFGLINKCONTROLEXTENDEDSYNC; // OUTPUT
			this->CFGLINKCONTROLHWAUTOWIDTHDIS = CFGLINKCONTROLHWAUTOWIDTHDIS; // OUTPUT
			this->CFGLINKCONTROLLINKDISABLE = CFGLINKCONTROLLINKDISABLE; // OUTPUT
			this->CFGLINKCONTROLRCB = CFGLINKCONTROLRCB; // OUTPUT
			this->CFGLINKCONTROLRETRAINLINK = CFGLINKCONTROLRETRAINLINK; // OUTPUT
			this->CFGLINKSTATUSAUTOBANDWIDTHSTATUS = CFGLINKSTATUSAUTOBANDWIDTHSTATUS; // OUTPUT
			this->CFGLINKSTATUSBANDWITHSTATUS = CFGLINKSTATUSBANDWITHSTATUS; // OUTPUT
			this->CFGLINKSTATUSCURRENTSPEED = CFGLINKSTATUSCURRENTSPEED; // OUTPUT
			this->CFGLINKSTATUSDLLACTIVE = CFGLINKSTATUSDLLACTIVE; // OUTPUT
			this->CFGLINKSTATUSLINKTRAINING = CFGLINKSTATUSLINKTRAINING; // OUTPUT
			this->CFGLINKSTATUSNEGOTIATEDWIDTH = CFGLINKSTATUSNEGOTIATEDWIDTH; // OUTPUT
			this->CFGMSGDATA = CFGMSGDATA; // OUTPUT
			this->CFGMSGRECEIVED = CFGMSGRECEIVED; // OUTPUT
			this->CFGMSGRECEIVEDASSERTINTA = CFGMSGRECEIVEDASSERTINTA; // OUTPUT
			this->CFGMSGRECEIVEDASSERTINTB = CFGMSGRECEIVEDASSERTINTB; // OUTPUT
			this->CFGMSGRECEIVEDASSERTINTC = CFGMSGRECEIVEDASSERTINTC; // OUTPUT
			this->CFGMSGRECEIVEDASSERTINTD = CFGMSGRECEIVEDASSERTINTD; // OUTPUT
			this->CFGMSGRECEIVEDDEASSERTINTA = CFGMSGRECEIVEDDEASSERTINTA; // OUTPUT
			this->CFGMSGRECEIVEDDEASSERTINTB = CFGMSGRECEIVEDDEASSERTINTB; // OUTPUT
			this->CFGMSGRECEIVEDDEASSERTINTC = CFGMSGRECEIVEDDEASSERTINTC; // OUTPUT
			this->CFGMSGRECEIVEDDEASSERTINTD = CFGMSGRECEIVEDDEASSERTINTD; // OUTPUT
			this->CFGMSGRECEIVEDERRCOR = CFGMSGRECEIVEDERRCOR; // OUTPUT
			this->CFGMSGRECEIVEDERRFATAL = CFGMSGRECEIVEDERRFATAL; // OUTPUT
			this->CFGMSGRECEIVEDERRNONFATAL = CFGMSGRECEIVEDERRNONFATAL; // OUTPUT
			this->CFGMSGRECEIVEDPMASNAK = CFGMSGRECEIVEDPMASNAK; // OUTPUT
			this->CFGMSGRECEIVEDPMETO = CFGMSGRECEIVEDPMETO; // OUTPUT
			this->CFGMSGRECEIVEDPMETOACK = CFGMSGRECEIVEDPMETOACK; // OUTPUT
			this->CFGMSGRECEIVEDPMPME = CFGMSGRECEIVEDPMPME; // OUTPUT
			this->CFGMSGRECEIVEDSETSLOTPOWERLIMIT = CFGMSGRECEIVEDSETSLOTPOWERLIMIT; // OUTPUT
			this->CFGMSGRECEIVEDUNLOCK = CFGMSGRECEIVEDUNLOCK; // OUTPUT
			this->CFGPCIELINKSTATE = CFGPCIELINKSTATE; // OUTPUT
			this->CFGPMCSRPMEEN = CFGPMCSRPMEEN; // OUTPUT
			this->CFGPMCSRPMESTATUS = CFGPMCSRPMESTATUS; // OUTPUT
			this->CFGPMCSRPOWERSTATE = CFGPMCSRPOWERSTATE; // OUTPUT
			this->CFGPMRCVASREQL1N = CFGPMRCVASREQL1N; // OUTPUT
			this->CFGPMRCVENTERL1N = CFGPMRCVENTERL1N; // OUTPUT
			this->CFGPMRCVENTERL23N = CFGPMRCVENTERL23N; // OUTPUT
			this->CFGPMRCVREQACKN = CFGPMRCVREQACKN; // OUTPUT
			this->CFGRDWRDONEN = CFGRDWRDONEN; // OUTPUT
			this->CFGSLOTCONTROLELECTROMECHILCTLPULSE = CFGSLOTCONTROLELECTROMECHILCTLPULSE; // OUTPUT
			this->CFGTRANSACTION = CFGTRANSACTION; // OUTPUT
			this->CFGTRANSACTIONADDR = CFGTRANSACTIONADDR; // OUTPUT
			this->CFGTRANSACTIONTYPE = CFGTRANSACTIONTYPE; // OUTPUT
			this->CFGVCTCVCMAP = CFGVCTCVCMAP; // OUTPUT
			this->DBGSCLRA = DBGSCLRA; // OUTPUT
			this->DBGSCLRB = DBGSCLRB; // OUTPUT
			this->DBGSCLRC = DBGSCLRC; // OUTPUT
			this->DBGSCLRD = DBGSCLRD; // OUTPUT
			this->DBGSCLRE = DBGSCLRE; // OUTPUT
			this->DBGSCLRF = DBGSCLRF; // OUTPUT
			this->DBGSCLRG = DBGSCLRG; // OUTPUT
			this->DBGSCLRH = DBGSCLRH; // OUTPUT
			this->DBGSCLRI = DBGSCLRI; // OUTPUT
			this->DBGSCLRJ = DBGSCLRJ; // OUTPUT
			this->DBGSCLRK = DBGSCLRK; // OUTPUT
			this->DBGVECA = DBGVECA; // OUTPUT
			this->DBGVECB = DBGVECB; // OUTPUT
			this->DBGVECC = DBGVECC; // OUTPUT
			this->DRPDO = DRPDO; // OUTPUT
			this->DRPDRDY = DRPDRDY; // OUTPUT
			this->LL2BADDLLPERRN = LL2BADDLLPERRN; // OUTPUT
			this->LL2BADTLPERRN = LL2BADTLPERRN; // OUTPUT
			this->LL2PROTOCOLERRN = LL2PROTOCOLERRN; // OUTPUT
			this->LL2REPLAYROERRN = LL2REPLAYROERRN; // OUTPUT
			this->LL2REPLAYTOERRN = LL2REPLAYTOERRN; // OUTPUT
			this->LL2SUSPENDOKN = LL2SUSPENDOKN; // OUTPUT
			this->LL2TFCINIT1SEQN = LL2TFCINIT1SEQN; // OUTPUT
			this->LL2TFCINIT2SEQN = LL2TFCINIT2SEQN; // OUTPUT
			this->LNKCLKEN = LNKCLKEN; // OUTPUT
			this->MIMRXRADDR = MIMRXRADDR; // OUTPUT
			this->MIMRXRCE = MIMRXRCE; // OUTPUT
			this->MIMRXREN = MIMRXREN; // OUTPUT
			this->MIMRXWADDR = MIMRXWADDR; // OUTPUT
			this->MIMRXWDATA = MIMRXWDATA; // OUTPUT
			this->MIMRXWEN = MIMRXWEN; // OUTPUT
			this->MIMTXRADDR = MIMTXRADDR; // OUTPUT
			this->MIMTXRCE = MIMTXRCE; // OUTPUT
			this->MIMTXREN = MIMTXREN; // OUTPUT
			this->MIMTXWADDR = MIMTXWADDR; // OUTPUT
			this->MIMTXWDATA = MIMTXWDATA; // OUTPUT
			this->MIMTXWEN = MIMTXWEN; // OUTPUT
			this->PIPERX0POLARITY = PIPERX0POLARITY; // OUTPUT
			this->PIPERX1POLARITY = PIPERX1POLARITY; // OUTPUT
			this->PIPERX2POLARITY = PIPERX2POLARITY; // OUTPUT
			this->PIPERX3POLARITY = PIPERX3POLARITY; // OUTPUT
			this->PIPERX4POLARITY = PIPERX4POLARITY; // OUTPUT
			this->PIPERX5POLARITY = PIPERX5POLARITY; // OUTPUT
			this->PIPERX6POLARITY = PIPERX6POLARITY; // OUTPUT
			this->PIPERX7POLARITY = PIPERX7POLARITY; // OUTPUT
			this->PIPETX0CHARISK = PIPETX0CHARISK; // OUTPUT
			this->PIPETX0COMPLIANCE = PIPETX0COMPLIANCE; // OUTPUT
			this->PIPETX0DATA = PIPETX0DATA; // OUTPUT
			this->PIPETX0ELECIDLE = PIPETX0ELECIDLE; // OUTPUT
			this->PIPETX0POWERDOWN = PIPETX0POWERDOWN; // OUTPUT
			this->PIPETX1CHARISK = PIPETX1CHARISK; // OUTPUT
			this->PIPETX1COMPLIANCE = PIPETX1COMPLIANCE; // OUTPUT
			this->PIPETX1DATA = PIPETX1DATA; // OUTPUT
			this->PIPETX1ELECIDLE = PIPETX1ELECIDLE; // OUTPUT
			this->PIPETX1POWERDOWN = PIPETX1POWERDOWN; // OUTPUT
			this->PIPETX2CHARISK = PIPETX2CHARISK; // OUTPUT
			this->PIPETX2COMPLIANCE = PIPETX2COMPLIANCE; // OUTPUT
			this->PIPETX2DATA = PIPETX2DATA; // OUTPUT
			this->PIPETX2ELECIDLE = PIPETX2ELECIDLE; // OUTPUT
			this->PIPETX2POWERDOWN = PIPETX2POWERDOWN; // OUTPUT
			this->PIPETX3CHARISK = PIPETX3CHARISK; // OUTPUT
			this->PIPETX3COMPLIANCE = PIPETX3COMPLIANCE; // OUTPUT
			this->PIPETX3DATA = PIPETX3DATA; // OUTPUT
			this->PIPETX3ELECIDLE = PIPETX3ELECIDLE; // OUTPUT
			this->PIPETX3POWERDOWN = PIPETX3POWERDOWN; // OUTPUT
			this->PIPETX4CHARISK = PIPETX4CHARISK; // OUTPUT
			this->PIPETX4COMPLIANCE = PIPETX4COMPLIANCE; // OUTPUT
			this->PIPETX4DATA = PIPETX4DATA; // OUTPUT
			this->PIPETX4ELECIDLE = PIPETX4ELECIDLE; // OUTPUT
			this->PIPETX4POWERDOWN = PIPETX4POWERDOWN; // OUTPUT
			this->PIPETX5CHARISK = PIPETX5CHARISK; // OUTPUT
			this->PIPETX5COMPLIANCE = PIPETX5COMPLIANCE; // OUTPUT
			this->PIPETX5DATA = PIPETX5DATA; // OUTPUT
			this->PIPETX5ELECIDLE = PIPETX5ELECIDLE; // OUTPUT
			this->PIPETX5POWERDOWN = PIPETX5POWERDOWN; // OUTPUT
			this->PIPETX6CHARISK = PIPETX6CHARISK; // OUTPUT
			this->PIPETX6COMPLIANCE = PIPETX6COMPLIANCE; // OUTPUT
			this->PIPETX6DATA = PIPETX6DATA; // OUTPUT
			this->PIPETX6ELECIDLE = PIPETX6ELECIDLE; // OUTPUT
			this->PIPETX6POWERDOWN = PIPETX6POWERDOWN; // OUTPUT
			this->PIPETX7CHARISK = PIPETX7CHARISK; // OUTPUT
			this->PIPETX7COMPLIANCE = PIPETX7COMPLIANCE; // OUTPUT
			this->PIPETX7DATA = PIPETX7DATA; // OUTPUT
			this->PIPETX7ELECIDLE = PIPETX7ELECIDLE; // OUTPUT
			this->PIPETX7POWERDOWN = PIPETX7POWERDOWN; // OUTPUT
			this->PIPETXDEEMPH = PIPETXDEEMPH; // OUTPUT
			this->PIPETXMARGIN = PIPETXMARGIN; // OUTPUT
			this->PIPETXRATE = PIPETXRATE; // OUTPUT
			this->PIPETXRCVRDET = PIPETXRCVRDET; // OUTPUT
			this->PIPETXRESET = PIPETXRESET; // OUTPUT
			this->PL2LINKUPN = PL2LINKUPN; // OUTPUT
			this->PL2RECEIVERERRN = PL2RECEIVERERRN; // OUTPUT
			this->PL2RECOVERYN = PL2RECOVERYN; // OUTPUT
			this->PL2RXELECIDLE = PL2RXELECIDLE; // OUTPUT
			this->PL2SUSPENDOK = PL2SUSPENDOK; // OUTPUT
			this->PLDBGVEC = PLDBGVEC; // OUTPUT
			this->PLINITIALLINKWIDTH = PLINITIALLINKWIDTH; // OUTPUT
			this->PLLANEREVERSALMODE = PLLANEREVERSALMODE; // OUTPUT
			this->PLLINKGEN2CAP = PLLINKGEN2CAP; // OUTPUT
			this->PLLINKPARTNERGEN2SUPPORTED = PLLINKPARTNERGEN2SUPPORTED; // OUTPUT
			this->PLLINKUPCFGCAP = PLLINKUPCFGCAP; // OUTPUT
			this->PLLTSSMSTATE = PLLTSSMSTATE; // OUTPUT
			this->PLPHYLNKUPN = PLPHYLNKUPN; // OUTPUT
			this->PLRECEIVEDHOTRST = PLRECEIVEDHOTRST; // OUTPUT
			this->PLRXPMSTATE = PLRXPMSTATE; // OUTPUT
			this->PLSELLNKRATE = PLSELLNKRATE; // OUTPUT
			this->PLSELLNKWIDTH = PLSELLNKWIDTH; // OUTPUT
			this->PLTXPMSTATE = PLTXPMSTATE; // OUTPUT
			this->RECEIVEDFUNCLVLRSTN = RECEIVEDFUNCLVLRSTN; // OUTPUT
			this->TL2ASPMSUSPENDCREDITCHECKOKN = TL2ASPMSUSPENDCREDITCHECKOKN; // OUTPUT
			this->TL2ASPMSUSPENDREQN = TL2ASPMSUSPENDREQN; // OUTPUT
			this->TL2PPMSUSPENDOKN = TL2PPMSUSPENDOKN; // OUTPUT
			this->TRNFCCPLD = TRNFCCPLD; // OUTPUT
			this->TRNFCCPLH = TRNFCCPLH; // OUTPUT
			this->TRNFCNPD = TRNFCNPD; // OUTPUT
			this->TRNFCNPH = TRNFCNPH; // OUTPUT
			this->TRNFCPD = TRNFCPD; // OUTPUT
			this->TRNFCPH = TRNFCPH; // OUTPUT
			this->TRNLNKUPN = TRNLNKUPN; // OUTPUT
			this->TRNRBARHITN = TRNRBARHITN; // OUTPUT
			this->TRNRD = TRNRD; // OUTPUT
			this->TRNRDLLPDATA = TRNRDLLPDATA; // OUTPUT
			this->TRNRDLLPSRCRDYN = TRNRDLLPSRCRDYN; // OUTPUT
			this->TRNRECRCERRN = TRNRECRCERRN; // OUTPUT
			this->TRNREOFN = TRNREOFN; // OUTPUT
			this->TRNRERRFWDN = TRNRERRFWDN; // OUTPUT
			this->TRNRREMN = TRNRREMN; // OUTPUT
			this->TRNRSOFN = TRNRSOFN; // OUTPUT
			this->TRNRSRCDSCN = TRNRSRCDSCN; // OUTPUT
			this->TRNRSRCRDYN = TRNRSRCRDYN; // OUTPUT
			this->TRNTBUFAV = TRNTBUFAV; // OUTPUT
			this->TRNTCFGREQN = TRNTCFGREQN; // OUTPUT
			this->TRNTDLLPDSTRDYN = TRNTDLLPDSTRDYN; // OUTPUT
			this->TRNTDSTRDYN = TRNTDSTRDYN; // OUTPUT
			this->TRNTERRDROPN = TRNTERRDROPN; // OUTPUT
			this->USERRSTN = USERRSTN; // OUTPUT
			this->CFGBYTEENN = CFGBYTEENN; // INPUT
			this->CFGDI = CFGDI; // INPUT
			this->CFGDSBUSNUMBER = CFGDSBUSNUMBER; // INPUT
			this->CFGDSDEVICENUMBER = CFGDSDEVICENUMBER; // INPUT
			this->CFGDSFUNCTIONNUMBER = CFGDSFUNCTIONNUMBER; // INPUT
			this->CFGDSN = CFGDSN; // INPUT
			this->CFGDWADDR = CFGDWADDR; // INPUT
			this->CFGERRACSN = CFGERRACSN; // INPUT
			this->CFGERRAERHEADERLOG = CFGERRAERHEADERLOG; // INPUT
			this->CFGERRCORN = CFGERRCORN; // INPUT
			this->CFGERRCPLABORTN = CFGERRCPLABORTN; // INPUT
			this->CFGERRCPLTIMEOUTN = CFGERRCPLTIMEOUTN; // INPUT
			this->CFGERRCPLUNEXPECTN = CFGERRCPLUNEXPECTN; // INPUT
			this->CFGERRECRCN = CFGERRECRCN; // INPUT
			this->CFGERRLOCKEDN = CFGERRLOCKEDN; // INPUT
			this->CFGERRPOSTEDN = CFGERRPOSTEDN; // INPUT
			this->CFGERRTLPCPLHEADER = CFGERRTLPCPLHEADER; // INPUT
			this->CFGERRURN = CFGERRURN; // INPUT
			this->CFGINTERRUPTASSERTN = CFGINTERRUPTASSERTN; // INPUT
			this->CFGINTERRUPTDI = CFGINTERRUPTDI; // INPUT
			this->CFGINTERRUPTN = CFGINTERRUPTN; // INPUT
			this->CFGPMDIRECTASPML1N = CFGPMDIRECTASPML1N; // INPUT
			this->CFGPMSENDPMACKN = CFGPMSENDPMACKN; // INPUT
			this->CFGPMSENDPMETON = CFGPMSENDPMETON; // INPUT
			this->CFGPMSENDPMNAKN = CFGPMSENDPMNAKN; // INPUT
			this->CFGPMTURNOFFOKN = CFGPMTURNOFFOKN; // INPUT
			this->CFGPMWAKEN = CFGPMWAKEN; // INPUT
			this->CFGPORTNUMBER = CFGPORTNUMBER; // INPUT
			this->CFGRDENN = CFGRDENN; // INPUT
			this->CFGTRNPENDINGN = CFGTRNPENDINGN; // INPUT
			this->CFGWRENN = CFGWRENN; // INPUT
			this->CFGWRREADONLYN = CFGWRREADONLYN; // INPUT
			this->CFGWRRW1CASRWN = CFGWRRW1CASRWN; // INPUT
			this->CMRSTN = CMRSTN; // INPUT
			this->CMSTICKYRSTN = CMSTICKYRSTN; // INPUT
			this->DBGMODE = DBGMODE; // INPUT
			this->DBGSUBMODE = DBGSUBMODE; // INPUT
			this->DLRSTN = DLRSTN; // INPUT
			this->DRPCLK = DRPCLK; // INPUT
			this->DRPDADDR = DRPDADDR; // INPUT
			this->DRPDEN = DRPDEN; // INPUT
			this->DRPDI = DRPDI; // INPUT
			this->DRPDWE = DRPDWE; // INPUT
			this->FUNCLVLRSTN = FUNCLVLRSTN; // INPUT
			this->LL2SENDASREQL1N = LL2SENDASREQL1N; // INPUT
			this->LL2SENDENTERL1N = LL2SENDENTERL1N; // INPUT
			this->LL2SENDENTERL23N = LL2SENDENTERL23N; // INPUT
			this->LL2SUSPENDNOWN = LL2SUSPENDNOWN; // INPUT
			this->LL2TLPRCVN = LL2TLPRCVN; // INPUT
			this->MIMRXRDATA = MIMRXRDATA; // INPUT
			this->MIMTXRDATA = MIMTXRDATA; // INPUT
			this->PIPECLK = PIPECLK; // INPUT
			this->PIPERX0CHANISALIGNED = PIPERX0CHANISALIGNED; // INPUT
			this->PIPERX0CHARISK = PIPERX0CHARISK; // INPUT
			this->PIPERX0DATA = PIPERX0DATA; // INPUT
			this->PIPERX0ELECIDLE = PIPERX0ELECIDLE; // INPUT
			this->PIPERX0PHYSTATUS = PIPERX0PHYSTATUS; // INPUT
			this->PIPERX0STATUS = PIPERX0STATUS; // INPUT
			this->PIPERX0VALID = PIPERX0VALID; // INPUT
			this->PIPERX1CHANISALIGNED = PIPERX1CHANISALIGNED; // INPUT
			this->PIPERX1CHARISK = PIPERX1CHARISK; // INPUT
			this->PIPERX1DATA = PIPERX1DATA; // INPUT
			this->PIPERX1ELECIDLE = PIPERX1ELECIDLE; // INPUT
			this->PIPERX1PHYSTATUS = PIPERX1PHYSTATUS; // INPUT
			this->PIPERX1STATUS = PIPERX1STATUS; // INPUT
			this->PIPERX1VALID = PIPERX1VALID; // INPUT
			this->PIPERX2CHANISALIGNED = PIPERX2CHANISALIGNED; // INPUT
			this->PIPERX2CHARISK = PIPERX2CHARISK; // INPUT
			this->PIPERX2DATA = PIPERX2DATA; // INPUT
			this->PIPERX2ELECIDLE = PIPERX2ELECIDLE; // INPUT
			this->PIPERX2PHYSTATUS = PIPERX2PHYSTATUS; // INPUT
			this->PIPERX2STATUS = PIPERX2STATUS; // INPUT
			this->PIPERX2VALID = PIPERX2VALID; // INPUT
			this->PIPERX3CHANISALIGNED = PIPERX3CHANISALIGNED; // INPUT
			this->PIPERX3CHARISK = PIPERX3CHARISK; // INPUT
			this->PIPERX3DATA = PIPERX3DATA; // INPUT
			this->PIPERX3ELECIDLE = PIPERX3ELECIDLE; // INPUT
			this->PIPERX3PHYSTATUS = PIPERX3PHYSTATUS; // INPUT
			this->PIPERX3STATUS = PIPERX3STATUS; // INPUT
			this->PIPERX3VALID = PIPERX3VALID; // INPUT
			this->PIPERX4CHANISALIGNED = PIPERX4CHANISALIGNED; // INPUT
			this->PIPERX4CHARISK = PIPERX4CHARISK; // INPUT
			this->PIPERX4DATA = PIPERX4DATA; // INPUT
			this->PIPERX4ELECIDLE = PIPERX4ELECIDLE; // INPUT
			this->PIPERX4PHYSTATUS = PIPERX4PHYSTATUS; // INPUT
			this->PIPERX4STATUS = PIPERX4STATUS; // INPUT
			this->PIPERX4VALID = PIPERX4VALID; // INPUT
			this->PIPERX5CHANISALIGNED = PIPERX5CHANISALIGNED; // INPUT
			this->PIPERX5CHARISK = PIPERX5CHARISK; // INPUT
			this->PIPERX5DATA = PIPERX5DATA; // INPUT
			this->PIPERX5ELECIDLE = PIPERX5ELECIDLE; // INPUT
			this->PIPERX5PHYSTATUS = PIPERX5PHYSTATUS; // INPUT
			this->PIPERX5STATUS = PIPERX5STATUS; // INPUT
			this->PIPERX5VALID = PIPERX5VALID; // INPUT
			this->PIPERX6CHANISALIGNED = PIPERX6CHANISALIGNED; // INPUT
			this->PIPERX6CHARISK = PIPERX6CHARISK; // INPUT
			this->PIPERX6DATA = PIPERX6DATA; // INPUT
			this->PIPERX6ELECIDLE = PIPERX6ELECIDLE; // INPUT
			this->PIPERX6PHYSTATUS = PIPERX6PHYSTATUS; // INPUT
			this->PIPERX6STATUS = PIPERX6STATUS; // INPUT
			this->PIPERX6VALID = PIPERX6VALID; // INPUT
			this->PIPERX7CHANISALIGNED = PIPERX7CHANISALIGNED; // INPUT
			this->PIPERX7CHARISK = PIPERX7CHARISK; // INPUT
			this->PIPERX7DATA = PIPERX7DATA; // INPUT
			this->PIPERX7ELECIDLE = PIPERX7ELECIDLE; // INPUT
			this->PIPERX7PHYSTATUS = PIPERX7PHYSTATUS; // INPUT
			this->PIPERX7STATUS = PIPERX7STATUS; // INPUT
			this->PIPERX7VALID = PIPERX7VALID; // INPUT
			this->PL2DIRECTEDLSTATE = PL2DIRECTEDLSTATE; // INPUT
			this->PLDBGMODE = PLDBGMODE; // INPUT
			this->PLDIRECTEDLINKAUTON = PLDIRECTEDLINKAUTON; // INPUT
			this->PLDIRECTEDLINKCHANGE = PLDIRECTEDLINKCHANGE; // INPUT
			this->PLDIRECTEDLINKSPEED = PLDIRECTEDLINKSPEED; // INPUT
			this->PLDIRECTEDLINKWIDTH = PLDIRECTEDLINKWIDTH; // INPUT
			this->PLDOWNSTREAMDEEMPHSOURCE = PLDOWNSTREAMDEEMPHSOURCE; // INPUT
			this->PLRSTN = PLRSTN; // INPUT
			this->PLTRANSMITHOTRST = PLTRANSMITHOTRST; // INPUT
			this->PLUPSTREAMPREFERDEEMPH = PLUPSTREAMPREFERDEEMPH; // INPUT
			this->SYSRSTN = SYSRSTN; // INPUT
			this->TL2ASPMSUSPENDCREDITCHECKN = TL2ASPMSUSPENDCREDITCHECKN; // INPUT
			this->TL2PPMSUSPENDREQN = TL2PPMSUSPENDREQN; // INPUT
			this->TLRSTN = TLRSTN; // INPUT
			this->TRNFCSEL = TRNFCSEL; // INPUT
			this->TRNRDSTRDYN = TRNRDSTRDYN; // INPUT
			this->TRNRNPOKN = TRNRNPOKN; // INPUT
			this->TRNTCFGGNTN = TRNTCFGGNTN; // INPUT
			this->TRNTD = TRNTD; // INPUT
			this->TRNTDLLPDATA = TRNTDLLPDATA; // INPUT
			this->TRNTDLLPSRCRDYN = TRNTDLLPSRCRDYN; // INPUT
			this->TRNTECRCGENN = TRNTECRCGENN; // INPUT
			this->TRNTEOFN = TRNTEOFN; // INPUT
			this->TRNTERRFWDN = TRNTERRFWDN; // INPUT
			this->TRNTREMN = TRNTREMN; // INPUT
			this->TRNTSOFN = TRNTSOFN; // INPUT
			this->TRNTSRCDSCN = TRNTSRCDSCN; // INPUT
			this->TRNTSRCRDYN = TRNTSRCRDYN; // INPUT
			this->TRNTSTRN = TRNTSTRN; // INPUT
			this->USERCLK = USERCLK; // INPUT
		
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