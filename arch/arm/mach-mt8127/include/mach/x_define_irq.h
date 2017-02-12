/*
 * This file is generated automatically according to the design of silicon.
 * Don't modify it directly.
 */

X_DEFINE_IRQ(MT6582_USB0_IRQ_ID            , 64, L,LEVEL)
X_DEFINE_IRQ(MT6582_USB1_IRQ_ID            , 65, L,LEVEL)
X_DEFINE_IRQ(TS_IRQ_ID                     , 66, L,EDGE)
X_DEFINE_IRQ(TS_BATCH_IRQ_ID               , 67, L,EDGE)
X_DEFINE_IRQ(LOWBATTERY_IRQ_ID             , 68, L,EDGE)
X_DEFINE_IRQ(PWM_IRQ_ID                    , 69, L,LEVEL)
X_DEFINE_IRQ(THERM_CTRL_IRQ_ID             , 70, L,LEVEL)
X_DEFINE_IRQ(MT_MSDC0_IRQ_ID               , 71, L,LEVEL)
X_DEFINE_IRQ(MT_MSDC1_IRQ_ID               , 72, L,LEVEL)
X_DEFINE_IRQ(MT_MSDC2_IRQ_ID               , 73, L,LEVEL)
X_DEFINE_IRQ(MT_MSDC3_IRQ_ID               , 74, L,LEVEL)
X_DEFINE_IRQ(MT_I2C0_IRQ_ID                , 76, L,LEVEL)
X_DEFINE_IRQ(MT_I2C1_IRQ_ID                , 77, L,LEVEL)
X_DEFINE_IRQ(MT_I2C2_IRQ_ID                , 78, L,LEVEL)
X_DEFINE_IRQ(BITF_IRQ_ID                   , 82, L,LEVEL)
X_DEFINE_IRQ(MT_UART1_IRQ_ID               , 83, L,LEVEL)
X_DEFINE_IRQ(MT_UART2_IRQ_ID               , 84, L,LEVEL)
X_DEFINE_IRQ(MT_UART3_IRQ_ID               , 85, L,LEVEL)
X_DEFINE_IRQ(MT_UART4_IRQ_ID               , 86, L,LEVEL)
X_DEFINE_IRQ(MT_NFIECC_IRQ_ID              , 87, L,LEVEL)
X_DEFINE_IRQ(MT_NFI_IRQ_ID                 , 88, L,LEVEL)
X_DEFINE_IRQ(MT_GDMA1_IRQ_ID               , 89, L,LEVEL)
X_DEFINE_IRQ(MT_GDMA2_IRQ_ID               , 90, L,LEVEL)
X_DEFINE_IRQ(MT6582_HIF_PDMA_IRQ_ID        , 91, L,LEVEL)
X_DEFINE_IRQ(AP_DMA_I2C0_IRQ_ID            , 92, L,LEVEL)
X_DEFINE_IRQ(AP_DMA_I2C1_IRQ_ID            , 93, L,LEVEL)
X_DEFINE_IRQ(AP_DMA_I2C2_IRQ_ID            , 94, L,LEVEL)
X_DEFINE_IRQ(MT_DMA_UART0_TX_IRQ_ID        , 95, L,LEVEL)
X_DEFINE_IRQ(MT_DMA_UART0_RX_IRQ_ID        , 96, L,LEVEL)
X_DEFINE_IRQ(MT_DMA_UART1_TX_IRQ_ID        , 97, L,LEVEL)
X_DEFINE_IRQ(MT_DMA_UART1_RX_IRQ_ID        , 98, L,LEVEL)
X_DEFINE_IRQ(MT_DMA_UART2_TX_IRQ_ID        , 99, L,LEVEL)
X_DEFINE_IRQ(MT_DMA_UART2_RX_IRQ_ID        , 100, L,LEVEL)
X_DEFINE_IRQ(MT_DMA_UART3_TX_IRQ_ID        , 101, L,LEVEL)
X_DEFINE_IRQ(MT_DMA_UART3_RX_IRQ_ID        , 102, L,LEVEL)
X_DEFINE_IRQ(AP_DMA_BTIF_TX_IRQ_ID         , 103, L,LEVEL)
X_DEFINE_IRQ(AP_DMA_BTIF_RX_IRQ_ID         , 104, L,LEVEL)
X_DEFINE_IRQ(MT_GCPU_IRQ_ID                , 105, L,LEVEL) 
X_DEFINE_IRQ(MT_GCPU_DMX_IRQ_ID            , 106, L,LEVEL)
X_DEFINE_IRQ(MT_GCPU_MMU_IRQ_ID            , 107, L,LEVEL)
X_DEFINE_IRQ(MT_GCPU_MMU_SEC_IRQ_ID        , 108, L,LEVEL)
X_DEFINE_IRQ(MT_ETHER_NIC_WRAP_IRQ_ID      , 109, L,LEVEL)
X_DEFINE_IRQ(MT6582_SPI1_IRQ_ID            , 110, L,LEVEL)
X_DEFINE_IRQ(MSDC0_WAKEUP_PS_IRQ_ID        , 111, H,EDGE)
X_DEFINE_IRQ(MSDC1_WAKEUP_PS_IRQ_ID        , 112, H,EDGE)
X_DEFINE_IRQ(MSDC2_WAKEUP_PS_IRQ_ID        , 113, H,EDGE)
X_DEFINE_IRQ(MT_PTP_FSM_IRQ_ID             , 117, L,LEVEL)
X_DEFINE_IRQ(BTIF_WAKEUP_IRQ_ID            , 118, L,LEVEL)
X_DEFINE_IRQ(MT_IRRX_IRQ_ID                , 119, L,LEVEL) 
X_DEFINE_IRQ(MT_WDT_IRQ_ID                 , 120, L,EDGE)
X_DEFINE_IRQ(DCC_APARM_IRQ_ID              , 124, L,LEVEL)
X_DEFINE_IRQ(APARM_CTI_IRQ_ID              , 125, L,LEVEL)
X_DEFINE_IRQ(MT_APARM_DOMAIN_IRQ_ID        , 126, L,LEVEL)
X_DEFINE_IRQ(MT_APARM_DECERR_IRQ_ID        , 127, L,LEVEL)
X_DEFINE_IRQ(DOMAIN_ABORT_IRQ_ID0          , 128, L,LEVEL)
X_DEFINE_IRQ(CCIF0_AP_IRQ_ID               , 132, L,LEVEL)
X_DEFINE_IRQ(AFE_MCU_IRQ_ID                , 136, L,LEVEL)
X_DEFINE_IRQ(M4U1_IRQ_ID                   , 138, L,LEVEL)
X_DEFINE_IRQ(M4UL2_IRQ_ID                  , 139, L,LEVEL)
X_DEFINE_IRQ(M4UL2_SEC_IRQ_ID              , 140, L,LEVEL)
X_DEFINE_IRQ(REFRESH_RATE_IRQ_ID           , 141, L,EDGE)
X_DEFINE_IRQ(MT6582_APARM_GPTTIMER_IRQ_LINE, 144, L,LEVEL)
X_DEFINE_IRQ(MT_EINT_IRQ_ID                , 145, H,LEVEL)
X_DEFINE_IRQ(EINT_EVENT_IRQ_ID             , 146, L,LEVEL)
X_DEFINE_IRQ(MT6582_PMIC_WRAP_IRQ_ID       , 147, H,LEVEL)
X_DEFINE_IRQ(MT_KP_IRQ_ID              , 148, L,EDGE)
X_DEFINE_IRQ(MT_SPM_IRQ_ID                 , 149, L,LEVEL)
X_DEFINE_IRQ(MT_SPM1_IRQ_ID                , 150, L,LEVEL)
X_DEFINE_IRQ(MT_SPM2_IRQ_ID                , 151, L,LEVEL)
X_DEFINE_IRQ(MT_SPM3_IRQ_ID                , 152, L,LEVEL)
X_DEFINE_IRQ(MT_EINT_DIRECT0_IRQ_ID        , 153, H,LEVEL)
X_DEFINE_IRQ(MT_EINT_DIRECT1_IRQ_ID        , 154, H,LEVEL)
X_DEFINE_IRQ(MT_EINT_DIRECT2_IRQ_ID        , 155, H,LEVEL)
X_DEFINE_IRQ(MT_EINT_DIRECT3_IRQ_ID        , 156, H,LEVEL)
X_DEFINE_IRQ(MT_EINT_DIRECT4_IRQ_ID        , 157, H,LEVEL)
X_DEFINE_IRQ(MT_EINT_DIRECT5_IRQ_ID        , 158, H,LEVEL)
X_DEFINE_IRQ(MT_EINT_DIRECT6_IRQ_ID        , 159, H,LEVEL)
X_DEFINE_IRQ(MT_EINT_DIRECT7_IRQ_ID        , 160, H,LEVEL)
X_DEFINE_IRQ(MT_EINT_DIRECT8_IRQ_ID        , 161, H,LEVEL)
X_DEFINE_IRQ(MT_EINT_DIRECT9_IRQ_ID        , 162, H,LEVEL)
X_DEFINE_IRQ(MT_EINT_DIRECT10_IRQ_ID       , 163, H,LEVEL)
X_DEFINE_IRQ(MT_EINT_DIRECT11_IRQ_ID       , 164, H,LEVEL)
X_DEFINE_IRQ(MT_EINT_DIRECT12_IRQ_ID       , 165, H,LEVEL)
X_DEFINE_IRQ(MT_EINT_DIRECT13_IRQ_ID       , 166, H,LEVEL)
X_DEFINE_IRQ(MT_EINT_DIRECT14_IRQ_ID       , 167, H,LEVEL)
X_DEFINE_IRQ(SMI_LARB0_IRQ_ID              , 168, L,LEVEL)
X_DEFINE_IRQ(SMI_LARB1_IRQ_ID              , 169, L,LEVEL)
X_DEFINE_IRQ(SMI_LARB2_IRQ_ID              , 170, L,LEVEL)
X_DEFINE_IRQ(MT_VDEC_IRQ_ID                , 171, L,LEVEL)
X_DEFINE_IRQ(MT_VENC_IRQ_ID                , 172, L,LEVEL)
X_DEFINE_IRQ(MT6582_JPEG_ENC_IRQ_ID        , 173, L,LEVEL)
X_DEFINE_IRQ(SENINF_IRQ_ID                 , 174, L,LEVEL)
X_DEFINE_IRQ(CAMERA_ISP_IRQ0_ID            , 175, L,LEVEL)
X_DEFINE_IRQ(CAMERA_ISP_IRQ1_ID            , 176, L,LEVEL)
X_DEFINE_IRQ(CAMERA_ISP_IRQ2_ID            , 177, L,LEVEL)
X_DEFINE_IRQ(MT6582_DISP_MDP_RDMA_IRQ_ID   , 178, L,LEVEL)
X_DEFINE_IRQ(MT6582_DISP_MDP_RSZ0_IRQ_ID   , 179, L,LEVEL)
X_DEFINE_IRQ(MT6582_DISP_MDP_RSZ1_IRQ_ID   , 180, L,LEVEL)
X_DEFINE_IRQ(MT6582_DISP_MDP_TDSHP_IRQ_ID  , 181, L,LEVEL)
X_DEFINE_IRQ(MT6582_DISP_MDP_WDMA_IRQ_ID   , 182, L,LEVEL)
X_DEFINE_IRQ(MT6582_DISP_MDP_WROT_IRQ_ID   , 183, L,LEVEL)
X_DEFINE_IRQ(MT6582_DISP_RDMA_IRQ_ID       , 184, L,LEVEL)
X_DEFINE_IRQ(MT6582_DISP_OVL_IRQ_ID        , 185, L,LEVEL)
X_DEFINE_IRQ(MT6582_DISP_WDMA_IRQ_ID       , 186, L,LEVEL)
X_DEFINE_IRQ(MT6582_DISP_BLS_IRQ_ID        , 187, L,LEVEL)
X_DEFINE_IRQ(MT6582_DISP_COLOR_IRQ_ID      , 188, L,LEVEL)
X_DEFINE_IRQ(MT6582_DISP_DSI_IRQ_ID        , 189, L,LEVEL)
X_DEFINE_IRQ(MT6582_DISP_DPI0_IRQ_ID       , 190, L,LEVEL)
X_DEFINE_IRQ(MT6582_DISP_CMDQ_IRQ_ID       , 191, L,LEVEL)
X_DEFINE_IRQ(MT6582_DISP_CMDQ_SECURE_IRQ_ID, 192, L,LEVEL)
X_DEFINE_IRQ(MT6582_DISP_MUTEX_IRQ_ID      , 193, L,LEVEL)
X_DEFINE_IRQ(MM_DUMMY0_IRQ_ID              , 194, L,LEVEL)
X_DEFINE_IRQ(MM_DUMMY1_IRQ_ID              , 195, L,LEVEL)
X_DEFINE_IRQ(MT6582_DISP_RDMA1_IRQ_ID      , 196, L,LEVEL)
X_DEFINE_IRQ(MM_DUMMY3_IRQ_ID              , 197, L,LEVEL)
X_DEFINE_IRQ(MM_DUMMY4_IRQ_ID              , 198, L,LEVEL)
X_DEFINE_IRQ(MM_DUMMY5_IRQ_ID              , 199, L,LEVEL)
X_DEFINE_IRQ(MM_DUMMY6_IRQ_ID              , 200, L,LEVEL)
X_DEFINE_IRQ(MM_DUMMY7_IRQ_ID              , 201, L,LEVEL)
X_DEFINE_IRQ(MT_MFG_IRQ0_ID                , 202, L,LEVEL)
X_DEFINE_IRQ(MT_MFG_IRQ1_ID                , 203, L,LEVEL)
X_DEFINE_IRQ(MT_MFG_IRQ2_ID                , 204, L,LEVEL)
X_DEFINE_IRQ(MT_MFG_IRQ3_ID                , 205, L,LEVEL)
X_DEFINE_IRQ(MT_MFG_IRQ4_ID                , 206, L,LEVEL)
X_DEFINE_IRQ(MT_MFG_IRQ5_ID                , 207, L,LEVEL)
X_DEFINE_IRQ(MT_MFG_IRQ6_ID                , 208, L,LEVEL)
X_DEFINE_IRQ(MT_MFG_IRQ7_ID                , 209, L,LEVEL)
X_DEFINE_IRQ(MT_MFG_IRQ8_ID                , 210, L,LEVEL)
X_DEFINE_IRQ(MT_MFG_IRQ9_ID                , 211, L,LEVEL)
X_DEFINE_IRQ(MT_MFG_IRQ10_ID               , 212, L,LEVEL)
X_DEFINE_IRQ(MT_APXGPT_SECURE_IRQ_ID   , 213, L,LEVEL)
X_DEFINE_IRQ(MT_CEC_IRQ_ID                 , 214, L,LEVEL)
X_DEFINE_IRQ(CONN_WDT_IRQ_ID               , 215, L,EDGE)
X_DEFINE_IRQ(WF_HIF_IRQ_ID                 , 216, L,LEVEL)
X_DEFINE_IRQ(MT_CONN2AP_BTIF_WAKEUP_IRQ_ID , 217, L,LEVEL)
X_DEFINE_IRQ(BT_CVSD_IRQ_ID                , 218, L,LEVEL)
X_DEFINE_IRQ(MT_CIRQ_IRQ_ID                , 219, L,LEVEL)
