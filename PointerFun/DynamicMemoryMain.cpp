#include <iostream>

using namespace std;

void printArray(int * arr, int size);
int * createRandomArray(int size);

int main() {
	// pointer: a variable that stores as its contents the memory address of another variable
	// an array stores the memory address of the first element of the array
	
	// local variables  are allocated in a region of memory called the "stack"
	// when a function exits, the stack area that was used by the function is deallocated
	// NEVER return the memory address of a local variable
	// goal of dynamic memory is to return the memory address of memory in the "heap"
	// "heap" area is not deallocated when a function exits
	// deallocated when you (the programmer) deallocated it (freeing memory)
	
	// we want a function to allocate memory for an array of random numbers
	// we use the new and delete keywords to dynamically allocate memory
	// we will use these in the function to allocate memory on the heap
	int * randArr = NULL;
	randArr = createRandomArray(10); // size
	printArray(randArr, 10);
	// note: we need to free AKA deallocate
	// randArr when we are done with it
	// memory leak unless we free randArr's memory on the heap
	delete [] randArr;
	// good practice to set the pointer to NULL or to nullptr
	randArr = NULL;
	
	return 0;
}

int * createRandomArray(int size) {
	int i;
	int * arr = new int[size]; // on heap
	for (i = 0; i < size; i++) {
		*(arr + i) = rand() % size;
	}
	return arr; // note: it is the calling
	// code's responsibility to free this memory
}

void printArray(int * arr, int size) {
	int i;
	for (i = 0; i < size; i++) {
		cout << *(arr + i) << " "; 
	}
	cout << endl;
}

