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

