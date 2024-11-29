#include <stdio.h>  
#include <math.h>  
#include <stdlib.h>  
#include "itoa.h"

char* itoa(int num, char* buffer, int basee) {
    int current = 0;
    if (num == 0) {
        buffer[current++] = '0';
        buffer[current] = '\0';
        return buffer;
    }
    int num_digits = 0;
    if (num < 0) {
        if (basee == 10) {
            num_digits++;
            buffer[current] = '-';
            current++;
            num *= -1;
        }
        else
            return NULL;
    }
    num_digits += (int) floor(log(num) / log(basee)) + 1;
    while (current < num_digits) {
        int base_val = (int) pow(basee, num_digits - 1 - current);
        int num_val = num / base_val;
        char value = num_val + '0';
        buffer[current] = value;
        current++;
        num -= base_val * num_val;
    }
    buffer[current] = '\0';
    return buffer;
}
