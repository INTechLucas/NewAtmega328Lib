//
// Created by elektron on 13/06/18.
//

//#include <Arduino.h>

#include <util/delay.h>
#include "Gpio/PortB.h"

PortB portb;

int main() {
    portb.setModeOutput(5);

    for(;;) {
        portb.setOff(5);
        _delay_ms(100);
        portb.setOn(5);
        _delay_ms(100);
    }
}