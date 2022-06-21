#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	int randNum = 0;
	int i = 0;
	
	//cout << time(0) << endl;
	srand(time(0));
	
	randNum = rand() % 10 + 1;
	cout << randNum << endl;
	
	randNum = rand() % 10 + 1;
	cout << randNum << endl;
	
	randNum = rand() % 10 + 1;
	cout << randNum << endl;
	
	// task: assign to randNum a value in the range [7, 10]
	//randNum = rand() % 4 + 7;
	
	/*cout << rand() << endl;
	cout << rand() << endl;
	cout << rand() << endl;
	cout << rand() << endl;
	cout << rand() << endl;*/
	
	// task: print out 20 6-sided die throws
	while (i < 20) {
		randNum = rand() % 6 + 1;
		cout << "Roll #" << (i + 1) << ": " << randNum << endl;
		i += 1;
	}
	
	// task: start the roll numbers at 1

	return 0;
}
