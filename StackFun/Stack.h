#ifndef STACK_H
#define STACK_H

#include "LinkedList.h"

// 2 ways to think about implementing a stack
// 1) composition: Stack has a LinkedList
// 2) inheritance: Stack is a LinkedList

// 2)
class Stack : public LinkedList {
	// no Stack-specific state
	// Stack-specific operations
	public:
		void push(int); 
		int pop(); 
		int peek(); 
		bool isEmpty();
		void clear();
		int size();
};

#endif
