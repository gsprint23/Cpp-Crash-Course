#include "Book.h"

// DVC
Book::Book() {
	// initialize attributes to logical zero values
	title = "DEFAULT TITLE";
	author = "DEFAULT AUTHOR";
	numPages = new int; // dyn allocated, must remember to free in the destructor!!
	*numPages = 0;
}

// EVC
Book::Book(string t, string a, int n) {
	title = t;
	author = a;
	numPages = new int;
	*numPages = n; // dyn allocated, must remeber to free in the destructor!!
}

Book::~Book() {
	// a stack is a data structure that operates in a LIFO fashion (last in first out)
	cout << "Hello from Book destructor... title: " << title << endl;
	// should release resources like dyn alloc mem
	if (numPages != NULL) {
		delete numPages;
		numPages = NULL;
	}
	
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
