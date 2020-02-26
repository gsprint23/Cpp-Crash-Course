#include <iostream>

using namespace std;

int * doBadThings() {
	int localVar = 5; // resides in the stack
	// NEVER want to return the mem addr of a local variable
	// when function exits, local vars in stack are deallocated
	return &localVar;
}

int main() {
	int * intPtr = new int[10];
	*intPtr = 7;
	cout << *intPtr << endl;
	
	// done with what intPtr points to...
	// forget to free it!!
	delete [] intPtr;
	intPtr = NULL;
	
	int * badPtr = NULL;
	badPtr = doBadThings();
	cout << *badPtr << endl;

	return 0;
}
