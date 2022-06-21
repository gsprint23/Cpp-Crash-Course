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
	const int NUM_TRANSACTIONS = 5;

	cout << "Please enter a transaction amount $";
	cin >> transaction;
	totalTransaction = totalTransaction + transaction;
	
	cout << "Please enter a transaction amount $";
	cin >> transaction;
	totalTransaction = totalTransaction + transaction;
	
	cout << "Please enter a transaction amount $";
	cin >> transaction;
	totalTransaction = totalTransaction + transaction;
	
	cout << "Please enter a transaction amount $";
	cin >> transaction;
	totalTransaction = totalTransaction + transaction;
	
	cout << "Please enter a transaction amount $";
	cin >> transaction;
	totalTransaction = totalTransaction + transaction;

	
	avgTransaction = totalTransaction / NUM_TRANSACTIONS;
	cout << "Total spent: $" << totalTransaction << endl << "Average transaction: $" << avgTransaction << endl;

	return 0;
}
