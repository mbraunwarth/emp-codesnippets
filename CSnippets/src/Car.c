/*
 * Car.c
 *
 *  Created on: 15.03.2018
 *      Author: markus
 */


#include "Car.h"
#include <stdio.h>
#include <string.h>

int main_car() {
	car_t car;
	car_t* carptr = &car;
	strcpy(carptr->manufacturer, "Ford");

	printf("Manufacturer is %s\n", car.manufacturer);
}


