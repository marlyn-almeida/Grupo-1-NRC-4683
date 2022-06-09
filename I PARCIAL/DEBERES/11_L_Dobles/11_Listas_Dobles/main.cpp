/*
UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE

listas dobles
Autor(es): George Chicango y Marlyn Almeida
Fecha de creación: 19/05/2022
Fecha de modificación:19/05/2022
Grupo #1
Github del grupo:https://github.com/marlyn-almeida/Grupo-1-NRC-4683.git
Versión:1
Estructura de Datos 4683


*/


#include <iostream>
#include "Menus.h"
using namespace std;

int main()
{
    Menus objMenu;
    Lista *lista = new Lista();
    int tam = 0;
    string opciones[] = { "Insertar nodo al inicio",
                          "Insertar nodo al final",
                          "Insertar antes de un nodo",
                          "Insertar despues de un nodo",
                          "Eliminar primer nodo",
                          "Eliminar ultimo nodo",
                          "Eliminar nodo X",
                          "Eliminar antes de un nodo",
                          "Eliminar despues de un nodo",
                          "Buscar nodo",
                          "Imprimir lista",
                          "Operaciones",
                          "Salir",};
    objMenu.menuTeclas(opciones, 13, tam, lista);
    system("pause");
    return 0;
}
