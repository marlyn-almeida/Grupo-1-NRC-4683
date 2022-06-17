/**  UNIVERSIDAD DE LAS FUERZAS ARMADAS "ESPE"
  *         INGENIERIA EN SOFTWARE
  *Title Infix_Prefix-Postfix
  *@Version 1.0
  *@date 04/07/2021
  *@author Sebastián Alexander Zapata Zapata  --- @sebastian771 --- Líder de Equipo
  *@author Adriana Alejandra Vargas Aldas  --- @adrivargas14
  *@author Christopher Israel Loachamin Simbaña  --- @ciloachamin
  *@author Mateo Nicolás Andrade Peñafiel --- @MateoNicolasAndrade
  *@author Dayse Nicole Poma Aguilar  --- @dnpoma

*/

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