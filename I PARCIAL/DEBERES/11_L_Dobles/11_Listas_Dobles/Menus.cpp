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


#include "Menus.h"

/**
 * @brief Menu de opciones del programa utilizando el teclado para desplazarse
 * @param opciones Arreglo de mensajes para mostrar en pantalla las opciones
 * @param persona Arreglo de tipo Persona donde se encuentran los atributos
 * @param num Numero de opciones
 * @param cont Contador
 */
int Menus::menu(string opciones[], string orden, int num, int tam, Lista *lista)
{
    int cursor = 0;
	char tecla;
	int opcion;
	system("cls");
	for (;;) {
		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		cout << orden << endl;
		for (int i = 0; i < num; i++){
			if (cursor == i){
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				cout << "\t\t> " <<opciones[i] << endl;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			}
			else{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
				cout << "\t\t" <<opciones[i] << endl;
			}
		}
		for (;;){
			tecla = _getch();
			if (tecla == 80){
				cursor++;
				if (cursor == num){
					cursor = 0;
				}
				break;
			}
			if (tecla == 72){
				cursor--;
				if (cursor == -1){
					cursor = num-1;
				}
				break;
			}
			if (tecla == 13){
			    return cursor;
			}
		}
	}
}

/**
 * @brief Menu para seleccion de opciones
 * @param opciones Arreglo de mensajes para mostrar en pantalla las opciones
 * @param persona Arreglo de tipo Persona donde se encuentran los atributos
 * @param num Numero de opciones
 * @param cont Contador
 */
void Menus::menuTeclas(string opciones[], int num, int tam, Lista *lista)
{
	typedef int (WINAPI *Validar_int_P)(char*);//Tipo de dato que ingresa, tipo de dato que sale
	typedef int (WINAPI *Validar_int_NP)(char*);
	typedef float (WINAPI *Validar_float)(char*);
	typedef float (WINAPI *Validar_float_N)(char*);
	typedef char* (WINAPI *Validar_char)(char*);
	typedef string (WINAPI *Validar_string)(char*);
	
	Validar_int_P validar_int_P;
	Validar_int_NP validar_int_NP;
	Validar_float validar_float;
	Validar_float_N validar_float_N;
	Validar_char validar_char;
	Validar_string validar_string;

	HINSTANCE libDLL=NULL;// inicializamos la libreria con Null
	libDLL = LoadLibrary ("Proyecto 1.dll"); //Cargamos la libreria
	
	validar_int_P=(Validar_int_P)GetProcAddress(libDLL,"ingresarDatos_Int_P");
	validar_int_NP=(Validar_int_NP)GetProcAddress(libDLL,"ingresarDatos_Int_N_P");
	validar_float_N=(Validar_float_N)GetProcAddress(libDLL,"ingresarDatos_Float_N");
	validar_float=(Validar_float)GetProcAddress(libDLL,"ingresarDatos_Float");
	validar_char=(Validar_char)GetProcAddress(libDLL,"ingresarDatos_Char");
	validar_string=(Validar_string)GetProcAddress(libDLL,"ingresarDatos_String");// Fin Validacion
	
	//a = validar(msg);
	
    string orden = "\t\t    LISTAS SIMPLES!\n";
    int cursor = menu(opciones, orden, num, tam, lista);
    int op, nod = 0, x = 0;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    switch (cursor){
    case 0: //Agregar nodo al inicio
        system("cls");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
        cout<<"\n\t\tAgregar nodo al inicio\n"<<endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
        //cout<<"\t   Ingrese el numero: ";
        //cin>>nod;
        nod=validar_int_NP("Ingrese el numero:");
        lista = lista->agregarInicio(lista, nod);
        cout<<endl;
        system("pause");
        menuTeclas(opciones, num, tam, lista);
        break;
    case 1: //Agregar nodo al final
        system("cls");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
        cout<<"\n\t\tAgregar nodo al final\n"<<endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
        //cout<<"\t   Ingrese el numero: ";
        //cin>>nod;
        nod=validar_int_NP("Ingrese el numero:");
        lista = lista->agregarFinal(lista, nod);
        cout<<endl;
        system("pause");
        menuTeclas(opciones, num, tam, lista);
        break;
    case 2: //Agregar nodo antes de un nodo
        system("cls");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
        cout<<"\n\t\tAgregar antes de un nodo\n"<<endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
        lista->imprimir(lista);
        cout<<endl;
        if (lista->getPri() != NULL)
        {
            //cout<<"\t   Ingrese el dato: ";
            //cin>>nod;
            nod=validar_int_NP("\t   Ingrese el dato: ");
            //cout<<"\t   Ingresar antes del nodo N: ";
            //cin>>x;
            x=validar_int_P("\t   Ingresar antes del nodo N: ");
        }
        else {
            //cout<<"\t   Ingrese el dato: ";
            //cin>>nod;
            nod=validar_int_NP("\t   Ingrese el dato: ");
            x = 0;
        }
        lista = lista->agregarAntes(lista, nod, x-1);
        cout<<endl;
        system("pause");
        menuTeclas(opciones, num, tam, lista);
        break;
    case 3: //Agregar nodo despues de un nodo
        system("cls");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
        cout<<"\n\t\tAgregar despues de un nodo\n"<<endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
        lista->imprimir(lista);
        cout<<endl;
        if (lista->getPri() != NULL)
        {
            //cout<<"\t   Ingrese el dato: ";
            //cin>>nod;
            nod=validar_int_NP("\t   Ingrese el dato: ");
            //cout<<"\t   Ingresar despues del nodo N: ";
            //cin>>x;
            x=validar_int_P("\t   Ingresar despues del nodo N: ");
        }
        else {
            //cout<<"\t   Ingrese el dato: ";
            //cin>>nod;
            nod=validar_int_NP("\t   Ingrese el dato: ");
            x = 0;
        }
        lista = lista->agregarDespues(lista, nod, x);
        cout<<endl;
        system("pause");
        menuTeclas(opciones, num, tam, lista);
        break;
    case 4://Eliminar primer nodo
        system("cls");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
        cout<<"\n\t\tEliminar primer nodo\n"<<endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
        lista = lista->eliminarNodo(lista);
        cout<<endl;
        system("pause");
        menuTeclas(opciones, num, tam, lista);
        break;
    case 5://Eliminar ultimo nodo
        system("cls");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
        cout<<"\n\t\tEliminar ultimo nodo\n"<<endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
        lista = lista->eliminarUlt(lista);
        cout<<endl;
        system("pause");
        menuTeclas(opciones, num, tam, lista);
        break;
    case 6://Eliminar un nodo X
        system("cls");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
        cout<<"\n\t\tEliminar un nodo X\n"<<endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
        lista->imprimir(lista);
        cout<<endl;
        if(lista->getPri()!=NULL)
        {
            //cout<<"\t Ingrese el nodo a eliminar: ";
            //cin>>nod;
            nod=validar_int_P("\t Ingrese el nodo a eliminar: ");
            lista = lista->eliminarNodoX(lista, nod);
        }
        cout<<endl;
        system("pause");
        menuTeclas(opciones, num, tam, lista);
        break;
    case 7: //Eliminar antes de un nodo
    	system("cls");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
        cout<<"\n\t\tEliminar antes de un nodo\n"<<endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
        lista=lista->eliminarAntes(lista);
        cout<<endl;
        system("pause");
        menuTeclas(opciones, num, tam, lista);
        break;
    case 8: // Eliminar despues de un nodo
        system("cls");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
        cout<<"\n\t\tEliminar despues de un nodo\n"<<endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
        lista=lista->eliminarDespues(lista);
        cout<<endl;
        system("pause");
        menuTeclas(opciones, num, tam, lista);
        break;
    case 9://Buscar un nodo X
        system("cls");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
        cout<<"\n\t\tBuscar un nodo\n"<<endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
        cout<<"\t Ingrese el numero a buscar: ";
        cin>>nod;
        lista->buscar(lista, nod);
        system("pause");
        menuTeclas(opciones, num, tam, lista);
        break;
    case 10://Imprimir
        system("cls");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
        cout<<"\n\t\t  LISTA "<<endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
        lista->imprimir(lista);
        cout<<endl;
        system("pause");
        menuTeclas(opciones, num, tam, lista);
        break;
    case 11://Operaciones
        system("cls");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
        cout<<"\n\t\t  LISTA "<<endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
        lista->operaciones(lista);
        cout<<endl;
        system("pause");
        menuTeclas(opciones, num, tam, lista);
        break;
    case 12:
        system("cls");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
        cout<<"\n\t\t...Gracias por usar mi programa...\n"<<endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
        system("pause");
        exit(1);
        break;
    }
}
