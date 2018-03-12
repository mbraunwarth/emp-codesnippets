/*
 * Dog.cpp
 *
 *  Created on: 12.03.2018
 *      Author: markus
 */

#include "Dog.h"



// Default Constructor
Dog::Dog() {
	this->age = 0;
	this->name = "";
}

// Constructor with parameters
Dog::Dog(int age, std::string name) {
	this->age = age;
	this->name = name;
}


Dog::~Dog() {
	// TODO Auto-generated destructor stub
}

