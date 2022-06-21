#include <iostream>
#include <sstream> // needed for istringstream and ostringstream

using namespace std;


int main() {
	string courseInfo = "CPSC 121 C++";
	// our goal is to extract each piece of information in courseInfo
	string prefix;
	string courseNum;
	string language;
	string line;
	
	// use istringstream just like you would with cin and >> and getline() to parse text into pieces (AKA tokens)
	// in the courseInfo string, each token is separated by a space
	// the >> uses spaces to separate strings into tokens for us :)	
	istringstream inputStringStream;
	ostringstream outputStringStream;
	// need to tell istringstream variable what string to read from
	inputStringStream.str(courseInfo);
	
	// use >> and getline() with inputStringStream just like we would with cin
	inputStringStream >> prefix;
	cout << "Prefix: " << prefix << endl;
 	// task: extract courseNum and extract language
 	inputStringStream >> courseNum;
 	cout << "Course num: " << courseNum << endl;
 	inputStringStream >> language;
 	cout << "Language: " << language << endl;
 	
 	courseInfo = "This course\nuses the\nC++ programming\nlanguage!!";
 	// suppose we want each line in its own string
 	// use getline()!
 	// need to reset the state of istringstream variable
 	inputStringStream.clear();
 	inputStringStream.str(courseInfo);
 	do {
 		getline(inputStringStream, line);
 		cout << line << endl;
 	} while (inputStringStream.good());
 	
 	// use ostringstream to write (AKA construct, build) to a string
 	// we can use the << with ostringstream just like we would with cout and ofstream
 	outputStringStream << "This courses uses the " << language << " programming language!!";
 	line = outputStringStream.str(); // get the string we have been building with <<
 	cout << line << endl;
 	
 	// valueA,valueB,valueC,...


	return 0;
}
