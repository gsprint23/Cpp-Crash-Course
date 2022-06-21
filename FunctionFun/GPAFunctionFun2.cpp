#include <iostream>

using namespace std;

double getGradePoint(string courseName) {
	double gp = 0.0;
	cout << "Please enter the grade point for your " << courseName << " course: " << endl;
	cin >> gp;
	return gp;
}

// task: define and call the getNumberCredits() function
int getNumberCredits(string courseName) {
	int numCredits = 0;
	
	cout << "Please enter number of credits for your " << courseName << " course: " << endl;
	cin >> numCredits;
	return numCredits;
}

double computeWeightedCredits(double gp1, double gp2, double gp3, int numCredits1, int numCredits2, int numCredits3) {
	double weightedCredits = 0.0;
	
	weightedCredits = (numCredits1 * gp1) + (numCredits2 * gp2) + (numCredits3 * gp3);
	
	return weightedCredits;

}

int computeTotalCredits(int nc1, int nc2, int nc3) {
	int totalCredits = 0;
	
	totalCredits = nc1 + nc2 + nc3;
	
	return totalCredits;
}

double computeGPA(double weightedCredits, int totalCredits) {
	return (weightedCredits / totalCredits);
}

void displayGPA(double gpa) {
	cout << "Your GPA is: " << gpa << endl;
}

int main() {
	double gp1, gp2, gp3, weightedCredits, gpa;
	int numCredits1, numCredits2, numCredits3, totalNumCredits;

	// get grade point and credit hours for each class
	gp1 = getGradePoint("computer science");
	numCredits1 = getNumberCredits("computer science");

	gp2 = getGradePoint("math");
	numCredits2 = getNumberCredits("math");

	gp3 = getGradePoint("karate");
	numCredits3 = getNumberCredits("karate");

	// compute the weighted credit hours earned
	weightedCredits = computeWeightedCredits(gp1, gp2, gp3, numCredits1, numCredits2, numCredits3);

	// compute the total number of credits earned
	totalNumCredits = computeTotalCredits(numCredits1, numCredits2, numCredits3);

	// compute the average of the grade points
	gpa = computeGPA(weightedCredits, totalNumCredits);

	// display the results to the user
	displayGPA(gpa);
}

