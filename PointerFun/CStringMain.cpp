#include <iostream>
#include <cstring> 

using namespace std;


int main() {
	// pointer: a variable that stores as its contents the memory address of another variable
	// an array stores the memory address of the first element of the array
	
	// generally what is a string?
	// a string is a sequence of characters
	// "winter"
	// C++ we use the string type
	string season = "winter";
	cout << season << endl;
	// C we use C-strings
	// C-string is a null terminated char array
	// \0 is the null terminator
	// 0 1 2 3 4 5 6
	// w i n t e r \0
	// size + 1 for the \0
	char season2[] = {'w', 'i', 'n', 't', 'e', 'r', '\0'}; // C-string is mutable
	// can be changed
	cout << season2 << endl;
	season2[0] = 'W';
	cout << season2 << endl;
	const char * season3 = "winter"; // immutable
	cout << season3 << endl;
	
	char season4[20]; 
	// use functions for C-string in cstring
	strcpy(season4, season2);
	cout << season4 << endl;
	
	// "winter" < "fall"
	cout << strcmp(season3, "fall") << endl;
	// < 0 means arg1 is  before arg2
	// > 0 arg2 is before arg1
	// == 0 arg1 is the same as arg2
	
	cout << strlen(season2) << endl;
	cout << sizeof(season2) << endl;
	
	return 0;
}

