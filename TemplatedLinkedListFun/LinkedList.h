#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>

using namespace std;

// a linked list of Nodes
// each Node stores a single integer value
// can be expanded to store multiple values
// or templated to store any value type
template <class T>
class LinkedList {
	private:
		// self referential
	   struct Node {
		  T value; // data value Node stores
		  struct Node * next; // points to next Node in list
	   }; 

	   Node * head; // list head pointer

	public:
	   LinkedList(); // DVC
	   ~LinkedList(); // destructor
		  
	   // common linked list operations
	   void insertAtFront(T);
	   void displayList();
	   void appendNode(T); // insert at end
	   void insertInOrder(T);
	   void deleteAtFront();
	   void deleteAtEnd();
	   void deleteNode(T);
};

// to break this up into header and source
// follow the guide below
// method #3 from 
// https://www.codeproject.com/Articles/48575/How-to-Define-a-Template-Class-in-a-h-File-and-Imp
// to avoid linking problems
// during compilation because we
// used a template class
// and split its implementation up 
// into header and source file
//#include "LinkedList.cpp"
// then only compile Main.cpp

// begin LinkedList.cpp contents
template <class T>
LinkedList<T>::LinkedList() {
	head = NULL;
	cout << sizeof(Node) << endl;
}

template <class T>
LinkedList<T>::~LinkedList() {
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
}

template <class T>
void LinkedList<T>::insertAtFront(T newValue) {
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

template <class T>
void LinkedList<T>::displayList() {
	Node * currNode = head;
	
	cout << "head->";
	while (currNode != NULL) {
		cout << currNode->value << "->";
		// progress towards BC being false
		currNode = currNode->next;
	}
	cout << "NULL" << endl;
}

template <class T>
void LinkedList<T>::appendNode(T newValue) {
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

template <class T>
void LinkedList<T>::insertInOrder(T newValue) {
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

template <class T>
void LinkedList<T>::deleteAtFront() {
	// check to make sure there is something to delete
	if (head != NULL) {
		Node * nodeToDelete = head;
		head = head->next;
		delete nodeToDelete;
	}
}

template <class T>
void LinkedList<T>::deleteAtEnd() {
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

template <class T>
void LinkedList<T>::deleteNode(T targetValue) {
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
#endif
