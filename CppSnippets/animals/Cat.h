/*
 * Cat.h
 *
 *  Created on: 12.03.2018
 *      Author: markus
 */

#ifndef CAT_H_
#define CAT_H_

#include "Animal.h"

// Jede Katze ist auch ein Tier, durch die Vererbung wird bei erstellen und
// zerstören einer Cat Instanz nicht nur der zugehörige Konstruktor/Destruktor
// von Cat sondern auch der von Animal ausgeführt
class Cat : public Animal {
public:
	Cat();
	~Cat();
};

#endif /* CAT_H_ */
