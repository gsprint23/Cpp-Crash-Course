#include "Recursion.h"

void iterativeCountdown(int n) {
	for (int i = n; i > 0; i--) {
		cout << i << " ";
	}
	// i == 0
	cout << "blastoff!!" << endl;
}


void recursiveCountdown(int n) {
	// elements of recursion
	// 1. base case - no more recursion is appropriate
	// e.g. when n == 0
	// stop recursing!!
	if (n == 0) {
		cout << "blastoff!!" << endl;
		return;
	}
	// 2. code to approach the base case - reformation of a similar yet smaller version of the problem (like "progress towards BC being false")
	// e.g. print out n and call this function again
	// with n - 1 (smaller version of the problem, approaching 0)
	cout << n << " ";
	// recursive call (AKA step)
	recursiveCountdown(n - 1);
	cout << "returning from the " << n - 1 << " call" << endl;
}

int iterativeMultiplication(int m, int n) {
	// multiply by adding m n times
	int sum = 0, i = 0;
	
	for (i = 0; i < n; i++) {
		sum += m; 
	}
	return sum;
}

int recursiveMultiplication(int m, int n) {
	// multiply by adding m n times
	if (n == 1) {
		return m;
	}
	// recursive step
	return m + recursiveMultiplication(m, n - 1);
}

int iterativePower(int base, int exponent) {
	// raise base to exponent by multiplying base exponent times
	int prod = 1, i = 0;
	
	for (i = 0; i < exponent; i++) {
		prod *= base;
	}
	return prod;
}

int recursivePower(int base, int exponent) {
	// raise base to exponent by multiplying base exponent times
	// base case
	if (exponent == 1) {
		return base;
	}
	// recursive step
	return base * recursivePower(base, exponent - 1);
}

int iterativeFactorial(int n) {
	// evaluate factorial by multiplying n by (n - 1), (n - 2), ... 1
	int result = 1, i = 1;
	
	for (i = n; i >= 1; i--) {
		result *= i;
	}
	return result;
}

int recursiveFactorial(int n) {
	// evaluate factorial by multiplying n by (n - 1), (n - 2), ... 1
	// base case
	if (n == 1) {
		// 1! = 1
		return 1;
	}
	// recursive step
	return n * recursiveFactorial(n - 1);
}


void displayString(string s, int index) {
	// print string char by char
	// base case
	if (index == s.length()) {
		// hello
		cout << endl;
		return;
	}
	// print out the char at index
	cout << s.at(index) << " ";
	// recursive step
	displayString(s, index + 1);
}

void displayString(string s) {
	// print string char by char
	if (s.length() == 0) {
		cout << endl;
		return;
	}
	// "hello", "ello", "llo", "lo", "o", ""
	cout << s.at(0) << " ";
	displayString(s.substr(1, s.length() - 1));
}

void displayStringReverse(string s) {
	// print string char by char in reverse order
	if (s.length() == 0) {
		return;
	}
	// "hello", "ello", "llo", "lo", "o", ""
	displayStringReverse(s.substr(1, s.length() - 1));
	cout << s.at(0) << " ";
}

int countCharacters(string s) {
	// return number of chars in string
	if (s.length() == 0) {
		return 0;
	}
	// "hello", "ello", "llo", "lo", "o", ""
	return 1 + countCharacters(s.substr(1, s.length() - 1));
}

void fun(int n) {
	if (n > 2) {
		fun(n - 1);
		fun(n - 2);
		fun(n - 3);
	}
	cout << n << endl;
}

void moreFun(int n) {
	cout << n << endl;
	if(n > 2) {
		moreFun(n - 1);
		moreFun(n - 2);
		moreFun(n - 3);
	}
}


