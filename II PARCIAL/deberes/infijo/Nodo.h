

#pragma once

#include <string>

using namespace std;

class Nodo {
private:
	char symbol;
	string symbol_str;
	Nodo* next;	
public: 
	Nodo();
	void set_next(Nodo*);
	Nodo* get_next();
	void set_symbol(char);
	char get_symbol();
	void set_symbol_str(string);
	string get_symbol_str();
	~Nodo();
};