#include "Recursion.h"
#include "LinkedList.h"

int main() {
	iterativeCountdown(3);
	iterativeCountdown(10);
	
	recursiveCountdown(3);
	recursiveCountdown(10);
	
	// a recursive function: a function that directly (or indirectly) calls itself
	// pro: simple/short/elegant solutions for some problems (compared to iterative solutions)
	// commonly used by other programmers
	// con: high memory overhead (compared to iterative solutions)
	
	cout << iterativeMultiplication(2, 3) << endl;
	cout << recursiveMultiplication(2, 3) << endl;
	
	cout << iterativePower(2, 3) << endl;
	cout << recursivePower(2, 3) << endl;
	
	cout << iterativeFactorial(3) << endl;
	cout << iterativeFactorial(5) << endl;
	
	cout << recursiveFactorial(3) << endl;
	cout << recursiveFactorial(5) << endl;
	
	displayString("hello", 0);
	displayString("recursion", 0);
	displayString("hello");
	displayString("recursion");
	
	displayStringReverse("hello");
	cout << endl;
	displayStringReverse("recursion");
	cout << endl;
	
	cout << countCharacters("hello") << endl;
	cout << countCharacters("recursion") << endl;
	
	// linked list
	LinkedList list;
	list.appendNode(10);
	list.appendNode(20);
	list.appendNode(30);
	list.displayList();
	list.displayListRecursive();
	list.displayListReverse();
	
	// multiple recursive calls per single function call
	fun(5);
	cout << endl << endl;
	moreFun(5);

	
	return 0;
}
