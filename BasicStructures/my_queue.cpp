#include "stdafx.h"
#include "my_queue.h"


my_queue::my_queue()
{
}


my_queue::~my_queue()
{
}

void my_queue::push(int data)
{
	list.push_back(data);
}

int my_queue::pop()
{
	int holder = list.get_front();
	list.pop_front();
	return holder;
}

int my_queue::size()
{
	return list.get_size();
}
