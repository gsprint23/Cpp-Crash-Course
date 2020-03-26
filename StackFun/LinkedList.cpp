#include "LinkedList.h"

LinkedList::LinkedList() {
	head = NULL;
	cout << sizeof(Node) << endl;
}

LinkedList::~LinkedList() {
	// TODO: free each Node's memory in the list
		destroyList();
}

void LinkedList::destroyList() {
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
}

void LinkedList::insertAtFront(int newValue) {
	// make a new Node
	Node * newNode = new Node;
	newNode->value = newValue;
	newNode->next = NULL;
	
	// 2 cases
	if (head == NULL) {
		head = newNode;
	} 
	else {
		// list is not empty
		newNode->next = head;
		head = newNode;
	}
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
}

void LinkedList::appendNode(int newValue) {
	// make a new Node
	Node * newNode = new Node;
	newNode->value = newValue;
	newNode->next = NULL;
	
	// 2 cases
	if (head == NULL) {
		head = newNode;
	} 
	else {
		// list is not empty
		// need to traverse list, stopping at the last node
		Node * currNode = head;
		while (currNode->next != NULL) {
			currNode = currNode->next;
		}
		// currNode points to the last node in the list
		currNode->next = newNode;
	}
}

void LinkedList::insertInOrder(int newValue) {
	// make a new Node
	Node * newNode = new Node;
	newNode->value = newValue;
	newNode->next = NULL;
	
	// 2 cases
	if (head == NULL) {
		head = newNode;
	} 
	else {
		// list is not empty
		Node * currNode = head;
		Node * prevNode = NULL; 
		
		while (currNode != NULL && currNode->value < newValue) {
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
		}
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
	}
	return value;
}

void LinkedList::deleteAtEnd() {
	if (head != NULL) {
		// list is not empty
		// need to traverse list, stopping at the last node
		Node * currNode = head;
		Node * prevNode = NULL;
		while (currNode->next != NULL) {
			prevNode = currNode;
			currNode = currNode->next;
		}
		if (prevNode == NULL) {
			// deleting at head... only one Node in the list
			delete head;
			head = NULL; // we now have an empty list
		} 
		else {
			delete currNode;
			prevNode->next = NULL;
		}
	}
}

void LinkedList::deleteNode(int targetValue) {
	// check case 1
	if (head != NULL) {
		// list is not empty
		// need to traverse list, stopping at the last node
		Node * currNode = head;
		// check case 2... the node to delete is the first node
		if (head->value == targetValue)  {
			head = head->next;
			delete currNode;
		}
		else { // case 3... the node to delete is not the first node, but might not even be in the list
			Node * prevNode = NULL;
			while (currNode != NULL && currNode->value != targetValue) {
				prevNode = currNode;
				currNode = currNode->next;
			}
			// check if we found targetValue
			if (currNode != NULL) {
				// did find it
				prevNode->next = currNode->next;
				delete currNode;
			}
		}
	}
}
