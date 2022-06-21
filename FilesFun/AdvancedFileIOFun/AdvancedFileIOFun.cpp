#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	// task: read each line from the file as a string and display it to the console
	string name = "", classStanding = "", tempString = "";
	double gpa = 0.0;
	ifstream inputFile;
	
	inputFile.open("students.txt");
	if (inputFile.fail()) {
		cout << "Failed to open the input file." << endl;
		exit(-1);
	}
	
	while (!inputFile.eof()) {
		// each iteration of loop, read in all of a single students info
		// name, class standing, gpa
		getline(inputFile, name);
		if (inputFile.good()) {
			cout << "Name: " << name << endl;
		}
		getline(inputFile, classStanding);
		if (inputFile.good()) {
			cout << "Class standing: " << classStanding << endl;
		}
		inputFile >> gpa;
		if (inputFile.good()) {
			cout << "GPA: " << gpa << endl;
		}
		// get rid of the newline character after the gpa
		getline(inputFile, tempString);
		// get rid of the newline character that separates groups of information
		getline(inputFile, tempString);
	}
	
	
	inputFile.close();


	return 0;
}
