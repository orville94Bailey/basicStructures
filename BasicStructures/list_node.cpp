#include "stdafx.h"
#include "list_node.h"


list_node::list_node(int data)
{
	next_node = NULL;
	prev_node = NULL;
	this->data = data;
}


list_node::~list_node()
{
}

void list_node::set_data(int data)
{
	this->data = data;
}

int list_node::get_data()
{
	return this->data;
}
