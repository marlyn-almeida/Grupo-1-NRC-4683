#include "NodoPerson.h"

/**
 * @brief NodoPerson
 * @param _dato
 */
NodoPerson::NodoPerson( Persona _dato)
{
	dato = _dato;
	siguiente = NULL;
	anterior = NULL;
}
/**
 * @brief getDato
 * @return dato
 */
Persona NodoPerson::getDato() {
	return dato;
}
/**
 * @brief setDato
 * @param _dato
 */
void NodoPerson::setDato(Persona _dato) {
	dato = _dato;
}
/**
 * @brief getSiguiente
 * @return siguiente
 */
NodoPerson* NodoPerson::getSiguiente() {
	return siguiente;
}

/**
 * @brief setSiguiente
 * @param _siguiente
 */
void NodoPerson::setSiguiente(NodoPerson* _siguiente) {
	siguiente = _siguiente;
}
/**
 * @brief getAnterior
 * @return anterior
 */
NodoPerson* NodoPerson::getAnterior() {
	return anterior;
}
/**
 * @brief setAnterior
 * @param _anterior
 */
void NodoPerson::setAnterior(NodoPerson* _anterior) {
	anterior = _anterior;
}

