/*
UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE

listas dobles
Autor(es): George Chicango y Marlyn Almeida
Fecha de creaci�n: 19/05/2022
Fecha de modificaci�n:19/05/2022
Grupo #1
Github del grupo:https://github.com/marlyn-almeida/Grupo-1-NRC-4683.git
Versi�n:1
Estructura de Datos 4683


*/

#include "Nodo.h"
#include <iostream>
Nodo::Nodo()
{
    dato = NULL;
    sig = NULL;
}

Nodo::Nodo(int dat, Nodo *sigu){
    dato = dat;
    sig = sigu;
}

int Nodo::getDato()
{
    return dato;
}

Nodo* Nodo::getSig()
{
    return sig;
}

void Nodo::setDato(int dat)
{
    dato = dat;
}

void Nodo::setSig(Nodo* sigu)
{
    sig = sigu;
}
