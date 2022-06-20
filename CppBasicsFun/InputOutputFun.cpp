#include <iostream>
#include <string>

using namespace std;

int main() {
	string name = ""; // empty string
	string lastName = "";
	string place = "";
	string favoriteVacationSpot = "";
	int favoriteNumber = 0;
	int year = 0;
	// review using cout and <<
	// learn about using cin and >>
	
	// every time we get input from the user, we should provide a prompt so the user knows what they are supposed to do
	cout << "Please enter your name: ";
	cin >> name;
	// cin is a stream connected to stanard input (console input)
	// the >> is the stream extraction operator and it extracts data from a buffer that stores the text the user typed when they pressed enter
	cout << "Hello there, " << name << endl;
	
	cin >> lastName;
	cout << "Last name: " << lastName << endl;
	
	cout << "Please enter your favorite number: ";
	cin >> favoriteNumber;
	cout << "Favorite number: " << favoriteNumber << endl;
	
	// task: prompt the user the year and the place they were born
	cout << "Please enter the year you were born: ";
	cin >> year;
	
	cout << "Please enter the state you were born in: ";
	cin >> place;
	
	cout << "You were born in " << place << " in the year " << year << endl;
	
	cout << "Please enter your favorite vacation spot: ";
	getline(cin, favoriteVacationSpot); // gets rid of the newline character, stores the empty string in favoriteVacationSpot, which we ignore!
	getline(cin, favoriteVacationSpot);
	cout << "Your favorite vacation spot: " << favoriteVacationSpot << endl;
	
	return 0;
}
