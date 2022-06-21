#include <iostream>

using namespace std;

int main() {
	int i;
	int numStars = 5;
	
	for (i = 0; i < numStars; i++) {
		cout << "*";
	}
	cout << endl;
	
	// task: first 20 even numbers with for loop
	for (i = 2; i <= 40; i += 2) {
		cout << i << " ";
	}
	cout << endl;
	
	for (i = 2; i <= 40; i++) {
		if (i % 2 == 0)
			cout << i << " ";
	}
	cout << endl;
	
	for (i = 1; i <= 20; i++) {
		cout << (i * 2) << " ";
	}
	cout << endl;

	return 0;
}
