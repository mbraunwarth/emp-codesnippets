/*
 * Main.c
 *
 *  Created on: 12.03.2018
 *      Author: markus
 */

#include "Structs.h"
#include <stdio.h>
#include <stdlib.h>

/*
 * Heap wird in C nur durch einen 'malloc()' Aufruf beansprucht
 */

void structs_in_heap() {
	/*
	 * 'cat' ist jetzt eine Pointer Variable im Stack vom Typ cat_t.
	 * Sie verweist auf eine Adresse im Heap, die genau so groß ist, dass
	 * die Struktur cat_t dort hinein passt.
	 *
	 * 'sizeof(TYP)' gibt die Größe des Datentypes zurück
	 * 'malloc(SIZE)' beansprucht genau SIZE Bytes Speicher im Heap und gibt void* (void pointer) zurück
	 * 	daher wird "gecastet"
	 */
	cat_t* cat = (cat_t*) malloc(sizeof(cat_t));

	cat->age = 6;

	printf("Cats age is %d\n", cat_age(cat));

	free(cat->age);
	free(cat->name);
	free(cat);

	if(cat == NULL)
		printf("Cat is dead :'( \n");
	else
		printf("Still %d\n", cat_age(cat));

}

void structs_in_stack() {
	cat_t cat;
	cat_t* catptr = &cat;

	cat.age = 5;
	catptr->name = "Mieze";

	sit(catptr);
}

int main_() {

	//structs_in_stack();
	structs_in_heap();

}
