#include <iostream>

using namespace std;

void printArray(int * arr, int size);

int main() {
	// pointer: a variable that stores as its contents the memory address of another variable
	// an array stores the memory address of the first element of the array
	
	int nums[] = {5, 2, 8, 6}; 
	// 16 contiguously allocated bytes
	// to stores 4 ints
	int size = 4;
	
	cout << &(nums[0]) << endl;
	cout << &(nums[1]) << endl;
	cout << &(nums[2]) << endl;
	cout << &(nums[3]) << endl;
	printArray(nums, size);
	
	return 0;
}

void printArray(int * arr, int size) {
	int i;
	for (i = 0; i < size; i++) {
		// cout << arr[i] << " "; // array notation
		cout << *(arr + i) << " "; // pointer notation
		// values of i...
		// i = 0, 1, 2, 3
		// ints are 4 bytes
		// the offset added to arr
		// is the size of the memory cell
		// times the offset to get the total
		// bytes
	}
	cout << endl;
}

