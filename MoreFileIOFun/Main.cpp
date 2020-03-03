#include <iostream>
#include <fstream>

using namespace std;

int main() {
	// ifstream input file
	// ofstream output file
	// fstream open files in more modes!!
	// ios::in reading
	// ios::out writing
	// ios::app appending
	// ios::ate add at end of file
	// ios::binary 
	
	string line;
	
	// open a file for writing
	fstream file;
	file.open("words.txt", ios::out);
	file << "hello" << endl;
	// wrote 6 bytes to words.txt
	long position = file.tellp(); // tellp is for putting (outfiles, write position)
	// tellg is for getting (infiles, read position)
	cout << "position: " << position << endl;
	file.close(); 
	
	file.open("words.txt", ios::in | ios::out); // both reading and writing
	while (!file.eof()) {
		// read a line
		getline(file, line);
		if (file.good()) {
			cout << "Read: " << line << endl;
		}
	}
	// move the cursor back to the beginning of the file (without closing the file)
	// overwrite the hello with goodbye
	file.clear(); // clear the EOF bit
	file.seekp(0, ios::beg); // moves to beginning of the file
	// ios::beg beginning of file
	// ios::end end of the file
	// ios::cur current position
	file << "goodbye" << endl;
	cout << file.tellp() << endl;
	cout << file.tellg() << endl;
	
	file.close();

	return 0;
}
