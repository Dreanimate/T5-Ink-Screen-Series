#if defined(ESP8266) || defined(ESP32)
#include <pgmspace.h>
#else
#include <avr/pgmspace.h>
#endif
// 24 x 24 gridicons_user_circle
const unsigned char gridicons_user_circle[] PROGMEM = { /* 0X01,0X01,0XB4,0X00,0X40,0X00, */
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x81, 
0xFF, 0xFE, 0x00, 0x7F, 0xF8, 0xFF, 0x1F, 0xF1, 
0xFF, 0x8F, 0xF3, 0xC3, 0xCF, 0xE7, 0x81, 0xE7, 
0xEF, 0x81, 0xF7, 0xCF, 0x81, 0xF3, 0xCF, 0x81, 
0xF3, 0xCF, 0xC3, 0xF3, 0xCF, 0xF7, 0xF3, 0xCF, 
0x00, 0xF3, 0xCE, 0x00, 0x73, 0xEC, 0x00, 0x37, 
0xE4, 0x00, 0x27, 0xF2, 0x00, 0x4F, 0xF1, 0x00, 
0x8F, 0xF8, 0xFF, 0x1F, 0xFE, 0x00, 0x7F, 0xFF, 
0x81, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF
};
