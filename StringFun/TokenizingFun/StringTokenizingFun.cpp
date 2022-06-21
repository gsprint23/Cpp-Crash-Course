#include <iostream>
#include <sstream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	ifstream inputFile;
	string header, line;
	string id, first, last, standing, gpa;
	istringstream inputStringStream;
	double gpaDouble = 0.0;
	
	inputFile.open("student_info.csv");
	// read in line by line the info in inputFile
	// read the header line in first!
	getline(inputFile, header);
	cout << header << endl;
	
	while (!inputFile.eof()) {
		getline(inputFile, line);
		// getline() by default uses \n as a delimiter
		// getline() is overloaded to accept a 3rd argument representing the delimiter we want to use!!
		if (inputFile.good()) {
			// successfully read in a row
			cout << "Read: " << line << endl;
			// use getline() and istringstream in order to tokenize the pieces of information separated by commas
			inputStringStream.clear();
			inputStringStream.str(line);
			getline(inputStringStream, id, ',');
			getline(inputStringStream, first, ',');
			getline(inputStringStream, last, ',');
			getline(inputStringStream, standing, ',');
			getline(inputStringStream, gpa, ',');
			gpaDouble =  stod(gpa); // string to double
			cout << id << " " << first << " " << last << " " << standing << " " << gpaDouble << endl;
		}
	}
	
	
	inputFile.close();


	return 0;
}
