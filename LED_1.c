/*
 * File:   avr-main.c
 * Author: MIGUEL
 *
 * Created on 22 de abril de 2021, 06:35 PM
 */


#include <avr/io.h>
#include <util/delay.h>

int main(void) {
    
    while (1) {
        
        DDRB =  0b10101000; 
        PORTB = 0b10101000; 
        _delay_ms(500);
        
        DDRB =  0b00000000; 
        PORTB = 0b00000000; 
        _delay_ms(500);
    }
}
