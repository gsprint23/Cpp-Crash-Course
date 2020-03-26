#include "LinkedList.h"
#include "Stack.h"

int main() {
	Stack stack; // start out with empty stack
	// invoke the default DVC of Stack
	// which will invoke the DVC of LinkedList
	
	// okay to push and pop chars with our stack
	// each node in the linked list stores an int
	// A is ASCII value 65
	string toReverse = "Stack ADTS are awesome!!";
	int asciiValue = -1;
	
	for (char c : toReverse) {
		stack.push(c);
	}
	cout << stack.size() << endl;
	cout << "Output: ";
	while (!stack.isEmpty()) {
		asciiValue = stack.pop();
		cout << static_cast<char>(asciiValue);
	}
	cout << endl;
	
	/*cout << "Pushing" << endl;
	stack.push(5);
	stack.push(3);
	cout << stack.peek() << endl;
	cout << stack.isEmpty() << endl;
	cout << stack.size() << endl;
	
	int value = -1;
	cout << "Popping" << endl;
	value = stack.pop();
	cout << value << endl;
	cout << stack.peek() << endl;
	cout << stack.isEmpty() << endl;
	cout << stack.size() << endl;
	
	cout << "Popping" << endl;
	value = stack.pop();
	cout << value << endl;
	cout << stack.peek() << endl;
	cout << stack.isEmpty() << endl;
	cout << stack.size() << endl;
	*/
	
	cout << "Pushing and clearing" << endl;
	stack.push(5);
	stack.push(3);
	stack.clear();
	cout << stack.peek() << endl;
	cout << stack.isEmpty() << endl;
	cout << stack.size() << endl;


    /*LinkedList list; // start out empty list
	
	list.insertAtFront(12);
	list.insertAtFront(5);
	list.insertAtFront(3);
	
	list.displayList();*/
	/*list.deleteNode(3); // delete first node
	list.displayList();
	list.deleteNode(5);
	list.displayList();
	list.deleteNode(12);
	list.displayList();
	list.deleteNode(4);
	list.displayList();*/
	
	
	/*list.deleteAtEnd();
	list.displayList();
	list.deleteAtEnd();
	list.displayList();
	list.deleteAtEnd();
	list.displayList();
	list.deleteAtEnd();
	list.displayList();*/
	
	/*list.deleteAtFront();
	list.displayList();
	list.deleteAtFront();
	list.displayList();
	list.deleteAtFront();
	list.displayList();
	list.deleteAtFront();
	list.displayList();
	*/
	
	//list.appendNode(15);
	/*list.displayList();
	list.insertInOrder(7);
	list.displayList();
	list.insertInOrder(2);
	list.displayList();
	list.insertInOrder(15);
	list.displayList();*/
   
   	return 0;
}
