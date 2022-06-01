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


