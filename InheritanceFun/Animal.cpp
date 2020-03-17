#include "Animal.h"

Animal::Animal() {
	cout << "Hello from Animal()" << endl;
	species = "default species";
	age = 0;
}

Animal::Animal(string speciesParam, int ageParam) {
	cout << "Hello from Animal(string, int)" << endl;
	species = speciesParam;
	age = ageParam;
}

// returns a string representation of the object
string Animal::toString() {
	return "a " + to_string(age) + "-year old " + species;
}
