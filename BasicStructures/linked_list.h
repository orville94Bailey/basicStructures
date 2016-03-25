#pragma once
#include "list_node.h"
class linked_list
{
public:
	linked_list();
	~linked_list();
	void push_front(int data);
	void push_back(int data);
	int get_front();
	int get_back();
	void pop_front();
	void pop_back();
	int get_size();
private:
	list_node* head;
	int size;
};

