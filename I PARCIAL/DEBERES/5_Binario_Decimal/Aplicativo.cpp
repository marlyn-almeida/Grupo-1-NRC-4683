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
#include "Proceso.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


using namespace std;



int main(int argc, char** argv) {
	char *cad=new char;
	*cad = {'\0'};
	int Bin;
	int num=0,num1=0;
	
	Proceso Proceso;
	cout<<"\nDecimal a binario  :";
	Proceso.decimalBinario(124,cad);
	//cout<<"\nDecimal a binario "<<cad;
	
	cout<<"\nBinario a Decimal  :";
	Proceso.BinarioDecimal(1110,num,num1);
	
	return 0;
}
