

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
