/*
 * Strings.c
 *
 *  Created on: 12.03.2018
 *      Author: markus
 */

#include <string.h>

int main_strings() {

	// world speichert den String in der Form {'W', 'o', 'r', 'l', 'd', '\0'}
	char world[] = "World";
	char hello[] = "Hello";
	char str[20];

	// Strings kopieren - strcpy(DEST, SOURCE)
	// Achtung: hier muss aufgepasst werden, damit der verfügbare Speicher
	// des Zielstrings nicht überschritten wird
	strcpy(str, hello);
	printf("%s\n", str);

	// Länge von Strings
	int len = strlen(hello);
	printf("Laenge: %d\n", len);

	printf("%s\n", world);
}

