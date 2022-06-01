#include "ListaCircularDoble.h"
#include <Windows.h>
#include <conio.h>
#include <stdio.h>
#include <iostream>
#define ARRIBA 72
#define ABAJO 80
#define ENTER 13


class Menu{
	public:
		int menu(const char titulo[], const char *opciones[], int n);
		void menu_principal();
		void menu_insertar();
		void menu_mostrar();
		void menu_buscar();
		void menu_eliminar();
		void gotoxy(int, int);
};
