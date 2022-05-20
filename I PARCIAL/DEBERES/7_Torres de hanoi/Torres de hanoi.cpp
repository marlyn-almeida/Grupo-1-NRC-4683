
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
#include "Torres de hanoi.h"

 //Funcion Recursiva para torres de hanoi
 
void Hanoi::calcularHanoi(int num,char torreA,char torreC,char torreB, int *cont)
{

    if(num==1)
    {
            cout<<"Mueva el bloque "<<num<<" De "<<torreA<<" a  "<<torreC<<endl;
            *cont+=1;

    }
    else
    {
        calcularHanoi(num-1,torreA,torreB,torreC,cont);
        cout<<"Mueva el bloque "<<num<<" De "<<torreA<<" a  "<<torreC<<endl;
        *cont+=1;
        calcularHanoi(num-1,torreB,torreC,torreA,cont);
    }
}