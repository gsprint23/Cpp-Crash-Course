#include "WildAnimal.h"

WildAnimal::WildAnimal() : Animal() {
	// WildAnimal() is going to first invoke Animal() DVC
	cout << "Hello from WildAnimal()" << endl;
	// initialize the WildAnimal specific attribute name
	ferociousNoise = "default noise";
}

WildAnimal::WildAnimal(string noiseParam) : Animal() {
	cout << "Hello from WildAnimal(string)" << endl;
	ferociousNoise = noiseParam;
}

WildAnimal::WildAnimal(string speciesParam, int ageParam, string noiseParam) : Animal(speciesParam, ageParam) {
	cout << "Hello from WildAnimal(string, int, string)" << endl;
	ferociousNoise = noiseParam;
}

// redefine more specific behavior for toString()
string WildAnimal::toString() {
	return Animal::toString() + " that goes " + ferociousNoise;
}
