/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_PCIE_3_0: public Primitive{

		//Verilog Parameters:
		parameter_string_t LOC;
		parameter_enum_t ARI_CAP_ENABLE;
		parameter_enum_t AXISTEN_IF_CC_ALIGNMENT_MODE;
		parameter_enum_t AXISTEN_IF_CC_PARITY_CHK;
		parameter_enum_t AXISTEN_IF_CQ_ALIGNMENT_MODE;
		parameter_enum_t AXISTEN_IF_ENABLE_CLIENT_TAG;
		parameter_string_t AXISTEN_IF_ENABLE_MSG_ROUTE;
		parameter_enum_t AXISTEN_IF_ENABLE_RX_MSG_INTFC;
		parameter_enum_t AXISTEN_IF_RC_ALIGNMENT_MODE;
		parameter_enum_t AXISTEN_IF_RC_STRADDLE;
		parameter_enum_t AXISTEN_IF_RQ_ALIGNMENT_MODE;
		parameter_enum_t AXISTEN_IF_RQ_PARITY_CHK;
		parameter_string_t AXISTEN_IF_WIDTH;
		parameter_enum_t CRM_CORE_CLK_FREQ_500;
		parameter_string_t CRM_USER_CLK_FREQ;
		parameter_string_t DNSTREAM_LINK_NUM;
		parameter_string_t GEN3_PCS_AUTO_REALIGN;
		parameter_enum_t GEN3_PCS_RX_ELECIDLE_INTERNAL;
		parameter_string_t LL_ACK_TIMEOUT;
		parameter_enum_t LL_ACK_TIMEOUT_EN;
		parameter_string_t LL_ACK_TIMEOUT_FUNC;
		parameter_string_t LL_CPL_FC_UPDATE_TIMER;
		parameter_enum_t LL_CPL_FC_UPDATE_TIMER_OVERRIDE;
		parameter_string_t LL_FC_UPDATE_TIMER;
		parameter_enum_t LL_FC_UPDATE_TIMER_OVERRIDE;
		parameter_string_t LL_NP_FC_UPDATE_TIMER;
		parameter_enum_t LL_NP_FC_UPDATE_TIMER_OVERRIDE;
		parameter_string_t LL_P_FC_UPDATE_TIMER;
		parameter_enum_t LL_P_FC_UPDATE_TIMER_OVERRIDE;
		parameter_string_t LL_REPLAY_TIMEOUT;
		parameter_enum_t LL_REPLAY_TIMEOUT_EN;
		parameter_string_t LL_REPLAY_TIMEOUT_FUNC;
		parameter_string_t LTR_TX_MESSAGE_MINIMUM_INTERVAL;
		parameter_enum_t LTR_TX_MESSAGE_ON_FUNC_POWER_STATE_CHANGE;
		parameter_enum_t LTR_TX_MESSAGE_ON_LTR_ENABLE;
		parameter_enum_t PF0_AER_CAP_ECRC_CHECK_CAPABLE;
		parameter_enum_t PF0_AER_CAP_ECRC_GEN_CAPABLE;
		parameter_string_t PF0_AER_CAP_NEXTPTR;
		parameter_string_t PF0_ARI_CAP_NEXTPTR;
		parameter_string_t PF0_ARI_CAP_NEXT_FUNC;
		parameter_string_t PF0_ARI_CAP_VER;
		parameter_string_t PF0_BAR0_APERTURE_SIZE;
		parameter_string_t PF0_BAR0_CONTROL;
		parameter_string_t PF0_BAR1_APERTURE_SIZE;
		parameter_string_t PF0_BAR1_CONTROL;
		parameter_string_t PF0_BAR2_APERTURE_SIZE;
		parameter_string_t PF0_BAR2_CONTROL;
		parameter_string_t PF0_BAR3_APERTURE_SIZE;
		parameter_string_t PF0_BAR3_CONTROL;
		parameter_string_t PF0_BAR4_APERTURE_SIZE;
		parameter_string_t PF0_BAR4_CONTROL;
		parameter_string_t PF0_BAR5_APERTURE_SIZE;
		parameter_string_t PF0_BAR5_CONTROL;
		parameter_string_t PF0_BIST_REGISTER;
		parameter_string_t PF0_CAPABILITY_POINTER;
		parameter_string_t PF0_CLASS_CODE;
		parameter_string_t PF0_DEVICE_ID;
		parameter_enum_t PF0_DEV_CAP2_128B_CAS_ATOMIC_COMPLETER_SUPPORT;
		parameter_enum_t PF0_DEV_CAP2_32B_ATOMIC_COMPLETER_SUPPORT;
		parameter_enum_t PF0_DEV_CAP2_64B_ATOMIC_COMPLETER_SUPPORT;
		parameter_enum_t PF0_DEV_CAP2_CPL_TIMEOUT_DISABLE;
		parameter_enum_t PF0_DEV_CAP2_LTR_SUPPORT;
		parameter_string_t PF0_DEV_CAP2_OBFF_SUPPORT;
		parameter_enum_t PF0_DEV_CAP2_TPH_COMPLETER_SUPPORT;
		parameter_string_t PF0_DEV_CAP_ENDPOINT_L0S_LATENCY;
		parameter_string_t PF0_DEV_CAP_ENDPOINT_L1_LATENCY;
		parameter_enum_t PF0_DEV_CAP_EXT_TAG_SUPPORTED;
		parameter_enum_t PF0_DEV_CAP_FUNCTION_LEVEL_RESET_CAPABLE;
		parameter_string_t PF0_DEV_CAP_MAX_PAYLOAD_SIZE;
		parameter_string_t PF0_DPA_CAP_NEXTPTR;
		parameter_string_t PF0_DPA_CAP_SUB_STATE_CONTROL;
		parameter_enum_t PF0_DPA_CAP_SUB_STATE_CONTROL_EN;
		parameter_string_t PF0_DPA_CAP_SUB_STATE_POWER_ALLOCATION0;
		parameter_string_t PF0_DPA_CAP_SUB_STATE_POWER_ALLOCATION1;
		parameter_string_t PF0_DPA_CAP_SUB_STATE_POWER_ALLOCATION2;
		parameter_string_t PF0_DPA_CAP_SUB_STATE_POWER_ALLOCATION3;
		parameter_string_t PF0_DPA_CAP_SUB_STATE_POWER_ALLOCATION4;
		parameter_string_t PF0_DPA_CAP_SUB_STATE_POWER_ALLOCATION5;
		parameter_string_t PF0_DPA_CAP_SUB_STATE_POWER_ALLOCATION6;
		parameter_string_t PF0_DPA_CAP_SUB_STATE_POWER_ALLOCATION7;
		parameter_string_t PF0_DPA_CAP_VER;
		parameter_string_t PF0_DSN_CAP_NEXTPTR;
		parameter_string_t PF0_EXPANSION_ROM_APERTURE_SIZE;
		parameter_enum_t PF0_EXPANSION_ROM_ENABLE;
		parameter_string_t PF0_INTERRUPT_LINE;
		parameter_string_t PF0_INTERRUPT_PIN;
		parameter_string_t PF0_LINK_CAP_ASPM_SUPPORT;
		parameter_string_t PF0_LINK_CAP_L0S_EXIT_LATENCY_COMCLK_GEN1;
		parameter_string_t PF0_LINK_CAP_L0S_EXIT_LATENCY_COMCLK_GEN2;
		parameter_string_t PF0_LINK_CAP_L0S_EXIT_LATENCY_COMCLK_GEN3;
		parameter_string_t PF0_LINK_CAP_L0S_EXIT_LATENCY_GEN1;
		parameter_string_t PF0_LINK_CAP_L0S_EXIT_LATENCY_GEN2;
		parameter_string_t PF0_LINK_CAP_L0S_EXIT_LATENCY_GEN3;
		parameter_string_t PF0_LINK_CAP_L1_EXIT_LATENCY_COMCLK_GEN1;
		parameter_string_t PF0_LINK_CAP_L1_EXIT_LATENCY_COMCLK_GEN2;
		parameter_string_t PF0_LINK_CAP_L1_EXIT_LATENCY_COMCLK_GEN3;
		parameter_string_t PF0_LINK_CAP_L1_EXIT_LATENCY_GEN1;
		parameter_string_t PF0_LINK_CAP_L1_EXIT_LATENCY_GEN2;
		parameter_string_t PF0_LINK_CAP_L1_EXIT_LATENCY_GEN3;
		parameter_enum_t PF0_LINK_STATUS_SLOT_CLOCK_CONFIG;
		parameter_string_t PF0_LTR_CAP_MAX_NOSNOOP_LAT;
		parameter_string_t PF0_LTR_CAP_MAX_SNOOP_LAT;
		parameter_string_t PF0_LTR_CAP_NEXTPTR;
		parameter_string_t PF0_LTR_CAP_VER;
		parameter_string_t PF0_MSIX_CAP_NEXTPTR;
		parameter_string_t PF0_MSIX_CAP_PBA_BIR;
		parameter_string_t PF0_MSIX_CAP_PBA_OFFSET;
		parameter_string_t PF0_MSIX_CAP_TABLE_BIR;
		parameter_string_t PF0_MSIX_CAP_TABLE_OFFSET;
		parameter_string_t PF0_MSIX_CAP_TABLE_SIZE;
		parameter_string_t PF0_MSI_CAP_MULTIMSGCAP;
		parameter_string_t PF0_MSI_CAP_NEXTPTR;
		parameter_string_t PF0_PB_CAP_NEXTPTR;
		parameter_enum_t PF0_PB_CAP_SYSTEM_ALLOCATED;
		parameter_string_t PF0_PB_CAP_VER;
		parameter_string_t PF0_PM_CAP_ID;
		parameter_string_t PF0_PM_CAP_NEXTPTR;
		parameter_enum_t PF0_PM_CAP_PMESUPPORT_D0;
		parameter_enum_t PF0_PM_CAP_PMESUPPORT_D1;
		parameter_enum_t PF0_PM_CAP_PMESUPPORT_D3HOT;
		parameter_enum_t PF0_PM_CAP_SUPP_D1_STATE;
		parameter_string_t PF0_PM_CAP_VER_ID;
		parameter_enum_t PF0_PM_CSR_NOSOFTRESET;
		parameter_enum_t PF0_RBAR_CAP_ENABLE;
		parameter_string_t PF0_RBAR_CAP_INDEX0;
		parameter_string_t PF0_RBAR_CAP_INDEX1;
		parameter_string_t PF0_RBAR_CAP_INDEX2;
		parameter_string_t PF0_RBAR_CAP_NEXTPTR;
		parameter_string_t PF0_RBAR_CAP_SIZE0;
		parameter_string_t PF0_RBAR_CAP_SIZE1;
		parameter_string_t PF0_RBAR_CAP_SIZE2;
		parameter_string_t PF0_RBAR_CAP_VER;
		parameter_string_t PF0_RBAR_NUM;
		parameter_string_t PF0_REVISION_ID;
		parameter_string_t PF0_SRIOV_BAR0_APERTURE_SIZE;
		parameter_string_t PF0_SRIOV_BAR0_CONTROL;
		parameter_string_t PF0_SRIOV_BAR1_APERTURE_SIZE;
		parameter_string_t PF0_SRIOV_BAR1_CONTROL;
		parameter_string_t PF0_SRIOV_BAR2_APERTURE_SIZE;
		parameter_string_t PF0_SRIOV_BAR2_CONTROL;
		parameter_string_t PF0_SRIOV_BAR3_APERTURE_SIZE;
		parameter_string_t PF0_SRIOV_BAR3_CONTROL;
		parameter_string_t PF0_SRIOV_BAR4_APERTURE_SIZE;
		parameter_string_t PF0_SRIOV_BAR4_CONTROL;
		parameter_string_t PF0_SRIOV_BAR5_APERTURE_SIZE;
		parameter_string_t PF0_SRIOV_BAR5_CONTROL;
		parameter_string_t PF0_SRIOV_CAP_INITIAL_VF;
		parameter_string_t PF0_SRIOV_CAP_NEXTPTR;
		parameter_string_t PF0_SRIOV_CAP_TOTAL_VF;
		parameter_string_t PF0_SRIOV_CAP_VER;
		parameter_string_t PF0_SRIOV_FIRST_VF_OFFSET;
		parameter_string_t PF0_SRIOV_FUNC_DEP_LINK;
		parameter_string_t PF0_SRIOV_SUPPORTED_PAGE_SIZE;
		parameter_string_t PF0_SRIOV_VF_DEVICE_ID;
		parameter_string_t PF0_SUBSYSTEM_ID;
		parameter_enum_t PF0_TPHR_CAP_DEV_SPECIFIC_MODE;
		parameter_enum_t PF0_TPHR_CAP_ENABLE;
		parameter_enum_t PF0_TPHR_CAP_INT_VEC_MODE;
		parameter_string_t PF0_TPHR_CAP_NEXTPTR;
		parameter_string_t PF0_TPHR_CAP_ST_MODE_SEL;
		parameter_string_t PF0_TPHR_CAP_ST_TABLE_LOC;
		parameter_string_t PF0_TPHR_CAP_ST_TABLE_SIZE;
		parameter_string_t PF0_TPHR_CAP_VER;
		parameter_string_t PF0_VC_CAP_NEXTPTR;
		parameter_string_t PF0_VC_CAP_VER;
		parameter_enum_t PF1_AER_CAP_ECRC_CHECK_CAPABLE;
		parameter_enum_t PF1_AER_CAP_ECRC_GEN_CAPABLE;
		parameter_string_t PF1_AER_CAP_NEXTPTR;
		parameter_string_t PF1_ARI_CAP_NEXTPTR;
		parameter_string_t PF1_ARI_CAP_NEXT_FUNC;
		parameter_string_t PF1_BAR0_APERTURE_SIZE;
		parameter_string_t PF1_BAR0_CONTROL;
		parameter_string_t PF1_BAR1_APERTURE_SIZE;
		parameter_string_t PF1_BAR1_CONTROL;
		parameter_string_t PF1_BAR2_APERTURE_SIZE;
		parameter_string_t PF1_BAR2_CONTROL;
		parameter_string_t PF1_BAR3_APERTURE_SIZE;
		parameter_string_t PF1_BAR3_CONTROL;
		parameter_string_t PF1_BAR4_APERTURE_SIZE;
		parameter_string_t PF1_BAR4_CONTROL;
		parameter_string_t PF1_BAR5_APERTURE_SIZE;
		parameter_string_t PF1_BAR5_CONTROL;
		parameter_string_t PF1_BIST_REGISTER;
		parameter_string_t PF1_CAPABILITY_POINTER;
		parameter_string_t PF1_CLASS_CODE;
		parameter_string_t PF1_DEVICE_ID;
		parameter_string_t PF1_DEV_CAP_MAX_PAYLOAD_SIZE;
		parameter_string_t PF1_DPA_CAP_NEXTPTR;
		parameter_string_t PF1_DPA_CAP_SUB_STATE_CONTROL;
		parameter_enum_t PF1_DPA_CAP_SUB_STATE_CONTROL_EN;
		parameter_string_t PF1_DPA_CAP_SUB_STATE_POWER_ALLOCATION0;
		parameter_string_t PF1_DPA_CAP_SUB_STATE_POWER_ALLOCATION1;
		parameter_string_t PF1_DPA_CAP_SUB_STATE_POWER_ALLOCATION2;
		parameter_string_t PF1_DPA_CAP_SUB_STATE_POWER_ALLOCATION3;
		parameter_string_t PF1_DPA_CAP_SUB_STATE_POWER_ALLOCATION4;
		parameter_string_t PF1_DPA_CAP_SUB_STATE_POWER_ALLOCATION5;
		parameter_string_t PF1_DPA_CAP_SUB_STATE_POWER_ALLOCATION6;
		parameter_string_t PF1_DPA_CAP_SUB_STATE_POWER_ALLOCATION7;
		parameter_string_t PF1_DPA_CAP_VER;
		parameter_string_t PF1_DSN_CAP_NEXTPTR;
		parameter_string_t PF1_EXPANSION_ROM_APERTURE_SIZE;
		parameter_enum_t PF1_EXPANSION_ROM_ENABLE;
		parameter_string_t PF1_INTERRUPT_LINE;
		parameter_string_t PF1_INTERRUPT_PIN;
		parameter_string_t PF1_MSIX_CAP_NEXTPTR;
		parameter_string_t PF1_MSIX_CAP_PBA_BIR;
		parameter_string_t PF1_MSIX_CAP_PBA_OFFSET;
		parameter_string_t PF1_MSIX_CAP_TABLE_BIR;
		parameter_string_t PF1_MSIX_CAP_TABLE_OFFSET;
		parameter_string_t PF1_MSIX_CAP_TABLE_SIZE;
		parameter_string_t PF1_MSI_CAP_MULTIMSGCAP;
		parameter_string_t PF1_MSI_CAP_NEXTPTR;
		parameter_string_t PF1_PB_CAP_NEXTPTR;
		parameter_enum_t PF1_PB_CAP_SYSTEM_ALLOCATED;
		parameter_string_t PF1_PB_CAP_VER;
		parameter_string_t PF1_PM_CAP_ID;
		parameter_string_t PF1_PM_CAP_NEXTPTR;
		parameter_string_t PF1_PM_CAP_VER_ID;
		parameter_enum_t PF1_RBAR_CAP_ENABLE;
		parameter_string_t PF1_RBAR_CAP_INDEX0;
		parameter_string_t PF1_RBAR_CAP_INDEX1;
		parameter_string_t PF1_RBAR_CAP_INDEX2;
		parameter_string_t PF1_RBAR_CAP_NEXTPTR;
		parameter_string_t PF1_RBAR_CAP_SIZE0;
		parameter_string_t PF1_RBAR_CAP_SIZE1;
		parameter_string_t PF1_RBAR_CAP_SIZE2;
		parameter_string_t PF1_RBAR_CAP_VER;
		parameter_string_t PF1_RBAR_NUM;
		parameter_string_t PF1_REVISION_ID;
		parameter_string_t PF1_SRIOV_BAR0_APERTURE_SIZE;
		parameter_string_t PF1_SRIOV_BAR0_CONTROL;
		parameter_string_t PF1_SRIOV_BAR1_APERTURE_SIZE;
		parameter_string_t PF1_SRIOV_BAR1_CONTROL;
		parameter_string_t PF1_SRIOV_BAR2_APERTURE_SIZE;
		parameter_string_t PF1_SRIOV_BAR2_CONTROL;
		parameter_string_t PF1_SRIOV_BAR3_APERTURE_SIZE;
		parameter_string_t PF1_SRIOV_BAR3_CONTROL;
		parameter_string_t PF1_SRIOV_BAR4_APERTURE_SIZE;
		parameter_string_t PF1_SRIOV_BAR4_CONTROL;
		parameter_string_t PF1_SRIOV_BAR5_APERTURE_SIZE;
		parameter_string_t PF1_SRIOV_BAR5_CONTROL;
		parameter_string_t PF1_SRIOV_CAP_INITIAL_VF;
		parameter_string_t PF1_SRIOV_CAP_NEXTPTR;
		parameter_string_t PF1_SRIOV_CAP_TOTAL_VF;
		parameter_string_t PF1_SRIOV_CAP_VER;
		parameter_string_t PF1_SRIOV_FIRST_VF_OFFSET;
		parameter_string_t PF1_SRIOV_FUNC_DEP_LINK;
		parameter_string_t PF1_SRIOV_SUPPORTED_PAGE_SIZE;
		parameter_string_t PF1_SRIOV_VF_DEVICE_ID;
		parameter_string_t PF1_SUBSYSTEM_ID;
		parameter_enum_t PF1_TPHR_CAP_DEV_SPECIFIC_MODE;
		parameter_enum_t PF1_TPHR_CAP_ENABLE;
		parameter_enum_t PF1_TPHR_CAP_INT_VEC_MODE;
		parameter_string_t PF1_TPHR_CAP_NEXTPTR;
		parameter_string_t PF1_TPHR_CAP_ST_MODE_SEL;
		parameter_string_t PF1_TPHR_CAP_ST_TABLE_LOC;
		parameter_string_t PF1_TPHR_CAP_ST_TABLE_SIZE;
		parameter_string_t PF1_TPHR_CAP_VER;
		parameter_enum_t PL_DISABLE_EI_INFER_IN_L0;
		parameter_enum_t PL_DISABLE_GEN3_DC_BALANCE;
		parameter_enum_t PL_DISABLE_SCRAMBLING;
		parameter_enum_t PL_DISABLE_UPCONFIG_CAPABLE;
		parameter_enum_t PL_EQ_ADAPT_DISABLE_COEFF_CHECK;
		parameter_enum_t PL_EQ_ADAPT_DISABLE_PRESET_CHECK;
		parameter_string_t PL_EQ_ADAPT_ITER_COUNT;
		parameter_string_t PL_EQ_ADAPT_REJECT_RETRY_COUNT;
		parameter_enum_t PL_EQ_BYPASS_PHASE23;
		parameter_enum_t PL_EQ_SHORT_ADAPT_PHASE;
		parameter_string_t PL_LANE0_EQ_CONTROL;
		parameter_string_t PL_LANE1_EQ_CONTROL;
		parameter_string_t PL_LANE2_EQ_CONTROL;
		parameter_string_t PL_LANE3_EQ_CONTROL;
		parameter_string_t PL_LANE4_EQ_CONTROL;
		parameter_string_t PL_LANE5_EQ_CONTROL;
		parameter_string_t PL_LANE6_EQ_CONTROL;
		parameter_string_t PL_LANE7_EQ_CONTROL;
		parameter_string_t PL_LINK_CAP_MAX_LINK_SPEED;
		parameter_string_t PL_LINK_CAP_MAX_LINK_WIDTH;
		parameter_string_t PL_N_FTS_COMCLK_GEN1;
		parameter_string_t PL_N_FTS_COMCLK_GEN2;
		parameter_string_t PL_N_FTS_COMCLK_GEN3;
		parameter_string_t PL_N_FTS_GEN1;
		parameter_string_t PL_N_FTS_GEN2;
		parameter_string_t PL_N_FTS_GEN3;
		parameter_enum_t PL_SIM_FAST_LINK_TRAINING;
		parameter_enum_t PL_UPSTREAM_FACING;
		parameter_string_t PM_ASPML0S_TIMEOUT;
		parameter_string_t PM_ASPML1_ENTRY_DELAY;
		parameter_enum_t PM_ENABLE_SLOT_POWER_CAPTURE;
		parameter_string_t PM_L1_REENTRY_DELAY;
		parameter_string_t PM_PME_SERVICE_TIMEOUT_DELAY;
		parameter_string_t PM_PME_TURNOFF_ACK_DELAY;
		parameter_string_t SIM_VERSION;
		parameter_string_t SPARE_BIT0;
		parameter_string_t SPARE_BIT1;
		parameter_string_t SPARE_BIT2;
		parameter_string_t SPARE_BIT3;
		parameter_string_t SPARE_BIT4;
		parameter_string_t SPARE_BIT5;
		parameter_string_t SPARE_BIT6;
		parameter_string_t SPARE_BIT7;
		parameter_string_t SPARE_BIT8;
		parameter_string_t SPARE_BYTE0;
		parameter_string_t SPARE_BYTE1;
		parameter_string_t SPARE_BYTE2;
		parameter_string_t SPARE_BYTE3;
		parameter_string_t SPARE_WORD0;
		parameter_string_t SPARE_WORD1;
		parameter_string_t SPARE_WORD2;
		parameter_string_t SPARE_WORD3;
		parameter_enum_t SRIOV_CAP_ENABLE;
		parameter_string_t TL_COMPL_TIMEOUT_REG0;
		parameter_string_t TL_COMPL_TIMEOUT_REG1;
		parameter_string_t TL_CREDITS_CD;
		parameter_string_t TL_CREDITS_CH;
		parameter_string_t TL_CREDITS_NPD;
		parameter_string_t TL_CREDITS_NPH;
		parameter_string_t TL_CREDITS_PD;
		parameter_string_t TL_CREDITS_PH;
		parameter_enum_t TL_ENABLE_MESSAGE_RID_CHECK_ENABLE;
		parameter_enum_t TL_EXTENDED_CFG_EXTEND_INTERFACE_ENABLE;
		parameter_enum_t TL_LEGACY_CFG_EXTEND_INTERFACE_ENABLE;
		parameter_enum_t TL_LEGACY_MODE_ENABLE;
		parameter_enum_t TL_PF_ENABLE_REG;
		parameter_enum_t TL_TAG_MGMT_ENABLE;
		parameter_string_t VF0_ARI_CAP_NEXTPTR;
		parameter_string_t VF0_CAPABILITY_POINTER;
		parameter_string_t VF0_MSIX_CAP_PBA_BIR;
		parameter_string_t VF0_MSIX_CAP_PBA_OFFSET;
		parameter_string_t VF0_MSIX_CAP_TABLE_BIR;
		parameter_string_t VF0_MSIX_CAP_TABLE_OFFSET;
		parameter_string_t VF0_MSIX_CAP_TABLE_SIZE;
		parameter_string_t VF0_MSI_CAP_MULTIMSGCAP;
		parameter_string_t VF0_PM_CAP_ID;
		parameter_string_t VF0_PM_CAP_NEXTPTR;
		parameter_string_t VF0_PM_CAP_VER_ID;
		parameter_enum_t VF0_TPHR_CAP_DEV_SPECIFIC_MODE;
		parameter_enum_t VF0_TPHR_CAP_ENABLE;
		parameter_enum_t VF0_TPHR_CAP_INT_VEC_MODE;
		parameter_string_t VF0_TPHR_CAP_NEXTPTR;
		parameter_string_t VF0_TPHR_CAP_ST_MODE_SEL;
		parameter_string_t VF0_TPHR_CAP_ST_TABLE_LOC;
		parameter_string_t VF0_TPHR_CAP_ST_TABLE_SIZE;
		parameter_string_t VF0_TPHR_CAP_VER;
		parameter_string_t VF1_ARI_CAP_NEXTPTR;
		parameter_string_t VF1_MSIX_CAP_PBA_BIR;
		parameter_string_t VF1_MSIX_CAP_PBA_OFFSET;
		parameter_string_t VF1_MSIX_CAP_TABLE_BIR;
		parameter_string_t VF1_MSIX_CAP_TABLE_OFFSET;
		parameter_string_t VF1_MSIX_CAP_TABLE_SIZE;
		parameter_string_t VF1_MSI_CAP_MULTIMSGCAP;
		parameter_string_t VF1_PM_CAP_ID;
		parameter_string_t VF1_PM_CAP_NEXTPTR;
		parameter_string_t VF1_PM_CAP_VER_ID;
		parameter_enum_t VF1_TPHR_CAP_DEV_SPECIFIC_MODE;
		parameter_enum_t VF1_TPHR_CAP_ENABLE;
		parameter_enum_t VF1_TPHR_CAP_INT_VEC_MODE;
		parameter_string_t VF1_TPHR_CAP_NEXTPTR;
		parameter_string_t VF1_TPHR_CAP_ST_MODE_SEL;
		parameter_string_t VF1_TPHR_CAP_ST_TABLE_LOC;
		parameter_string_t VF1_TPHR_CAP_ST_TABLE_SIZE;
		parameter_string_t VF1_TPHR_CAP_VER;
		parameter_string_t VF2_ARI_CAP_NEXTPTR;
		parameter_string_t VF2_MSIX_CAP_PBA_BIR;
		parameter_string_t VF2_MSIX_CAP_PBA_OFFSET;
		parameter_string_t VF2_MSIX_CAP_TABLE_BIR;
		parameter_string_t VF2_MSIX_CAP_TABLE_OFFSET;
		parameter_string_t VF2_MSIX_CAP_TABLE_SIZE;
		parameter_string_t VF2_MSI_CAP_MULTIMSGCAP;
		parameter_string_t VF2_PM_CAP_ID;
		parameter_string_t VF2_PM_CAP_NEXTPTR;
		parameter_string_t VF2_PM_CAP_VER_ID;
		parameter_enum_t VF2_TPHR_CAP_DEV_SPECIFIC_MODE;
		parameter_enum_t VF2_TPHR_CAP_ENABLE;
		parameter_enum_t VF2_TPHR_CAP_INT_VEC_MODE;
		parameter_string_t VF2_TPHR_CAP_NEXTPTR;
		parameter_string_t VF2_TPHR_CAP_ST_MODE_SEL;
		parameter_string_t VF2_TPHR_CAP_ST_TABLE_LOC;
		parameter_string_t VF2_TPHR_CAP_ST_TABLE_SIZE;
		parameter_string_t VF2_TPHR_CAP_VER;
		parameter_string_t VF3_ARI_CAP_NEXTPTR;
		parameter_string_t VF3_MSIX_CAP_PBA_BIR;
		parameter_string_t VF3_MSIX_CAP_PBA_OFFSET;
		parameter_string_t VF3_MSIX_CAP_TABLE_BIR;
		parameter_string_t VF3_MSIX_CAP_TABLE_OFFSET;
		parameter_string_t VF3_MSIX_CAP_TABLE_SIZE;
		parameter_string_t VF3_MSI_CAP_MULTIMSGCAP;
		parameter_string_t VF3_PM_CAP_ID;
		parameter_string_t VF3_PM_CAP_NEXTPTR;
		parameter_string_t VF3_PM_CAP_VER_ID;
		parameter_enum_t VF3_TPHR_CAP_DEV_SPECIFIC_MODE;
		parameter_enum_t VF3_TPHR_CAP_ENABLE;
		parameter_enum_t VF3_TPHR_CAP_INT_VEC_MODE;
		parameter_string_t VF3_TPHR_CAP_NEXTPTR;
		parameter_string_t VF3_TPHR_CAP_ST_MODE_SEL;
		parameter_string_t VF3_TPHR_CAP_ST_TABLE_LOC;
		parameter_string_t VF3_TPHR_CAP_ST_TABLE_SIZE;
		parameter_string_t VF3_TPHR_CAP_VER;
		parameter_string_t VF4_ARI_CAP_NEXTPTR;
		parameter_string_t VF4_MSIX_CAP_PBA_BIR;
		parameter_string_t VF4_MSIX_CAP_PBA_OFFSET;
		parameter_string_t VF4_MSIX_CAP_TABLE_BIR;
		parameter_string_t VF4_MSIX_CAP_TABLE_OFFSET;
		parameter_string_t VF4_MSIX_CAP_TABLE_SIZE;
		parameter_string_t VF4_MSI_CAP_MULTIMSGCAP;
		parameter_string_t VF4_PM_CAP_ID;
		parameter_string_t VF4_PM_CAP_NEXTPTR;
		parameter_string_t VF4_PM_CAP_VER_ID;
		parameter_enum_t VF4_TPHR_CAP_DEV_SPECIFIC_MODE;
		parameter_enum_t VF4_TPHR_CAP_ENABLE;
		parameter_enum_t VF4_TPHR_CAP_INT_VEC_MODE;
		parameter_string_t VF4_TPHR_CAP_NEXTPTR;
		parameter_string_t VF4_TPHR_CAP_ST_MODE_SEL;
		parameter_string_t VF4_TPHR_CAP_ST_TABLE_LOC;
		parameter_string_t VF4_TPHR_CAP_ST_TABLE_SIZE;
		parameter_string_t VF4_TPHR_CAP_VER;
		parameter_string_t VF5_ARI_CAP_NEXTPTR;
		parameter_string_t VF5_MSIX_CAP_PBA_BIR;
		parameter_string_t VF5_MSIX_CAP_PBA_OFFSET;
		parameter_string_t VF5_MSIX_CAP_TABLE_BIR;
		parameter_string_t VF5_MSIX_CAP_TABLE_OFFSET;
		parameter_string_t VF5_MSIX_CAP_TABLE_SIZE;
		parameter_string_t VF5_MSI_CAP_MULTIMSGCAP;
		parameter_string_t VF5_PM_CAP_ID;
		parameter_string_t VF5_PM_CAP_NEXTPTR;
		parameter_string_t VF5_PM_CAP_VER_ID;
		parameter_enum_t VF5_TPHR_CAP_DEV_SPECIFIC_MODE;
		parameter_enum_t VF5_TPHR_CAP_ENABLE;
		parameter_enum_t VF5_TPHR_CAP_INT_VEC_MODE;
		parameter_string_t VF5_TPHR_CAP_NEXTPTR;
		parameter_string_t VF5_TPHR_CAP_ST_MODE_SEL;
		parameter_string_t VF5_TPHR_CAP_ST_TABLE_LOC;
		parameter_string_t VF5_TPHR_CAP_ST_TABLE_SIZE;
		parameter_string_t VF5_TPHR_CAP_VER;
		//Verilog Ports in definition order:
		NetFlow* CFGCURRENTSPEED; // net ID: CFGCURRENTSPEED lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDPASUBSTATECHANGE; // net ID: CFGDPASUBSTATECHANGE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGERRCOROUT; // net ID: CFGERRCOROUT lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGERRFATALOUT; // net ID: CFGERRFATALOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGERRNONFATALOUT; // net ID: CFGERRNONFATALOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGEXTFUNCTIONNUMBER; // net ID: CFGEXTFUNCTIONNUMBER lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGEXTREADRECEIVED; // net ID: CFGEXTREADRECEIVED lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGEXTREGISTERNUMBER; // net ID: CFGEXTREGISTERNUMBER lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGEXTWRITEBYTEENABLE; // net ID: CFGEXTWRITEBYTEENABLE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGEXTWRITEDATA; // net ID: CFGEXTWRITEDATA lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGEXTWRITERECEIVED; // net ID: CFGEXTWRITERECEIVED lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGFCCPLD; // net ID: CFGFCCPLD lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGFCCPLH; // net ID: CFGFCCPLH lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGFCNPD; // net ID: CFGFCNPD lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGFCNPH; // net ID: CFGFCNPH lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGFCPD; // net ID: CFGFCPD lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGFCPH; // net ID: CFGFCPH lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGFLRINPROCESS; // net ID: CFGFLRINPROCESS lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGFUNCTIONPOWERSTATE; // net ID: CFGFUNCTIONPOWERSTATE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGFUNCTIONSTATUS; // net ID: CFGFUNCTIONSTATUS lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGHOTRESETOUT; // net ID: CFGHOTRESETOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGINPUTUPDATEDONE; // net ID: CFGINPUTUPDATEDONE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGINTERRUPTAOUTPUT; // net ID: CFGINTERRUPTAOUTPUT lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGINTERRUPTBOUTPUT; // net ID: CFGINTERRUPTBOUTPUT lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGINTERRUPTCOUTPUT; // net ID: CFGINTERRUPTCOUTPUT lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGINTERRUPTDOUTPUT; // net ID: CFGINTERRUPTDOUTPUT lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGINTERRUPTMSIDATA; // net ID: CFGINTERRUPTMSIDATA lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGINTERRUPTMSIENABLE; // net ID: CFGINTERRUPTMSIENABLE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGINTERRUPTMSIFAIL; // net ID: CFGINTERRUPTMSIFAIL lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGINTERRUPTMSIMASKUPDATE; // net ID: CFGINTERRUPTMSIMASKUPDATE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGINTERRUPTMSIMMENABLE; // net ID: CFGINTERRUPTMSIMMENABLE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGINTERRUPTMSISENT; // net ID: CFGINTERRUPTMSISENT lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGINTERRUPTMSIVFENABLE; // net ID: CFGINTERRUPTMSIVFENABLE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGINTERRUPTMSIXENABLE; // net ID: CFGINTERRUPTMSIXENABLE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGINTERRUPTMSIXFAIL; // net ID: CFGINTERRUPTMSIXFAIL lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGINTERRUPTMSIXMASK; // net ID: CFGINTERRUPTMSIXMASK lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGINTERRUPTMSIXSENT; // net ID: CFGINTERRUPTMSIXSENT lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGINTERRUPTMSIXVFENABLE; // net ID: CFGINTERRUPTMSIXVFENABLE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGINTERRUPTMSIXVFMASK; // net ID: CFGINTERRUPTMSIXVFMASK lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGINTERRUPTSENT; // net ID: CFGINTERRUPTSENT lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGLINKPOWERSTATE; // net ID: CFGLINKPOWERSTATE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGLOCALERROR; // net ID: CFGLOCALERROR lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGLTRENABLE; // net ID: CFGLTRENABLE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGLTSSMSTATE; // net ID: CFGLTSSMSTATE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGMAXPAYLOAD; // net ID: CFGMAXPAYLOAD lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGMAXREADREQ; // net ID: CFGMAXREADREQ lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGMCUPDATEDONE; // net ID: CFGMCUPDATEDONE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGMGMTREADDATA; // net ID: CFGMGMTREADDATA lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGMGMTREADWRITEDONE; // net ID: CFGMGMTREADWRITEDONE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGMSGRECEIVED; // net ID: CFGMSGRECEIVED lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGMSGRECEIVEDDATA; // net ID: CFGMSGRECEIVEDDATA lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGMSGRECEIVEDTYPE; // net ID: CFGMSGRECEIVEDTYPE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGMSGTRANSMITDONE; // net ID: CFGMSGTRANSMITDONE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGNEGOTIATEDWIDTH; // net ID: CFGNEGOTIATEDWIDTH lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGOBFFENABLE; // net ID: CFGOBFFENABLE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGPERFUNCSTATUSDATA; // net ID: CFGPERFUNCSTATUSDATA lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGPERFUNCTIONUPDATEDONE; // net ID: CFGPERFUNCTIONUPDATEDONE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGPHYLINKDOWN; // net ID: CFGPHYLINKDOWN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGPHYLINKSTATUS; // net ID: CFGPHYLINKSTATUS lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGPLSTATUSCHANGE; // net ID: CFGPLSTATUSCHANGE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGPOWERSTATECHANGEINTERRUPT; // net ID: CFGPOWERSTATECHANGEINTERRUPT lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGRCBSTATUS; // net ID: CFGRCBSTATUS lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGTPHFUNCTIONNUM; // net ID: CFGTPHFUNCTIONNUM lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGTPHREQUESTERENABLE; // net ID: CFGTPHREQUESTERENABLE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGTPHSTMODE; // net ID: CFGTPHSTMODE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGTPHSTTADDRESS; // net ID: CFGTPHSTTADDRESS lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGTPHSTTREADENABLE; // net ID: CFGTPHSTTREADENABLE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGTPHSTTWRITEBYTEVALID; // net ID: CFGTPHSTTWRITEBYTEVALID lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGTPHSTTWRITEDATA; // net ID: CFGTPHSTTWRITEDATA lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGTPHSTTWRITEENABLE; // net ID: CFGTPHSTTWRITEENABLE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGVFFLRINPROCESS; // net ID: CFGVFFLRINPROCESS lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGVFPOWERSTATE; // net ID: CFGVFPOWERSTATE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGVFSTATUS; // net ID: CFGVFSTATUS lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGVFTPHREQUESTERENABLE; // net ID: CFGVFTPHREQUESTERENABLE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGVFTPHSTMODE; // net ID: CFGVFTPHSTMODE lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGDATAOUT; // net ID: DBGDATAOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* DRPDO; // net ID: DRPDO lsb: 0  msb: 0 OUTPUT
		NetFlow* DRPRDY; // net ID: DRPRDY lsb: 0  msb: 0 OUTPUT
		NetFlow* MAXISCQTDATA; // net ID: MAXISCQTDATA lsb: 0  msb: 0 OUTPUT
		NetFlow* MAXISCQTKEEP; // net ID: MAXISCQTKEEP lsb: 0  msb: 0 OUTPUT
		NetFlow* MAXISCQTLAST; // net ID: MAXISCQTLAST lsb: 0  msb: 0 OUTPUT
		NetFlow* MAXISCQTUSER; // net ID: MAXISCQTUSER lsb: 0  msb: 0 OUTPUT
		NetFlow* MAXISCQTVALID; // net ID: MAXISCQTVALID lsb: 0  msb: 0 OUTPUT
		NetFlow* MAXISRCTDATA; // net ID: MAXISRCTDATA lsb: 0  msb: 0 OUTPUT
		NetFlow* MAXISRCTKEEP; // net ID: MAXISRCTKEEP lsb: 0  msb: 0 OUTPUT
		NetFlow* MAXISRCTLAST; // net ID: MAXISRCTLAST lsb: 0  msb: 0 OUTPUT
		NetFlow* MAXISRCTUSER; // net ID: MAXISRCTUSER lsb: 0  msb: 0 OUTPUT
		NetFlow* MAXISRCTVALID; // net ID: MAXISRCTVALID lsb: 0  msb: 0 OUTPUT
		NetFlow* MICOMPLETIONRAMREADADDRESSAL; // net ID: MICOMPLETIONRAMREADADDRESSAL lsb: 0  msb: 0 OUTPUT
		NetFlow* MICOMPLETIONRAMREADADDRESSAU; // net ID: MICOMPLETIONRAMREADADDRESSAU lsb: 0  msb: 0 OUTPUT
		NetFlow* MICOMPLETIONRAMREADADDRESSBL; // net ID: MICOMPLETIONRAMREADADDRESSBL lsb: 0  msb: 0 OUTPUT
		NetFlow* MICOMPLETIONRAMREADADDRESSBU; // net ID: MICOMPLETIONRAMREADADDRESSBU lsb: 0  msb: 0 OUTPUT
		NetFlow* MICOMPLETIONRAMREADENABLEL; // net ID: MICOMPLETIONRAMREADENABLEL lsb: 0  msb: 0 OUTPUT
		NetFlow* MICOMPLETIONRAMREADENABLEU; // net ID: MICOMPLETIONRAMREADENABLEU lsb: 0  msb: 0 OUTPUT
		NetFlow* MICOMPLETIONRAMWRITEADDRESSAL; // net ID: MICOMPLETIONRAMWRITEADDRESSAL lsb: 0  msb: 0 OUTPUT
		NetFlow* MICOMPLETIONRAMWRITEADDRESSAU; // net ID: MICOMPLETIONRAMWRITEADDRESSAU lsb: 0  msb: 0 OUTPUT
		NetFlow* MICOMPLETIONRAMWRITEADDRESSBL; // net ID: MICOMPLETIONRAMWRITEADDRESSBL lsb: 0  msb: 0 OUTPUT
		NetFlow* MICOMPLETIONRAMWRITEADDRESSBU; // net ID: MICOMPLETIONRAMWRITEADDRESSBU lsb: 0  msb: 0 OUTPUT
		NetFlow* MICOMPLETIONRAMWRITEDATAL; // net ID: MICOMPLETIONRAMWRITEDATAL lsb: 0  msb: 0 OUTPUT
		NetFlow* MICOMPLETIONRAMWRITEDATAU; // net ID: MICOMPLETIONRAMWRITEDATAU lsb: 0  msb: 0 OUTPUT
		NetFlow* MICOMPLETIONRAMWRITEENABLEL; // net ID: MICOMPLETIONRAMWRITEENABLEL lsb: 0  msb: 0 OUTPUT
		NetFlow* MICOMPLETIONRAMWRITEENABLEU; // net ID: MICOMPLETIONRAMWRITEENABLEU lsb: 0  msb: 0 OUTPUT
		NetFlow* MIREPLAYRAMADDRESS; // net ID: MIREPLAYRAMADDRESS lsb: 0  msb: 0 OUTPUT
		NetFlow* MIREPLAYRAMREADENABLE; // net ID: MIREPLAYRAMREADENABLE lsb: 0  msb: 0 OUTPUT
		NetFlow* MIREPLAYRAMWRITEDATA; // net ID: MIREPLAYRAMWRITEDATA lsb: 0  msb: 0 OUTPUT
		NetFlow* MIREPLAYRAMWRITEENABLE; // net ID: MIREPLAYRAMWRITEENABLE lsb: 0  msb: 0 OUTPUT
		NetFlow* MIREQUESTRAMREADADDRESSA; // net ID: MIREQUESTRAMREADADDRESSA lsb: 0  msb: 0 OUTPUT
		NetFlow* MIREQUESTRAMREADADDRESSB; // net ID: MIREQUESTRAMREADADDRESSB lsb: 0  msb: 0 OUTPUT
		NetFlow* MIREQUESTRAMREADENABLE; // net ID: MIREQUESTRAMREADENABLE lsb: 0  msb: 0 OUTPUT
		NetFlow* MIREQUESTRAMWRITEADDRESSA; // net ID: MIREQUESTRAMWRITEADDRESSA lsb: 0  msb: 0 OUTPUT
		NetFlow* MIREQUESTRAMWRITEADDRESSB; // net ID: MIREQUESTRAMWRITEADDRESSB lsb: 0  msb: 0 OUTPUT
		NetFlow* MIREQUESTRAMWRITEDATA; // net ID: MIREQUESTRAMWRITEDATA lsb: 0  msb: 0 OUTPUT
		NetFlow* MIREQUESTRAMWRITEENABLE; // net ID: MIREQUESTRAMWRITEENABLE lsb: 0  msb: 0 OUTPUT
		NetFlow* PCIECQNPREQCOUNT; // net ID: PCIECQNPREQCOUNT lsb: 0  msb: 0 OUTPUT
		NetFlow* PCIERQSEQNUM; // net ID: PCIERQSEQNUM lsb: 0  msb: 0 OUTPUT
		NetFlow* PCIERQSEQNUMVLD; // net ID: PCIERQSEQNUMVLD lsb: 0  msb: 0 OUTPUT
		NetFlow* PCIERQTAG; // net ID: PCIERQTAG lsb: 0  msb: 0 OUTPUT
		NetFlow* PCIERQTAGAV; // net ID: PCIERQTAGAV lsb: 0  msb: 0 OUTPUT
		NetFlow* PCIERQTAGVLD; // net ID: PCIERQTAGVLD lsb: 0  msb: 0 OUTPUT
		NetFlow* PCIETFCNPDAV; // net ID: PCIETFCNPDAV lsb: 0  msb: 0 OUTPUT
		NetFlow* PCIETFCNPHAV; // net ID: PCIETFCNPHAV lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX0EQCONTROL; // net ID: PIPERX0EQCONTROL lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX0EQLPLFFS; // net ID: PIPERX0EQLPLFFS lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX0EQLPTXPRESET; // net ID: PIPERX0EQLPTXPRESET lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX0EQPRESET; // net ID: PIPERX0EQPRESET lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX0POLARITY; // net ID: PIPERX0POLARITY lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX1EQCONTROL; // net ID: PIPERX1EQCONTROL lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX1EQLPLFFS; // net ID: PIPERX1EQLPLFFS lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX1EQLPTXPRESET; // net ID: PIPERX1EQLPTXPRESET lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX1EQPRESET; // net ID: PIPERX1EQPRESET lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX1POLARITY; // net ID: PIPERX1POLARITY lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX2EQCONTROL; // net ID: PIPERX2EQCONTROL lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX2EQLPLFFS; // net ID: PIPERX2EQLPLFFS lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX2EQLPTXPRESET; // net ID: PIPERX2EQLPTXPRESET lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX2EQPRESET; // net ID: PIPERX2EQPRESET lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX2POLARITY; // net ID: PIPERX2POLARITY lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX3EQCONTROL; // net ID: PIPERX3EQCONTROL lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX3EQLPLFFS; // net ID: PIPERX3EQLPLFFS lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX3EQLPTXPRESET; // net ID: PIPERX3EQLPTXPRESET lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX3EQPRESET; // net ID: PIPERX3EQPRESET lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX3POLARITY; // net ID: PIPERX3POLARITY lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX4EQCONTROL; // net ID: PIPERX4EQCONTROL lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX4EQLPLFFS; // net ID: PIPERX4EQLPLFFS lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX4EQLPTXPRESET; // net ID: PIPERX4EQLPTXPRESET lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX4EQPRESET; // net ID: PIPERX4EQPRESET lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX4POLARITY; // net ID: PIPERX4POLARITY lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX5EQCONTROL; // net ID: PIPERX5EQCONTROL lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX5EQLPLFFS; // net ID: PIPERX5EQLPLFFS lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX5EQLPTXPRESET; // net ID: PIPERX5EQLPTXPRESET lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX5EQPRESET; // net ID: PIPERX5EQPRESET lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX5POLARITY; // net ID: PIPERX5POLARITY lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX6EQCONTROL; // net ID: PIPERX6EQCONTROL lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX6EQLPLFFS; // net ID: PIPERX6EQLPLFFS lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX6EQLPTXPRESET; // net ID: PIPERX6EQLPTXPRESET lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX6EQPRESET; // net ID: PIPERX6EQPRESET lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX6POLARITY; // net ID: PIPERX6POLARITY lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX7EQCONTROL; // net ID: PIPERX7EQCONTROL lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX7EQLPLFFS; // net ID: PIPERX7EQLPLFFS lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX7EQLPTXPRESET; // net ID: PIPERX7EQLPTXPRESET lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX7EQPRESET; // net ID: PIPERX7EQPRESET lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX7POLARITY; // net ID: PIPERX7POLARITY lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX0CHARISK; // net ID: PIPETX0CHARISK lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX0COMPLIANCE; // net ID: PIPETX0COMPLIANCE lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX0DATA; // net ID: PIPETX0DATA lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX0DATAVALID; // net ID: PIPETX0DATAVALID lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX0ELECIDLE; // net ID: PIPETX0ELECIDLE lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX0EQCONTROL; // net ID: PIPETX0EQCONTROL lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX0EQDEEMPH; // net ID: PIPETX0EQDEEMPH lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX0EQPRESET; // net ID: PIPETX0EQPRESET lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX0POWERDOWN; // net ID: PIPETX0POWERDOWN lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX0STARTBLOCK; // net ID: PIPETX0STARTBLOCK lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX0SYNCHEADER; // net ID: PIPETX0SYNCHEADER lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX1CHARISK; // net ID: PIPETX1CHARISK lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX1COMPLIANCE; // net ID: PIPETX1COMPLIANCE lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX1DATA; // net ID: PIPETX1DATA lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX1DATAVALID; // net ID: PIPETX1DATAVALID lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX1ELECIDLE; // net ID: PIPETX1ELECIDLE lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX1EQCONTROL; // net ID: PIPETX1EQCONTROL lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX1EQDEEMPH; // net ID: PIPETX1EQDEEMPH lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX1EQPRESET; // net ID: PIPETX1EQPRESET lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX1POWERDOWN; // net ID: PIPETX1POWERDOWN lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX1STARTBLOCK; // net ID: PIPETX1STARTBLOCK lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX1SYNCHEADER; // net ID: PIPETX1SYNCHEADER lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX2CHARISK; // net ID: PIPETX2CHARISK lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX2COMPLIANCE; // net ID: PIPETX2COMPLIANCE lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX2DATA; // net ID: PIPETX2DATA lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX2DATAVALID; // net ID: PIPETX2DATAVALID lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX2ELECIDLE; // net ID: PIPETX2ELECIDLE lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX2EQCONTROL; // net ID: PIPETX2EQCONTROL lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX2EQDEEMPH; // net ID: PIPETX2EQDEEMPH lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX2EQPRESET; // net ID: PIPETX2EQPRESET lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX2POWERDOWN; // net ID: PIPETX2POWERDOWN lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX2STARTBLOCK; // net ID: PIPETX2STARTBLOCK lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX2SYNCHEADER; // net ID: PIPETX2SYNCHEADER lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX3CHARISK; // net ID: PIPETX3CHARISK lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX3COMPLIANCE; // net ID: PIPETX3COMPLIANCE lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX3DATA; // net ID: PIPETX3DATA lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX3DATAVALID; // net ID: PIPETX3DATAVALID lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX3ELECIDLE; // net ID: PIPETX3ELECIDLE lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX3EQCONTROL; // net ID: PIPETX3EQCONTROL lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX3EQDEEMPH; // net ID: PIPETX3EQDEEMPH lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX3EQPRESET; // net ID: PIPETX3EQPRESET lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX3POWERDOWN; // net ID: PIPETX3POWERDOWN lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX3STARTBLOCK; // net ID: PIPETX3STARTBLOCK lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX3SYNCHEADER; // net ID: PIPETX3SYNCHEADER lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX4CHARISK; // net ID: PIPETX4CHARISK lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX4COMPLIANCE; // net ID: PIPETX4COMPLIANCE lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX4DATA; // net ID: PIPETX4DATA lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX4DATAVALID; // net ID: PIPETX4DATAVALID lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX4ELECIDLE; // net ID: PIPETX4ELECIDLE lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX4EQCONTROL; // net ID: PIPETX4EQCONTROL lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX4EQDEEMPH; // net ID: PIPETX4EQDEEMPH lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX4EQPRESET; // net ID: PIPETX4EQPRESET lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX4POWERDOWN; // net ID: PIPETX4POWERDOWN lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX4STARTBLOCK; // net ID: PIPETX4STARTBLOCK lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX4SYNCHEADER; // net ID: PIPETX4SYNCHEADER lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX5CHARISK; // net ID: PIPETX5CHARISK lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX5COMPLIANCE; // net ID: PIPETX5COMPLIANCE lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX5DATA; // net ID: PIPETX5DATA lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX5DATAVALID; // net ID: PIPETX5DATAVALID lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX5ELECIDLE; // net ID: PIPETX5ELECIDLE lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX5EQCONTROL; // net ID: PIPETX5EQCONTROL lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX5EQDEEMPH; // net ID: PIPETX5EQDEEMPH lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX5EQPRESET; // net ID: PIPETX5EQPRESET lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX5POWERDOWN; // net ID: PIPETX5POWERDOWN lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX5STARTBLOCK; // net ID: PIPETX5STARTBLOCK lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX5SYNCHEADER; // net ID: PIPETX5SYNCHEADER lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX6CHARISK; // net ID: PIPETX6CHARISK lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX6COMPLIANCE; // net ID: PIPETX6COMPLIANCE lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX6DATA; // net ID: PIPETX6DATA lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX6DATAVALID; // net ID: PIPETX6DATAVALID lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX6ELECIDLE; // net ID: PIPETX6ELECIDLE lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX6EQCONTROL; // net ID: PIPETX6EQCONTROL lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX6EQDEEMPH; // net ID: PIPETX6EQDEEMPH lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX6EQPRESET; // net ID: PIPETX6EQPRESET lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX6POWERDOWN; // net ID: PIPETX6POWERDOWN lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX6STARTBLOCK; // net ID: PIPETX6STARTBLOCK lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX6SYNCHEADER; // net ID: PIPETX6SYNCHEADER lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX7CHARISK; // net ID: PIPETX7CHARISK lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX7COMPLIANCE; // net ID: PIPETX7COMPLIANCE lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX7DATA; // net ID: PIPETX7DATA lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX7DATAVALID; // net ID: PIPETX7DATAVALID lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX7ELECIDLE; // net ID: PIPETX7ELECIDLE lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX7EQCONTROL; // net ID: PIPETX7EQCONTROL lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX7EQDEEMPH; // net ID: PIPETX7EQDEEMPH lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX7EQPRESET; // net ID: PIPETX7EQPRESET lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX7POWERDOWN; // net ID: PIPETX7POWERDOWN lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX7STARTBLOCK; // net ID: PIPETX7STARTBLOCK lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX7SYNCHEADER; // net ID: PIPETX7SYNCHEADER lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETXDEEMPH; // net ID: PIPETXDEEMPH lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETXMARGIN; // net ID: PIPETXMARGIN lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETXRATE; // net ID: PIPETXRATE lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETXRCVRDET; // net ID: PIPETXRCVRDET lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETXRESET; // net ID: PIPETXRESET lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETXSWING; // net ID: PIPETXSWING lsb: 0  msb: 0 OUTPUT
		NetFlow* PLEQINPROGRESS; // net ID: PLEQINPROGRESS lsb: 0  msb: 0 OUTPUT
		NetFlow* PLEQPHASE; // net ID: PLEQPHASE lsb: 0  msb: 0 OUTPUT
		NetFlow* PLGEN3PCSRXSLIDE; // net ID: PLGEN3PCSRXSLIDE lsb: 0  msb: 0 OUTPUT
		NetFlow* SAXISCCTREADY; // net ID: SAXISCCTREADY lsb: 0  msb: 0 OUTPUT
		NetFlow* SAXISRQTREADY; // net ID: SAXISRQTREADY lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGCONFIGSPACEENABLE; // net ID: CFGCONFIGSPACEENABLE lsb: 0  msb: 0 INPUT
		NetFlow* CFGDEVID; // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
		NetFlow* CFGDSBUSNUMBER; // net ID: CFGDSBUSNUMBER lsb: 0  msb: 7 INPUT
		NetFlow* CFGDSDEVICENUMBER; // net ID: CFGDSDEVICENUMBER lsb: 0  msb: 4 INPUT
		NetFlow* CFGDSFUNCTIONNUMBER; // net ID: CFGDSFUNCTIONNUMBER lsb: 0  msb: 2 INPUT
		NetFlow* CFGDSN; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSPORTNUMBER; // net ID: CFGDSPORTNUMBER lsb: 0  msb: 7 INPUT
		NetFlow* CFGERRCORIN; // net ID: CFGERRCORIN lsb: 0  msb: 0 INPUT
		NetFlow* CFGERRUNCORIN; // net ID: CFGERRUNCORIN lsb: 0  msb: 0 INPUT
		NetFlow* CFGEXTREADDATA; // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGEXTREADDATAVALID; // net ID: CFGEXTREADDATAVALID lsb: 0  msb: 0 INPUT
		NetFlow* CFGFCSEL; // net ID: CFGFCSEL lsb: 0  msb: 2 INPUT
		NetFlow* CFGFLRDONE; // net ID: CFGFLRDONE lsb: 0  msb: 1 INPUT
		NetFlow* CFGHOTRESETIN; // net ID: CFGHOTRESETIN lsb: 0  msb: 0 INPUT
		NetFlow* CFGINPUTUPDATEREQUEST; // net ID: CFGINPUTUPDATEREQUEST lsb: 0  msb: 0 INPUT
		NetFlow* CFGINTERRUPTINT; // net ID: CFGINTERRUPTINT lsb: 0  msb: 3 INPUT
		NetFlow* CFGINTERRUPTMSIATTR; // net ID: CFGINTERRUPTMSIATTR lsb: 0  msb: 2 INPUT
		NetFlow* CFGINTERRUPTMSIFUNCTIONNUMBER; // net ID: CFGINTERRUPTMSIFUNCTIONNUMBER lsb: 0  msb: 2 INPUT
		NetFlow* CFGINTERRUPTMSIINT; // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
		NetFlow* CFGINTERRUPTMSIPENDINGSTATUS; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSISELECT; // net ID: CFGINTERRUPTMSISELECT lsb: 0  msb: 3 INPUT
		NetFlow* CFGINTERRUPTMSITPHPRESENT; // net ID: CFGINTERRUPTMSITPHPRESENT lsb: 0  msb: 0 INPUT
		NetFlow* CFGINTERRUPTMSITPHSTTAG; // net ID: CFGINTERRUPTMSITPHSTTAG lsb: 0  msb: 8 INPUT
		NetFlow* CFGINTERRUPTMSITPHTYPE; // net ID: CFGINTERRUPTMSITPHTYPE lsb: 0  msb: 1 INPUT
		NetFlow* CFGINTERRUPTMSIXADDRESS; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIXDATA; // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGINTERRUPTMSIXINT; // net ID: CFGINTERRUPTMSIXINT lsb: 0  msb: 0 INPUT
		NetFlow* CFGINTERRUPTPENDING; // net ID: CFGINTERRUPTPENDING lsb: 0  msb: 1 INPUT
		NetFlow* CFGLINKTRAININGENABLE; // net ID: CFGLINKTRAININGENABLE lsb: 0  msb: 0 INPUT
		NetFlow* CFGMCUPDATEREQUEST; // net ID: CFGMCUPDATEREQUEST lsb: 0  msb: 0 INPUT
		NetFlow* CFGMGMTADDR; // net ID: CFGMGMTADDR lsb: 0  msb: 18 INPUT
		NetFlow* CFGMGMTBYTEENABLE; // net ID: CFGMGMTBYTEENABLE lsb: 0  msb: 3 INPUT
		NetFlow* CFGMGMTREAD; // net ID: CFGMGMTREAD lsb: 0  msb: 0 INPUT
		NetFlow* CFGMGMTTYPE1CFGREGACCESS; // net ID: CFGMGMTTYPE1CFGREGACCESS lsb: 0  msb: 0 INPUT
		NetFlow* CFGMGMTWRITE; // net ID: CFGMGMTWRITE lsb: 0  msb: 0 INPUT
		NetFlow* CFGMGMTWRITEDATA; // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGMSGTRANSMIT; // net ID: CFGMSGTRANSMIT lsb: 0  msb: 0 INPUT
		NetFlow* CFGMSGTRANSMITDATA; // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGMSGTRANSMITTYPE; // net ID: CFGMSGTRANSMITTYPE lsb: 0  msb: 2 INPUT
		NetFlow* CFGPERFUNCSTATUSCONTROL; // net ID: CFGPERFUNCSTATUSCONTROL lsb: 0  msb: 2 INPUT
		NetFlow* CFGPERFUNCTIONNUMBER; // net ID: CFGPERFUNCTIONNUMBER lsb: 0  msb: 2 INPUT
		NetFlow* CFGPERFUNCTIONOUTPUTREQUEST; // net ID: CFGPERFUNCTIONOUTPUTREQUEST lsb: 0  msb: 0 INPUT
		NetFlow* CFGPOWERSTATECHANGEACK; // net ID: CFGPOWERSTATECHANGEACK lsb: 0  msb: 0 INPUT
		NetFlow* CFGREQPMTRANSITIONL23READY; // net ID: CFGREQPMTRANSITIONL23READY lsb: 0  msb: 0 INPUT
		NetFlow* CFGREVID; // net ID: CFGREVID lsb: 0  msb: 7 INPUT
		NetFlow* CFGSUBSYSID; // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
		NetFlow* CFGSUBSYSVENDID; // net ID: CFGSUBSYSVENDID lsb: 0  msb: 15 INPUT
		NetFlow* CFGTPHSTTREADDATA; // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGTPHSTTREADDATAVALID; // net ID: CFGTPHSTTREADDATAVALID lsb: 0  msb: 0 INPUT
		NetFlow* CFGVENDID; // net ID: CFGVENDID lsb: 0  msb: 15 INPUT
		NetFlow* CFGVFFLRDONE; // net ID: CFGVFFLRDONE lsb: 0  msb: 5 INPUT
		NetFlow* CORECLK; // net ID: CORECLK lsb: 0  msb: 0 INPUT
		NetFlow* CORECLKMICOMPLETIONRAML; // net ID: CORECLKMICOMPLETIONRAML lsb: 0  msb: 0 INPUT
		NetFlow* CORECLKMICOMPLETIONRAMU; // net ID: CORECLKMICOMPLETIONRAMU lsb: 0  msb: 0 INPUT
		NetFlow* CORECLKMIREPLAYRAM; // net ID: CORECLKMIREPLAYRAM lsb: 0  msb: 0 INPUT
		NetFlow* CORECLKMIREQUESTRAM; // net ID: CORECLKMIREQUESTRAM lsb: 0  msb: 0 INPUT
		NetFlow* DRPADDR; // net ID: DRPADDR lsb: 0  msb: 10 INPUT
		NetFlow* DRPCLK; // net ID: DRPCLK lsb: 0  msb: 0 INPUT
		NetFlow* DRPDI; // net ID: DRPDI lsb: 0  msb: 15 INPUT
		NetFlow* DRPEN; // net ID: DRPEN lsb: 0  msb: 0 INPUT
		NetFlow* DRPWE; // net ID: DRPWE lsb: 0  msb: 0 INPUT
		NetFlow* MAXISCQTREADY; // net ID: MAXISCQTREADY lsb: 0  msb: 21 INPUT
		NetFlow* MAXISRCTREADY; // net ID: MAXISRCTREADY lsb: 0  msb: 21 INPUT
		NetFlow* MGMTRESETN; // net ID: MGMTRESETN lsb: 0  msb: 0 INPUT
		NetFlow* MGMTSTICKYRESETN; // net ID: MGMTSTICKYRESETN lsb: 0  msb: 0 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* PCIECQNPREQ; // net ID: PCIECQNPREQ lsb: 0  msb: 0 INPUT
		NetFlow* PIPECLK; // net ID: PIPECLK lsb: 0  msb: 0 INPUT
		NetFlow* PIPEEQFS; // net ID: PIPEEQFS lsb: 0  msb: 5 INPUT
		NetFlow* PIPEEQLF; // net ID: PIPEEQLF lsb: 0  msb: 5 INPUT
		NetFlow* PIPERESETN; // net ID: PIPERESETN lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX0CHARISK; // net ID: PIPERX0CHARISK lsb: 0  msb: 1 INPUT
		NetFlow* PIPERX0DATA; // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX0DATAVALID; // net ID: PIPERX0DATAVALID lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX0ELECIDLE; // net ID: PIPERX0ELECIDLE lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX0EQDONE; // net ID: PIPERX0EQDONE lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX0EQLPADAPTDONE; // net ID: PIPERX0EQLPADAPTDONE lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX0EQLPLFFSSEL; // net ID: PIPERX0EQLPLFFSSEL lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX0EQLPNEWTXCOEFFORPRESET; // net ID: PIPERX0EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX0PHYSTATUS; // net ID: PIPERX0PHYSTATUS lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX0STARTBLOCK; // net ID: PIPERX0STARTBLOCK lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX0STATUS; // net ID: PIPERX0STATUS lsb: 0  msb: 2 INPUT
		NetFlow* PIPERX0SYNCHEADER; // net ID: PIPERX0SYNCHEADER lsb: 0  msb: 1 INPUT
		NetFlow* PIPERX0VALID; // net ID: PIPERX0VALID lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX1CHARISK; // net ID: PIPERX1CHARISK lsb: 0  msb: 1 INPUT
		NetFlow* PIPERX1DATA; // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX1DATAVALID; // net ID: PIPERX1DATAVALID lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX1ELECIDLE; // net ID: PIPERX1ELECIDLE lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX1EQDONE; // net ID: PIPERX1EQDONE lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX1EQLPADAPTDONE; // net ID: PIPERX1EQLPADAPTDONE lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX1EQLPLFFSSEL; // net ID: PIPERX1EQLPLFFSSEL lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX1EQLPNEWTXCOEFFORPRESET; // net ID: PIPERX1EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX1PHYSTATUS; // net ID: PIPERX1PHYSTATUS lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX1STARTBLOCK; // net ID: PIPERX1STARTBLOCK lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX1STATUS; // net ID: PIPERX1STATUS lsb: 0  msb: 2 INPUT
		NetFlow* PIPERX1SYNCHEADER; // net ID: PIPERX1SYNCHEADER lsb: 0  msb: 1 INPUT
		NetFlow* PIPERX1VALID; // net ID: PIPERX1VALID lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX2CHARISK; // net ID: PIPERX2CHARISK lsb: 0  msb: 1 INPUT
		NetFlow* PIPERX2DATA; // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX2DATAVALID; // net ID: PIPERX2DATAVALID lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX2ELECIDLE; // net ID: PIPERX2ELECIDLE lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX2EQDONE; // net ID: PIPERX2EQDONE lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX2EQLPADAPTDONE; // net ID: PIPERX2EQLPADAPTDONE lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX2EQLPLFFSSEL; // net ID: PIPERX2EQLPLFFSSEL lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX2EQLPNEWTXCOEFFORPRESET; // net ID: PIPERX2EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX2PHYSTATUS; // net ID: PIPERX2PHYSTATUS lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX2STARTBLOCK; // net ID: PIPERX2STARTBLOCK lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX2STATUS; // net ID: PIPERX2STATUS lsb: 0  msb: 2 INPUT
		NetFlow* PIPERX2SYNCHEADER; // net ID: PIPERX2SYNCHEADER lsb: 0  msb: 1 INPUT
		NetFlow* PIPERX2VALID; // net ID: PIPERX2VALID lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX3CHARISK; // net ID: PIPERX3CHARISK lsb: 0  msb: 1 INPUT
		NetFlow* PIPERX3DATA; // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX3DATAVALID; // net ID: PIPERX3DATAVALID lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX3ELECIDLE; // net ID: PIPERX3ELECIDLE lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX3EQDONE; // net ID: PIPERX3EQDONE lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX3EQLPADAPTDONE; // net ID: PIPERX3EQLPADAPTDONE lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX3EQLPLFFSSEL; // net ID: PIPERX3EQLPLFFSSEL lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX3EQLPNEWTXCOEFFORPRESET; // net ID: PIPERX3EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX3PHYSTATUS; // net ID: PIPERX3PHYSTATUS lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX3STARTBLOCK; // net ID: PIPERX3STARTBLOCK lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX3STATUS; // net ID: PIPERX3STATUS lsb: 0  msb: 2 INPUT
		NetFlow* PIPERX3SYNCHEADER; // net ID: PIPERX3SYNCHEADER lsb: 0  msb: 1 INPUT
		NetFlow* PIPERX3VALID; // net ID: PIPERX3VALID lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX4CHARISK; // net ID: PIPERX4CHARISK lsb: 0  msb: 1 INPUT
		NetFlow* PIPERX4DATA; // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX4DATAVALID; // net ID: PIPERX4DATAVALID lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX4ELECIDLE; // net ID: PIPERX4ELECIDLE lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX4EQDONE; // net ID: PIPERX4EQDONE lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX4EQLPADAPTDONE; // net ID: PIPERX4EQLPADAPTDONE lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX4EQLPLFFSSEL; // net ID: PIPERX4EQLPLFFSSEL lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX4EQLPNEWTXCOEFFORPRESET; // net ID: PIPERX4EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX4PHYSTATUS; // net ID: PIPERX4PHYSTATUS lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX4STARTBLOCK; // net ID: PIPERX4STARTBLOCK lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX4STATUS; // net ID: PIPERX4STATUS lsb: 0  msb: 2 INPUT
		NetFlow* PIPERX4SYNCHEADER; // net ID: PIPERX4SYNCHEADER lsb: 0  msb: 1 INPUT
		NetFlow* PIPERX4VALID; // net ID: PIPERX4VALID lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX5CHARISK; // net ID: PIPERX5CHARISK lsb: 0  msb: 1 INPUT
		NetFlow* PIPERX5DATA; // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX5DATAVALID; // net ID: PIPERX5DATAVALID lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX5ELECIDLE; // net ID: PIPERX5ELECIDLE lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX5EQDONE; // net ID: PIPERX5EQDONE lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX5EQLPADAPTDONE; // net ID: PIPERX5EQLPADAPTDONE lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX5EQLPLFFSSEL; // net ID: PIPERX5EQLPLFFSSEL lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX5EQLPNEWTXCOEFFORPRESET; // net ID: PIPERX5EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX5PHYSTATUS; // net ID: PIPERX5PHYSTATUS lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX5STARTBLOCK; // net ID: PIPERX5STARTBLOCK lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX5STATUS; // net ID: PIPERX5STATUS lsb: 0  msb: 2 INPUT
		NetFlow* PIPERX5SYNCHEADER; // net ID: PIPERX5SYNCHEADER lsb: 0  msb: 1 INPUT
		NetFlow* PIPERX5VALID; // net ID: PIPERX5VALID lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX6CHARISK; // net ID: PIPERX6CHARISK lsb: 0  msb: 1 INPUT
		NetFlow* PIPERX6DATA; // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX6DATAVALID; // net ID: PIPERX6DATAVALID lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX6ELECIDLE; // net ID: PIPERX6ELECIDLE lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX6EQDONE; // net ID: PIPERX6EQDONE lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX6EQLPADAPTDONE; // net ID: PIPERX6EQLPADAPTDONE lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX6EQLPLFFSSEL; // net ID: PIPERX6EQLPLFFSSEL lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX6EQLPNEWTXCOEFFORPRESET; // net ID: PIPERX6EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX6PHYSTATUS; // net ID: PIPERX6PHYSTATUS lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX6STARTBLOCK; // net ID: PIPERX6STARTBLOCK lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX6STATUS; // net ID: PIPERX6STATUS lsb: 0  msb: 2 INPUT
		NetFlow* PIPERX6SYNCHEADER; // net ID: PIPERX6SYNCHEADER lsb: 0  msb: 1 INPUT
		NetFlow* PIPERX6VALID; // net ID: PIPERX6VALID lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX7CHARISK; // net ID: PIPERX7CHARISK lsb: 0  msb: 1 INPUT
		NetFlow* PIPERX7DATA; // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX7DATAVALID; // net ID: PIPERX7DATAVALID lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX7ELECIDLE; // net ID: PIPERX7ELECIDLE lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX7EQDONE; // net ID: PIPERX7EQDONE lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX7EQLPADAPTDONE; // net ID: PIPERX7EQLPADAPTDONE lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX7EQLPLFFSSEL; // net ID: PIPERX7EQLPLFFSSEL lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX7EQLPNEWTXCOEFFORPRESET; // net ID: PIPERX7EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX7PHYSTATUS; // net ID: PIPERX7PHYSTATUS lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX7STARTBLOCK; // net ID: PIPERX7STARTBLOCK lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX7STATUS; // net ID: PIPERX7STATUS lsb: 0  msb: 2 INPUT
		NetFlow* PIPERX7SYNCHEADER; // net ID: PIPERX7SYNCHEADER lsb: 0  msb: 1 INPUT
		NetFlow* PIPERX7VALID; // net ID: PIPERX7VALID lsb: 0  msb: 0 INPUT
		NetFlow* PIPETX0EQCOEFF; // net ID: PIPETX0EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX0EQDONE; // net ID: PIPETX0EQDONE lsb: 0  msb: 0 INPUT
		NetFlow* PIPETX1EQCOEFF; // net ID: PIPETX1EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX1EQDONE; // net ID: PIPETX1EQDONE lsb: 0  msb: 0 INPUT
		NetFlow* PIPETX2EQCOEFF; // net ID: PIPETX2EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX2EQDONE; // net ID: PIPETX2EQDONE lsb: 0  msb: 0 INPUT
		NetFlow* PIPETX3EQCOEFF; // net ID: PIPETX3EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX3EQDONE; // net ID: PIPETX3EQDONE lsb: 0  msb: 0 INPUT
		NetFlow* PIPETX4EQCOEFF; // net ID: PIPETX4EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX4EQDONE; // net ID: PIPETX4EQDONE lsb: 0  msb: 0 INPUT
		NetFlow* PIPETX5EQCOEFF; // net ID: PIPETX5EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX5EQDONE; // net ID: PIPETX5EQDONE lsb: 0  msb: 0 INPUT
		NetFlow* PIPETX6EQCOEFF; // net ID: PIPETX6EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX6EQDONE; // net ID: PIPETX6EQDONE lsb: 0  msb: 0 INPUT
		NetFlow* PIPETX7EQCOEFF; // net ID: PIPETX7EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX7EQDONE; // net ID: PIPETX7EQDONE lsb: 0  msb: 0 INPUT
		NetFlow* PLDISABLESCRAMBLER; // net ID: PLDISABLESCRAMBLER lsb: 0  msb: 0 INPUT
		NetFlow* PLEQRESETEIEOSCOUNT; // net ID: PLEQRESETEIEOSCOUNT lsb: 0  msb: 0 INPUT
		NetFlow* PLGEN3PCSDISABLE; // net ID: PLGEN3PCSDISABLE lsb: 0  msb: 0 INPUT
		NetFlow* PLGEN3PCSRXSYNCDONE; // net ID: PLGEN3PCSRXSYNCDONE lsb: 0  msb: 7 INPUT
		NetFlow* RECCLK; // net ID: RECCLK lsb: 0  msb: 0 INPUT
		NetFlow* RESETN; // net ID: RESETN lsb: 0  msb: 0 INPUT
		NetFlow* SAXISCCTDATA; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTKEEP; // net ID: SAXISCCTKEEP lsb: 0  msb: 7 INPUT
		NetFlow* SAXISCCTLAST; // net ID: SAXISCCTLAST lsb: 0  msb: 0 INPUT
		NetFlow* SAXISCCTUSER; // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
		NetFlow* SAXISCCTVALID; // net ID: SAXISCCTVALID lsb: 0  msb: 0 INPUT
		NetFlow* SAXISRQTDATA; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTKEEP; // net ID: SAXISRQTKEEP lsb: 0  msb: 7 INPUT
		NetFlow* SAXISRQTLAST; // net ID: SAXISRQTLAST lsb: 0  msb: 0 INPUT
		NetFlow* SAXISRQTUSER; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
		NetFlow* SAXISRQTVALID; // net ID: SAXISRQTVALID lsb: 0  msb: 0 INPUT
		NetFlow* USERCLK; // net ID: USERCLK lsb: 0  msb: 0 INPUT
		
		X_PCIE_3_0(
			const char * name,
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_enum_t ARI_CAP_ENABLE, // Default: "FALSE"
			parameter_enum_t AXISTEN_IF_CC_ALIGNMENT_MODE, // Default: "FALSE"
			parameter_enum_t AXISTEN_IF_CC_PARITY_CHK, // Default: "TRUE"
			parameter_enum_t AXISTEN_IF_CQ_ALIGNMENT_MODE, // Default: "FALSE"
			parameter_enum_t AXISTEN_IF_ENABLE_CLIENT_TAG, // Default: "FALSE"
			parameter_string_t AXISTEN_IF_ENABLE_MSG_ROUTE, // Default: 18'h00000
			parameter_enum_t AXISTEN_IF_ENABLE_RX_MSG_INTFC, // Default: "FALSE"
			parameter_enum_t AXISTEN_IF_RC_ALIGNMENT_MODE, // Default: "FALSE"
			parameter_enum_t AXISTEN_IF_RC_STRADDLE, // Default: "FALSE"
			parameter_enum_t AXISTEN_IF_RQ_ALIGNMENT_MODE, // Default: "FALSE"
			parameter_enum_t AXISTEN_IF_RQ_PARITY_CHK, // Default: "TRUE"
			parameter_string_t AXISTEN_IF_WIDTH, // Default: 2'h2
			parameter_enum_t CRM_CORE_CLK_FREQ_500, // Default: "TRUE"
			parameter_string_t CRM_USER_CLK_FREQ, // Default: 2'h2
			parameter_string_t DNSTREAM_LINK_NUM, // Default: 8'h00
			parameter_string_t GEN3_PCS_AUTO_REALIGN, // Default: 2'h1
			parameter_enum_t GEN3_PCS_RX_ELECIDLE_INTERNAL, // Default: "TRUE"
			parameter_string_t LL_ACK_TIMEOUT, // Default: 9'h000
			parameter_enum_t LL_ACK_TIMEOUT_EN, // Default: "FALSE"
			parameter_string_t LL_ACK_TIMEOUT_FUNC, // Default: 0
			parameter_string_t LL_CPL_FC_UPDATE_TIMER, // Default: 16'h0000
			parameter_enum_t LL_CPL_FC_UPDATE_TIMER_OVERRIDE, // Default: "FALSE"
			parameter_string_t LL_FC_UPDATE_TIMER, // Default: 16'h0000
			parameter_enum_t LL_FC_UPDATE_TIMER_OVERRIDE, // Default: "FALSE"
			parameter_string_t LL_NP_FC_UPDATE_TIMER, // Default: 16'h0000
			parameter_enum_t LL_NP_FC_UPDATE_TIMER_OVERRIDE, // Default: "FALSE"
			parameter_string_t LL_P_FC_UPDATE_TIMER, // Default: 16'h0000
			parameter_enum_t LL_P_FC_UPDATE_TIMER_OVERRIDE, // Default: "FALSE"
			parameter_string_t LL_REPLAY_TIMEOUT, // Default: 9'h000
			parameter_enum_t LL_REPLAY_TIMEOUT_EN, // Default: "FALSE"
			parameter_string_t LL_REPLAY_TIMEOUT_FUNC, // Default: 0
			parameter_string_t LTR_TX_MESSAGE_MINIMUM_INTERVAL, // Default: 10'h0FA
			parameter_enum_t LTR_TX_MESSAGE_ON_FUNC_POWER_STATE_CHANGE, // Default: "FALSE"
			parameter_enum_t LTR_TX_MESSAGE_ON_LTR_ENABLE, // Default: "FALSE"
			parameter_enum_t PF0_AER_CAP_ECRC_CHECK_CAPABLE, // Default: "FALSE"
			parameter_enum_t PF0_AER_CAP_ECRC_GEN_CAPABLE, // Default: "FALSE"
			parameter_string_t PF0_AER_CAP_NEXTPTR, // Default: 12'h000
			parameter_string_t PF0_ARI_CAP_NEXTPTR, // Default: 12'h000
			parameter_string_t PF0_ARI_CAP_NEXT_FUNC, // Default: 8'h00
			parameter_string_t PF0_ARI_CAP_VER, // Default: 4'h1
			parameter_string_t PF0_BAR0_APERTURE_SIZE, // Default: 5'h03
			parameter_string_t PF0_BAR0_CONTROL, // Default: 3'h4
			parameter_string_t PF0_BAR1_APERTURE_SIZE, // Default: 5'h00
			parameter_string_t PF0_BAR1_CONTROL, // Default: 3'h0
			parameter_string_t PF0_BAR2_APERTURE_SIZE, // Default: 5'h03
			parameter_string_t PF0_BAR2_CONTROL, // Default: 3'h4
			parameter_string_t PF0_BAR3_APERTURE_SIZE, // Default: 5'h03
			parameter_string_t PF0_BAR3_CONTROL, // Default: 3'h0
			parameter_string_t PF0_BAR4_APERTURE_SIZE, // Default: 5'h03
			parameter_string_t PF0_BAR4_CONTROL, // Default: 3'h4
			parameter_string_t PF0_BAR5_APERTURE_SIZE, // Default: 5'h03
			parameter_string_t PF0_BAR5_CONTROL, // Default: 3'h0
			parameter_string_t PF0_BIST_REGISTER, // Default: 8'h00
			parameter_string_t PF0_CAPABILITY_POINTER, // Default: 8'h50
			parameter_string_t PF0_CLASS_CODE, // Default: 24'h000000
			parameter_string_t PF0_DEVICE_ID, // Default: 16'h0000
			parameter_enum_t PF0_DEV_CAP2_128B_CAS_ATOMIC_COMPLETER_SUPPORT, // Default: "TRUE"
			parameter_enum_t PF0_DEV_CAP2_32B_ATOMIC_COMPLETER_SUPPORT, // Default: "TRUE"
			parameter_enum_t PF0_DEV_CAP2_64B_ATOMIC_COMPLETER_SUPPORT, // Default: "TRUE"
			parameter_enum_t PF0_DEV_CAP2_CPL_TIMEOUT_DISABLE, // Default: "TRUE"
			parameter_enum_t PF0_DEV_CAP2_LTR_SUPPORT, // Default: "TRUE"
			parameter_string_t PF0_DEV_CAP2_OBFF_SUPPORT, // Default: 2'h0
			parameter_enum_t PF0_DEV_CAP2_TPH_COMPLETER_SUPPORT, // Default: "FALSE"
			parameter_string_t PF0_DEV_CAP_ENDPOINT_L0S_LATENCY, // Default: 0
			parameter_string_t PF0_DEV_CAP_ENDPOINT_L1_LATENCY, // Default: 0
			parameter_enum_t PF0_DEV_CAP_EXT_TAG_SUPPORTED, // Default: "TRUE"
			parameter_enum_t PF0_DEV_CAP_FUNCTION_LEVEL_RESET_CAPABLE, // Default: "TRUE"
			parameter_string_t PF0_DEV_CAP_MAX_PAYLOAD_SIZE, // Default: 3'h3
			parameter_string_t PF0_DPA_CAP_NEXTPTR, // Default: 12'h000
			parameter_string_t PF0_DPA_CAP_SUB_STATE_CONTROL, // Default: 5'h00
			parameter_enum_t PF0_DPA_CAP_SUB_STATE_CONTROL_EN, // Default: "TRUE"
			parameter_string_t PF0_DPA_CAP_SUB_STATE_POWER_ALLOCATION0, // Default: 8'h00
			parameter_string_t PF0_DPA_CAP_SUB_STATE_POWER_ALLOCATION1, // Default: 8'h00
			parameter_string_t PF0_DPA_CAP_SUB_STATE_POWER_ALLOCATION2, // Default: 8'h00
			parameter_string_t PF0_DPA_CAP_SUB_STATE_POWER_ALLOCATION3, // Default: 8'h00
			parameter_string_t PF0_DPA_CAP_SUB_STATE_POWER_ALLOCATION4, // Default: 8'h00
			parameter_string_t PF0_DPA_CAP_SUB_STATE_POWER_ALLOCATION5, // Default: 8'h00
			parameter_string_t PF0_DPA_CAP_SUB_STATE_POWER_ALLOCATION6, // Default: 8'h00
			parameter_string_t PF0_DPA_CAP_SUB_STATE_POWER_ALLOCATION7, // Default: 8'h00
			parameter_string_t PF0_DPA_CAP_VER, // Default: 4'h1
			parameter_string_t PF0_DSN_CAP_NEXTPTR, // Default: 12'h10C
			parameter_string_t PF0_EXPANSION_ROM_APERTURE_SIZE, // Default: 5'h03
			parameter_enum_t PF0_EXPANSION_ROM_ENABLE, // Default: "FALSE"
			parameter_string_t PF0_INTERRUPT_LINE, // Default: 8'h00
			parameter_string_t PF0_INTERRUPT_PIN, // Default: 3'h1
			parameter_string_t PF0_LINK_CAP_ASPM_SUPPORT, // Default: 0
			parameter_string_t PF0_LINK_CAP_L0S_EXIT_LATENCY_COMCLK_GEN1, // Default: 7
			parameter_string_t PF0_LINK_CAP_L0S_EXIT_LATENCY_COMCLK_GEN2, // Default: 7
			parameter_string_t PF0_LINK_CAP_L0S_EXIT_LATENCY_COMCLK_GEN3, // Default: 7
			parameter_string_t PF0_LINK_CAP_L0S_EXIT_LATENCY_GEN1, // Default: 7
			parameter_string_t PF0_LINK_CAP_L0S_EXIT_LATENCY_GEN2, // Default: 7
			parameter_string_t PF0_LINK_CAP_L0S_EXIT_LATENCY_GEN3, // Default: 7
			parameter_string_t PF0_LINK_CAP_L1_EXIT_LATENCY_COMCLK_GEN1, // Default: 7
			parameter_string_t PF0_LINK_CAP_L1_EXIT_LATENCY_COMCLK_GEN2, // Default: 7
			parameter_string_t PF0_LINK_CAP_L1_EXIT_LATENCY_COMCLK_GEN3, // Default: 7
			parameter_string_t PF0_LINK_CAP_L1_EXIT_LATENCY_GEN1, // Default: 7
			parameter_string_t PF0_LINK_CAP_L1_EXIT_LATENCY_GEN2, // Default: 7
			parameter_string_t PF0_LINK_CAP_L1_EXIT_LATENCY_GEN3, // Default: 7
			parameter_enum_t PF0_LINK_STATUS_SLOT_CLOCK_CONFIG, // Default: "TRUE"
			parameter_string_t PF0_LTR_CAP_MAX_NOSNOOP_LAT, // Default: 10'h000
			parameter_string_t PF0_LTR_CAP_MAX_SNOOP_LAT, // Default: 10'h000
			parameter_string_t PF0_LTR_CAP_NEXTPTR, // Default: 12'h000
			parameter_string_t PF0_LTR_CAP_VER, // Default: 4'h1
			parameter_string_t PF0_MSIX_CAP_NEXTPTR, // Default: 8'h00
			parameter_string_t PF0_MSIX_CAP_PBA_BIR, // Default: 0
			parameter_string_t PF0_MSIX_CAP_PBA_OFFSET, // Default: 29'h00000050
			parameter_string_t PF0_MSIX_CAP_TABLE_BIR, // Default: 0
			parameter_string_t PF0_MSIX_CAP_TABLE_OFFSET, // Default: 29'h00000040
			parameter_string_t PF0_MSIX_CAP_TABLE_SIZE, // Default: 11'h000
			parameter_string_t PF0_MSI_CAP_MULTIMSGCAP, // Default: 0
			parameter_string_t PF0_MSI_CAP_NEXTPTR, // Default: 8'h00
			parameter_string_t PF0_PB_CAP_NEXTPTR, // Default: 12'h000
			parameter_enum_t PF0_PB_CAP_SYSTEM_ALLOCATED, // Default: "FALSE"
			parameter_string_t PF0_PB_CAP_VER, // Default: 4'h1
			parameter_string_t PF0_PM_CAP_ID, // Default: 8'h01
			parameter_string_t PF0_PM_CAP_NEXTPTR, // Default: 8'h00
			parameter_enum_t PF0_PM_CAP_PMESUPPORT_D0, // Default: "TRUE"
			parameter_enum_t PF0_PM_CAP_PMESUPPORT_D1, // Default: "TRUE"
			parameter_enum_t PF0_PM_CAP_PMESUPPORT_D3HOT, // Default: "TRUE"
			parameter_enum_t PF0_PM_CAP_SUPP_D1_STATE, // Default: "TRUE"
			parameter_string_t PF0_PM_CAP_VER_ID, // Default: 3'h3
			parameter_enum_t PF0_PM_CSR_NOSOFTRESET, // Default: "TRUE"
			parameter_enum_t PF0_RBAR_CAP_ENABLE, // Default: "FALSE"
			parameter_string_t PF0_RBAR_CAP_INDEX0, // Default: 3'h0
			parameter_string_t PF0_RBAR_CAP_INDEX1, // Default: 3'h0
			parameter_string_t PF0_RBAR_CAP_INDEX2, // Default: 3'h0
			parameter_string_t PF0_RBAR_CAP_NEXTPTR, // Default: 12'h000
			parameter_string_t PF0_RBAR_CAP_SIZE0, // Default: 20'h00000
			parameter_string_t PF0_RBAR_CAP_SIZE1, // Default: 20'h00000
			parameter_string_t PF0_RBAR_CAP_SIZE2, // Default: 20'h00000
			parameter_string_t PF0_RBAR_CAP_VER, // Default: 4'h1
			parameter_string_t PF0_RBAR_NUM, // Default: 3'h1
			parameter_string_t PF0_REVISION_ID, // Default: 8'h00
			parameter_string_t PF0_SRIOV_BAR0_APERTURE_SIZE, // Default: 5'h03
			parameter_string_t PF0_SRIOV_BAR0_CONTROL, // Default: 3'h4
			parameter_string_t PF0_SRIOV_BAR1_APERTURE_SIZE, // Default: 5'h00
			parameter_string_t PF0_SRIOV_BAR1_CONTROL, // Default: 3'h0
			parameter_string_t PF0_SRIOV_BAR2_APERTURE_SIZE, // Default: 5'h03
			parameter_string_t PF0_SRIOV_BAR2_CONTROL, // Default: 3'h4
			parameter_string_t PF0_SRIOV_BAR3_APERTURE_SIZE, // Default: 5'h03
			parameter_string_t PF0_SRIOV_BAR3_CONTROL, // Default: 3'h0
			parameter_string_t PF0_SRIOV_BAR4_APERTURE_SIZE, // Default: 5'h03
			parameter_string_t PF0_SRIOV_BAR4_CONTROL, // Default: 3'h4
			parameter_string_t PF0_SRIOV_BAR5_APERTURE_SIZE, // Default: 5'h03
			parameter_string_t PF0_SRIOV_BAR5_CONTROL, // Default: 3'h0
			parameter_string_t PF0_SRIOV_CAP_INITIAL_VF, // Default: 16'h0000
			parameter_string_t PF0_SRIOV_CAP_NEXTPTR, // Default: 12'h000
			parameter_string_t PF0_SRIOV_CAP_TOTAL_VF, // Default: 16'h0000
			parameter_string_t PF0_SRIOV_CAP_VER, // Default: 4'h1
			parameter_string_t PF0_SRIOV_FIRST_VF_OFFSET, // Default: 16'h0000
			parameter_string_t PF0_SRIOV_FUNC_DEP_LINK, // Default: 16'h0000
			parameter_string_t PF0_SRIOV_SUPPORTED_PAGE_SIZE, // Default: 32'h00000000
			parameter_string_t PF0_SRIOV_VF_DEVICE_ID, // Default: 16'h0000
			parameter_string_t PF0_SUBSYSTEM_ID, // Default: 16'h0000
			parameter_enum_t PF0_TPHR_CAP_DEV_SPECIFIC_MODE, // Default: "TRUE"
			parameter_enum_t PF0_TPHR_CAP_ENABLE, // Default: "FALSE"
			parameter_enum_t PF0_TPHR_CAP_INT_VEC_MODE, // Default: "TRUE"
			parameter_string_t PF0_TPHR_CAP_NEXTPTR, // Default: 12'h000
			parameter_string_t PF0_TPHR_CAP_ST_MODE_SEL, // Default: 3'h0
			parameter_string_t PF0_TPHR_CAP_ST_TABLE_LOC, // Default: 2'h0
			parameter_string_t PF0_TPHR_CAP_ST_TABLE_SIZE, // Default: 11'h000
			parameter_string_t PF0_TPHR_CAP_VER, // Default: 4'h1
			parameter_string_t PF0_VC_CAP_NEXTPTR, // Default: 12'h000
			parameter_string_t PF0_VC_CAP_VER, // Default: 4'h1
			parameter_enum_t PF1_AER_CAP_ECRC_CHECK_CAPABLE, // Default: "FALSE"
			parameter_enum_t PF1_AER_CAP_ECRC_GEN_CAPABLE, // Default: "FALSE"
			parameter_string_t PF1_AER_CAP_NEXTPTR, // Default: 12'h000
			parameter_string_t PF1_ARI_CAP_NEXTPTR, // Default: 12'h000
			parameter_string_t PF1_ARI_CAP_NEXT_FUNC, // Default: 8'h00
			parameter_string_t PF1_BAR0_APERTURE_SIZE, // Default: 5'h03
			parameter_string_t PF1_BAR0_CONTROL, // Default: 3'h4
			parameter_string_t PF1_BAR1_APERTURE_SIZE, // Default: 5'h00
			parameter_string_t PF1_BAR1_CONTROL, // Default: 3'h0
			parameter_string_t PF1_BAR2_APERTURE_SIZE, // Default: 5'h03
			parameter_string_t PF1_BAR2_CONTROL, // Default: 3'h4
			parameter_string_t PF1_BAR3_APERTURE_SIZE, // Default: 5'h03
			parameter_string_t PF1_BAR3_CONTROL, // Default: 3'h0
			parameter_string_t PF1_BAR4_APERTURE_SIZE, // Default: 5'h03
			parameter_string_t PF1_BAR4_CONTROL, // Default: 3'h4
			parameter_string_t PF1_BAR5_APERTURE_SIZE, // Default: 5'h03
			parameter_string_t PF1_BAR5_CONTROL, // Default: 3'h0
			parameter_string_t PF1_BIST_REGISTER, // Default: 8'h00
			parameter_string_t PF1_CAPABILITY_POINTER, // Default: 8'h50
			parameter_string_t PF1_CLASS_CODE, // Default: 24'h000000
			parameter_string_t PF1_DEVICE_ID, // Default: 16'h0000
			parameter_string_t PF1_DEV_CAP_MAX_PAYLOAD_SIZE, // Default: 3'h3
			parameter_string_t PF1_DPA_CAP_NEXTPTR, // Default: 12'h000
			parameter_string_t PF1_DPA_CAP_SUB_STATE_CONTROL, // Default: 5'h00
			parameter_enum_t PF1_DPA_CAP_SUB_STATE_CONTROL_EN, // Default: "TRUE"
			parameter_string_t PF1_DPA_CAP_SUB_STATE_POWER_ALLOCATION0, // Default: 8'h00
			parameter_string_t PF1_DPA_CAP_SUB_STATE_POWER_ALLOCATION1, // Default: 8'h00
			parameter_string_t PF1_DPA_CAP_SUB_STATE_POWER_ALLOCATION2, // Default: 8'h00
			parameter_string_t PF1_DPA_CAP_SUB_STATE_POWER_ALLOCATION3, // Default: 8'h00
			parameter_string_t PF1_DPA_CAP_SUB_STATE_POWER_ALLOCATION4, // Default: 8'h00
			parameter_string_t PF1_DPA_CAP_SUB_STATE_POWER_ALLOCATION5, // Default: 8'h00
			parameter_string_t PF1_DPA_CAP_SUB_STATE_POWER_ALLOCATION6, // Default: 8'h00
			parameter_string_t PF1_DPA_CAP_SUB_STATE_POWER_ALLOCATION7, // Default: 8'h00
			parameter_string_t PF1_DPA_CAP_VER, // Default: 4'h1
			parameter_string_t PF1_DSN_CAP_NEXTPTR, // Default: 12'h10C
			parameter_string_t PF1_EXPANSION_ROM_APERTURE_SIZE, // Default: 5'h03
			parameter_enum_t PF1_EXPANSION_ROM_ENABLE, // Default: "FALSE"
			parameter_string_t PF1_INTERRUPT_LINE, // Default: 8'h00
			parameter_string_t PF1_INTERRUPT_PIN, // Default: 3'h1
			parameter_string_t PF1_MSIX_CAP_NEXTPTR, // Default: 8'h00
			parameter_string_t PF1_MSIX_CAP_PBA_BIR, // Default: 0
			parameter_string_t PF1_MSIX_CAP_PBA_OFFSET, // Default: 29'h00000050
			parameter_string_t PF1_MSIX_CAP_TABLE_BIR, // Default: 0
			parameter_string_t PF1_MSIX_CAP_TABLE_OFFSET, // Default: 29'h00000040
			parameter_string_t PF1_MSIX_CAP_TABLE_SIZE, // Default: 11'h000
			parameter_string_t PF1_MSI_CAP_MULTIMSGCAP, // Default: 0
			parameter_string_t PF1_MSI_CAP_NEXTPTR, // Default: 8'h00
			parameter_string_t PF1_PB_CAP_NEXTPTR, // Default: 12'h000
			parameter_enum_t PF1_PB_CAP_SYSTEM_ALLOCATED, // Default: "FALSE"
			parameter_string_t PF1_PB_CAP_VER, // Default: 4'h1
			parameter_string_t PF1_PM_CAP_ID, // Default: 8'h01
			parameter_string_t PF1_PM_CAP_NEXTPTR, // Default: 8'h00
			parameter_string_t PF1_PM_CAP_VER_ID, // Default: 3'h3
			parameter_enum_t PF1_RBAR_CAP_ENABLE, // Default: "FALSE"
			parameter_string_t PF1_RBAR_CAP_INDEX0, // Default: 3'h0
			parameter_string_t PF1_RBAR_CAP_INDEX1, // Default: 3'h0
			parameter_string_t PF1_RBAR_CAP_INDEX2, // Default: 3'h0
			parameter_string_t PF1_RBAR_CAP_NEXTPTR, // Default: 12'h000
			parameter_string_t PF1_RBAR_CAP_SIZE0, // Default: 20'h00000
			parameter_string_t PF1_RBAR_CAP_SIZE1, // Default: 20'h00000
			parameter_string_t PF1_RBAR_CAP_SIZE2, // Default: 20'h00000
			parameter_string_t PF1_RBAR_CAP_VER, // Default: 4'h1
			parameter_string_t PF1_RBAR_NUM, // Default: 3'h1
			parameter_string_t PF1_REVISION_ID, // Default: 8'h00
			parameter_string_t PF1_SRIOV_BAR0_APERTURE_SIZE, // Default: 5'h03
			parameter_string_t PF1_SRIOV_BAR0_CONTROL, // Default: 3'h4
			parameter_string_t PF1_SRIOV_BAR1_APERTURE_SIZE, // Default: 5'h00
			parameter_string_t PF1_SRIOV_BAR1_CONTROL, // Default: 3'h0
			parameter_string_t PF1_SRIOV_BAR2_APERTURE_SIZE, // Default: 5'h03
			parameter_string_t PF1_SRIOV_BAR2_CONTROL, // Default: 3'h4
			parameter_string_t PF1_SRIOV_BAR3_APERTURE_SIZE, // Default: 5'h03
			parameter_string_t PF1_SRIOV_BAR3_CONTROL, // Default: 3'h0
			parameter_string_t PF1_SRIOV_BAR4_APERTURE_SIZE, // Default: 5'h03
			parameter_string_t PF1_SRIOV_BAR4_CONTROL, // Default: 3'h4
			parameter_string_t PF1_SRIOV_BAR5_APERTURE_SIZE, // Default: 5'h03
			parameter_string_t PF1_SRIOV_BAR5_CONTROL, // Default: 3'h0
			parameter_string_t PF1_SRIOV_CAP_INITIAL_VF, // Default: 16'h0000
			parameter_string_t PF1_SRIOV_CAP_NEXTPTR, // Default: 12'h000
			parameter_string_t PF1_SRIOV_CAP_TOTAL_VF, // Default: 16'h0000
			parameter_string_t PF1_SRIOV_CAP_VER, // Default: 4'h1
			parameter_string_t PF1_SRIOV_FIRST_VF_OFFSET, // Default: 16'h0000
			parameter_string_t PF1_SRIOV_FUNC_DEP_LINK, // Default: 16'h0000
			parameter_string_t PF1_SRIOV_SUPPORTED_PAGE_SIZE, // Default: 32'h00000000
			parameter_string_t PF1_SRIOV_VF_DEVICE_ID, // Default: 16'h0000
			parameter_string_t PF1_SUBSYSTEM_ID, // Default: 16'h0000
			parameter_enum_t PF1_TPHR_CAP_DEV_SPECIFIC_MODE, // Default: "TRUE"
			parameter_enum_t PF1_TPHR_CAP_ENABLE, // Default: "FALSE"
			parameter_enum_t PF1_TPHR_CAP_INT_VEC_MODE, // Default: "TRUE"
			parameter_string_t PF1_TPHR_CAP_NEXTPTR, // Default: 12'h000
			parameter_string_t PF1_TPHR_CAP_ST_MODE_SEL, // Default: 3'h0
			parameter_string_t PF1_TPHR_CAP_ST_TABLE_LOC, // Default: 2'h0
			parameter_string_t PF1_TPHR_CAP_ST_TABLE_SIZE, // Default: 11'h000
			parameter_string_t PF1_TPHR_CAP_VER, // Default: 4'h1
			parameter_enum_t PL_DISABLE_EI_INFER_IN_L0, // Default: "FALSE"
			parameter_enum_t PL_DISABLE_GEN3_DC_BALANCE, // Default: "FALSE"
			parameter_enum_t PL_DISABLE_SCRAMBLING, // Default: "FALSE"
			parameter_enum_t PL_DISABLE_UPCONFIG_CAPABLE, // Default: "FALSE"
			parameter_enum_t PL_EQ_ADAPT_DISABLE_COEFF_CHECK, // Default: "FALSE"
			parameter_enum_t PL_EQ_ADAPT_DISABLE_PRESET_CHECK, // Default: "FALSE"
			parameter_string_t PL_EQ_ADAPT_ITER_COUNT, // Default: 5'h02
			parameter_string_t PL_EQ_ADAPT_REJECT_RETRY_COUNT, // Default: 2'h1
			parameter_enum_t PL_EQ_BYPASS_PHASE23, // Default: "FALSE"
			parameter_enum_t PL_EQ_SHORT_ADAPT_PHASE, // Default: "FALSE"
			parameter_string_t PL_LANE0_EQ_CONTROL, // Default: 16'h3F00
			parameter_string_t PL_LANE1_EQ_CONTROL, // Default: 16'h3F00
			parameter_string_t PL_LANE2_EQ_CONTROL, // Default: 16'h3F00
			parameter_string_t PL_LANE3_EQ_CONTROL, // Default: 16'h3F00
			parameter_string_t PL_LANE4_EQ_CONTROL, // Default: 16'h3F00
			parameter_string_t PL_LANE5_EQ_CONTROL, // Default: 16'h3F00
			parameter_string_t PL_LANE6_EQ_CONTROL, // Default: 16'h3F00
			parameter_string_t PL_LANE7_EQ_CONTROL, // Default: 16'h3F00
			parameter_string_t PL_LINK_CAP_MAX_LINK_SPEED, // Default: 3'h4
			parameter_string_t PL_LINK_CAP_MAX_LINK_WIDTH, // Default: 4'h8
			parameter_string_t PL_N_FTS_COMCLK_GEN1, // Default: 255
			parameter_string_t PL_N_FTS_COMCLK_GEN2, // Default: 255
			parameter_string_t PL_N_FTS_COMCLK_GEN3, // Default: 255
			parameter_string_t PL_N_FTS_GEN1, // Default: 255
			parameter_string_t PL_N_FTS_GEN2, // Default: 255
			parameter_string_t PL_N_FTS_GEN3, // Default: 255
			parameter_enum_t PL_SIM_FAST_LINK_TRAINING, // Default: "FALSE"
			parameter_enum_t PL_UPSTREAM_FACING, // Default: "TRUE"
			parameter_string_t PM_ASPML0S_TIMEOUT, // Default: 16'h05DC
			parameter_string_t PM_ASPML1_ENTRY_DELAY, // Default: 20'h00000
			parameter_enum_t PM_ENABLE_SLOT_POWER_CAPTURE, // Default: "TRUE"
			parameter_string_t PM_L1_REENTRY_DELAY, // Default: 32'h00000000
			parameter_string_t PM_PME_SERVICE_TIMEOUT_DELAY, // Default: 20'h186A0
			parameter_string_t PM_PME_TURNOFF_ACK_DELAY, // Default: 16'h0064
			parameter_string_t SIM_VERSION, // Default: "1.0"
			parameter_string_t SPARE_BIT0, // Default: 0
			parameter_string_t SPARE_BIT1, // Default: 0
			parameter_string_t SPARE_BIT2, // Default: 0
			parameter_string_t SPARE_BIT3, // Default: 0
			parameter_string_t SPARE_BIT4, // Default: 0
			parameter_string_t SPARE_BIT5, // Default: 0
			parameter_string_t SPARE_BIT6, // Default: 0
			parameter_string_t SPARE_BIT7, // Default: 0
			parameter_string_t SPARE_BIT8, // Default: 0
			parameter_string_t SPARE_BYTE0, // Default: 8'h00
			parameter_string_t SPARE_BYTE1, // Default: 8'h00
			parameter_string_t SPARE_BYTE2, // Default: 8'h00
			parameter_string_t SPARE_BYTE3, // Default: 8'h00
			parameter_string_t SPARE_WORD0, // Default: 32'h00000000
			parameter_string_t SPARE_WORD1, // Default: 32'h00000000
			parameter_string_t SPARE_WORD2, // Default: 32'h00000000
			parameter_string_t SPARE_WORD3, // Default: 32'h00000000
			parameter_enum_t SRIOV_CAP_ENABLE, // Default: "FALSE"
			parameter_string_t TL_COMPL_TIMEOUT_REG0, // Default: 24'hBEBC20
			parameter_string_t TL_COMPL_TIMEOUT_REG1, // Default: 28'h0000000
			parameter_string_t TL_CREDITS_CD, // Default: 12'h3E0
			parameter_string_t TL_CREDITS_CH, // Default: 8'h20
			parameter_string_t TL_CREDITS_NPD, // Default: 12'h028
			parameter_string_t TL_CREDITS_NPH, // Default: 8'h20
			parameter_string_t TL_CREDITS_PD, // Default: 12'h198
			parameter_string_t TL_CREDITS_PH, // Default: 8'h20
			parameter_enum_t TL_ENABLE_MESSAGE_RID_CHECK_ENABLE, // Default: "TRUE"
			parameter_enum_t TL_EXTENDED_CFG_EXTEND_INTERFACE_ENABLE, // Default: "FALSE"
			parameter_enum_t TL_LEGACY_CFG_EXTEND_INTERFACE_ENABLE, // Default: "FALSE"
			parameter_enum_t TL_LEGACY_MODE_ENABLE, // Default: "FALSE"
			parameter_enum_t TL_PF_ENABLE_REG, // Default: "FALSE"
			parameter_enum_t TL_TAG_MGMT_ENABLE, // Default: "TRUE"
			parameter_string_t VF0_ARI_CAP_NEXTPTR, // Default: 12'h000
			parameter_string_t VF0_CAPABILITY_POINTER, // Default: 8'h50
			parameter_string_t VF0_MSIX_CAP_PBA_BIR, // Default: 0
			parameter_string_t VF0_MSIX_CAP_PBA_OFFSET, // Default: 29'h00000050
			parameter_string_t VF0_MSIX_CAP_TABLE_BIR, // Default: 0
			parameter_string_t VF0_MSIX_CAP_TABLE_OFFSET, // Default: 29'h00000040
			parameter_string_t VF0_MSIX_CAP_TABLE_SIZE, // Default: 11'h000
			parameter_string_t VF0_MSI_CAP_MULTIMSGCAP, // Default: 0
			parameter_string_t VF0_PM_CAP_ID, // Default: 8'h01
			parameter_string_t VF0_PM_CAP_NEXTPTR, // Default: 8'h00
			parameter_string_t VF0_PM_CAP_VER_ID, // Default: 3'h3
			parameter_enum_t VF0_TPHR_CAP_DEV_SPECIFIC_MODE, // Default: "TRUE"
			parameter_enum_t VF0_TPHR_CAP_ENABLE, // Default: "FALSE"
			parameter_enum_t VF0_TPHR_CAP_INT_VEC_MODE, // Default: "TRUE"
			parameter_string_t VF0_TPHR_CAP_NEXTPTR, // Default: 12'h000
			parameter_string_t VF0_TPHR_CAP_ST_MODE_SEL, // Default: 3'h0
			parameter_string_t VF0_TPHR_CAP_ST_TABLE_LOC, // Default: 2'h0
			parameter_string_t VF0_TPHR_CAP_ST_TABLE_SIZE, // Default: 11'h000
			parameter_string_t VF0_TPHR_CAP_VER, // Default: 4'h1
			parameter_string_t VF1_ARI_CAP_NEXTPTR, // Default: 12'h000
			parameter_string_t VF1_MSIX_CAP_PBA_BIR, // Default: 0
			parameter_string_t VF1_MSIX_CAP_PBA_OFFSET, // Default: 29'h00000050
			parameter_string_t VF1_MSIX_CAP_TABLE_BIR, // Default: 0
			parameter_string_t VF1_MSIX_CAP_TABLE_OFFSET, // Default: 29'h00000040
			parameter_string_t VF1_MSIX_CAP_TABLE_SIZE, // Default: 11'h000
			parameter_string_t VF1_MSI_CAP_MULTIMSGCAP, // Default: 0
			parameter_string_t VF1_PM_CAP_ID, // Default: 8'h01
			parameter_string_t VF1_PM_CAP_NEXTPTR, // Default: 8'h00
			parameter_string_t VF1_PM_CAP_VER_ID, // Default: 3'h3
			parameter_enum_t VF1_TPHR_CAP_DEV_SPECIFIC_MODE, // Default: "TRUE"
			parameter_enum_t VF1_TPHR_CAP_ENABLE, // Default: "FALSE"
			parameter_enum_t VF1_TPHR_CAP_INT_VEC_MODE, // Default: "TRUE"
			parameter_string_t VF1_TPHR_CAP_NEXTPTR, // Default: 12'h000
			parameter_string_t VF1_TPHR_CAP_ST_MODE_SEL, // Default: 3'h0
			parameter_string_t VF1_TPHR_CAP_ST_TABLE_LOC, // Default: 2'h0
			parameter_string_t VF1_TPHR_CAP_ST_TABLE_SIZE, // Default: 11'h000
			parameter_string_t VF1_TPHR_CAP_VER, // Default: 4'h1
			parameter_string_t VF2_ARI_CAP_NEXTPTR, // Default: 12'h000
			parameter_string_t VF2_MSIX_CAP_PBA_BIR, // Default: 0
			parameter_string_t VF2_MSIX_CAP_PBA_OFFSET, // Default: 29'h00000050
			parameter_string_t VF2_MSIX_CAP_TABLE_BIR, // Default: 0
			parameter_string_t VF2_MSIX_CAP_TABLE_OFFSET, // Default: 29'h00000040
			parameter_string_t VF2_MSIX_CAP_TABLE_SIZE, // Default: 11'h000
			parameter_string_t VF2_MSI_CAP_MULTIMSGCAP, // Default: 0
			parameter_string_t VF2_PM_CAP_ID, // Default: 8'h01
			parameter_string_t VF2_PM_CAP_NEXTPTR, // Default: 8'h00
			parameter_string_t VF2_PM_CAP_VER_ID, // Default: 3'h3
			parameter_enum_t VF2_TPHR_CAP_DEV_SPECIFIC_MODE, // Default: "TRUE"
			parameter_enum_t VF2_TPHR_CAP_ENABLE, // Default: "FALSE"
			parameter_enum_t VF2_TPHR_CAP_INT_VEC_MODE, // Default: "TRUE"
			parameter_string_t VF2_TPHR_CAP_NEXTPTR, // Default: 12'h000
			parameter_string_t VF2_TPHR_CAP_ST_MODE_SEL, // Default: 3'h0
			parameter_string_t VF2_TPHR_CAP_ST_TABLE_LOC, // Default: 2'h0
			parameter_string_t VF2_TPHR_CAP_ST_TABLE_SIZE, // Default: 11'h000
			parameter_string_t VF2_TPHR_CAP_VER, // Default: 4'h1
			parameter_string_t VF3_ARI_CAP_NEXTPTR, // Default: 12'h000
			parameter_string_t VF3_MSIX_CAP_PBA_BIR, // Default: 0
			parameter_string_t VF3_MSIX_CAP_PBA_OFFSET, // Default: 29'h00000050
			parameter_string_t VF3_MSIX_CAP_TABLE_BIR, // Default: 0
			parameter_string_t VF3_MSIX_CAP_TABLE_OFFSET, // Default: 29'h00000040
			parameter_string_t VF3_MSIX_CAP_TABLE_SIZE, // Default: 11'h000
			parameter_string_t VF3_MSI_CAP_MULTIMSGCAP, // Default: 0
			parameter_string_t VF3_PM_CAP_ID, // Default: 8'h01
			parameter_string_t VF3_PM_CAP_NEXTPTR, // Default: 8'h00
			parameter_string_t VF3_PM_CAP_VER_ID, // Default: 3'h3
			parameter_enum_t VF3_TPHR_CAP_DEV_SPECIFIC_MODE, // Default: "TRUE"
			parameter_enum_t VF3_TPHR_CAP_ENABLE, // Default: "FALSE"
			parameter_enum_t VF3_TPHR_CAP_INT_VEC_MODE, // Default: "TRUE"
			parameter_string_t VF3_TPHR_CAP_NEXTPTR, // Default: 12'h000
			parameter_string_t VF3_TPHR_CAP_ST_MODE_SEL, // Default: 3'h0
			parameter_string_t VF3_TPHR_CAP_ST_TABLE_LOC, // Default: 2'h0
			parameter_string_t VF3_TPHR_CAP_ST_TABLE_SIZE, // Default: 11'h000
			parameter_string_t VF3_TPHR_CAP_VER, // Default: 4'h1
			parameter_string_t VF4_ARI_CAP_NEXTPTR, // Default: 12'h000
			parameter_string_t VF4_MSIX_CAP_PBA_BIR, // Default: 0
			parameter_string_t VF4_MSIX_CAP_PBA_OFFSET, // Default: 29'h00000050
			parameter_string_t VF4_MSIX_CAP_TABLE_BIR, // Default: 0
			parameter_string_t VF4_MSIX_CAP_TABLE_OFFSET, // Default: 29'h00000040
			parameter_string_t VF4_MSIX_CAP_TABLE_SIZE, // Default: 11'h000
			parameter_string_t VF4_MSI_CAP_MULTIMSGCAP, // Default: 0
			parameter_string_t VF4_PM_CAP_ID, // Default: 8'h01
			parameter_string_t VF4_PM_CAP_NEXTPTR, // Default: 8'h00
			parameter_string_t VF4_PM_CAP_VER_ID, // Default: 3'h3
			parameter_enum_t VF4_TPHR_CAP_DEV_SPECIFIC_MODE, // Default: "TRUE"
			parameter_enum_t VF4_TPHR_CAP_ENABLE, // Default: "FALSE"
			parameter_enum_t VF4_TPHR_CAP_INT_VEC_MODE, // Default: "TRUE"
			parameter_string_t VF4_TPHR_CAP_NEXTPTR, // Default: 12'h000
			parameter_string_t VF4_TPHR_CAP_ST_MODE_SEL, // Default: 3'h0
			parameter_string_t VF4_TPHR_CAP_ST_TABLE_LOC, // Default: 2'h0
			parameter_string_t VF4_TPHR_CAP_ST_TABLE_SIZE, // Default: 11'h000
			parameter_string_t VF4_TPHR_CAP_VER, // Default: 4'h1
			parameter_string_t VF5_ARI_CAP_NEXTPTR, // Default: 12'h000
			parameter_string_t VF5_MSIX_CAP_PBA_BIR, // Default: 0
			parameter_string_t VF5_MSIX_CAP_PBA_OFFSET, // Default: 29'h00000050
			parameter_string_t VF5_MSIX_CAP_TABLE_BIR, // Default: 0
			parameter_string_t VF5_MSIX_CAP_TABLE_OFFSET, // Default: 29'h00000040
			parameter_string_t VF5_MSIX_CAP_TABLE_SIZE, // Default: 11'h000
			parameter_string_t VF5_MSI_CAP_MULTIMSGCAP, // Default: 0
			parameter_string_t VF5_PM_CAP_ID, // Default: 8'h01
			parameter_string_t VF5_PM_CAP_NEXTPTR, // Default: 8'h00
			parameter_string_t VF5_PM_CAP_VER_ID, // Default: 3'h3
			parameter_enum_t VF5_TPHR_CAP_DEV_SPECIFIC_MODE, // Default: "TRUE"
			parameter_enum_t VF5_TPHR_CAP_ENABLE, // Default: "FALSE"
			parameter_enum_t VF5_TPHR_CAP_INT_VEC_MODE, // Default: "TRUE"
			parameter_string_t VF5_TPHR_CAP_NEXTPTR, // Default: 12'h000
			parameter_string_t VF5_TPHR_CAP_ST_MODE_SEL, // Default: 3'h0
			parameter_string_t VF5_TPHR_CAP_ST_TABLE_LOC, // Default: 2'h0
			parameter_string_t VF5_TPHR_CAP_ST_TABLE_SIZE, // Default: 11'h000
			parameter_string_t VF5_TPHR_CAP_VER, // Default: 4'h1
			//Verilog Ports in definition order:
			NetFlow* CFGCURRENTSPEED, // net ID: CFGCURRENTSPEED lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDPASUBSTATECHANGE, // net ID: CFGDPASUBSTATECHANGE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGERRCOROUT, // net ID: CFGERRCOROUT lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGERRFATALOUT, // net ID: CFGERRFATALOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGERRNONFATALOUT, // net ID: CFGERRNONFATALOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGEXTFUNCTIONNUMBER, // net ID: CFGEXTFUNCTIONNUMBER lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGEXTREADRECEIVED, // net ID: CFGEXTREADRECEIVED lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGEXTREGISTERNUMBER, // net ID: CFGEXTREGISTERNUMBER lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGEXTWRITEBYTEENABLE, // net ID: CFGEXTWRITEBYTEENABLE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGEXTWRITEDATA, // net ID: CFGEXTWRITEDATA lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGEXTWRITERECEIVED, // net ID: CFGEXTWRITERECEIVED lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGFCCPLD, // net ID: CFGFCCPLD lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGFCCPLH, // net ID: CFGFCCPLH lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGFCNPD, // net ID: CFGFCNPD lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGFCNPH, // net ID: CFGFCNPH lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGFCPD, // net ID: CFGFCPD lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGFCPH, // net ID: CFGFCPH lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGFLRINPROCESS, // net ID: CFGFLRINPROCESS lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGFUNCTIONPOWERSTATE, // net ID: CFGFUNCTIONPOWERSTATE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGFUNCTIONSTATUS, // net ID: CFGFUNCTIONSTATUS lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGHOTRESETOUT, // net ID: CFGHOTRESETOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGINPUTUPDATEDONE, // net ID: CFGINPUTUPDATEDONE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGINTERRUPTAOUTPUT, // net ID: CFGINTERRUPTAOUTPUT lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGINTERRUPTBOUTPUT, // net ID: CFGINTERRUPTBOUTPUT lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGINTERRUPTCOUTPUT, // net ID: CFGINTERRUPTCOUTPUT lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGINTERRUPTDOUTPUT, // net ID: CFGINTERRUPTDOUTPUT lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGINTERRUPTMSIDATA, // net ID: CFGINTERRUPTMSIDATA lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGINTERRUPTMSIENABLE, // net ID: CFGINTERRUPTMSIENABLE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGINTERRUPTMSIFAIL, // net ID: CFGINTERRUPTMSIFAIL lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGINTERRUPTMSIMASKUPDATE, // net ID: CFGINTERRUPTMSIMASKUPDATE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGINTERRUPTMSIMMENABLE, // net ID: CFGINTERRUPTMSIMMENABLE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGINTERRUPTMSISENT, // net ID: CFGINTERRUPTMSISENT lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGINTERRUPTMSIVFENABLE, // net ID: CFGINTERRUPTMSIVFENABLE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGINTERRUPTMSIXENABLE, // net ID: CFGINTERRUPTMSIXENABLE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGINTERRUPTMSIXFAIL, // net ID: CFGINTERRUPTMSIXFAIL lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGINTERRUPTMSIXMASK, // net ID: CFGINTERRUPTMSIXMASK lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGINTERRUPTMSIXSENT, // net ID: CFGINTERRUPTMSIXSENT lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGINTERRUPTMSIXVFENABLE, // net ID: CFGINTERRUPTMSIXVFENABLE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGINTERRUPTMSIXVFMASK, // net ID: CFGINTERRUPTMSIXVFMASK lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGINTERRUPTSENT, // net ID: CFGINTERRUPTSENT lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGLINKPOWERSTATE, // net ID: CFGLINKPOWERSTATE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGLOCALERROR, // net ID: CFGLOCALERROR lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGLTRENABLE, // net ID: CFGLTRENABLE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGLTSSMSTATE, // net ID: CFGLTSSMSTATE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGMAXPAYLOAD, // net ID: CFGMAXPAYLOAD lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGMAXREADREQ, // net ID: CFGMAXREADREQ lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGMCUPDATEDONE, // net ID: CFGMCUPDATEDONE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGMGMTREADDATA, // net ID: CFGMGMTREADDATA lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGMGMTREADWRITEDONE, // net ID: CFGMGMTREADWRITEDONE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGMSGRECEIVED, // net ID: CFGMSGRECEIVED lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGMSGRECEIVEDDATA, // net ID: CFGMSGRECEIVEDDATA lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGMSGRECEIVEDTYPE, // net ID: CFGMSGRECEIVEDTYPE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGMSGTRANSMITDONE, // net ID: CFGMSGTRANSMITDONE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGNEGOTIATEDWIDTH, // net ID: CFGNEGOTIATEDWIDTH lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGOBFFENABLE, // net ID: CFGOBFFENABLE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGPERFUNCSTATUSDATA, // net ID: CFGPERFUNCSTATUSDATA lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGPERFUNCTIONUPDATEDONE, // net ID: CFGPERFUNCTIONUPDATEDONE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGPHYLINKDOWN, // net ID: CFGPHYLINKDOWN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGPHYLINKSTATUS, // net ID: CFGPHYLINKSTATUS lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGPLSTATUSCHANGE, // net ID: CFGPLSTATUSCHANGE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGPOWERSTATECHANGEINTERRUPT, // net ID: CFGPOWERSTATECHANGEINTERRUPT lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGRCBSTATUS, // net ID: CFGRCBSTATUS lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGTPHFUNCTIONNUM, // net ID: CFGTPHFUNCTIONNUM lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGTPHREQUESTERENABLE, // net ID: CFGTPHREQUESTERENABLE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGTPHSTMODE, // net ID: CFGTPHSTMODE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGTPHSTTADDRESS, // net ID: CFGTPHSTTADDRESS lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGTPHSTTREADENABLE, // net ID: CFGTPHSTTREADENABLE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGTPHSTTWRITEBYTEVALID, // net ID: CFGTPHSTTWRITEBYTEVALID lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGTPHSTTWRITEDATA, // net ID: CFGTPHSTTWRITEDATA lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGTPHSTTWRITEENABLE, // net ID: CFGTPHSTTWRITEENABLE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGVFFLRINPROCESS, // net ID: CFGVFFLRINPROCESS lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGVFPOWERSTATE, // net ID: CFGVFPOWERSTATE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGVFSTATUS, // net ID: CFGVFSTATUS lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGVFTPHREQUESTERENABLE, // net ID: CFGVFTPHREQUESTERENABLE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGVFTPHSTMODE, // net ID: CFGVFTPHSTMODE lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGDATAOUT, // net ID: DBGDATAOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* DRPDO, // net ID: DRPDO lsb: 0  msb: 0 OUTPUT
			NetFlow* DRPRDY, // net ID: DRPRDY lsb: 0  msb: 0 OUTPUT
			NetFlow* MAXISCQTDATA, // net ID: MAXISCQTDATA lsb: 0  msb: 0 OUTPUT
			NetFlow* MAXISCQTKEEP, // net ID: MAXISCQTKEEP lsb: 0  msb: 0 OUTPUT
			NetFlow* MAXISCQTLAST, // net ID: MAXISCQTLAST lsb: 0  msb: 0 OUTPUT
			NetFlow* MAXISCQTUSER, // net ID: MAXISCQTUSER lsb: 0  msb: 0 OUTPUT
			NetFlow* MAXISCQTVALID, // net ID: MAXISCQTVALID lsb: 0  msb: 0 OUTPUT
			NetFlow* MAXISRCTDATA, // net ID: MAXISRCTDATA lsb: 0  msb: 0 OUTPUT
			NetFlow* MAXISRCTKEEP, // net ID: MAXISRCTKEEP lsb: 0  msb: 0 OUTPUT
			NetFlow* MAXISRCTLAST, // net ID: MAXISRCTLAST lsb: 0  msb: 0 OUTPUT
			NetFlow* MAXISRCTUSER, // net ID: MAXISRCTUSER lsb: 0  msb: 0 OUTPUT
			NetFlow* MAXISRCTVALID, // net ID: MAXISRCTVALID lsb: 0  msb: 0 OUTPUT
			NetFlow* MICOMPLETIONRAMREADADDRESSAL, // net ID: MICOMPLETIONRAMREADADDRESSAL lsb: 0  msb: 0 OUTPUT
			NetFlow* MICOMPLETIONRAMREADADDRESSAU, // net ID: MICOMPLETIONRAMREADADDRESSAU lsb: 0  msb: 0 OUTPUT
			NetFlow* MICOMPLETIONRAMREADADDRESSBL, // net ID: MICOMPLETIONRAMREADADDRESSBL lsb: 0  msb: 0 OUTPUT
			NetFlow* MICOMPLETIONRAMREADADDRESSBU, // net ID: MICOMPLETIONRAMREADADDRESSBU lsb: 0  msb: 0 OUTPUT
			NetFlow* MICOMPLETIONRAMREADENABLEL, // net ID: MICOMPLETIONRAMREADENABLEL lsb: 0  msb: 0 OUTPUT
			NetFlow* MICOMPLETIONRAMREADENABLEU, // net ID: MICOMPLETIONRAMREADENABLEU lsb: 0  msb: 0 OUTPUT
			NetFlow* MICOMPLETIONRAMWRITEADDRESSAL, // net ID: MICOMPLETIONRAMWRITEADDRESSAL lsb: 0  msb: 0 OUTPUT
			NetFlow* MICOMPLETIONRAMWRITEADDRESSAU, // net ID: MICOMPLETIONRAMWRITEADDRESSAU lsb: 0  msb: 0 OUTPUT
			NetFlow* MICOMPLETIONRAMWRITEADDRESSBL, // net ID: MICOMPLETIONRAMWRITEADDRESSBL lsb: 0  msb: 0 OUTPUT
			NetFlow* MICOMPLETIONRAMWRITEADDRESSBU, // net ID: MICOMPLETIONRAMWRITEADDRESSBU lsb: 0  msb: 0 OUTPUT
			NetFlow* MICOMPLETIONRAMWRITEDATAL, // net ID: MICOMPLETIONRAMWRITEDATAL lsb: 0  msb: 0 OUTPUT
			NetFlow* MICOMPLETIONRAMWRITEDATAU, // net ID: MICOMPLETIONRAMWRITEDATAU lsb: 0  msb: 0 OUTPUT
			NetFlow* MICOMPLETIONRAMWRITEENABLEL, // net ID: MICOMPLETIONRAMWRITEENABLEL lsb: 0  msb: 0 OUTPUT
			NetFlow* MICOMPLETIONRAMWRITEENABLEU, // net ID: MICOMPLETIONRAMWRITEENABLEU lsb: 0  msb: 0 OUTPUT
			NetFlow* MIREPLAYRAMADDRESS, // net ID: MIREPLAYRAMADDRESS lsb: 0  msb: 0 OUTPUT
			NetFlow* MIREPLAYRAMREADENABLE, // net ID: MIREPLAYRAMREADENABLE lsb: 0  msb: 0 OUTPUT
			NetFlow* MIREPLAYRAMWRITEDATA, // net ID: MIREPLAYRAMWRITEDATA lsb: 0  msb: 0 OUTPUT
			NetFlow* MIREPLAYRAMWRITEENABLE, // net ID: MIREPLAYRAMWRITEENABLE lsb: 0  msb: 0 OUTPUT
			NetFlow* MIREQUESTRAMREADADDRESSA, // net ID: MIREQUESTRAMREADADDRESSA lsb: 0  msb: 0 OUTPUT
			NetFlow* MIREQUESTRAMREADADDRESSB, // net ID: MIREQUESTRAMREADADDRESSB lsb: 0  msb: 0 OUTPUT
			NetFlow* MIREQUESTRAMREADENABLE, // net ID: MIREQUESTRAMREADENABLE lsb: 0  msb: 0 OUTPUT
			NetFlow* MIREQUESTRAMWRITEADDRESSA, // net ID: MIREQUESTRAMWRITEADDRESSA lsb: 0  msb: 0 OUTPUT
			NetFlow* MIREQUESTRAMWRITEADDRESSB, // net ID: MIREQUESTRAMWRITEADDRESSB lsb: 0  msb: 0 OUTPUT
			NetFlow* MIREQUESTRAMWRITEDATA, // net ID: MIREQUESTRAMWRITEDATA lsb: 0  msb: 0 OUTPUT
			NetFlow* MIREQUESTRAMWRITEENABLE, // net ID: MIREQUESTRAMWRITEENABLE lsb: 0  msb: 0 OUTPUT
			NetFlow* PCIECQNPREQCOUNT, // net ID: PCIECQNPREQCOUNT lsb: 0  msb: 0 OUTPUT
			NetFlow* PCIERQSEQNUM, // net ID: PCIERQSEQNUM lsb: 0  msb: 0 OUTPUT
			NetFlow* PCIERQSEQNUMVLD, // net ID: PCIERQSEQNUMVLD lsb: 0  msb: 0 OUTPUT
			NetFlow* PCIERQTAG, // net ID: PCIERQTAG lsb: 0  msb: 0 OUTPUT
			NetFlow* PCIERQTAGAV, // net ID: PCIERQTAGAV lsb: 0  msb: 0 OUTPUT
			NetFlow* PCIERQTAGVLD, // net ID: PCIERQTAGVLD lsb: 0  msb: 0 OUTPUT
			NetFlow* PCIETFCNPDAV, // net ID: PCIETFCNPDAV lsb: 0  msb: 0 OUTPUT
			NetFlow* PCIETFCNPHAV, // net ID: PCIETFCNPHAV lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX0EQCONTROL, // net ID: PIPERX0EQCONTROL lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX0EQLPLFFS, // net ID: PIPERX0EQLPLFFS lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX0EQLPTXPRESET, // net ID: PIPERX0EQLPTXPRESET lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX0EQPRESET, // net ID: PIPERX0EQPRESET lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX0POLARITY, // net ID: PIPERX0POLARITY lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX1EQCONTROL, // net ID: PIPERX1EQCONTROL lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX1EQLPLFFS, // net ID: PIPERX1EQLPLFFS lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX1EQLPTXPRESET, // net ID: PIPERX1EQLPTXPRESET lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX1EQPRESET, // net ID: PIPERX1EQPRESET lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX1POLARITY, // net ID: PIPERX1POLARITY lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX2EQCONTROL, // net ID: PIPERX2EQCONTROL lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX2EQLPLFFS, // net ID: PIPERX2EQLPLFFS lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX2EQLPTXPRESET, // net ID: PIPERX2EQLPTXPRESET lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX2EQPRESET, // net ID: PIPERX2EQPRESET lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX2POLARITY, // net ID: PIPERX2POLARITY lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX3EQCONTROL, // net ID: PIPERX3EQCONTROL lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX3EQLPLFFS, // net ID: PIPERX3EQLPLFFS lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX3EQLPTXPRESET, // net ID: PIPERX3EQLPTXPRESET lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX3EQPRESET, // net ID: PIPERX3EQPRESET lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX3POLARITY, // net ID: PIPERX3POLARITY lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX4EQCONTROL, // net ID: PIPERX4EQCONTROL lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX4EQLPLFFS, // net ID: PIPERX4EQLPLFFS lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX4EQLPTXPRESET, // net ID: PIPERX4EQLPTXPRESET lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX4EQPRESET, // net ID: PIPERX4EQPRESET lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX4POLARITY, // net ID: PIPERX4POLARITY lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX5EQCONTROL, // net ID: PIPERX5EQCONTROL lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX5EQLPLFFS, // net ID: PIPERX5EQLPLFFS lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX5EQLPTXPRESET, // net ID: PIPERX5EQLPTXPRESET lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX5EQPRESET, // net ID: PIPERX5EQPRESET lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX5POLARITY, // net ID: PIPERX5POLARITY lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX6EQCONTROL, // net ID: PIPERX6EQCONTROL lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX6EQLPLFFS, // net ID: PIPERX6EQLPLFFS lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX6EQLPTXPRESET, // net ID: PIPERX6EQLPTXPRESET lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX6EQPRESET, // net ID: PIPERX6EQPRESET lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX6POLARITY, // net ID: PIPERX6POLARITY lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX7EQCONTROL, // net ID: PIPERX7EQCONTROL lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX7EQLPLFFS, // net ID: PIPERX7EQLPLFFS lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX7EQLPTXPRESET, // net ID: PIPERX7EQLPTXPRESET lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX7EQPRESET, // net ID: PIPERX7EQPRESET lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX7POLARITY, // net ID: PIPERX7POLARITY lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX0CHARISK, // net ID: PIPETX0CHARISK lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX0COMPLIANCE, // net ID: PIPETX0COMPLIANCE lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX0DATA, // net ID: PIPETX0DATA lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX0DATAVALID, // net ID: PIPETX0DATAVALID lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX0ELECIDLE, // net ID: PIPETX0ELECIDLE lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX0EQCONTROL, // net ID: PIPETX0EQCONTROL lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX0EQDEEMPH, // net ID: PIPETX0EQDEEMPH lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX0EQPRESET, // net ID: PIPETX0EQPRESET lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX0POWERDOWN, // net ID: PIPETX0POWERDOWN lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX0STARTBLOCK, // net ID: PIPETX0STARTBLOCK lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX0SYNCHEADER, // net ID: PIPETX0SYNCHEADER lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX1CHARISK, // net ID: PIPETX1CHARISK lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX1COMPLIANCE, // net ID: PIPETX1COMPLIANCE lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX1DATA, // net ID: PIPETX1DATA lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX1DATAVALID, // net ID: PIPETX1DATAVALID lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX1ELECIDLE, // net ID: PIPETX1ELECIDLE lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX1EQCONTROL, // net ID: PIPETX1EQCONTROL lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX1EQDEEMPH, // net ID: PIPETX1EQDEEMPH lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX1EQPRESET, // net ID: PIPETX1EQPRESET lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX1POWERDOWN, // net ID: PIPETX1POWERDOWN lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX1STARTBLOCK, // net ID: PIPETX1STARTBLOCK lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX1SYNCHEADER, // net ID: PIPETX1SYNCHEADER lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX2CHARISK, // net ID: PIPETX2CHARISK lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX2COMPLIANCE, // net ID: PIPETX2COMPLIANCE lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX2DATA, // net ID: PIPETX2DATA lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX2DATAVALID, // net ID: PIPETX2DATAVALID lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX2ELECIDLE, // net ID: PIPETX2ELECIDLE lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX2EQCONTROL, // net ID: PIPETX2EQCONTROL lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX2EQDEEMPH, // net ID: PIPETX2EQDEEMPH lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX2EQPRESET, // net ID: PIPETX2EQPRESET lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX2POWERDOWN, // net ID: PIPETX2POWERDOWN lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX2STARTBLOCK, // net ID: PIPETX2STARTBLOCK lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX2SYNCHEADER, // net ID: PIPETX2SYNCHEADER lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX3CHARISK, // net ID: PIPETX3CHARISK lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX3COMPLIANCE, // net ID: PIPETX3COMPLIANCE lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX3DATA, // net ID: PIPETX3DATA lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX3DATAVALID, // net ID: PIPETX3DATAVALID lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX3ELECIDLE, // net ID: PIPETX3ELECIDLE lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX3EQCONTROL, // net ID: PIPETX3EQCONTROL lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX3EQDEEMPH, // net ID: PIPETX3EQDEEMPH lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX3EQPRESET, // net ID: PIPETX3EQPRESET lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX3POWERDOWN, // net ID: PIPETX3POWERDOWN lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX3STARTBLOCK, // net ID: PIPETX3STARTBLOCK lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX3SYNCHEADER, // net ID: PIPETX3SYNCHEADER lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX4CHARISK, // net ID: PIPETX4CHARISK lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX4COMPLIANCE, // net ID: PIPETX4COMPLIANCE lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX4DATA, // net ID: PIPETX4DATA lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX4DATAVALID, // net ID: PIPETX4DATAVALID lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX4ELECIDLE, // net ID: PIPETX4ELECIDLE lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX4EQCONTROL, // net ID: PIPETX4EQCONTROL lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX4EQDEEMPH, // net ID: PIPETX4EQDEEMPH lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX4EQPRESET, // net ID: PIPETX4EQPRESET lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX4POWERDOWN, // net ID: PIPETX4POWERDOWN lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX4STARTBLOCK, // net ID: PIPETX4STARTBLOCK lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX4SYNCHEADER, // net ID: PIPETX4SYNCHEADER lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX5CHARISK, // net ID: PIPETX5CHARISK lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX5COMPLIANCE, // net ID: PIPETX5COMPLIANCE lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX5DATA, // net ID: PIPETX5DATA lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX5DATAVALID, // net ID: PIPETX5DATAVALID lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX5ELECIDLE, // net ID: PIPETX5ELECIDLE lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX5EQCONTROL, // net ID: PIPETX5EQCONTROL lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX5EQDEEMPH, // net ID: PIPETX5EQDEEMPH lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX5EQPRESET, // net ID: PIPETX5EQPRESET lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX5POWERDOWN, // net ID: PIPETX5POWERDOWN lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX5STARTBLOCK, // net ID: PIPETX5STARTBLOCK lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX5SYNCHEADER, // net ID: PIPETX5SYNCHEADER lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX6CHARISK, // net ID: PIPETX6CHARISK lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX6COMPLIANCE, // net ID: PIPETX6COMPLIANCE lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX6DATA, // net ID: PIPETX6DATA lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX6DATAVALID, // net ID: PIPETX6DATAVALID lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX6ELECIDLE, // net ID: PIPETX6ELECIDLE lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX6EQCONTROL, // net ID: PIPETX6EQCONTROL lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX6EQDEEMPH, // net ID: PIPETX6EQDEEMPH lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX6EQPRESET, // net ID: PIPETX6EQPRESET lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX6POWERDOWN, // net ID: PIPETX6POWERDOWN lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX6STARTBLOCK, // net ID: PIPETX6STARTBLOCK lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX6SYNCHEADER, // net ID: PIPETX6SYNCHEADER lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX7CHARISK, // net ID: PIPETX7CHARISK lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX7COMPLIANCE, // net ID: PIPETX7COMPLIANCE lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX7DATA, // net ID: PIPETX7DATA lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX7DATAVALID, // net ID: PIPETX7DATAVALID lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX7ELECIDLE, // net ID: PIPETX7ELECIDLE lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX7EQCONTROL, // net ID: PIPETX7EQCONTROL lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX7EQDEEMPH, // net ID: PIPETX7EQDEEMPH lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX7EQPRESET, // net ID: PIPETX7EQPRESET lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX7POWERDOWN, // net ID: PIPETX7POWERDOWN lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX7STARTBLOCK, // net ID: PIPETX7STARTBLOCK lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX7SYNCHEADER, // net ID: PIPETX7SYNCHEADER lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETXDEEMPH, // net ID: PIPETXDEEMPH lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETXMARGIN, // net ID: PIPETXMARGIN lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETXRATE, // net ID: PIPETXRATE lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETXRCVRDET, // net ID: PIPETXRCVRDET lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETXRESET, // net ID: PIPETXRESET lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETXSWING, // net ID: PIPETXSWING lsb: 0  msb: 0 OUTPUT
			NetFlow* PLEQINPROGRESS, // net ID: PLEQINPROGRESS lsb: 0  msb: 0 OUTPUT
			NetFlow* PLEQPHASE, // net ID: PLEQPHASE lsb: 0  msb: 0 OUTPUT
			NetFlow* PLGEN3PCSRXSLIDE, // net ID: PLGEN3PCSRXSLIDE lsb: 0  msb: 0 OUTPUT
			NetFlow* SAXISCCTREADY, // net ID: SAXISCCTREADY lsb: 0  msb: 0 OUTPUT
			NetFlow* SAXISRQTREADY, // net ID: SAXISRQTREADY lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGCONFIGSPACEENABLE, // net ID: CFGCONFIGSPACEENABLE lsb: 0  msb: 0 INPUT
			NetFlow* CFGDEVID, // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
			NetFlow* CFGDSBUSNUMBER, // net ID: CFGDSBUSNUMBER lsb: 0  msb: 7 INPUT
			NetFlow* CFGDSDEVICENUMBER, // net ID: CFGDSDEVICENUMBER lsb: 0  msb: 4 INPUT
			NetFlow* CFGDSFUNCTIONNUMBER, // net ID: CFGDSFUNCTIONNUMBER lsb: 0  msb: 2 INPUT
			NetFlow* CFGDSN, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSPORTNUMBER, // net ID: CFGDSPORTNUMBER lsb: 0  msb: 7 INPUT
			NetFlow* CFGERRCORIN, // net ID: CFGERRCORIN lsb: 0  msb: 0 INPUT
			NetFlow* CFGERRUNCORIN, // net ID: CFGERRUNCORIN lsb: 0  msb: 0 INPUT
			NetFlow* CFGEXTREADDATA, // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGEXTREADDATAVALID, // net ID: CFGEXTREADDATAVALID lsb: 0  msb: 0 INPUT
			NetFlow* CFGFCSEL, // net ID: CFGFCSEL lsb: 0  msb: 2 INPUT
			NetFlow* CFGFLRDONE, // net ID: CFGFLRDONE lsb: 0  msb: 1 INPUT
			NetFlow* CFGHOTRESETIN, // net ID: CFGHOTRESETIN lsb: 0  msb: 0 INPUT
			NetFlow* CFGINPUTUPDATEREQUEST, // net ID: CFGINPUTUPDATEREQUEST lsb: 0  msb: 0 INPUT
			NetFlow* CFGINTERRUPTINT, // net ID: CFGINTERRUPTINT lsb: 0  msb: 3 INPUT
			NetFlow* CFGINTERRUPTMSIATTR, // net ID: CFGINTERRUPTMSIATTR lsb: 0  msb: 2 INPUT
			NetFlow* CFGINTERRUPTMSIFUNCTIONNUMBER, // net ID: CFGINTERRUPTMSIFUNCTIONNUMBER lsb: 0  msb: 2 INPUT
			NetFlow* CFGINTERRUPTMSIINT, // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
			NetFlow* CFGINTERRUPTMSIPENDINGSTATUS, // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSISELECT, // net ID: CFGINTERRUPTMSISELECT lsb: 0  msb: 3 INPUT
			NetFlow* CFGINTERRUPTMSITPHPRESENT, // net ID: CFGINTERRUPTMSITPHPRESENT lsb: 0  msb: 0 INPUT
			NetFlow* CFGINTERRUPTMSITPHSTTAG, // net ID: CFGINTERRUPTMSITPHSTTAG lsb: 0  msb: 8 INPUT
			NetFlow* CFGINTERRUPTMSITPHTYPE, // net ID: CFGINTERRUPTMSITPHTYPE lsb: 0  msb: 1 INPUT
			NetFlow* CFGINTERRUPTMSIXADDRESS, // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIXDATA, // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGINTERRUPTMSIXINT, // net ID: CFGINTERRUPTMSIXINT lsb: 0  msb: 0 INPUT
			NetFlow* CFGINTERRUPTPENDING, // net ID: CFGINTERRUPTPENDING lsb: 0  msb: 1 INPUT
			NetFlow* CFGLINKTRAININGENABLE, // net ID: CFGLINKTRAININGENABLE lsb: 0  msb: 0 INPUT
			NetFlow* CFGMCUPDATEREQUEST, // net ID: CFGMCUPDATEREQUEST lsb: 0  msb: 0 INPUT
			NetFlow* CFGMGMTADDR, // net ID: CFGMGMTADDR lsb: 0  msb: 18 INPUT
			NetFlow* CFGMGMTBYTEENABLE, // net ID: CFGMGMTBYTEENABLE lsb: 0  msb: 3 INPUT
			NetFlow* CFGMGMTREAD, // net ID: CFGMGMTREAD lsb: 0  msb: 0 INPUT
			NetFlow* CFGMGMTTYPE1CFGREGACCESS, // net ID: CFGMGMTTYPE1CFGREGACCESS lsb: 0  msb: 0 INPUT
			NetFlow* CFGMGMTWRITE, // net ID: CFGMGMTWRITE lsb: 0  msb: 0 INPUT
			NetFlow* CFGMGMTWRITEDATA, // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGMSGTRANSMIT, // net ID: CFGMSGTRANSMIT lsb: 0  msb: 0 INPUT
			NetFlow* CFGMSGTRANSMITDATA, // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGMSGTRANSMITTYPE, // net ID: CFGMSGTRANSMITTYPE lsb: 0  msb: 2 INPUT
			NetFlow* CFGPERFUNCSTATUSCONTROL, // net ID: CFGPERFUNCSTATUSCONTROL lsb: 0  msb: 2 INPUT
			NetFlow* CFGPERFUNCTIONNUMBER, // net ID: CFGPERFUNCTIONNUMBER lsb: 0  msb: 2 INPUT
			NetFlow* CFGPERFUNCTIONOUTPUTREQUEST, // net ID: CFGPERFUNCTIONOUTPUTREQUEST lsb: 0  msb: 0 INPUT
			NetFlow* CFGPOWERSTATECHANGEACK, // net ID: CFGPOWERSTATECHANGEACK lsb: 0  msb: 0 INPUT
			NetFlow* CFGREQPMTRANSITIONL23READY, // net ID: CFGREQPMTRANSITIONL23READY lsb: 0  msb: 0 INPUT
			NetFlow* CFGREVID, // net ID: CFGREVID lsb: 0  msb: 7 INPUT
			NetFlow* CFGSUBSYSID, // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
			NetFlow* CFGSUBSYSVENDID, // net ID: CFGSUBSYSVENDID lsb: 0  msb: 15 INPUT
			NetFlow* CFGTPHSTTREADDATA, // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGTPHSTTREADDATAVALID, // net ID: CFGTPHSTTREADDATAVALID lsb: 0  msb: 0 INPUT
			NetFlow* CFGVENDID, // net ID: CFGVENDID lsb: 0  msb: 15 INPUT
			NetFlow* CFGVFFLRDONE, // net ID: CFGVFFLRDONE lsb: 0  msb: 5 INPUT
			NetFlow* CORECLK, // net ID: CORECLK lsb: 0  msb: 0 INPUT
			NetFlow* CORECLKMICOMPLETIONRAML, // net ID: CORECLKMICOMPLETIONRAML lsb: 0  msb: 0 INPUT
			NetFlow* CORECLKMICOMPLETIONRAMU, // net ID: CORECLKMICOMPLETIONRAMU lsb: 0  msb: 0 INPUT
			NetFlow* CORECLKMIREPLAYRAM, // net ID: CORECLKMIREPLAYRAM lsb: 0  msb: 0 INPUT
			NetFlow* CORECLKMIREQUESTRAM, // net ID: CORECLKMIREQUESTRAM lsb: 0  msb: 0 INPUT
			NetFlow* DRPADDR, // net ID: DRPADDR lsb: 0  msb: 10 INPUT
			NetFlow* DRPCLK, // net ID: DRPCLK lsb: 0  msb: 0 INPUT
			NetFlow* DRPDI, // net ID: DRPDI lsb: 0  msb: 15 INPUT
			NetFlow* DRPEN, // net ID: DRPEN lsb: 0  msb: 0 INPUT
			NetFlow* DRPWE, // net ID: DRPWE lsb: 0  msb: 0 INPUT
			NetFlow* MAXISCQTREADY, // net ID: MAXISCQTREADY lsb: 0  msb: 21 INPUT
			NetFlow* MAXISRCTREADY, // net ID: MAXISRCTREADY lsb: 0  msb: 21 INPUT
			NetFlow* MGMTRESETN, // net ID: MGMTRESETN lsb: 0  msb: 0 INPUT
			NetFlow* MGMTSTICKYRESETN, // net ID: MGMTSTICKYRESETN lsb: 0  msb: 0 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* PCIECQNPREQ, // net ID: PCIECQNPREQ lsb: 0  msb: 0 INPUT
			NetFlow* PIPECLK, // net ID: PIPECLK lsb: 0  msb: 0 INPUT
			NetFlow* PIPEEQFS, // net ID: PIPEEQFS lsb: 0  msb: 5 INPUT
			NetFlow* PIPEEQLF, // net ID: PIPEEQLF lsb: 0  msb: 5 INPUT
			NetFlow* PIPERESETN, // net ID: PIPERESETN lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX0CHARISK, // net ID: PIPERX0CHARISK lsb: 0  msb: 1 INPUT
			NetFlow* PIPERX0DATA, // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX0DATAVALID, // net ID: PIPERX0DATAVALID lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX0ELECIDLE, // net ID: PIPERX0ELECIDLE lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX0EQDONE, // net ID: PIPERX0EQDONE lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX0EQLPADAPTDONE, // net ID: PIPERX0EQLPADAPTDONE lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX0EQLPLFFSSEL, // net ID: PIPERX0EQLPLFFSSEL lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX0EQLPNEWTXCOEFFORPRESET, // net ID: PIPERX0EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX0PHYSTATUS, // net ID: PIPERX0PHYSTATUS lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX0STARTBLOCK, // net ID: PIPERX0STARTBLOCK lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX0STATUS, // net ID: PIPERX0STATUS lsb: 0  msb: 2 INPUT
			NetFlow* PIPERX0SYNCHEADER, // net ID: PIPERX0SYNCHEADER lsb: 0  msb: 1 INPUT
			NetFlow* PIPERX0VALID, // net ID: PIPERX0VALID lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX1CHARISK, // net ID: PIPERX1CHARISK lsb: 0  msb: 1 INPUT
			NetFlow* PIPERX1DATA, // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX1DATAVALID, // net ID: PIPERX1DATAVALID lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX1ELECIDLE, // net ID: PIPERX1ELECIDLE lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX1EQDONE, // net ID: PIPERX1EQDONE lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX1EQLPADAPTDONE, // net ID: PIPERX1EQLPADAPTDONE lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX1EQLPLFFSSEL, // net ID: PIPERX1EQLPLFFSSEL lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX1EQLPNEWTXCOEFFORPRESET, // net ID: PIPERX1EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX1PHYSTATUS, // net ID: PIPERX1PHYSTATUS lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX1STARTBLOCK, // net ID: PIPERX1STARTBLOCK lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX1STATUS, // net ID: PIPERX1STATUS lsb: 0  msb: 2 INPUT
			NetFlow* PIPERX1SYNCHEADER, // net ID: PIPERX1SYNCHEADER lsb: 0  msb: 1 INPUT
			NetFlow* PIPERX1VALID, // net ID: PIPERX1VALID lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX2CHARISK, // net ID: PIPERX2CHARISK lsb: 0  msb: 1 INPUT
			NetFlow* PIPERX2DATA, // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX2DATAVALID, // net ID: PIPERX2DATAVALID lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX2ELECIDLE, // net ID: PIPERX2ELECIDLE lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX2EQDONE, // net ID: PIPERX2EQDONE lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX2EQLPADAPTDONE, // net ID: PIPERX2EQLPADAPTDONE lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX2EQLPLFFSSEL, // net ID: PIPERX2EQLPLFFSSEL lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX2EQLPNEWTXCOEFFORPRESET, // net ID: PIPERX2EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX2PHYSTATUS, // net ID: PIPERX2PHYSTATUS lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX2STARTBLOCK, // net ID: PIPERX2STARTBLOCK lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX2STATUS, // net ID: PIPERX2STATUS lsb: 0  msb: 2 INPUT
			NetFlow* PIPERX2SYNCHEADER, // net ID: PIPERX2SYNCHEADER lsb: 0  msb: 1 INPUT
			NetFlow* PIPERX2VALID, // net ID: PIPERX2VALID lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX3CHARISK, // net ID: PIPERX3CHARISK lsb: 0  msb: 1 INPUT
			NetFlow* PIPERX3DATA, // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX3DATAVALID, // net ID: PIPERX3DATAVALID lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX3ELECIDLE, // net ID: PIPERX3ELECIDLE lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX3EQDONE, // net ID: PIPERX3EQDONE lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX3EQLPADAPTDONE, // net ID: PIPERX3EQLPADAPTDONE lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX3EQLPLFFSSEL, // net ID: PIPERX3EQLPLFFSSEL lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX3EQLPNEWTXCOEFFORPRESET, // net ID: PIPERX3EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX3PHYSTATUS, // net ID: PIPERX3PHYSTATUS lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX3STARTBLOCK, // net ID: PIPERX3STARTBLOCK lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX3STATUS, // net ID: PIPERX3STATUS lsb: 0  msb: 2 INPUT
			NetFlow* PIPERX3SYNCHEADER, // net ID: PIPERX3SYNCHEADER lsb: 0  msb: 1 INPUT
			NetFlow* PIPERX3VALID, // net ID: PIPERX3VALID lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX4CHARISK, // net ID: PIPERX4CHARISK lsb: 0  msb: 1 INPUT
			NetFlow* PIPERX4DATA, // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX4DATAVALID, // net ID: PIPERX4DATAVALID lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX4ELECIDLE, // net ID: PIPERX4ELECIDLE lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX4EQDONE, // net ID: PIPERX4EQDONE lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX4EQLPADAPTDONE, // net ID: PIPERX4EQLPADAPTDONE lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX4EQLPLFFSSEL, // net ID: PIPERX4EQLPLFFSSEL lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX4EQLPNEWTXCOEFFORPRESET, // net ID: PIPERX4EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX4PHYSTATUS, // net ID: PIPERX4PHYSTATUS lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX4STARTBLOCK, // net ID: PIPERX4STARTBLOCK lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX4STATUS, // net ID: PIPERX4STATUS lsb: 0  msb: 2 INPUT
			NetFlow* PIPERX4SYNCHEADER, // net ID: PIPERX4SYNCHEADER lsb: 0  msb: 1 INPUT
			NetFlow* PIPERX4VALID, // net ID: PIPERX4VALID lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX5CHARISK, // net ID: PIPERX5CHARISK lsb: 0  msb: 1 INPUT
			NetFlow* PIPERX5DATA, // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX5DATAVALID, // net ID: PIPERX5DATAVALID lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX5ELECIDLE, // net ID: PIPERX5ELECIDLE lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX5EQDONE, // net ID: PIPERX5EQDONE lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX5EQLPADAPTDONE, // net ID: PIPERX5EQLPADAPTDONE lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX5EQLPLFFSSEL, // net ID: PIPERX5EQLPLFFSSEL lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX5EQLPNEWTXCOEFFORPRESET, // net ID: PIPERX5EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX5PHYSTATUS, // net ID: PIPERX5PHYSTATUS lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX5STARTBLOCK, // net ID: PIPERX5STARTBLOCK lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX5STATUS, // net ID: PIPERX5STATUS lsb: 0  msb: 2 INPUT
			NetFlow* PIPERX5SYNCHEADER, // net ID: PIPERX5SYNCHEADER lsb: 0  msb: 1 INPUT
			NetFlow* PIPERX5VALID, // net ID: PIPERX5VALID lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX6CHARISK, // net ID: PIPERX6CHARISK lsb: 0  msb: 1 INPUT
			NetFlow* PIPERX6DATA, // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX6DATAVALID, // net ID: PIPERX6DATAVALID lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX6ELECIDLE, // net ID: PIPERX6ELECIDLE lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX6EQDONE, // net ID: PIPERX6EQDONE lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX6EQLPADAPTDONE, // net ID: PIPERX6EQLPADAPTDONE lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX6EQLPLFFSSEL, // net ID: PIPERX6EQLPLFFSSEL lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX6EQLPNEWTXCOEFFORPRESET, // net ID: PIPERX6EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX6PHYSTATUS, // net ID: PIPERX6PHYSTATUS lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX6STARTBLOCK, // net ID: PIPERX6STARTBLOCK lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX6STATUS, // net ID: PIPERX6STATUS lsb: 0  msb: 2 INPUT
			NetFlow* PIPERX6SYNCHEADER, // net ID: PIPERX6SYNCHEADER lsb: 0  msb: 1 INPUT
			NetFlow* PIPERX6VALID, // net ID: PIPERX6VALID lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX7CHARISK, // net ID: PIPERX7CHARISK lsb: 0  msb: 1 INPUT
			NetFlow* PIPERX7DATA, // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX7DATAVALID, // net ID: PIPERX7DATAVALID lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX7ELECIDLE, // net ID: PIPERX7ELECIDLE lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX7EQDONE, // net ID: PIPERX7EQDONE lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX7EQLPADAPTDONE, // net ID: PIPERX7EQLPADAPTDONE lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX7EQLPLFFSSEL, // net ID: PIPERX7EQLPLFFSSEL lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX7EQLPNEWTXCOEFFORPRESET, // net ID: PIPERX7EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX7PHYSTATUS, // net ID: PIPERX7PHYSTATUS lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX7STARTBLOCK, // net ID: PIPERX7STARTBLOCK lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX7STATUS, // net ID: PIPERX7STATUS lsb: 0  msb: 2 INPUT
			NetFlow* PIPERX7SYNCHEADER, // net ID: PIPERX7SYNCHEADER lsb: 0  msb: 1 INPUT
			NetFlow* PIPERX7VALID, // net ID: PIPERX7VALID lsb: 0  msb: 0 INPUT
			NetFlow* PIPETX0EQCOEFF, // net ID: PIPETX0EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX0EQDONE, // net ID: PIPETX0EQDONE lsb: 0  msb: 0 INPUT
			NetFlow* PIPETX1EQCOEFF, // net ID: PIPETX1EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX1EQDONE, // net ID: PIPETX1EQDONE lsb: 0  msb: 0 INPUT
			NetFlow* PIPETX2EQCOEFF, // net ID: PIPETX2EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX2EQDONE, // net ID: PIPETX2EQDONE lsb: 0  msb: 0 INPUT
			NetFlow* PIPETX3EQCOEFF, // net ID: PIPETX3EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX3EQDONE, // net ID: PIPETX3EQDONE lsb: 0  msb: 0 INPUT
			NetFlow* PIPETX4EQCOEFF, // net ID: PIPETX4EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX4EQDONE, // net ID: PIPETX4EQDONE lsb: 0  msb: 0 INPUT
			NetFlow* PIPETX5EQCOEFF, // net ID: PIPETX5EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX5EQDONE, // net ID: PIPETX5EQDONE lsb: 0  msb: 0 INPUT
			NetFlow* PIPETX6EQCOEFF, // net ID: PIPETX6EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX6EQDONE, // net ID: PIPETX6EQDONE lsb: 0  msb: 0 INPUT
			NetFlow* PIPETX7EQCOEFF, // net ID: PIPETX7EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX7EQDONE, // net ID: PIPETX7EQDONE lsb: 0  msb: 0 INPUT
			NetFlow* PLDISABLESCRAMBLER, // net ID: PLDISABLESCRAMBLER lsb: 0  msb: 0 INPUT
			NetFlow* PLEQRESETEIEOSCOUNT, // net ID: PLEQRESETEIEOSCOUNT lsb: 0  msb: 0 INPUT
			NetFlow* PLGEN3PCSDISABLE, // net ID: PLGEN3PCSDISABLE lsb: 0  msb: 0 INPUT
			NetFlow* PLGEN3PCSRXSYNCDONE, // net ID: PLGEN3PCSRXSYNCDONE lsb: 0  msb: 7 INPUT
			NetFlow* RECCLK, // net ID: RECCLK lsb: 0  msb: 0 INPUT
			NetFlow* RESETN, // net ID: RESETN lsb: 0  msb: 0 INPUT
			NetFlow* SAXISCCTDATA, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTKEEP, // net ID: SAXISCCTKEEP lsb: 0  msb: 7 INPUT
			NetFlow* SAXISCCTLAST, // net ID: SAXISCCTLAST lsb: 0  msb: 0 INPUT
			NetFlow* SAXISCCTUSER, // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
			NetFlow* SAXISCCTVALID, // net ID: SAXISCCTVALID lsb: 0  msb: 0 INPUT
			NetFlow* SAXISRQTDATA, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTKEEP, // net ID: SAXISRQTKEEP lsb: 0  msb: 7 INPUT
			NetFlow* SAXISRQTLAST, // net ID: SAXISRQTLAST lsb: 0  msb: 0 INPUT
			NetFlow* SAXISRQTUSER, // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			NetFlow* SAXISRQTVALID, // net ID: SAXISRQTVALID lsb: 0  msb: 0 INPUT
			NetFlow* USERCLK // net ID: USERCLK lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			this->ARI_CAP_ENABLE = ARI_CAP_ENABLE; // Default: "FALSE"
			this->AXISTEN_IF_CC_ALIGNMENT_MODE = AXISTEN_IF_CC_ALIGNMENT_MODE; // Default: "FALSE"
			this->AXISTEN_IF_CC_PARITY_CHK = AXISTEN_IF_CC_PARITY_CHK; // Default: "TRUE"
			this->AXISTEN_IF_CQ_ALIGNMENT_MODE = AXISTEN_IF_CQ_ALIGNMENT_MODE; // Default: "FALSE"
			this->AXISTEN_IF_ENABLE_CLIENT_TAG = AXISTEN_IF_ENABLE_CLIENT_TAG; // Default: "FALSE"
			this->AXISTEN_IF_ENABLE_MSG_ROUTE = AXISTEN_IF_ENABLE_MSG_ROUTE; // Default: 18'h00000
			this->AXISTEN_IF_ENABLE_RX_MSG_INTFC = AXISTEN_IF_ENABLE_RX_MSG_INTFC; // Default: "FALSE"
			this->AXISTEN_IF_RC_ALIGNMENT_MODE = AXISTEN_IF_RC_ALIGNMENT_MODE; // Default: "FALSE"
			this->AXISTEN_IF_RC_STRADDLE = AXISTEN_IF_RC_STRADDLE; // Default: "FALSE"
			this->AXISTEN_IF_RQ_ALIGNMENT_MODE = AXISTEN_IF_RQ_ALIGNMENT_MODE; // Default: "FALSE"
			this->AXISTEN_IF_RQ_PARITY_CHK = AXISTEN_IF_RQ_PARITY_CHK; // Default: "TRUE"
			this->AXISTEN_IF_WIDTH = AXISTEN_IF_WIDTH; // Default: 2'h2
			this->CRM_CORE_CLK_FREQ_500 = CRM_CORE_CLK_FREQ_500; // Default: "TRUE"
			this->CRM_USER_CLK_FREQ = CRM_USER_CLK_FREQ; // Default: 2'h2
			this->DNSTREAM_LINK_NUM = DNSTREAM_LINK_NUM; // Default: 8'h00
			this->GEN3_PCS_AUTO_REALIGN = GEN3_PCS_AUTO_REALIGN; // Default: 2'h1
			this->GEN3_PCS_RX_ELECIDLE_INTERNAL = GEN3_PCS_RX_ELECIDLE_INTERNAL; // Default: "TRUE"
			this->LL_ACK_TIMEOUT = LL_ACK_TIMEOUT; // Default: 9'h000
			this->LL_ACK_TIMEOUT_EN = LL_ACK_TIMEOUT_EN; // Default: "FALSE"
			this->LL_ACK_TIMEOUT_FUNC = LL_ACK_TIMEOUT_FUNC; // Default: 0
			this->LL_CPL_FC_UPDATE_TIMER = LL_CPL_FC_UPDATE_TIMER; // Default: 16'h0000
			this->LL_CPL_FC_UPDATE_TIMER_OVERRIDE = LL_CPL_FC_UPDATE_TIMER_OVERRIDE; // Default: "FALSE"
			this->LL_FC_UPDATE_TIMER = LL_FC_UPDATE_TIMER; // Default: 16'h0000
			this->LL_FC_UPDATE_TIMER_OVERRIDE = LL_FC_UPDATE_TIMER_OVERRIDE; // Default: "FALSE"
			this->LL_NP_FC_UPDATE_TIMER = LL_NP_FC_UPDATE_TIMER; // Default: 16'h0000
			this->LL_NP_FC_UPDATE_TIMER_OVERRIDE = LL_NP_FC_UPDATE_TIMER_OVERRIDE; // Default: "FALSE"
			this->LL_P_FC_UPDATE_TIMER = LL_P_FC_UPDATE_TIMER; // Default: 16'h0000
			this->LL_P_FC_UPDATE_TIMER_OVERRIDE = LL_P_FC_UPDATE_TIMER_OVERRIDE; // Default: "FALSE"
			this->LL_REPLAY_TIMEOUT = LL_REPLAY_TIMEOUT; // Default: 9'h000
			this->LL_REPLAY_TIMEOUT_EN = LL_REPLAY_TIMEOUT_EN; // Default: "FALSE"
			this->LL_REPLAY_TIMEOUT_FUNC = LL_REPLAY_TIMEOUT_FUNC; // Default: 0
			this->LTR_TX_MESSAGE_MINIMUM_INTERVAL = LTR_TX_MESSAGE_MINIMUM_INTERVAL; // Default: 10'h0FA
			this->LTR_TX_MESSAGE_ON_FUNC_POWER_STATE_CHANGE = LTR_TX_MESSAGE_ON_FUNC_POWER_STATE_CHANGE; // Default: "FALSE"
			this->LTR_TX_MESSAGE_ON_LTR_ENABLE = LTR_TX_MESSAGE_ON_LTR_ENABLE; // Default: "FALSE"
			this->PF0_AER_CAP_ECRC_CHECK_CAPABLE = PF0_AER_CAP_ECRC_CHECK_CAPABLE; // Default: "FALSE"
			this->PF0_AER_CAP_ECRC_GEN_CAPABLE = PF0_AER_CAP_ECRC_GEN_CAPABLE; // Default: "FALSE"
			this->PF0_AER_CAP_NEXTPTR = PF0_AER_CAP_NEXTPTR; // Default: 12'h000
			this->PF0_ARI_CAP_NEXTPTR = PF0_ARI_CAP_NEXTPTR; // Default: 12'h000
			this->PF0_ARI_CAP_NEXT_FUNC = PF0_ARI_CAP_NEXT_FUNC; // Default: 8'h00
			this->PF0_ARI_CAP_VER = PF0_ARI_CAP_VER; // Default: 4'h1
			this->PF0_BAR0_APERTURE_SIZE = PF0_BAR0_APERTURE_SIZE; // Default: 5'h03
			this->PF0_BAR0_CONTROL = PF0_BAR0_CONTROL; // Default: 3'h4
			this->PF0_BAR1_APERTURE_SIZE = PF0_BAR1_APERTURE_SIZE; // Default: 5'h00
			this->PF0_BAR1_CONTROL = PF0_BAR1_CONTROL; // Default: 3'h0
			this->PF0_BAR2_APERTURE_SIZE = PF0_BAR2_APERTURE_SIZE; // Default: 5'h03
			this->PF0_BAR2_CONTROL = PF0_BAR2_CONTROL; // Default: 3'h4
			this->PF0_BAR3_APERTURE_SIZE = PF0_BAR3_APERTURE_SIZE; // Default: 5'h03
			this->PF0_BAR3_CONTROL = PF0_BAR3_CONTROL; // Default: 3'h0
			this->PF0_BAR4_APERTURE_SIZE = PF0_BAR4_APERTURE_SIZE; // Default: 5'h03
			this->PF0_BAR4_CONTROL = PF0_BAR4_CONTROL; // Default: 3'h4
			this->PF0_BAR5_APERTURE_SIZE = PF0_BAR5_APERTURE_SIZE; // Default: 5'h03
			this->PF0_BAR5_CONTROL = PF0_BAR5_CONTROL; // Default: 3'h0
			this->PF0_BIST_REGISTER = PF0_BIST_REGISTER; // Default: 8'h00
			this->PF0_CAPABILITY_POINTER = PF0_CAPABILITY_POINTER; // Default: 8'h50
			this->PF0_CLASS_CODE = PF0_CLASS_CODE; // Default: 24'h000000
			this->PF0_DEVICE_ID = PF0_DEVICE_ID; // Default: 16'h0000
			this->PF0_DEV_CAP2_128B_CAS_ATOMIC_COMPLETER_SUPPORT = PF0_DEV_CAP2_128B_CAS_ATOMIC_COMPLETER_SUPPORT; // Default: "TRUE"
			this->PF0_DEV_CAP2_32B_ATOMIC_COMPLETER_SUPPORT = PF0_DEV_CAP2_32B_ATOMIC_COMPLETER_SUPPORT; // Default: "TRUE"
			this->PF0_DEV_CAP2_64B_ATOMIC_COMPLETER_SUPPORT = PF0_DEV_CAP2_64B_ATOMIC_COMPLETER_SUPPORT; // Default: "TRUE"
			this->PF0_DEV_CAP2_CPL_TIMEOUT_DISABLE = PF0_DEV_CAP2_CPL_TIMEOUT_DISABLE; // Default: "TRUE"
			this->PF0_DEV_CAP2_LTR_SUPPORT = PF0_DEV_CAP2_LTR_SUPPORT; // Default: "TRUE"
			this->PF0_DEV_CAP2_OBFF_SUPPORT = PF0_DEV_CAP2_OBFF_SUPPORT; // Default: 2'h0
			this->PF0_DEV_CAP2_TPH_COMPLETER_SUPPORT = PF0_DEV_CAP2_TPH_COMPLETER_SUPPORT; // Default: "FALSE"
			this->PF0_DEV_CAP_ENDPOINT_L0S_LATENCY = PF0_DEV_CAP_ENDPOINT_L0S_LATENCY; // Default: 0
			this->PF0_DEV_CAP_ENDPOINT_L1_LATENCY = PF0_DEV_CAP_ENDPOINT_L1_LATENCY; // Default: 0
			this->PF0_DEV_CAP_EXT_TAG_SUPPORTED = PF0_DEV_CAP_EXT_TAG_SUPPORTED; // Default: "TRUE"
			this->PF0_DEV_CAP_FUNCTION_LEVEL_RESET_CAPABLE = PF0_DEV_CAP_FUNCTION_LEVEL_RESET_CAPABLE; // Default: "TRUE"
			this->PF0_DEV_CAP_MAX_PAYLOAD_SIZE = PF0_DEV_CAP_MAX_PAYLOAD_SIZE; // Default: 3'h3
			this->PF0_DPA_CAP_NEXTPTR = PF0_DPA_CAP_NEXTPTR; // Default: 12'h000
			this->PF0_DPA_CAP_SUB_STATE_CONTROL = PF0_DPA_CAP_SUB_STATE_CONTROL; // Default: 5'h00
			this->PF0_DPA_CAP_SUB_STATE_CONTROL_EN = PF0_DPA_CAP_SUB_STATE_CONTROL_EN; // Default: "TRUE"
			this->PF0_DPA_CAP_SUB_STATE_POWER_ALLOCATION0 = PF0_DPA_CAP_SUB_STATE_POWER_ALLOCATION0; // Default: 8'h00
			this->PF0_DPA_CAP_SUB_STATE_POWER_ALLOCATION1 = PF0_DPA_CAP_SUB_STATE_POWER_ALLOCATION1; // Default: 8'h00
			this->PF0_DPA_CAP_SUB_STATE_POWER_ALLOCATION2 = PF0_DPA_CAP_SUB_STATE_POWER_ALLOCATION2; // Default: 8'h00
			this->PF0_DPA_CAP_SUB_STATE_POWER_ALLOCATION3 = PF0_DPA_CAP_SUB_STATE_POWER_ALLOCATION3; // Default: 8'h00
			this->PF0_DPA_CAP_SUB_STATE_POWER_ALLOCATION4 = PF0_DPA_CAP_SUB_STATE_POWER_ALLOCATION4; // Default: 8'h00
			this->PF0_DPA_CAP_SUB_STATE_POWER_ALLOCATION5 = PF0_DPA_CAP_SUB_STATE_POWER_ALLOCATION5; // Default: 8'h00
			this->PF0_DPA_CAP_SUB_STATE_POWER_ALLOCATION6 = PF0_DPA_CAP_SUB_STATE_POWER_ALLOCATION6; // Default: 8'h00
			this->PF0_DPA_CAP_SUB_STATE_POWER_ALLOCATION7 = PF0_DPA_CAP_SUB_STATE_POWER_ALLOCATION7; // Default: 8'h00
			this->PF0_DPA_CAP_VER = PF0_DPA_CAP_VER; // Default: 4'h1
			this->PF0_DSN_CAP_NEXTPTR = PF0_DSN_CAP_NEXTPTR; // Default: 12'h10C
			this->PF0_EXPANSION_ROM_APERTURE_SIZE = PF0_EXPANSION_ROM_APERTURE_SIZE; // Default: 5'h03
			this->PF0_EXPANSION_ROM_ENABLE = PF0_EXPANSION_ROM_ENABLE; // Default: "FALSE"
			this->PF0_INTERRUPT_LINE = PF0_INTERRUPT_LINE; // Default: 8'h00
			this->PF0_INTERRUPT_PIN = PF0_INTERRUPT_PIN; // Default: 3'h1
			this->PF0_LINK_CAP_ASPM_SUPPORT = PF0_LINK_CAP_ASPM_SUPPORT; // Default: 0
			this->PF0_LINK_CAP_L0S_EXIT_LATENCY_COMCLK_GEN1 = PF0_LINK_CAP_L0S_EXIT_LATENCY_COMCLK_GEN1; // Default: 7
			this->PF0_LINK_CAP_L0S_EXIT_LATENCY_COMCLK_GEN2 = PF0_LINK_CAP_L0S_EXIT_LATENCY_COMCLK_GEN2; // Default: 7
			this->PF0_LINK_CAP_L0S_EXIT_LATENCY_COMCLK_GEN3 = PF0_LINK_CAP_L0S_EXIT_LATENCY_COMCLK_GEN3; // Default: 7
			this->PF0_LINK_CAP_L0S_EXIT_LATENCY_GEN1 = PF0_LINK_CAP_L0S_EXIT_LATENCY_GEN1; // Default: 7
			this->PF0_LINK_CAP_L0S_EXIT_LATENCY_GEN2 = PF0_LINK_CAP_L0S_EXIT_LATENCY_GEN2; // Default: 7
			this->PF0_LINK_CAP_L0S_EXIT_LATENCY_GEN3 = PF0_LINK_CAP_L0S_EXIT_LATENCY_GEN3; // Default: 7
			this->PF0_LINK_CAP_L1_EXIT_LATENCY_COMCLK_GEN1 = PF0_LINK_CAP_L1_EXIT_LATENCY_COMCLK_GEN1; // Default: 7
			this->PF0_LINK_CAP_L1_EXIT_LATENCY_COMCLK_GEN2 = PF0_LINK_CAP_L1_EXIT_LATENCY_COMCLK_GEN2; // Default: 7
			this->PF0_LINK_CAP_L1_EXIT_LATENCY_COMCLK_GEN3 = PF0_LINK_CAP_L1_EXIT_LATENCY_COMCLK_GEN3; // Default: 7
			this->PF0_LINK_CAP_L1_EXIT_LATENCY_GEN1 = PF0_LINK_CAP_L1_EXIT_LATENCY_GEN1; // Default: 7
			this->PF0_LINK_CAP_L1_EXIT_LATENCY_GEN2 = PF0_LINK_CAP_L1_EXIT_LATENCY_GEN2; // Default: 7
			this->PF0_LINK_CAP_L1_EXIT_LATENCY_GEN3 = PF0_LINK_CAP_L1_EXIT_LATENCY_GEN3; // Default: 7
			this->PF0_LINK_STATUS_SLOT_CLOCK_CONFIG = PF0_LINK_STATUS_SLOT_CLOCK_CONFIG; // Default: "TRUE"
			this->PF0_LTR_CAP_MAX_NOSNOOP_LAT = PF0_LTR_CAP_MAX_NOSNOOP_LAT; // Default: 10'h000
			this->PF0_LTR_CAP_MAX_SNOOP_LAT = PF0_LTR_CAP_MAX_SNOOP_LAT; // Default: 10'h000
			this->PF0_LTR_CAP_NEXTPTR = PF0_LTR_CAP_NEXTPTR; // Default: 12'h000
			this->PF0_LTR_CAP_VER = PF0_LTR_CAP_VER; // Default: 4'h1
			this->PF0_MSIX_CAP_NEXTPTR = PF0_MSIX_CAP_NEXTPTR; // Default: 8'h00
			this->PF0_MSIX_CAP_PBA_BIR = PF0_MSIX_CAP_PBA_BIR; // Default: 0
			this->PF0_MSIX_CAP_PBA_OFFSET = PF0_MSIX_CAP_PBA_OFFSET; // Default: 29'h00000050
			this->PF0_MSIX_CAP_TABLE_BIR = PF0_MSIX_CAP_TABLE_BIR; // Default: 0
			this->PF0_MSIX_CAP_TABLE_OFFSET = PF0_MSIX_CAP_TABLE_OFFSET; // Default: 29'h00000040
			this->PF0_MSIX_CAP_TABLE_SIZE = PF0_MSIX_CAP_TABLE_SIZE; // Default: 11'h000
			this->PF0_MSI_CAP_MULTIMSGCAP = PF0_MSI_CAP_MULTIMSGCAP; // Default: 0
			this->PF0_MSI_CAP_NEXTPTR = PF0_MSI_CAP_NEXTPTR; // Default: 8'h00
			this->PF0_PB_CAP_NEXTPTR = PF0_PB_CAP_NEXTPTR; // Default: 12'h000
			this->PF0_PB_CAP_SYSTEM_ALLOCATED = PF0_PB_CAP_SYSTEM_ALLOCATED; // Default: "FALSE"
			this->PF0_PB_CAP_VER = PF0_PB_CAP_VER; // Default: 4'h1
			this->PF0_PM_CAP_ID = PF0_PM_CAP_ID; // Default: 8'h01
			this->PF0_PM_CAP_NEXTPTR = PF0_PM_CAP_NEXTPTR; // Default: 8'h00
			this->PF0_PM_CAP_PMESUPPORT_D0 = PF0_PM_CAP_PMESUPPORT_D0; // Default: "TRUE"
			this->PF0_PM_CAP_PMESUPPORT_D1 = PF0_PM_CAP_PMESUPPORT_D1; // Default: "TRUE"
			this->PF0_PM_CAP_PMESUPPORT_D3HOT = PF0_PM_CAP_PMESUPPORT_D3HOT; // Default: "TRUE"
			this->PF0_PM_CAP_SUPP_D1_STATE = PF0_PM_CAP_SUPP_D1_STATE; // Default: "TRUE"
			this->PF0_PM_CAP_VER_ID = PF0_PM_CAP_VER_ID; // Default: 3'h3
			this->PF0_PM_CSR_NOSOFTRESET = PF0_PM_CSR_NOSOFTRESET; // Default: "TRUE"
			this->PF0_RBAR_CAP_ENABLE = PF0_RBAR_CAP_ENABLE; // Default: "FALSE"
			this->PF0_RBAR_CAP_INDEX0 = PF0_RBAR_CAP_INDEX0; // Default: 3'h0
			this->PF0_RBAR_CAP_INDEX1 = PF0_RBAR_CAP_INDEX1; // Default: 3'h0
			this->PF0_RBAR_CAP_INDEX2 = PF0_RBAR_CAP_INDEX2; // Default: 3'h0
			this->PF0_RBAR_CAP_NEXTPTR = PF0_RBAR_CAP_NEXTPTR; // Default: 12'h000
			this->PF0_RBAR_CAP_SIZE0 = PF0_RBAR_CAP_SIZE0; // Default: 20'h00000
			this->PF0_RBAR_CAP_SIZE1 = PF0_RBAR_CAP_SIZE1; // Default: 20'h00000
			this->PF0_RBAR_CAP_SIZE2 = PF0_RBAR_CAP_SIZE2; // Default: 20'h00000
			this->PF0_RBAR_CAP_VER = PF0_RBAR_CAP_VER; // Default: 4'h1
			this->PF0_RBAR_NUM = PF0_RBAR_NUM; // Default: 3'h1
			this->PF0_REVISION_ID = PF0_REVISION_ID; // Default: 8'h00
			this->PF0_SRIOV_BAR0_APERTURE_SIZE = PF0_SRIOV_BAR0_APERTURE_SIZE; // Default: 5'h03
			this->PF0_SRIOV_BAR0_CONTROL = PF0_SRIOV_BAR0_CONTROL; // Default: 3'h4
			this->PF0_SRIOV_BAR1_APERTURE_SIZE = PF0_SRIOV_BAR1_APERTURE_SIZE; // Default: 5'h00
			this->PF0_SRIOV_BAR1_CONTROL = PF0_SRIOV_BAR1_CONTROL; // Default: 3'h0
			this->PF0_SRIOV_BAR2_APERTURE_SIZE = PF0_SRIOV_BAR2_APERTURE_SIZE; // Default: 5'h03
			this->PF0_SRIOV_BAR2_CONTROL = PF0_SRIOV_BAR2_CONTROL; // Default: 3'h4
			this->PF0_SRIOV_BAR3_APERTURE_SIZE = PF0_SRIOV_BAR3_APERTURE_SIZE; // Default: 5'h03
			this->PF0_SRIOV_BAR3_CONTROL = PF0_SRIOV_BAR3_CONTROL; // Default: 3'h0
			this->PF0_SRIOV_BAR4_APERTURE_SIZE = PF0_SRIOV_BAR4_APERTURE_SIZE; // Default: 5'h03
			this->PF0_SRIOV_BAR4_CONTROL = PF0_SRIOV_BAR4_CONTROL; // Default: 3'h4
			this->PF0_SRIOV_BAR5_APERTURE_SIZE = PF0_SRIOV_BAR5_APERTURE_SIZE; // Default: 5'h03
			this->PF0_SRIOV_BAR5_CONTROL = PF0_SRIOV_BAR5_CONTROL; // Default: 3'h0
			this->PF0_SRIOV_CAP_INITIAL_VF = PF0_SRIOV_CAP_INITIAL_VF; // Default: 16'h0000
			this->PF0_SRIOV_CAP_NEXTPTR = PF0_SRIOV_CAP_NEXTPTR; // Default: 12'h000
			this->PF0_SRIOV_CAP_TOTAL_VF = PF0_SRIOV_CAP_TOTAL_VF; // Default: 16'h0000
			this->PF0_SRIOV_CAP_VER = PF0_SRIOV_CAP_VER; // Default: 4'h1
			this->PF0_SRIOV_FIRST_VF_OFFSET = PF0_SRIOV_FIRST_VF_OFFSET; // Default: 16'h0000
			this->PF0_SRIOV_FUNC_DEP_LINK = PF0_SRIOV_FUNC_DEP_LINK; // Default: 16'h0000
			this->PF0_SRIOV_SUPPORTED_PAGE_SIZE = PF0_SRIOV_SUPPORTED_PAGE_SIZE; // Default: 32'h00000000
			this->PF0_SRIOV_VF_DEVICE_ID = PF0_SRIOV_VF_DEVICE_ID; // Default: 16'h0000
			this->PF0_SUBSYSTEM_ID = PF0_SUBSYSTEM_ID; // Default: 16'h0000
			this->PF0_TPHR_CAP_DEV_SPECIFIC_MODE = PF0_TPHR_CAP_DEV_SPECIFIC_MODE; // Default: "TRUE"
			this->PF0_TPHR_CAP_ENABLE = PF0_TPHR_CAP_ENABLE; // Default: "FALSE"
			this->PF0_TPHR_CAP_INT_VEC_MODE = PF0_TPHR_CAP_INT_VEC_MODE; // Default: "TRUE"
			this->PF0_TPHR_CAP_NEXTPTR = PF0_TPHR_CAP_NEXTPTR; // Default: 12'h000
			this->PF0_TPHR_CAP_ST_MODE_SEL = PF0_TPHR_CAP_ST_MODE_SEL; // Default: 3'h0
			this->PF0_TPHR_CAP_ST_TABLE_LOC = PF0_TPHR_CAP_ST_TABLE_LOC; // Default: 2'h0
			this->PF0_TPHR_CAP_ST_TABLE_SIZE = PF0_TPHR_CAP_ST_TABLE_SIZE; // Default: 11'h000
			this->PF0_TPHR_CAP_VER = PF0_TPHR_CAP_VER; // Default: 4'h1
			this->PF0_VC_CAP_NEXTPTR = PF0_VC_CAP_NEXTPTR; // Default: 12'h000
			this->PF0_VC_CAP_VER = PF0_VC_CAP_VER; // Default: 4'h1
			this->PF1_AER_CAP_ECRC_CHECK_CAPABLE = PF1_AER_CAP_ECRC_CHECK_CAPABLE; // Default: "FALSE"
			this->PF1_AER_CAP_ECRC_GEN_CAPABLE = PF1_AER_CAP_ECRC_GEN_CAPABLE; // Default: "FALSE"
			this->PF1_AER_CAP_NEXTPTR = PF1_AER_CAP_NEXTPTR; // Default: 12'h000
			this->PF1_ARI_CAP_NEXTPTR = PF1_ARI_CAP_NEXTPTR; // Default: 12'h000
			this->PF1_ARI_CAP_NEXT_FUNC = PF1_ARI_CAP_NEXT_FUNC; // Default: 8'h00
			this->PF1_BAR0_APERTURE_SIZE = PF1_BAR0_APERTURE_SIZE; // Default: 5'h03
			this->PF1_BAR0_CONTROL = PF1_BAR0_CONTROL; // Default: 3'h4
			this->PF1_BAR1_APERTURE_SIZE = PF1_BAR1_APERTURE_SIZE; // Default: 5'h00
			this->PF1_BAR1_CONTROL = PF1_BAR1_CONTROL; // Default: 3'h0
			this->PF1_BAR2_APERTURE_SIZE = PF1_BAR2_APERTURE_SIZE; // Default: 5'h03
			this->PF1_BAR2_CONTROL = PF1_BAR2_CONTROL; // Default: 3'h4
			this->PF1_BAR3_APERTURE_SIZE = PF1_BAR3_APERTURE_SIZE; // Default: 5'h03
			this->PF1_BAR3_CONTROL = PF1_BAR3_CONTROL; // Default: 3'h0
			this->PF1_BAR4_APERTURE_SIZE = PF1_BAR4_APERTURE_SIZE; // Default: 5'h03
			this->PF1_BAR4_CONTROL = PF1_BAR4_CONTROL; // Default: 3'h4
			this->PF1_BAR5_APERTURE_SIZE = PF1_BAR5_APERTURE_SIZE; // Default: 5'h03
			this->PF1_BAR5_CONTROL = PF1_BAR5_CONTROL; // Default: 3'h0
			this->PF1_BIST_REGISTER = PF1_BIST_REGISTER; // Default: 8'h00
			this->PF1_CAPABILITY_POINTER = PF1_CAPABILITY_POINTER; // Default: 8'h50
			this->PF1_CLASS_CODE = PF1_CLASS_CODE; // Default: 24'h000000
			this->PF1_DEVICE_ID = PF1_DEVICE_ID; // Default: 16'h0000
			this->PF1_DEV_CAP_MAX_PAYLOAD_SIZE = PF1_DEV_CAP_MAX_PAYLOAD_SIZE; // Default: 3'h3
			this->PF1_DPA_CAP_NEXTPTR = PF1_DPA_CAP_NEXTPTR; // Default: 12'h000
			this->PF1_DPA_CAP_SUB_STATE_CONTROL = PF1_DPA_CAP_SUB_STATE_CONTROL; // Default: 5'h00
			this->PF1_DPA_CAP_SUB_STATE_CONTROL_EN = PF1_DPA_CAP_SUB_STATE_CONTROL_EN; // Default: "TRUE"
			this->PF1_DPA_CAP_SUB_STATE_POWER_ALLOCATION0 = PF1_DPA_CAP_SUB_STATE_POWER_ALLOCATION0; // Default: 8'h00
			this->PF1_DPA_CAP_SUB_STATE_POWER_ALLOCATION1 = PF1_DPA_CAP_SUB_STATE_POWER_ALLOCATION1; // Default: 8'h00
			this->PF1_DPA_CAP_SUB_STATE_POWER_ALLOCATION2 = PF1_DPA_CAP_SUB_STATE_POWER_ALLOCATION2; // Default: 8'h00
			this->PF1_DPA_CAP_SUB_STATE_POWER_ALLOCATION3 = PF1_DPA_CAP_SUB_STATE_POWER_ALLOCATION3; // Default: 8'h00
			this->PF1_DPA_CAP_SUB_STATE_POWER_ALLOCATION4 = PF1_DPA_CAP_SUB_STATE_POWER_ALLOCATION4; // Default: 8'h00
			this->PF1_DPA_CAP_SUB_STATE_POWER_ALLOCATION5 = PF1_DPA_CAP_SUB_STATE_POWER_ALLOCATION5; // Default: 8'h00
			this->PF1_DPA_CAP_SUB_STATE_POWER_ALLOCATION6 = PF1_DPA_CAP_SUB_STATE_POWER_ALLOCATION6; // Default: 8'h00
			this->PF1_DPA_CAP_SUB_STATE_POWER_ALLOCATION7 = PF1_DPA_CAP_SUB_STATE_POWER_ALLOCATION7; // Default: 8'h00
			this->PF1_DPA_CAP_VER = PF1_DPA_CAP_VER; // Default: 4'h1
			this->PF1_DSN_CAP_NEXTPTR = PF1_DSN_CAP_NEXTPTR; // Default: 12'h10C
			this->PF1_EXPANSION_ROM_APERTURE_SIZE = PF1_EXPANSION_ROM_APERTURE_SIZE; // Default: 5'h03
			this->PF1_EXPANSION_ROM_ENABLE = PF1_EXPANSION_ROM_ENABLE; // Default: "FALSE"
			this->PF1_INTERRUPT_LINE = PF1_INTERRUPT_LINE; // Default: 8'h00
			this->PF1_INTERRUPT_PIN = PF1_INTERRUPT_PIN; // Default: 3'h1
			this->PF1_MSIX_CAP_NEXTPTR = PF1_MSIX_CAP_NEXTPTR; // Default: 8'h00
			this->PF1_MSIX_CAP_PBA_BIR = PF1_MSIX_CAP_PBA_BIR; // Default: 0
			this->PF1_MSIX_CAP_PBA_OFFSET = PF1_MSIX_CAP_PBA_OFFSET; // Default: 29'h00000050
			this->PF1_MSIX_CAP_TABLE_BIR = PF1_MSIX_CAP_TABLE_BIR; // Default: 0
			this->PF1_MSIX_CAP_TABLE_OFFSET = PF1_MSIX_CAP_TABLE_OFFSET; // Default: 29'h00000040
			this->PF1_MSIX_CAP_TABLE_SIZE = PF1_MSIX_CAP_TABLE_SIZE; // Default: 11'h000
			this->PF1_MSI_CAP_MULTIMSGCAP = PF1_MSI_CAP_MULTIMSGCAP; // Default: 0
			this->PF1_MSI_CAP_NEXTPTR = PF1_MSI_CAP_NEXTPTR; // Default: 8'h00
			this->PF1_PB_CAP_NEXTPTR = PF1_PB_CAP_NEXTPTR; // Default: 12'h000
			this->PF1_PB_CAP_SYSTEM_ALLOCATED = PF1_PB_CAP_SYSTEM_ALLOCATED; // Default: "FALSE"
			this->PF1_PB_CAP_VER = PF1_PB_CAP_VER; // Default: 4'h1
			this->PF1_PM_CAP_ID = PF1_PM_CAP_ID; // Default: 8'h01
			this->PF1_PM_CAP_NEXTPTR = PF1_PM_CAP_NEXTPTR; // Default: 8'h00
			this->PF1_PM_CAP_VER_ID = PF1_PM_CAP_VER_ID; // Default: 3'h3
			this->PF1_RBAR_CAP_ENABLE = PF1_RBAR_CAP_ENABLE; // Default: "FALSE"
			this->PF1_RBAR_CAP_INDEX0 = PF1_RBAR_CAP_INDEX0; // Default: 3'h0
			this->PF1_RBAR_CAP_INDEX1 = PF1_RBAR_CAP_INDEX1; // Default: 3'h0
			this->PF1_RBAR_CAP_INDEX2 = PF1_RBAR_CAP_INDEX2; // Default: 3'h0
			this->PF1_RBAR_CAP_NEXTPTR = PF1_RBAR_CAP_NEXTPTR; // Default: 12'h000
			this->PF1_RBAR_CAP_SIZE0 = PF1_RBAR_CAP_SIZE0; // Default: 20'h00000
			this->PF1_RBAR_CAP_SIZE1 = PF1_RBAR_CAP_SIZE1; // Default: 20'h00000
			this->PF1_RBAR_CAP_SIZE2 = PF1_RBAR_CAP_SIZE2; // Default: 20'h00000
			this->PF1_RBAR_CAP_VER = PF1_RBAR_CAP_VER; // Default: 4'h1
			this->PF1_RBAR_NUM = PF1_RBAR_NUM; // Default: 3'h1
			this->PF1_REVISION_ID = PF1_REVISION_ID; // Default: 8'h00
			this->PF1_SRIOV_BAR0_APERTURE_SIZE = PF1_SRIOV_BAR0_APERTURE_SIZE; // Default: 5'h03
			this->PF1_SRIOV_BAR0_CONTROL = PF1_SRIOV_BAR0_CONTROL; // Default: 3'h4
			this->PF1_SRIOV_BAR1_APERTURE_SIZE = PF1_SRIOV_BAR1_APERTURE_SIZE; // Default: 5'h00
			this->PF1_SRIOV_BAR1_CONTROL = PF1_SRIOV_BAR1_CONTROL; // Default: 3'h0
			this->PF1_SRIOV_BAR2_APERTURE_SIZE = PF1_SRIOV_BAR2_APERTURE_SIZE; // Default: 5'h03
			this->PF1_SRIOV_BAR2_CONTROL = PF1_SRIOV_BAR2_CONTROL; // Default: 3'h4
			this->PF1_SRIOV_BAR3_APERTURE_SIZE = PF1_SRIOV_BAR3_APERTURE_SIZE; // Default: 5'h03
			this->PF1_SRIOV_BAR3_CONTROL = PF1_SRIOV_BAR3_CONTROL; // Default: 3'h0
			this->PF1_SRIOV_BAR4_APERTURE_SIZE = PF1_SRIOV_BAR4_APERTURE_SIZE; // Default: 5'h03
			this->PF1_SRIOV_BAR4_CONTROL = PF1_SRIOV_BAR4_CONTROL; // Default: 3'h4
			this->PF1_SRIOV_BAR5_APERTURE_SIZE = PF1_SRIOV_BAR5_APERTURE_SIZE; // Default: 5'h03
			this->PF1_SRIOV_BAR5_CONTROL = PF1_SRIOV_BAR5_CONTROL; // Default: 3'h0
			this->PF1_SRIOV_CAP_INITIAL_VF = PF1_SRIOV_CAP_INITIAL_VF; // Default: 16'h0000
			this->PF1_SRIOV_CAP_NEXTPTR = PF1_SRIOV_CAP_NEXTPTR; // Default: 12'h000
			this->PF1_SRIOV_CAP_TOTAL_VF = PF1_SRIOV_CAP_TOTAL_VF; // Default: 16'h0000
			this->PF1_SRIOV_CAP_VER = PF1_SRIOV_CAP_VER; // Default: 4'h1
			this->PF1_SRIOV_FIRST_VF_OFFSET = PF1_SRIOV_FIRST_VF_OFFSET; // Default: 16'h0000
			this->PF1_SRIOV_FUNC_DEP_LINK = PF1_SRIOV_FUNC_DEP_LINK; // Default: 16'h0000
			this->PF1_SRIOV_SUPPORTED_PAGE_SIZE = PF1_SRIOV_SUPPORTED_PAGE_SIZE; // Default: 32'h00000000
			this->PF1_SRIOV_VF_DEVICE_ID = PF1_SRIOV_VF_DEVICE_ID; // Default: 16'h0000
			this->PF1_SUBSYSTEM_ID = PF1_SUBSYSTEM_ID; // Default: 16'h0000
			this->PF1_TPHR_CAP_DEV_SPECIFIC_MODE = PF1_TPHR_CAP_DEV_SPECIFIC_MODE; // Default: "TRUE"
			this->PF1_TPHR_CAP_ENABLE = PF1_TPHR_CAP_ENABLE; // Default: "FALSE"
			this->PF1_TPHR_CAP_INT_VEC_MODE = PF1_TPHR_CAP_INT_VEC_MODE; // Default: "TRUE"
			this->PF1_TPHR_CAP_NEXTPTR = PF1_TPHR_CAP_NEXTPTR; // Default: 12'h000
			this->PF1_TPHR_CAP_ST_MODE_SEL = PF1_TPHR_CAP_ST_MODE_SEL; // Default: 3'h0
			this->PF1_TPHR_CAP_ST_TABLE_LOC = PF1_TPHR_CAP_ST_TABLE_LOC; // Default: 2'h0
			this->PF1_TPHR_CAP_ST_TABLE_SIZE = PF1_TPHR_CAP_ST_TABLE_SIZE; // Default: 11'h000
			this->PF1_TPHR_CAP_VER = PF1_TPHR_CAP_VER; // Default: 4'h1
			this->PL_DISABLE_EI_INFER_IN_L0 = PL_DISABLE_EI_INFER_IN_L0; // Default: "FALSE"
			this->PL_DISABLE_GEN3_DC_BALANCE = PL_DISABLE_GEN3_DC_BALANCE; // Default: "FALSE"
			this->PL_DISABLE_SCRAMBLING = PL_DISABLE_SCRAMBLING; // Default: "FALSE"
			this->PL_DISABLE_UPCONFIG_CAPABLE = PL_DISABLE_UPCONFIG_CAPABLE; // Default: "FALSE"
			this->PL_EQ_ADAPT_DISABLE_COEFF_CHECK = PL_EQ_ADAPT_DISABLE_COEFF_CHECK; // Default: "FALSE"
			this->PL_EQ_ADAPT_DISABLE_PRESET_CHECK = PL_EQ_ADAPT_DISABLE_PRESET_CHECK; // Default: "FALSE"
			this->PL_EQ_ADAPT_ITER_COUNT = PL_EQ_ADAPT_ITER_COUNT; // Default: 5'h02
			this->PL_EQ_ADAPT_REJECT_RETRY_COUNT = PL_EQ_ADAPT_REJECT_RETRY_COUNT; // Default: 2'h1
			this->PL_EQ_BYPASS_PHASE23 = PL_EQ_BYPASS_PHASE23; // Default: "FALSE"
			this->PL_EQ_SHORT_ADAPT_PHASE = PL_EQ_SHORT_ADAPT_PHASE; // Default: "FALSE"
			this->PL_LANE0_EQ_CONTROL = PL_LANE0_EQ_CONTROL; // Default: 16'h3F00
			this->PL_LANE1_EQ_CONTROL = PL_LANE1_EQ_CONTROL; // Default: 16'h3F00
			this->PL_LANE2_EQ_CONTROL = PL_LANE2_EQ_CONTROL; // Default: 16'h3F00
			this->PL_LANE3_EQ_CONTROL = PL_LANE3_EQ_CONTROL; // Default: 16'h3F00
			this->PL_LANE4_EQ_CONTROL = PL_LANE4_EQ_CONTROL; // Default: 16'h3F00
			this->PL_LANE5_EQ_CONTROL = PL_LANE5_EQ_CONTROL; // Default: 16'h3F00
			this->PL_LANE6_EQ_CONTROL = PL_LANE6_EQ_CONTROL; // Default: 16'h3F00
			this->PL_LANE7_EQ_CONTROL = PL_LANE7_EQ_CONTROL; // Default: 16'h3F00
			this->PL_LINK_CAP_MAX_LINK_SPEED = PL_LINK_CAP_MAX_LINK_SPEED; // Default: 3'h4
			this->PL_LINK_CAP_MAX_LINK_WIDTH = PL_LINK_CAP_MAX_LINK_WIDTH; // Default: 4'h8
			this->PL_N_FTS_COMCLK_GEN1 = PL_N_FTS_COMCLK_GEN1; // Default: 255
			this->PL_N_FTS_COMCLK_GEN2 = PL_N_FTS_COMCLK_GEN2; // Default: 255
			this->PL_N_FTS_COMCLK_GEN3 = PL_N_FTS_COMCLK_GEN3; // Default: 255
			this->PL_N_FTS_GEN1 = PL_N_FTS_GEN1; // Default: 255
			this->PL_N_FTS_GEN2 = PL_N_FTS_GEN2; // Default: 255
			this->PL_N_FTS_GEN3 = PL_N_FTS_GEN3; // Default: 255
			this->PL_SIM_FAST_LINK_TRAINING = PL_SIM_FAST_LINK_TRAINING; // Default: "FALSE"
			this->PL_UPSTREAM_FACING = PL_UPSTREAM_FACING; // Default: "TRUE"
			this->PM_ASPML0S_TIMEOUT = PM_ASPML0S_TIMEOUT; // Default: 16'h05DC
			this->PM_ASPML1_ENTRY_DELAY = PM_ASPML1_ENTRY_DELAY; // Default: 20'h00000
			this->PM_ENABLE_SLOT_POWER_CAPTURE = PM_ENABLE_SLOT_POWER_CAPTURE; // Default: "TRUE"
			this->PM_L1_REENTRY_DELAY = PM_L1_REENTRY_DELAY; // Default: 32'h00000000
			this->PM_PME_SERVICE_TIMEOUT_DELAY = PM_PME_SERVICE_TIMEOUT_DELAY; // Default: 20'h186A0
			this->PM_PME_TURNOFF_ACK_DELAY = PM_PME_TURNOFF_ACK_DELAY; // Default: 16'h0064
			this->SIM_VERSION = SIM_VERSION; // Default: "1.0"
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
			this->SRIOV_CAP_ENABLE = SRIOV_CAP_ENABLE; // Default: "FALSE"
			this->TL_COMPL_TIMEOUT_REG0 = TL_COMPL_TIMEOUT_REG0; // Default: 24'hBEBC20
			this->TL_COMPL_TIMEOUT_REG1 = TL_COMPL_TIMEOUT_REG1; // Default: 28'h0000000
			this->TL_CREDITS_CD = TL_CREDITS_CD; // Default: 12'h3E0
			this->TL_CREDITS_CH = TL_CREDITS_CH; // Default: 8'h20
			this->TL_CREDITS_NPD = TL_CREDITS_NPD; // Default: 12'h028
			this->TL_CREDITS_NPH = TL_CREDITS_NPH; // Default: 8'h20
			this->TL_CREDITS_PD = TL_CREDITS_PD; // Default: 12'h198
			this->TL_CREDITS_PH = TL_CREDITS_PH; // Default: 8'h20
			this->TL_ENABLE_MESSAGE_RID_CHECK_ENABLE = TL_ENABLE_MESSAGE_RID_CHECK_ENABLE; // Default: "TRUE"
			this->TL_EXTENDED_CFG_EXTEND_INTERFACE_ENABLE = TL_EXTENDED_CFG_EXTEND_INTERFACE_ENABLE; // Default: "FALSE"
			this->TL_LEGACY_CFG_EXTEND_INTERFACE_ENABLE = TL_LEGACY_CFG_EXTEND_INTERFACE_ENABLE; // Default: "FALSE"
			this->TL_LEGACY_MODE_ENABLE = TL_LEGACY_MODE_ENABLE; // Default: "FALSE"
			this->TL_PF_ENABLE_REG = TL_PF_ENABLE_REG; // Default: "FALSE"
			this->TL_TAG_MGMT_ENABLE = TL_TAG_MGMT_ENABLE; // Default: "TRUE"
			this->VF0_ARI_CAP_NEXTPTR = VF0_ARI_CAP_NEXTPTR; // Default: 12'h000
			this->VF0_CAPABILITY_POINTER = VF0_CAPABILITY_POINTER; // Default: 8'h50
			this->VF0_MSIX_CAP_PBA_BIR = VF0_MSIX_CAP_PBA_BIR; // Default: 0
			this->VF0_MSIX_CAP_PBA_OFFSET = VF0_MSIX_CAP_PBA_OFFSET; // Default: 29'h00000050
			this->VF0_MSIX_CAP_TABLE_BIR = VF0_MSIX_CAP_TABLE_BIR; // Default: 0
			this->VF0_MSIX_CAP_TABLE_OFFSET = VF0_MSIX_CAP_TABLE_OFFSET; // Default: 29'h00000040
			this->VF0_MSIX_CAP_TABLE_SIZE = VF0_MSIX_CAP_TABLE_SIZE; // Default: 11'h000
			this->VF0_MSI_CAP_MULTIMSGCAP = VF0_MSI_CAP_MULTIMSGCAP; // Default: 0
			this->VF0_PM_CAP_ID = VF0_PM_CAP_ID; // Default: 8'h01
			this->VF0_PM_CAP_NEXTPTR = VF0_PM_CAP_NEXTPTR; // Default: 8'h00
			this->VF0_PM_CAP_VER_ID = VF0_PM_CAP_VER_ID; // Default: 3'h3
			this->VF0_TPHR_CAP_DEV_SPECIFIC_MODE = VF0_TPHR_CAP_DEV_SPECIFIC_MODE; // Default: "TRUE"
			this->VF0_TPHR_CAP_ENABLE = VF0_TPHR_CAP_ENABLE; // Default: "FALSE"
			this->VF0_TPHR_CAP_INT_VEC_MODE = VF0_TPHR_CAP_INT_VEC_MODE; // Default: "TRUE"
			this->VF0_TPHR_CAP_NEXTPTR = VF0_TPHR_CAP_NEXTPTR; // Default: 12'h000
			this->VF0_TPHR_CAP_ST_MODE_SEL = VF0_TPHR_CAP_ST_MODE_SEL; // Default: 3'h0
			this->VF0_TPHR_CAP_ST_TABLE_LOC = VF0_TPHR_CAP_ST_TABLE_LOC; // Default: 2'h0
			this->VF0_TPHR_CAP_ST_TABLE_SIZE = VF0_TPHR_CAP_ST_TABLE_SIZE; // Default: 11'h000
			this->VF0_TPHR_CAP_VER = VF0_TPHR_CAP_VER; // Default: 4'h1
			this->VF1_ARI_CAP_NEXTPTR = VF1_ARI_CAP_NEXTPTR; // Default: 12'h000
			this->VF1_MSIX_CAP_PBA_BIR = VF1_MSIX_CAP_PBA_BIR; // Default: 0
			this->VF1_MSIX_CAP_PBA_OFFSET = VF1_MSIX_CAP_PBA_OFFSET; // Default: 29'h00000050
			this->VF1_MSIX_CAP_TABLE_BIR = VF1_MSIX_CAP_TABLE_BIR; // Default: 0
			this->VF1_MSIX_CAP_TABLE_OFFSET = VF1_MSIX_CAP_TABLE_OFFSET; // Default: 29'h00000040
			this->VF1_MSIX_CAP_TABLE_SIZE = VF1_MSIX_CAP_TABLE_SIZE; // Default: 11'h000
			this->VF1_MSI_CAP_MULTIMSGCAP = VF1_MSI_CAP_MULTIMSGCAP; // Default: 0
			this->VF1_PM_CAP_ID = VF1_PM_CAP_ID; // Default: 8'h01
			this->VF1_PM_CAP_NEXTPTR = VF1_PM_CAP_NEXTPTR; // Default: 8'h00
			this->VF1_PM_CAP_VER_ID = VF1_PM_CAP_VER_ID; // Default: 3'h3
			this->VF1_TPHR_CAP_DEV_SPECIFIC_MODE = VF1_TPHR_CAP_DEV_SPECIFIC_MODE; // Default: "TRUE"
			this->VF1_TPHR_CAP_ENABLE = VF1_TPHR_CAP_ENABLE; // Default: "FALSE"
			this->VF1_TPHR_CAP_INT_VEC_MODE = VF1_TPHR_CAP_INT_VEC_MODE; // Default: "TRUE"
			this->VF1_TPHR_CAP_NEXTPTR = VF1_TPHR_CAP_NEXTPTR; // Default: 12'h000
			this->VF1_TPHR_CAP_ST_MODE_SEL = VF1_TPHR_CAP_ST_MODE_SEL; // Default: 3'h0
			this->VF1_TPHR_CAP_ST_TABLE_LOC = VF1_TPHR_CAP_ST_TABLE_LOC; // Default: 2'h0
			this->VF1_TPHR_CAP_ST_TABLE_SIZE = VF1_TPHR_CAP_ST_TABLE_SIZE; // Default: 11'h000
			this->VF1_TPHR_CAP_VER = VF1_TPHR_CAP_VER; // Default: 4'h1
			this->VF2_ARI_CAP_NEXTPTR = VF2_ARI_CAP_NEXTPTR; // Default: 12'h000
			this->VF2_MSIX_CAP_PBA_BIR = VF2_MSIX_CAP_PBA_BIR; // Default: 0
			this->VF2_MSIX_CAP_PBA_OFFSET = VF2_MSIX_CAP_PBA_OFFSET; // Default: 29'h00000050
			this->VF2_MSIX_CAP_TABLE_BIR = VF2_MSIX_CAP_TABLE_BIR; // Default: 0
			this->VF2_MSIX_CAP_TABLE_OFFSET = VF2_MSIX_CAP_TABLE_OFFSET; // Default: 29'h00000040
			this->VF2_MSIX_CAP_TABLE_SIZE = VF2_MSIX_CAP_TABLE_SIZE; // Default: 11'h000
			this->VF2_MSI_CAP_MULTIMSGCAP = VF2_MSI_CAP_MULTIMSGCAP; // Default: 0
			this->VF2_PM_CAP_ID = VF2_PM_CAP_ID; // Default: 8'h01
			this->VF2_PM_CAP_NEXTPTR = VF2_PM_CAP_NEXTPTR; // Default: 8'h00
			this->VF2_PM_CAP_VER_ID = VF2_PM_CAP_VER_ID; // Default: 3'h3
			this->VF2_TPHR_CAP_DEV_SPECIFIC_MODE = VF2_TPHR_CAP_DEV_SPECIFIC_MODE; // Default: "TRUE"
			this->VF2_TPHR_CAP_ENABLE = VF2_TPHR_CAP_ENABLE; // Default: "FALSE"
			this->VF2_TPHR_CAP_INT_VEC_MODE = VF2_TPHR_CAP_INT_VEC_MODE; // Default: "TRUE"
			this->VF2_TPHR_CAP_NEXTPTR = VF2_TPHR_CAP_NEXTPTR; // Default: 12'h000
			this->VF2_TPHR_CAP_ST_MODE_SEL = VF2_TPHR_CAP_ST_MODE_SEL; // Default: 3'h0
			this->VF2_TPHR_CAP_ST_TABLE_LOC = VF2_TPHR_CAP_ST_TABLE_LOC; // Default: 2'h0
			this->VF2_TPHR_CAP_ST_TABLE_SIZE = VF2_TPHR_CAP_ST_TABLE_SIZE; // Default: 11'h000
			this->VF2_TPHR_CAP_VER = VF2_TPHR_CAP_VER; // Default: 4'h1
			this->VF3_ARI_CAP_NEXTPTR = VF3_ARI_CAP_NEXTPTR; // Default: 12'h000
			this->VF3_MSIX_CAP_PBA_BIR = VF3_MSIX_CAP_PBA_BIR; // Default: 0
			this->VF3_MSIX_CAP_PBA_OFFSET = VF3_MSIX_CAP_PBA_OFFSET; // Default: 29'h00000050
			this->VF3_MSIX_CAP_TABLE_BIR = VF3_MSIX_CAP_TABLE_BIR; // Default: 0
			this->VF3_MSIX_CAP_TABLE_OFFSET = VF3_MSIX_CAP_TABLE_OFFSET; // Default: 29'h00000040
			this->VF3_MSIX_CAP_TABLE_SIZE = VF3_MSIX_CAP_TABLE_SIZE; // Default: 11'h000
			this->VF3_MSI_CAP_MULTIMSGCAP = VF3_MSI_CAP_MULTIMSGCAP; // Default: 0
			this->VF3_PM_CAP_ID = VF3_PM_CAP_ID; // Default: 8'h01
			this->VF3_PM_CAP_NEXTPTR = VF3_PM_CAP_NEXTPTR; // Default: 8'h00
			this->VF3_PM_CAP_VER_ID = VF3_PM_CAP_VER_ID; // Default: 3'h3
			this->VF3_TPHR_CAP_DEV_SPECIFIC_MODE = VF3_TPHR_CAP_DEV_SPECIFIC_MODE; // Default: "TRUE"
			this->VF3_TPHR_CAP_ENABLE = VF3_TPHR_CAP_ENABLE; // Default: "FALSE"
			this->VF3_TPHR_CAP_INT_VEC_MODE = VF3_TPHR_CAP_INT_VEC_MODE; // Default: "TRUE"
			this->VF3_TPHR_CAP_NEXTPTR = VF3_TPHR_CAP_NEXTPTR; // Default: 12'h000
			this->VF3_TPHR_CAP_ST_MODE_SEL = VF3_TPHR_CAP_ST_MODE_SEL; // Default: 3'h0
			this->VF3_TPHR_CAP_ST_TABLE_LOC = VF3_TPHR_CAP_ST_TABLE_LOC; // Default: 2'h0
			this->VF3_TPHR_CAP_ST_TABLE_SIZE = VF3_TPHR_CAP_ST_TABLE_SIZE; // Default: 11'h000
			this->VF3_TPHR_CAP_VER = VF3_TPHR_CAP_VER; // Default: 4'h1
			this->VF4_ARI_CAP_NEXTPTR = VF4_ARI_CAP_NEXTPTR; // Default: 12'h000
			this->VF4_MSIX_CAP_PBA_BIR = VF4_MSIX_CAP_PBA_BIR; // Default: 0
			this->VF4_MSIX_CAP_PBA_OFFSET = VF4_MSIX_CAP_PBA_OFFSET; // Default: 29'h00000050
			this->VF4_MSIX_CAP_TABLE_BIR = VF4_MSIX_CAP_TABLE_BIR; // Default: 0
			this->VF4_MSIX_CAP_TABLE_OFFSET = VF4_MSIX_CAP_TABLE_OFFSET; // Default: 29'h00000040
			this->VF4_MSIX_CAP_TABLE_SIZE = VF4_MSIX_CAP_TABLE_SIZE; // Default: 11'h000
			this->VF4_MSI_CAP_MULTIMSGCAP = VF4_MSI_CAP_MULTIMSGCAP; // Default: 0
			this->VF4_PM_CAP_ID = VF4_PM_CAP_ID; // Default: 8'h01
			this->VF4_PM_CAP_NEXTPTR = VF4_PM_CAP_NEXTPTR; // Default: 8'h00
			this->VF4_PM_CAP_VER_ID = VF4_PM_CAP_VER_ID; // Default: 3'h3
			this->VF4_TPHR_CAP_DEV_SPECIFIC_MODE = VF4_TPHR_CAP_DEV_SPECIFIC_MODE; // Default: "TRUE"
			this->VF4_TPHR_CAP_ENABLE = VF4_TPHR_CAP_ENABLE; // Default: "FALSE"
			this->VF4_TPHR_CAP_INT_VEC_MODE = VF4_TPHR_CAP_INT_VEC_MODE; // Default: "TRUE"
			this->VF4_TPHR_CAP_NEXTPTR = VF4_TPHR_CAP_NEXTPTR; // Default: 12'h000
			this->VF4_TPHR_CAP_ST_MODE_SEL = VF4_TPHR_CAP_ST_MODE_SEL; // Default: 3'h0
			this->VF4_TPHR_CAP_ST_TABLE_LOC = VF4_TPHR_CAP_ST_TABLE_LOC; // Default: 2'h0
			this->VF4_TPHR_CAP_ST_TABLE_SIZE = VF4_TPHR_CAP_ST_TABLE_SIZE; // Default: 11'h000
			this->VF4_TPHR_CAP_VER = VF4_TPHR_CAP_VER; // Default: 4'h1
			this->VF5_ARI_CAP_NEXTPTR = VF5_ARI_CAP_NEXTPTR; // Default: 12'h000
			this->VF5_MSIX_CAP_PBA_BIR = VF5_MSIX_CAP_PBA_BIR; // Default: 0
			this->VF5_MSIX_CAP_PBA_OFFSET = VF5_MSIX_CAP_PBA_OFFSET; // Default: 29'h00000050
			this->VF5_MSIX_CAP_TABLE_BIR = VF5_MSIX_CAP_TABLE_BIR; // Default: 0
			this->VF5_MSIX_CAP_TABLE_OFFSET = VF5_MSIX_CAP_TABLE_OFFSET; // Default: 29'h00000040
			this->VF5_MSIX_CAP_TABLE_SIZE = VF5_MSIX_CAP_TABLE_SIZE; // Default: 11'h000
			this->VF5_MSI_CAP_MULTIMSGCAP = VF5_MSI_CAP_MULTIMSGCAP; // Default: 0
			this->VF5_PM_CAP_ID = VF5_PM_CAP_ID; // Default: 8'h01
			this->VF5_PM_CAP_NEXTPTR = VF5_PM_CAP_NEXTPTR; // Default: 8'h00
			this->VF5_PM_CAP_VER_ID = VF5_PM_CAP_VER_ID; // Default: 3'h3
			this->VF5_TPHR_CAP_DEV_SPECIFIC_MODE = VF5_TPHR_CAP_DEV_SPECIFIC_MODE; // Default: "TRUE"
			this->VF5_TPHR_CAP_ENABLE = VF5_TPHR_CAP_ENABLE; // Default: "FALSE"
			this->VF5_TPHR_CAP_INT_VEC_MODE = VF5_TPHR_CAP_INT_VEC_MODE; // Default: "TRUE"
			this->VF5_TPHR_CAP_NEXTPTR = VF5_TPHR_CAP_NEXTPTR; // Default: 12'h000
			this->VF5_TPHR_CAP_ST_MODE_SEL = VF5_TPHR_CAP_ST_MODE_SEL; // Default: 3'h0
			this->VF5_TPHR_CAP_ST_TABLE_LOC = VF5_TPHR_CAP_ST_TABLE_LOC; // Default: 2'h0
			this->VF5_TPHR_CAP_ST_TABLE_SIZE = VF5_TPHR_CAP_ST_TABLE_SIZE; // Default: 11'h000
			this->VF5_TPHR_CAP_VER = VF5_TPHR_CAP_VER; // Default: 4'h1
			//Verilog Ports in definition order:
			this->CFGCURRENTSPEED = CFGCURRENTSPEED; // net ID: CFGCURRENTSPEED lsb: 0  msb: 0 OUTPUT
			this->CFGDPASUBSTATECHANGE = CFGDPASUBSTATECHANGE; // net ID: CFGDPASUBSTATECHANGE lsb: 0  msb: 0 OUTPUT
			this->CFGERRCOROUT = CFGERRCOROUT; // net ID: CFGERRCOROUT lsb: 0  msb: 0 OUTPUT
			this->CFGERRFATALOUT = CFGERRFATALOUT; // net ID: CFGERRFATALOUT lsb: 0  msb: 0 OUTPUT
			this->CFGERRNONFATALOUT = CFGERRNONFATALOUT; // net ID: CFGERRNONFATALOUT lsb: 0  msb: 0 OUTPUT
			this->CFGEXTFUNCTIONNUMBER = CFGEXTFUNCTIONNUMBER; // net ID: CFGEXTFUNCTIONNUMBER lsb: 0  msb: 0 OUTPUT
			this->CFGEXTREADRECEIVED = CFGEXTREADRECEIVED; // net ID: CFGEXTREADRECEIVED lsb: 0  msb: 0 OUTPUT
			this->CFGEXTREGISTERNUMBER = CFGEXTREGISTERNUMBER; // net ID: CFGEXTREGISTERNUMBER lsb: 0  msb: 0 OUTPUT
			this->CFGEXTWRITEBYTEENABLE = CFGEXTWRITEBYTEENABLE; // net ID: CFGEXTWRITEBYTEENABLE lsb: 0  msb: 0 OUTPUT
			this->CFGEXTWRITEDATA = CFGEXTWRITEDATA; // net ID: CFGEXTWRITEDATA lsb: 0  msb: 0 OUTPUT
			this->CFGEXTWRITERECEIVED = CFGEXTWRITERECEIVED; // net ID: CFGEXTWRITERECEIVED lsb: 0  msb: 0 OUTPUT
			this->CFGFCCPLD = CFGFCCPLD; // net ID: CFGFCCPLD lsb: 0  msb: 0 OUTPUT
			this->CFGFCCPLH = CFGFCCPLH; // net ID: CFGFCCPLH lsb: 0  msb: 0 OUTPUT
			this->CFGFCNPD = CFGFCNPD; // net ID: CFGFCNPD lsb: 0  msb: 0 OUTPUT
			this->CFGFCNPH = CFGFCNPH; // net ID: CFGFCNPH lsb: 0  msb: 0 OUTPUT
			this->CFGFCPD = CFGFCPD; // net ID: CFGFCPD lsb: 0  msb: 0 OUTPUT
			this->CFGFCPH = CFGFCPH; // net ID: CFGFCPH lsb: 0  msb: 0 OUTPUT
			this->CFGFLRINPROCESS = CFGFLRINPROCESS; // net ID: CFGFLRINPROCESS lsb: 0  msb: 0 OUTPUT
			this->CFGFUNCTIONPOWERSTATE = CFGFUNCTIONPOWERSTATE; // net ID: CFGFUNCTIONPOWERSTATE lsb: 0  msb: 0 OUTPUT
			this->CFGFUNCTIONSTATUS = CFGFUNCTIONSTATUS; // net ID: CFGFUNCTIONSTATUS lsb: 0  msb: 0 OUTPUT
			this->CFGHOTRESETOUT = CFGHOTRESETOUT; // net ID: CFGHOTRESETOUT lsb: 0  msb: 0 OUTPUT
			this->CFGINPUTUPDATEDONE = CFGINPUTUPDATEDONE; // net ID: CFGINPUTUPDATEDONE lsb: 0  msb: 0 OUTPUT
			this->CFGINTERRUPTAOUTPUT = CFGINTERRUPTAOUTPUT; // net ID: CFGINTERRUPTAOUTPUT lsb: 0  msb: 0 OUTPUT
			this->CFGINTERRUPTBOUTPUT = CFGINTERRUPTBOUTPUT; // net ID: CFGINTERRUPTBOUTPUT lsb: 0  msb: 0 OUTPUT
			this->CFGINTERRUPTCOUTPUT = CFGINTERRUPTCOUTPUT; // net ID: CFGINTERRUPTCOUTPUT lsb: 0  msb: 0 OUTPUT
			this->CFGINTERRUPTDOUTPUT = CFGINTERRUPTDOUTPUT; // net ID: CFGINTERRUPTDOUTPUT lsb: 0  msb: 0 OUTPUT
			this->CFGINTERRUPTMSIDATA = CFGINTERRUPTMSIDATA; // net ID: CFGINTERRUPTMSIDATA lsb: 0  msb: 0 OUTPUT
			this->CFGINTERRUPTMSIENABLE = CFGINTERRUPTMSIENABLE; // net ID: CFGINTERRUPTMSIENABLE lsb: 0  msb: 0 OUTPUT
			this->CFGINTERRUPTMSIFAIL = CFGINTERRUPTMSIFAIL; // net ID: CFGINTERRUPTMSIFAIL lsb: 0  msb: 0 OUTPUT
			this->CFGINTERRUPTMSIMASKUPDATE = CFGINTERRUPTMSIMASKUPDATE; // net ID: CFGINTERRUPTMSIMASKUPDATE lsb: 0  msb: 0 OUTPUT
			this->CFGINTERRUPTMSIMMENABLE = CFGINTERRUPTMSIMMENABLE; // net ID: CFGINTERRUPTMSIMMENABLE lsb: 0  msb: 0 OUTPUT
			this->CFGINTERRUPTMSISENT = CFGINTERRUPTMSISENT; // net ID: CFGINTERRUPTMSISENT lsb: 0  msb: 0 OUTPUT
			this->CFGINTERRUPTMSIVFENABLE = CFGINTERRUPTMSIVFENABLE; // net ID: CFGINTERRUPTMSIVFENABLE lsb: 0  msb: 0 OUTPUT
			this->CFGINTERRUPTMSIXENABLE = CFGINTERRUPTMSIXENABLE; // net ID: CFGINTERRUPTMSIXENABLE lsb: 0  msb: 0 OUTPUT
			this->CFGINTERRUPTMSIXFAIL = CFGINTERRUPTMSIXFAIL; // net ID: CFGINTERRUPTMSIXFAIL lsb: 0  msb: 0 OUTPUT
			this->CFGINTERRUPTMSIXMASK = CFGINTERRUPTMSIXMASK; // net ID: CFGINTERRUPTMSIXMASK lsb: 0  msb: 0 OUTPUT
			this->CFGINTERRUPTMSIXSENT = CFGINTERRUPTMSIXSENT; // net ID: CFGINTERRUPTMSIXSENT lsb: 0  msb: 0 OUTPUT
			this->CFGINTERRUPTMSIXVFENABLE = CFGINTERRUPTMSIXVFENABLE; // net ID: CFGINTERRUPTMSIXVFENABLE lsb: 0  msb: 0 OUTPUT
			this->CFGINTERRUPTMSIXVFMASK = CFGINTERRUPTMSIXVFMASK; // net ID: CFGINTERRUPTMSIXVFMASK lsb: 0  msb: 0 OUTPUT
			this->CFGINTERRUPTSENT = CFGINTERRUPTSENT; // net ID: CFGINTERRUPTSENT lsb: 0  msb: 0 OUTPUT
			this->CFGLINKPOWERSTATE = CFGLINKPOWERSTATE; // net ID: CFGLINKPOWERSTATE lsb: 0  msb: 0 OUTPUT
			this->CFGLOCALERROR = CFGLOCALERROR; // net ID: CFGLOCALERROR lsb: 0  msb: 0 OUTPUT
			this->CFGLTRENABLE = CFGLTRENABLE; // net ID: CFGLTRENABLE lsb: 0  msb: 0 OUTPUT
			this->CFGLTSSMSTATE = CFGLTSSMSTATE; // net ID: CFGLTSSMSTATE lsb: 0  msb: 0 OUTPUT
			this->CFGMAXPAYLOAD = CFGMAXPAYLOAD; // net ID: CFGMAXPAYLOAD lsb: 0  msb: 0 OUTPUT
			this->CFGMAXREADREQ = CFGMAXREADREQ; // net ID: CFGMAXREADREQ lsb: 0  msb: 0 OUTPUT
			this->CFGMCUPDATEDONE = CFGMCUPDATEDONE; // net ID: CFGMCUPDATEDONE lsb: 0  msb: 0 OUTPUT
			this->CFGMGMTREADDATA = CFGMGMTREADDATA; // net ID: CFGMGMTREADDATA lsb: 0  msb: 0 OUTPUT
			this->CFGMGMTREADWRITEDONE = CFGMGMTREADWRITEDONE; // net ID: CFGMGMTREADWRITEDONE lsb: 0  msb: 0 OUTPUT
			this->CFGMSGRECEIVED = CFGMSGRECEIVED; // net ID: CFGMSGRECEIVED lsb: 0  msb: 0 OUTPUT
			this->CFGMSGRECEIVEDDATA = CFGMSGRECEIVEDDATA; // net ID: CFGMSGRECEIVEDDATA lsb: 0  msb: 0 OUTPUT
			this->CFGMSGRECEIVEDTYPE = CFGMSGRECEIVEDTYPE; // net ID: CFGMSGRECEIVEDTYPE lsb: 0  msb: 0 OUTPUT
			this->CFGMSGTRANSMITDONE = CFGMSGTRANSMITDONE; // net ID: CFGMSGTRANSMITDONE lsb: 0  msb: 0 OUTPUT
			this->CFGNEGOTIATEDWIDTH = CFGNEGOTIATEDWIDTH; // net ID: CFGNEGOTIATEDWIDTH lsb: 0  msb: 0 OUTPUT
			this->CFGOBFFENABLE = CFGOBFFENABLE; // net ID: CFGOBFFENABLE lsb: 0  msb: 0 OUTPUT
			this->CFGPERFUNCSTATUSDATA = CFGPERFUNCSTATUSDATA; // net ID: CFGPERFUNCSTATUSDATA lsb: 0  msb: 0 OUTPUT
			this->CFGPERFUNCTIONUPDATEDONE = CFGPERFUNCTIONUPDATEDONE; // net ID: CFGPERFUNCTIONUPDATEDONE lsb: 0  msb: 0 OUTPUT
			this->CFGPHYLINKDOWN = CFGPHYLINKDOWN; // net ID: CFGPHYLINKDOWN lsb: 0  msb: 0 OUTPUT
			this->CFGPHYLINKSTATUS = CFGPHYLINKSTATUS; // net ID: CFGPHYLINKSTATUS lsb: 0  msb: 0 OUTPUT
			this->CFGPLSTATUSCHANGE = CFGPLSTATUSCHANGE; // net ID: CFGPLSTATUSCHANGE lsb: 0  msb: 0 OUTPUT
			this->CFGPOWERSTATECHANGEINTERRUPT = CFGPOWERSTATECHANGEINTERRUPT; // net ID: CFGPOWERSTATECHANGEINTERRUPT lsb: 0  msb: 0 OUTPUT
			this->CFGRCBSTATUS = CFGRCBSTATUS; // net ID: CFGRCBSTATUS lsb: 0  msb: 0 OUTPUT
			this->CFGTPHFUNCTIONNUM = CFGTPHFUNCTIONNUM; // net ID: CFGTPHFUNCTIONNUM lsb: 0  msb: 0 OUTPUT
			this->CFGTPHREQUESTERENABLE = CFGTPHREQUESTERENABLE; // net ID: CFGTPHREQUESTERENABLE lsb: 0  msb: 0 OUTPUT
			this->CFGTPHSTMODE = CFGTPHSTMODE; // net ID: CFGTPHSTMODE lsb: 0  msb: 0 OUTPUT
			this->CFGTPHSTTADDRESS = CFGTPHSTTADDRESS; // net ID: CFGTPHSTTADDRESS lsb: 0  msb: 0 OUTPUT
			this->CFGTPHSTTREADENABLE = CFGTPHSTTREADENABLE; // net ID: CFGTPHSTTREADENABLE lsb: 0  msb: 0 OUTPUT
			this->CFGTPHSTTWRITEBYTEVALID = CFGTPHSTTWRITEBYTEVALID; // net ID: CFGTPHSTTWRITEBYTEVALID lsb: 0  msb: 0 OUTPUT
			this->CFGTPHSTTWRITEDATA = CFGTPHSTTWRITEDATA; // net ID: CFGTPHSTTWRITEDATA lsb: 0  msb: 0 OUTPUT
			this->CFGTPHSTTWRITEENABLE = CFGTPHSTTWRITEENABLE; // net ID: CFGTPHSTTWRITEENABLE lsb: 0  msb: 0 OUTPUT
			this->CFGVFFLRINPROCESS = CFGVFFLRINPROCESS; // net ID: CFGVFFLRINPROCESS lsb: 0  msb: 0 OUTPUT
			this->CFGVFPOWERSTATE = CFGVFPOWERSTATE; // net ID: CFGVFPOWERSTATE lsb: 0  msb: 0 OUTPUT
			this->CFGVFSTATUS = CFGVFSTATUS; // net ID: CFGVFSTATUS lsb: 0  msb: 0 OUTPUT
			this->CFGVFTPHREQUESTERENABLE = CFGVFTPHREQUESTERENABLE; // net ID: CFGVFTPHREQUESTERENABLE lsb: 0  msb: 0 OUTPUT
			this->CFGVFTPHSTMODE = CFGVFTPHSTMODE; // net ID: CFGVFTPHSTMODE lsb: 0  msb: 0 OUTPUT
			this->DBGDATAOUT = DBGDATAOUT; // net ID: DBGDATAOUT lsb: 0  msb: 0 OUTPUT
			this->DRPDO = DRPDO; // net ID: DRPDO lsb: 0  msb: 0 OUTPUT
			this->DRPRDY = DRPRDY; // net ID: DRPRDY lsb: 0  msb: 0 OUTPUT
			this->MAXISCQTDATA = MAXISCQTDATA; // net ID: MAXISCQTDATA lsb: 0  msb: 0 OUTPUT
			this->MAXISCQTKEEP = MAXISCQTKEEP; // net ID: MAXISCQTKEEP lsb: 0  msb: 0 OUTPUT
			this->MAXISCQTLAST = MAXISCQTLAST; // net ID: MAXISCQTLAST lsb: 0  msb: 0 OUTPUT
			this->MAXISCQTUSER = MAXISCQTUSER; // net ID: MAXISCQTUSER lsb: 0  msb: 0 OUTPUT
			this->MAXISCQTVALID = MAXISCQTVALID; // net ID: MAXISCQTVALID lsb: 0  msb: 0 OUTPUT
			this->MAXISRCTDATA = MAXISRCTDATA; // net ID: MAXISRCTDATA lsb: 0  msb: 0 OUTPUT
			this->MAXISRCTKEEP = MAXISRCTKEEP; // net ID: MAXISRCTKEEP lsb: 0  msb: 0 OUTPUT
			this->MAXISRCTLAST = MAXISRCTLAST; // net ID: MAXISRCTLAST lsb: 0  msb: 0 OUTPUT
			this->MAXISRCTUSER = MAXISRCTUSER; // net ID: MAXISRCTUSER lsb: 0  msb: 0 OUTPUT
			this->MAXISRCTVALID = MAXISRCTVALID; // net ID: MAXISRCTVALID lsb: 0  msb: 0 OUTPUT
			this->MICOMPLETIONRAMREADADDRESSAL = MICOMPLETIONRAMREADADDRESSAL; // net ID: MICOMPLETIONRAMREADADDRESSAL lsb: 0  msb: 0 OUTPUT
			this->MICOMPLETIONRAMREADADDRESSAU = MICOMPLETIONRAMREADADDRESSAU; // net ID: MICOMPLETIONRAMREADADDRESSAU lsb: 0  msb: 0 OUTPUT
			this->MICOMPLETIONRAMREADADDRESSBL = MICOMPLETIONRAMREADADDRESSBL; // net ID: MICOMPLETIONRAMREADADDRESSBL lsb: 0  msb: 0 OUTPUT
			this->MICOMPLETIONRAMREADADDRESSBU = MICOMPLETIONRAMREADADDRESSBU; // net ID: MICOMPLETIONRAMREADADDRESSBU lsb: 0  msb: 0 OUTPUT
			this->MICOMPLETIONRAMREADENABLEL = MICOMPLETIONRAMREADENABLEL; // net ID: MICOMPLETIONRAMREADENABLEL lsb: 0  msb: 0 OUTPUT
			this->MICOMPLETIONRAMREADENABLEU = MICOMPLETIONRAMREADENABLEU; // net ID: MICOMPLETIONRAMREADENABLEU lsb: 0  msb: 0 OUTPUT
			this->MICOMPLETIONRAMWRITEADDRESSAL = MICOMPLETIONRAMWRITEADDRESSAL; // net ID: MICOMPLETIONRAMWRITEADDRESSAL lsb: 0  msb: 0 OUTPUT
			this->MICOMPLETIONRAMWRITEADDRESSAU = MICOMPLETIONRAMWRITEADDRESSAU; // net ID: MICOMPLETIONRAMWRITEADDRESSAU lsb: 0  msb: 0 OUTPUT
			this->MICOMPLETIONRAMWRITEADDRESSBL = MICOMPLETIONRAMWRITEADDRESSBL; // net ID: MICOMPLETIONRAMWRITEADDRESSBL lsb: 0  msb: 0 OUTPUT
			this->MICOMPLETIONRAMWRITEADDRESSBU = MICOMPLETIONRAMWRITEADDRESSBU; // net ID: MICOMPLETIONRAMWRITEADDRESSBU lsb: 0  msb: 0 OUTPUT
			this->MICOMPLETIONRAMWRITEDATAL = MICOMPLETIONRAMWRITEDATAL; // net ID: MICOMPLETIONRAMWRITEDATAL lsb: 0  msb: 0 OUTPUT
			this->MICOMPLETIONRAMWRITEDATAU = MICOMPLETIONRAMWRITEDATAU; // net ID: MICOMPLETIONRAMWRITEDATAU lsb: 0  msb: 0 OUTPUT
			this->MICOMPLETIONRAMWRITEENABLEL = MICOMPLETIONRAMWRITEENABLEL; // net ID: MICOMPLETIONRAMWRITEENABLEL lsb: 0  msb: 0 OUTPUT
			this->MICOMPLETIONRAMWRITEENABLEU = MICOMPLETIONRAMWRITEENABLEU; // net ID: MICOMPLETIONRAMWRITEENABLEU lsb: 0  msb: 0 OUTPUT
			this->MIREPLAYRAMADDRESS = MIREPLAYRAMADDRESS; // net ID: MIREPLAYRAMADDRESS lsb: 0  msb: 0 OUTPUT
			this->MIREPLAYRAMREADENABLE = MIREPLAYRAMREADENABLE; // net ID: MIREPLAYRAMREADENABLE lsb: 0  msb: 0 OUTPUT
			this->MIREPLAYRAMWRITEDATA = MIREPLAYRAMWRITEDATA; // net ID: MIREPLAYRAMWRITEDATA lsb: 0  msb: 0 OUTPUT
			this->MIREPLAYRAMWRITEENABLE = MIREPLAYRAMWRITEENABLE; // net ID: MIREPLAYRAMWRITEENABLE lsb: 0  msb: 0 OUTPUT
			this->MIREQUESTRAMREADADDRESSA = MIREQUESTRAMREADADDRESSA; // net ID: MIREQUESTRAMREADADDRESSA lsb: 0  msb: 0 OUTPUT
			this->MIREQUESTRAMREADADDRESSB = MIREQUESTRAMREADADDRESSB; // net ID: MIREQUESTRAMREADADDRESSB lsb: 0  msb: 0 OUTPUT
			this->MIREQUESTRAMREADENABLE = MIREQUESTRAMREADENABLE; // net ID: MIREQUESTRAMREADENABLE lsb: 0  msb: 0 OUTPUT
			this->MIREQUESTRAMWRITEADDRESSA = MIREQUESTRAMWRITEADDRESSA; // net ID: MIREQUESTRAMWRITEADDRESSA lsb: 0  msb: 0 OUTPUT
			this->MIREQUESTRAMWRITEADDRESSB = MIREQUESTRAMWRITEADDRESSB; // net ID: MIREQUESTRAMWRITEADDRESSB lsb: 0  msb: 0 OUTPUT
			this->MIREQUESTRAMWRITEDATA = MIREQUESTRAMWRITEDATA; // net ID: MIREQUESTRAMWRITEDATA lsb: 0  msb: 0 OUTPUT
			this->MIREQUESTRAMWRITEENABLE = MIREQUESTRAMWRITEENABLE; // net ID: MIREQUESTRAMWRITEENABLE lsb: 0  msb: 0 OUTPUT
			this->PCIECQNPREQCOUNT = PCIECQNPREQCOUNT; // net ID: PCIECQNPREQCOUNT lsb: 0  msb: 0 OUTPUT
			this->PCIERQSEQNUM = PCIERQSEQNUM; // net ID: PCIERQSEQNUM lsb: 0  msb: 0 OUTPUT
			this->PCIERQSEQNUMVLD = PCIERQSEQNUMVLD; // net ID: PCIERQSEQNUMVLD lsb: 0  msb: 0 OUTPUT
			this->PCIERQTAG = PCIERQTAG; // net ID: PCIERQTAG lsb: 0  msb: 0 OUTPUT
			this->PCIERQTAGAV = PCIERQTAGAV; // net ID: PCIERQTAGAV lsb: 0  msb: 0 OUTPUT
			this->PCIERQTAGVLD = PCIERQTAGVLD; // net ID: PCIERQTAGVLD lsb: 0  msb: 0 OUTPUT
			this->PCIETFCNPDAV = PCIETFCNPDAV; // net ID: PCIETFCNPDAV lsb: 0  msb: 0 OUTPUT
			this->PCIETFCNPHAV = PCIETFCNPHAV; // net ID: PCIETFCNPHAV lsb: 0  msb: 0 OUTPUT
			this->PIPERX0EQCONTROL = PIPERX0EQCONTROL; // net ID: PIPERX0EQCONTROL lsb: 0  msb: 0 OUTPUT
			this->PIPERX0EQLPLFFS = PIPERX0EQLPLFFS; // net ID: PIPERX0EQLPLFFS lsb: 0  msb: 0 OUTPUT
			this->PIPERX0EQLPTXPRESET = PIPERX0EQLPTXPRESET; // net ID: PIPERX0EQLPTXPRESET lsb: 0  msb: 0 OUTPUT
			this->PIPERX0EQPRESET = PIPERX0EQPRESET; // net ID: PIPERX0EQPRESET lsb: 0  msb: 0 OUTPUT
			this->PIPERX0POLARITY = PIPERX0POLARITY; // net ID: PIPERX0POLARITY lsb: 0  msb: 0 OUTPUT
			this->PIPERX1EQCONTROL = PIPERX1EQCONTROL; // net ID: PIPERX1EQCONTROL lsb: 0  msb: 0 OUTPUT
			this->PIPERX1EQLPLFFS = PIPERX1EQLPLFFS; // net ID: PIPERX1EQLPLFFS lsb: 0  msb: 0 OUTPUT
			this->PIPERX1EQLPTXPRESET = PIPERX1EQLPTXPRESET; // net ID: PIPERX1EQLPTXPRESET lsb: 0  msb: 0 OUTPUT
			this->PIPERX1EQPRESET = PIPERX1EQPRESET; // net ID: PIPERX1EQPRESET lsb: 0  msb: 0 OUTPUT
			this->PIPERX1POLARITY = PIPERX1POLARITY; // net ID: PIPERX1POLARITY lsb: 0  msb: 0 OUTPUT
			this->PIPERX2EQCONTROL = PIPERX2EQCONTROL; // net ID: PIPERX2EQCONTROL lsb: 0  msb: 0 OUTPUT
			this->PIPERX2EQLPLFFS = PIPERX2EQLPLFFS; // net ID: PIPERX2EQLPLFFS lsb: 0  msb: 0 OUTPUT
			this->PIPERX2EQLPTXPRESET = PIPERX2EQLPTXPRESET; // net ID: PIPERX2EQLPTXPRESET lsb: 0  msb: 0 OUTPUT
			this->PIPERX2EQPRESET = PIPERX2EQPRESET; // net ID: PIPERX2EQPRESET lsb: 0  msb: 0 OUTPUT
			this->PIPERX2POLARITY = PIPERX2POLARITY; // net ID: PIPERX2POLARITY lsb: 0  msb: 0 OUTPUT
			this->PIPERX3EQCONTROL = PIPERX3EQCONTROL; // net ID: PIPERX3EQCONTROL lsb: 0  msb: 0 OUTPUT
			this->PIPERX3EQLPLFFS = PIPERX3EQLPLFFS; // net ID: PIPERX3EQLPLFFS lsb: 0  msb: 0 OUTPUT
			this->PIPERX3EQLPTXPRESET = PIPERX3EQLPTXPRESET; // net ID: PIPERX3EQLPTXPRESET lsb: 0  msb: 0 OUTPUT
			this->PIPERX3EQPRESET = PIPERX3EQPRESET; // net ID: PIPERX3EQPRESET lsb: 0  msb: 0 OUTPUT
			this->PIPERX3POLARITY = PIPERX3POLARITY; // net ID: PIPERX3POLARITY lsb: 0  msb: 0 OUTPUT
			this->PIPERX4EQCONTROL = PIPERX4EQCONTROL; // net ID: PIPERX4EQCONTROL lsb: 0  msb: 0 OUTPUT
			this->PIPERX4EQLPLFFS = PIPERX4EQLPLFFS; // net ID: PIPERX4EQLPLFFS lsb: 0  msb: 0 OUTPUT
			this->PIPERX4EQLPTXPRESET = PIPERX4EQLPTXPRESET; // net ID: PIPERX4EQLPTXPRESET lsb: 0  msb: 0 OUTPUT
			this->PIPERX4EQPRESET = PIPERX4EQPRESET; // net ID: PIPERX4EQPRESET lsb: 0  msb: 0 OUTPUT
			this->PIPERX4POLARITY = PIPERX4POLARITY; // net ID: PIPERX4POLARITY lsb: 0  msb: 0 OUTPUT
			this->PIPERX5EQCONTROL = PIPERX5EQCONTROL; // net ID: PIPERX5EQCONTROL lsb: 0  msb: 0 OUTPUT
			this->PIPERX5EQLPLFFS = PIPERX5EQLPLFFS; // net ID: PIPERX5EQLPLFFS lsb: 0  msb: 0 OUTPUT
			this->PIPERX5EQLPTXPRESET = PIPERX5EQLPTXPRESET; // net ID: PIPERX5EQLPTXPRESET lsb: 0  msb: 0 OUTPUT
			this->PIPERX5EQPRESET = PIPERX5EQPRESET; // net ID: PIPERX5EQPRESET lsb: 0  msb: 0 OUTPUT
			this->PIPERX5POLARITY = PIPERX5POLARITY; // net ID: PIPERX5POLARITY lsb: 0  msb: 0 OUTPUT
			this->PIPERX6EQCONTROL = PIPERX6EQCONTROL; // net ID: PIPERX6EQCONTROL lsb: 0  msb: 0 OUTPUT
			this->PIPERX6EQLPLFFS = PIPERX6EQLPLFFS; // net ID: PIPERX6EQLPLFFS lsb: 0  msb: 0 OUTPUT
			this->PIPERX6EQLPTXPRESET = PIPERX6EQLPTXPRESET; // net ID: PIPERX6EQLPTXPRESET lsb: 0  msb: 0 OUTPUT
			this->PIPERX6EQPRESET = PIPERX6EQPRESET; // net ID: PIPERX6EQPRESET lsb: 0  msb: 0 OUTPUT
			this->PIPERX6POLARITY = PIPERX6POLARITY; // net ID: PIPERX6POLARITY lsb: 0  msb: 0 OUTPUT
			this->PIPERX7EQCONTROL = PIPERX7EQCONTROL; // net ID: PIPERX7EQCONTROL lsb: 0  msb: 0 OUTPUT
			this->PIPERX7EQLPLFFS = PIPERX7EQLPLFFS; // net ID: PIPERX7EQLPLFFS lsb: 0  msb: 0 OUTPUT
			this->PIPERX7EQLPTXPRESET = PIPERX7EQLPTXPRESET; // net ID: PIPERX7EQLPTXPRESET lsb: 0  msb: 0 OUTPUT
			this->PIPERX7EQPRESET = PIPERX7EQPRESET; // net ID: PIPERX7EQPRESET lsb: 0  msb: 0 OUTPUT
			this->PIPERX7POLARITY = PIPERX7POLARITY; // net ID: PIPERX7POLARITY lsb: 0  msb: 0 OUTPUT
			this->PIPETX0CHARISK = PIPETX0CHARISK; // net ID: PIPETX0CHARISK lsb: 0  msb: 0 OUTPUT
			this->PIPETX0COMPLIANCE = PIPETX0COMPLIANCE; // net ID: PIPETX0COMPLIANCE lsb: 0  msb: 0 OUTPUT
			this->PIPETX0DATA = PIPETX0DATA; // net ID: PIPETX0DATA lsb: 0  msb: 0 OUTPUT
			this->PIPETX0DATAVALID = PIPETX0DATAVALID; // net ID: PIPETX0DATAVALID lsb: 0  msb: 0 OUTPUT
			this->PIPETX0ELECIDLE = PIPETX0ELECIDLE; // net ID: PIPETX0ELECIDLE lsb: 0  msb: 0 OUTPUT
			this->PIPETX0EQCONTROL = PIPETX0EQCONTROL; // net ID: PIPETX0EQCONTROL lsb: 0  msb: 0 OUTPUT
			this->PIPETX0EQDEEMPH = PIPETX0EQDEEMPH; // net ID: PIPETX0EQDEEMPH lsb: 0  msb: 0 OUTPUT
			this->PIPETX0EQPRESET = PIPETX0EQPRESET; // net ID: PIPETX0EQPRESET lsb: 0  msb: 0 OUTPUT
			this->PIPETX0POWERDOWN = PIPETX0POWERDOWN; // net ID: PIPETX0POWERDOWN lsb: 0  msb: 0 OUTPUT
			this->PIPETX0STARTBLOCK = PIPETX0STARTBLOCK; // net ID: PIPETX0STARTBLOCK lsb: 0  msb: 0 OUTPUT
			this->PIPETX0SYNCHEADER = PIPETX0SYNCHEADER; // net ID: PIPETX0SYNCHEADER lsb: 0  msb: 0 OUTPUT
			this->PIPETX1CHARISK = PIPETX1CHARISK; // net ID: PIPETX1CHARISK lsb: 0  msb: 0 OUTPUT
			this->PIPETX1COMPLIANCE = PIPETX1COMPLIANCE; // net ID: PIPETX1COMPLIANCE lsb: 0  msb: 0 OUTPUT
			this->PIPETX1DATA = PIPETX1DATA; // net ID: PIPETX1DATA lsb: 0  msb: 0 OUTPUT
			this->PIPETX1DATAVALID = PIPETX1DATAVALID; // net ID: PIPETX1DATAVALID lsb: 0  msb: 0 OUTPUT
			this->PIPETX1ELECIDLE = PIPETX1ELECIDLE; // net ID: PIPETX1ELECIDLE lsb: 0  msb: 0 OUTPUT
			this->PIPETX1EQCONTROL = PIPETX1EQCONTROL; // net ID: PIPETX1EQCONTROL lsb: 0  msb: 0 OUTPUT
			this->PIPETX1EQDEEMPH = PIPETX1EQDEEMPH; // net ID: PIPETX1EQDEEMPH lsb: 0  msb: 0 OUTPUT
			this->PIPETX1EQPRESET = PIPETX1EQPRESET; // net ID: PIPETX1EQPRESET lsb: 0  msb: 0 OUTPUT
			this->PIPETX1POWERDOWN = PIPETX1POWERDOWN; // net ID: PIPETX1POWERDOWN lsb: 0  msb: 0 OUTPUT
			this->PIPETX1STARTBLOCK = PIPETX1STARTBLOCK; // net ID: PIPETX1STARTBLOCK lsb: 0  msb: 0 OUTPUT
			this->PIPETX1SYNCHEADER = PIPETX1SYNCHEADER; // net ID: PIPETX1SYNCHEADER lsb: 0  msb: 0 OUTPUT
			this->PIPETX2CHARISK = PIPETX2CHARISK; // net ID: PIPETX2CHARISK lsb: 0  msb: 0 OUTPUT
			this->PIPETX2COMPLIANCE = PIPETX2COMPLIANCE; // net ID: PIPETX2COMPLIANCE lsb: 0  msb: 0 OUTPUT
			this->PIPETX2DATA = PIPETX2DATA; // net ID: PIPETX2DATA lsb: 0  msb: 0 OUTPUT
			this->PIPETX2DATAVALID = PIPETX2DATAVALID; // net ID: PIPETX2DATAVALID lsb: 0  msb: 0 OUTPUT
			this->PIPETX2ELECIDLE = PIPETX2ELECIDLE; // net ID: PIPETX2ELECIDLE lsb: 0  msb: 0 OUTPUT
			this->PIPETX2EQCONTROL = PIPETX2EQCONTROL; // net ID: PIPETX2EQCONTROL lsb: 0  msb: 0 OUTPUT
			this->PIPETX2EQDEEMPH = PIPETX2EQDEEMPH; // net ID: PIPETX2EQDEEMPH lsb: 0  msb: 0 OUTPUT
			this->PIPETX2EQPRESET = PIPETX2EQPRESET; // net ID: PIPETX2EQPRESET lsb: 0  msb: 0 OUTPUT
			this->PIPETX2POWERDOWN = PIPETX2POWERDOWN; // net ID: PIPETX2POWERDOWN lsb: 0  msb: 0 OUTPUT
			this->PIPETX2STARTBLOCK = PIPETX2STARTBLOCK; // net ID: PIPETX2STARTBLOCK lsb: 0  msb: 0 OUTPUT
			this->PIPETX2SYNCHEADER = PIPETX2SYNCHEADER; // net ID: PIPETX2SYNCHEADER lsb: 0  msb: 0 OUTPUT
			this->PIPETX3CHARISK = PIPETX3CHARISK; // net ID: PIPETX3CHARISK lsb: 0  msb: 0 OUTPUT
			this->PIPETX3COMPLIANCE = PIPETX3COMPLIANCE; // net ID: PIPETX3COMPLIANCE lsb: 0  msb: 0 OUTPUT
			this->PIPETX3DATA = PIPETX3DATA; // net ID: PIPETX3DATA lsb: 0  msb: 0 OUTPUT
			this->PIPETX3DATAVALID = PIPETX3DATAVALID; // net ID: PIPETX3DATAVALID lsb: 0  msb: 0 OUTPUT
			this->PIPETX3ELECIDLE = PIPETX3ELECIDLE; // net ID: PIPETX3ELECIDLE lsb: 0  msb: 0 OUTPUT
			this->PIPETX3EQCONTROL = PIPETX3EQCONTROL; // net ID: PIPETX3EQCONTROL lsb: 0  msb: 0 OUTPUT
			this->PIPETX3EQDEEMPH = PIPETX3EQDEEMPH; // net ID: PIPETX3EQDEEMPH lsb: 0  msb: 0 OUTPUT
			this->PIPETX3EQPRESET = PIPETX3EQPRESET; // net ID: PIPETX3EQPRESET lsb: 0  msb: 0 OUTPUT
			this->PIPETX3POWERDOWN = PIPETX3POWERDOWN; // net ID: PIPETX3POWERDOWN lsb: 0  msb: 0 OUTPUT
			this->PIPETX3STARTBLOCK = PIPETX3STARTBLOCK; // net ID: PIPETX3STARTBLOCK lsb: 0  msb: 0 OUTPUT
			this->PIPETX3SYNCHEADER = PIPETX3SYNCHEADER; // net ID: PIPETX3SYNCHEADER lsb: 0  msb: 0 OUTPUT
			this->PIPETX4CHARISK = PIPETX4CHARISK; // net ID: PIPETX4CHARISK lsb: 0  msb: 0 OUTPUT
			this->PIPETX4COMPLIANCE = PIPETX4COMPLIANCE; // net ID: PIPETX4COMPLIANCE lsb: 0  msb: 0 OUTPUT
			this->PIPETX4DATA = PIPETX4DATA; // net ID: PIPETX4DATA lsb: 0  msb: 0 OUTPUT
			this->PIPETX4DATAVALID = PIPETX4DATAVALID; // net ID: PIPETX4DATAVALID lsb: 0  msb: 0 OUTPUT
			this->PIPETX4ELECIDLE = PIPETX4ELECIDLE; // net ID: PIPETX4ELECIDLE lsb: 0  msb: 0 OUTPUT
			this->PIPETX4EQCONTROL = PIPETX4EQCONTROL; // net ID: PIPETX4EQCONTROL lsb: 0  msb: 0 OUTPUT
			this->PIPETX4EQDEEMPH = PIPETX4EQDEEMPH; // net ID: PIPETX4EQDEEMPH lsb: 0  msb: 0 OUTPUT
			this->PIPETX4EQPRESET = PIPETX4EQPRESET; // net ID: PIPETX4EQPRESET lsb: 0  msb: 0 OUTPUT
			this->PIPETX4POWERDOWN = PIPETX4POWERDOWN; // net ID: PIPETX4POWERDOWN lsb: 0  msb: 0 OUTPUT
			this->PIPETX4STARTBLOCK = PIPETX4STARTBLOCK; // net ID: PIPETX4STARTBLOCK lsb: 0  msb: 0 OUTPUT
			this->PIPETX4SYNCHEADER = PIPETX4SYNCHEADER; // net ID: PIPETX4SYNCHEADER lsb: 0  msb: 0 OUTPUT
			this->PIPETX5CHARISK = PIPETX5CHARISK; // net ID: PIPETX5CHARISK lsb: 0  msb: 0 OUTPUT
			this->PIPETX5COMPLIANCE = PIPETX5COMPLIANCE; // net ID: PIPETX5COMPLIANCE lsb: 0  msb: 0 OUTPUT
			this->PIPETX5DATA = PIPETX5DATA; // net ID: PIPETX5DATA lsb: 0  msb: 0 OUTPUT
			this->PIPETX5DATAVALID = PIPETX5DATAVALID; // net ID: PIPETX5DATAVALID lsb: 0  msb: 0 OUTPUT
			this->PIPETX5ELECIDLE = PIPETX5ELECIDLE; // net ID: PIPETX5ELECIDLE lsb: 0  msb: 0 OUTPUT
			this->PIPETX5EQCONTROL = PIPETX5EQCONTROL; // net ID: PIPETX5EQCONTROL lsb: 0  msb: 0 OUTPUT
			this->PIPETX5EQDEEMPH = PIPETX5EQDEEMPH; // net ID: PIPETX5EQDEEMPH lsb: 0  msb: 0 OUTPUT
			this->PIPETX5EQPRESET = PIPETX5EQPRESET; // net ID: PIPETX5EQPRESET lsb: 0  msb: 0 OUTPUT
			this->PIPETX5POWERDOWN = PIPETX5POWERDOWN; // net ID: PIPETX5POWERDOWN lsb: 0  msb: 0 OUTPUT
			this->PIPETX5STARTBLOCK = PIPETX5STARTBLOCK; // net ID: PIPETX5STARTBLOCK lsb: 0  msb: 0 OUTPUT
			this->PIPETX5SYNCHEADER = PIPETX5SYNCHEADER; // net ID: PIPETX5SYNCHEADER lsb: 0  msb: 0 OUTPUT
			this->PIPETX6CHARISK = PIPETX6CHARISK; // net ID: PIPETX6CHARISK lsb: 0  msb: 0 OUTPUT
			this->PIPETX6COMPLIANCE = PIPETX6COMPLIANCE; // net ID: PIPETX6COMPLIANCE lsb: 0  msb: 0 OUTPUT
			this->PIPETX6DATA = PIPETX6DATA; // net ID: PIPETX6DATA lsb: 0  msb: 0 OUTPUT
			this->PIPETX6DATAVALID = PIPETX6DATAVALID; // net ID: PIPETX6DATAVALID lsb: 0  msb: 0 OUTPUT
			this->PIPETX6ELECIDLE = PIPETX6ELECIDLE; // net ID: PIPETX6ELECIDLE lsb: 0  msb: 0 OUTPUT
			this->PIPETX6EQCONTROL = PIPETX6EQCONTROL; // net ID: PIPETX6EQCONTROL lsb: 0  msb: 0 OUTPUT
			this->PIPETX6EQDEEMPH = PIPETX6EQDEEMPH; // net ID: PIPETX6EQDEEMPH lsb: 0  msb: 0 OUTPUT
			this->PIPETX6EQPRESET = PIPETX6EQPRESET; // net ID: PIPETX6EQPRESET lsb: 0  msb: 0 OUTPUT
			this->PIPETX6POWERDOWN = PIPETX6POWERDOWN; // net ID: PIPETX6POWERDOWN lsb: 0  msb: 0 OUTPUT
			this->PIPETX6STARTBLOCK = PIPETX6STARTBLOCK; // net ID: PIPETX6STARTBLOCK lsb: 0  msb: 0 OUTPUT
			this->PIPETX6SYNCHEADER = PIPETX6SYNCHEADER; // net ID: PIPETX6SYNCHEADER lsb: 0  msb: 0 OUTPUT
			this->PIPETX7CHARISK = PIPETX7CHARISK; // net ID: PIPETX7CHARISK lsb: 0  msb: 0 OUTPUT
			this->PIPETX7COMPLIANCE = PIPETX7COMPLIANCE; // net ID: PIPETX7COMPLIANCE lsb: 0  msb: 0 OUTPUT
			this->PIPETX7DATA = PIPETX7DATA; // net ID: PIPETX7DATA lsb: 0  msb: 0 OUTPUT
			this->PIPETX7DATAVALID = PIPETX7DATAVALID; // net ID: PIPETX7DATAVALID lsb: 0  msb: 0 OUTPUT
			this->PIPETX7ELECIDLE = PIPETX7ELECIDLE; // net ID: PIPETX7ELECIDLE lsb: 0  msb: 0 OUTPUT
			this->PIPETX7EQCONTROL = PIPETX7EQCONTROL; // net ID: PIPETX7EQCONTROL lsb: 0  msb: 0 OUTPUT
			this->PIPETX7EQDEEMPH = PIPETX7EQDEEMPH; // net ID: PIPETX7EQDEEMPH lsb: 0  msb: 0 OUTPUT
			this->PIPETX7EQPRESET = PIPETX7EQPRESET; // net ID: PIPETX7EQPRESET lsb: 0  msb: 0 OUTPUT
			this->PIPETX7POWERDOWN = PIPETX7POWERDOWN; // net ID: PIPETX7POWERDOWN lsb: 0  msb: 0 OUTPUT
			this->PIPETX7STARTBLOCK = PIPETX7STARTBLOCK; // net ID: PIPETX7STARTBLOCK lsb: 0  msb: 0 OUTPUT
			this->PIPETX7SYNCHEADER = PIPETX7SYNCHEADER; // net ID: PIPETX7SYNCHEADER lsb: 0  msb: 0 OUTPUT
			this->PIPETXDEEMPH = PIPETXDEEMPH; // net ID: PIPETXDEEMPH lsb: 0  msb: 0 OUTPUT
			this->PIPETXMARGIN = PIPETXMARGIN; // net ID: PIPETXMARGIN lsb: 0  msb: 0 OUTPUT
			this->PIPETXRATE = PIPETXRATE; // net ID: PIPETXRATE lsb: 0  msb: 0 OUTPUT
			this->PIPETXRCVRDET = PIPETXRCVRDET; // net ID: PIPETXRCVRDET lsb: 0  msb: 0 OUTPUT
			this->PIPETXRESET = PIPETXRESET; // net ID: PIPETXRESET lsb: 0  msb: 0 OUTPUT
			this->PIPETXSWING = PIPETXSWING; // net ID: PIPETXSWING lsb: 0  msb: 0 OUTPUT
			this->PLEQINPROGRESS = PLEQINPROGRESS; // net ID: PLEQINPROGRESS lsb: 0  msb: 0 OUTPUT
			this->PLEQPHASE = PLEQPHASE; // net ID: PLEQPHASE lsb: 0  msb: 0 OUTPUT
			this->PLGEN3PCSRXSLIDE = PLGEN3PCSRXSLIDE; // net ID: PLGEN3PCSRXSLIDE lsb: 0  msb: 0 OUTPUT
			this->SAXISCCTREADY = SAXISCCTREADY; // net ID: SAXISCCTREADY lsb: 0  msb: 0 OUTPUT
			this->SAXISRQTREADY = SAXISRQTREADY; // net ID: SAXISRQTREADY lsb: 0  msb: 0 OUTPUT
			this->CFGCONFIGSPACEENABLE = CFGCONFIGSPACEENABLE; // net ID: CFGCONFIGSPACEENABLE lsb: 0  msb: 0 INPUT
			this->CFGDEVID = CFGDEVID; // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
			this->CFGDSBUSNUMBER = CFGDSBUSNUMBER; // net ID: CFGDSBUSNUMBER lsb: 0  msb: 7 INPUT
			this->CFGDSDEVICENUMBER = CFGDSDEVICENUMBER; // net ID: CFGDSDEVICENUMBER lsb: 0  msb: 4 INPUT
			this->CFGDSFUNCTIONNUMBER = CFGDSFUNCTIONNUMBER; // net ID: CFGDSFUNCTIONNUMBER lsb: 0  msb: 2 INPUT
			this->CFGDSN = CFGDSN; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSPORTNUMBER = CFGDSPORTNUMBER; // net ID: CFGDSPORTNUMBER lsb: 0  msb: 7 INPUT
			this->CFGERRCORIN = CFGERRCORIN; // net ID: CFGERRCORIN lsb: 0  msb: 0 INPUT
			this->CFGERRUNCORIN = CFGERRUNCORIN; // net ID: CFGERRUNCORIN lsb: 0  msb: 0 INPUT
			this->CFGEXTREADDATA = CFGEXTREADDATA; // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
			this->CFGEXTREADDATAVALID = CFGEXTREADDATAVALID; // net ID: CFGEXTREADDATAVALID lsb: 0  msb: 0 INPUT
			this->CFGFCSEL = CFGFCSEL; // net ID: CFGFCSEL lsb: 0  msb: 2 INPUT
			this->CFGFLRDONE = CFGFLRDONE; // net ID: CFGFLRDONE lsb: 0  msb: 1 INPUT
			this->CFGHOTRESETIN = CFGHOTRESETIN; // net ID: CFGHOTRESETIN lsb: 0  msb: 0 INPUT
			this->CFGINPUTUPDATEREQUEST = CFGINPUTUPDATEREQUEST; // net ID: CFGINPUTUPDATEREQUEST lsb: 0  msb: 0 INPUT
			this->CFGINTERRUPTINT = CFGINTERRUPTINT; // net ID: CFGINTERRUPTINT lsb: 0  msb: 3 INPUT
			this->CFGINTERRUPTMSIATTR = CFGINTERRUPTMSIATTR; // net ID: CFGINTERRUPTMSIATTR lsb: 0  msb: 2 INPUT
			this->CFGINTERRUPTMSIFUNCTIONNUMBER = CFGINTERRUPTMSIFUNCTIONNUMBER; // net ID: CFGINTERRUPTMSIFUNCTIONNUMBER lsb: 0  msb: 2 INPUT
			this->CFGINTERRUPTMSIINT = CFGINTERRUPTMSIINT; // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
			this->CFGINTERRUPTMSIPENDINGSTATUS = CFGINTERRUPTMSIPENDINGSTATUS; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSISELECT = CFGINTERRUPTMSISELECT; // net ID: CFGINTERRUPTMSISELECT lsb: 0  msb: 3 INPUT
			this->CFGINTERRUPTMSITPHPRESENT = CFGINTERRUPTMSITPHPRESENT; // net ID: CFGINTERRUPTMSITPHPRESENT lsb: 0  msb: 0 INPUT
			this->CFGINTERRUPTMSITPHSTTAG = CFGINTERRUPTMSITPHSTTAG; // net ID: CFGINTERRUPTMSITPHSTTAG lsb: 0  msb: 8 INPUT
			this->CFGINTERRUPTMSITPHTYPE = CFGINTERRUPTMSITPHTYPE; // net ID: CFGINTERRUPTMSITPHTYPE lsb: 0  msb: 1 INPUT
			this->CFGINTERRUPTMSIXADDRESS = CFGINTERRUPTMSIXADDRESS; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIXDATA = CFGINTERRUPTMSIXDATA; // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
			this->CFGINTERRUPTMSIXINT = CFGINTERRUPTMSIXINT; // net ID: CFGINTERRUPTMSIXINT lsb: 0  msb: 0 INPUT
			this->CFGINTERRUPTPENDING = CFGINTERRUPTPENDING; // net ID: CFGINTERRUPTPENDING lsb: 0  msb: 1 INPUT
			this->CFGLINKTRAININGENABLE = CFGLINKTRAININGENABLE; // net ID: CFGLINKTRAININGENABLE lsb: 0  msb: 0 INPUT
			this->CFGMCUPDATEREQUEST = CFGMCUPDATEREQUEST; // net ID: CFGMCUPDATEREQUEST lsb: 0  msb: 0 INPUT
			this->CFGMGMTADDR = CFGMGMTADDR; // net ID: CFGMGMTADDR lsb: 0  msb: 18 INPUT
			this->CFGMGMTBYTEENABLE = CFGMGMTBYTEENABLE; // net ID: CFGMGMTBYTEENABLE lsb: 0  msb: 3 INPUT
			this->CFGMGMTREAD = CFGMGMTREAD; // net ID: CFGMGMTREAD lsb: 0  msb: 0 INPUT
			this->CFGMGMTTYPE1CFGREGACCESS = CFGMGMTTYPE1CFGREGACCESS; // net ID: CFGMGMTTYPE1CFGREGACCESS lsb: 0  msb: 0 INPUT
			this->CFGMGMTWRITE = CFGMGMTWRITE; // net ID: CFGMGMTWRITE lsb: 0  msb: 0 INPUT
			this->CFGMGMTWRITEDATA = CFGMGMTWRITEDATA; // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
			this->CFGMSGTRANSMIT = CFGMSGTRANSMIT; // net ID: CFGMSGTRANSMIT lsb: 0  msb: 0 INPUT
			this->CFGMSGTRANSMITDATA = CFGMSGTRANSMITDATA; // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
			this->CFGMSGTRANSMITTYPE = CFGMSGTRANSMITTYPE; // net ID: CFGMSGTRANSMITTYPE lsb: 0  msb: 2 INPUT
			this->CFGPERFUNCSTATUSCONTROL = CFGPERFUNCSTATUSCONTROL; // net ID: CFGPERFUNCSTATUSCONTROL lsb: 0  msb: 2 INPUT
			this->CFGPERFUNCTIONNUMBER = CFGPERFUNCTIONNUMBER; // net ID: CFGPERFUNCTIONNUMBER lsb: 0  msb: 2 INPUT
			this->CFGPERFUNCTIONOUTPUTREQUEST = CFGPERFUNCTIONOUTPUTREQUEST; // net ID: CFGPERFUNCTIONOUTPUTREQUEST lsb: 0  msb: 0 INPUT
			this->CFGPOWERSTATECHANGEACK = CFGPOWERSTATECHANGEACK; // net ID: CFGPOWERSTATECHANGEACK lsb: 0  msb: 0 INPUT
			this->CFGREQPMTRANSITIONL23READY = CFGREQPMTRANSITIONL23READY; // net ID: CFGREQPMTRANSITIONL23READY lsb: 0  msb: 0 INPUT
			this->CFGREVID = CFGREVID; // net ID: CFGREVID lsb: 0  msb: 7 INPUT
			this->CFGSUBSYSID = CFGSUBSYSID; // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
			this->CFGSUBSYSVENDID = CFGSUBSYSVENDID; // net ID: CFGSUBSYSVENDID lsb: 0  msb: 15 INPUT
			this->CFGTPHSTTREADDATA = CFGTPHSTTREADDATA; // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
			this->CFGTPHSTTREADDATAVALID = CFGTPHSTTREADDATAVALID; // net ID: CFGTPHSTTREADDATAVALID lsb: 0  msb: 0 INPUT
			this->CFGVENDID = CFGVENDID; // net ID: CFGVENDID lsb: 0  msb: 15 INPUT
			this->CFGVFFLRDONE = CFGVFFLRDONE; // net ID: CFGVFFLRDONE lsb: 0  msb: 5 INPUT
			this->CORECLK = CORECLK; // net ID: CORECLK lsb: 0  msb: 0 INPUT
			this->CORECLKMICOMPLETIONRAML = CORECLKMICOMPLETIONRAML; // net ID: CORECLKMICOMPLETIONRAML lsb: 0  msb: 0 INPUT
			this->CORECLKMICOMPLETIONRAMU = CORECLKMICOMPLETIONRAMU; // net ID: CORECLKMICOMPLETIONRAMU lsb: 0  msb: 0 INPUT
			this->CORECLKMIREPLAYRAM = CORECLKMIREPLAYRAM; // net ID: CORECLKMIREPLAYRAM lsb: 0  msb: 0 INPUT
			this->CORECLKMIREQUESTRAM = CORECLKMIREQUESTRAM; // net ID: CORECLKMIREQUESTRAM lsb: 0  msb: 0 INPUT
			this->DRPADDR = DRPADDR; // net ID: DRPADDR lsb: 0  msb: 10 INPUT
			this->DRPCLK = DRPCLK; // net ID: DRPCLK lsb: 0  msb: 0 INPUT
			this->DRPDI = DRPDI; // net ID: DRPDI lsb: 0  msb: 15 INPUT
			this->DRPEN = DRPEN; // net ID: DRPEN lsb: 0  msb: 0 INPUT
			this->DRPWE = DRPWE; // net ID: DRPWE lsb: 0  msb: 0 INPUT
			this->MAXISCQTREADY = MAXISCQTREADY; // net ID: MAXISCQTREADY lsb: 0  msb: 21 INPUT
			this->MAXISRCTREADY = MAXISRCTREADY; // net ID: MAXISRCTREADY lsb: 0  msb: 21 INPUT
			this->MGMTRESETN = MGMTRESETN; // net ID: MGMTRESETN lsb: 0  msb: 0 INPUT
			this->MGMTSTICKYRESETN = MGMTSTICKYRESETN; // net ID: MGMTSTICKYRESETN lsb: 0  msb: 0 INPUT
			this->MICOMPLETIONRAMREADDATA = MICOMPLETIONRAMREADDATA; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA = MIREPLAYRAMREADDATA; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA = MIREQUESTRAMREADDATA; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->PCIECQNPREQ = PCIECQNPREQ; // net ID: PCIECQNPREQ lsb: 0  msb: 0 INPUT
			this->PIPECLK = PIPECLK; // net ID: PIPECLK lsb: 0  msb: 0 INPUT
			this->PIPEEQFS = PIPEEQFS; // net ID: PIPEEQFS lsb: 0  msb: 5 INPUT
			this->PIPEEQLF = PIPEEQLF; // net ID: PIPEEQLF lsb: 0  msb: 5 INPUT
			this->PIPERESETN = PIPERESETN; // net ID: PIPERESETN lsb: 0  msb: 0 INPUT
			this->PIPERX0CHARISK = PIPERX0CHARISK; // net ID: PIPERX0CHARISK lsb: 0  msb: 1 INPUT
			this->PIPERX0DATA = PIPERX0DATA; // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
			this->PIPERX0DATAVALID = PIPERX0DATAVALID; // net ID: PIPERX0DATAVALID lsb: 0  msb: 0 INPUT
			this->PIPERX0ELECIDLE = PIPERX0ELECIDLE; // net ID: PIPERX0ELECIDLE lsb: 0  msb: 0 INPUT
			this->PIPERX0EQDONE = PIPERX0EQDONE; // net ID: PIPERX0EQDONE lsb: 0  msb: 0 INPUT
			this->PIPERX0EQLPADAPTDONE = PIPERX0EQLPADAPTDONE; // net ID: PIPERX0EQLPADAPTDONE lsb: 0  msb: 0 INPUT
			this->PIPERX0EQLPLFFSSEL = PIPERX0EQLPLFFSSEL; // net ID: PIPERX0EQLPLFFSSEL lsb: 0  msb: 0 INPUT
			this->PIPERX0EQLPNEWTXCOEFFORPRESET = PIPERX0EQLPNEWTXCOEFFORPRESET; // net ID: PIPERX0EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX0PHYSTATUS = PIPERX0PHYSTATUS; // net ID: PIPERX0PHYSTATUS lsb: 0  msb: 0 INPUT
			this->PIPERX0STARTBLOCK = PIPERX0STARTBLOCK; // net ID: PIPERX0STARTBLOCK lsb: 0  msb: 0 INPUT
			this->PIPERX0STATUS = PIPERX0STATUS; // net ID: PIPERX0STATUS lsb: 0  msb: 2 INPUT
			this->PIPERX0SYNCHEADER = PIPERX0SYNCHEADER; // net ID: PIPERX0SYNCHEADER lsb: 0  msb: 1 INPUT
			this->PIPERX0VALID = PIPERX0VALID; // net ID: PIPERX0VALID lsb: 0  msb: 0 INPUT
			this->PIPERX1CHARISK = PIPERX1CHARISK; // net ID: PIPERX1CHARISK lsb: 0  msb: 1 INPUT
			this->PIPERX1DATA = PIPERX1DATA; // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
			this->PIPERX1DATAVALID = PIPERX1DATAVALID; // net ID: PIPERX1DATAVALID lsb: 0  msb: 0 INPUT
			this->PIPERX1ELECIDLE = PIPERX1ELECIDLE; // net ID: PIPERX1ELECIDLE lsb: 0  msb: 0 INPUT
			this->PIPERX1EQDONE = PIPERX1EQDONE; // net ID: PIPERX1EQDONE lsb: 0  msb: 0 INPUT
			this->PIPERX1EQLPADAPTDONE = PIPERX1EQLPADAPTDONE; // net ID: PIPERX1EQLPADAPTDONE lsb: 0  msb: 0 INPUT
			this->PIPERX1EQLPLFFSSEL = PIPERX1EQLPLFFSSEL; // net ID: PIPERX1EQLPLFFSSEL lsb: 0  msb: 0 INPUT
			this->PIPERX1EQLPNEWTXCOEFFORPRESET = PIPERX1EQLPNEWTXCOEFFORPRESET; // net ID: PIPERX1EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX1PHYSTATUS = PIPERX1PHYSTATUS; // net ID: PIPERX1PHYSTATUS lsb: 0  msb: 0 INPUT
			this->PIPERX1STARTBLOCK = PIPERX1STARTBLOCK; // net ID: PIPERX1STARTBLOCK lsb: 0  msb: 0 INPUT
			this->PIPERX1STATUS = PIPERX1STATUS; // net ID: PIPERX1STATUS lsb: 0  msb: 2 INPUT
			this->PIPERX1SYNCHEADER = PIPERX1SYNCHEADER; // net ID: PIPERX1SYNCHEADER lsb: 0  msb: 1 INPUT
			this->PIPERX1VALID = PIPERX1VALID; // net ID: PIPERX1VALID lsb: 0  msb: 0 INPUT
			this->PIPERX2CHARISK = PIPERX2CHARISK; // net ID: PIPERX2CHARISK lsb: 0  msb: 1 INPUT
			this->PIPERX2DATA = PIPERX2DATA; // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
			this->PIPERX2DATAVALID = PIPERX2DATAVALID; // net ID: PIPERX2DATAVALID lsb: 0  msb: 0 INPUT
			this->PIPERX2ELECIDLE = PIPERX2ELECIDLE; // net ID: PIPERX2ELECIDLE lsb: 0  msb: 0 INPUT
			this->PIPERX2EQDONE = PIPERX2EQDONE; // net ID: PIPERX2EQDONE lsb: 0  msb: 0 INPUT
			this->PIPERX2EQLPADAPTDONE = PIPERX2EQLPADAPTDONE; // net ID: PIPERX2EQLPADAPTDONE lsb: 0  msb: 0 INPUT
			this->PIPERX2EQLPLFFSSEL = PIPERX2EQLPLFFSSEL; // net ID: PIPERX2EQLPLFFSSEL lsb: 0  msb: 0 INPUT
			this->PIPERX2EQLPNEWTXCOEFFORPRESET = PIPERX2EQLPNEWTXCOEFFORPRESET; // net ID: PIPERX2EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX2PHYSTATUS = PIPERX2PHYSTATUS; // net ID: PIPERX2PHYSTATUS lsb: 0  msb: 0 INPUT
			this->PIPERX2STARTBLOCK = PIPERX2STARTBLOCK; // net ID: PIPERX2STARTBLOCK lsb: 0  msb: 0 INPUT
			this->PIPERX2STATUS = PIPERX2STATUS; // net ID: PIPERX2STATUS lsb: 0  msb: 2 INPUT
			this->PIPERX2SYNCHEADER = PIPERX2SYNCHEADER; // net ID: PIPERX2SYNCHEADER lsb: 0  msb: 1 INPUT
			this->PIPERX2VALID = PIPERX2VALID; // net ID: PIPERX2VALID lsb: 0  msb: 0 INPUT
			this->PIPERX3CHARISK = PIPERX3CHARISK; // net ID: PIPERX3CHARISK lsb: 0  msb: 1 INPUT
			this->PIPERX3DATA = PIPERX3DATA; // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
			this->PIPERX3DATAVALID = PIPERX3DATAVALID; // net ID: PIPERX3DATAVALID lsb: 0  msb: 0 INPUT
			this->PIPERX3ELECIDLE = PIPERX3ELECIDLE; // net ID: PIPERX3ELECIDLE lsb: 0  msb: 0 INPUT
			this->PIPERX3EQDONE = PIPERX3EQDONE; // net ID: PIPERX3EQDONE lsb: 0  msb: 0 INPUT
			this->PIPERX3EQLPADAPTDONE = PIPERX3EQLPADAPTDONE; // net ID: PIPERX3EQLPADAPTDONE lsb: 0  msb: 0 INPUT
			this->PIPERX3EQLPLFFSSEL = PIPERX3EQLPLFFSSEL; // net ID: PIPERX3EQLPLFFSSEL lsb: 0  msb: 0 INPUT
			this->PIPERX3EQLPNEWTXCOEFFORPRESET = PIPERX3EQLPNEWTXCOEFFORPRESET; // net ID: PIPERX3EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX3PHYSTATUS = PIPERX3PHYSTATUS; // net ID: PIPERX3PHYSTATUS lsb: 0  msb: 0 INPUT
			this->PIPERX3STARTBLOCK = PIPERX3STARTBLOCK; // net ID: PIPERX3STARTBLOCK lsb: 0  msb: 0 INPUT
			this->PIPERX3STATUS = PIPERX3STATUS; // net ID: PIPERX3STATUS lsb: 0  msb: 2 INPUT
			this->PIPERX3SYNCHEADER = PIPERX3SYNCHEADER; // net ID: PIPERX3SYNCHEADER lsb: 0  msb: 1 INPUT
			this->PIPERX3VALID = PIPERX3VALID; // net ID: PIPERX3VALID lsb: 0  msb: 0 INPUT
			this->PIPERX4CHARISK = PIPERX4CHARISK; // net ID: PIPERX4CHARISK lsb: 0  msb: 1 INPUT
			this->PIPERX4DATA = PIPERX4DATA; // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
			this->PIPERX4DATAVALID = PIPERX4DATAVALID; // net ID: PIPERX4DATAVALID lsb: 0  msb: 0 INPUT
			this->PIPERX4ELECIDLE = PIPERX4ELECIDLE; // net ID: PIPERX4ELECIDLE lsb: 0  msb: 0 INPUT
			this->PIPERX4EQDONE = PIPERX4EQDONE; // net ID: PIPERX4EQDONE lsb: 0  msb: 0 INPUT
			this->PIPERX4EQLPADAPTDONE = PIPERX4EQLPADAPTDONE; // net ID: PIPERX4EQLPADAPTDONE lsb: 0  msb: 0 INPUT
			this->PIPERX4EQLPLFFSSEL = PIPERX4EQLPLFFSSEL; // net ID: PIPERX4EQLPLFFSSEL lsb: 0  msb: 0 INPUT
			this->PIPERX4EQLPNEWTXCOEFFORPRESET = PIPERX4EQLPNEWTXCOEFFORPRESET; // net ID: PIPERX4EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX4PHYSTATUS = PIPERX4PHYSTATUS; // net ID: PIPERX4PHYSTATUS lsb: 0  msb: 0 INPUT
			this->PIPERX4STARTBLOCK = PIPERX4STARTBLOCK; // net ID: PIPERX4STARTBLOCK lsb: 0  msb: 0 INPUT
			this->PIPERX4STATUS = PIPERX4STATUS; // net ID: PIPERX4STATUS lsb: 0  msb: 2 INPUT
			this->PIPERX4SYNCHEADER = PIPERX4SYNCHEADER; // net ID: PIPERX4SYNCHEADER lsb: 0  msb: 1 INPUT
			this->PIPERX4VALID = PIPERX4VALID; // net ID: PIPERX4VALID lsb: 0  msb: 0 INPUT
			this->PIPERX5CHARISK = PIPERX5CHARISK; // net ID: PIPERX5CHARISK lsb: 0  msb: 1 INPUT
			this->PIPERX5DATA = PIPERX5DATA; // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
			this->PIPERX5DATAVALID = PIPERX5DATAVALID; // net ID: PIPERX5DATAVALID lsb: 0  msb: 0 INPUT
			this->PIPERX5ELECIDLE = PIPERX5ELECIDLE; // net ID: PIPERX5ELECIDLE lsb: 0  msb: 0 INPUT
			this->PIPERX5EQDONE = PIPERX5EQDONE; // net ID: PIPERX5EQDONE lsb: 0  msb: 0 INPUT
			this->PIPERX5EQLPADAPTDONE = PIPERX5EQLPADAPTDONE; // net ID: PIPERX5EQLPADAPTDONE lsb: 0  msb: 0 INPUT
			this->PIPERX5EQLPLFFSSEL = PIPERX5EQLPLFFSSEL; // net ID: PIPERX5EQLPLFFSSEL lsb: 0  msb: 0 INPUT
			this->PIPERX5EQLPNEWTXCOEFFORPRESET = PIPERX5EQLPNEWTXCOEFFORPRESET; // net ID: PIPERX5EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX5PHYSTATUS = PIPERX5PHYSTATUS; // net ID: PIPERX5PHYSTATUS lsb: 0  msb: 0 INPUT
			this->PIPERX5STARTBLOCK = PIPERX5STARTBLOCK; // net ID: PIPERX5STARTBLOCK lsb: 0  msb: 0 INPUT
			this->PIPERX5STATUS = PIPERX5STATUS; // net ID: PIPERX5STATUS lsb: 0  msb: 2 INPUT
			this->PIPERX5SYNCHEADER = PIPERX5SYNCHEADER; // net ID: PIPERX5SYNCHEADER lsb: 0  msb: 1 INPUT
			this->PIPERX5VALID = PIPERX5VALID; // net ID: PIPERX5VALID lsb: 0  msb: 0 INPUT
			this->PIPERX6CHARISK = PIPERX6CHARISK; // net ID: PIPERX6CHARISK lsb: 0  msb: 1 INPUT
			this->PIPERX6DATA = PIPERX6DATA; // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
			this->PIPERX6DATAVALID = PIPERX6DATAVALID; // net ID: PIPERX6DATAVALID lsb: 0  msb: 0 INPUT
			this->PIPERX6ELECIDLE = PIPERX6ELECIDLE; // net ID: PIPERX6ELECIDLE lsb: 0  msb: 0 INPUT
			this->PIPERX6EQDONE = PIPERX6EQDONE; // net ID: PIPERX6EQDONE lsb: 0  msb: 0 INPUT
			this->PIPERX6EQLPADAPTDONE = PIPERX6EQLPADAPTDONE; // net ID: PIPERX6EQLPADAPTDONE lsb: 0  msb: 0 INPUT
			this->PIPERX6EQLPLFFSSEL = PIPERX6EQLPLFFSSEL; // net ID: PIPERX6EQLPLFFSSEL lsb: 0  msb: 0 INPUT
			this->PIPERX6EQLPNEWTXCOEFFORPRESET = PIPERX6EQLPNEWTXCOEFFORPRESET; // net ID: PIPERX6EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX6PHYSTATUS = PIPERX6PHYSTATUS; // net ID: PIPERX6PHYSTATUS lsb: 0  msb: 0 INPUT
			this->PIPERX6STARTBLOCK = PIPERX6STARTBLOCK; // net ID: PIPERX6STARTBLOCK lsb: 0  msb: 0 INPUT
			this->PIPERX6STATUS = PIPERX6STATUS; // net ID: PIPERX6STATUS lsb: 0  msb: 2 INPUT
			this->PIPERX6SYNCHEADER = PIPERX6SYNCHEADER; // net ID: PIPERX6SYNCHEADER lsb: 0  msb: 1 INPUT
			this->PIPERX6VALID = PIPERX6VALID; // net ID: PIPERX6VALID lsb: 0  msb: 0 INPUT
			this->PIPERX7CHARISK = PIPERX7CHARISK; // net ID: PIPERX7CHARISK lsb: 0  msb: 1 INPUT
			this->PIPERX7DATA = PIPERX7DATA; // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
			this->PIPERX7DATAVALID = PIPERX7DATAVALID; // net ID: PIPERX7DATAVALID lsb: 0  msb: 0 INPUT
			this->PIPERX7ELECIDLE = PIPERX7ELECIDLE; // net ID: PIPERX7ELECIDLE lsb: 0  msb: 0 INPUT
			this->PIPERX7EQDONE = PIPERX7EQDONE; // net ID: PIPERX7EQDONE lsb: 0  msb: 0 INPUT
			this->PIPERX7EQLPADAPTDONE = PIPERX7EQLPADAPTDONE; // net ID: PIPERX7EQLPADAPTDONE lsb: 0  msb: 0 INPUT
			this->PIPERX7EQLPLFFSSEL = PIPERX7EQLPLFFSSEL; // net ID: PIPERX7EQLPLFFSSEL lsb: 0  msb: 0 INPUT
			this->PIPERX7EQLPNEWTXCOEFFORPRESET = PIPERX7EQLPNEWTXCOEFFORPRESET; // net ID: PIPERX7EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX7PHYSTATUS = PIPERX7PHYSTATUS; // net ID: PIPERX7PHYSTATUS lsb: 0  msb: 0 INPUT
			this->PIPERX7STARTBLOCK = PIPERX7STARTBLOCK; // net ID: PIPERX7STARTBLOCK lsb: 0  msb: 0 INPUT
			this->PIPERX7STATUS = PIPERX7STATUS; // net ID: PIPERX7STATUS lsb: 0  msb: 2 INPUT
			this->PIPERX7SYNCHEADER = PIPERX7SYNCHEADER; // net ID: PIPERX7SYNCHEADER lsb: 0  msb: 1 INPUT
			this->PIPERX7VALID = PIPERX7VALID; // net ID: PIPERX7VALID lsb: 0  msb: 0 INPUT
			this->PIPETX0EQCOEFF = PIPETX0EQCOEFF; // net ID: PIPETX0EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX0EQDONE = PIPETX0EQDONE; // net ID: PIPETX0EQDONE lsb: 0  msb: 0 INPUT
			this->PIPETX1EQCOEFF = PIPETX1EQCOEFF; // net ID: PIPETX1EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX1EQDONE = PIPETX1EQDONE; // net ID: PIPETX1EQDONE lsb: 0  msb: 0 INPUT
			this->PIPETX2EQCOEFF = PIPETX2EQCOEFF; // net ID: PIPETX2EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX2EQDONE = PIPETX2EQDONE; // net ID: PIPETX2EQDONE lsb: 0  msb: 0 INPUT
			this->PIPETX3EQCOEFF = PIPETX3EQCOEFF; // net ID: PIPETX3EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX3EQDONE = PIPETX3EQDONE; // net ID: PIPETX3EQDONE lsb: 0  msb: 0 INPUT
			this->PIPETX4EQCOEFF = PIPETX4EQCOEFF; // net ID: PIPETX4EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX4EQDONE = PIPETX4EQDONE; // net ID: PIPETX4EQDONE lsb: 0  msb: 0 INPUT
			this->PIPETX5EQCOEFF = PIPETX5EQCOEFF; // net ID: PIPETX5EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX5EQDONE = PIPETX5EQDONE; // net ID: PIPETX5EQDONE lsb: 0  msb: 0 INPUT
			this->PIPETX6EQCOEFF = PIPETX6EQCOEFF; // net ID: PIPETX6EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX6EQDONE = PIPETX6EQDONE; // net ID: PIPETX6EQDONE lsb: 0  msb: 0 INPUT
			this->PIPETX7EQCOEFF = PIPETX7EQCOEFF; // net ID: PIPETX7EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX7EQDONE = PIPETX7EQDONE; // net ID: PIPETX7EQDONE lsb: 0  msb: 0 INPUT
			this->PLDISABLESCRAMBLER = PLDISABLESCRAMBLER; // net ID: PLDISABLESCRAMBLER lsb: 0  msb: 0 INPUT
			this->PLEQRESETEIEOSCOUNT = PLEQRESETEIEOSCOUNT; // net ID: PLEQRESETEIEOSCOUNT lsb: 0  msb: 0 INPUT
			this->PLGEN3PCSDISABLE = PLGEN3PCSDISABLE; // net ID: PLGEN3PCSDISABLE lsb: 0  msb: 0 INPUT
			this->PLGEN3PCSRXSYNCDONE = PLGEN3PCSRXSYNCDONE; // net ID: PLGEN3PCSRXSYNCDONE lsb: 0  msb: 7 INPUT
			this->RECCLK = RECCLK; // net ID: RECCLK lsb: 0  msb: 0 INPUT
			this->RESETN = RESETN; // net ID: RESETN lsb: 0  msb: 0 INPUT
			this->SAXISCCTDATA = SAXISCCTDATA; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTKEEP = SAXISCCTKEEP; // net ID: SAXISCCTKEEP lsb: 0  msb: 7 INPUT
			this->SAXISCCTLAST = SAXISCCTLAST; // net ID: SAXISCCTLAST lsb: 0  msb: 0 INPUT
			this->SAXISCCTUSER = SAXISCCTUSER; // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
			this->SAXISCCTVALID = SAXISCCTVALID; // net ID: SAXISCCTVALID lsb: 0  msb: 0 INPUT
			this->SAXISRQTDATA = SAXISRQTDATA; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTKEEP = SAXISRQTKEEP; // net ID: SAXISRQTKEEP lsb: 0  msb: 7 INPUT
			this->SAXISRQTLAST = SAXISRQTLAST; // net ID: SAXISRQTLAST lsb: 0  msb: 0 INPUT
			this->SAXISRQTUSER = SAXISRQTUSER; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			this->SAXISRQTVALID = SAXISRQTVALID; // net ID: SAXISRQTVALID lsb: 0  msb: 0 INPUT
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
