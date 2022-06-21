#include "DiceFunctions.h"



void writeRollResults(ofstream& outputFile, int roll1, int roll2) {
	outputFile << "You rolled a " << roll1 << " and a " << roll2 << "!" << endl;
}

void rollTwoDice(int& roll1, int& roll2) {
	//roll1 = rollDie();
	//roll2 = rollDie();
	roll1 = 100;
	roll2 = 500;
	// note that there is no return statement
	// but main() will be able to use these two roll results
	// via the reference variables
	// pass by reference
}

int rollDie() {
	int roll = 0;
	
	roll = rand() % 6 + 1;
	return roll;
}

void displayRollResult(int result) {
	cout << "You rolled a " << result << "!" << endl;
}
