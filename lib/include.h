
#ifndef LIB_INCLUDE_H_
#define LIB_INCLUDE_H_

#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdio.h>

#define _40MHZ 9
#define _20MHZ 19
#define _10MHZ 39
#define _50MHZ 0x07
#define _25MHZ 0x0F
#define _80MHZ 0x04 

// DIMENSIONES DEL OLED
#define OLED_WIDTH 128
#define OLED_HEIGHT 64
#define slaveaddress 0x3C
// COMANDOS EN MACROS
#define OLED_SETCONTRAST 0x81
#define OLED_DISPLAYALLON_RESUME 0xA4
#define OLED_DISPLAYALLON 0xA5
#define OLED_NORMALDISPLAY 0xA6
#define OLED_INVERTDISPLAY 0xA7
#define OLED_DISPLAYOFF 0xAE
#define OLED_DISPLAYON 0xAF
#define OLED_SETDISPLAYOFFSET 0xD3
#define OLED_SETCOMPINS 0xDA
#define OLED_SETVCOMDETECT 0xDB
#define OLED_SETDISPLAYCLOCKDIV 0xD5
#define OLED_SETPRECHARGE 0xD9
#define OLED_SETMULTIPLEX 0xA8
#define OLED_SETLOWCOLUMN 0x00
#define OLED_SETHIGHCOLUMN 0x10
#define OLED_SETSTARTLINE 0x40
#define OLED_MEMORYMODE 0x20
#define OLED_COLUMNADDR 0x21
#define OLED_PAGEADDR   0x22
#define OLED_COMSCANINC 0xC0
#define OLED_COMSCANDEC 0xC8
#define OLED_SEGREMAP 0xA0
#define OLED_CHARGEPUMP 0x8D

#include "TM4C123GH6PM.h"
#include "GPIO.h"
#include "PLL.h"
#include "UART.h"
#include "I2C.h"


#endif /* INCLUDE_H_ */