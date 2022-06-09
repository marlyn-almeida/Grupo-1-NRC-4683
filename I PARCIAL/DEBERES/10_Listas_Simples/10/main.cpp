/*
UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE

listas simples
Autor(es): George Chicango y Marlyn Almeida
Fecha de creación: 19/05/2022
Fecha de modificación:19/05/2022
Grupo #1
Github del grupo:https://github.com/marlyn-almeida/Grupo-1-NRC-4683.git
Versión:1
Estructura de Datos 4683


*/

#include <iostream>
#include "Lista.h"
#include "Lista.cpp"
#include <windows.h>

using namespace std;




int main() {
	
	typedef int (WINAPI *Validar_I)(char*);//Tipo de dato que ingresa, tipo de dato que sale
	typedef float (WINAPI *Validar_F)(char*);
	Validar_I validar_I;
	Validar_F validar_F;
	HINSTANCE libDLL=NULL;// inicializamos la libreria con Null
	libDLL = LoadLibrary ("Proyecto 1.dll"); //Cargamos la libreria
	validar_I=(Validar_I)GetProcAddress(libDLL,"ingresarDatos_Int_P");//
	validar_F=(Validar_F)GetProcAddress(libDLL,"ingresarDatos_Float");
	
	float num;
	int variable,posi;
	Lista<float> lista;
	int option=NULL;
	
	do {
		
		printf("");
		option=validar_I("\n\n==============MENU DE OPCIONES==============\n1. Insertar por la cabeza\n2. Insertar por la cola\n3. Eliminar por la cabeza\n4. Eliminar por la cola\n5. Mostrar\n6. Buscar Dato\n7. Salir\n  \t<============================>\n");
		switch (option) {
			case 1:
				num=validar_F("\nIngrese numero:");
				lista.insertarInicio(num);
			
				break;

			case 2:
				num=validar_F("\nIngrese numero:");
				lista.insertarFinal(num);
				
				break;

			case 3:
				printf("\nEliminara dato por la cabeza\n");
				lista.eliminarInicio();
				
				break;

			case 4:
				printf("\nEliminar dato por la cola\n");
				lista.eliminarFinal();
			
				break;

			case 5:
				printf("\nMostrar lista:\n");
				lista.imprimir_todo();
			
				break;
			case 6:
				printf("\nBuscar Dato en la Lista\n");
				num=validar_F("\nIngrese numero a buscar:");
				lista.buscar(num);
				break;
			case 7:
				printf("\nSalio con exito!.\n");
				system("pause");
				break;
			default:
				printf("\nInvalido!.\n");
				system("pause");
				break;
		}
	} while (option != 7);
	
	return 0;

}


