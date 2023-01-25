#include "DoubleLinkedList.h"
#include "DoubleLinkedList.cpp"
int main() {
	LinkedList<int> list;
	list.push(2);
	list.push(3);
	list.push(10);
	list.push(5);
	list.push(4);
	list.print();
	return 0;
}