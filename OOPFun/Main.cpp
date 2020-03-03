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
	Book hp3; // invokes DVC
	hp3.setTitle("Prisoner of Azkaban");
	Book * bookPtr = &hp3;
	// can use ->
	bookPtr->display();
	
	Book hp4("Goblet of Fire", "JKR", 450); // invokes EVC
	hp4.display();
	
	// dyn allocated a Book if we wanted to...
	Book * hp5Ptr = new Book; // invokes DVC
	// the book object that hp5Ptr points to is in the heap!! not the stack
	hp5Ptr->setTitle("Order of the Phoenix");
	hp5Ptr->display();
	delete hp5Ptr; // invokes destructor

	return 0;
}
