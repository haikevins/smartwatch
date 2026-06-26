#pragma once

// LCD ST7789V2
#define LCD_WIDTH   240
#define LCD_HEIGHT  280

#define LCD_DC      4
#define LCD_CS      5
#define LCD_SCK     6
#define LCD_MOSI    7
#define LCD_RST     8
#define LCD_BL      15

// Shared I2C
#define IIC_SDA     11
#define IIC_SCL     10

// Touch CST816T
#define TP_RST      13
#define TP_INT      14
#define CST816T_ADDR 0x15

// IMU QMI8658
#define QMI8658_ADDR 0x6B
#define QMI8658_INT2 38

// RTC PCF85063
#define PCF85063_ADDR 0x51
#define RTC_INT       39

// Power / key / buzzer - new pin config
#define SYS_OUT     40
#define SYS_EN      41
#define BUZZER_PIN  42

// Battery ADC
#define BAT_ADC     1