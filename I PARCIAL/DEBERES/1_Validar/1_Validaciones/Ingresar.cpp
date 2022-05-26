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
#include<iostream>
#include <conio.h>
#include "Ingresar.h"
using namespace std;

////////////////////////////////////////////////////////////////////////
// Name:        Ingresar::ingresarDatos_Int_P(char* msg)
// Purpose:    Implementation of  Ingresar::ingresarDatos_Int_P()
// Parameters:
// - msg
// Return:     int
////////////////////////////////////////////////////////////////////////

int Ingresar::ingresarDatos_Int_P(char* msg){
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

////////////////////////////////////////////////////////////////////////
// Name:       Ingresar::ingresarDatos_Int(char* msg)
// Purpose:    Implementation of Ingresar::ingresarDatos_Int()
// Parameters:
// - msg
// Return:     char*
////////////////////////////////////////////////////////////////////////

char* Ingresar::ingresarDatos_Int(char* msg)
{
    char *dato=new char[10];
    char c;
    int i=0;
    printf("%s\n",msg);
    while((c=getch())!=13 ){
    if(c>='0' && c<='9' ) {
        printf("%c",c);
        dato[i++]=c;
        }
    }
    dato[i]='\n';
    return dato;
}

////////////////////////////////////////////////////////////////////////
// Name:       Ingresar::ingresarDatos_Float(char* msg)
// Purpose:    Implementation of Ingresar::ingresarDatos_Float()
// Parameters:
// - msg
// Return:     char*
////////////////////////////////////////////////////////////////////////

char* Ingresar::ingresarDatos_Float(char* msg)
{
   char *dato=new char[10];
    bool status = false;
    char c;
    int i=0;
    printf("%s\n",msg);
    while((c=getch())!=13){
    	if((c>='0' && c<='9')||c==46){
      	 	if(!(i==0&&c==46)){ 
       	 	    if(!(c==46 &&status==true)){ 
            	    printf("%c",c);      
                	dato[i++]=c;
                		if(c==46)
                    		status=true;
                    		
            	}
        	}
        }
    }
    dato[i]='\n';
    return dato;
}

////////////////////////////////////////////////////////////////////////
// Name:       Ingresar::ingresarDatos_String(char* msg)
// Purpose:    Implementation of Ingresar::ingresarDatos_String()
// Parameters:
// - msg
// Return:     char*
////////////////////////////////////////////////////////////////////////

char* Ingresar::ingresarDatos_String(char* msg)
{
   char *dato=new char[50];
    char c;
    int i=0;
    printf("%s\n",msg);
    while((c=getch())!=13){
    if((c>='a' && c<='z')||(c>='A' && c<='Z')){
        printf("%c",c);
        dato[i++]=c;
        }
    }
    dato[i]='\n';
    return dato;
}

////////////////////////////////////////////////////////////////////////
// Name:       Ingresar::Ingresar()
// Purpose:    Implementation of Ingresar::Ingresar()
// Return:     
////////////////////////////////////////////////////////////////////////

Ingresar::Ingresar()
{
}

////////////////////////////////////////////////////////////////////////
// Name:       Ingresar::~Ingresar()
// Purpose:    Implementation of Ingresar::~Ingresar()
// Return:     
////////////////////////////////////////////////////////////////////////

Ingresar::~Ingresar()
{
   // TODO : implement
}
