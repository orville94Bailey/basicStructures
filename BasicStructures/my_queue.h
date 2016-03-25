#pragma once
#include "linked_list.h"
class my_queue
{
public:
	my_queue();
	~my_queue();
	void push(int data);
	int pop();
	int size();
private:
	linked_list list;
};

