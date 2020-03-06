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

const Book Book::operator=(const Book &right) {
	cout << "Hello from operator=" << endl;
	if (this != &right) {
		title = right.title;
		author = right.author;
		*numPages = *(right.numPages);
	}
	return *this;
}
