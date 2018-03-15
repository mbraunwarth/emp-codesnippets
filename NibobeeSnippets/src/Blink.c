/*
 * Blink.c
 *
 *  Created on: 12.03.2018
 *      Author: markus
 */

#include <nibobee/iodefs.h>
#include <nibobee/led.h>
#include <nibobee/delay.h>

int main_() {
	// Initialisierung
	led_init();

	/*
	 * Hier kommt der Code rein, den der Nibobee dann ausführen soll.
	 * while(1) sorgt für eine Dauerschleife
	 */
	while(1) {
		// Mache LED (rechts gelb) aus
		led_set(LED_R_YE, 0);
		// Mache LED (links gelb) an
		led_set(LED_L_YE, 1);
		delay(500);
		led_set(LED_L_YE, 0);
		led_set(LED_R_YE, 1);
		delay(500);
	}
}

