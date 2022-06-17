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

#include <Windows.h>
#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>


#define kEY_UP 72
#define KEY_DOWN 80
#define KEY_ENTER 13

class Screen {
public:
	void print_coordinates(short int, short int);
	void ajust_size();
	int print_menu(const char*, const char* [], int);
	void print_squart(int, int, int, int);
};