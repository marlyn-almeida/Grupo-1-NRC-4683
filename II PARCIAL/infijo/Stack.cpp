#include "Stack.h"


/**
* @brief constructor
*
*/
Stack::Stack()
{
	first = nullptr;
}

/**
* @brief destructor
*
*/
Stack::~Stack()
{
}

/**
* @brief setters
*
*/
void Stack::set_first(Nodo* new_primero)
{
	this->first = new_primero;
}

/**
* @brief getters
*
*/

Nodo* Stack::get_first()
{
	return first;
}

/**
* @brief inserta
*
*/
void Stack::insert_stack(char name)
{
	Nodo* nuevo = new Nodo();
	nuevo->set_symbol(name);
	nuevo->set_next(first);
	first = nuevo;
}

/**
* @brief inserta
*
*/

void Stack::insert_stack(string name)
{
	Nodo* nuevo = new Nodo();
	nuevo->set_symbol_str(name);
	nuevo->set_next(first);
	first = nuevo;
}

/**
* @brief elimina
*
*/
void Stack::delete_stack()
{
	char eliminar;
	Nodo* eliminar_ultimo = first;
	eliminar = eliminar_ultimo->get_symbol();
	first = eliminar_ultimo->get_next();
	delete eliminar_ultimo;
}

/**
* @brief imprime
*
*/
void Stack::print_stack()
{
	Nodo* actual = new Nodo();
	actual = first;
	if (first != NULL) {
		while (actual != NULL) {
			std::cout << std::endl << " " << actual->get_symbol();
			actual = actual->get_next();
		}
	}
	else {
		std::cout << std::endl << " La Pila se encuentra vacia" << std::endl << std::endl;
	}
}

bool Stack::empty_stack()
{
	return (this->first == NULL);
}
