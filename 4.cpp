#include <iostream>
#include <queue>
using namespace std;
class Node {
	public;
	int data;
	Node *prev;
	Node *next;
	Node (int data) {
		this->data = data;
		this->next = NULL;
		this->prev = Null;
	}
};

class Queue {
	public;
	Node *front;
	Node *tail;
	int sz;

	Queue () {
		front = NULL;
		tail = NULL;
		sz = 0;
	}

	void push (int data) {
		Node *nn = new Node (data);
		if (tail == NULL) {
			tail = nn;
			front = nn;
		} else {
			nn->next = tail;
			tail->prev = nn;
			tail = nn;
		}
		sz++;
	}

	void pop() {
		if (front!= NULL) {
			front = front->prev;
			front->next = NULL;
			sz--;
		}
	}

	int size () {
		return sz;
	}
	bool empty () {
		if (sz == 0)
			return true;
	}
}