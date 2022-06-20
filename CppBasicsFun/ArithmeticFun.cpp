#include <iostream>

using namespace std;

int main() {
	int x = 5;
	int y = 0;
	double z = 5.0;
	
	x = x + 2;
	cout << "x: " << x << endl;
	cout << "y - 2: " << (y - 2) << endl;
	x = x - y / z;
	// order of precendence, how is this evaluated?
	//(x - y) / z or x - (y / z)
	
	cout << (13 % 10) << endl;
	cout << (1.0 / 3 * 3.14 * 5.0 * 5.0 * 10.0) << endl;


	return 0;
}
