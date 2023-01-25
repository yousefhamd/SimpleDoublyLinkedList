#pragma once
#include <iostream>
using namespace std;

template<class T>
class LinkedList
{
	int sz;
	struct node {
		T data;
		node* prev;
		node* next;
	};

	node* head, *last;
public:
	LinkedList();
	void push(T value);
	void pop();
	void print();
	bool isEmpty();
	int size();
};

