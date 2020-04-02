#include "PriorityQueue.h"

void PriorityQueue::enqueue(int newValue) {
	insertInOrder(newValue);
}
