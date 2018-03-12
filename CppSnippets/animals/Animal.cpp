/*
 * Animal.cpp
 *
 *  Created on: 12.03.2018
 *      Author: markus
 */

#include "Animal.h"
#include <string>
#include <iostream>

/*
 * Getters and Setters
 */
int Animal::getAge() const {
	return age;
}

void Animal::setAge(int age) {
	this->age = age;
}

const std::string& Animal::getName() const {
	return name;
}

void Animal::setName(const std::string& name) {
	this->name = name;
}

Animal::Animal() {}
Animal::Animal(int animal_age, std::string animal_name) : name(animal_name), age(animal_age) {}

Animal::~Animal() {
	std::cout << "Animal " << name << " left" << std::endl;
}

