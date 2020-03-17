#include "Pet.h"

Pet::Pet() : Animal() {
	// Pet() is going to first invoke Animal() DVC
	cout << "Hello from Pet()" << endl;
	// initialize the Pet specific attribute name
	name = "default name";
}

Pet::Pet(string nameParam) : Animal() {
	cout << "Hello from Pet(string)" << endl;
	name = nameParam;
}

Pet::Pet(string speciesParam, int ageParam, string nameParam) : Animal(speciesParam, ageParam) {
	cout << "Hello from Pet(string, int, string)" << endl;
	name = nameParam;
}

// redefine more specific behavior for toString()
string Pet::toString() {
	return Animal::toString() + " named " + name;
}
