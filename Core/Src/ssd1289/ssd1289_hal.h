#ifndef _SSD1289_HAL_H_
#define _SSD1289_HAL_H_

#ifdef __cplusplus
 extern "C" {
#endif

 /*
#include "stm32f7xx_hal.h"
#include "stm32f7xx_hal_gpio.h"
#include "stm32f7xx_hal_rcc.h"
*/

#include "main.h"
#include <stdlib.h>
#include <string.h>

#define DB_00_PIN  LCD_DB00_Pin
#define DB_00_PORT LCD_DB00_GPIO_Port
#define DB_01_PIN  LCD_DB01_Pin
#define DB_01_PORT LCD_DB01_GPIO_Port
#define DB_02_PIN  LCD_DB02_Pin
#define DB_02_PORT LCD_DB02_GPIO_Port
#define DB_03_PIN  LCD_DB03_Pin
#define DB_03_PORT LCD_DB03_GPIO_Port
#define DB_04_PIN  LCD_DB04_Pin
#define DB_04_PORT LCD_DB04_GPIO_Port
#define DB_05_PIN  LCD_DB05_Pin
#define DB_05_PORT LCD_DB05_GPIO_Port
#define DB_06_PIN  LCD_DB06_Pin
#define DB_06_PORT LCD_DB06_GPIO_Port
#define DB_07_PIN  LCD_DB07_Pin
#define DB_07_PORT LCD_DB07_GPIO_Port
#define DB_08_PIN  LCD_DB08_Pin
#define DB_08_PORT LCD_DB08_GPIO_Port
#define DB_09_PIN  LCD_DB09_Pin
#define DB_09_PORT LCD_DB09_GPIO_Port
#define DB_10_PIN  LCD_DB10_Pin
#define DB_10_PORT LCD_DB10_GPIO_Port
#define DB_11_PIN  LCD_DB11_Pin
#define DB_11_PORT LCD_DB11_GPIO_Port
#define DB_12_PIN  LCD_DB12_Pin
#define DB_12_PORT LCD_DB12_GPIO_Port
#define DB_13_PIN  LCD_DB13_Pin
#define DB_13_PORT LCD_DB13_GPIO_Port
#define DB_14_PIN  LCD_DB14_Pin
#define DB_14_PORT LCD_DB14_GPIO_Port
#define DB_15_PIN  LCD_DB15_Pin
#define DB_15_PORT LCD_DB15_GPIO_Port
//#define LCD_RD_PIN  LCD_RD_Pin
//#define LCD_RD_PORT LCD_RD_GPIO_Port
#define LCD_WR_PIN  LCD_WR_Pin
#define LCD_WR_PORT LCD_WR_GPIO_Port
#define LCD_RS_PIN  LCD_RS_Pin
#define LCD_RS_PORT LCD_RS_GPIO_Port
#define LCD_CS_PIN  LCD_CS_Pin
#define LCD_CS_PORT LCD_CS_GPIO_Port
#define LCD_RST_PIN  LCD_REST_Pin
#define LCD_RST_PORT LCD_REST_GPIO_Port

#define DB_00_S HAL_GPIO_WritePin(DB_00_PORT, DB_00_PIN, GPIO_PIN_SET);
#define DB_00_R HAL_GPIO_WritePin(DB_00_PORT, DB_00_PIN, GPIO_PIN_RESET);
#define DB_01_S HAL_GPIO_WritePin(DB_01_PORT, DB_01_PIN, GPIO_PIN_SET);
#define DB_01_R HAL_GPIO_WritePin(DB_01_PORT, DB_01_PIN, GPIO_PIN_RESET);
#define DB_02_S HAL_GPIO_WritePin(DB_02_PORT, DB_02_PIN, GPIO_PIN_SET);
#define DB_02_R HAL_GPIO_WritePin(DB_02_PORT, DB_02_PIN, GPIO_PIN_RESET);
#define DB_03_S HAL_GPIO_WritePin(DB_03_PORT, DB_03_PIN, GPIO_PIN_SET);
#define DB_03_R HAL_GPIO_WritePin(DB_03_PORT, DB_03_PIN, GPIO_PIN_RESET);
#define DB_04_S HAL_GPIO_WritePin(DB_04_PORT, DB_04_PIN, GPIO_PIN_SET);
#define DB_04_R HAL_GPIO_WritePin(DB_04_PORT, DB_04_PIN, GPIO_PIN_RESET);
#define DB_05_S HAL_GPIO_WritePin(DB_05_PORT, DB_05_PIN, GPIO_PIN_SET);
#define DB_05_R HAL_GPIO_WritePin(DB_05_PORT, DB_05_PIN, GPIO_PIN_RESET);
#define DB_06_S HAL_GPIO_WritePin(DB_06_PORT, DB_06_PIN, GPIO_PIN_SET);
#define DB_06_R HAL_GPIO_WritePin(DB_06_PORT, DB_06_PIN, GPIO_PIN_RESET);
#define DB_07_S HAL_GPIO_WritePin(DB_07_PORT, DB_07_PIN, GPIO_PIN_SET);
#define DB_07_R HAL_GPIO_WritePin(DB_07_PORT, DB_07_PIN, GPIO_PIN_RESET);
#define DB_08_S HAL_GPIO_WritePin(DB_08_PORT, DB_08_PIN, GPIO_PIN_SET);
#define DB_08_R HAL_GPIO_WritePin(DB_08_PORT, DB_08_PIN, GPIO_PIN_RESET);
#define DB_09_S HAL_GPIO_WritePin(DB_09_PORT, DB_09_PIN, GPIO_PIN_SET);
#define DB_09_R HAL_GPIO_WritePin(DB_09_PORT, DB_09_PIN, GPIO_PIN_RESET);
#define DB_10_S HAL_GPIO_WritePin(DB_10_PORT, DB_10_PIN, GPIO_PIN_SET);
#define DB_10_R HAL_GPIO_WritePin(DB_10_PORT, DB_10_PIN, GPIO_PIN_RESET);
#define DB_11_S HAL_GPIO_WritePin(DB_11_PORT, DB_11_PIN, GPIO_PIN_SET);
#define DB_11_R HAL_GPIO_WritePin(DB_11_PORT, DB_11_PIN, GPIO_PIN_RESET);
#define DB_12_S HAL_GPIO_WritePin(DB_12_PORT, DB_12_PIN, GPIO_PIN_SET);
#define DB_12_R HAL_GPIO_WritePin(DB_12_PORT, DB_12_PIN, GPIO_PIN_RESET);
#define DB_13_S HAL_GPIO_WritePin(DB_13_PORT, DB_13_PIN, GPIO_PIN_SET);
#define DB_13_R HAL_GPIO_WritePin(DB_13_PORT, DB_13_PIN, GPIO_PIN_RESET);
#define DB_14_S HAL_GPIO_WritePin(DB_14_PORT, DB_14_PIN, GPIO_PIN_SET);
#define DB_14_R HAL_GPIO_WritePin(DB_14_PORT, DB_14_PIN, GPIO_PIN_RESET);
#define DB_15_S HAL_GPIO_WritePin(DB_15_PORT, DB_15_PIN, GPIO_PIN_SET);
#define DB_15_R HAL_GPIO_WritePin(DB_15_PORT, DB_15_PIN, GPIO_PIN_RESET);
//#define LCD_RD_S HAL_GPIO_WritePin(LCD_RD_PORT, LCD_RD_PIN, GPIO_PIN_SET);
//#define LCD_RD_R HAL_GPIO_WritePin(LCD_RD_PORT, LCD_RD_PIN, GPIO_PIN_RESET);
#define LCD_WR_S HAL_GPIO_WritePin(LCD_WR_PORT, LCD_WR_PIN, GPIO_PIN_SET);
#define LCD_WR_R HAL_GPIO_WritePin(LCD_WR_PORT, LCD_WR_PIN, GPIO_PIN_RESET);
#define LCD_RS_S HAL_GPIO_WritePin(LCD_RS_PORT, LCD_RS_PIN, GPIO_PIN_SET);
#define LCD_RS_R HAL_GPIO_WritePin(LCD_RS_PORT, LCD_RS_PIN, GPIO_PIN_RESET);
#define LCD_CS_S HAL_GPIO_WritePin(LCD_CS_PORT, LCD_CS_PIN, GPIO_PIN_SET);
#define LCD_CS_R HAL_GPIO_WritePin(LCD_CS_PORT, LCD_CS_PIN, GPIO_PIN_RESET);
#define LCD_RST_S HAL_GPIO_WritePin(LCD_RST_PORT, LCD_RST_PIN, GPIO_PIN_SET);
#define LCD_RST_R HAL_GPIO_WritePin(LCD_RST_PORT, LCD_RST_PIN, GPIO_PIN_RESET);

#define delay //HAL_Delay(10);

#define BLACK   0x000000
#define WHITE   0xFFFFFF
#define RED     HUE_17
#define BLUE    HUE_01
#define BLUE_D  0x0000A0 /*   0,   0, 160 */
#define CYAN    HUE_05
#define YELLOW  HUE_13 /* 255, 255,   0 */
#define MAGENTA HUE_21 /* 255,   0, 255 */
#define GREEN   HUE_09 /*   0, 255,   0 */
#define GREEN_D 0x007F00 /*   0, 128,   0 */
#define PURPLE  0x7F007F /* 128,   0, 128 */
#define TEAL    0x007F7F /*   0, 128, 128 */
#define NAVY    0x00007F /*   0,   0, 128 */
#define SILVER  0xBFBFBF /* 191, 191, 191 */
#define GRAY    0x7F7F7F /* 128, 128, 128 */
#define ORANGE  0xFFA500 /* 255, 165,   0 */
#define BROWN   0xA52A2A /* 165, 255,  42 */
#define MAROON  0x7F0000 /* 128,   0,   0 */
#define OLIVE   0x7F7F00 /* 128, 128,   0 */
#define LIME    HUE_12

#define HUE_01 0x0000FF // 000, 000, 255 - BLUE
#define HUE_02 0x003FFF // 000, 063, 255 - 
#define HUE_03 0x007FFF // 000, 127, 255 - 
#define HUE_04 0x00BFFF // 000, 191, 255 - 
#define HUE_05 0x00FFFF // 000, 255, 255 - CYAN
#define HUE_06 0x00FFBF // 000, 255, 191 - 
#define HUE_07 0x00FF7F // 000, 255, 127 - 
#define HUE_08 0x00FF00 // 000, 255, 063 - 
#define HUE_09 0x00FF00 // 000, 255, 000 - GREEN
#define HUE_10 0x3FFF00 // 063, 255, 000 - 
#define HUE_11 0x7FFF7F // 127, 255, 000 - 
#define HUE_12 0xBFFF00 // 191, 255, 000 - LIME
#define HUE_13 0xFFFF00 // 255, 255, 000 - YELLOW
#define HUE_14 0xFFBF00 // 255, 191, 000 - 
#define HUE_15 0xFF7F00 // 255, 127, 000 - 
#define HUE_16 0xFF3F00 // 255, 063, 000 - 
#define HUE_17 0xFF0000 // 255, 000, 000 - RED
#define HUE_18 0xFF003F // 255, 000, 063 - 
#define HUE_19 0xFF007F // 255, 000, 127 - 
#define HUE_20 0xFF00BF // 255, 000, 191 - 
#define HUE_21 0xFF00FF // 255, 000, 255 - MAGENTA
#define HUE_22 0xBF00FF // 191, 000, 255 - 
#define HUE_23 0x7F00FF // 127, 000, 255 - 
#define HUE_24 0x3F00FF // 063, 000, 255 - 

typedef struct { // Data stored PER GLYPH
	uint16_t bitmapOffset;     // Pointer into GFXfont->bitmap
	uint8_t  width, height;    // Bitmap dimensions in pixels
	uint8_t  xAdvance;         // Distance to advance cursor (x axis)
	int8_t   xOffset, yOffset; // Dist from cursor position to UL corner
} GFXglyph;

typedef struct { // Data stored for FONT AS A WHOLE:
	uint8_t  *bitmap;      // Glyph bitmaps, concatenated
	GFXglyph *glyph;       // Glyph array
	uint8_t   first, last; // ASCII extents
	uint8_t   yAdvance;    // Newline distance (y axis)
} GFXfont;

uint32_t RGB(uint8_t r, uint8_t g, uint8_t b);

void LCD_Init(void);
void LCD_Orientation(uint8_t orientation);

void LCD_Pixel(uint16_t x, uint16_t y, uint32_t color24);
void LCD_Rect_Fill(uint16_t x, uint16_t y, uint16_t w, uint16_t h, uint32_t color24);
void LCD_Line(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2, uint8_t size, uint32_t color24);
void LCD_Rect(uint16_t x, uint16_t y, uint16_t w, uint16_t h, uint8_t size, uint32_t color24);
void LCD_Triangle(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2, uint16_t x3, uint16_t y3, uint8_t size, uint32_t color24);
void LCD_Triangle_Fill(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2, uint16_t x3, uint16_t y3, uint32_t color24);
void LCD_Ellipse(int16_t x0, int16_t y0, int16_t rx, int16_t ry, uint8_t fill, uint8_t size, uint32_t color24);
void LCD_Circle(uint16_t x, uint16_t y, uint8_t radius, uint8_t fill, uint8_t size, uint32_t color24);
void LCD_Rect_Round(uint16_t x, uint16_t y, uint16_t length, uint16_t width, uint16_t r, uint8_t size, uint32_t color24);
void LCD_Rect_Round_Fill(uint16_t x, uint16_t y, uint16_t length, uint16_t width, uint16_t r, uint32_t color24);
void LCD_Font(uint16_t x, uint16_t y, const char *text, const GFXfont *p_font, uint8_t size, uint32_t color24);

#define LCD_ON 					LCD_Send_Reg(0x0007, 0x0033);
#define LCD_OFF					LCD_Send_Reg(0x0007, 0x0000);
#define LCD_RAM_PREPARE LCD_Send_Cmd(0x0022);

#ifdef __cplusplus
}
#endif

#endif /* _SSD1289_HAL_H_ */
