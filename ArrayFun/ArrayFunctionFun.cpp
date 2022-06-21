#include <iostream>

using namespace std;

const int SIZE = 7;

void displayArray(const int[], int);
void multiplyByTwo(int[], int);

int main() {
	int numbers[] = {3, 6, 4, 8, -1, 3, -2};
	
	// call a function that prints the array
	displayArray(numbers, SIZE);
	// call a function that modifies the array
	multiplyByTwo(numbers, SIZE);
	// call a function that prints the array
	displayArray(numbers, SIZE);

	return 0;
}

void multiplyByTwo(int arr[], int size) {
	// arr is a reference to the numbers array in main
	int i = 0;
	
	for (i = 0; i < size; i++) {
		arr[i] *= 2;
	}
}	

void displayArray(const int arr[], int size) {
	// arr is a reference to the numbers array in main
	int i = 0;
	
	for (i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}	
