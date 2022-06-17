

#pragma once

#include "Nodo.h"
#include <iostream>
#include <string>

using namespace std;

class Stack {
private:
	Nodo* first;
public:
	Stack();
	~Stack();
	void set_first(Nodo*);
	Nodo* get_first();
	void insert_stack(char);
	void insert_stack(string);
	void delete_stack();
	void print_stack();
	bool empty_stack();
};

