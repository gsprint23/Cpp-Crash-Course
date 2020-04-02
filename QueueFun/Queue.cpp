#include "Queue.h"

void Queue::enqueue(int newValue) {
	appendNode(newValue);
}

int Queue::dequeue() {
	return deleteAtFront();
}

int Queue::peek() {
	if (head != NULL) {
		return head->value;
	}
	return -1;
}

void Queue::clear() {
	// 2 ways to implement clear()
	// 1) we can write a loop
	//while (!isEmpty()) {
	//	dequeue();
	//}
	// 2) we can leverage the destructor 
	// code we alread wrote in LinkedList
	destroyList();	
}

bool Queue::isEmpty() {
	if (head != NULL) {
		return false;
	}
	return true;
}

int Queue::size() {
	// 2 ways to implement size
	// 1) traverse the linked list and count
	// the number of nodes O(N)
	// 2) add a count/size attribute to LinkedList class
	// need to keep this up to date
	// O(1) 
	
	// 1)
	int count = 0;
	Node * currNode = head;
	while (currNode != NULL) {
		count++;
		currNode = currNode->next;
	}	
	return count;
}
