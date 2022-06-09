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
#include "Nodo.h"


template<typename T>
Nodo<T>::Nodo(T valor, Nodo<T>* siguiente) {
	this->valor = valor;
	this->siguiente = siguiente;
}

template<typename T>
Nodo<T>::Nodo(T valor) {
	this->valor = valor;
}

template<typename T>
T Nodo<T>::obtenerValor() {
	return valor;
}

template<typename T>
void Nodo<T>::definirValor(T valor) {
	this->valor = valor;
}

template<typename T>
Nodo<T>* Nodo<T>::obtenerSiguiente() {
	return siguiente;
}

template<typename T>
void Nodo<T>::definirSiguiente(Nodo<T>* siguiente) {
	this->siguiente = siguiente;
}
