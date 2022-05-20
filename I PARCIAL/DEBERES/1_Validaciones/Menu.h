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

using namespace std;

class Menu{

	private://atributos
		Ingresar* ingresar;
	public://metodos
	    int menu();

};

/*constructor
Menus::Menus(int opcion){
	opc=opcion;
}*/

int Menu::menu(){

    int opcion;
    bool repetir = true, verificar = false;
	float valor_decimal;
	int valor_entero;
	char *dato=new char[10];

    do {
        system("cls");
        
        // Texto del menÃº
        cout << "\n\nMenu de Opciones" << endl;
   		cout << "1. Entero a Flotante" << endl;
		cout << "2. flotante a entero" << endl;
        cout << "3. Ingresar solo caracteres " << endl;
        cout << "0. SALIR" << endl;

        cout << "\nIngrese una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:

				system("cls");
				sscanf(ingresar->ingresarDatos_Int("Insertar:"), "%f", &valor_decimal);
				cout << "\nCONVERTIDO A FLOTANTE ->" << endl;
   				printf("Valor decimal: %f\n", valor_decimal);
                system("pause>nul");
                break;

            case 2:

				system("cls");
				dato=ingresar->ingresarDatos_Float("Insertar:");
				for(int i = 0 ; i < sizeof(dato) ; i++ ){
					if('.'==dato[i]){
						int val = atoi(&dato[i+1]);
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
				printf("Valor Entero: %i\n", valor_entero);
                system("pause>nul");
                break;
                
			case 3:
				
				system("cls");
				cout << "\nSU CADENA DE CARACTERES ES ->" << ingresar->ingresarDatos_String("Insertar:")<< endl;
                system("pause>nul");
				break;

            case 0:
            	repetir = false;
            	break;
        }
    } while (repetir);
    return 0;



}

