#include <iostream>
#include <string>

using namespace std;

int main() {
	string word = "hello";
	string word2(word); // word2 stores a copy of the string in word
	string word3(word, 2); // "llo"
	string word4(word, 3, 2); // starting at index 3, get 2 characters of word "lo"
	string sentence = "";

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

	return 0;
}
