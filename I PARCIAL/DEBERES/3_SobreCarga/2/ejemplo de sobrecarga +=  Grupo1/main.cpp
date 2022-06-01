/*
UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE

Programa para sobrecarga de operadores +=
Autor(es): George Chicango y Marlyn Almeida
Fecha de creación: 14/05/2022
Fecha de modificación:14/05/2022
Grupo #1
Github del grupo:https://github.com/marlyn-almeida/Grupo-1-NRC-4683.git
Versión:1
Estructura de Datos 4683


*/
#include <iostream>
#include <windows.h>
#include "Operaciones.h"
#include "Datos.h"

using namespace std;

int main()
{
	typedef float (WINAPI *Validar)(char*);
	Validar validar;
	HINSTANCE libDLL=NULL;
	libDLL = LoadLibrary ("Proyecto 1.dll");
	validar=(Validar)GetProcAddress(libDLL,"ingresarDatos_Float");
	bool verificar=true;
    float datoUse;
    Datos datos;
    
    while(verificar){
    	datoUse = validar("\nIngrese valor 1: ");
    	datos.setValor1(datoUse);
    	datoUse = validar("\nIngrese valor 2: ");
    	datos.setValor2(datoUse);
    	datoUse = validar("\nIngrese valor 3: ");
    	datos.setValor3(datoUse);
    	datoUse = validar("\nIngrese valor 4: ");
    	datos.setValor4(datoUse);

   		 Operaciones operaciones;
    	//Suma
    	printf("\nSuma de 2 numeros : %.2f \n",operaciones.suma(datos.getValor1(),datos.getValor2()));
    	printf("Suma de 3 numeros : %.2f \n",operaciones.suma(datos.getValor1(),datos.getValor2(),datos.getValor3()));
    	printf("Suma de 4 numeros : %.2f \n",operaciones.suma(datos.getValor1(),datos.getValor2(),datos.getValor3(),datos.getValor4()));
    	printf("Suma de 4 numeros : %.2f \n",operaciones.suma(datos.getValor1(),datos.getValor2(),datos.getValor3(),datos.getValor4()));
    
    	datoUse=validar("\n==============\n1. Repetir\n(Otro). Salir\n==============\nIngrese Opcion: ");
    		if(datoUse!=1){
				verificar=false;
			}
		}
  
    return 0;
}
