#pragma once
#include <iostream>
#include <conio.h>
#include <functional>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "Auto.h"
#include "Nodo.h"

using namespace std;

class ListaCircularDoble
{
public:
	ListaCircularDoble();
	void insertar(Auto); 
	bool eliminar(string);
	void imprimir(int);
	bool buscar(string);
	void iterar(std::function<void(Auto)> lambda);
private:
	Nodo* primero;
	Nodo* ultimo;
};

