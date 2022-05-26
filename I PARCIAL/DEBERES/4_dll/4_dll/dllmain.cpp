
/*
UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE

Libreria para validar datos
Autor(es): George Chicango y Marlyn Almeida
Fecha de creación: 17/05/2022
Fecha de modificación:25/05/2022
Grupo #1
Github del grupo:https://github.com/marlyn-almeida/Grupo-1-NRC-4683.git
Versión:1
Estructura de Datos 4683
*/

/* Replace "dll.h" with the name of your header */
#include "dll.h"
#include <windows.h>
#include<iostream>
#include <conio.h>
#include <stdlib.h>
#include<string.h>

using namespace std;


////////////////////////////////////////////////////////////////////////
// Name:       dll::DllClass()
// Purpose:    Implementation of dll::DllClass()
// Return:     
////////////////////////////////////////////////////////////////////////

DllClass::DllClass()
{

}

////////////////////////////////////////////////////////////////////////
// Name:       dll::~DllClass()
// Purpose:    Implementation of dll::~DllClass()
// Return:     virtual
////////////////////////////////////////////////////////////////////////


DllClass::~DllClass()
{

}


BOOL WINAPI DllMain(HINSTANCE hinstDLL,DWORD fdwReason,LPVOID lpvReserved){
	switch(fdwReason)
	{
		case DLL_PROCESS_ATTACH:
		{
			break;
		}
		case DLL_PROCESS_DETACH:
		{
			break;
		}
		case DLL_THREAD_ATTACH:
		{
			break;
		}
		case DLL_THREAD_DETACH:
		{
			break;
		}
	}
	
	/* Return TRUE on success, FALSE on failure */
	return TRUE;
}

extern "C" __declspec(dllexport)

int ingresarDatos_Int_P(char* msg){
    char *dato=new char[10];
    char c;
    int i=0, valor_entero;
    
    printf("%s\n",msg);
    while((c=getch())!=13 ){
    	if(c>='0' && c<='9' ) {
      	  	printf("%c",c);
      	    dato[i++]=c;
        }
        if(c==8){
			system("cls");
			printf("%s\n",msg);
			if(i>0){
				i--;
			}
			dato[i]='\0';
			
		    for(int j=0;j<=i;j++){
		    	
		    	printf("%c",dato[j]);
			}
		}
    }
    
    dato[i]='\n';
    
    sscanf(dato, "%i", &valor_entero);
     if(i==0){
    	system("cls");
    	valor_entero =ingresarDatos_Int_P(msg);
	}
    return valor_entero;
}

extern "C" __declspec(dllexport)
int ingresarDatos_Int_N_P(char* msg){
    char *dato=new char[10];
    char c;
    int i=0,j=0, valor_entero;
    
    printf("%s\n",msg);
    while((c=getch())!=13 ){
    	if(c=='-'&& i==0){
    		printf("%c",c); 
      	 	dato[i++]=c;
		}
  	  	if(c>='0' && c<='9')  {
      	 	printf("%c",c);
      	  	dato[i++]=c;
		}
		if(c==8){
			system("cls");
			printf("%s\n",msg);
			if(i>0){
				i--;
			}
			dato[i]='\0';
		    for(j=0;j<=i;j++){
		    	printf("%c",dato[j]);
			}
		}
		
    }
    
    dato[i]='\n';
    
    sscanf(dato, "%i", &valor_entero);
    if(i==0){
    	system("cls");
    	valor_entero =ingresarDatos_Int_N_P(msg);
	}
    
    return valor_entero;
}

extern "C" __declspec(dllexport)
float ingresarDatos_Float(char* msg){
    char *dato=new char[10];
    bool status = false;
    char c,d='.';
    int i=0,m=0;
    float valor_decimal;
    printf("%s\n",msg);
    while((c=getch())!=13){
    	if((c>='0' && c<='9')||c==46){
      	 	if(!(i==0&&c==46)){ 
       	 	    if(!(c==46 &&status==true)){ 
            	    printf("%c",c);      
                	dato[i++]=c;
                		if(c==46)
                    		status=true;
                    		m=1;
                    		
            	}
        	}
        }
        if(c=='-'&& i==0){
    		printf("%c",c); 
      	 	dato[i++]=c;
		}
		if(c==8){
			system("cls");
			printf("%s\n",msg);
			
			if(strcmp(&dato[i],&d)){
				status=false;
				
			}
			if(i>0){
				i--;
			}
			dato[i]='\0';
		    for(int j=0;j<=i;j++){
		    	printf("%c",dato[j]);
			}
		}
        
    }
    dato[i]='\n';
    sscanf(dato, "%f", &valor_decimal);
     if(i==0){
    	system("cls");
    	valor_decimal =ingresarDatos_Float(msg);
	}
    return valor_decimal;
}
    
extern "C" __declspec(dllexport)
char* ingresarDatos_Char(char* msg){
   	char *dato=new char[50];
    char c;
    int i=0;
    printf("%s\n",msg);
    while((c=getch())!=13){
    if((c>='a' && c<='z')||(c>='A' && c<='Z')){
        printf("%c",c);
        dato[i++]=c;
        }
        if(c==8){
			system("cls");
			printf("%s\n",msg);
			if(i>0){
				i--;
			}
			dato[i]='\0';
			
		    for(int j=0;j<=i;j++){
		    	
		    	printf("%c",dato[j]);
			}
		}
    }
    
    dato[i]='\n';
    if(i==0){
    	system("cls");
    	dato =ingresarDatos_Char(msg);
	}
    
    return dato;
}

extern "C" __declspec(dllexport)
string ingresarDatos_String(char* msg){
   	string dato;
    printf("%s\n",msg);
    getline(cin, dato);
    
    return dato;
}

extern "C" __declspec(dllexport)
int ingresarDatos_Binario(char* msg){
    char *dato=new char[10];
    char c;
    int i=0, valor_entero;
    
    printf("%s\n",msg);
    while((c=getch())!=13 ){
    	if(c==48 || c==49 ) {
      	  	printf("%c",c);
      	    dato[i++]=c;
        }
        if(c==8){
			system("cls");
			printf("%s\n",msg);
			if(i>0){
				i--;
			}
			dato[i]='\0';
			
		    for(int j=0;j<=i;j++){
		    	
		    	printf("%c",dato[j]);
			}
		}
    }
    
    dato[i]='\n';
    
    sscanf(dato, "%i", &valor_entero);
     if(i==0){
    	system("cls");
    	valor_entero =ingresarDatos_Int_P(msg);
	}
    return valor_entero;
}






