#pragma once
#include "linked_list.h"
class my_stack
{
public:
	my_stack();
	~my_stack();
	void push(int data);
	int pop();
	int size();
private:
	linked_list list;
};

