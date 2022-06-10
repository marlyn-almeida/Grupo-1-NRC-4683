#include "Nodo.h"

Nodo::Nodo(Auto _dato)
{
	dato = _dato;
	siguiente = NULL;
	anterior = NULL;
}

/**
 * @brief getDato
 * @param dato
 *
 */
Auto Nodo::getDato() {
	return dato;
}
/**
 * @brief setDato
 * @param dato
 * @return dato
 */
void Nodo::setDato(Auto _dato) {
	dato = _dato;
}

/**
 * @brief getSiguiente
 * @return siguiente
 */
Nodo* Nodo::getSiguiente() {
	return siguiente;
}

/**
 * @brief setSiguiente
 * @param _siguiente
 * @return _siguiente
 */
void Nodo::setSiguiente(Nodo* _siguiente) {
	siguiente = _siguiente;
}

/**
 * @brief getAnterior
 * @return anterior
 */
Nodo* Nodo::getAnterior() {
	return anterior;
}

/**
 * @brief setAnterior
 * @param _anterior
 * @return _anterior
 */
void Nodo::setAnterior(Nodo* _anterior) {
	anterior = _anterior;
}
