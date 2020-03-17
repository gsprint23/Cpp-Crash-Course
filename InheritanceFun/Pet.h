#ifndef PET_H
#define PET_H

#include <iostream>
#include "Animal.h"

using namespace std;

// access specifier before the name of the base class
// to specify how public attributes of the base class
// are inherited
// public attributes/member functions of Animal
// will be public in Pet
class Pet : public Animal {
	// we put Pet specific state and behavior
	private:
		string name; // e.g. fido, odin, buddy
	public:
		Pet();
		Pet(string);
		Pet(string, int, string);
		// redefine more specific behavior for toString()
		string toString();
};


#endif
