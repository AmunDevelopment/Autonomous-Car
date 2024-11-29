#include <avr/io.h>
#include "DIO.h"


//PINA
void setPORTA_PIN_DIR(int pinNum, int Direction) {
    switch (Direction) {
        case OUTPUT:
            DDRA |= (1 << pinNum);
            break;
        case INPUT:
            DDRA &= ~(1 << pinNum);
            break;

    }
}

void setPORTA_PIN(int pinNum, int state) {
    switch (state) {
        case ON:
            PORTA |= (1 << pinNum);
            break;
        case OFF:
            PORTA &= ~(1 << pinNum);
            break;
    }
}

int readPORTA_PIN(int pinNum) {
    if (PINA & (1 << pinNum)) {
        return 1;
    } else {
        return 0;
    }
}
//PORTA

void setPORTA_DIR(int Direction) {
    switch (Direction) {
        case OUTPUT:
            DDRA = 0xFF;
            break;
        case INPUT:
            DDRA = 0x00;
            break;
    }
}

void setPORTA__DIR(int Direction) {
    DDRA |= Direction;
}

void setPORTA(int state) {
    PORTA |= state;
}

void setPORTA_(int state){
    PORTA = state;
}

int readPORTA() {
    return PORTA;
}

//PINB

void setPORTB_PIN_DIR(int pinNum, int Direction) {
    switch (Direction) {
        case OUTPUT:
            DDRB |= (1 << pinNum);
            break;
        case INPUT:
            DDRB &= ~(1 << pinNum);
            break;

    }
}

void setPORTB_PIN(int pinNum, int state) {
    switch (state) {
        case ON:
            PORTB |= (1 << pinNum);
            break;
        case OFF:
            PORTB &= ~(1 << pinNum);
            break;
    }
}

int readPORTB_PIN(int pinNum) {
    if (PINB & (1 << pinNum)) {
        return 1;
    } else {
        return 0;
    }
}
//PORTB

void setPORTB_DIR(int Direction) {
    switch (Direction) {
        case OUTPUT:
            DDRB = 0xFF;
            break;
        case INPUT:
            DDRB = 0x00;
            break;
    }
}

void setPORTB__DIR(int Direction) {
    DDRB |= Direction;
}

void setPORTB(int state) {
    PORTB |= state;
}

void setPORTB_(int state){
    PORTB = state;
}

int readPORTB() {
    return PORTB;
}

//PINC

void setPORTC_PIN_DIR(int pinNum, int Direction) {
    switch (Direction) {
        case OUTPUT:
            DDRC |= (1 << pinNum);
            break;
        case INPUT:
            DDRC &= ~(1 << pinNum);
            break;

    }
}

void setPORTC_PIN(int pinNum, int state) {
    switch (state) {
        case ON:
            PORTC |= (1 << pinNum);
            break;
        case OFF:
            PORTC &= ~(1 << pinNum);
            break;
    }
}

int readPORTC_PIN(int pinNum) {
    if (PINC & (1 << pinNum)) {
        return 1;
    } else {
        return 0;
    }
}
//PORTC

void setPORTC_DIR(int Direction) {
    switch (Direction) {
        case OUTPUT:
            DDRC = 0xFF;
            break;
        case INPUT:
            DDRC = 0x00;
            break;
    }
}

void setPORTC__DIR(int Direction) {
    DDRC |= Direction;
}

void setPORTC(int state) {
    PORTC |= state;
}
void setPORTC_(int state){
    PORTC = state;
}

int readPORTC() {
    return PORTC;
}

//PIND

void setPORTD_PIN_DIR(int pinNum, int Direction) {
    switch (Direction) {
        case OUTPUT:
            DDRD |= (1 << pinNum);
            break;
        case INPUT:
            DDRD &= ~(1 << pinNum);
            break;

    }
}

void setPORTD_PIN(int pinNum, int state) {
    switch (state) {
        case ON:
            PORTD |= (1 << pinNum);
            break;
        case OFF:
            PORTD &= ~(1 << pinNum);
            break;
    }
}

int readPORTD_PIN(int pinNum) {
    if (PIND & (1 << pinNum)) {
        return 1;
    } else {
        return 0;
    }
}
//PORTD

void setPORTD_DIR(int Direction) {
    switch (Direction) {
        case OUTPUT:
            DDRD = 0xFF;
            break;
        case INPUT:
            DDRD = 0x00;
            break;
    }
}

void setPORTD__DIR(int Direction) {
    DDRD |= Direction;
}

void setPORTD(int state) {
    PORTD |= state;
}

void setPORTD_(int state){
    PORTD = state;
}

int readPORTD() {
    return PORTD;
}
//PINE
void setPORTE_PIN_DIR(int pinNum, int Direction) {
    switch (Direction) {
        case OUTPUT:
            DDRE |= (1 << pinNum);
            break;
        case INPUT:
            DDRE &= ~(1 << pinNum);
            break;

    }
}

void setPORTE_PIN(int pinNum, int state) {
    switch (state) {
        case ON:
            PORTE |= (1 << pinNum);
            break;
        case OFF:
            PORTE &= ~(1 << pinNum);
            break;
    }
}

int readPORTE_PIN(int pinNum) {
    if (PINE & (1 << pinNum)) {
        return 1;
    } else {
        return 0;
    }
}
//PORTE

void setPORTE_DIR(int Direction) {
    switch (Direction) {
        case OUTPUT:
            DDRE = 0xFF;
            break;
        case INPUT:
            DDRE = 0x00;
            break;
    }
}

void setPORTE__DIR(int Direction) {
    DDRE |= Direction;
}

void setPORTE(int state) {
    PORTE |= state;
}
void setPORTE_(int state){
    PORTE = state;
}

int readPORTE() {
    return PORTE;
}

//PINF
void setPORTF_PIN_DIR(int pinNum, int Direction) {
    switch (Direction) {
        case OUTPUT:
            DDRF |= (1 << pinNum);
            break;
        case INPUT:
            DDRF &= ~(1 << pinNum);
            break;

    }
}
void setPORTF_PIN(int pinNum, int state) {
    switch (state) {
        case ON:
            PORTF |= (1 << pinNum);
            break;
        case OFF:
            PORTF &= ~(1 << pinNum);
            break;
    }
}
int readPORTF_PIN(int pinNum) {
    if (PINF & (1 << pinNum)) {
        return 1;
    } else {
        return 0;
    }
}
//PORTF
void setPORTF_DIR(int Direction) {
    switch (Direction) {
        case OUTPUT:
            DDRF = 0xFF;
            break;
        case INPUT:
            DDRF = 0x00;
            break;
    }
}
void setPORTF__DIR(int Direction) {
    DDRF |= Direction;
}
void setPORTF(int state) {
    PORTF |= state;
}
void setPORTF_(int state){
    PORTF = state;
}
int readPORTF() {
    return PORTF;
}

//PING
void setPORTG_PIN_DIR(int pinNum, int Direction) {
    switch (Direction) {
        case OUTPUT:
            DDRG |= (1 << pinNum);
            break;
        case INPUT:
            DDRG &= ~(1 << pinNum);
            break;

    }
}
void setPORTG_PIN(int pinNum, int state) {
    switch (state) {
        case ON:
            PORTG |= (1 << pinNum);
            break;
        case OFF:
            PORTG &= ~(1 << pinNum);
            break;
    }
}
int readPORTG_PIN(int pinNum) {
    if (PING & (1 << pinNum)) {
        return 1;
    } else {
        return 0;
    }
}
//PORTG

void setPORTG_DIR(int Direction) {
    switch (Direction) {
        case OUTPUT:
            DDRG = 0xFF;
            break;
        case INPUT:
            DDRG = 0x00;
            break;
    }
}
void setPORTG__DIR(int Direction) {
    DDRG |= Direction;
}
void setPORTG(int state) {
    PORTG |= state;
}
void setPORTG_(int state){
    PORTG = state;
}
int readPORTG() {
    return PORTG;
}

//GENERAL

void setPORT_PIN_DIR(int DDR, int pinNumber, int Direction) {
    switch(DDR) {
        case 0:
             setPORTA_PIN_DIR(pinNumber, Direction);
             break;
        case 1:
             setPORTB_PIN_DIR(pinNumber, Direction);
             break;
        case 2:
             setPORTC_PIN_DIR(pinNumber, Direction);
             break;
        case 3:
            setPORTD_PIN_DIR(pinNumber,Direction);
            break;
        case 4:
            setPORTE_PIN_DIR(pinNumber,Direction);
            break;
        case 5:
            setPORTF_PIN_DIR(pinNumber,Direction);
            break;
        case 6:
            setPORTG_PIN_DIR(pinNumber,Direction);
             
    }

}
void setPORT_PIN(int port, int pinNumber, int state) {
    switch(port) {
        case 0:
            setPORTA_PIN(pinNumber, state);
            break;
        case 1:
            setPORTB_PIN(pinNumber, state);
            break;
        case 2:
            setPORTC_PIN(pinNumber, state);
            break;
        case 3:
            setPORTD_PIN(pinNumber, state);
            break;
        case 4:
            setPORTE_PIN(pinNumber, state);
            break;
        case 5:
            setPORTF_PIN(pinNumber, state);
            break;
        case 6:
            setPORTG_PIN(pinNumber, state);
    }
}
void setPORT_DIR(int DDR, int Direction) {
    switch(DDR) {
        case 0:
            setPORTA_DIR(Direction);
            break;
        case 1:
            setPORTB_DIR(Direction);
            break;
        case 2:
            setPORTC_DIR(Direction);
            break;
        case 3:
            setPORTD_DIR(Direction);
            break;
        case 4:
            setPORTD_DIR(Direction);
            break;
        case 5:
            setPORTF_DIR(Direction);
            break;
        case 6:
            setPORTG_DIR(Direction);
    }
}
void setPORT__DIR(int DDR, int Direction) {
    switch(DDR) {
        case 0:
            setPORTA__DIR(Direction);
            break;
        case 1:
            setPORTB__DIR(Direction);
            break;
        case 2:
            setPORTC__DIR(Direction);
            break;
        case 3:
            setPORTD__DIR(Direction);
            break;
        case 4:
            setPORTE__DIR(Direction);
            break;
        case 5:
            setPORTF__DIR(Direction);
        case 6:
            setPORTG__DIR(Direction);
    }

}
void setPORT(int port, int state) {
    switch(port) {
        case 0:
            setPORTA(state);
            break;
        case 1:
            setPORTB(state);
            break;
        case 2:
            setPORTC(state);
            break;
        case 3:
            setPORTD(state);
            break;
        case 4:
            setPORTE(state);
            break;
        case 5:
            setPORTF(state);
            break;
        case 6:
            setPORTG(state);
    } 


}
int readPORT_PIN(int port, int pinNumber) {
    switch(port) {
        case 0:
            return readPORTA_PIN(pinNumber);
            
        case 1:
            return readPORTB_PIN(pinNumber);
            
        case 2:
            return readPORTC_PIN(pinNumber);
            
        case 3:
            return readPORTD_PIN(pinNumber);
        case 4:
            return readPORTE_PIN(pinNumber);
        case 5:
            return readPORTF_PIN(pinNumber);
        case 6:
            return readPORTG_PIN(pinNumber);
            
    }
    return 0;
}
int readPORT(int port) {
    switch(port) {
        case 0:
            return readPORTA();
            
        case 1:
            return readPORTB();
            
        case 2:
            return readPORTC();
            
        case 3:
            return readPORTD();
        case 4:
            return readPORTE();
        case 5:
            return readPORTF();
        case 6:
            return readPORTG();
    }
    return 0;
}

