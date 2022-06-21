#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int SIX_SIDES = 6;
const int TEN_SIDES = 10;

// default argument: when an argument is not specified for numSides, it will be 6
int rollDie(int = SIX_SIDES);
void displayRollResult(int);
// overload displayRollResult() so it accepts a 2nd argument, the number of sides of the die rolled
void displayRollResult(int, int);

int main() {
	int roll = 0;
	
	srand(time(0));
	
	roll = rollDie();
	displayRollResult(roll);
	
	roll = rollDie(TEN_SIDES);
	displayRollResult(roll);
	
	roll = rollDie(TEN_SIDES);
	displayRollResult(roll, TEN_SIDES);


	return 0;
}

void displayRollResult(int result, int numSides) {
	cout << "You just rolled a " << numSides << "-sided die and a got a " << result << "!" << endl;
}

void displayRollResult(int result) {
	cout << "You just rolled a " << result << "!" << endl;
}

int rollDie(int numSides) {
	int roll = 0;
	
	roll = rand() % numSides + 1;
	
	return roll;

}
