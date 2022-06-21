#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int NUM_STUDENTS = 100; // larger than we need, but leaves room to grow our file

void printStudentInfo(string[], string[], double[], int);

int main() {
	// task: read each line from the file as a string and display it to the console
	string name = "", classStanding = "", tempString = "";
	double gpa = 0.0;
	string studentNames[NUM_STUDENTS];
	string studentClassStandings[NUM_STUDENTS];
	double studentGPAs[NUM_STUDENTS];
	ifstream inputFile;
	int i = 0;
	
	inputFile.open("AdvancedFileIOFun/students.txt");
	if (inputFile.fail()) {
		cout << "Failed to open the input file." << endl;
		exit(-1);
	}
	
	while (!inputFile.eof()) {
		// each iteration of loop, read in all of a single students info
		// name, class standing, gpa
		getline(inputFile, name);
		if (inputFile.good()) {
			studentNames[i] = name;
		}
		getline(inputFile, classStanding);
		if (inputFile.good()) {
			studentClassStandings[i] = classStanding;
		}
		inputFile >> gpa;
		if (inputFile.good()) {
			studentGPAs[i] = gpa;
		}
		// get rid of the newline character after the gpa
		getline(inputFile, tempString);
		// get rid of the newline character that separates groups of information
		getline(inputFile, tempString);
		i++;
	}
	
	// task: write a function that prints the student information stored in the parallel arrays
	printStudentInfo(studentNames, studentClassStandings, studentGPAs, i);
	
	inputFile.close();


	return 0;
}

void printStudentInfo(string names[], string standings[], double gpas[], int numStudents) {
	int i = 0;
	
	for (i = 0; i < numStudents; i++) {
		cout << names[i] << " is a " << standings[i] << " with a GPA of " << gpas[i] << endl;
	}

}

// task: write functions that do the following:
// 1. compute the average GPA
// 2. count the number of each class standing
// 3. find the most commonly used first letter of the first name


