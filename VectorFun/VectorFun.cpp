#include <iostream>
#include <vector>
#include <string>

using namespace std;

void printVector(vector<string>);
void printTwoDVector(vector<vector<string>>);

int main() {
	// vector declaration
	vector<int> myInts; // empty vector that is ready to store integers
	vector<string> myStrings(10); // a vector that stores 10 empty strings
	
	// vector declaration and initialization
	vector<string> words(5, "hello"); // 5 strings that are all "hello"
	vector<string> words2{"hello", "goodbye"}; // 2 strings
	
	// 2D vectors
	vector<vector<string>> twoDWords; // empty 2D vector of strings
	vector<vector<string>> twoDWords2{{"one", "two"}, {"three", "four"}};
	
	
	
	// use .at() over [] because it performs bounds checking that will give you a runtime error if you use an out of bounds index
	cout << words2[0] << endl;
	cout << words2.at(1) << endl;
	
	// use size() member function in order to get the number of elements in the vector
	cout << myInts.size() << endl;
	cout << myStrings.size() << endl;
	cout << words.size() << endl;
	cout << words2.size() << endl;
	
	printVector(words);
	printVector(words2);
	
	printTwoDVector(twoDWords2);
	
	//cout << words << endl; // causes our program to crash


	return 0;
}

void printTwoDVector(vector<vector<string>> v) {
	int i = 0, j = 0;
	vector<string> temp;
	
	for (i = 0; i < v.size(); i++) {
		temp = v.at(i);
		for (j = 0; j < temp.size(); j++) {
			cout << temp.at(j) << " ";
		}
		cout << endl;
	}

}

void printVector(vector<string> v) {
	int i = 0;
	
	for (i = 0; i < v.size(); i++) {
		cout << v.at(i) << " ";
	}
	cout << endl;
}
