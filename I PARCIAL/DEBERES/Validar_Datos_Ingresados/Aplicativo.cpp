#include <iostream>
#include "Ingresar.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	float num;
	int num1;
	char *dato= new char;
	string dato1;

	 Ingresar ingresar;
	 
	num=  ingresar.ingresarDatos_Float("\nIngrese dato flotante:");
	num1= ingresar.ingresarDatos_Int_N_P("\nIngrese dato int:");
	dato= ingresar.ingresarDatos_Char("\nIngrese solo caracteres");
	dato1=ingresar.ingresarDatos_String("\nIngrese solo String");
	printf("\nFlotante -> %f",num);
	printf("\nInt -> %d",num1);
	printf("\nChar -> %s",dato);
	cout <<"String ->" << dato1 << endl;
	
	
	return 0;
	
}
