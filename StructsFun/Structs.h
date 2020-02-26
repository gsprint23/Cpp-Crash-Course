#ifndef STRUCTS_H
#define STRUCTS_H

// includes
#include <iostream>

// usings
using namespace std;

// constant global variables
// struct or class definitions
// a struct is a programmer defined collection of data members
// example: Fruit struct
// structs are DEFINED in header files
// note that no memory is allocated for a definition
struct Fruit {
	string type; // apple, banana, orange, etc.
	string color; // red, green, yellow, etc.
	double weight; // in ounces
};

// prototypes
void printFruit(const Fruit);
int compareFruits(Fruit *, Fruit *);

#endif
