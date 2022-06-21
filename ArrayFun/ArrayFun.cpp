#include <iostream>
#include <string>

using namespace std;

int main() {
	int x = 0;
	int numbers[10]; // 10 uninitialized integers in the array called numbers
	
	string words[] = {"hello", "hi", "bye"}; // 3 initialized strings in the array called words
	
	//                       0      1     2
	string words2[20] = {"hello", "hi", "bye"}; // 20 total strings in the array called words2 (3 are initialized, the rest are empty)
	int words2Size = 3;
	const int WORDS2_TOTAL_SIZE = 20;
	
	double myDoubles[] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0};
	double temp = 0.0;
	const int myDoublesSize = 10;
	
	cout << words[0] << endl;
	cout << words2[5] << endl;
	// task: print out the "bye" of words2
	cout << words2[2] << endl;
	
	// change "hello" of words to be "HELLO"
	words[0] = "HELLO";
	cout << words[0] << endl;
	
	words[x + 1] = "HI";
	cout << words[x + 1] << endl;
	cout << words[++x] << endl;
	
	numbers[x] = 5;
	cout << numbers[x] << endl;
	numbers[x++] += 100;
	cout << numbers[x - 1] << endl;
	cout << numbers[x] << endl;
	
	cout << myDoubles[0] << " " << myDoubles[9] << endl;
	// do the swap
	temp = myDoubles[0];
	myDoubles[0] = myDoubles[9];
	myDoubles[9] = temp;
	cout << myDoubles[0] << " " << myDoubles[9] << endl;
	
	//sizeof() operator tells the you the total number of bytes allocated for a variable
	cout << sizeof(myDoublesSize) << endl;
	cout << sizeof(double) << endl;
	cout << sizeof(myDoubles) << endl;
	cout << (sizeof(myDoubles) / sizeof(double)) << endl;
	

	return 0;
}
