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
#include "Operacion.h"
#include "Ingresar.h"

int main(int argc, char** argv) {
	Operacion *OP=new Operacion;
	Ingresar ingresar;
	int n;
	n = ingresar.ingresarDatos_Int("Ingrese un numero:");
	
	for(int i=1;i<=n;i++){
		printf("\nSUMA = %d ",OP->suma(i));
		printf(" - factorial = %d",OP->factorial(i));
	}
	return 0;
}

