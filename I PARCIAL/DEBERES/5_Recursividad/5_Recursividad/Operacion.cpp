/*
UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE

Programa para recursividad
Autor(es): George Chicango y Marlyn lmeida
Fecha de creación: 16/05/2022
Fecha de modificación:16/05/2022
Grupo #1
Github del grupo:https://github.com/marlyn-almeida/Grupo-1-NRC-4683.git
Versión:1
Estructura de Datos 4683


*/


#include "Operacion.h"

////////////////////////////////////////////////////////////////////////
// Name:       Operacion::factorial(int n)
// Purpose:    Implementation of Operacion::factorial()
// Parameters:
// - n
// Return:     int
////////////////////////////////////////////////////////////////////////

int Operacion::factorial(int n)
{
	if(n==0){
		return 1;
	}

	else{
		return n*factorial(n-1);
	}
}

////////////////////////////////////////////////////////////////////////
// Name:       Operacion::suma(int n)
// Purpose:    Implementation of Operacion::suma()
// Parameters:
// - n
// Return:     int
////////////////////////////////////////////////////////////////////////

int Operacion::suma(int n)
{
	if(n==0)
		return 0;
	else{
		return n+suma(n-1);
	}
}


////////////////////////////////////////////////////////////////////////
// Name:       Operacion::Operacion()
// Purpose:    Implementation of Operacion::Operacion()
// Return:     
////////////////////////////////////////////////////////////////////////

Operacion::Operacion()
{
}

////////////////////////////////////////////////////////////////////////
// Name:       Operacion::~Operacion()
// Purpose:    Implementation of Operacion::~Operacion()
// Return:     
////////////////////////////////////////////////////////////////////////

Operacion::~Operacion()
{
   // TODO : implement
}
