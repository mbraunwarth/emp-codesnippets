/*
 * Strings.c
 *
 *  Created on: 12.03.2018
 *      Author: markus
 */

#include <string.h>

int main(int argc, char **argv) {
	char hello[] = "Hello";
	char world[] = "World";
	char str[20];

	// Strings kopieren - strcpy(DEST, SOURCE)
	strcpy(str, hello);
	printf("%s\n", str);

	// Strings konkatenieren - strcat(FIRST, SECOND)
	strcat(hello, world);
	printf("%s\n", hello);

	// Länge von Strings
	int len = strlen(hello);
	printf("Laenge: %d\n", len);
}

