/*
UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE

Programa para Conversion a binarios
Autor(es): George Chicango y Marlyn lmeida
Fecha de creación: 18/05/2022
Fecha de modificación:19/05/2022
Grupo #1
Github del grupo: https://github.com/marlyn-almeida/Grupo-18.git
Versión:1
Estructura de Datos 4683


*/
#include <iostream>
#include <windows.h>
#include "Proceso.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


using namespace std;



int main(int argc, char** argv) {
	
	typedef int (WINAPI *Validar)(char*);
	typedef int (WINAPI *Validar_B)(char*);
	Validar validar;
	Validar_B validar_b;
	
	HINSTANCE libDLL=NULL;
	libDLL = LoadLibrary ("Proyecto 1.dll");
	validar=(Validar)GetProcAddress(libDLL,"ingresarDatos_Int_N_P");
	validar_b=(Validar_B)GetProcAddress(libDLL,"ingresarDatos_Binario");
	
	char *cad=new char;
	*cad = {'\0'};
	int date,date_Use;
	int num=0,num1=0;

	Proceso Proceso;
	
	date= validar("\nIngrese Decimal: ");
	date_Use= validar_b("\nIngrese Binario: ");
	cout<<"\nDecimal a binario  :";
	Proceso.decimalBinario(date,cad);
	
	cout<<"\nBinario a Decimal  :";
	Proceso.BinarioDecimal(date_Use,num,num1);
	
	return 0;
}
