/*
 * Switches.cpp
 *
 *  Created on: 13.03.2018
 *      Author: markus
 */

#include <iostream>

int main() {
	int n;
	// cin nimmt Nutzereingabe auf, durch >> Operator wird die Eingabe in
	// n gespeichert
	std::cin >> n;

	switch (n) {
		case 0:
			std::cout << "Exiting" << std::endl;
			break;
		default:
			std::cout << "You pressed " << n << std::endl;
			break;
	}
}


