//
// Created by elektron on 13/06/18.
//

#include "PortB.h"

PortB::PortB() {

}

void PortB::setOutputMode(int pin){
    DDRB = DDRB | (1u << pin);
}

void PortB::setOn(int pin){
    PORTB = PORTB | (1u << pin);
}

void PortB::setOff(int pin){
    PORTB = PORTB & ~(1u << pin);
}