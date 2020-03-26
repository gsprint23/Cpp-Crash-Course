#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>

using namespace std;

// a linked list of Nodes
// each Node stores a single integer value
// can be expanded to store multiple values
// or templated to store any value type
class LinkedList {
	protected:
		// self referential
	   struct Node {
		  int value; // data value Node stores
		  struct Node * next; // points to next Node in list
	   }; 

	   Node * head; // list head pointer

	public:
	   LinkedList(); // DVC
	   ~LinkedList(); // destructor
		  
	   // common linked list operations
	   void insertAtFront(int);
	   void displayList();
	   void appendNode(int); // insert at end
	   void insertInOrder(int);
	   int deleteAtFront();
	   void deleteAtEnd();
	   void deleteNode(int);
	   void destroyList();
};

#endif
