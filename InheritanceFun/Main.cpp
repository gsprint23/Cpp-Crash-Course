#include "Animal.h"
#include "Pet.h"

int main() {
	Animal a; // DV 
	cout << a.toString() << endl;
	Animal d("dog", 4); // EVC
	cout << d.toString() << endl;
	
	// recall... composition is a "has-a" relationship between two classes
	// Circle has a Point
	// inheritance is a "is-a" relationship between two classes
	// inheritance a relationship between two classes where one class includes ("inherits") the state AND the behavior of the the other class
	// state: attributes (AKA member variables)
	// behavior: member functions (constructors and destructor are not inherited)
	// example
	// Animal is going to be a base class
	// base class AKA parent class AKA super class
	// Pet is going to be a derived class
	// derived class AKA child class AKA sub class
	// then we will come back to main and make a few Pet objects and exercise the inheritance hierarchy
	
	Pet p1; // DVC
	cout << p1.toString() << endl;
	Pet myPet("Dog", 7, "Odin"); // EVC
	cout << myPet.toString() << endl;
	
	// let's say we have a pointer to an Animal
	Animal * aPtr = &a;
	cout << aPtr->toString() << endl;
	aPtr = &myPet;
	// example of static binding
	// at compile time the compiler figures out
	// which toString() to execute (Animal toString or the Pet toString())
	cout << aPtr->toString() << endl;
	Pet * pPtr = &myPet;
	cout << pPtr->toString() << endl;
	// dynamic binding
	// figure out at runtime which toString() to execute
	// need to use the virtual keyword... to do this
	
	return 0;
}
