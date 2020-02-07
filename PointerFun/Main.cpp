#include <iostream>

using namespace std;

void divide(int num, int den, int * res, int * rem);

int main() {
	// pointer: a variable that stores as its contents the memory address of another variable
	
	// example
	/*
	NAME	TYPE	MEM ADDR	CONTENTS
	x		int		0xd48c		5->7->10
	xPtr	int *	0x2004		NULL->0xd48c
	*/
	
	int x = 5; // "x is assigned 5"
	// declare a pointer to an int
	int * xPtr = NULL; // NULL is like
	// initializing the pointer to 0
	// it's invalid
	// "the pointer to int xPtr is assigned null"
	
	// 2 ways to modify the contents of x
	// 1) directly via x
	x = 7;
	// 2) indirectly via xPtr
	// we want xPtr to point to x
	// so we have xPtr store the 
	// mem addr of x
	xPtr = &x; // & address of operator
	// xPtr is assigned the address of x"
	// follow the xPtr to x
	*xPtr = 10;
	// "the contents of what xPtr points to
	// is assigned 10
	// "follow the pointer and assign 10"
	// * here is the unary indirection operator
	// and it "dereferences" a pointer
	cout << "x: " << x << endl;
	cout << "*xPtr: " << *xPtr << endl;
	cout << "&x: " << &x << endl;
	cout << "xPtr: " << xPtr << endl;
	
	// char *
	// double *
	// string *
	
	// 3 different uses of the * in C/C++
	// 1) multiplication operator
	// e.g. x * 2
	// 2) pointer type
	// e.g. int * xPtr
	// 3) unary indirection operator
	// e.g. *xPtr = 5;
	
	// 2 different uses of the & in C/C++
	// 1) declaration of a reference variable
	// int & xRef = x; // makes an alias
	// 2) address of operator
	// e.g. char * charPtr = &myChar;

	// OUTPUT PARAMETERS
	// with the return statment, a function
	// can return a value
	// output parameter is a parameter that
	// "returns a value" from the function
	// 2 ways to do this
	// 1) via a pass by reference variable
	// int & result
	// **2) via a pointer variable
	
	// example
	// a function called divide()
	// accepts two ints, and returns
	// their result of division and remainder
	int result, remainder;
	// what is in scope of main()?
	// int result CONTENTS ?->1 ADDR 0x2000
	// int remainder CONTENTS ?->2 ADDR 0x3000
	divide(13, 11, &result, &remainder);
	cout << "result: " << result << endl;
	cout << "remainder: " << remainder << endl;
	
	return 0;
}

void divide(int num, int den, int * res, int * rem) {
	*res = num / den; // int div
	// "the contents of what res points to is assigned num divided by den"
	*rem = num % den; // mod
	// "the contents of what rem points to is assigned num mod den"
	
	// what is in scope of divide()?
	// int num CONTENTS 13 
	// int den CONTENTS 11 
	// int * res CONTENTS 0x2000
	// int * rem CONTENTS 0x3000
	
}
