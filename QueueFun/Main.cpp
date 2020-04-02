#include "LinkedList.h"
#include "Queue.h"
#include "PriorityQueue.h"

int main() {
	PriorityQueue q;
	int value = -1;
	q.enqueue(6);
	q.enqueue(3);
	q.enqueue(5);
	q.displayList();
	value = q.dequeue();
	cout << "dequeued: " << value << endl;
	q.displayList();
	q.enqueue(12);
	q.displayList();
	
	cout << q.peek() << endl;
	cout << q.isEmpty() << endl;
	q.clear();
	cout << q.isEmpty() << endl;
	q.displayList();
	
	
    /*LinkedList list; // start out empty list
	
	list.appendNode(12);
	list.appendNode(5);
	list.appendNode(3);
	
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
