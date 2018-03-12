/*
 * Structs.c
 *
 *  Created on: 12.03.2018
 *      Author: markus
 */

#include "Structs.h"
#include <stdio.h>
#include <string.h>


// Implementation der sit Funktion, definiert in Structs.h
void sit(cat_t* cat) {
	// cat->name kann auch direkt genutzt werden
	char* n = cat->name;
	printf("%s\n sit.", n);
	printf("Sit down yourself!!\n");
}

int cat_age(cat_t* cat){
	return cat->age;
}
