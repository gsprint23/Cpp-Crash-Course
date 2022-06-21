#include "DiceFunctions.h"

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


