#pragma once
#include "NodoPerson.h"
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <functional>
#include "Persona.h"
#include "ListaCircularDoble.h"


using namespace std;

class ListaPerson
{
public:
	ListaPerson();

	void insertar(Persona); 
	bool eliminar(string);
	void imprimir(ListaCircularDoble);
	bool buscar(string);
	void iterar(std::function<void(Persona)> lambda);
	
private:
	NodoPerson* primero;
	NodoPerson* ultimo;
};


