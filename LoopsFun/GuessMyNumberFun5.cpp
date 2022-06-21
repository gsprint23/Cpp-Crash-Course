#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	// let's fix our secret number to be [1, 10]
	int secretNum = 0; // this is the number the user is trying to guess
	int userGuess = 0; // this is the users guess
	bool guessedCorrectly = false; // flag variable
	
	// only seed the random number generator one time
	srand(time(0)); // always right after variable declarations in main()
	secretNum = rand() % 10 + 1;
	
	while (!guessedCorrectly) {
		cout << "Welcome to the great guess my number game! Guess an integer in [1, 10]: ";
		cin >> userGuess;
		
		//cout << "You entered " << userGuess << endl;
		// task: using an if statement, tell the user if they guessed the number correctly or not
		// alternatives (BCs) are tested from top to bottom
		// as soon as one evaluates to true, that body is executed and no other BCs are tested
		// like skipping to the next executable statement after the multiple alternative if statement
		// each body is mutually exclusive
		// you can have as many else ifs as you want
		// only one if and it has to be first
		// only one else, it is optional, has to be the last body, at the end of the multiple alternative if statement
		
		if (userGuess == secretNum) { // BC1
			cout << "You guessed it! Nice work!" << endl;
			guessedCorrectly = true;
		}
		else if (userGuess < secretNum) { // BC2 userGuess != secretNum (complement of BC1)
			cout << "You are too low" << endl;
		}
		else { // (userGuess != secretNum) && (userGuess >= secretNum)
			cout << "You are too high" << endl;
		}
	}

    // here
	return 0;
}
