#include <iostream>
#include <fstream> // used for ifstream and ofstream data types


using namespace std;

int main() {
	// declare a variable to open a file for reading
	// ifstream data type is for "input" from a file
	// ofstream data type is for "output" to a file
	ifstream inputFile;
	
	// 1. open the file
	inputFile.open("transactions.txt"); // pass in a string representing a path to a file to open
	
	// check if open is successful
	if (inputFile.is_open()) {
		cout << "Successfully opened the input file." << endl;
	}
	else { // !inputFile.is_open()
		cout << "Failed to open the input file." << endl;
		exit(-1); // exit the program
	}
	cout << "here" << endl;
	// 2. process the file
	
	
	// 3. close the file
	inputFile.close(); // releases resources
	// data written to the file is actually written to the disk


	return 0;
}
