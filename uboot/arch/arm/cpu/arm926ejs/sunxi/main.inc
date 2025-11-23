  
  .equiv V1SPI0_BASE,                        (4 * 1024 * 1024)
  .equiv V1SPI0_SIZE,                        (8 * 1024 * 1024)

  .equiv V2SPI0_BASE,                        (12 * 1024 * 1024)
  .equiv V2SPI0_SIZE,                        (8 * 1024 * 1024)

  .equiv BOOT_SIG,                           0xaa55aa55
  .equiv PARAM_BASE,                         ((3 * 1024 * 1024) + (  0 * 1024))
  .equiv BOOTMENU0_BASE,                     ((3 * 1024 * 1024) + (100 * 1024))
  .equiv BOOTMENU1_BASE,                     ((3 * 1024 * 1024) + (250 * 1024))
  .equiv BOOTMENU2_BASE,                     ((3 * 1024 * 1024) + (400 * 1024))
  .equiv BOOTMENU3_BASE,                     ((3 * 1024 * 1024) + (550 * 1024))

  .equiv SDC0_BASE,                          0x01c0f000
  .equiv SPI0_BASE,                          0x01c05000
  .equiv SPI1_BASE,                          0x01c06000
  .equiv CCU_BASE,                           0x01c20000
  .equiv PIO_BASE,                           0x01c20800
  .equiv UART0_BASE,                         0x01c25000
  .equiv DRAM_BASE,                          0x01c01000
  
  .equiv PLL_CPU_CTRL_REG,                   0x0000
  .equiv PLL_DDR_CTRL_REG,                   0x0020
  .equiv CPU_CLK_SRC_REG,                    0x0050
  .equiv PLL_PERIPH_CTRL_REG,                0x0028
  .equiv AHB_APB_HCLKC_CFG_REG,              0x0054
  .equiv SDMMC0_CLK_REG,                     0x0088
  .equiv DRAM_GATING_REG,                    0x0100
  .equiv BUS_CLK_GATING_REG0,                0x0060
  .equiv BUS_CLK_GATING_REG2,                0x0068
  .equiv BUS_SOFT_RST_REG0,                  0x02c0
  .equiv BUS_SOFT_RST_REG2,                  0x02d0
  
  .equiv DRAM_SCONR,                         0x00
  .equiv DRAM_STMG0R,                        0x04
  .equiv DRAM_STMG1R,                        0x08
  .equiv DRAM_SCTLR,                         0x0c
  .equiv DRAM_SREFR,                         0x10
  .equiv DRAM_DDLYR,                         0x24
  .equiv DRAM_DRPTR0,                        0x30
 
  .equiv LCD_CS,                             (1 << 21)
  .equiv LCD_RD,                             (1 << 20)
  .equiv LCD_RS,                             (1 << 19)
  .equiv LCD_WR,                             (1 << 18)
  .equiv LCD_RST,                            (1 << 11)
  .equiv LCD_BL,                             (1 << 6)

  .equiv PA,                                 (0 * 0x24)
  .equiv PB,                                 (1 * 0x24)
  .equiv PC,                                 (2 * 0x24)
  .equiv PD,                                 (3 * 0x24)
  .equiv PE,                                 (4 * 0x24)
  .equiv PF,                                 (5 * 0x24)

  .equiv PIO_CFG0,                           0x0000
  .equiv PIO_CFG1,                           0x0004
  .equiv PIO_CFG2,                           0x0008
  .equiv PIO_DATA,                           0x0010
  .equiv SDR_PAD_DRV,                        0x02c0
  .equiv SDR_PAD_PUL,                        0x02c4

  .equiv UART_RBR,                           0x0000
  .equiv UART_DLL,                           0x0000
  .equiv UART_DLH,                           0x0004
  .equiv UART_IER,                           0x0004
  .equiv UART_IIR,                           0x0008
  .equiv UART_LCR,                           0x000c
  .equiv UART_MCR,                           0x0010
  .equiv UART_USR,                           0x007c
  
  .equiv SPI_GCR,                            0x0004
  .equiv SPI_TCR,                            0x0008
  .equiv SPI_IER,                            0x0010
  .equiv SPI_ISR,                            0x0014
  .equiv SPI_FCR,                            0x0018
  .equiv SPI_FSR,                            0x001c
  .equiv SPI_WCR,                            0x0020
  .equiv SPI_CCR,                            0x0024
  .equiv SPI_MBC,                            0x0030
  .equiv SPI_MTC,                            0x0034
  .equiv SPI_BCC,                            0x0038
  .equiv SPI_TXD,                            0x0200
  .equiv SPI_RXD,                            0x0300

  .equiv NOR_CMD_PAGE_PROGRAM,               0x02
  .equiv NOR_CMD_WRIRE_ENABLE,               0x06
  .equiv NOR_CMD_WRITE_DISABLE,              0x04
  .equiv NOR_CMD_READ_STATUS_R1,             0x05
  .equiv NOR_CMD_READ_STATUS_R2,             0x35
  .equiv NOR_CMD_READ_DATA,                  0x03
  .equiv NOR_CMD_FAST_READ,                  0x0b
  .equiv NOR_CMD_SECTOR_ERASE,               0x20
  .equiv NOR_CMD_CHIP_ERASE,                 0xc7
  .equiv NOR_CMD_READ_UNIQUE_ID,             0x4b
  .equiv NOR_CMD_JEDEC_ID,                   0x9f
 
  .equiv SD_GCTL_REG,                        0x0000
  .equiv SD_CKCR_REG,                        0x0004
  .equiv SD_TMOR_REG,                        0x0008
  .equiv SD_BWDR_REG,                        0x000c
  .equiv SD_BKSR_REG,                        0x0010
  .equiv SD_BYCR_REG,                        0x0014
  .equiv SD_CMDR_REG,                        0x0018
  .equiv SD_CAGR_REG,                        0x001c
  .equiv SD_RESP0_REG,                       0x0020
  .equiv SD_RESP1_REG,                       0x0024
  .equiv SD_RESP2_REG,                       0x0028
  .equiv SD_RESP3_REG,                       0x002c
  .equiv SD_IMKR_REG,                        0x0030
  .equiv SD_MISR_REG,                        0x0034
  .equiv SD_RISR_REG,                        0x0038
  .equiv SD_STAR_REG,                        0x003c
  .equiv SD_FWLR_REG,                        0x0040
  .equiv SD_FUNS_REG,                        0x0044
  .equiv SD_CBCR_REG,                        0x0048
  .equiv SD_BBCR_REG,                        0x004c
  .equiv SD_DBGC_REG,                        0x0050
  .equiv SD_A12A_REG,                        0x0058
  .equiv SD_HWRST_REG,                       0x0078
  .equiv SD_DMAC_REG,                        0x0080
  .equiv SD_DLBA_REG,                        0x0084
  .equiv SD_IDST_REG,                        0x0088
  .equiv SD_IDIE_REG,                        0x008c
  .equiv SD_CHDA_REG,                        0x0090
  .equiv SD_CBDA_REG,                        0x0094
  .equiv CARD_THLDC_REG,                     0x0100
  .equiv EMMC_DSBD_REG,                      0x010c
  .equiv SD_FIFO_REG,                        0x0200

  .equiv MMC_RSP_NONE,                       0
  .equiv MMC_RSP_R1,                         (MMC_RSP_PRESENT | MMC_RSP_CRC | MMC_RSP_OPCODE)
  .equiv MMC_RSP_R1b,                        (MMC_RSP_PRESENT | MMC_RSP_CRC | MMC_RSP_OPCODE | MMC_RSP_BUSY)
  .equiv MMC_RSP_R2,                         (MMC_RSP_PRESENT | MMC_RSP_136 | MMC_RSP_CRC)
  .equiv MMC_RSP_R3,                         MMC_RSP_PRESENT
  .equiv MMC_RSP_R4,                         MMC_RSP_PRESENT
  .equiv MMC_RSP_R5,                         (MMC_RSP_PRESENT | MMC_RSP_CRC | MMC_RSP_OPCODE)
  .equiv MMC_RSP_R6,                         (MMC_RSP_PRESENT | MMC_RSP_CRC | MMC_RSP_OPCODE)
  .equiv MMC_RSP_R7,                         (MMC_RSP_PRESENT | MMC_RSP_CRC | MMC_RSP_OPCODE)

  .equiv MMC_RSP_PRESENT,                    (1 << 0)
  .equiv MMC_RSP_136,                        (1 << 1)
  .equiv MMC_RSP_CRC,                        (1 << 2)
  .equiv MMC_RSP_BUSY,                       (1 << 3)
  .equiv MMC_RSP_OPCODE,                     (1 << 4)

  .equiv MMC_CMD_GO_IDLE_STATE,              0
  .equiv MMC_CMD_SEND_OP_COND,               1
  .equiv MMC_CMD_ALL_SEND_CID,               2
  .equiv MMC_CMD_SET_RELATIVE_ADDR,          3
  .equiv MMC_CMD_SET_DSR,                    4
  .equiv MMC_CMD_SWITCH,                     6
  .equiv MMC_CMD_SELECT_CARD,                7
  .equiv MMC_CMD_SEND_EXT_CSD,               8
  .equiv MMC_CMD_SEND_CSD,                   9
  .equiv MMC_CMD_SEND_CID,                   10
  .equiv MMC_CMD_STOP_TRANSMISSION,          12
  .equiv MMC_CMD_SEND_STATUS,                13
  .equiv MMC_CMD_SET_BLOCKLEN,               16
  .equiv MMC_CMD_READ_SINGLE_BLOCK,          17
  .equiv MMC_CMD_READ_MULTIPLE_BLOCK,        18
  .equiv MMC_CMD_SET_BLOCK_COUNT,            23
  .equiv MMC_CMD_WRITE_SINGLE_BLOCK,         24
  .equiv MMC_CMD_WRITE_MULTIPLE_BLOCK,       25
  .equiv MMC_CMD_ERASE_GROUP_START,          35
  .equiv MMC_CMD_ERASE_GROUP_END,            36
  .equiv MMC_CMD_ERASE,                      38
  .equiv MMC_CMD_APP_CMD,                    55
  .equiv MMC_CMD_SPI_READ_OCR,               58
  .equiv MMC_CMD_SPI_CRC_ON_OFF,             59
  .equiv MMC_CMD_RES_MAN,                    62
  .equiv MMC_VDD_32_33,                      0x00100000
  .equiv MMC_VDD_33_34,                      0x00200000

  .equiv SD_CMD_SEND_RELATIVE_ADDR,          3
  .equiv SD_CMD_SWITCH_FUNC,                 6
  .equiv SD_CMD_SEND_IF_COND,                8
  .equiv SD_CMD_SWITCH_UHS18V,               11
  .equiv SD_CMD_APP_SET_BUS_WIDTH,           6
  .equiv SD_CMD_APP_SD_STATUS,               13
  .equiv SD_CMD_ERASE_WR_BLK_START,          32
  .equiv SD_CMD_ERASE_WR_BLK_END,            33
  .equiv SD_CMD_APP_SEND_OP_COND,            41
  .equiv SD_CMD_APP_SEND_SCR,                51

  .equiv OCR_BUSY,                           0x80000000
  .equiv OCR_HCS,                            0x40000000
  .equiv OCR_VOLTAGE_MASK,                   0x007fff80
  .equiv OCR_ACCESS_MODE,                    0x60000000

  .equiv MMC_STATUS_SWITCH_ERROR,            (0x01 << 7)
  .equiv MMC_STATUS_RDY_FOR_DATA,            (0x01 << 8)
  .equiv MMC_STATUS_CURR_STATE,              (0x0f << 9)
  .equiv MMC_STATUS_ERROR,                   (0x01 << 19)
  .equiv MMC_STATE_PRG,                      (0x07 << 9)

  .equiv SUNXI_MMC_CMD_RESP_EXPIRE,          (1 << 6)
  .equiv SUNXI_MMC_CMD_LONG_RESPONSE,        (1 << 7)
  .equiv SUNXI_MMC_CMD_CHK_RESPONSE_CRC,     (1 << 8)
  .equiv SUNXI_MMC_CMD_DATA_EXPIRE,          (1 << 9)
  .equiv SUNXI_MMC_CMD_WRITE,                (1 << 10)
  .equiv SUNXI_MMC_CMD_AUTO_STOP,            (1 << 12)
  .equiv SUNXI_MMC_CMD_WAIT_PRE_OVER,        (1 << 13)
  .equiv SUNXI_MMC_CMD_SEND_INIT_SEQ,        (1 << 15)
  .equiv SUNXI_MMC_CMD_UPCLK_ONLY,           (1 << 21)
  .equiv SUNXI_MMC_CMD_START,                (1 << 31)
  .equiv SUNXI_MMC_RINT_RESP_ERROR,          (1 << 1)
  .equiv SUNXI_MMC_RINT_COMMAND_DONE,        (1 << 2)
  .equiv SUNXI_MMC_RINT_DATA_OVER,           (1 << 3)
  .equiv SUNXI_MMC_RINT_TX_DATA_REQUEST,     (1 << 4)
  .equiv SUNXI_MMC_RINT_RX_DATA_REQUEST,     (1 << 5)
  .equiv SUNXI_MMC_RINT_RESP_CRC_ERROR,      (1 << 6)
  .equiv SUNXI_MMC_RINT_DATA_CRC_ERROR,      (1 << 7)
  .equiv SUNXI_MMC_RINT_RESP_TIMEOUT,        (1 << 8)
  .equiv SUNXI_MMC_RINT_DATA_TIMEOUT,        (1 << 9)
  .equiv SUNXI_MMC_RINT_VOLTAGE_CHANGE_DONE, (1 << 10)
  .equiv SUNXI_MMC_RINT_FIFO_RUN_ERROR,      (1 << 11)
  .equiv SUNXI_MMC_RINT_HARD_WARE_LOCKED,    (1 << 12)
  .equiv SUNXI_MMC_RINT_START_BIT_ERROR,     (1 << 13)
  .equiv SUNXI_MMC_RINT_AUTO_COMMAND_DONE,   (1 << 14)
  .equiv SUNXI_MMC_RINT_END_BIT_ERROR,       (1 << 15)
  .equiv SUNXI_MMC_RINT_SDIO_INTERRUPT,      (1 << 16)
  .equiv SUNXI_MMC_RINT_CARD_INSERT,         (1 << 30)
  .equiv SUNXI_MMC_RINT_CARD_REMOVE,         (1 << 31)
  .equiv SUNXI_MMC_GCTRL_SOFT_RESET,         (1 << 0)
  .equiv SUNXI_MMC_GCTRL_FIFO_RESET,         (1 << 1)
  .equiv SUNXI_MMC_GCTRL_DMA_RESET,          (1 << 2)
  .equiv SUNXI_MMC_GCTRL_RESET,              (SUNXI_MMC_GCTRL_SOFT_RESET | SUNXI_MMC_GCTRL_FIFO_RESET | SUNXI_MMC_GCTRL_DMA_RESET)
  .equiv SUNXI_MMC_GCTRL_DMA_ENABLE,         (1 << 5)
  .equiv SUNXI_MMC_GCTRL_ACCESS_BY_AHB,      (1 << 31)
  .equiv SUNXI_MMC_CLK_ENABLE,               (1 << 16)

  .equiv SUNXI_MMC_STATUS_RXWL_FLAG,         (1 << 0)
  .equiv SUNXI_MMC_STATUS_TXWL_FLAG,         (1 << 1)
  .equiv SUNXI_MMC_STATUS_FIFO_EMPTY,        (1 << 2)
  .equiv SUNXI_MMC_STATUS_FIFO_FULL,         (1 << 3)
  .equiv SUNXI_MMC_STATUS_CARD_PRESENT,      (1 << 8)
  .equiv SUNXI_MMC_STATUS_CARD_DATA_BUSY,    (1 << 9)
  .equiv SUNXI_MMC_STATUS_DATA_FSM_BUSY,     (1 << 10)

