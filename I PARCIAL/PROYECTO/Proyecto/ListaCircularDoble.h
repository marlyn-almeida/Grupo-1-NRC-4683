

#pragma once
#include "NodoDoble.h"
#include <iostream>

template<typename T>
class ListaCircularDoble {
public:
	ListaCircularDoble();
	NodoDoble<T>* insertarFinal(T valor);
	NodoDoble<T>* insertarInicio(T valor);
	NodoDoble<T>* insertarEn(T valor, int indice);
	void eliminar(int indice);
	void eliminarFinal();
	void eliminarInicio();
	NodoDoble<T>* inicial();
	NodoDoble<T>* final();
	bool estaVacio();
	int tamanio();
	void recorrer(void (*callback)(T));

private:
	NodoDoble<T>* cabeza;
	int _tamanio;
};

//////////////////////////////////////////////////////////////////////////////////////////////////////
