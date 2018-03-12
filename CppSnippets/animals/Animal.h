/*
 * Animal.h
 *
 *  Created on: 12.03.2018
 *      Author: markus
 */

#ifndef ANIMAL_H_
#define ANIMAL_H_

#include <string>

class Animal {
protected:
	int age;
	std::string name;

public:
	Animal();
	virtual ~Animal();

	/*
	 * Getters and Setters
	 */
	int getAge() const;
	void setAge(int age);
	const std::string& getName() const;
	void setName(const std::string& name);
};

#endif /* ANIMAL_H_ */
