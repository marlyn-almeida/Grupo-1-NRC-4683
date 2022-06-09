/*
UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE

listas simples
Autor(es): George Chicango y Marlyn Almeida
Fecha de creaci�n: 19/05/2022
Fecha de modificaci�n:19/05/2022
Grupo #1
Github del grupo:https://github.com/marlyn-almeida/Grupo-1-NRC-4683.git
Versi�n:1
Estructura de Datos 4683


*/

#pragma once

template <typename T>
class Nodo {
public:
	Nodo(T valor, Nodo<T>* siguiente);
	Nodo(T valor);
	T obtenerValor();
	void definirValor(T valor);
	Nodo<T>* obtenerSiguiente();
	void definirSiguiente(Nodo<T>* siguiente);
private:
	T valor;
	Nodo<T>* siguiente;
};

//////////////////////////////////////////////////////////////////////////////////////////////////////


