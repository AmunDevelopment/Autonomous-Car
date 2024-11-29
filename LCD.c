#define F_CPU 16000000UL
#include <util/delay.h>
#include<avr/io.h>
#include"DIO.h"
#include"LCD.h"
#include"itoa.h"

#include <string.h>


void init_LCD4() {

    LCD_PORT_DIR |= 0xF0;
    LCD_CONTROL_DIR |= (1 << LCD_EN) | (1 << LCD_RS) | (1 << LCD_RW);

    // Write Only
    LCD_CONTROL &= ~(1 << LCD_RW);

    _delay_ms(5);

    // Commands to initialize LCD
    LCD4_clear();
    LCD4_cmd(RETURN_HOME);
    _delay_ms(2);
    LCD4_cmd(ENTRY_MODE);
    _delay_ms(2);
    LCD4_cmd(DISPLAY_ON_CURSOR_OFF_NOBLINKING);
    _delay_ms(2);
    LCD4_cmd(_4BIT_MODE);

    _delay_ms(50);

}

void LCD4_en() {
    LCD_CONTROL |= (1 << LCD_EN);
    _delay_us(50);
    LCD_CONTROL &= ~(1 << LCD_EN);
}

void LCD4_cmd(char cmd) {

    //Select Command Register
    LCD_CONTROL &= ~(1 << LCD_RS);
    LCD_PORT = (LCD_PORT & 0x0F)|(cmd & 0xF0);
    LCD4_en();
    LCD_PORT = (LCD_PORT & 0x0F)|(cmd<<4);
    LCD4_en();

}
void LCD4_data(char data) {

    //Select Data Register
    LCD_CONTROL |= (1 << LCD_RS);
    LCD_PORT = (LCD_PORT & 0x0F)|(data & 0xF0);
    LCD4_en();
    LCD_PORT = (LCD_PORT & 0x0F)|(data<<4);
    LCD4_en();

}

void LCD4_str(char* str){
    for(int i=0; str[i] != '\0'; i++){
        LCD4_data(str[i]);
    }
}

void LCD4_num(int num){
    char str[11];
    
    itoa(num, str, 10);
    
    LCD4_str(str);
}

void LCD4_clear(){
    LCD4_cmd(CLEAR);
    _delay_ms(4);
}

void LCD4_goto(int row, int coln){
    // 0xc0
    if(row){
        LCD4_cmd(0xC0|coln);
    }
    else{
        LCD4_cmd(0x80|coln);
    // 0x80
    }
    
}

void LCD4_delete(int row, int coln){
    // 0xc0
    if(row){
        LCD4_cmd(0xC0|coln);
    }
    else{
        LCD4_cmd(0x80|coln);
    // 0x80
    }
    
    LCD4_data(' ');
}