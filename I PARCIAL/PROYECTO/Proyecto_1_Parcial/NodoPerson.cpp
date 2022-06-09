#include "NodoPerson.h"

NodoPerson::NodoPerson( Persona _dato)
{
	dato = _dato;
	siguiente = NULL;
	anterior = NULL;
}
Persona NodoPerson::getDato() {
	return dato;
}
void NodoPerson::setDato(Persona _dato) {
	dato = _dato;
}
NodoPerson* NodoPerson::getSiguiente() {
	return siguiente;
}
void NodoPerson::setSiguiente(NodoPerson* _siguiente) {
	siguiente = _siguiente;
}
NodoPerson* NodoPerson::getAnterior() {
	return anterior;
}
void NodoPerson::setAnterior(NodoPerson* _anterior) {
	anterior = _anterior;
}

