#ifndef __GPIO_JUPITER_H_
#define __GPIO_JUPIER_H_

//#include <mach/gpio.h>

#define GPIO_LEVEL_LOW      	0
#define GPIO_LEVEL_HIGH     	1
#define GPIO_LEVEL_NONE     	2
#define GPIO_INPUT				0
#define GPIO_OUTPUT				1

#define GPIO_BT_UART_RXD		S5PC11X_GPA0(0)
#define GPIO_BT_UART_RXD_AF		2

#define GPIO_BT_UART_TXD		S5PC11X_GPA0(1)
#define GPIO_BT_UART_TXD_AF		2

#define GPIO_BT_UART_CTS		S5PC11X_GPA0(2)
#define GPIO_BT_UART_CTS_AF		2

#define GPIO_BT_UART_RTS		S5PC11X_GPA0(3)
#define GPIO_BT_UART_RTS_AF		2

#define GPIO_GPS_UART_RXD		S5PC11X_GPA0(4)
#define GPIO_GPS_UART_RXD_AF	2

#define GPIO_GPS_UART_TXD		S5PC11X_GPA0(5)
#define GPIO_GPS_UART_TXD_AF	2

#define GPIO_GPS_UART_CTS		S5PC11X_GPA0(6)
#define GPIO_GPS_UART_CTS_AF	2

#define GPIO_GPS_UART_RTS		S5PC11X_GPA0(7)
#define GPIO_GPS_UART_RTS_AF	2

#define GPIO_AP_RXD				S5PC11X_GPA1(0)
#define GPIO_AP_RXD_AF			2

#define GPIO_AP_TXD				S5PC11X_GPA1(1)
#define GPIO_AP_TXD_AF			2

#define GPIO_AP_FLM_RXD			S5PC11X_GPA1(2)
#define GPIO_AP_FLM_RXD_AF		2

#define GPIO_AP_FLM_TXD			S5PC11X_GPA1(3)
#define GPIO_AP_FLM_TXD_AF		2

#define GPIO_CAM_VGA_nSTBY		S5PC11X_GPB(0)

#define GPIO_MSENSE_nRST		S5PC11X_GPB(1)

#define GPIO_CAM_VGA_nRST		S5PC11X_GPB(2)

#define GPIO_BT_nRST			S5PC11X_GPB(3)

#define GPIO_BOOT_MODE			S5PC11X_GPB(4)

#define GPIO_WLAN_BT_EN			S5PC11X_GPB(5)

#define GPIO_GPB6				S5PC11X_GPB(6)

#define GPIO_GPB7				S5PC11X_GPB(7)

#define GPIO_REC_PCM_CLK		S5PC11X_GPC0(0)
#define GPIO_REC_PCM_CLK_AF		3

#define GPIO_GPC01				S5PC11X_GPC0(1)

#define GPIO_REC_PCM_SYNC		S5PC11X_GPC0(2)
#define GPIO_REC_PCM_SYNC_AF	3

#define GPIO_REC_PCM_IN			S5PC11X_GPC0(3)
#define GPIO_REC_PCM_IN_AF		3

#define GPIO_REC_PCM_OUT		S5PC11X_GPC0(4)
#define GPIO_REC_PCM_OUT_AF		3

#if !(defined CONFIG_JUPITER_VER_B4)
#define BLOW_PCM_CLK			S5PC11X_GPC1(0)
#else
#define GPIO_GPC10				S5PC11X_GPC1(0)
#endif

#define GPIO_GPC11				S5PC11X_GPC1(1)

#ifdef CONFIG_JUPITER_VER_B5
#define GPIO_BLOW_PCM_SYNC		S5PC11X_GPC1(2)

#define GPIO_BLOW_PCM_IN		S5PC11X_GPC1(3)

#define GPIO_BLOW_PCM_OUT		S5PC11X_GPC1(4)
#else
#define GPIO_GPC12				S5PC11X_GPC1(2)

#define GPIO_GPC13				S5PC11X_GPC1(3)

#define GPIO_GPC14				S5PC11X_GPC1(4)
#endif

#define GPIO_GPD00				S5PC11X_GPD0(0)

#if (defined CONFIG_ARIES_VER_B0) || (defined CONFIG_ARIES_VER_B1) || (defined CONFIG_ARIES_VER_B2) || (defined CONFIG_ARIES_VER_B3)
#define GPIO_VIBTONE_PWM		S5PC11X_GPD0(1)
#else
#ifdef CONFIG_JUPITER_VER_B5
#define GPIO_VIBTONE_PWM2		S5PC11X_GPD0(1)
#else
#define GPIO_GPD01				S5PC11X_GPD0(1)
#endif
#endif

#define GPIO_VIBTONE_PWM1		S5PC11X_GPD0(2)

#define GPIO_GPD03				S5PC11X_GPD0(3)

#define GPIO_CAM_SDA_29V		S5PC11X_GPD1(0)
#define GPIO_CAM_SDA_29V_AF		2

#define GPIO_CAM_SCL_29V		S5PC11X_GPD1(1)
#define GPIO_CAM_SCL_29V_AF		2

#if !(defined CONFIG_JUPITER_VER_B4)
#define GPIO_FM_SDA_28V			S5PC11X_GPD1(2)
#define GPIO_FM_SDA_28V_AF		2

#define GPIO_FM_SCL_28V			S5PC11X_GPD1(3)
#define GPIO_FM_SCL_28V_AF		2

#define GPIO_TSP_SDA_28V		S5PC11X_GPD1(4)
#define GPIO_TSP_SDA_28V_AF		2	

#define GPIO_TSP_SCL_28V		S5PC11X_GPD1(5)
#define GPIO_TSP_SCL_28V_AF		2
#else
#define GPIO_AP_HDMI_SDA		S5PC11X_GPD1(2)
#define GPIO_AP_HDMI_SDA_AF		2

#define GPIO_AP_HDMI_SCL		S5PC11X_GPD1(3)
#define GPIO_AP_HDMI_SCL_AF		2

#define GPIO_AP_SDA_29V			S5PC11X_GPD1(4)
#define GPIO_AP_SDA_29V_AF		2	

#define GPIO_AP_SCL_29V			S5PC11X_GPD1(5)
#define GPIO_AP_SCL_29V_AF		2
#endif

//[ hdlnc_bp_ytkwon : 20100301
#define GPIO_A1026_SDA			S5PC11X_MP04(5)
#define GPIO_A1026_SDA_AF		2

#define GPIO_A1026_SCL			S5PC11X_MP04(4)
#define GPIO_A1026_SCL_AF		2
//] hdlnc_bp_ytkwon : 20100301

#define GPIO_CAM_PCLK			S5PC11X_GPE0(0)
#define GPIO_CAM_PCLK_AF		2

#define GPIO_CAM_VSYNC			S5PC11X_GPE0(1)
#define GPIO_CAM_VSYNC_AF		2

#define GPIO_CAM_HSYNC			S5PC11X_GPE0(2)
#define GPIO_CAM_HSYNC_AF		2

#define GPIO_CAM_D0				S5PC11X_GPE0(3)
#define GPIO_CAM_D0_AF			2

#define GPIO_CAM_D1				S5PC11X_GPE0(4)
#define GPIO_CAM_D1_AF			2

#define GPIO_CAM_D2				S5PC11X_GPE0(5)
#define GPIO_CAM_D2_AF			2

#define GPIO_CAM_D3				S5PC11X_GPE0(6)
#define GPIO_CAM_D3_AF			2

#define GPIO_CAM_D4				S5PC11X_GPE0(7)
#define GPIO_CAM_D4_AF			2

#define GPIO_CAM_D5				S5PC11X_GPE1(0)
#define GPIO_CAM_D5_AF			2

#define GPIO_CAM_D6				S5PC11X_GPE1(1)
#define GPIO_CAM_D6_AF			2

#define GPIO_CAM_D7				S5PC11X_GPE1(2)
#define GPIO_CAM_D7_AF			2

#define GPIO_CAM_MCLK			S5PC11X_GPE1(3)
#define GPIO_CAM_MCLK_AF		2

#if !(defined CONFIG_JUPITER_VER_B4)
#define GPIO_GPE14				S5PC11X_GPE1(4)
#else
#define GPIO_GYRO_HP			S5PC11X_GPE1(4)
#endif

#define GPIO_DISPLAY_HSYNC		S5PC11X_GPF0(0)
#define GPIO_DISPLAY_HSYNC_AF	2

#define GPIO_DISPLAY_VSYNC		S5PC11X_GPF0(1)
#define GPIO_DISPLAY_VSYNC_AF	2

#define GPIO_DISPLAY_DE			S5PC11X_GPF0(2)
#define GPIO_DISPLAY_DE_AF		2

#define GPIO_DISPLAY_PCLK		S5PC11X_GPF0(3)
#define GPIO_DISPLAY_PCLK_AF	2

#define GPIO_LCD_D0				S5PC11X_GPF0(4)
#define GPIO_LCD_D0_AF			2

#define GPIO_LCD_D1				S5PC11X_GPF0(5)
#define GPIO_LCD_D1_AF			2

#define GPIO_LCD_D2				S5PC11X_GPF0(6)
#define GPIO_LCD_D2_AF			2

#define GPIO_LCD_D3				S5PC11X_GPF0(7)
#define GPIO_LCD_D3_AF			2

#define GPIO_LCD_D4				S5PC11X_GPF1(0)
#define GPIO_LCD_D4_AF			2

#define GPIO_LCD_D5				S5PC11X_GPF1(1)
#define GPIO_LCD_D5_AF			2

#define GPIO_LCD_D6				S5PC11X_GPF1(2)
#define GPIO_LCD_D6_AF			2

#define GPIO_LCD_D7				S5PC11X_GPF1(3)
#define GPIO_LCD_D7_AF			2

#define GPIO_LCD_D8				S5PC11X_GPF1(4)
#define GPIO_LCD_D8_AF			2

#define GPIO_LCD_D9				S5PC11X_GPF1(5)
#define GPIO_LCD_D9_AF			2

#define GPIO_LCD_D10			S5PC11X_GPF1(6)
#define GPIO_LCD_D10_AF			2

#define GPIO_LCD_D11			S5PC11X_GPF1(7)
#define GPIO_LCD_D11_AF			2

#define GPIO_LCD_D12			S5PC11X_GPF2(0)
#define GPIO_LCD_D12_AF			2

#define GPIO_LCD_D13			S5PC11X_GPF2(1)
#define GPIO_LCD_D13_AF			2

#define GPIO_LCD_D14			S5PC11X_GPF2(2)
#define GPIO_LCD_D14_AF			2

#define GPIO_LCD_D15			S5PC11X_GPF2(3)
#define GPIO_LCD_D15_AF			2

#define GPIO_LCD_D16			S5PC11X_GPF2(4)
#define GPIO_LCD_D16_AF			2

#define GPIO_LCD_D17			S5PC11X_GPF2(5)
#define GPIO_LCD_D17_AF			2

#define GPIO_LCD_D18			S5PC11X_GPF2(6)
#define GPIO_LCD_D18_AF			2

#define GPIO_LCD_D19			S5PC11X_GPF2(7)
#define GPIO_LCD_D19_AF			2

#define GPIO_LCD_D20			S5PC11X_GPF3(0)
#define GPIO_LCD_D20_AF			2

#define GPIO_LCD_D21			S5PC11X_GPF3(1)
#define GPIO_LCD_D21_AF			2

#define GPIO_LCD_D22			S5PC11X_GPF3(2)
#define GPIO_LCD_D22_AF			2

#define GPIO_LCD_D23			S5PC11X_GPF3(3)
#define GPIO_LCD_D23_AF			2

#if !(defined CONFIG_JUPITER_VER_B4)
#define GPIO_CODEC_LDO_EN		S5PC11X_GPF3(4)
#else
#define GPIO_GPF34				S5PC11X_GPF3(4)
#endif

#define GPIO_GPF35				S5PC11X_GPF3(5)

#define GPIO_NAND_CLK			S5PC11X_GPG0(0)
#define GPIO_NAND_CLK_AF		2

#define GPIO_NAND_CMD			S5PC11X_GPG0(1)
#define GPIO_NAND_CMD_AF		2

#if defined CONFIG_ARIES_VER_B0 || (defined CONFIG_ARIES_VER_B1) || (defined CONFIG_ARIES_VER_B2) || (defined CONFIG_ARIES_VER_B3)
#define GPIO_ALS_SCL_28V		S5PC11X_GPG0(2)
#else
#define GPIO_GPG02				S5PC11X_GPG0(2)
#endif

#define GPIO_NAND_D0			S5PC11X_GPG0(3)
#define GPIO_NAND_D0_AF			2

#define GPIO_NAND_D1			S5PC11X_GPG0(4)
#define GPIO_NAND_D1_AF			2

#define GPIO_NAND_D2			S5PC11X_GPG0(5)
#define GPIO_NAND_D2_AF			2

#define GPIO_NAND_D3			S5PC11X_GPG0(6)
#define GPIO_NAND_D3_AF			2

#define GPIO_WLAN_SDIO_CLK      S5PC11X_GPG1(0)
#define GPIO_WLAN_SDIO_CLK_AF   2

#define GPIO_WLAN_SDIO_CMD      S5PC11X_GPG1(1)
#define GPIO_WLAN_SDIO_CMD_AF   2

#define GPIO_WLAN_nRST          S5PC11X_GPG1(2)

#define GPIO_WLAN_SDIO_D0       S5PC11X_GPG1(3)
#define GPIO_WLAN_SDIO_D0_AF    2

#define GPIO_WLAN_SDIO_D1       S5PC11X_GPG1(4)
#define GPIO_WLAN_SDIO_D1_AF    2

#define GPIO_WLAN_SDIO_D2       S5PC11X_GPG1(5)
#define GPIO_WLAN_SDIO_D2_AF    2

#define GPIO_WLAN_SDIO_D3       S5PC11X_GPG1(6)
#define GPIO_WLAN_SDIO_D3_AF    2

#define GPIO_T_FLASH_CLK		S5PC11X_GPG2(0)
#define GPIO_T_FLASH_CLK_AF		2

#define GPIO_T_FLASH_CMD        S5PC11X_GPG2(1)
#define GPIO_T_FLASH_CMD_AF		2

#if defined CONFIG_ARIES_VER_B0 || (defined CONFIG_ARIES_VER_B1) || (defined CONFIG_ARIES_VER_B2) || (defined CONFIG_ARIES_VER_B3)
#define GPIO_ALS_SDA_28V		S5PC11X_GPG2(2)
#else
#define GPIO_GPG22              S5PC11X_GPG2(2)
#endif

#define GPIO_T_FLASH_D0         S5PC11X_GPG2(3)
#define GPIO_T_FLASH_D0_AF		2

#define GPIO_T_FLASH_D1         S5PC11X_GPG2(4)
#define GPIO_T_FLASH_D1_AF		2	

#define GPIO_T_FLASH_D2         S5PC11X_GPG2(5)
#define GPIO_T_FLASH_D2_AF		2

#define GPIO_T_FLASH_D3         S5PC11X_GPG2(6)
#define GPIO_T_FLASH_D3_AF		2

#define GPIO_GPS_nRST			S5PC11X_GPG3(0)

#define GPIO_GPS_PWR_EN			S5PC11X_GPG3(1)

#define GPIO_GPS_CLK_INT		S5PC11X_GPG3(2)

#define GPIO_TA_CURRENT_SEL_AP	S5PC11X_GPG3(3)

#define GPIO_BT_WAKE			S5PC11X_GPG3(4)

#define GPIO_NWLAN_WAKE			S5PC11X_GPG3(5)

#ifdef CONFIG_JUPITER_VER_B4
#define GPIO_TOUCH_EN			S5PC11X_GPG3(6)
#define	GPIO_TOUCH_EN_AF		1
#endif

#define GPIO_AP_PS_HOLD			S5PC11X_GPH0(0)

#define GPIO_ACC_INT			S5PC11X_GPH0(1)

#if !(defined CONFIG_JUPITER_VER_B4)
#define GPIO_PS_VOUT			S5PC11X_GPH0(2)
#define GPIO_PS_VOUT_AF			0xFF

#define GPIO_BUCK_2_EN_A		S5PC11X_GPH0(3)

#define GPIO_BUCK_2_EN_B		S5PC11X_GPH0(4)

#define GPIO_BUCK_3_EN			S5PC11X_GPH0(5)
#else
#define GPIO_BUCK_2_EN_A		S5PC11X_GPH0(2)

#define GPIO_BUCK_2_EN_B		S5PC11X_GPH0(3)

#define GPIO_BUCK_3_EN			S5PC11X_GPH0(4)

#define GPIO_GYRO_PD			S5PC11X_GPH0(5)
#endif

#define GPIO_DET_35				S5PC11X_GPH0(6)
#define GPIO_DET_35_AF			0xFF

#define GPIO_AP_PMIC_IRQ		S5PC11X_GPH0(7)
#define GPIO_AP_PMIC_IRQ_AF		0xFF

#define GPIO_GPH10				S5PC11X_GPH1(0)

#define GPIO_GPH11				S5PC11X_GPH1(1)

#if !(defined CONFIG_JUPITER_VER_B4)
#define GPIO_GPH12				S5PC11X_GPH1(2)	
#else
#define GPIO_PS_VOUT			S5PC11X_GPH1(2)
#define GPIO_PS_VOUT_AF		0xFF
#endif

#define GPIO_nINT_ONEDRAM_AP	S5PC11X_GPH1(3)

#if !(defined CONFIG_JUPITER_VER_B4)
#define GPIO_GPH14				S5PC11X_GPH1(4)

#define GPIO_GPH15				S5PC11X_GPH1(5)

#define GPIO_GPH16				S5PC11X_GPH1(6)
#else
#define GPIO_HDMI_CEC			S5PC11X_GPH1(4)
#define GPIO_HDMI_CEC_AF		4

#define GPIO_HDMI_HPD			S5PC11X_GPH1(5)
#define GPIO_HDMI_HPD_AF		4

#define GPIO_TA_nSTAT			S5PC11X_GPH1(6)
#endif
#define GPIO_PHONE_ACTIVE		S5PC11X_GPH1(7)

#define GPIO_KBC0				S5PC11X_GPH2(0)
#define GPIO_KBC0_AF			3

#define GPIO_KBC1				S5PC11X_GPH2(1)
#define GPIO_KBC1_AF			3

#define GPIO_KBC2				S5PC11X_GPH2(2)
#define GPIO_KBC2_AF			3

#if !(defined CONFIG_JUPITER_VER_B4)
#define GPIO_GPH23				S5PC11X_GPH2(3)
#else
#define GPIO_KBC3				S5PC11X_GPH2(3)
#define GPIO_KBC3_AF			3
#endif

#define GPIO_WLAN_HOST_WAKE		S5PC11X_GPH2(4)

#define BT_HOST_WAKE			S5PC11X_GPH2(5)

#define GPIO_nPOWER				S5PC11X_GPH2(6)

#define GPIO_JACK_nINT			S5PC11X_GPH2(7)

#define GPIO_KBR0				S5PC11X_GPH3(0)
#define GPIO_KBR0_AF			3

#define GPIO_KBR1				S5PC11X_GPH3(1)
#define GPIO_KBR1_AF			3

#define GPIO_KBR2				S5PC11X_GPH3(2)
#define GPIO_KBR2_AF			3

#define GPIO_KBR3				S5PC11X_GPH3(3)
#define GPIO_KBR3_AF			3

#define GPIO_T_FLASH_DETECT		S5PC11X_GPH3(4)

#define GPIO_MSENSE_IRQ			S5PC11X_GPH3(5)

#define GPIO_EAR_SEND_END		S5PC11X_GPH3(6)
#define GPIO_EAR_SEND_END_AF	0xFF

//[ hdlnc_bp_ytkwon : 20100310
#define GPIO_EAR_SEND_END35		S5PC11X_GPH2(2)
#define GPIO_EAR_SEND_END35_AF	0xFF
//] hdlnc_bp_ytkwon : 20100310

#define GPIO_CP_RST				S5PC11X_GPH3(7)

#define GPIO_CODEC_I2S_CLK		S5PC11X_GPI(0)
#define GPIO_CODEC_I2S_CLK_AF		2

#define GPIO_GPI1				S5PC11X_GPI(1)

#define GPIO_CODEC_I2S_WS		S5PC11X_GPI(2)
#define GPIO_CODEC_I2S_WS_AF		2

#define GPIO_CODEC_I3S_DI		S5PC11X_GPI(3)
#define GPIO_CODEC_I3S_DI_AF		2

#define GPIO_CODEC_I3S_DO		S5PC11X_GPI(4)
#define GPIO_CODEC_I3S_DO_AF		2

#define GPIO_GPI5				S5PC11X_GPI(5)

#define GPIO_GPI6				S5PC11X_GPI(6)

#if defined CONFIG_ARIES_VER_B0 || (defined CONFIG_ARIES_VER_B1) || (defined CONFIG_ARIES_VER_B2) || (defined CONFIG_ARIES_VER_B3)
#define GPIO_MSENSE_SCL_28V				S5PC11X_GPJ0(0)
#define GPIO_MSENSE_SDA_28V				S5PC11X_GPJ0(1)
#else
#if defined CONFIG_JUPITER_VER_B5
#define GPIO_GPJ00				S5PC11X_GPJ0(0)
#else
#define GPIO_PDA_ACTIVE			S5PC11X_GPJ0(0)
#endif
#define GPIO_GPJ01				S5PC11X_GPJ0(1)
#endif

#define GPIO_HWREV_MODE0		S5PC11X_GPJ0(2)

#define GPIO_HWREV_MODE1		S5PC11X_GPJ0(3)

#define GPIO_HWREV_MODE2		S5PC11X_GPJ0(4)

#define GPIO_TOUCH_INT			S5PC11X_GPJ0(5)

#define GPIO_CAM_MEGA_EN		S5PC11X_GPJ0(6)

#if !(defined CONFIG_JUPITER_VER_B4)
#define GPIO_HWREV_MODE3		S5PC11X_GPJ0(7)
#else
#define GPIO_USB_SEL30			S5PC11X_GPJ0(7)
#endif

#define GPIO_PHONE_ON			S5PC11X_GPJ1(0)

#if !(defined CONFIG_JUPITER_VER_B4)
#define GPIO_VIBTONE_EN1		S5PC11X_GPJ1(1)

#if defined CONFIG_ARIES_VER_B0 || (defined CONFIG_ARIES_VER_B1) || (defined CONFIG_ARIES_VER_B2) || (defined CONFIG_ARIES_VER_B3)
#define GPIO_GPJ30				S5PC11X_GPJ1(2)
#define GPIO_FM_ACM_EN			S5PC11X_GPJ1(2)
#else
#define GPIO_VIBTONE_EN2		S5PC11X_GPJ1(2)
#endif
#else
#define GPIO_VIBTONE_EN1		S5PC11X_GPJ1(1)

#define GPIO_GPJ12				S5PC11X_GPJ1(2)
#endif

#if !(defined CONFIG_JUPITER_VER_B4)
#define GPIO_TOUCH_EN			S5PC11X_GPJ1(3)
#define	GPIO_TOUCH_EN_AF		1
#else
#define GPIO_MLCD_ON			S5PC11X_GPJ1(3)
#endif

#if !(defined CONFIG_JUPITER_VER_B4)
#define GPIO_PS_ON				S5PC11X_GPJ1(4)
#else
#define GPIO_EAR_SEL			S5PC11X_GPJ1(4)
#endif

#define GPIO_CAM_MEGA_nRST		S5PC11X_GPJ1(5)

#define GPIO_CAM_FLASH_EN		S5PC11X_GPJ2(0)

#define GPIO_CAM_FLASH_SET		S5PC11X_GPJ2(1)

#if !(defined CONFIG_JUPITER_VER_B4)
#define GPIO_OLED_DET			S5PC11X_GPJ2(2)
#else
#define GPIO_HDMI_EN1			S5PC11X_GPJ2(2)
#endif

#define GPIO_CODEC_XTAL_EN		S5PC11X_GPJ2(3)

#define GPIO_FM_INT				S5PC11X_GPJ2(4)

#if !(defined CONFIG_JUPITER_VER_B4)
#define GPIO_FM_RST				S5PC11X_GPJ2(5)
#else
#define GPIO_FM_BUS_nRST		S5PC11X_GPJ2(5)

#endif

#if !(defined CONFIG_JUPITER_VER_B4)
#define GPIO_EARPATH_SEL		S5PC11X_GPJ2(6)
#else
#define GPIO_GPJ26				S5PC11X_GPJ2(6)
#endif

#if !(defined CONFIG_JUPITER_VER_B4)
#define GPIO_MASSMEMORY_EN		S5PC11X_GPJ2(7)
#else
#define GPIO_GPJ27				S5PC11X_GPJ2(7)
#endif

#if defined CONFIG_ARIES_VER_B0 || (defined CONFIG_ARIES_VER_B1) || (defined CONFIG_ARIES_VER_B2)  || (defined CONFIG_ARIES_VER_B3)
#define _3_TOUCH_SDA_28V				S5PC11X_GPJ3(0)
#define _3_TOUCH_SCL_28V				S5PC11X_GPJ3(1)
#define _3_GPIO_TOUCH_EN			S5PC11X_GPJ3(2)
#define _3_GPIO_TOUCH_EN_AF		1
#define _3_GPIO_TOUCH_CE				S5PC11X_GPJ3(3)
#define _3_GPIO_TOUCH_ST_AF		1

#else
#define GPIO_GPJ30				S5PC11X_GPJ3(0)

#ifdef CONFIG_JUPITER_VER_B5
#define GPIO_GPJ31				S5PC11X_GPJ3(1)
#else
#define GPIO_EAR35_SW			S5PC11X_GPJ3(1)
#endif

#define GPIO_GPJ32				S5PC11X_GPJ3(2)

#define GPIO_GPJ33				S5PC11X_GPJ3(3)

#endif

#if !(defined CONFIG_JUPITER_VER_B4)
#define GPIO_USB_SDA_28V		S5PC11X_GPJ3(4)

#define GPIO_USB_SCL_28V		S5PC11X_GPJ3(5)

#define GPIO_AP_SDA_28V			S5PC11X_GPJ3(6)

#define GPIO_AP_SCL_28V			S5PC11X_GPJ3(7)
#else
#define GPIO_IrDA_SHUTDOWN		S5PC11X_GPJ3(4)

#define GPIO_ALS_nRST			S5PC11X_GPJ3(5)

#define GPIO_AP_I2C_SDA_28V		S5PC11X_GPJ3(6)

#define GPIO_AP_I2C_SCL_28V		S5PC11X_GPJ3(7)
#endif

#define GPIO_AP_PMIC_SDA		S5PC11X_GPJ4(0)

#if defined CONFIG_ARIES_VER_B0 || (defined CONFIG_ARIES_VER_B1) || (defined CONFIG_ARIES_VER_B2) || (defined CONFIG_ARIES_VER_B3)
#define  _3_GPIO_TOUCH_INT				S5PC11X_GPJ4(1)
#define _3_GPIO_TOUCH_INT_AF		0xFF
#else
#ifdef CONFIG_JUPITER_VER_B5
#define GPIO_GPJ41				S5PC11X_GPJ4(1)
#else
#define GPIO_KEY_LED_ON			S5PC11X_GPJ4(1)
#endif
#endif

#define GPIO_MICBIAS_EN			S5PC11X_GPJ4(2)
 
#define GPIO_EARMICBIAS_EN			S5PC11X_GPJ4(4) //hdlnc_ysyim_2010-05-03	: from Kepler05(HWRE=0x06)
 
#define GPIO_MICBIAS_EN2			S5PC11X_GPJ2(5) //hdlnc_ysyim_2010-05-04: from SGH-T959 REV0.5(HWREV = 0x0e)	 or 0.6 (HWREV = 0x0f)			

#define GPIO_AP_PMIC_SCL		S5PC11X_GPJ4(3)

#define GPIO_TV_EN				S5PC11X_GPJ4(4)

#if !(defined CONFIG_JUPITER_VER_B4)
#define GPIO_MP010			S5PC11X_MP01(0)
#else
#define GPIO_OLED_DET			S5PC11X_MP01(0)
#endif

#define GPIO_DISPLAY_CS			S5PC11X_MP01(1)

#define GPIO_SUB_DISPLAY_CS		S5PC11X_MP01(2)

#define GPIO_OLED_ID			S5PC11X_MP01(3)

#define GPIO_AP_NANDCS			S5PC11X_MP01(4)
#define GPIO_AP_NANDCS_AF		5

#define GPIO_DIC_ID				S5PC11X_MP01(5)

#define GPIO_MP016				S5PC11X_MP01(6)

#define GPIO_MP017				S5PC11X_MP01(7)

#define GPIO_MP020				S5PC11X_MP02(0)

#define GPIO_MP021				S5PC11X_MP02(1)

#define GPIO_VCC_19V_PDA		S5PC11X_MP02(2)

#define GPIO_MP023				S5PC11X_MP02(3)

#define GPIO_MP030				S5PC11X_MP03(0)

#define GPIO_MP031				S5PC11X_MP03(1)

#define GPIO_MP032				S5PC11X_MP03(2)

#if !(defined CONFIG_JUPITER_VER_B4)
#define GPIO_PDA_ACTIVE			S5PC11X_MP03(3)
#else
#define GPIO_MP033				S5PC11X_MP03(3)
#endif

#define GPIO_VCC_18V_PDA		S5PC11X_MP03(4)

#define GPIO_CP_nRST			S5PC11X_MP03(5)

#if !(defined CONFIG_JUPITER_VER_B4)
#define GPIO_MP036				S5PC11X_MP03(6)
#else
#define GPIO_CODEC_LDO_EN		S5PC11X_MP03(6)
#endif

#if !(defined CONFIG_JUPITER_VER_B4)
#define GPIO_PCM_SEL			S5PC11X_MP03(7)
#else
#define GPIO_MP037				S5PC11X_MP03(7)
#endif

#define GPIO_USB_SEL			S5PC11X_MP04(0)

#define GPIO_DISPLAY_CLK		S5PC11X_MP04(1)

#define GPIO_MP042				S5PC11X_MP04(2)

#define GPIO_DISPLAY_SI			S5PC11X_MP04(3)

#define GPIO_MP044				S5PC11X_MP04(4)

#define GPIO_LVDS_RST			S5PC11X_MP04(5)

#define GPIO_GPS_CLK_EN			S5PC11X_MP04(6)

#define GPIO_MHL_RST			S5PC11X_MP04(7)

#if defined CONFIG_ARIES_VER_B0 || (defined CONFIG_ARIES_VER_B1) || (defined CONFIG_ARIES_VER_B2) || (defined CONFIG_ARIES_VER_B3)
#define FUEL_SCL_18V		S5PC11X_MP05(0)
#define FUEL_SDA_18V	S5PC11X_MP05(1)
#else
#define GPIO_MHL_USB_SEL		S5PC11X_MP05(0)

#define GPIO_LCD_BACKLIGHT_EN	S5PC11X_MP05(1)
#endif

#define GPIO_AP_SCL_18V			S5PC11X_MP05(2)

#define GPIO_AP_SDA_18V			S5PC11X_MP05(3)

#define GPIO_MP054				S5PC11X_MP05(4)

#define GPIO_MLCD_RST			S5PC11X_MP05(5)

#define GPIO_MP056				S5PC11X_MP05(6)

#define GPIO_UART_SEL			S5PC11X_MP05(7)

#define AP_I2C_SDA              S5PC11X_MP05(3)
#define AP_I2C_SCL              S5PC11X_MP05(2)
#define AP_I2C_SDA_28V			S5PC11X_GPJ3(6)
#define	AP_I2C_SCL_28V			S5PC11X_GPJ3(7)

#define PMIC_I2C_SDA            S5PC11X_GPJ4(0)
#define PMIC_I2C_SCL            S5PC11X_GPJ4(3)

#define GPIO_TOUCH_INT			S5PC11X_GPJ0(5)
#define	GPIO_TOUCH_INT_AF		0xFF

#define	GPIO_TOUCH_RST			S5PC11X_GPB(6)
#define	GPIO_TOUCH_ST_AF		1

/* uart 0~3 */
#define 	GPIO_BT_RXD 		S5PC11X_GPA0(0)
#define 	GPIO_BT_RXD_AF 		2
#define 	GPIO_BT_TXD 		S5PC11X_GPA0(1)
#define 	GPIO_BT_TXD_AF 		2
#define 	GPIO_BT_CTS 		S5PC11X_GPA0(2)
#define 	GPIO_BT_CTS_AF 		2
#define 	GPIO_BT_RTS 		S5PC11X_GPA0(3)
#define 	GPIO_BT_RTS_AF 		2

#define 	GPIO_GPS_RXD		S5PC11X_GPA0(4)
#define 	GPIO_GPS_RXD_AF 	2
#define 	GPIO_GPS_TXD 		S5PC11X_GPA0(5)
#define 	GPIO_GPS_TXD_AF 	2
#define 	GPIO_GPS_CTS		S5PC11X_GPA0(6)
#define 	GPIO_GPS_CTS_AF 	2
#define 	GPIO_GPS_RTS		S5PC11X_GPA0(7)
#define 	GPIO_GPS_RTS_AF 	2

#define 	GPIO_AP_RXD 		S5PC11X_GPA1(0)
#define 	GPIO_AP_RXD_AF 		2
#define 	GPIO_AP_TXD 		S5PC11X_GPA1(1)
#define 	GPIO_AP_TXD_AF 		2

#define 	GPIO_FLM_RXD 		S5PC11X_GPA1(2)
#define 	GPIO_FLM_RXD_AF 	2
#define 	GPIO_FLM_TXD 		S5PC11X_GPA1(3)
#define 	GPIO_FLM_TXD_AF 	2

#define		GPIO_AP_PS_HOLD		S5PC11X_GPH0(0)
#define		GPIO_AP_PS_HOLD_AF	1 //?


#define		GPIO_PHONE_ACTIVE		S5PC11X_GPH1(7)
#define		GPIO_PHONE_ACTIVE_AF	2 //?

#define		GPIO_N_POWER		S5PC11X_GPH2(6)
#define		GPIO_N_POWER_AF		2 //?

#define		GPIO_BT_WAKE		S5PC11X_GPG3(4)
#define		GPIO_BT_RST			S5PC11X_GPB(3)
#define		GPIO_WLAN_BT_EN		S5PC11X_GPB(5)
#define		GPIO_BT_HOST_WAKE	S5PC11X_GPH2(5)
#define		GPIO_WLAN_RST		S5PC11X_GPG1(2)

#define 	GPIO_JACK_INT_N 	S5PC11X_GPH2(7)
#define		GPIO_JACK_INT_N_AF	0xFF
#endif
