/*
UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE

Programa para recursividad
Autor(es): George Chicango y Marlyn lmeida
Fecha de creación: 16/05/2022
Fecha de modificación:16/05/2022
Grupo #1
Github del grupo:https://github.com/marlyn-almeida/Grupo-1-NRC-4683.git
Versión:1
Estructura de Datos 4683


*/


#include <iostream>
#include <windows.h>
#include "Operacion.h"


int main(int argc, char** argv) {
	
	typedef int (WINAPI *Validar)(char*);
	Validar validar;
	HINSTANCE libDLL=NULL;
	libDLL = LoadLibrary ("Proyecto 1.dll");
	validar=(Validar)GetProcAddress(libDLL,"ingresarDatos_Int_P");
	Operacion *OP=new Operacion;
	
	
	int n;
	
	n = validar("\nIngrese un numero del 1 al 19: ");
	while(n>19||n==0){
		n = validar("\nIngrese un numero del 1 al 19: ");
	}

	
	for(int i=1;i<=n;i++){
		printf("\nSUMA = %d ",OP->suma(i));
		printf(" - factorial = %d",OP->factorial(i));
	}
	return 0;
}

