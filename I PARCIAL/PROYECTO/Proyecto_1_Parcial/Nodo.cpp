#include "Nodo.h"

Nodo::Nodo(Auto _dato)
{
	dato = _dato;
	siguiente = NULL;
	anterior = NULL;
}
Auto Nodo::getDato() {
	return dato;
}
void Nodo::setDato(Auto _dato) {
	dato = _dato;
}
Nodo* Nodo::getSiguiente() {
	return siguiente;
}
void Nodo::setSiguiente(Nodo* _siguiente) {
	siguiente = _siguiente;
}
Nodo* Nodo::getAnterior() {
	return anterior;
}
void Nodo::setAnterior(Nodo* _anterior) {
	anterior = _anterior;
}
