/* Copyright (c) 2011-2013, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

/*****************************************************************************
 *                     C O M P I L E R   F L A G S
 *****************************************************************************/


/*****************************************************************************
 *                E X T E R N A L   R E F E R E N C E S
 *****************************************************************************/

#include "AudDrv_Common.h"
#include "AudDrv_Afe.h"
#include "AudDrv_Clk.h"
#include "AudDrv_Def.h"

/*****************************************************************************
 *                         D A T A   T Y P E S
 *****************************************************************************/



/*****************************************************************************
 *                         FUNCTION DEFINITION
 *****************************************************************************/
void Afe_Set_Reg(uint32 offset, uint32 value, uint32 mask);
uint32 Afe_Get_Reg(uint32 offset);

/*****************************************************************************
 *                         FUNCTION IMPLEMENTATION
 *****************************************************************************/

void Afe_Set_Reg(uint32 offset, uint32 value, uint32 mask)
{
#ifdef AUDIO_MEM_IOREMAP
    extern void *AFE_BASE_ADDRESS;
    //PRINTK_AUDDRV("Afe_Set_Reg AUDIO_MEM_IOREMAP AFE_BASE_ADDRESS = %p\n",AFE_BASE_ADDRESS);
    volatile uint32 address = (uint32)((char *)AFE_BASE_ADDRESS + offset);
#else
    volatile uint32 address = (AFE_BASE + offset);
#endif

    volatile uint32 *AFE_Register = (volatile uint32 *)address;
    volatile uint32 val_tmp;

    //PRINTK_AFE_REG("Afe_Set_Reg offset=%x, value=%x, mask=%x \n",offset,value,mask);
    val_tmp = Afe_Get_Reg(offset);
    val_tmp &= (~mask);
    val_tmp |= (value & mask);
    mt65xx_reg_sync_writel(val_tmp, AFE_Register);
}

uint32 Afe_Get_Reg(uint32 offset)
{
#ifdef AUDIO_MEM_IOREMAP
    extern void *AFE_BASE_ADDRESS;
    //PRINTK_AUDDRV("Afe_Get_Reg AUDIO_MEM_IOREMAP AFE_BASE_ADDRESS = %p\ offset = %xn",AFE_BASE_ADDRESS,offset);
    volatile uint32 address = (uint32)((char *)AFE_BASE_ADDRESS + offset);
#else
    volatile uint32 address = (AFE_BASE + offset);
#endif
    volatile uint32 *value;
    //PRINTK_AFE_REG("Afe_Get_Reg offset=%x address = %x \n",offset,address);
    value = (volatile uint32 *)(address);
    return *value;
}

void Afe_Log_Print(void)
{
    AudDrv_Clk_On();
    printk("+AudDrv Afe_Log_Print \n");
    printk("AUDIOAFE_TOP_CON0  = 0x%x\n", Afe_Get_Reg(AUDIOAFE_TOP_CON0));
    printk("AUDIO_TOP_CON1  = 0x%x\n", Afe_Get_Reg(AUDIO_TOP_CON1));
    printk("AUDIO_TOP_CON2  = 0x%x\n", Afe_Get_Reg(AUDIO_TOP_CON2));
    printk("AUDIO_TOP_CON3  = 0x%x\n", Afe_Get_Reg(AUDIO_TOP_CON3));
    printk("AFE_DAC_CON0  = 0x%x\n", Afe_Get_Reg(AFE_DAC_CON0));
    printk("AFE_DAC_CON1  = 0x%x\n", Afe_Get_Reg(AFE_DAC_CON1));
    printk("AFE_I2S_CON  = 0x%x\n", Afe_Get_Reg(AFE_I2S_CON));
    //printk("AFE_DAIBT_CON0  = 0x%x\n",Afe_Get_Reg(AFE_DAIBT_CON0));
    printk("AFE_CONN0  = 0x%x\n", Afe_Get_Reg(AFE_CONN0));
    printk("AFE_CONN1  = 0x%x\n", Afe_Get_Reg(AFE_CONN1));
    printk("AFE_CONN2  = 0x%x\n", Afe_Get_Reg(AFE_CONN2));
    printk("AFE_CONN3  = 0x%x\n", Afe_Get_Reg(AFE_CONN3));
    printk("AFE_CONN4  = 0x%x\n", Afe_Get_Reg(AFE_CONN4));
    printk("AFE_I2S_CON1  = 0x%x\n", Afe_Get_Reg(AFE_I2S_CON1));
    printk("AFE_I2S_CON2  = 0x%x\n", Afe_Get_Reg(AFE_I2S_CON2));
    //printk("AFE_MRGIF_CON  = 0x%x\n",Afe_Get_Reg(AFE_MRGIF_CON));

    printk("AFE_DL1_BASE  = 0x%x\n", Afe_Get_Reg(AFE_DL1_BASE));
    printk("AFE_DL1_CUR  = 0x%x\n", Afe_Get_Reg(AFE_DL1_CUR));
    printk("AFE_DL1_END  = 0x%x\n", Afe_Get_Reg(AFE_DL1_END));
    printk("AFE_I2S_CON3  = 0x%x\n", Afe_Get_Reg(AFE_I2S_CON3));

    printk("AFE_DL2_BASE  = 0x%x\n", Afe_Get_Reg(AFE_DL2_BASE));
    printk("AFE_DL2_CUR  = 0x%x\n", Afe_Get_Reg(AFE_DL2_CUR));
    printk("AFE_DL2_END  = 0x%x\n", Afe_Get_Reg(AFE_DL2_END));
    printk("AFE_AWB_BASE  = 0x%x\n", Afe_Get_Reg(AFE_AWB_BASE));
    printk("AFE_AWB_END  = 0x%x\n", Afe_Get_Reg(AFE_AWB_END));
    printk("AFE_AWB_CUR  = 0x%x\n", Afe_Get_Reg(AFE_AWB_CUR));
    printk("AFE_VUL_BASE  = 0x%x\n", Afe_Get_Reg(AFE_VUL_BASE));
    printk("AFE_VUL_END  = 0x%x\n", Afe_Get_Reg(AFE_VUL_END));
    printk("AFE_VUL_CUR  = 0x%x\n", Afe_Get_Reg(AFE_VUL_CUR));
    //printk("AFE_DAI_BASE  = 0x%x\n",Afe_Get_Reg(AFE_DAI_BASE));
    //printk("AFE_DAI_END  = 0x%x\n",Afe_Get_Reg(AFE_DAI_END));
    //printk("AFE_DAI_CUR  = 0x%x\n",Afe_Get_Reg(AFE_DAI_CUR));
    //printk("AFE_IRQ_CON  = 0x%x\n",Afe_Get_Reg(AFE_IRQ_CON));

    printk("AFE_MEMIF_MON0  = 0x%x\n", Afe_Get_Reg(AFE_MEMIF_MON0));
    printk("AFE_MEMIF_MON1  = 0x%x\n", Afe_Get_Reg(AFE_MEMIF_MON1));
    printk("AFE_MEMIF_MON2  = 0x%x\n", Afe_Get_Reg(AFE_MEMIF_MON2));
    //printk("AFE_MEMIF_MON3  = 0x%x\n",Afe_Get_Reg(AFE_MEMIF_MON3));
    printk("AFE_MEMIF_MON4  = 0x%x\n", Afe_Get_Reg(AFE_MEMIF_MON4));
    //printk("AFE_FOC_CON  = 0x%x\n",Afe_Get_Reg(AFE_FOC_CON));
    //printk("AFE_FOC_CON1  = 0x%x\n",Afe_Get_Reg(AFE_FOC_CON1));
    //printk("AFE_FOC_CON2  = 0x%x\n",Afe_Get_Reg(AFE_FOC_CON2));
    //printk("AFE_FOC_CON3  = 0x%x\n",Afe_Get_Reg(AFE_FOC_CON3));
    //printk("AFE_FOC_CON4  = 0x%x\n",Afe_Get_Reg(AFE_FOC_CON4));
    //printk("AFE_FOC_CON5  = 0x%x\n",Afe_Get_Reg(AFE_FOC_CON5));
    //printk("AFE_MON_STEP  = 0x%x\n",Afe_Get_Reg(AFE_MON_STEP));
    printk("AFE_ADDA_DL_SRC2_CON0  = 0x%x\n", Afe_Get_Reg(AFE_ADDA_DL_SRC2_CON0));
    printk("AFE_ADDA_DL_SRC2_CON1  = 0x%x\n", Afe_Get_Reg(AFE_ADDA_DL_SRC2_CON1));
    printk("AFE_ADDA_UL_SRC_CON0  = 0x%x\n", Afe_Get_Reg(AFE_ADDA_UL_SRC_CON0));
    printk("AFE_ADDA_UL_SRC_CON1  = 0x%x\n", Afe_Get_Reg(AFE_ADDA_UL_SRC_CON1));
    printk("AFE_ADDA_TOP_CON0  = 0x%x\n", Afe_Get_Reg(AFE_ADDA_TOP_CON0));
    printk("AFE_ADDA_UL_DL_CON0  = 0x%x\n", Afe_Get_Reg(AFE_ADDA_UL_DL_CON0));
    printk("AFE_ADDA_SRC_DEBUG  = 0x%x\n", Afe_Get_Reg(AFE_ADDA_SRC_DEBUG));
    printk("AFE_ADDA_SRC_DEBUG_MON0  = 0x%x\n", Afe_Get_Reg(AFE_ADDA_SRC_DEBUG_MON0));
    printk("AFE_ADDA_SRC_DEBUG_MON1  = 0x%x\n", Afe_Get_Reg(AFE_ADDA_SRC_DEBUG_MON1));
    printk("AFE_ADDA_NEWIF_CFG0  = 0x%x\n", Afe_Get_Reg(AFE_ADDA_NEWIF_CFG0));
    printk("AFE_ADDA_NEWIF_CFG1  = 0x%x\n", Afe_Get_Reg(AFE_ADDA_NEWIF_CFG1));
    printk("AFE_SIDETONE_DEBUG  = 0x%x\n", Afe_Get_Reg(AFE_SIDETONE_DEBUG));
    printk("AFE_SIDETONE_MON  = 0x%x\n", Afe_Get_Reg(AFE_SIDETONE_MON));
    printk("AFE_SIDETONE_CON0  = 0x%x\n", Afe_Get_Reg(AFE_SIDETONE_CON0));
    printk("AFE_SIDETONE_COEFF  = 0x%x\n", Afe_Get_Reg(AFE_SIDETONE_COEFF));
    printk("AFE_SIDETONE_CON1  = 0x%x\n", Afe_Get_Reg(AFE_SIDETONE_CON1));
    printk("AFE_SIDETONE_GAIN  = 0x%x\n", Afe_Get_Reg(AFE_SIDETONE_GAIN));
    printk("AFE_SGEN_CON0  = 0x%x\n", Afe_Get_Reg(AFE_SGEN_CON0));
    //printk("AFE_MRG_MON0  = 0x%x\n",Afe_Get_Reg(AFE_MRG_MON0));
    //printk("AFE_MRG_MON1  = 0x%x\n",Afe_Get_Reg(AFE_MRG_MON1));
    //printk("AFE_MRG_MON2  = 0x%x\n",Afe_Get_Reg(AFE_MRG_MON2));
    printk("AFE_TOP_CON0  = 0x%x\n", Afe_Get_Reg(AFE_TOP_CON0));
    printk("AFE_PREDIS_CON0  = 0x%x\n", Afe_Get_Reg(AFE_PREDIS_CON0)); //AFE_ADDA_PREDIS_CON0
    printk("AFE_PREDIS_CON1  = 0x%x\n", Afe_Get_Reg(AFE_PREDIS_CON1)); //AFE_ADDA_PREDIS_CON1

    printk("AFE_MOD_PCM_BASE  = 0x%x\n", Afe_Get_Reg(AFE_MOD_PCM_BASE));//AFE_MOD_DAI_BASE
    printk("AFE_MOD_PCM_END  = 0x%x\n", Afe_Get_Reg(AFE_MOD_PCM_END));//AFE_MOD_DAI_END
    printk("AFE_MOD_PCM_CUR  = 0x%x\n", Afe_Get_Reg(AFE_MOD_PCM_CUR));//AFE_MOD_DAI_CUR

    printk("AFE_HDMI_OUT_CON0  = 0x%x\n", Afe_Get_Reg(AFE_HDMI_OUT_CON0));
    printk("AFE_HDMI_OUT_BASE  = 0x%x\n", Afe_Get_Reg(AFE_HDMI_OUT_BASE));
    printk("AFE_HDMI_OUT_CUR  = 0x%x\n", Afe_Get_Reg(AFE_HDMI_OUT_CUR));
    printk("AFE_HDMI_OUT_END  = 0x%x\n", Afe_Get_Reg(AFE_HDMI_OUT_END));
    printk("AFE_SPDIF_OUT_CON0  = 0x%x\n", Afe_Get_Reg(AFE_SPDIF_OUT_CON0));
    printk("AFE_SPDIF_BASE  = 0x%x\n", Afe_Get_Reg(AFE_SPDIF_BASE));
    printk("AFE_SPDIF_CUR  = 0x%x\n", Afe_Get_Reg(AFE_SPDIF_CUR));
    printk("AFE_SPDIF_END  = 0x%x\n", Afe_Get_Reg(AFE_SPDIF_END));
    printk("AFE_HDMI_CONN0  = 0x%x\n", Afe_Get_Reg(AFE_HDMI_CONN0));
    printk("AFE_8CH_I2S_OUT_CON  = 0x%x\n", Afe_Get_Reg(AFE_8CH_I2S_OUT_CON));
    printk("AFE_HDMI_CONN1  = 0x%x\n", Afe_Get_Reg(AFE_HDMI_CONN1));

    printk("AFE_IRQ_MCU_CON  = 0x%x\n", Afe_Get_Reg(AFE_IRQ_MCU_CON));
    printk("AFE_IRQ_MCU_STATUS  = 0x%x\n", Afe_Get_Reg(AFE_IRQ_MCU_STATUS));
    printk("AFE_IRQ_CLR  = 0x%x\n", Afe_Get_Reg(AFE_IRQ_CLR));
    printk("AFE_IRQ_MCU_CNT1  = 0x%x\n", Afe_Get_Reg(AFE_IRQ_MCU_CNT1));
    printk("AFE_IRQ_MCU_CNT2  = 0x%x\n", Afe_Get_Reg(AFE_IRQ_MCU_CNT2));
    printk("AFE_IRQ_MCU_MON2  = 0x%x\n", Afe_Get_Reg(AFE_IRQ_MCU_MON2));
    printk("AFE_IRQ_MCU_CNT5  = 0x%x\n", Afe_Get_Reg(AFE_IRQ_MCU_CNT5));
    printk("AFE_IRQ1_MCU_CNT_MON  = 0x%x\n", Afe_Get_Reg(AFE_IRQ1_MCU_CNT_MON));
    printk("AFE_IRQ2_MCU_CNT_MON  = 0x%x\n", Afe_Get_Reg(AFE_IRQ2_MCU_CNT_MON));
    printk("AFE_IRQ1_MCU_EN_CNT_MON  = 0x%x\n", Afe_Get_Reg(AFE_IRQ1_MCU_EN_CNT_MON));
    printk("AFE_IRQ5_MCU_EN_CNT_MON  = 0x%x\n", Afe_Get_Reg(AFE_IRQ5_MCU_EN_CNT_MON));
    //printk("AFE_MEMIF_MINLEN  = 0x%x\n", Afe_Get_Reg(AFE_MEMIF_MINLEN));
    printk("AFE_MEMIF_MAXLEN  = 0x%x\n", Afe_Get_Reg(AFE_MEMIF_MAXLEN));
    printk("AFE_MEMIF_PBUF_SIZE  = 0x%x\n", Afe_Get_Reg(AFE_MEMIF_PBUF_SIZE));

    printk("AFE_GAIN1_CON0  = 0x%x\n", Afe_Get_Reg(AFE_GAIN1_CON0));
    printk("AFE_GAIN1_CON1  = 0x%x\n", Afe_Get_Reg(AFE_GAIN1_CON1));
    printk("AFE_GAIN1_CON2  = 0x%x\n", Afe_Get_Reg(AFE_GAIN1_CON2));
    printk("AFE_GAIN1_CON3  = 0x%x\n", Afe_Get_Reg(AFE_GAIN1_CON3));
    printk("AFE_GAIN1_CONN  = 0x%x\n", Afe_Get_Reg(AFE_GAIN1_CONN));
    printk("AFE_GAIN1_CUR  = 0x%x\n", Afe_Get_Reg(AFE_GAIN1_CUR));
    printk("AFE_GAIN2_CON0  = 0x%x\n", Afe_Get_Reg(AFE_GAIN2_CON0));
    printk("AFE_GAIN2_CON1  = 0x%x\n", Afe_Get_Reg(AFE_GAIN2_CON1));
    printk("AFE_GAIN2_CON2  = 0x%x\n", Afe_Get_Reg(AFE_GAIN2_CON2));
    printk("AFE_GAIN2_CON3  = 0x%x\n", Afe_Get_Reg(AFE_GAIN2_CON3));
    printk("AFE_GAIN2_CONN  = 0x%x\n", Afe_Get_Reg(AFE_GAIN2_CONN));
    printk("AFE_GAIN2_CUR  = 0x%x\n", Afe_Get_Reg(AFE_GAIN2_CUR));
    printk("AFE_GAIN2_CONN2  = 0x%x\n", Afe_Get_Reg(AFE_GAIN2_CONN2));

    printk("AFE_IEC_CFG = 0x%x\n", Afe_Get_Reg(AFE_IEC_CFG));
    printk("AFE_IEC_NSNUM = 0x%x\n", Afe_Get_Reg(AFE_IEC_NSNUM));
    printk("AFE_IEC_BURST_INFO = 0x%x\n", Afe_Get_Reg(AFE_IEC_BURST_INFO));
    printk("AFE_IEC_BURST_LEN = 0x%x\n", Afe_Get_Reg(AFE_IEC_BURST_LEN));
    printk("AFE_IEC_NSADR = 0x%x\n", Afe_Get_Reg(AFE_IEC_NSADR));
    printk("AFE_IEC_CHL_STAT0 = 0x%x\n", Afe_Get_Reg(AFE_IEC_CHL_STAT0));
    printk("AFE_IEC_CHL_STAT1 = 0x%x\n", Afe_Get_Reg(AFE_IEC_CHL_STAT1));
    printk("AFE_IEC_CHR_STAT0 = 0x%x\n", Afe_Get_Reg(AFE_IEC_CHR_STAT0));
    printk("AFE_IEC_CHR_STAT1 = 0x%x\n", Afe_Get_Reg(AFE_IEC_CHR_STAT1));

    printk("FPGA_CFG2  = 0x%x\n", Afe_Get_Reg(FPGA_CFG2));
    printk("FPGA_CFG3  = 0x%x\n", Afe_Get_Reg(FPGA_CFG3));
    printk("FPGA_CFG0  = 0x%x\n", Afe_Get_Reg(FPGA_CFG0));
    printk("FPGA_CFG1  = 0x%x\n", Afe_Get_Reg(FPGA_CFG1));
    printk("FPGA_STC  = 0x%x\n", Afe_Get_Reg(FPGA_STC));

    printk("AFE_ASRC_CON0  = 0x%x\n", Afe_Get_Reg(AFE_ASRC_CON0));
    printk("AFE_ASRC_CON1  = 0x%x\n", Afe_Get_Reg(AFE_ASRC_CON1));
    printk("AFE_ASRC_CON2  = 0x%x\n", Afe_Get_Reg(AFE_ASRC_CON2));
    printk("AFE_ASRC_CON3  = 0x%x\n", Afe_Get_Reg(AFE_ASRC_CON3));
    printk("AFE_ASRC_CON4  = 0x%x\n", Afe_Get_Reg(AFE_ASRC_CON4));
    printk("AFE_ASRC_CON5  = 0x%x\n", Afe_Get_Reg(AFE_ASRC_CON5));
    printk("AFE_ASRC_CON6  = 0x%x\n", Afe_Get_Reg(AFE_ASRC_CON6));
    printk("AFE_ASRC_CON7  = 0x%x\n", Afe_Get_Reg(AFE_ASRC_CON7));
    printk("AFE_ASRC_CON8  = 0x%x\n", Afe_Get_Reg(AFE_ASRC_CON8));
    printk("AFE_ASRC_CON9  = 0x%x\n", Afe_Get_Reg(AFE_ASRC_CON9));
    printk("AFE_ASRC_CON10  = 0x%x\n", Afe_Get_Reg(AFE_ASRC_CON10));
    printk("AFE_ASRC_CON11  = 0x%x\n", Afe_Get_Reg(AFE_ASRC_CON11));
    printk("PCM_INTF_CON1  = 0x%x\n", Afe_Get_Reg(PCM_INTF_CON1));
    printk("PCM_INTF_CON2  = 0x%x\n", Afe_Get_Reg(PCM_INTF_CON2));
    printk("PCM2_INTF_CON  = 0x%x\n", Afe_Get_Reg(PCM2_INTF_CON));

    //



    printk("AFE_ASRC_CON13  = 0x%x\n", Afe_Get_Reg(AFE_ASRC_CON13));
    printk("AFE_ASRC_CON14  = 0x%x\n", Afe_Get_Reg(AFE_ASRC_CON14));
    printk("AFE_ASRC_CON15  = 0x%x\n", Afe_Get_Reg(AFE_ASRC_CON15));
    printk("AFE_ASRC_CON16  = 0x%x\n", Afe_Get_Reg(AFE_ASRC_CON16));
    printk("AFE_ASRC_CON17  = 0x%x\n", Afe_Get_Reg(AFE_ASRC_CON17));
    printk("AFE_ASRC_CON18  = 0x%x\n", Afe_Get_Reg(AFE_ASRC_CON18));
    printk("AFE_ASRC_CON19  = 0x%x\n", Afe_Get_Reg(AFE_ASRC_CON19));
    printk("AFE_ASRC_CON20  = 0x%x\n", Afe_Get_Reg(AFE_ASRC_CON20));
    printk("AFE_ASRC_CON21  = 0x%x\n", Afe_Get_Reg(AFE_ASRC_CON21));

    AudDrv_Clk_Off();
    printk("-AudDrv Afe_Log_Print \n");
}

void AP_Set_Reg(uint32 offset, uint32 value, uint32 mask)
{
    extern void *AFE_BASE_ADDRESS;
    volatile uint32 address = (uint32)(offset);

    volatile uint32 *AP_Register = (volatile uint32 *)address;
    volatile uint32 val_tmp;

    //PRINTK_AFE_REG("Afe_Set_Reg offset=%x, value=%x, mask=%x \n",offset,value,mask);
    val_tmp = AP_Get_Reg(offset);
    val_tmp &= (~mask);
    val_tmp |= (value & mask);

    //printk("AP_Set_Reg offset=%08x val=%08x (AFE_BASE_ADDRESS=%08x)\n", AP_Register, val_tmp, AFE_BASE_ADDRESS);
    mt65xx_reg_sync_writel(val_tmp, AP_Register);
}

uint32 AP_Get_Reg(uint32 offset)
{
    extern void *AFE_BASE_ADDRESS;
    volatile uint32 address = (uint32)(offset);

    volatile uint32 *value;
    value = (volatile uint32 *)(address);

    //printk("AP_Get_Reg offset=%08x val=%08x (AFE_BASE_ADDRESS=%08x)\n", offset, *value, AFE_BASE_ADDRESS);
    return *value;
}


// export symbols for other module using
EXPORT_SYMBOL(Afe_Set_Reg);
EXPORT_SYMBOL(Afe_Get_Reg);
EXPORT_SYMBOL(Afe_Log_Print);
EXPORT_SYMBOL(AP_Set_Reg);
EXPORT_SYMBOL(AP_Get_Reg);

