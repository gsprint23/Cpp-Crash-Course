#include "Structs.h"

int main() {
	// create Fruit variables
	// now memory will be allocated
	Fruit myFruit = {"kiwi", "brown", 2.5};
	
	//cout << myFruit << endl;
	// can't use << and Fruit until we overload the << to work with Fruits
	// we can acess individual members using the .
	// . direction member selection operator
	cout << myFruit.type << endl;
	// define a function that accepts a Fruit and prints out with labels the values of all the Fruit members
	printFruit(myFruit);
	
	// pointers to structs
	Fruit * myFruitPtr = &myFruit;
	cout << (*myFruitPtr).type << endl;
	
	// -> arrow operator
	// indirect member selection operator
	// dereference the pointer and select from the struct it points to
	cout << myFruitPtr->type << endl;
	
	// structs are pass by value
	// struct assignment is okay... makes a copy
	Fruit myOtherFruit = myFruit; // copy
	myOtherFruit.type = "apple";
	printFruit(myFruit);
	printFruit(myOtherFruit);
	
	// how do we compare fruits?
	Fruit myFruitArr[10]; // fill them up 
	// sort myFruitArr...
	// relational operators < > == != <= >=
	// define a function that takes two Fruits and returns
	// -1 if the first fruit is "<" the second fruit
	// 1 if the second fruit is "<" the first fruit
	// 0 if the fruit stores the same values
	cout << compareFruits(&myFruit, &myOtherFruit) << endl;
	myOtherFruit.type = "kiwi";
	cout << compareFruits(&myFruit, &myOtherFruit) << endl;
	
	Fruit * myDynFruitArr = new Fruit[20];
	// be sure to zero out memory
	// be sure to free this memory

	return 0;
}
