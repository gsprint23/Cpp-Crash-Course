#include <iostream>
#include <cmath>

using namespace std;

// put function definitions before any code that calls the function
// compiler needs to know about the function before it can execute it when it encounters a function call

int f(int x) {
	int y;
	
	y = pow(x, 2.0) - 4 * x + 4;
	return y;
}

bool checkIfEven(int num) {
	if (num % 2 == 0) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	int result = 0;
	
	result = f(1);
	cout << result << endl;
	
	result = f(2);
	cout << result << endl;
	
	result = f(3);
	cout << result << endl;
	
	cout << checkIfEven(3) << endl;
	cout << checkIfEven(10) << endl;

	return 0;
}
