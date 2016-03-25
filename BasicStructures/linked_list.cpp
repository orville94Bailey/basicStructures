#include "stdafx.h"
#include "linked_list.h"


linked_list::linked_list()
{
	head = NULL;
	size = 0;
}


linked_list::~linked_list()
{
	list_node* holder = NULL;
	while (head != NULL)
	{
		holder = head;
		head = head->next_node;
		delete holder;
		holder = NULL;
	}
		
	size = 0;
}

void linked_list::push_front(int data)
{
	if (head != NULL)
	{
		list_node* holder;
		holder = new list_node(data);
		holder->next_node = head;
		head->prev_node = holder;
		head = holder;
	}
	else
	{
		head = new list_node(data);
	}
	size++;
}

void linked_list::push_back(int data)
{
	if (head != NULL)
	{
		list_node* holder = head;
		while(holder->next_node != NULL)
		{
			holder = holder->next_node;
		}
		holder->next_node = new list_node(data);
		holder->next_node->prev_node = holder;
		holder->next_node->next_node = NULL;
	}
	else
	{
		head = new list_node(data);
	}
	size++;
}

int linked_list::get_front()
{
	if (head != NULL)
	{
		return head->get_data();
	}
	else
	{
		return -10101010;
	}
	
}

int linked_list::get_back()
{
	if (head != NULL)
	{
		list_node* holder = head;
		while (holder->next_node != NULL)
		{
			holder = holder->next_node;
		}
		return holder->get_data();
	}
	else
	{
		return -10101010;
	}
}

void linked_list::pop_front()
{
	if (head != NULL)
	{
		list_node* holder = head;
		head = head->next_node;
		if (head != NULL)
		{
			head->prev_node = NULL;
		}
		holder->next_node = NULL;
		delete holder;
		size--;
	}
}

void linked_list::pop_back()
{
	if (head != NULL)
	{
		list_node* holder = head;
		while (holder->next_node != NULL)
		{
			holder = holder->next_node;
		}
		if (holder->prev_node != NULL)
		{
			holder->prev_node->next_node = NULL;
		}
		
		delete holder;
		size--;
	}
}

int linked_list::get_size()
{
	return size;
}

