/*
UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE

Programa para sobrecarga de operadores +
Autor(es): George Chicango y Marlyn Almeida
Fecha de creación: 14/05/2022
Fecha de modificación:14/05/2022
Grupo #1
Github del grupo:https://github.com/marlyn-almeida/Grupo-1-NRC-4683.git
Versión:1
Estructura de Datos 4683


*/
#include <iostream>
#include "Operaciones.h"
#include "Datos.h"
#include "Ingresar.h"
using namespace std;

int main()
{
    float datoUse;

    Datos datos;
    Ingresar ingresar;
    
	datoUse = ingresar.ingresarDatos_Float("\nIngrese valor 1:");
    datos.setValor1(datoUse);
    datoUse = ingresar.ingresarDatos_Float("\nIngrese valor 2:");
    datos.setValor2(datoUse);
    datoUse = ingresar.ingresarDatos_Float("\nIngrese valor 3:");
    datos.setValor3(datoUse);
    datoUse = ingresar.ingresarDatos_Float("\nIngrese valor 4:");
    datos.setValor4(datoUse);

    Operaciones operaciones;
    //Suma
    printf("\nSuma de 2 numeros : %.2f \n",operaciones.Suma(datos.getValor1(),datos.getValor2()));
    printf("Suma de 3 numeros : %.2f \n",operaciones.Suma(datos.getValor1(),datos.getValor2(),datos.getValor3()));
    printf("Suma de 4 numeros : %.2f \n",operaciones.Suma(datos.getValor1(),datos.getValor2(),datos.getValor3(),datos.getValor4()));





    return 0;
}
