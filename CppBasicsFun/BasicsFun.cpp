// this is a single line comment
// comments are not compiled by the compiler, they are ignored!

// we can also have multi line commments, called comment blocks
/*

this is
a 

multi

line comment

*/

/* one liner */


// libraries our program needs to include
#include <iostream> // io stands for input output
// use iostream to get access to cin and cout for user input and output 

// any line that starts with # is called a pre processor directive

// after preprocessor directives, we have using namespace statements

using namespace std; // use the standard namespace
// so we don't have to type std::cin or std::cout

// every program has to have a main() function
// it is the main entry point to execution of your program
int main() {
	// good habit to put all variable declarations at the top main() so you can easily find them
	// a variable is a location in memory that stores a value
	// declare an integer variable called x
	int x;
	double gasPrice = 3.89;
	int gasPriceAsInt; 
	// good practice to intialize variables when you declare them!
	
	
	cout << gasPriceAsInt << endl; // garbage value!
	gasPriceAsInt = gasPrice; // fractional part is truncated
	cout << gasPriceAsInt << endl;
	cout << static_cast<int>(gasPrice) << endl;
	
	// initialize x to store 5
	x = 5; // read "this is assigned 5"
	// = is the assignment operator, not the equality operator
	cout << "x stores: " << x << endl;
	cout << "gasPrice stores: " << gasPrice << endl;

	cout << "Hello from BasicsFun.cpp :)" << endl;
	// use cout to display text to the user via the terminal
	// terminal is AKA console
	// << is the stream insertion operator
	// it inserts whatever is to the right in the "stream"
	// to the left (cout)
	// anything surrounded by double quotes is a string literal
	// a string a sequence of characters
	// endl is a newline
	
	
	
	
	return 0; // always be the last line in our programs
	// says this program is done executing
	// 0 is the result code, tells the OS this program executed successfully (without error)
}


