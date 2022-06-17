

#pragma once

#include <string>
#include "Stack.h"
#include "String_Operations.h"

using namespace std;

class Converter_Calculator {
public:

	string infix_to_prefix(string);
	string infix_to_postfix(string);
	string infix_to_functional(string);

	string prefix_to_infix(string);
	string prefix_to_postfix(string);
	string postfix_to_infix(string);

	string prefix_to_functional(string);
	string postfix_to_prefix(string);
	string postfix_to_functional(string);


	int order_of_precedence(char);
	bool check_operator(char);
	bool check_operation(char);
	bool check_if_is_operand(char);

private:
	String_Operations string_operations;
	String_Operations string_reverse;
	Stack stack;
};