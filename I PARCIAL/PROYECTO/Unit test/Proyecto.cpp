// Proyecto.cpp: define el punto de entrada de la aplicacion.
//
#include "Menus.h"
#include <iostream>
#include "ListaCircularDoble.h"
#include "ListaPerson.h"
//#include "Image.h"
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
                          "Presentar Logo",
                          "Salir",};
    menu_Principal.menuTeclas(opciones, 7, tam, lista, lis_a);
    
    
//	hConWnd = GetConsoleWndHandle();
//			if (hConWnd) {
//				nombre de la imagen, handle, ID, ubicacion x, ubicacio Y, ancho, altura,0 ajuste auyomatico
//				BCX_Bitmap("logo.bmp", hConWnd, 123, 160, 160, 0, 0);
//				Sleep(9000);
//			}
	
	
	return 0;
}
