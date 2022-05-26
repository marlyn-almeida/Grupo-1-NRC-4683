/*
UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE

Programa para Conversion de Tipo de Datos
Autor(es): George Chicango y Marlyn lmeida
Fecha de creación: 12/05/2022
Fecha de modificación:13/05/2022
Grupo #18
Github del grupo: https://github.com/marlyn-almeida/Grupo-18.git
Versión:1
Estructura de Datos 4683


*/
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "Ingresar.h"
#include "Menu.h"

using namespace std;

////////////////////////////////////////////////////////////////////////
// Name:       Menu::menu()
// Purpose:    Implementation of Menu::Menu()
// Return:     int
////////////////////////////////////////////////////////////////////////

Menu::menu()
{
	int opcion;
    bool repetir = true, verificar = false;
	float valor_decimal;
	int valor_entero;
	char *dato=new char[10];

    do {
        system("cls");
        opcion=ingresar->ingresarDatos_Int_P("\n\nMenu de Opciones\n1. Entero a Flotante\n2. flotante a entero\n3. Ingresar solo caracteres\n0. SALIR\nIngrese una opcion:");

        switch (opcion) {
            case 1:

				system("cls");
				sscanf(ingresar->ingresarDatos_Int("Insertar (+):"), "%f", &valor_decimal);
				cout << "\nCONVERTIDO A FLOTANTE ->" << endl;
   				printf("Valor decimal: %f\n", valor_decimal);
                system("pause>nul");
                break;

            case 2:

				system("cls");
				dato=ingresar->ingresarDatos_Float("Insertar (+): ");
				for(int i = 0 ; i < sizeof(dato) ; i++ ){
					if('.'==dato[i]){
						int val = atoi(&dato[i+1]);
						//printf("\n: %d\n", val);
						if(val >= 5){
							verificar = true;
						}
					}
				}
				sscanf(dato, "%i", &valor_entero);
				cout << "\nCONVERTIDO A ENTERO ->" << endl;
				if(	verificar == true){
					valor_entero = valor_entero+1;
					verificar = false;
				}
				printf("Valor Entero: %d\n", valor_entero);
                system("pause>nul");
                break;
                
			case 3:
				
				system("cls");
				cout << "\nSU CADENA DE CARACTERES ES ->" << ingresar->ingresarDatos_String("Insertar (+):")<< endl;
                system("pause>nul");
				break;

            case 0:
            	repetir = false;
            	break;
        }
    } while (repetir);
    return 0;

}



////////////////////////////////////////////////////////////////////////
// Name:       Menu::~menu()
// Purpose:    Implementation of Menu::~Menu()
// Return:     
////////////////////////////////////////////////////////////////////////

Menu::~Menu()
{
   // TODO : implement
}
