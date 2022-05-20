/*
UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE

Programa para Conversion 
Autor(es): George Chicango y Marlyn lmeida
Fecha de creación: 18/05/2022
Fecha de modificación:19/05/2022
Grupo #1
Github del grupo: https://github.com/marlyn-almeida/Grupo-18.git
Versión:1
Estructura de Datos 4683


*/
#include <iostream>
#include <string.h>
#include "stdio.h"
#include "stdlib.h"
#include "Proceso.h"
#include <cmath>
#define BIN 2

////////////////////////////////////////////////////////////////////////
// Name:       Proceso::decimalBinario(int val, char *cad)
// Purpose:    Implementation of Proceso::decimalBinario()
// Parameters:
// - val
// - BIN
// Return:     void
////////////////////////////////////////////////////////////////////////

void Proceso::decimalBinario(int val, char  *cad )
{
   if(val>=1){
		decimalBinario((val/BIN),cad);
		strcpy(cad,itoa((val%BIN),cad,10));
		
	}
	strcat(cad,"\0");
	printf("%s",cad);	
}

////////////////////////////////////////////////////////////////////////
// Name:       Proceso::BinarioDecimal(long long int val, char *cad)
// Purpose:    Implementation of Proceso::BinarioDecimal()
// Parameters:
// - val
// - BIN
// Return:     void
////////////////////////////////////////////////////////////////////////

void Proceso::BinarioDecimal(int val, int cad_use, int num){
	
	if(val == 1 || val == 0){
		num+=(val % 10)* pow(2,cad_use);
		printf("%d  ",num);
	}else{
		num+=(val % 10)* pow(2,cad_use);
		cad_use++;
		BinarioDecimal((val / 10),cad_use,num);
		
	}

}
