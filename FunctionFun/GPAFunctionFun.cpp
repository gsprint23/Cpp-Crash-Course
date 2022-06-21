#include <iostream>

using namespace std;

int main() {
	double gp1, gp2, gp3, weightedCredits, gpa;
	int numCredits1, numCredits2, numCredits3, totalNumCredits;

	// get grade point and credit hours for each class
	cout << "Please enter the grade point for your computer science course: " << endl;
	cin >> gp1;
	cout << "Please enter number of credits for your computer science course: " << endl;
	cin >> numCredits1;

	cout << "Please enter the grade point for your math course: " << endl;
	cin >> gp2;
	cout << "Please enter number of credits for your math course: " << endl;
	cin >> numCredits2;

	cout << "Please enter the grade point for your karate course: " << endl;
	cin >> gp3;
	cout << "Please enter number of credits for your karate course: " << endl;
	cin >> numCredits3;

	// compute the weighted credit hours earned
	weightedCredits = (numCredits1 * gp1) + (numCredits2 * gp2) + (numCredits3 * gp3);

	// compute the total number of credits earned
	totalNumCredits = numCredits1 + numCredits2 + numCredits3;

	// compute the average of the grade points
	gpa = weightedCredits / totalNumCredits;

	// display the results to the user
	cout << "Your GPA is: " << gpa << endl;
}

