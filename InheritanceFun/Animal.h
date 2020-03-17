#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
using namespace std;

class Animal {
	// access specifiers (AKA modifiers)
	// private: accessible within this class only
	// public: accessibly anywhere
	// protected: accessibly within this class and its subclasses
	protected:
		string species;
		int age;
	public:
		Animal();
		Animal(string, int);
		virtual string toString(); // virtual means use dynamic binding to figure out which toString() to execute at run time (base class toString() or the derived class toString())
};

#endif
