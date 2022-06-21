#include <iostream>
#include <vector>

using namespace std;

void printArray(int[], int);
void selectionSortArray(int[], int);
void printVector(vector<int>);
void selectionSortVector(vector<int>&);

int main() {
	int nums[] = {4, 8, 7, 10, 3, 6, 9, 2, 5};
	int size = 9;
	vector<int> numsVector{4, 8, 7, 10, 3, 6, 9, 2, 5};

	printArray(nums, size);
	selectionSortArray(nums, size);
	printArray(nums, size);
	
	// task: define and call a function called selectionSortVector() to sort a vector of integers
	printVector(numsVector);
	selectionSortVector(numsVector);
	printVector(numsVector);

	return 0;
}

void selectionSortVector(vector<int>& v) {
	int i = 0, j = 0;
	int minIndex = 0, min = 0;
	
	for (i = 0; i < v.size(); i++) {
		minIndex = i;
		min = v.at(i);
		for (j = i + 1; j < v.size(); j++) {
			if (v.at(j) < min) {
				minIndex = j;
				min = v.at(j);
			}
		}
		// swap
		v.at(minIndex) = v.at(i);
		v.at(i) = min;
	}
	cout << "**";
	printVector(v);
}

void printVector(vector<int> v) {
	// use a range based for loop
	for (int i : v) {
		cout << i << " ";
	}
	cout << endl;
}

void selectionSortArray(int arr[], int size) {
	int i = 0, j = 0;
	int min = 0, minIndex = 0;
	
	for (i = 0; i < size; i++) {
		minIndex = i;
		min = arr[i];
		// classic find minimum problem
		// search through the unsorted portion of the array for a value smaller than min
		for (j = i + 1; j < size; j++) {
			if (arr[j] < min) {
				// we have a new min
				minIndex = j;
				min = arr[j];
			}
		}
		// swap!
		arr[minIndex] = arr[i];
		arr[i] = min;
	}
}

void printArray(int arr[], int size) {
	int i = 0;
	
	for (i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

}
