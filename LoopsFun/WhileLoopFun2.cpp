#include <iostream>

using namespace std;

int main() {
	int numStars = 5;
	int i = numStars;
	int choice = 0;
	bool keepPlaying = true;
	
	i = 1;
	while (i <= numStars) {
		cout << "*";
		i++;
	}
	cout << endl;
	
	
	i = numStars;
	while (i >= 1) {
		cout << "*";
		i--;
	}
	cout << endl;
	
	// first 20 even numbers
	i = 2;
	while (i <= 40) {
		cout << i << " ";
		i += 2;
	}
	cout << endl;
	
	i = 2;
	while (i <= 40) {
		if (i % 2 == 0) 
			cout << i << " ";
		
		i += 1;
	}
	cout << endl;
	
	i = 1;
	while (i <= 20) {
		cout << (i * 2) << " ";
		i++;
	}
	cout << endl;
	
	while (keepPlaying) {
		cout << "\nWelcome to my game!" << endl;
		cout << "Please choose from the following: " << endl;
		cout << "1. View the game rules" << endl;
		cout << "2. Play the game" << endl;
		cout << "3. View the high score" << endl;
		cout << "4. Quit" << endl;
		cout << "Choice: ";
		cin >> choice;
		
		if (choice == 1) {
			cout << "Add code later to show the game rules..." << endl;
		}
		else if (choice == 2) {
			cout << "Add code later to play the game..." << endl;
		}
		else if (choice == 3) {
			cout << "Add code later to show the high score..." << endl;
		}
		else if (choice == 4) {
			cout << "Thanks for playing, see you later..." << endl;
			keepPlaying = false;
		}
		else {
			cout << "Unrecognized menu option. Please try again." << endl;
		}
	}


	return 0;
}
