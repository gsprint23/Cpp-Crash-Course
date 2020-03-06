#include "Book.h"

int main() {
	// make Book object
	// actually memory is allocated when an object is created
	Book hp1; // invokes DVC
	hp1.setTitle("Sorcerer's Stone");
	hp1.setAuthor("JK Rowling");
	hp1.setNumPages(202);
	
	cout << hp1.getTitle() << endl;
	
	hp1.display(); // hp1 is an "invoking" object... so in display() it is hp1's title, author, numPages that are accessed
	// this is the syntax for calling a member function
	// <object>.<member function>()
	
	Book hp2; // invokes DVC
	hp2.setTitle("Chamber of Secrets");
	hp2.setAuthor("JKR");
	hp2.setNumPages(300);
	hp2.display();
	
	// other member functions
	// myString.size() myString.at(0)
	
	// we can have pointers to objects
	Book hp3 = hp2; // copy of hp2... invokes the copy constructor if one exists, if one doesn't exist then performs memberwise copy assignment
	hp3.setTitle("Prisoner of Azkaban");
	Book * bookPtr = &hp3;
	// can use ->
	bookPtr->display();
	// PROBLEM when numPages is dyn allocated
	// why? the mem address of numPages in hp2 is copied to numPages in hp3
	// hp3 is freed before hp2
	// so we get a double free detected when we destruct hp2 and call delete numPages
	// SOLUTION? define a copy constructor
	// where we allocate new member for numPages in hp3
	
	Book hp4("Goblet of Fire", "JKR", 450); // invokes EVC
	hp4.display();
	
	// 2 distinct implementations of "dyn mem alloc and objects"
	// 1) dyn allocate a Book object
	Book * hp5Ptr = new Book("Order of the Phoenix", "JKR", 600); // EVC
	hp5Ptr->display();
	delete hp5Ptr;
	// 2) dyn allocate attributes of a Book object
	
	// rule of three
	// if you define any of the following, then you should define all three
	// 1) destructor
	// 2) copy constructor
	// Book hp3 = hp2;
	// 3) memberwise copy assignment operator (operator overloading)
	hp3 = hp2;

	return 0;
}
