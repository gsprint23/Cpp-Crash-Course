#include <iostream>

using namespace std;

int main() {
	// let's fix our secret number to be [1, 10]
	int secretNum = 4; // this is the number the user is trying to guess
	int userGuess = 0; // this is the users guess
	
	
	cout << "Welcome to the great guess my number game! Guess an integer in [1, 10]: ";
	cin >> userGuess;
	
	//cout << "You entered " << userGuess << endl;
	// task: using an if statement, tell the user if they guessed the number correctly or not
	
	if (userGuess == secretNum) { 
		cout << "You guessed it! Nice work!" << endl;
	}
	else {
		cout << "You are wrong, but I'll give you a hint..." << endl;
		if (userGuess < secretNum) { 
			cout << "You are too low" << endl;
		}
		if (userGuess > secretNum) {
			cout << "You are too high" << endl;
		}
	}

    // here
	return 0;
}
