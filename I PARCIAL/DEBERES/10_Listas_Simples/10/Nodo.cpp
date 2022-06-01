
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
