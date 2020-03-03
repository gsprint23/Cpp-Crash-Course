#ifndef BOOK_H
#define BOOK_H

#include <iostream>

using namespace std;

// OOP object oriented programming
// object is an instance of a class
// class is a collection of STATE and BEHAVIOR that completely describes something
// state: attributes (AKA member variables)
// behavior: member functions (AKA methods) that operate on the state of an object (attributes)
// classes are like struct definitions, with the addition of a few things...

// class definition should go in a header file of the same name
class Book {
	// access modifiers (specifiers) that define the visibility for a member
	// public and private
	// by default all members of a class are private
	// private only accessible within this class
	// public accessible anywhere
	private:
		// declare members of the Book class
		// attributes
		string title;
		string author;
		int * numPages; // points to dynamically allocated int
	public:
		// a constructor is a special member function that creates objects by initializing their attribute values
		// c++ always has a default constructor that is automatically called everytime a Book object is made... this default constructor does nothing
		// once we define our own constructor, we lose the default constructor...
		// we want to override the default constructor in order to properly initialize Books
		// constructors have no return type
		// we can overload constructors
		// 0 or more parameters
		// default value constructor (DVC) has no arguments
		Book(); // DVC prototype
		// explicit value constructor (EVC) accpets arguments to intialize attribute values to
		Book(string, string, int); // EVC prototype
		// same rules for function overloading apply to constructor overloading
		// destructor is a special member function that is called automatically when an object is about to be destroyed (AKA destructed AKA deallocated)
		// what should a destructor do?
		// free/release any resources (e.g. close files)
		// free/release any dynamically allocated memory 
		// no return type, no arguments
		// there is only one destructor
		~Book(); // destructor prototype
		
		
		// getters (AKA accessors)
		// member functions that get the values of private attributes
		string getTitle();
		string getAuthor();
		int getNumPages();
		// setters (AKA mutators)
		// that set values of private attributes
		void setTitle(string);
		void setAuthor(string);
		void setNumPages(int);
		
		void display();
};

#endif
