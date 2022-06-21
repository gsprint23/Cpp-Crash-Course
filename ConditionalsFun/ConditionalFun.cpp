#include <iostream>

using namespace std;

int main() {
	bool isSunny = true;
	int temperature = 0;
	
	if (isSunny) {
		cout << "It is sunny outside :)" << endl;
	
	}
	else { // executes when !isSunny evaluates to true
		cout << "It is not sunny outside :(" << endl;
	
	}
	
	cout << "Outside of the if statement" << endl;
	
	// task: code up the flowchart from the notes
	// get the temperature value from the user
	cout << "Please enter the temperature: ";
	cin >> temperature;
	
	if (temperature > 32) {
		cout << "It is warm out" << endl;
	}
	else { // !(temperature > 32) -> temperature <= 32
		cout << "It is freezing out" << endl;
	}
	
	// task: add an else with a one line comment that shows the BC for the else
	if (temperature > 32 && isSunny == false) {
	
	}
	
	

	return 0;
}
