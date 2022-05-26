/*
UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE

Programa para Mostrar fracciones
Autor(es): George Chicango y Marlyn lmeida
Fecha de creación: 12/05/2022
Fecha de modificación:12/05/2022
Grupo #18
Github del grupo: https://github.com/marlyn-almeida/Grupo-18.git
Versión:1
Estructura de Datos 4683


*/


#include "Cproceso.h"
#include <iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////
// Name:       Cproceso::getNume()
// Purpose:    Implementation of Cproceso::getNume()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Cproceso::getNum(){
	return this->num;
}

////////////////////////////////////////////////////////////////////////
// Name:       Cproceso::setNume(int numerador)
// Purpose:    Implementation of Cproceso::setNume()
// Parameters:
// - newNume
// Return:     void
////////////////////////////////////////////////////////////////////////

void Cproceso::setNum(int numerador){
	this->num=numerador;
}

////////////////////////////////////////////////////////////////////////
// Name:       Cproceso::getDen()
// Purpose:    Implementation of Cproceso::getDen()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Cproceso::getDen(){
	return this->den;
}

////////////////////////////////////////////////////////////////////////
// Name:       Cproceso::setDen(int denominador)
// Purpose:    Implementation of Cproceso::setDen()
// Parameters:
// - newDen
// Return:     void
////////////////////////////////////////////////////////////////////////

void Cproceso::setDen(int denominador){
	this->den=denominador;
}
////////////////////////////////////////////////////////////////////////
// Name:       Cproceso::Cproceso(int numerador, int denominador)
// Purpose:    Implementation of Cproceso::Cproceso()
// Parameters:
// - numerador
// - denominador
// Return:     
////////////////////////////////////////////////////////////////////////

Cproceso::Cproceso(int numerador, int denominador)
{
    this->num=numerador;
	this->den=denominador;
}

////////////////////////////////////////////////////////////////////////
// Name:       Cproceso::~Cproceso()
// Purpose:    Implementation of Cproceso::~Cproceso()
// Return:     
////////////////////////////////////////////////////////////////////////

Cproceso::~Cproceso()
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Cproceso::racional(Cproceso obj1, Cproceso obj2)
// Purpose:    Implementation of Cproceso::racional()
// Parameters:
// - obj1
// - obj2
// Return:     Cproceso
////////////////////////////////////////////////////////////////////////

Cproceso Cproceso::racional(Cproceso obj1, Cproceso obj2)
{
  	int a,b,c,d;
	a=obj1.getNum();
	b=obj1.getDen();
	c=obj2.getNum();
	d=obj2.getDen();
	this->setNum((a*d)+(b*c));
	this->setDen(b*d);
	return *this;
}

////////////////////////////////////////////////////////////////////////
// Name:       Cproceso::imprimirObj(Cproceso obj)
// Purpose:    Implementation of Cproceso::imprimirObj()
// Parameters:
// - obj
// Return:     Cproceso
////////////////////////////////////////////////////////////////////////

Cproceso Cproceso::imprimirObj(Cproceso obj)
{
   cout<<obj.getNum()<<"/"<<obj.getDen()<<endl;
}
