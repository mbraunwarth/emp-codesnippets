/*
 * Drive.c
 *
 *  Created on: 13.03.2018
 *      Author: markus
 */

#include <nibobee/iodefs.h>
#include <nibobee/motpwm.h>
#include <nibobee/sens.h>

int main2() {
	// Initialisierung
	motpwm_init();
	sens_init();

	// Variablendeklarierung
	int16_t speed_l = 0;
	int16_t speed_r = 0;

	while(1) {
		// Interrupts einschalten
		enable_interrupts();

		/*
		 *  sens_getX liefert
		 *  	- 1, wenn der Fühler nach innen gedrückt wird
		 *  	- 0, wenn der Fühler nicht betätigt ist
		 *  	- -1, wenn der Fühler nach außen gedrückt wird
		 */

		// Linken Sensor abfragen
		switch (sens_getLeft()) {
	        case  1: speed_l =  500; break;
	        case  0: speed_l =    0; break;
	        case -1: speed_l = -500; break;
		}

		// Rechten Sensor abfragen
		switch (sens_getRight()) {
			case  1: speed_r =  500; break;
			case  0: speed_r =    0; break;
			case -1: speed_r = -500; break;
		}

		// Motor mit Geschwindigkeit versorgen
		motpwm_setLeft(speed_l);
		motpwm_setRight(speed_r);
	}
}


