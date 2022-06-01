
#include "Menu.h"

using namespace std;



void Menu::menu_principal(){
	
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
	
	
	bool repite = true;
    int opcion;

    const char *titulo = "MENU PRINCIPAL";
    const char *opciones[] = {"Insertar Datos","Mostrar Datos","Buscar Datos","Eliminar Datos" ,"Salir"};
    int n = 5;
    do {
        opcion = menu(titulo, opciones, n);
    switch (opcion) {
        case 1:
            menu_insertar();
            break;
        case 2:
            menu_mostrar();
            break;
        case 3:
            menu_buscar();
            break;
        case 4:
            menu_eliminar();
        	break;

        case 5:
            repite = false;
            break;
      	}
   	} while (repite);
}

void Menu::menu_insertar(){
	bool repiteUse = true;
   	int opcion,val;

   	const char *titulo = "Insertar Dato";
   	const char *opciones[] = {"Ingrese numero", "Regresar"};
   	int n = 2;
   	do {
    	opcion = menu(titulo, opciones, n);
      	system("cls");
      	switch (opcion) {
        	case 1:
        		printf("Numero:");
        		scanf("%d",&val);
        		

                system("pause>nul");
            	break;
         	case 2:
            	repiteUse = false;
            	break;
      	}
   	}while(repiteUse);
}

void Menu::menu_mostrar(){
	bool repite = true;
   	int opcion;
  
   	const char *titulo = "MENU PARA MOSTRAR";
   	const char *opciones[] = {"Mostrar lista", "Mostrar un elemento", "Regresar"};
   	int n = 3;
   	do {
    	opcion = menu(titulo, opciones, n);
      	system("cls");
      	switch (opcion) {
        	case 1:
        	    printf("\t~~Lista~~\n");
        	

                system("pause>nul");
            	break;
         	case 2:
         		int val;
         		cout<<"se muestra un elemento ";


            	system("pause>nul");
            	break;
         	case 3:
            	repite = false;
            	break;
      	}
   	}while(repite);
}
void Menu::menu_buscar(){
	bool repite = true;
   	int opcion;

   	const char *titulo = "MENU PARA BUSCAR";
   	const char *opciones[] = {"Buscar elemento", "Regresar"};
   	int n = 2;
   	do {
    	opcion = menu(titulo, opciones, n);
      	system("cls");
      	switch (opcion) {
        	case 1:
        		int val;
        		cout<<"Ingresa un elemento a buscar: ";


            	system("pause>nul");
            	break;
         	case 2:
            	repite = false;
            	break;
      	}
   	}while(repite);
}
void Menu::menu_eliminar(){
	bool repite = true;
   	int opcion;

   	const char *titulo = "MENU PARA ELIMINAR";
   	const char *opciones[] = {"Eliminar elemento", "Regresar"};
   	int n = 2;
   	do {
    	opcion = menu(titulo, opciones, n);
      	system("cls");
      	switch (opcion) {
        	case 1:
        		int val;
        		cout<<"Ingresa un elemnto a eliminar ";

            	system("pause>nul");
            	break;
         	case 2:
            	repite = false;
            	break;
      	}
   	}while(repite);
}


int Menu::menu(const char titulo[], const char *opciones[], int n){
  	int opcionSeleccionada = 1;
  	int tecla;
   	bool repite = true;
   	do {
      	system("cls");
      	gotoxy(5, 3 + opcionSeleccionada);
      	cout << ">>>";
      	gotoxy(15, 2); cout << titulo;
      	for (int i = 0; i < n; i++) {
         	gotoxy(10, 4 + i); cout << i + 1 << ".- " << opciones[i];
      	}
      	do {
         	tecla = getch();
      	}while (tecla != ARRIBA && tecla != ABAJO && tecla != ENTER);
      	switch (tecla) {
        	case ARRIBA:
           		opcionSeleccionada--;
           		if (opcionSeleccionada < 1) {
           			opcionSeleccionada = n;
           		}
           		break;
         	case ABAJO:
            	opcionSeleccionada++;
            	if (opcionSeleccionada > n) {
               		opcionSeleccionada = 1;
            	}
            	break;
         	case ENTER:
            	repite = false;
            	break;
      	}
   	} while (repite);
   	return opcionSeleccionada;
}


void Menu::gotoxy(int x,int y){
		HANDLE hcon;
		hcon=GetStdHandle(STD_OUTPUT_HANDLE);
		COORD dwPos;
		dwPos.X=x;
		dwPos.Y=y;
		SetConsoleCursorPosition(hcon,dwPos);
}
