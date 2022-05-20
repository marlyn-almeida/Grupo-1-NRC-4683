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


Ingresar::Ingresar(){
	
}

int Ingresar::ingresarDatos_Int(char* msg){
    char *dato=new char[10];
    char c;
    int i=0, valor_entero;
    
    printf("%s\n",msg);
    while((c=getch())!=13 ){
    if(c>='0' && c<='9' ) {
        printf("%c",c);
        dato[i++]=c;
        }
    }
    dato[i]='\n';
    
    sscanf(dato, "%i", &valor_entero);
    
    return valor_entero;
}

float Ingresar::ingresarDatos_Float(char* msg){
    char *dato=new char[10];
    bool status = false;
    char c;
    int i=0;
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
                    		
            	}
        	}
        }
    }
    dato[i]='\n';
    sscanf(dato, "%f", &valor_decimal);
    return valor_decimal;
}
    


char* Ingresar::ingresarDatos_Char(char* msg){
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

string Ingresar::ingresarDatos_String(char* msg){
   	string dato;
    printf("%s\n",msg);
    getline(cin, dato);
    
    return dato;
}


