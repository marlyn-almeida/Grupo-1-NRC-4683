#pragma once
#include<stdlib.h>
#include "Auto.h"


using namespace std;
class Nodo {
public:
	Nodo(Auto);
	Auto getDato();
	void setDato(Auto);
	Nodo* getSiguiente();
	void setSiguiente(Nodo*);
	Nodo* getAnterior();
	void setAnterior(Nodo*);
private:
	Auto dato;
	Nodo* siguiente;
	Nodo* anterior;
};

