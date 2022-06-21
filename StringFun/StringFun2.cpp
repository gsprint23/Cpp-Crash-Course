#include <iostream>
#include <string>

using namespace std;

int main() {
	string word = "hello";
	string word2(word); // word2 stores a copy of the string in word
	string word3(word, 2); // "llo"
	string word4(word, 3, 2); // starting at index 3, get 2 characters of word "lo"
	string sentence = "";
	string course = "CPSC 121";
	
	int retVal = 0;
	
	cout << word << endl;
	cout << word2 << endl;
	cout << word3 << endl;
	cout << word4 << endl;
	
	word2.at(0) = 'H';
	cout << word << endl;
	cout << word2 << endl;
	
	// relational operators to compare strings
	// >, <, >=, <=, ==, !=
	// strings are compared character by character based on their ASCII codes
	// code for 'A' is 65
	// code for 'a' is 97
	cout << (word > "Hello") << endl;
	cout << (word < "Hello") << endl;
	cout << (word == "Hello") << endl;
	cout << (word != "Hello") << endl;
	
	// concatenation operator +
	// adds two strings together by joining the end of the first string to the beginning of the second string
	sentence = word + ", there";
	cout << sentence << endl;
	
	// shorthand assignment operator using +
	// += which is more commonly as the append operator
	sentence += "!!"; // sentence = sentence + "!!";
	cout << sentence << endl;
	
	// the subscript operator [ ]
	// same as with arrays and vectors
	cout << sentence[0] << endl;
	
	// STRING MEMBER FUNCTIONS
	// recall: a member function is called via
	// <name of a variable>.<name of a function>();
	// we know about size(), length(), and at()
	// time for some new ones!
	
	// substr() returns a string that is a substring of a larger string
	// string substr(int startIndex); returns a substring from [startIndex, end of the string]
	// 01234567
	// CPSC 121
	cout << course.substr(2) << endl;
	// string substr(int startIndex, int numChars);
	cout << course.substr(2, 2) << endl;
	// task: print the "12" of course
	cout << course.substr(5, 2) << endl;
	
	// find() returns an integer representing where in a string a target string (or a target character) is located
	// int find(char target);
	// int find(string target);
	// the returned integer is the index location of target
	// however, find() returns a special value string::npos when the target is not found
	cout << "string::npos: " << string::npos << endl;
	cout << course.find('2') << endl;
	cout << course.find(" 1") << endl;
	cout << course.find('Z') << endl;
	retVal = course.find('Z');
	// check for npos
	if (retVal == string::npos) {
		cout << "Z was not found in the string." << endl;
	}
	// task: search for "cpsc" in course
	cout << course.find("cpsc") << endl;
	
	// replace() replaces characters in a string with another string
	// string replace(int startIndex, int numChars, string newChars);
	// newChars will replace the chars at indices [numChars, numChars + newChars)
	// replace the CPSC with cpsc 
	course = course.replace(0, 4, "cpsc");
	cout << course << endl;
	// task: replace the numbers 121 with "!!"
	course = course.replace(5, 3, "!!");
	cout << course << endl;
	

	return 0;
}
