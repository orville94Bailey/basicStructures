#pragma once

class list_node
{
public:
	list_node(int data);
	~list_node();
	list_node* next_node;
	list_node* prev_node;
	void set_data(int data);
	int get_data();
private:
	int data;
};

