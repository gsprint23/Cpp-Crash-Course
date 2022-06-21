#include <iostream>

using namespace std;

int main() {
	// write a program that prompts the user for 5 credit card transaction amounts
	// tell the user the total spent on the credit card
	// and the average spent per transaction
	
	// task: solve this!
	double transaction = 0.0;
	double totalTransaction = 0.0;
	double avgTransaction = 0.0;
	//const int NUM_TRANSACTIONS = 5;
	int numTransactions = 0;
	int i = 0;
	
	cout << "How many transactions do you want to enter: ";
	cin >> numTransactions;
	
	while (i < numTransactions) {
		cout << "Please enter a transaction amount $";
		cin >> transaction;
		totalTransaction = totalTransaction + transaction;
		i += 1;
	}
	
	avgTransaction = totalTransaction / numTransactions;
	cout << "Total spent: $" << totalTransaction << endl << "Average transaction: $" << avgTransaction << endl;

	return 0;
}
