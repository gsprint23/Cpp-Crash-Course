#include <iostream>
#include <string>

using namespace std;

const int NUMBERS_SIZE = 5;

int main() {
	// task: declare an array of 5 integers, just set each integer to any number
	int numbers[NUMBERS_SIZE] = {4, 2, 7, 5, -2};
	int i = 0;
	int min = 0, max = 0, total = 0;
	int target = 5;
	double avg = 0.0;
	bool found = false;
	
	// prints the memory address of the first element in the array
	cout << numbers << endl;
	
	// how do we see each element though!??!?!
	// print each element out one at a time
	// USE A LOOP!
	for (i = 0; i < NUMBERS_SIZE; i++) {
		cout << "numbers[" << i << "]: " << numbers[i] << endl;
	}
	// task: re-solve the for loop using a while loop
	i = 0; 
	while (i < NUMBERS_SIZE) {
		cout << "numbers[" << i << "]: " << numbers[i] << endl;
		i++;
	}
	// for each loop (AKA range based for loop)
	// for iterating over items in a collection
	// for each integer num in numbers
	// : represents in
	for (int num : numbers) {
		cout << num << endl;
	}
	cout << "Adding one..." << endl;
	for (int num : numbers) {
		cout << num << endl;
		num += 1; // doesn't change the actual value in the array
		// num is a copy, not a reference variable
	}
	for (int& num : numbers) {
		cout << num << endl;
		num += 1;
	}
	cout << "After adding one..." << endl;
	for (int num : numbers) {
		cout << num << endl;
	}
	
	// compute the average, min, and max for the values in numbers
	// task: try this out!
	// min and max are the first element in the array
	// until proven otherwise by comparing the rest of the elements
	min = max = numbers[0];
	for (i = 0; i < NUMBERS_SIZE; i++) {
		total += numbers[i];
		if (numbers[i] < min) {
			// we have a new min
			min = numbers[i];
		}
		if (numbers[i] > max) {
			// we have a new max
			max = numbers[i];
		}
	}
	avg = static_cast<double>(total) / NUMBERS_SIZE;
	cout << "Avg: " << avg << endl;
	cout << "Min: " << min << endl;
	cout << "Max: " << max << endl;
	
	// given a target value, find out where the target value is in the array, if it is in there at all
	// search problem: find a target value
	target = 11;
	for (i = 0; i < NUMBERS_SIZE; i++) {
		// is numbers[i] the target?
		if (numbers[i] == target) {
			cout << "Found it at " << i << "!" << endl;
			found = true;
			break;
		}
	}
	// task: give feedback to the user if the number is not in the array
	if (!found)
		cout << target << " is not in the array." << endl;

	return 0;
}
