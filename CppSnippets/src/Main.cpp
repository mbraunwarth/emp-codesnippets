/*
 * Main.cpp
 *
 *  Created on: 12.03.2018
 *      Author: markus
 */

#include "../animals/Animal.h"
#include "../animals/Dog.h"
#include "../animals/Cat.h"
#include <string>
#include <iostream>


int main(int argc, char **argv) {
	// Stack initialisierung, buff wird zerstört wenn der Block endet
	Dog buff(5, "Buffalo");
	// Heap initialisierung (benötigt Pointer Variable)
	// fluffy wird zerstört wenn der Block endet
	Dog* fluffy = new Dog(7, "Fluffy");


	Cat* cat = new Cat();
	cat->setName("Mauzi");
	std::cout << "Cat is called " << cat->getName() << std::endl;

	delete cat;
	delete fluffy;
}
