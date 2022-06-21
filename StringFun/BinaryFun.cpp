#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int convertBinaryToDecimal(string);
string convertDecimalToBinary(int);

int main() {
	
	cout << "0b000: " << 0b000 << endl;
	cout << "0b001: " << 0b001 << endl;
	cout << "0b010: " << 0b010 << endl;
	cout << "0b011: " << 0b011 << endl;
	cout << "0b100: " << 0b100 << endl;
	cout << "0b101: " << 0b101 << endl;
	cout << "0b110: " << 0b110 << endl;
	cout << "0b111: " << 0b111 << endl;
	// 8 in decimal
	cout << "0b1000: " << 0b1000 << endl;
	
	// task: write an algorithm that converts binary to decimal
	// a function that accepts a string representing binary number and returns an integer
	
	cout << convertBinaryToDecimal("11111") << endl;
	cout << convertDecimalToBinary(94) << endl;
	cout << convertDecimalToBinary(13) << endl;

	return 0;
}

string convertDecimalToBinary(int decimal) {
	string binary = "";
	int highestPowerTwo = 0, powerTwoValue = 0;
	int i = 0;
	
	highestPowerTwo = log2(decimal);
	cout << highestPowerTwo << endl;
	for (i = highestPowerTwo; i >= 0; i--) {
		powerTwoValue = pow(2, i);
		if (decimal / powerTwoValue > 0) {
			binary += "1";
			decimal -= powerTwoValue;
		}
		else {
			binary += "0";
		}
	}
	
	return binary;
}

int convertBinaryToDecimal(string binary) {
	int decimal = 0; // store our summation
	int i = 0, powerTwo = 0;
	
	powerTwo = binary.length() - 1; // highest power of two
	// power of two for the digit at index 0
	for (i = 0; i < binary.length(); i++) {
		if (binary.at(i) == '1') {
			decimal += pow(2, powerTwo);
		}
		powerTwo--;
	}
	
	
	
	return decimal;
}


