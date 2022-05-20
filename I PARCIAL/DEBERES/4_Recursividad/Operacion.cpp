#include "Operacion.h"

Operacion::Operacion(){
	
}

int Operacion::suma(int n){
	if(n==0)
		return 0;
	else{
		return n+suma(n-1);
	}
}

int Operacion::factorial(int n){
	if(n==0){
		return 1;
	}

	else{
		return n*factorial(n-1);
	}
}
