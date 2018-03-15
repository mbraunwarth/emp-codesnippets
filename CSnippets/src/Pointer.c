/*
 * Main.c
 *
 *  Created on: 12.03.2018
 *      Author: markus
 */

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* Pointer als Rückgabewert */
int * randomize() {
	/* Statische Variablen bleiben auch erhalten wenn die Funktion aus dem Stack
	 * fliegt (Globaler Speicher, andernfalls wäre die Variable selbst
	 * nicht mehr da sobald die Funktion abgeschlossen ist
	 */
	static int random;

	/* Seed setzen, damit rand Funktion immer unterschiedliche Werte ausgibt
	 * NULL ist der nullpointer in C und ist äquivalent zum C++ nullptr zu nutzen
	 */
	srand(time(NULL));

	// Zufallszahl erzeugen
	random = rand();

	// Adresse übergeben statt den Wert der Variable
	return &random;
}

int main_pointer() {
	// Pointer zu einer Integer Variable wird erstellt und zugewiesen
	int* p;
	p = randomize();

	// *p dereferenziert den Pointer, d.h. es wird der Wert der Variable erwartet
	printf("Zufallszahl %d", *p);
	return 0;
}

