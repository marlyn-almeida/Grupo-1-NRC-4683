/*
UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE

listas simples
Autor(es): George Chicango y Marlyn Almeida
Fecha de creación: 19/05/2022
Fecha de modificación:19/05/2022
Grupo #1
Github del grupo:https://github.com/marlyn-almeida/Grupo-1-NRC-4683.git
Versión:1
Estructura de Datos 4683


*/

#pragma once
#include "Nodo.h"
#include "Nodo.cpp"
#include <iostream>

template<typename T>
class Lista {
public:
	Lista();
	Nodo<T>* insertarFinal(T valor);
	Nodo<T>* insertarInicio(T valor);
	Nodo<T>* insertarEn(T valor, int indice);
	void eliminar(int indice);
	void eliminarFinal();
	void eliminarInicio();
	Nodo<T>* inicial();
	Nodo<T>* final();
	bool estaVacio();
	int tamanio();
	void imprimir_todo();
	void bus
	
	car(float val);

private:
	Nodo<T>* cabeza;
	int _tamanio;
};
