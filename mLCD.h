/* 
 * File:   mLCD.h
 * Author: kyoma
 *
 * Created on November 29, 2024, 8:29 AM
 */

#ifndef MLCD_H
#define	MLCD_H

//CONTROL PINS
#define LCD_CONTROL_DIR PA
#define LCD_CONTROL_PORT PA
#define LCD_RS_PIN PA0
#define LCD_RW_PIN PA1
#define LCD_E_PIN PA2

//LCD PINS
#define LCD_PORT_DIR PC
#define LCD_PORT PC

// LCD Commands Table 
#define CLEAR                               0x01
#define RETURN_HOME                         0x02
#define ENTRY_MODE                          0x06
#define DISPLAY_ON_CURSOR_OFF               0x0C
#define DISPLAY_ON_CURSOR_ON                0x0E  
#define DISPLAY_ON_CURSOR_OFF_BLINKING      0x0D
#define DISPLAY_ON_CURSOR_OFF_NOBLINKING    0x0C
#define _4BIT_MODE                          0x2C

#define LCD_ROW_POSITION_1                  0x80
#define LCD_ROW_POSITION_2                  0xC0

void init_LCD();
void LCD_cmd(char cmd);
void LCD_data(char data);
void LCD_en();
void LCD_clear();
void LCD_num(int num);
void LCD_str(char* str);
void LCD_goto(int row,int col);

#endif	/* MLCD_H */

