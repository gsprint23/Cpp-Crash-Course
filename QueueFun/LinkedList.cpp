#include "LinkedList.h"

LinkedList::LinkedList() {
	head = NULL;
	tail = NULL;
	cout << sizeof(Node) << endl;
}

LinkedList::~LinkedList() {
	destroyList();
}

void LinkedList::destroyList() {
	// TODO: free each Node's memory in the list
	Node * currNode = head;
	Node * nextNode = NULL;
	
	while (currNode != NULL) {
		// save the link to the next node
		nextNode = currNode->next;
		// can safely delete currNode
		delete currNode;
		currNode = nextNode;
	}
	head = NULL; // for good practice
	tail = NULL;
}

void LinkedList::displayList() {
	Node * currNode = head;
	
	cout << "head->";
	while (currNode != NULL) {
		cout << currNode->value << "->";
		// progress towards BC being false
		currNode = currNode->next;
	}
	cout << "NULL" << endl;
	if (tail != NULL) {
		cout << "tail->" << tail->value << endl;
	}
	else {
		cout << "tail->NULL" << endl;
	}
}

void LinkedList::appendNode(int newValue) {
	// make a new Node
	Node * newNode = new Node;
	newNode->value = newValue;
	newNode->next = NULL;
	
	// 2 cases
	if (head == NULL) {
		head = newNode;
		tail = newNode;
	} 
	else {
		// list is not empty
		tail->next = newNode;
		tail = newNode;
	}
}


int LinkedList::deleteAtFront() {
	// check to make sure there is something to delete
	int value = -1;
	if (head != NULL) {
		Node * nodeToDelete = head;
		head = head->next;
		value = nodeToDelete->value;
		delete nodeToDelete;
		if (head == NULL) {
			tail = NULL;
		}
	}
	return value;
}

void LinkedList::insertInOrder(int newValue) {
	// make a new Node
	Node * newNode = new Node;
	newNode->value = newValue;
	newNode->next = NULL;
	
	// 2 cases
	if (head == NULL) {
		head = newNode;
		tail = newNode;
	} 
	else {
		// list is not empty
		Node * currNode = head;
		Node * prevNode = NULL; 
		
		while (currNode != NULL && currNode->value > newValue) {
			prevNode = currNode;
			currNode = currNode->next;
		}
		
		// 2 cases to check
		// 1) inserting at head... so we didn't advance currNode (therefore prevNode is NULL)
		// 2) inserting somewhere other than the head, need to the splicing
		if (prevNode == NULL) {
			head = newNode;
			newNode->next = currNode;
		}
		else {
			prevNode->next = newNode;
			newNode->next = currNode;
			if (newNode->next == NULL) {
				// new last node in the list
				tail = newNode;
			}
		}
	}
}
