#pragma once

template <typename T>
class NodoDoble {
public:
	NodoDoble(T valor, NodoDoble<T>* anterior, NodoDoble<T>* siguiente);
	NodoDoble(T valor);
	T obtenerValor();
	void definirValor(T valor);
	NodoDoble<T>* obtenerSiguiente();
	NodoDoble<T>* obtenerAnterior();
	void definirSiguiente(NodoDoble<T>* siguiente);
	void definirAnterior(NodoDoble<T>* anterior);

private:
	T valor;
	NodoDoble<T>* siguiente;
	NodoDoble<T>* anterior;
};

//////////////////////////////////////////////////////////////////////////////////////////////////////
