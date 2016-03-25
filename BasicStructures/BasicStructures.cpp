// BasicStructures.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "linked_list.h"
#include "my_queue.h"
#include "my_stack.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

//TESTER Functions#############
void linked_list_tester();
void my_queue_tester();
void my_stack_tester();

int main()
{
	linked_list_tester();
	my_queue_tester();
	my_stack_tester();
    return 0;
}

void linked_list_tester()
{
	linked_list list;
	for (int i = 0; i < 26;i++)
	{
		list.push_front(i);
		cout << list.get_size() << " nodes in list" << endl;
	}

	for (int i = 0; i < 26;i++)
	{
		list.pop_front();
		cout << list.get_size() << " nodes in list" << endl;
	}
	cin.sync();
	cin.get();
}

void my_queue_tester()
{
	my_queue queue;
	for (int i = 0; i < 26; i++)
	{
		queue.push(i);
	}

	for (int i = queue.size(); i > 0; i--)
	{
		cout << queue.pop() << " ,";
	}
	cout << endl;
	cin.sync();
	cin.get();
}

void my_stack_tester()
{
	my_stack stack;
	for (int i = 0; i < 26; i++)
	{
		stack.push(i);
	}

	for (int i = stack.size(); i > 0; i--)
	{
		cout << stack.pop() << " ,";
	}
	cin.sync();
	cin.get();
}
