#include "Stack.h"

// the head of the linked list is the
// top of the stack
void Stack::push(int newItem) {
	insertAtFront(newItem);
}

int Stack::pop() {
	return deleteAtFront();
}

int Stack::peek() {
	if (head != NULL) {
		return head->value;
	}
	return -1;
} 

bool Stack::isEmpty() {
	if (head != NULL) {
		return false;
	}
	return true;
}

void Stack::clear() {
	// 2 ways to implement clear()
	// 1) we can write a loop
	//while (!isEmpty()) {
	//	pop();
	//}
	// 2) we can leverage the destructor code we already wrote in LinkedList
	destroyList();
}

int Stack::size() {
	// 2 ways to implement size()
	// 1) traverse the list and count the # of nodes O(N)
	// 2) to add a count or size attribute to LinkedList or to Stack
	// keep it up to date on push() and on pop()
	// on all adds/inserts and on all deletes
	// O(1)
	int count = 0;
	Node * currNode = head;
	while (currNode != NULL) {
		count++;
		currNode = currNode->next;
	}
	return count;
}
