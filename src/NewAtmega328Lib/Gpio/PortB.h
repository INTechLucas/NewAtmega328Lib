//
// Created by elektron on 13/06/18.
//

#ifndef NEWATMEGA328LIB_PORTB_H
#define NEWATMEGA328LIB_PORTB_H

#include <avr/io.h>

#define OUTPUT 1
#define INPUT 0

class PortB {
public:
    PortB();
    void setOn(int pin);
    void setOff(int pin);

    void setOutputMode(int pin);
};


#endif //NEWATMEGA328LIB_PORTB_H
