#include "stdafx.h"
#include "my_stack.h"


my_stack::my_stack()
{
}


my_stack::~my_stack()
{
}

void my_stack::push(int data)
{
	list.push_front(data);
}

int my_stack::pop()
{
	int holder;
	holder = list.get_back();
	list.pop_back();
	return holder;
}

int my_stack::size()
{
	return list.get_size();
}
