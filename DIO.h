/* 
 * File:   mDIO.h
 * Author: kyoma
 *
 * Created on November 27, 2024, 10:43 PM
 */

#ifndef MDIO_H
#define	MDIO_H

//DDR
#define OUTPUT 1
#define INPUT 0

//PORT
#define ON 1
#define OFF 0

#define PA 0
#define PB 1
#define PC 2
#define PD 3
#define PE 4
#define PF 5
#define PG 6

//PINA
void setPORTA_PIN_DIR(int pinNum,int Direction);
void setPORTA_PIN(int pinNum,int state);
int readPORTA_PIN(int pinNum);
//PORTA
void setPORTA_DIR(int Direction);
void setPORTA__DIR(int Direction);
void setPORTA(int state);
void setPORTA_(int state);
int readPORTA();

//PINB
void setPORTB_PIN_DIR(int pinNum,int Direction);
void setPORTB_PIN(int pinNum,int state);
int readPORTB_PIN(int pinNum);
//PORTB
void setPORTB_DIR(int Direction);
void setPORTB__DIR(int Direction);
void setPORTB(int state);
void setPORTB_(int state);
int readPORTB();

//PINC
void setPORTC_PIN_DIR(int pinNum,int Direction);
void setPORTC_PIN(int pinNum,int state);
int readPORTC_PIN(int pinNum);
//PORTC
void setPORTC_DIR(int Direction);
void setPORTC__DIR(int Direction);
void setPORTC(int state);
void setPORTC_(int state);
int readPORTC();

//PIND
void setPORTD_PIN_DIR(int pinNum,int Direction);
void setPORTD_PIN(int pinNum,int state);
int readPORTD_PIN(int pinNum);
//PORTD
void setPORTD_DIR(int Direction);
void setPORTD__DIR(int Direction);
void setPORTD(int state);
void setPORTD_(int state);
int readPORTD();

//PINE
void setPORTE_PIN_DIR(int pinNum,int Direction);
void setPORTE_PIN(int pinNum,int state);
int readPORTE_PIN(int pinNum);
//PORTE
void setPORTE_DIR(int Direction);
void setPORTE__DIR(int Direction);
void setPORTE(int state);
void setPORTE_(int state);
int readPORTE();

//PINF
void setPORTF_PIN_DIR(int pinNum,int Direction);
void setPORTF_PIN(int pinNum,int state);
int readPORTF_PIN(int pinNum);
//PORTF
void setPORTF_DIR(int Direction);
void setPORTF__DIR(int Direction);
void setPORTF(int state);
void setPORTF_(int state);
int readPORTF();

//PING
void setPORTG_PIN_DIR(int pinNum,int Direction);
void setPORTG_PIN(int pinNum,int state);
int readPORTG_PIN(int pinNum);
//PORTG
void setPORTG_DIR(int Direction);
void setPORTG__DIR(int Direction);
void setPORTG(int state);
void setPORTG_(int state);
int readPORTG();

//GENERAL
void setPORT_PIN_DIR(int DDR,int pinNumber,int Direction);
void setPORT_PIN(int port,int pinNumber,int state);
void setPORT_DIR(int DDR,int Direction);
void setPORT__DIR(int DDR,int Direction);
void setPORT(int port,int state);
int readPORT_PIN(int port,int pinNumber);
int readPORT(int port);

#endif	/* MDIO_H */

