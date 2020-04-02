#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
#include "LinkedList.h"

using namespace std;

class Queue : public LinkedList {
	// no queue specific attributes needed
	public:
		// common queue operations
		virtual void enqueue(int);
		int dequeue();
		int peek();
		void clear();
		bool isEmpty();
		int size();

};

#endif
