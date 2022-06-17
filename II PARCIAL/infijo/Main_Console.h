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

#include "Screen.h"
#include "Stack.h"
#include "Converter_Calculator.h"

class Main_Console {
	public:
		void main_menu();		
		void infix_menu();
		void prefix_menu();
		void postfix_menu();
		void infix_to_prefix();
		void infix_to_postfix();
		void infix_to_functional();
		void prefix_to_infix();
		void prefix_to_postfix();
		void prefix_to_functional();
		void postfix_to_infix();
		void postfix_to_prefix();
		void postfix_to_functional();
	private:
		Screen screen;
		Converter_Calculator calculator;
};
