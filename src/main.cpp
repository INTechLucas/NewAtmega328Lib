//
// Created by elektron on 13/06/18.
//

#include <NewAtmega328Lib/NewAtmega328Lib.h>

PortB portb;

int main() {
    portb.setOutputMode(5);

    for(;;) {
        portb.setOn(5);
        _delay_ms(500);
        /*_delay_ms(100);*/
        portb.setOff(5);
        _delay_ms(100);
    }
}

//TODO
//Générer les erreurs dans portb si pin <0 ou >7
//Voir comment passer un nombre indéfini de paramètres, pour définir toutes les sorties d'un coup