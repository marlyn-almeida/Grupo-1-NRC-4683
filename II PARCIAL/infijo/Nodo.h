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