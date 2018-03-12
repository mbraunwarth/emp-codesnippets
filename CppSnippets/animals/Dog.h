/*
 * Dog.h
 *
 *  Created on: 12.03.2018
 *      Author: markus
 */

#ifndef DOG_H_
#define DOG_H_

#include <string>
#include "Animal.h"

class Dog : public Animal {
public:
	// Con/Destructors
	Dog();
	Dog(int age, std::string name);
	~Dog();
};

#endif /* DOG_H_ */
