// Proyecto.cpp: define el punto de entrada de la aplicacion.
//
#include "Menus.h"
#include <iostream>
#include "ListaCircularDoble.h"
#include "ListaPerson.h"
using namespace std;

int main()
{
	Menus menu_Principal;
	ListaPerson lista;
	ListaCircularDoble lis_a;
	
	int tam = 0;
    string opciones[] = { "Agregar Informacion del Usuario",
                          "Buscar Informacion",
                          "Mostrar Reporte De un Usuario",
                          "Eliminar Dato del Cliente ",
                          "Generar Reporte!!! ",
                          " ",
                          "Salir",};
    menu_Principal.menuTeclas(opciones, 7, tam, lista, lis_a);

	return 0;
}
