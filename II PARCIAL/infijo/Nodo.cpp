#include "Nodo.h"
/**
* @brief Constructor
*
* 
*/
Nodo::Nodo()
{
	symbol = 0;	
	next = nullptr;
}
/**
* @brief setter
* @param Nodo*
* 
*/
void Nodo::set_next(Nodo* new_siguiente)
{
    this->next = new_siguiente;
}
/**
* @brief getter
*
* @return next
*/
Nodo* Nodo::get_next()
{
    return next;
}
/**
* @brief setter
* @param char new_simbolo
*
*/
void Nodo::set_symbol(char new_simbolo)
{
    this->symbol = new_simbolo;
}
/**
* @brief getter
*
* @return symbol
*/
char Nodo::get_symbol()
{
    return symbol;
}
/**
* @brief setter
*
* @param string new_symbol_str
*/
void Nodo::set_symbol_str(string new_symbol_str)
{
    this->symbol_str = new_symbol_str;
}
/**
* @brief getter 
*
* @return symbol_str
*/
string Nodo::get_symbol_str()
{
    return symbol_str;
}
/**
* @brief Destructor
*
*/
Nodo::~Nodo()
{
}
