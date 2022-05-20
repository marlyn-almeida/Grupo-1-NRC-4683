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

#include <iostream>
#include "Cproceso.cpp"
int main(int argc, char** argv) {
	int a=18,b=3;
	Cproceso *obj1=new Cproceso(a,b);
	Cproceso *obj2=new Cproceso(15,5);
	Cproceso *obj3=new Cproceso(0,0);
	*obj3 = obj3->racional(*obj1,*obj2);
	obj1->imprimirObj(*obj1);
	obj2->imprimirObj(*obj2);
	obj3->imprimirObj(*obj3);
	return 0;
}
