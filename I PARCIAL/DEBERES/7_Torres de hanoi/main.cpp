
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

using namespace std;

int main()
{
    int n, cont = 0;
    char torreA,torreB,torreC;
    Hanoi hanoi;
    cout<<"Las torres son A B C"<<endl;
    cout<<"Numero de discos: ";
    cin>>n;
    hanoi.calcularHanoi(n,'A','C','B', &cont);
    cout<<"Hizo: "<<cont<<" movimientos"<<endl;

    system("pause");
    return 0;
}
