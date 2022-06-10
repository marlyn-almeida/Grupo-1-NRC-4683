// Proyecto.cpp: define el punto de entrada de la aplicacion.
//
#include "Menus.h"
#include <iostream>
#include "ListaCircularDoble.h"
#include "ListaPerson.h"
#include "Image.h"
#include "Utils.h"
#include "Marquee.h"
using namespace std;

int main()
{
	Menus menu_Principal;
	ListaPerson lista;
	ListaCircularDoble lis_a;
	hConWnd = GetConsoleWndHandle();
		
			
	
	Marquee mrk(" Grupo 1 - Integrantes: George Chicango y Marlyn Almeida -Proyecto Final 1     ------------", 150);
	mrk.animation();
	
	int tam = 0;
    string opciones[] = { "Agregar Informacion del Usuario",
                          "Buscar Informacion",
                          "Mostrar Reporte De un Usuario",
                          "Eliminar Dato del Cliente ",
                          "Salir",};
    menu_Principal.menuTeclas(opciones, 5, tam, lista, lis_a);
    system("cls");
    
    
	if (hConWnd) {
				//nombre de la imagen, handle, ID, ubicacion x, ubicacio Y, ancho, altura,0 ajuste auyomatico
				BCX_Bitmap("logo.bmp", hConWnd, 123, 60, 60, 0, 0);
				Sleep(10000);
				system("pause");
			}
	
	
	return 0;
}
