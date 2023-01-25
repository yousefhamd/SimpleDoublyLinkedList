#include "DoubleLinkedList.h"

template<class T>
LinkedList<T>::LinkedList() {
	head = nullptr;
	last = nullptr;
}
template<class T>
void LinkedList<T>::push(T value) {
	node* new_node = new node;
	new_node->data = value;
	if (head == nullptr) {
		new_node->prev = nullptr;
		head = new_node;
	}
	else
	{
		new_node->prev = last;
		last->next = new_node;
	}
	last = new_node;
	last->next = nullptr;
	sz++;
}

template<class T>
void LinkedList<T>::pop() {
	if (!isEmpty()) {
		node* temp = last;
		last = last->prev;
		delete temp;
		sz--;
	}
}

template<class T>
void LinkedList<T>::print() {
	node* temp = last;
	while (temp->prev != nullptr) {
		cout << temp->data << " ";
		temp = temp->prev;
	}
}

template<class T>
bool LinkedList<T>::isEmpty() {
	return sz == 0;
}

template<class T>
int LinkedList<T>::size() {
	return sz;
}