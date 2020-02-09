#include <iostream>
#include <cstring>

using namespace std;

void printArray(char * arr, int size);

// argc stores the count of how many args
// plus one for the name program
// argv is an array of C-strings
// each argument is stored in argv
// as a C-string
int main(int argc, char * argv[]) {
	// pointer: a variable that stores as its contents the memory address of another variable
	// an array stores the memory address of the first element of the array
	
	// string: is a sequence of characters
	// in C++ we use the string type
	string name = "gina"; // C++ string
	// C-string: an array of chars that is null terminated
	// the last character in the array is \0
	// store "hello" in a C-string
	// number of chars + 1 (for \0) is the size of your char array to store this C-string
	
	// reading the command line args
	cout << "argc: " << argc << endl;
	cout << "argv[0]: " << argv[0] << endl;
	int i;
	for (i = 0; i < argc; i++) {
		cout << "i: " << i << endl;
		cout << "argv[i]: " << argv[i] << endl;
		printArray(argv[i], strlen(argv[i]));
	}
	
	return 0;
}

void printArray(char * arr, int size) {
	int i;
	for (i = 0; i < size; i++) {
		cout << *(arr + i) << " "; 
	}
	cout << endl;
}

