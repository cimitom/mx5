// This file is generated by GenLP_setting.pl v1.4

#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

#include <mach/mt_typedefs.h>
#include <mach/mt_power_gs.h>
/*
const unsigned int AP_DCM_gs_dpidle_data[] = {
 // Address     Mask        Golden Setting Value
    0xF0000004, 0x0000FF9F, 0x00000080,// DCM_CFG
    0xF0001008, 0x0000001F, 0x00000000,// CA7_CKDIV1
    0xF0001010, 0x00000771, 0x00000771,// INFRA_TOPCKGEN_DCMCTL
    0xF0001014, 0x00000001, 0x00000001,// INFRA_TOPCKGEN_DCMDBC
    0xF0001050, 0x00000303, 0x00000303,// INFRA_GLOBALCON_DCMCTL
    0xF0001054, 0x017F017F, 0x01000100,// INFRA_GLOBALCON_DCMDBC
    0xF0001058, 0x1F1F0F07, 0x10100000,// INFRA_GLOBALCON_DCMFSEL
    0xF0003050, 0x00001FF3, 0x000000F3,// PERI_GLOBALCON_DCMCTL
    0xF0003054, 0x000000FF, 0x000000F0,// PERI_GLOBALCON_DCMDBC
    0xF0003058, 0x001F0F07, 0x00000000,// PERI_GLOBALCON_DCMFSEL
    0xF00041DC, 0xFFFFFFFF, 0xC3000000,// channel_A_DRAMC_PD_CTRL
    0xF000D13C, 0x00000001, 0x00000001,// PMIC_WRQP_DCM_EN
    0xF00111DC, 0xFFFFFFFF, 0xC3000000,// channel_B_DRAMC_PD_CTRL
    0xF020001C, 0x0F9C0000, 0x00000000,// MCUSYS_CONFIG
    0xF0200100, 0x00000F00, 0x00000B00,// CACHE_CONFIG
    0xF0200160, 0x00000010, 0x00000010,// ARMPLL_CTL
    0xF0203060, 0xFFFFFFFF, 0x40000000,// EMI_CONM
    0xF0205050, 0x0000007F, 0x00000000,// MM_MMU_DCM_DIS
    0xF0214050, 0x0000007F, 0x00000000,// PERISYS_MMU_DCM_DIS
    0xF1007054, 0x00000001, 0x00000001,// I2C0_I2CREG_HW_CG_EN
    0xF1008054, 0x00000001, 0x00000001,// I2C1_I2CREG_HW_CG_EN
    0xF1009054, 0x00000001, 0x00000001,// I2C2_I2CREG_HW_CG_EN
    0xF1010054, 0x00000001, 0x00000001,// I2C3_I2CREG_HW_CG_EN
    0xF1011054, 0x00000001, 0x00000001,// I2C4_I2CREG_HW_CG_EN
    0xF1200700, 0x00070000, 0x00000000,// USB0_DCM
    0xF12300B4, 0xFFFFFFFF, 0x00200000,// MSDC0_PATCH_BIT1
    0xF12400B4, 0xFFFFFFFF, 0x00200000,// MSDC1_PATCH_BIT1
    0xF12500B4, 0xFFFFFFFF, 0x00200000,// MSDC2_PATCH_BIT1
    0xF12600B4, 0xFFFFFFFF, 0x00200000,// MSDC3_PATCH_BIT1
    0xF4000120, 0xFFFFFFFF, 0x00000000,// MMSYS_HW_DCM_DIS0
    0xF4000124, 0xFFFFFFFF, 0x00000000,// MMSYS_HW_DCM_DIS_SET0
    0xF4000128, 0xFFFFFFFF, 0xFFFFFFFF,// MMSYS_HW_DCM_DIS_CLR0
    0xF4000130, 0xFFFFFFFF, 0x00000000,// MMSYS_HW_DCM_DIS1
    0xF4000134, 0xFFFFFFFF, 0x00000000,// MMSYS_HW_DCM_DIS_SET1
    0xF4000138, 0xFFFFFFFF, 0xFFFFFFFF,// MMSYS_HW_DCM_DIS_CLR1
    0xF4010014, 0x00000010, 0x00000010,// SMI_LARB0_CON_SET
    0xF4010018, 0x00000000, 0x00000000,// SMI_LARB0_CON_CLR
    0xF4022300, 0x00000001, 0x00000001,// SMI_DCM
    0xF5001014, 0x00000010, 0x00000010,// SMI_LARB2_CON_SET
    0xF5001018, 0x00000000, 0x00000000,// SMI_LARB2_CON_CLR
    0xF6000018, 0x00000001, 0x00000000,// VDEC_DCM_CON
    0xF6010014, 0x00000010, 0x00000010,// SMI_LARB1_CON_SET
    0xF6010018, 0x00000000, 0x00000000,// SMI_LARB1_CON_CLR
    0xF7000010, 0xFFFFFFFF, 0x00000000,// MJC_HW_DCM_DIS
    0xF7000014, 0xFFFFFFFF, 0x00000000,// MJC_HW_DCM_DIS_SET
    0xF7000018, 0xFFFFFFFF, 0x00000000,// MJC_HW_DCM_DIS_CLR
    0xF7002014, 0x00000010, 0x00000010,// SMI_LARB4_CON_SET
    0xF7002018, 0x00000000, 0x00000000,// SMI_LARB4_CON_CLR
    0xF8001014, 0x00000010, 0x00000010,// SMI_LARB3_CON_SET
    0xF8001018, 0x00000000, 0x00000000,// SMI_LARB3_CON_CLR
    0xF80020F4, 0x00000001, 0x00000001,// VENC_CLK_DCM_CTRL
    0xF80020FC, 0xFFFFFFFF, 0xFFFFFFFF,// VENC_CLK_CG_CTRL
    0xF8003300, 0x00000001, 0x00000000,// JPGENC_DCM_CTRL
    0xF8004300, 0x00000001, 0x00000000 // JPGDEC_DCM_CTRL
};

const unsigned int *AP_DCM_gs_dpidle = AP_DCM_gs_dpidle_data;

unsigned int AP_DCM_gs_dpidle_len = 162;
*/
const unsigned int AP_DCM_gs_suspend_data[] = {
 // Address     Mask        Golden Setting Value
    0xF0000004, 0x0000FF9F, 0x00000080,// DCM_CFG
    0xF0001008, 0x0000001F, 0x00000000,// CA7_CKDIV1
    0xF0001010, 0x00000771, 0x00000771,// INFRA_TOPCKGEN_DCMCTL
    0xF0001014, 0x00000001, 0x00000001,// INFRA_TOPCKGEN_DCMDBC
    0xF0001050, 0x00000303, 0x00000303,// INFRA_GLOBALCON_DCMCTL
    0xF0001054, 0x017F017F, 0x01000100,// INFRA_GLOBALCON_DCMDBC
    0xF0001058, 0x1F1F0F07, 0x10100000,// INFRA_GLOBALCON_DCMFSEL
    0xF0003050, 0x00001FF3, 0x000000F3,// PERI_GLOBALCON_DCMCTL
    0xF0003054, 0x000000FF, 0x000000F0,// PERI_GLOBALCON_DCMDBC
    0xF0003058, 0x001F0F07, 0x00000000,// PERI_GLOBALCON_DCMFSEL
    0xF00041DC, 0xFFFFFFFF, 0xC3000000,// channel_A_DRAMC_PD_CTRL
    0xF000D13C, 0x00000001, 0x00000001,// PMIC_WRQP_DCM_EN
    0xF00111DC, 0xFFFFFFFF, 0xC3000000,// channel_B_DRAMC_PD_CTRL
    0xF020001C, 0x0F9C0000, 0x00000000,// MCUSYS_CONFIG
    0xF0200100, 0x00000F00, 0x00000B00,// CACHE_CONFIG
    0xF0200160, 0x00000010, 0x00000010,// ARMPLL_CTL
    0xF0203060, 0xFFFFFFFF, 0x40000000,// EMI_CONM
    0xF0205050, 0x0000007F, 0x00000000,// MM_MMU_DCM_DIS
    0xF0214050, 0x0000007F, 0x00000000,// PERISYS_MMU_DCM_DIS
    0xF1007054, 0x00000001, 0x00000001,// I2C0_I2CREG_HW_CG_EN
    0xF1008054, 0x00000001, 0x00000001,// I2C1_I2CREG_HW_CG_EN
    0xF1009054, 0x00000001, 0x00000001,// I2C2_I2CREG_HW_CG_EN
    0xF1010054, 0x00000001, 0x00000001,// I2C3_I2CREG_HW_CG_EN
    0xF1011054, 0x00000001, 0x00000001,// I2C4_I2CREG_HW_CG_EN
    0xF1200700, 0x00070000, 0x00000000,// USB0_DCM
    0xF12300B4, 0xFFFFFFFF, 0x00200000,// MSDC0_PATCH_BIT1
    0xF12400B4, 0xFFFFFFFF, 0x00200000,// MSDC1_PATCH_BIT1
    0xF12500B4, 0xFFFFFFFF, 0x00200000,// MSDC2_PATCH_BIT1
    0xF12600B4, 0xFFFFFFFF, 0x00200000,// MSDC3_PATCH_BIT1
    0xF4000120, 0xFFFFFFFF, 0x00000000,// MMSYS_HW_DCM_DIS0
    0xF4000124, 0xFFFFFFFF, 0x00000000,// MMSYS_HW_DCM_DIS_SET0
    0xF4000128, 0xFFFFFFFF, 0xFFFFFFFF,// MMSYS_HW_DCM_DIS_CLR0
    0xF4000130, 0xFFFFFFFF, 0x00000000,// MMSYS_HW_DCM_DIS1
    0xF4000134, 0xFFFFFFFF, 0x00000000,// MMSYS_HW_DCM_DIS_SET1
    0xF4000138, 0xFFFFFFFF, 0xFFFFFFFF,// MMSYS_HW_DCM_DIS_CLR1
    0xF4010014, 0x00000010, 0x00000010,// SMI_LARB0_CON_SET
    0xF4022300, 0x00000001, 0x00000001,// SMI_DCM
    0xF5001014, 0x00000010, 0x00000010,// SMI_LARB2_CON_SET
    0xF6000018, 0x00000001, 0x00000000,// VDEC_DCM_CON
    0xF6010014, 0x00000010, 0x00000010,// SMI_LARB1_CON_SET
    0xF7000010, 0xFFFFFFFF, 0x00000000,// MJC_HW_DCM_DIS
    0xF7000014, 0xFFFFFFFF, 0x00000000,// MJC_HW_DCM_DIS_SET
    0xF7000018, 0xFFFFFFFF, 0x00000000,// MJC_HW_DCM_DIS_CLR
    0xF7002014, 0x00000010, 0x00000010,// SMI_LARB4_CON_SET
    0xF8001014, 0x00000010, 0x00000010,// SMI_LARB3_CON_SET
    0xF80020F4, 0x00000001, 0x00000001,// VENC_CLK_DCM_CTRL
    0xF80020FC, 0xFFFFFFFF, 0xFFFFFFFF,// VENC_CLK_CG_CTRL
    0xF8003300, 0x00000001, 0x00000000,// JPGENC_DCM_CTRL
    0xF8004300, 0x00000001, 0x00000000 // JPGDEC_DCM_CTRL
};

const unsigned int *AP_DCM_gs_suspend = AP_DCM_gs_suspend_data;

unsigned int AP_DCM_gs_suspend_len = 162;
/*
const unsigned int AP_DCM_gs_vp_data[] = {
 // Address     Mask        Golden Setting Value
    0xF0000004, 0x0000FF9F, 0x00000000,// DCM_CFG
    0xF0001008, 0x0000001F, 0x00000000,// CA7_CKDIV1
    0xF0001010, 0x00000771, 0x00000771,// INFRA_TOPCKGEN_DCMCTL
    0xF0001014, 0x00000001, 0x00000001,// INFRA_TOPCKGEN_DCMDBC
    0xF0001050, 0x00000303, 0x00000303,// INFRA_GLOBALCON_DCMCTL
    0xF0001054, 0x017F017F, 0x01000100,// INFRA_GLOBALCON_DCMDBC
    0xF0001058, 0x1F1F0F07, 0x10100000,// INFRA_GLOBALCON_DCMFSEL
    0xF0003050, 0x00001FF3, 0x000000F3,// PERI_GLOBALCON_DCMCTL
    0xF0003054, 0x000000FF, 0x000000F0,// PERI_GLOBALCON_DCMDBC
    0xF0003058, 0x001F0F07, 0x00000000,// PERI_GLOBALCON_DCMFSEL
    0xF00041DC, 0xFFFFFFFF, 0xC3000000,// channel_A_DRAMC_PD_CTRL
    0xF000D13C, 0x00000001, 0x00000001,// PMIC_WRQP_DCM_EN
    0xF00111DC, 0xFFFFFFFF, 0xC3000000,// channel_B_DRAMC_PD_CTRL
    0xF020001C, 0x0F9C0000, 0x00000000,// MCUSYS_CONFIG
    0xF0200100, 0x00000F00, 0x00000B00,// CACHE_CONFIG
    0xF0200160, 0x00000010, 0x00000010,// ARMPLL_CTL
    0xF0203060, 0xFFFFFFFF, 0x40000000,// EMI_CONM
    0xF0205050, 0x0000007F, 0x00000000,// MM_MMU_DCM_DIS
    0xF0214050, 0x0000007F, 0x00000000,// PERISYS_MMU_DCM_DIS
    0xF1007054, 0x00000001, 0x00000001,// I2C0_I2CREG_HW_CG_EN
    0xF1008054, 0x00000001, 0x00000001,// I2C1_I2CREG_HW_CG_EN
    0xF1009054, 0x00000001, 0x00000001,// I2C2_I2CREG_HW_CG_EN
    0xF1010054, 0x00000001, 0x00000001,// I2C3_I2CREG_HW_CG_EN
    0xF1011054, 0x00000001, 0x00000001,// I2C4_I2CREG_HW_CG_EN
    0xF1200700, 0x00070000, 0x00000000,// USB0_DCM
    0xF12300B4, 0xFFFFFFFF, 0x00200000,// MSDC0_PATCH_BIT1
    0xF12400B4, 0xFFFFFFFF, 0x00200000,// MSDC1_PATCH_BIT1
    0xF12500B4, 0xFFFFFFFF, 0x00200000,// MSDC2_PATCH_BIT1
    0xF12600B4, 0xFFFFFFFF, 0x00200000,// MSDC3_PATCH_BIT1
    0xF4000120, 0xFFFFFFFF, 0x00000000,// MMSYS_HW_DCM_DIS0
    0xF4000124, 0xFFFFFFFF, 0x00000000,// MMSYS_HW_DCM_DIS_SET0
    0xF4000128, 0xFFFFFFFF, 0xFFFFFFFF,// MMSYS_HW_DCM_DIS_CLR0
    0xF4000130, 0xFFFFFFFF, 0x00000000,// MMSYS_HW_DCM_DIS1
    0xF4000134, 0xFFFFFFFF, 0x00000000,// MMSYS_HW_DCM_DIS_SET1
    0xF4000138, 0xFFFFFFFF, 0xFFFFFFFF,// MMSYS_HW_DCM_DIS_CLR1
    0xF4010014, 0x00000010, 0x00000010,// SMI_LARB0_CON_SET
    0xF4022300, 0x00000001, 0x00000001,// SMI_DCM
    0xF5001014, 0x00000010, 0x00000010,// SMI_LARB2_CON_SET
    0xF6000018, 0x00000001, 0x00000000,// VDEC_DCM_CON
    0xF6010014, 0x00000010, 0x00000010,// SMI_LARB1_CON_SET
    0xF7000010, 0xFFFFFFFF, 0x00000000,// MJC_HW_DCM_DIS
    0xF7000014, 0xFFFFFFFF, 0x00000000,// MJC_HW_DCM_DIS_SET
    0xF7000018, 0xFFFFFFFF, 0x00000000,// MJC_HW_DCM_DIS_CLR
    0xF7002014, 0x00000010, 0x00000010,// SMI_LARB4_CON_SET
    0xF8001014, 0x00000010, 0x00000010,// SMI_LARB3_CON_SET
    0xF80020F4, 0x00000001, 0x00000001,// VENC_CLK_DCM_CTRL
    0xF80020FC, 0xFFFFFFFF, 0xFFFFFFFF,// VENC_CLK_CG_CTRL
    0xF8003300, 0x00000001, 0x00000000,// JPGENC_DCM_CTRL
    0xF8004300, 0x00000001, 0x00000000 // JPGDEC_DCM_CTRL
};

const unsigned int *AP_DCM_gs_vp = AP_DCM_gs_vp_data;

unsigned int AP_DCM_gs_vp_len = 162;

const unsigned int AP_DCM_gs_paging_data[] = {
 // Address     Mask        Golden Setting Value
    0xF0000004, 0x0000FF9F, 0x00000080,// DCM_CFG
    0xF0001008, 0x0000001F, 0x00000000,// CA7_CKDIV1
    0xF0001010, 0x00000771, 0x00000771,// INFRA_TOPCKGEN_DCMCTL
    0xF0001014, 0x00000001, 0x00000001,// INFRA_TOPCKGEN_DCMDBC
    0xF0001050, 0x00000303, 0x00000303,// INFRA_GLOBALCON_DCMCTL
    0xF0001054, 0x017F017F, 0x01000100,// INFRA_GLOBALCON_DCMDBC
    0xF0001058, 0x1F1F0F07, 0x10100000,// INFRA_GLOBALCON_DCMFSEL
    0xF0003050, 0x00001FF3, 0x000000F3,// PERI_GLOBALCON_DCMCTL
    0xF0003054, 0x000000FF, 0x000000F0,// PERI_GLOBALCON_DCMDBC
    0xF0003058, 0x001F0F07, 0x00000000,// PERI_GLOBALCON_DCMFSEL
    0xF00041DC, 0xFFFFFFFF, 0xC3000000,// channel_A_DRAMC_PD_CTRL
    0xF000D13C, 0x00000001, 0x00000001,// PMIC_WRQP_DCM_EN
    0xF00111DC, 0xFFFFFFFF, 0xC3000000,// channel_B_DRAMC_PD_CTRL
    0xF020001C, 0x0F9C0000, 0x00000000,// MCUSYS_CONFIG
    0xF0200100, 0x00000F00, 0x00000B00,// CACHE_CONFIG
    0xF0200160, 0x00000010, 0x00000010,// ARMPLL_CTL
    0xF0203060, 0xFFFFFFFF, 0x40000000,// EMI_CONM
    0xF0205050, 0x0000007F, 0x00000000,// MM_MMU_DCM_DIS
    0xF0214050, 0x0000007F, 0x00000000,// PERISYS_MMU_DCM_DIS
    0xF1007054, 0x00000001, 0x00000001,// I2C0_I2CREG_HW_CG_EN
    0xF1008054, 0x00000001, 0x00000001,// I2C1_I2CREG_HW_CG_EN
    0xF1009054, 0x00000001, 0x00000001,// I2C2_I2CREG_HW_CG_EN
    0xF1010054, 0x00000001, 0x00000001,// I2C3_I2CREG_HW_CG_EN
    0xF1011054, 0x00000001, 0x00000001,// I2C4_I2CREG_HW_CG_EN
    0xF1200700, 0x00070000, 0x00000000,// USB0_DCM
    0xF12300B4, 0xFFFFFFFF, 0x00200000,// MSDC0_PATCH_BIT1
    0xF12400B4, 0xFFFFFFFF, 0x00200000,// MSDC1_PATCH_BIT1
    0xF12500B4, 0xFFFFFFFF, 0x00200000,// MSDC2_PATCH_BIT1
    0xF12600B4, 0xFFFFFFFF, 0x00200000,// MSDC3_PATCH_BIT1
    0xF4000120, 0xFFFFFFFF, 0x00000000,// MMSYS_HW_DCM_DIS0
    0xF4000124, 0xFFFFFFFF, 0x00000000,// MMSYS_HW_DCM_DIS_SET0
    0xF4000128, 0xFFFFFFFF, 0xFFFFFFFF,// MMSYS_HW_DCM_DIS_CLR0
    0xF4000130, 0xFFFFFFFF, 0x00000000,// MMSYS_HW_DCM_DIS1
    0xF4000134, 0xFFFFFFFF, 0x00000000,// MMSYS_HW_DCM_DIS_SET1
    0xF4000138, 0xFFFFFFFF, 0xFFFFFFFF,// MMSYS_HW_DCM_DIS_CLR1
    0xF4010014, 0x00000010, 0x00000010,// SMI_LARB0_CON_SET
    0xF4022300, 0x00000001, 0x00000001,// SMI_DCM
    0xF5001014, 0x00000010, 0x00000010,// SMI_LARB2_CON_SET
    0xF6000018, 0x00000001, 0x00000000,// VDEC_DCM_CON
    0xF6010014, 0x00000010, 0x00000010,// SMI_LARB1_CON_SET
    0xF7000010, 0xFFFFFFFF, 0x00000000,// MJC_HW_DCM_DIS
    0xF7000014, 0xFFFFFFFF, 0x00000000,// MJC_HW_DCM_DIS_SET
    0xF7000018, 0xFFFFFFFF, 0x00000000,// MJC_HW_DCM_DIS_CLR
    0xF7002014, 0x00000010, 0x00000010,// SMI_LARB4_CON_SET
    0xF8001014, 0x00000010, 0x00000010,// SMI_LARB3_CON_SET
    0xF80020F4, 0x00000001, 0x00000001,// VENC_CLK_DCM_CTRL
    0xF80020FC, 0xFFFFFFFF, 0xFFFFFFFF,// VENC_CLK_CG_CTRL
    0xF8003300, 0x00000001, 0x00000000,// JPGENC_DCM_CTRL
    0xF8004300, 0x00000001, 0x00000000 // JPGDEC_DCM_CTRL
};

const unsigned int *AP_DCM_gs_paging = AP_DCM_gs_paging_data;

unsigned int AP_DCM_gs_paging_len = 162;

const unsigned int AP_DCM_gs_mp3_play_data[] = {
 // Address     Mask        Golden Setting Value
    0xF0000004, 0x0000FF9F, 0x00000080,// DCM_CFG
    0xF0001008, 0x0000001F, 0x00000000,// CA7_CKDIV1
    0xF0001010, 0x00000771, 0x00000771,// INFRA_TOPCKGEN_DCMCTL
    0xF0001014, 0x00000001, 0x00000001,// INFRA_TOPCKGEN_DCMDBC
    0xF0001050, 0x00000303, 0x00000303,// INFRA_GLOBALCON_DCMCTL
    0xF0001054, 0x017F017F, 0x01000100,// INFRA_GLOBALCON_DCMDBC
    0xF0001058, 0x1F1F0F07, 0x10100000,// INFRA_GLOBALCON_DCMFSEL
    0xF0003050, 0x00001FF3, 0x000000F3,// PERI_GLOBALCON_DCMCTL
    0xF0003054, 0x000000FF, 0x000000F0,// PERI_GLOBALCON_DCMDBC
    0xF0003058, 0x001F0F07, 0x00000000,// PERI_GLOBALCON_DCMFSEL
    0xF00041DC, 0xFFFFFFFF, 0xC3000000,// channel_A_DRAMC_PD_CTRL
    0xF000D13C, 0x00000001, 0x00000001,// PMIC_WRQP_DCM_EN
    0xF00111DC, 0xFFFFFFFF, 0xC3000000,// channel_B_DRAMC_PD_CTRL
    0xF020001C, 0x0F9C0000, 0x00000000,// MCUSYS_CONFIG
    0xF0200100, 0x00000F00, 0x00000B00,// CACHE_CONFIG
    0xF0200160, 0x00000010, 0x00000010,// ARMPLL_CTL
    0xF0203060, 0xFFFFFFFF, 0x40000000,// EMI_CONM
    0xF0205050, 0x0000007F, 0x00000000,// MM_MMU_DCM_DIS
    0xF0214050, 0x0000007F, 0x00000000,// PERISYS_MMU_DCM_DIS
    0xF1007054, 0x00000001, 0x00000001,// I2C0_I2CREG_HW_CG_EN
    0xF1008054, 0x00000001, 0x00000001,// I2C1_I2CREG_HW_CG_EN
    0xF1009054, 0x00000001, 0x00000001,// I2C2_I2CREG_HW_CG_EN
    0xF1010054, 0x00000001, 0x00000001,// I2C3_I2CREG_HW_CG_EN
    0xF1011054, 0x00000001, 0x00000001,// I2C4_I2CREG_HW_CG_EN
    0xF1200700, 0x00070000, 0x00000000,// USB0_DCM
    0xF12300B4, 0xFFFFFFFF, 0x00200000,// MSDC0_PATCH_BIT1
    0xF12400B4, 0xFFFFFFFF, 0x00200000,// MSDC1_PATCH_BIT1
    0xF12500B4, 0xFFFFFFFF, 0x00200000,// MSDC2_PATCH_BIT1
    0xF12600B4, 0xFFFFFFFF, 0x00200000,// MSDC3_PATCH_BIT1
    0xF4000120, 0xFFFFFFFF, 0x00000000,// MMSYS_HW_DCM_DIS0
    0xF4000124, 0xFFFFFFFF, 0x00000000,// MMSYS_HW_DCM_DIS_SET0
    0xF4000128, 0xFFFFFFFF, 0xFFFFFFFF,// MMSYS_HW_DCM_DIS_CLR0
    0xF4000130, 0xFFFFFFFF, 0x00000000,// MMSYS_HW_DCM_DIS1
    0xF4000134, 0xFFFFFFFF, 0x00000000,// MMSYS_HW_DCM_DIS_SET1
    0xF4000138, 0xFFFFFFFF, 0xFFFFFFFF,// MMSYS_HW_DCM_DIS_CLR1
    0xF4010014, 0x00000010, 0x00000010,// SMI_LARB0_CON_SET
    0xF4022300, 0x00000001, 0x00000001,// SMI_DCM
    0xF5001014, 0x00000010, 0x00000010,// SMI_LARB2_CON_SET
    0xF6000018, 0x00000001, 0x00000000,// VDEC_DCM_CON
    0xF6010014, 0x00000010, 0x00000010,// SMI_LARB1_CON_SET
    0xF7000010, 0xFFFFFFFF, 0x00000000,// MJC_HW_DCM_DIS
    0xF7000014, 0xFFFFFFFF, 0x00000000,// MJC_HW_DCM_DIS_SET
    0xF7000018, 0xFFFFFFFF, 0x00000000,// MJC_HW_DCM_DIS_CLR
    0xF7002014, 0x00000010, 0x00000010,// SMI_LARB4_CON_SET
    0xF8001014, 0x00000010, 0x00000010,// SMI_LARB3_CON_SET
    0xF80020F4, 0x00000001, 0x00000001,// VENC_CLK_DCM_CTRL
    0xF80020FC, 0xFFFFFFFF, 0xFFFFFFFF,// VENC_CLK_CG_CTRL
    0xF8003300, 0x00000001, 0x00000000,// JPGENC_DCM_CTRL
    0xF8004300, 0x00000001, 0x00000000 // JPGDEC_DCM_CTRL
};

const unsigned int *AP_DCM_gs_mp3_play = AP_DCM_gs_mp3_play_data;

unsigned int AP_DCM_gs_mp3_play_len = 162;

const unsigned int AP_DCM_gs_idle_data[] = {
 // Address     Mask        Golden Setting Value
    0xF0000004, 0x0000FF9F, 0x00000080,// DCM_CFG
    0xF0001008, 0x0000001F, 0x00000000,// CA7_CKDIV1
    0xF0001010, 0x00000771, 0x00000771,// INFRA_TOPCKGEN_DCMCTL
    0xF0001014, 0x00000001, 0x00000001,// INFRA_TOPCKGEN_DCMDBC
    0xF0001050, 0x00000303, 0x00000303,// INFRA_GLOBALCON_DCMCTL
    0xF0001054, 0x017F017F, 0x01000100,// INFRA_GLOBALCON_DCMDBC
    0xF0001058, 0x1F1F0F07, 0x10100000,// INFRA_GLOBALCON_DCMFSEL
    0xF0003050, 0x00001FF3, 0x000000F3,// PERI_GLOBALCON_DCMCTL
    0xF0003054, 0x000000FF, 0x000000F0,// PERI_GLOBALCON_DCMDBC
    0xF0003058, 0x001F0F07, 0x00000000,// PERI_GLOBALCON_DCMFSEL
    0xF00041DC, 0xFFFFFFFF, 0xC3000000,// channel_A_DRAMC_PD_CTRL
    0xF000D13C, 0x00000001, 0x00000001,// PMIC_WRQP_DCM_EN
    0xF00111DC, 0xFFFFFFFF, 0xC3000000,// channel_B_DRAMC_PD_CTRL
    0xF020001C, 0x0F9C0000, 0x00000000,// MCUSYS_CONFIG
    0xF0200100, 0x00000F00, 0x00000B00,// CACHE_CONFIG
    0xF0200160, 0x00000010, 0x00000010,// ARMPLL_CTL
    0xF0203060, 0xFFFFFFFF, 0x40000000,// EMI_CONM
    0xF0205050, 0x0000007F, 0x00000000,// MM_MMU_DCM_DIS
    0xF0214050, 0x0000007F, 0x00000000,// PERISYS_MMU_DCM_DIS
    0xF1007054, 0x00000001, 0x00000001,// I2C0_I2CREG_HW_CG_EN
    0xF1008054, 0x00000001, 0x00000001,// I2C1_I2CREG_HW_CG_EN
    0xF1009054, 0x00000001, 0x00000001,// I2C2_I2CREG_HW_CG_EN
    0xF1010054, 0x00000001, 0x00000001,// I2C3_I2CREG_HW_CG_EN
    0xF1011054, 0x00000001, 0x00000001,// I2C4_I2CREG_HW_CG_EN
    0xF1200700, 0x00070000, 0x00000000,// USB0_DCM
    0xF12300B4, 0xFFFFFFFF, 0x00200000,// MSDC0_PATCH_BIT1
    0xF12400B4, 0xFFFFFFFF, 0x00200000,// MSDC1_PATCH_BIT1
    0xF12500B4, 0xFFFFFFFF, 0x00200000,// MSDC2_PATCH_BIT1
    0xF12600B4, 0xFFFFFFFF, 0x00200000,// MSDC3_PATCH_BIT1
    0xF4000120, 0xFFFFFFFF, 0x00000000,// MMSYS_HW_DCM_DIS0
    0xF4000124, 0xFFFFFFFF, 0x00000000,// MMSYS_HW_DCM_DIS_SET0
    0xF4000128, 0xFFFFFFFF, 0xFFFFFFFF,// MMSYS_HW_DCM_DIS_CLR0
    0xF4000130, 0xFFFFFFFF, 0x00000000,// MMSYS_HW_DCM_DIS1
    0xF4000134, 0xFFFFFFFF, 0x00000000,// MMSYS_HW_DCM_DIS_SET1
    0xF4000138, 0xFFFFFFFF, 0xFFFFFFFF,// MMSYS_HW_DCM_DIS_CLR1
    0xF4010014, 0x00000010, 0x00000010,// SMI_LARB0_CON_SET
    0xF4022300, 0x00000001, 0x00000001,// SMI_DCM
    0xF5001014, 0x00000010, 0x00000010,// SMI_LARB2_CON_SET
    0xF6000018, 0x00000001, 0x00000000,// VDEC_DCM_CON
    0xF6010014, 0x00000010, 0x00000010,// SMI_LARB1_CON_SET
    0xF7000010, 0xFFFFFFFF, 0x00000000,// MJC_HW_DCM_DIS
    0xF7000014, 0xFFFFFFFF, 0x00000000,// MJC_HW_DCM_DIS_SET
    0xF7000018, 0xFFFFFFFF, 0x00000000,// MJC_HW_DCM_DIS_CLR
    0xF7002014, 0x00000010, 0x00000010,// SMI_LARB4_CON_SET
    0xF8001014, 0x00000010, 0x00000010,// SMI_LARB3_CON_SET
    0xF80020F4, 0x00000001, 0x00000001,// VENC_CLK_DCM_CTRL
    0xF80020FC, 0xFFFFFFFF, 0xFFFFFFFF,// VENC_CLK_CG_CTRL
    0xF8003300, 0x00000001, 0x00000000,// JPGENC_DCM_CTRL
    0xF8004300, 0x00000001, 0x00000000 // JPGDEC_DCM_CTRL
};

const unsigned int *AP_DCM_gs_idle = AP_DCM_gs_idle_data;

unsigned int AP_DCM_gs_idle_len = 162;

const unsigned int AP_DCM_gs_talk_data[] = {
 // Address     Mask        Golden Setting Value
    0xF0000004, 0x0000FF9F, 0x00000080,// DCM_CFG
    0xF0001008, 0x0000001F, 0x00000000,// CA7_CKDIV1
    0xF0001010, 0x00000771, 0x00000771,// INFRA_TOPCKGEN_DCMCTL
    0xF0001014, 0x00000001, 0x00000001,// INFRA_TOPCKGEN_DCMDBC
    0xF0001050, 0x00000303, 0x00000303,// INFRA_GLOBALCON_DCMCTL
    0xF0001054, 0x017F017F, 0x01000100,// INFRA_GLOBALCON_DCMDBC
    0xF0001058, 0x1F1F0F07, 0x10100000,// INFRA_GLOBALCON_DCMFSEL
    0xF0003050, 0x00001FF3, 0x000000F3,// PERI_GLOBALCON_DCMCTL
    0xF0003054, 0x000000FF, 0x000000F0,// PERI_GLOBALCON_DCMDBC
    0xF0003058, 0x001F0F07, 0x00000000,// PERI_GLOBALCON_DCMFSEL
    0xF00041DC, 0xFFFFFFFF, 0xC3000000,// channel_A_DRAMC_PD_CTRL
    0xF000D13C, 0x00000001, 0x00000001,// PMIC_WRQP_DCM_EN
    0xF00111DC, 0xFFFFFFFF, 0xC3000000,// channel_B_DRAMC_PD_CTRL
    0xF020001C, 0x0F9C0000, 0x00000000,// MCUSYS_CONFIG
    0xF0200100, 0x00000F00, 0x00000B00,// CACHE_CONFIG
    0xF0200160, 0x00000010, 0x00000010,// ARMPLL_CTL
    0xF0203060, 0xFFFFFFFF, 0x40000000,// EMI_CONM
    0xF0205050, 0x0000007F, 0x00000000,// MM_MMU_DCM_DIS
    0xF0214050, 0x0000007F, 0x00000000,// PERISYS_MMU_DCM_DIS
    0xF1007054, 0x00000001, 0x00000001,// I2C0_I2CREG_HW_CG_EN
    0xF1008054, 0x00000001, 0x00000001,// I2C1_I2CREG_HW_CG_EN
    0xF1009054, 0x00000001, 0x00000001,// I2C2_I2CREG_HW_CG_EN
    0xF1010054, 0x00000001, 0x00000001,// I2C3_I2CREG_HW_CG_EN
    0xF1011054, 0x00000001, 0x00000001,// I2C4_I2CREG_HW_CG_EN
    0xF1200700, 0x00070000, 0x00000000,// USB0_DCM
    0xF12300B4, 0xFFFFFFFF, 0x00200000,// MSDC0_PATCH_BIT1
    0xF12400B4, 0xFFFFFFFF, 0x00200000,// MSDC1_PATCH_BIT1
    0xF12500B4, 0xFFFFFFFF, 0x00200000,// MSDC2_PATCH_BIT1
    0xF12600B4, 0xFFFFFFFF, 0x00200000,// MSDC3_PATCH_BIT1
    0xF4000120, 0xFFFFFFFF, 0x00000000,// MMSYS_HW_DCM_DIS0
    0xF4000124, 0xFFFFFFFF, 0x00000000,// MMSYS_HW_DCM_DIS_SET0
    0xF4000128, 0xFFFFFFFF, 0xFFFFFFFF,// MMSYS_HW_DCM_DIS_CLR0
    0xF4000130, 0xFFFFFFFF, 0x00000000,// MMSYS_HW_DCM_DIS1
    0xF4000134, 0xFFFFFFFF, 0x00000000,// MMSYS_HW_DCM_DIS_SET1
    0xF4000138, 0xFFFFFFFF, 0xFFFFFFFF,// MMSYS_HW_DCM_DIS_CLR1
    0xF4010014, 0x00000010, 0x00000010,// SMI_LARB0_CON_SET
    0xF4022300, 0x00000001, 0x00000001,// SMI_DCM
    0xF5001014, 0x00000010, 0x00000010,// SMI_LARB2_CON_SET
    0xF6000018, 0x00000001, 0x00000000,// VDEC_DCM_CON
    0xF6010014, 0x00000010, 0x00000010,// SMI_LARB1_CON_SET
    0xF7000010, 0xFFFFFFFF, 0x00000000,// MJC_HW_DCM_DIS
    0xF7000014, 0xFFFFFFFF, 0x00000000,// MJC_HW_DCM_DIS_SET
    0xF7000018, 0xFFFFFFFF, 0x00000000,// MJC_HW_DCM_DIS_CLR
    0xF7002014, 0x00000010, 0x00000010,// SMI_LARB4_CON_SET
    0xF8001014, 0x00000010, 0x00000010,// SMI_LARB3_CON_SET
    0xF80020F4, 0x00000001, 0x00000001,// VENC_CLK_DCM_CTRL
    0xF80020FC, 0xFFFFFFFF, 0xFFFFFFFF,// VENC_CLK_CG_CTRL
    0xF8003300, 0x00000001, 0x00000000,// JPGENC_DCM_CTRL
    0xF8004300, 0x00000001, 0x00000000 // JPGDEC_DCM_CTRL
};

const unsigned int *AP_DCM_gs_talk = AP_DCM_gs_talk_data;

unsigned int AP_DCM_gs_talk_len = 162;

const unsigned int AP_DCM_gs_connsys_data[] = {
 // Address     Mask        Golden Setting Value
    0xF0000004, 0x0000FF9F, 0x00000080,// DCM_CFG
    0xF0001008, 0x0000001F, 0x00000000,// CA7_CKDIV1
    0xF0001010, 0x00000771, 0x00000771,// INFRA_TOPCKGEN_DCMCTL
    0xF0001014, 0x00000001, 0x00000001,// INFRA_TOPCKGEN_DCMDBC
    0xF0001050, 0x00000303, 0x00000303,// INFRA_GLOBALCON_DCMCTL
    0xF0001054, 0x017F017F, 0x01000100,// INFRA_GLOBALCON_DCMDBC
    0xF0001058, 0x1F1F0F07, 0x10100000,// INFRA_GLOBALCON_DCMFSEL
    0xF0003050, 0x00001FF3, 0x000000F3,// PERI_GLOBALCON_DCMCTL
    0xF0003054, 0x000000FF, 0x000000F0,// PERI_GLOBALCON_DCMDBC
    0xF0003058, 0x001F0F07, 0x00000000,// PERI_GLOBALCON_DCMFSEL
    0xF00041DC, 0xFFFFFFFF, 0xC3000000,// channel_A_DRAMC_PD_CTRL
    0xF000D13C, 0x00000001, 0x00000001,// PMIC_WRQP_DCM_EN
    0xF00111DC, 0xFFFFFFFF, 0xC3000000,// channel_B_DRAMC_PD_CTRL
    0xF020001C, 0x0F9C0000, 0x00000000,// MCUSYS_CONFIG
    0xF0200100, 0x00000F00, 0x00000B00,// CACHE_CONFIG
    0xF0200160, 0x00000010, 0x00000010,// ARMPLL_CTL
    0xF0203060, 0xFFFFFFFF, 0x40000000,// EMI_CONM
    0xF0205050, 0x0000007F, 0x00000000,// MM_MMU_DCM_DIS
    0xF0214050, 0x0000007F, 0x00000000,// PERISYS_MMU_DCM_DIS
    0xF1007054, 0x00000001, 0x00000001,// I2C0_I2CREG_HW_CG_EN
    0xF1008054, 0x00000001, 0x00000001,// I2C1_I2CREG_HW_CG_EN
    0xF1009054, 0x00000001, 0x00000001,// I2C2_I2CREG_HW_CG_EN
    0xF1010054, 0x00000001, 0x00000001,// I2C3_I2CREG_HW_CG_EN
    0xF1011054, 0x00000001, 0x00000001,// I2C4_I2CREG_HW_CG_EN
    0xF1200700, 0x00070000, 0x00000000,// USB0_DCM
    0xF12300B4, 0xFFFFFFFF, 0x00200000,// MSDC0_PATCH_BIT1
    0xF12400B4, 0xFFFFFFFF, 0x00200000,// MSDC1_PATCH_BIT1
    0xF12500B4, 0xFFFFFFFF, 0x00200000,// MSDC2_PATCH_BIT1
    0xF12600B4, 0xFFFFFFFF, 0x00200000,// MSDC3_PATCH_BIT1
    0xF4000120, 0xFFFFFFFF, 0x00000000,// MMSYS_HW_DCM_DIS0
    0xF4000124, 0xFFFFFFFF, 0x00000000,// MMSYS_HW_DCM_DIS_SET0
    0xF4000128, 0xFFFFFFFF, 0xFFFFFFFF,// MMSYS_HW_DCM_DIS_CLR0
    0xF4000130, 0xFFFFFFFF, 0x00000000,// MMSYS_HW_DCM_DIS1
    0xF4000134, 0xFFFFFFFF, 0x00000000,// MMSYS_HW_DCM_DIS_SET1
    0xF4000138, 0xFFFFFFFF, 0xFFFFFFFF,// MMSYS_HW_DCM_DIS_CLR1
    0xF4010014, 0x00000010, 0x00000010,// SMI_LARB0_CON_SET
    0xF4022300, 0x00000001, 0x00000001,// SMI_DCM
    0xF5001014, 0x00000010, 0x00000010,// SMI_LARB2_CON_SET
    0xF6000018, 0x00000001, 0x00000000,// VDEC_DCM_CON
    0xF6010014, 0x00000010, 0x00000010,// SMI_LARB1_CON_SET
    0xF7000010, 0xFFFFFFFF, 0x00000000,// MJC_HW_DCM_DIS
    0xF7000014, 0xFFFFFFFF, 0x00000000,// MJC_HW_DCM_DIS_SET
    0xF7000018, 0xFFFFFFFF, 0x00000000,// MJC_HW_DCM_DIS_CLR
    0xF7002014, 0x00000010, 0x00000010,// SMI_LARB4_CON_SET
    0xF8001014, 0x00000010, 0x00000010,// SMI_LARB3_CON_SET
    0xF80020F4, 0x00000001, 0x00000001,// VENC_CLK_DCM_CTRL
    0xF80020FC, 0xFFFFFFFF, 0xFFFFFFFF,// VENC_CLK_CG_CTRL
    0xF8003300, 0x00000001, 0x00000000,// JPGENC_DCM_CTRL
    0xF8004300, 0x00000001, 0x00000000 // JPGDEC_DCM_CTRL
};

const unsigned int *AP_DCM_gs_connsys = AP_DCM_gs_connsys_data;

unsigned int AP_DCM_gs_connsys_len = 162;

const unsigned int AP_DCM_gs_datalink_data[] = {
 // Address     Mask        Golden Setting Value
    0xF0000004, 0x0000FF9F, 0x00000080,// DCM_CFG
    0xF0001008, 0x0000001F, 0x00000000,// CA7_CKDIV1
    0xF0001010, 0x00000771, 0x00000771,// INFRA_TOPCKGEN_DCMCTL
    0xF0001014, 0x00000001, 0x00000001,// INFRA_TOPCKGEN_DCMDBC
    0xF0001050, 0x00000303, 0x00000303,// INFRA_GLOBALCON_DCMCTL
    0xF0001054, 0x017F017F, 0x01000100,// INFRA_GLOBALCON_DCMDBC
    0xF0001058, 0x1F1F0F07, 0x10100000,// INFRA_GLOBALCON_DCMFSEL
    0xF0003050, 0x00001FF3, 0x000000F3,// PERI_GLOBALCON_DCMCTL
    0xF0003054, 0x000000FF, 0x000000F0,// PERI_GLOBALCON_DCMDBC
    0xF0003058, 0x001F0F07, 0x00000000,// PERI_GLOBALCON_DCMFSEL
    0xF00041DC, 0xFFFFFFFF, 0xC3000000,// channel_A_DRAMC_PD_CTRL
    0xF000D13C, 0x00000001, 0x00000001,// PMIC_WRQP_DCM_EN
    0xF00111DC, 0xFFFFFFFF, 0xC3000000,// channel_B_DRAMC_PD_CTRL
    0xF020001C, 0x0F9C0000, 0x00000000,// MCUSYS_CONFIG
    0xF0200100, 0x00000F00, 0x00000B00,// CACHE_CONFIG
    0xF0200160, 0x00000010, 0x00000010,// ARMPLL_CTL
    0xF0203060, 0xFFFFFFFF, 0x40000000,// EMI_CONM
    0xF0205050, 0x0000007F, 0x00000000,// MM_MMU_DCM_DIS
    0xF0214050, 0x0000007F, 0x00000000,// PERISYS_MMU_DCM_DIS
    0xF1007054, 0x00000001, 0x00000001,// I2C0_I2CREG_HW_CG_EN
    0xF1008054, 0x00000001, 0x00000001,// I2C1_I2CREG_HW_CG_EN
    0xF1009054, 0x00000001, 0x00000001,// I2C2_I2CREG_HW_CG_EN
    0xF1010054, 0x00000001, 0x00000001,// I2C3_I2CREG_HW_CG_EN
    0xF1011054, 0x00000001, 0x00000001,// I2C4_I2CREG_HW_CG_EN
    0xF1200700, 0x00070000, 0x00000000,// USB0_DCM
    0xF12300B4, 0xFFFFFFFF, 0x00200000,// MSDC0_PATCH_BIT1
    0xF12400B4, 0xFFFFFFFF, 0x00200000,// MSDC1_PATCH_BIT1
    0xF12500B4, 0xFFFFFFFF, 0x00200000,// MSDC2_PATCH_BIT1
    0xF12600B4, 0xFFFFFFFF, 0x00200000,// MSDC3_PATCH_BIT1
    0xF4000120, 0xFFFFFFFF, 0x00000000,// MMSYS_HW_DCM_DIS0
    0xF4000124, 0xFFFFFFFF, 0x00000000,// MMSYS_HW_DCM_DIS_SET0
    0xF4000128, 0xFFFFFFFF, 0xFFFFFFFF,// MMSYS_HW_DCM_DIS_CLR0
    0xF4000130, 0xFFFFFFFF, 0x00000000,// MMSYS_HW_DCM_DIS1
    0xF4000134, 0xFFFFFFFF, 0x00000000,// MMSYS_HW_DCM_DIS_SET1
    0xF4000138, 0xFFFFFFFF, 0xFFFFFFFF,// MMSYS_HW_DCM_DIS_CLR1
    0xF4010014, 0x00000010, 0x00000010,// SMI_LARB0_CON_SET
    0xF4022300, 0x00000001, 0x00000001,// SMI_DCM
    0xF5001014, 0x00000010, 0x00000010,// SMI_LARB2_CON_SET
    0xF6000018, 0x00000001, 0x00000000,// VDEC_DCM_CON
    0xF6010014, 0x00000010, 0x00000010,// SMI_LARB1_CON_SET
    0xF7000010, 0xFFFFFFFF, 0x00000000,// MJC_HW_DCM_DIS
    0xF7000014, 0xFFFFFFFF, 0x00000000,// MJC_HW_DCM_DIS_SET
    0xF7000018, 0xFFFFFFFF, 0x00000000,// MJC_HW_DCM_DIS_CLR
    0xF7002014, 0x00000010, 0x00000010,// SMI_LARB4_CON_SET
    0xF8001014, 0x00000010, 0x00000010,// SMI_LARB3_CON_SET
    0xF80020F4, 0x00000001, 0x00000001,// VENC_CLK_DCM_CTRL
    0xF80020FC, 0xFFFFFFFF, 0xFFFFFFFF,// VENC_CLK_CG_CTRL
    0xF8003300, 0x00000001, 0x00000000,// JPGENC_DCM_CTRL
    0xF8004300, 0x00000001, 0x00000000 // JPGDEC_DCM_CTRL
};

const unsigned int *AP_DCM_gs_datalink = AP_DCM_gs_datalink_data;

unsigned int AP_DCM_gs_datalink_len = 162;

const unsigned int AP_DCM_gs_dcm_off_data[] = {
 // Address     Mask        Golden Setting Value
    0xF0000004, 0x00000080, 0x00000000,// DCM_CFG
    0xF0001010, 0x00000771, 0x00000000,// INFRA_TOPCKGEN_DCMCTL
    0xF0001014, 0x00000001, 0x00000000,// INFRA_TOPCKGEN_DCMDBC
    0xF0001050, 0x00000303, 0x00000000,// INFRA_GLOBALCON_DCMCTL
    0xF0003050, 0x00001FF3, 0x00000000,// PERI_GLOBALCON_DCMCTL
    0xF0003054, 0x000000FF, 0x000000F0,// PERI_GLOBALCON_DCMDBC
    0xF0003058, 0x001F0F07, 0x00000000,// PERI_GLOBALCON_DCMFSEL
    0xF00041DC, 0xFFFFFFFF, 0x01000000,// channel_A_DRAMC_PD_CTRL
    0xF000D13C, 0x00000001, 0x00000000,// PMIC_WRQP_DCM_EN
    0xF00111DC, 0xFFFFFFFF, 0x01000000,// channel_B_DRAMC_PD_CTRL
    0xF020001C, 0x0F9C0000, 0x0F9C0000,// MCUSYS_CONFIG
    0xF0200100, 0x00000F00, 0x00000300,// CACHE_CONFIG
    0xF0200160, 0x00000010, 0x00000000,// ARMPLL_CTL
    0xF0203060, 0xFFFFFFFF, 0xFF000000,// EMI_CONM
    0xF0205050, 0x0000007F, 0x0000007F,// MM_MMU_DCM_DIS
    0xF0214050, 0x0000007F, 0x0000007F,// PERISYS_MMU_DCM_DIS
    0xF1007054, 0x00000001, 0x00000000,// I2C0_I2CREG_HW_CG_EN
    0xF1008054, 0x00000001, 0x00000000,// I2C1_I2CREG_HW_CG_EN
    0xF1009054, 0x00000001, 0x00000000,// I2C2_I2CREG_HW_CG_EN
    0xF1010054, 0x00000001, 0x00000000,// I2C3_I2CREG_HW_CG_EN
    0xF1011054, 0x00000001, 0x00000000,// I2C4_I2CREG_HW_CG_EN
    0xF1200700, 0x00070000, 0x00070000,// USB0_DCM
    0xF12300B4, 0xFFFFFFFF, 0xFF800000,// MSDC0_PATCH_BIT1
    0xF12400B4, 0xFFFFFFFF, 0xFF800000,// MSDC1_PATCH_BIT1
    0xF12500B4, 0xFFFFFFFF, 0xFF800000,// MSDC2_PATCH_BIT1
    0xF12600B4, 0xFFFFFFFF, 0xFF800000,// MSDC3_PATCH_BIT1
    0xF4000120, 0xFFFFFFFF, 0xFFFFFFFF,// MMSYS_HW_DCM_DIS0
    0xF4000124, 0xFFFFFFFF, 0xFFFFFFFF,// MMSYS_HW_DCM_DIS_SET0
    0xF4000128, 0xFFFFFFFF, 0x00000000,// MMSYS_HW_DCM_DIS_CLR0
    0xF4000130, 0xFFFFFFFF, 0xFFFFFFFF,// MMSYS_HW_DCM_DIS1
    0xF4000134, 0xFFFFFFFF, 0xFFFFFFFF,// MMSYS_HW_DCM_DIS_SET1
    0xF4000138, 0xFFFFFFFF, 0x00000000,// MMSYS_HW_DCM_DIS_CLR1
    0xF4010018, 0x00000010, 0x00000010,// SMI_LARB0_CON_CLR
    0xF4022300, 0x00000001, 0x00000000,// SMI_DCM
    0xF5001018, 0x00008000, 0x00008000,// SMI_LARB2_CON_CLR
    0xF6000018, 0x00000001, 0x00000001,// VDEC_DCM_CON
    0xF6010018, 0x00000010, 0x00000010,// SMI_LARB1_CON_CLR
    0xF7000010, 0xFFFFFFFF, 0x0000000F,// MJC_HW_DCM_DIS
    0xF7002018, 0x00008000, 0x00008000,// SMI_LARB4_CON_CLR
    0xF8001018, 0x00008000, 0x00008000,// SMI_LARB3_CON_CLR
    0xF80020F4, 0x00000001, 0x00000000,// VENC_CLK_DCM_CTRL
    0xF80020FC, 0xFFFFFFFF, 0x00000000,// VENC_CLK_CG_CTRL
    0xF8003300, 0x00000001, 0x00000001,// JPGENC_DCM_CTRL
    0xF8004300, 0x00000001, 0x00000001 // JPGDEC_DCM_CTRL
};

const unsigned int *AP_DCM_gs_dcm_off = AP_DCM_gs_dcm_off_data;

unsigned int AP_DCM_gs_dcm_off_len = 162;

const unsigned int AP_DCM_gs_vr_data[] = {
 // Address     Mask        Golden Setting Value
    0xF0000004, 0x0000FF9F, 0x00000000,// DCM_CFG
    0xF0001008, 0x0000001F, 0x00000000,// CA7_CKDIV1
    0xF0001010, 0x00000771, 0x00000771,// INFRA_TOPCKGEN_DCMCTL
    0xF0001014, 0x00000001, 0x00000001,// INFRA_TOPCKGEN_DCMDBC
    0xF0001050, 0x00000303, 0x00000303,// INFRA_GLOBALCON_DCMCTL
    0xF0001054, 0x017F017F, 0x01000100,// INFRA_GLOBALCON_DCMDBC
    0xF0001058, 0x1F1F0F07, 0x10100000,// INFRA_GLOBALCON_DCMFSEL
    0xF0003050, 0x00001FF3, 0x000000F3,// PERI_GLOBALCON_DCMCTL
    0xF0003054, 0x000000FF, 0x000000F0,// PERI_GLOBALCON_DCMDBC
    0xF0003058, 0x001F0F07, 0x00000000,// PERI_GLOBALCON_DCMFSEL
    0xF00041DC, 0xFFFFFFFF, 0xC3000000,// channel_A_DRAMC_PD_CTRL
    0xF000D13C, 0x00000001, 0x00000001,// PMIC_WRQP_DCM_EN
    0xF00111DC, 0xFFFFFFFF, 0xC3000000,// channel_B_DRAMC_PD_CTRL
    0xF020001C, 0x0F9C0000, 0x00000000,// MCUSYS_CONFIG
    0xF0200100, 0x00000F00, 0x00000B00,// CACHE_CONFIG
    0xF0200160, 0x00000010, 0x00000010,// ARMPLL_CTL
    0xF0203060, 0xFFFFFFFF, 0x40000000,// EMI_CONM
    0xF0205050, 0x0000007F, 0x00000000,// MM_MMU_DCM_DIS
    0xF0214050, 0x0000007F, 0x00000000,// PERISYS_MMU_DCM_DIS
    0xF1007054, 0x00000001, 0x00000001,// I2C0_I2CREG_HW_CG_EN
    0xF1008054, 0x00000001, 0x00000001,// I2C1_I2CREG_HW_CG_EN
    0xF1009054, 0x00000001, 0x00000001,// I2C2_I2CREG_HW_CG_EN
    0xF1010054, 0x00000001, 0x00000001,// I2C3_I2CREG_HW_CG_EN
    0xF1011054, 0x00000001, 0x00000001,// I2C4_I2CREG_HW_CG_EN
    0xF1200700, 0x00070000, 0x00000000,// USB0_DCM
    0xF12300B4, 0xFFFFFFFF, 0x00200000,// MSDC0_PATCH_BIT1
    0xF12400B4, 0xFFFFFFFF, 0x00200000,// MSDC1_PATCH_BIT1
    0xF12500B4, 0xFFFFFFFF, 0x00200000,// MSDC2_PATCH_BIT1
    0xF12600B4, 0xFFFFFFFF, 0x00200000,// MSDC3_PATCH_BIT1
    0xF4000120, 0xFFFFFFFF, 0x00000000,// MMSYS_HW_DCM_DIS0
    0xF4000124, 0xFFFFFFFF, 0x00000000,// MMSYS_HW_DCM_DIS_SET0
    0xF4000128, 0xFFFFFFFF, 0xFFFFFFFF,// MMSYS_HW_DCM_DIS_CLR0
    0xF4000130, 0xFFFFFFFF, 0x00000000,// MMSYS_HW_DCM_DIS1
    0xF4000134, 0xFFFFFFFF, 0x00000000,// MMSYS_HW_DCM_DIS_SET1
    0xF4000138, 0xFFFFFFFF, 0xFFFFFFFF,// MMSYS_HW_DCM_DIS_CLR1
    0xF4010014, 0x00000010, 0x00000010,// SMI_LARB0_CON_SET
    0xF4022300, 0x00000001, 0x00000001,// SMI_DCM
    0xF5001014, 0x00000010, 0x00000010,// SMI_LARB2_CON_SET
    0xF6000018, 0x00000001, 0x00000000,// VDEC_DCM_CON
    0xF6010014, 0x00000010, 0x00000010,// SMI_LARB1_CON_SET
    0xF7000010, 0xFFFFFFFF, 0x00000000,// MJC_HW_DCM_DIS
    0xF7000014, 0xFFFFFFFF, 0x00000000,// MJC_HW_DCM_DIS_SET
    0xF7000018, 0xFFFFFFFF, 0x00000000,// MJC_HW_DCM_DIS_CLR
    0xF7002014, 0x00000010, 0x00000010,// SMI_LARB4_CON_SET
    0xF8001014, 0x00000010, 0x00000010,// SMI_LARB3_CON_SET
    0xF80020F4, 0x00000001, 0x00000001,// VENC_CLK_DCM_CTRL
    0xF80020FC, 0xFFFFFFFF, 0xFFFFFFFF,// VENC_CLK_CG_CTRL
    0xF8003300, 0x00000001, 0x00000000,// JPGENC_DCM_CTRL
    0xF8004300, 0x00000001, 0x00000000 // JPGDEC_DCM_CTRL
};

const unsigned int *AP_DCM_gs_vr = AP_DCM_gs_vr_data;

unsigned int AP_DCM_gs_vr_len = 162;

const unsigned int AP_DCM_gs_cmparam_data[] = {
 // Address     Mask        Golden Setting Value
    0xF0203060, 0xFFFFFFFF, 0x00000000,// EMI_CONM
};

const unsigned int *AP_DCM_gs_cmparam = AP_DCM_gs_cmparam_data;

unsigned int AP_DCM_gs_cmparam_len = 162;

*/