#include <iostream>

using namespace std;

int main() {
	// Boolean is either true or false
	// Boolean expression (Boolean condition): an expression that evaluates to true or false
	bool isSunny = true;
	// true, false are reserved words
	// integer 0 is false
	// anything other than 0 is true
	// typically 1 is used for true
	
	int x = 3, y = 4, max = 100, min = 0;
	char ch = 'c';

	
	cout << isSunny << endl;
	
	
	isSunny = false;

	cout << isSunny << endl;
	
	cout << (x <= 0) << endl; // F
	cout << (x == y) << endl; // F
	cout << (max >= min) << endl; // T
	cout << (ch < 'a') << endl; // F
	cout << (max) << endl; // T
	cout << (min != 0) << endl; // F
	cout << (max == 99 + 1) << endl; // T
	cout << (min - 50 < 0) << endl; // T


	return 0;
}
