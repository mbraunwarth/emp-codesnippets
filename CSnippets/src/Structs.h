/*
 * Structs.h
 *
 *  Created on: 12.03.2018
 *      Author: markus
 */

#ifndef STRUCTS_H_
#define STRUCTS_H_

#include <stdio.h>

// Struktur wird in der Header Datei definiert..
struct Cat {
	char* name;
	int age;
};

// ..und ihr wird ein Alias zugewiesen
typedef struct Cat cat_t;

// Katze die sich setzen soll wird per Pointer übergeben
void sit(cat_t*);

int cat_age(cat_t*);

#endif /* STRUCTS_H_ */
