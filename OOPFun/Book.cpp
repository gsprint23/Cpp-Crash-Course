#include "Book.h"

// DVC
Book::Book() {
	// initialize attributes to logical zero values
	title = "DEFAULT TITLE";
	author = "DEFAULT AUTHOR";
	numPages = new int;
	*numPages = 0;
}

// EVC
Book::Book(string t, string a, int n) {
	title = t;
	author = a;
	numPages = new int;
	*numPages = n;
}

// copy constructor
Book::Book(const Book& otherBook) {
	cout << "Hello from copy constructor" << endl;
	title = otherBook.title;
	author = otherBook.author;
	// need to allocate this new book's own memory for numPages
	numPages = new int;
	*numPages = *(otherBook.numPages);
}

Book::~Book() {
	cout << "Hello from Book destructor... title: " << title << endl;
	// should release resources like dyn alloc mem
	delete numPages;
}

// :: scope resolution operator
// increases the scope of getTitle to include the Book class
string Book::getTitle() {
	return title;
}

string Book::getAuthor() {
	return author;
}
int Book::getNumPages(){
	return *numPages;
}

void Book::setTitle(string newTitle) {
	title = newTitle;
}

void Book::setAuthor(string newAuthor) {
	author = newAuthor;
}

void Book::setNumPages(int newNumPages) {
	*numPages = newNumPages;
}

void Book::display() {
	// need an object of type Book in order to invoke a member function
	// inside that member function body, we can access the state of the invoking object
	// what ever object is before the .display()
	cout << "Title: " << title << endl;
	cout << "Author: " << author << endl;
	cout << "Number of pages: " << *numPages << endl;
}

const Book & Book::operator=(const Book & right) {
	// hp3 = hp2;
	// hp2 is the right side of the =
	// hp3 is the left side of the = 
	// hp2 is the parameter
	// hp3 is the inovking object
	// this is a reserved word that is a pointer to the invoking object
	// this is passed as a hidden argument to all non-static member function
	// good practice to check that we aren't doing self assignment
	// hp3 = hp3
	if (this != &right) {
		title = right.title;
		author = right.author;
		*numPages = *(right.numPages); // copy integers, not addresses
		// copy the indirect values, not the pointers (no addresses are copied)!
	}
	// think about this
	// hp3 = hp2 = hp1;
	return *this;
}

