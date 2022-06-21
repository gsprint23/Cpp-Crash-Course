#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	// let's fix our secret number to be [1, 10]
	int secretNum = 0; // this is the number the user is trying to guess
	int userGuess = 0; // this is the users guess
	bool guessedCorrectly = false; // flag variable
	char userChoice = 'y';
	
	// only seed the random number generator one time
	srand(time(0)); // always right after variable declarations in main()
	
	do {
		secretNum = rand() % 10 + 1;
		guessedCorrectly = false;
		while (!guessedCorrectly) {
			cout << "Welcome to the great guess my number game! Guess an integer in [1, 10]: ";
			cin >> userGuess;
			
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
		// the game is over, ask if they want to play again
		cout << "Do you want to play again (y or n): ";
		cin >> userChoice;
		
	} while(userChoice != 'n');

    // here
	return 0;
}
