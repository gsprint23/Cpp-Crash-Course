#include <iostream>

using namespace std;

int main() {
	// input validation loop
	// we want to prompt the user for a positive number
	// we want to ensure they enter a positive number
	// reprompting until they enter a positive number
	
	int num = 0, i = 0;
	bool receivedPositiveNumber = false;
	
	do {
		cout << "Please enter a positive integer (> 0): ";
		cin >> num;
		
		if (num > 0) {
			cout << "Great thanks!" << endl;
			// progress
			receivedPositiveNumber = true;
		}
		else { // num <= 0
			cout << num << " is not > 0. Please try again." << endl;
		}
	
	} while (!receivedPositiveNumber);
	// to get here, we have to have a positive number in num
	
	// task: re-write the above input validation loop without using a do-while
	receivedPositiveNumber = false;
	while (!receivedPositiveNumber) {
		cout << "Please enter a positive integer (> 0): ";
		cin >> num;
		
		if (num > 0) {
			cout << "Great thanks!" << endl;
			// progress
			receivedPositiveNumber = true;
		}
		else { // num <= 0
			cout << num << " is not > 0. Please try again." << endl;
		}
	}
	
	// task: re-write our print stars to use a do while loop 
	num = 5;
	do {
		cout << "*";
		i++;
	} while (i < num);
	cout << endl;
	
	return 0;
}
