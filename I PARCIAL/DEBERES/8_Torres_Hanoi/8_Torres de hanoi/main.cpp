
/*
UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE

Programa para Torres de hanoi
Autor(es): George Chicango y Marlyn Almeida
Fecha de creación: 19/05/2022
Fecha de modificación:19/05/2022
Grupo #1
Github del grupo:https://github.com/marlyn-almeida/Grupo-1-NRC-4683.git
Versión:1
Estructura de Datos 4683


*/


#include <iostream>
#include <windows.h>
#include "Torre.h"

using namespace std;

int main()
{
	typedef int (WINAPI *Validar)(char*);
	Validar validar;
	HINSTANCE libDLL=NULL;
	libDLL = LoadLibrary ("Proyecto 1.dll");
	validar=(Validar)GetProcAddress(libDLL,"ingresarDatos_Int_P");
    int n, cont = 0,status=1;
    Torre torre;
    
    while(status!=0){
    	cout<<"\n=========================================="<<endl;
    	cout<<"Las torres son A B C"<<endl;
   		while(n>10||n==0){
    		n = validar("\nIngrese numero de Discos entre 1 y 10: ");	
		}
		cout<<"\n          ===  \n"<<endl;
		torre.calcularHanoi(n,'A','C','B', &cont);
    	cout<<"\nHizo: "<<cont<<" movimientos"<<endl;
  		system("pause");
		status = validar("\n1. Repetir \n0. Salir \n ");
		n=NULL;
		cout<<"\n=========================================="<<endl;
	}
    
    
    
    return 0;
}
