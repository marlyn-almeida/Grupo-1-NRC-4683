
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
#include <Windows.h>
#include "Cproceso.h"
int main(int argc, char** argv) {
	
	typedef int (WINAPI *Validar)(char*);
	Validar validar;
	
	HINSTANCE libDLL=NULL;
	libDLL = LoadLibrary ("Proyecto 1.dll");
	int a,b,c,d;
	
	validar=(Validar)GetProcAddress(libDLL,"ingresarDatos_Int_N_P");
	
	a = validar("\nIngrese numero 1: ");
	b = validar("\nIngrese numero 2: ");
	c = validar("\nIngrese numero 3:");
	d = validar("\nIngrese numero 4:");
	
	printf("\n=======Fracciones=======\n");
	
	Cproceso *obj1=new Cproceso(a,b);
	Cproceso *obj2=new Cproceso(c,d);
	Cproceso *obj3=new Cproceso(d,d);
	*obj3 = obj3->racional(*obj1,*obj2);
	obj1->imprimirObj(*obj1);
	obj2->imprimirObj(*obj2);
	obj3->imprimirObj(*obj3);
	return 0;
}
