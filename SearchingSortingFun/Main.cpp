#include <iostream>

using namespace std;

void printArray(int[], int);
void insertionSortArray(int[], int);
int linearSearchArray(int[], int, int);

int main() {
	int nums[] = {7, 4, 6, 9, 10, 2, 5, 3, 8};
	int size = 9;
	int index = 0;

	printArray(nums, size);
	index = linearSearchArray(nums, size, 7); // first item
	cout << index << endl;
	index = linearSearchArray(nums, size, 8); // last item
	cout << index << endl;
	index = linearSearchArray(nums, size, 11); // not found
	cout << index << endl;

	return 0;
}

int linearSearchArray(int arr[], int n, int target) {
	int counter = 0;
	int i; 
	counter++; // for int i
	counter++; // for i = 0
	for (i = 0; i < n; i++) {
		counter++; // for i < n true
		counter++; // for BC (boolean condition)
		if (arr[i] == target) {
			counter++; // for return i
			cout << "counter: " << counter << endl;	
			return i;
		}
		counter++; // for i++
	}
	counter++; // for i < n false
	counter++; // for return -1
	cout << "counter: " << counter << endl;	
	return -1;
}

void insertionSortArray(int arr[], int size) {
	int i, j, currValue; // other += 3
	// i = 1 loopControlAssignment++
	for (i = 1; i < size; i++) {
		// i < size loopControlComparisons++
		currValue = arr[i];
		j = i - 1;
		while (j >= 0 && currValue < arr[j]) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = currValue;
	}
	// i < size loopControlComparisons++
	// for the one time the BC evaluates to false
}

void printArray(int arr[], int size) {
	int i;
	for (i = 0; i < size - 1; i++) {
		cout << arr[i] << ", "; 
	}
	cout << arr[i] << endl;
	
}
