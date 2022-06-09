#pragma once
#include<stdlib.h>
#include "Persona.h"

class NodoPerson {
public:
	NodoPerson(Persona);
	Persona getDato();
	void setDato(Persona);
	NodoPerson* getSiguiente();
	void setSiguiente(NodoPerson*);
	NodoPerson* getAnterior();
	void setAnterior(NodoPerson*);
private:
	Persona dato;
	NodoPerson* siguiente;
	NodoPerson* anterior;
};


