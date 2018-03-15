/*
 * Strings.c
 *
 *  Created on: 12.03.2018
 *      Author: markus
 */

#include <string.h>

int main_strings(int argc, char **argv) {

	char world[] = "World World World World World ";
	char hello[] = "Hello";
	char str[20];

	// Strings kopieren - strcpy(DEST, SOURCE)
	strcpy(str, hello);
	printf("%s\n", str);

	// Strings konkatenieren - strcat(FIRST, SECOND)
	strcat(str, world);
	printf("%s\n", str);

	// Länge von Strings
	int len = strlen(str);
	printf("Laenge: %d\n", len);

	printf("%s\n", world);
}

