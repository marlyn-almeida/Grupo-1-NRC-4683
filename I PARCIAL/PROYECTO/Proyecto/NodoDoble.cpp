
#include "NodoDoble.h"


template<typename T>
NodoDoble<T>::NodoDoble(T valor, NodoDoble<T>* anterior, NodoDoble<T>* siguiente) {
	this->valor = valor;
	this->anterior = anterior;
	this->siguiente = siguiente;
}

template<typename T>
NodoDoble<T>::NodoDoble(T valor) {
	this->valor = valor;
}

template<typename T>
T NodoDoble<T>::obtenerValor() {
	return valor;
}

template<typename T>
void NodoDoble<T>::definirValor(T valor) {
	this->valor = valor;
}

template<typename T>
NodoDoble<T>* NodoDoble<T>::obtenerSiguiente() {
	return siguiente;
}

template<typename T>
void NodoDoble<T>::definirSiguiente(NodoDoble<T>* siguiente) {
	this->siguiente = siguiente;
}

template<typename T>
NodoDoble<T>* NodoDoble<T>::obtenerAnterior() {
	return anterior;
}

template<typename T>
void NodoDoble<T>::definirAnterior(NodoDoble<T>* anterior) {
	this->anterior = anterior;
}