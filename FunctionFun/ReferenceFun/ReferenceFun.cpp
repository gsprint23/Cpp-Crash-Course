#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;

int rollDie();
void displayRollResult(int);
// write a function that rolls two dice
// use reference variables to "return" the two dice results
void rollTwoDice(int&, int&);
void writeRollResults(ofstream&, int, int);

int main() {
	int roll = 0, roll2 = 0;
	ofstream outputFile;
	
	srand(time(0));
	
	roll = rollDie();
	displayRollResult(roll);
	
	// roll1 in rollTwoDice() is a reference for roll in main()
	// roll2 in rollTwoDice() is a reference for roll2 in main()
	rollTwoDice(roll, roll2); 
	displayRollResult(roll);
	displayRollResult(roll2);
	
	outputFile.open("roll_results.txt");
	writeRollResults(outputFile, roll, roll2);
	outputFile.close();

	return 0;
}

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
