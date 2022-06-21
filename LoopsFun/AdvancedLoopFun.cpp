#include <iostream>
#include <string>

using namespace std;

int main() {
	string word = "";
	// prompt the user for words until the user enter the word "stop"
	// we will make an infinite loop to do this, then break out of the loop
	
	while (true) {
		// infinite loop
		cout << "Enter a word (\"stop\" to exit): ";
		cin >> word;
		if (word == "stop") {
			break; // exit this loop
		}
	}
	
	for (int i = 0; i < 5; i++) {
      	cout << i << "*";
   		for (int j = 0; j < i; j++) {
        	cout << j << " ";
      	}
      	cout << endl;
	}
	cout << endl;

	return 0;
}
