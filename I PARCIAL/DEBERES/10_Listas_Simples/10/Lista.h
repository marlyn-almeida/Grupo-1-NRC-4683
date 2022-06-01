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
	void buscar(float val);

private:
	Nodo<T>* cabeza;
	int _tamanio;
};
