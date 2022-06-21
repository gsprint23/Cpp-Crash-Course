#include <iostream>
#include <fstream> // used for ifstream and ofstream data types


using namespace std;

int main() {
	// declare a variable to open a file for reading
	// ifstream data type is for "input" from a file
	// ofstream data type is for "output" to a file
	ifstream inputFile;
	ofstream outputFile;
	double transaction = 0.0, totalTransaction = 0.0, avgTransaction = 0.0;
	int i = 0, numTransactions = 0;
	
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
	outputFile.open("avg_transaction.txt");
	
	// 2. process the file
	// read a single transaction from the file
	// reading always starts from the beginning of the file
	
	// task: read the rest of the values from the file
	while (!inputFile.eof()) {
		inputFile >> transaction;
		// the above code fails when it tries to read a value and there are no more values to read (e.g. at the end of file)
		// in this case, transaction is not overwritten with a new value, so it appears the last value is printed twice
		// fix: check to see if the >> operation succeeded or not
		// inputFile.good() checks only the most recent stream operation for success or failure. typically put it right after you do something with the file
		if (inputFile.good()) {
			cout << "Read: " << transaction << endl;
			totalTransaction += transaction;
			numTransactions++;
		}
		else {
			cout << "Failed to read a transaction." << endl;
		}	
	}
	
	// task: compute the average transaction
	avgTransaction = totalTransaction / numTransactions;
	outputFile << avgTransaction << endl;
	
	// 3. close the file
	inputFile.close(); // releases resources
	outputFile.close();
	// data written to the file is actually written to the disk


	return 0;
}
