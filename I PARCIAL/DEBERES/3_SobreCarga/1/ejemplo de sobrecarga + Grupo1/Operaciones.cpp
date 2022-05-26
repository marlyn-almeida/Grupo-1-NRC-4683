/*
UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE

Programa para sobrecarga de operadores +
Autor(es): George Chicango y Marlyn Almeida
Fecha de creación: 14/05/2022
Fecha de modificación:14/05/2022
Grupo #1
Github del grupo:https://github.com/marlyn-almeida/Grupo-1-NRC-4683.git
Versión:1
Estructura de Datos 4683


*/

#include "Operaciones.h"

////////////////////////////////////////////////////////////////////////
// Name:       Operaciones::Operaciones()
// Purpose:    Implementation of Operaciones::Operaciones()
// Return:     
////////////////////////////////////////////////////////////////////////

Operaciones::Operaciones()
{
}

////////////////////////////////////////////////////////////////////////
// Name:       Operaciones::~Operaciones()
// Purpose:    Implementation of Operaciones::~Operaciones()
// Return:     
////////////////////////////////////////////////////////////////////////

Operaciones::~Operaciones()
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Operaciones::suma(float dato1, float dato2)
// Purpose:    Implementation of Operaciones::suma()
// Parameters:
// - dato1
// - dato2
// Return:     float
////////////////////////////////////////////////////////////////////////

float Operaciones::suma(float dato1, float dato2)
{
   return dato1+dato2;
}

////////////////////////////////////////////////////////////////////////
// Name:       Operaciones::suma(float dato1, float dato2, float dato3)
// Purpose:    Implementation of Operaciones::suma()
// Parameters:
// - dato1
// - dato2
// - dato3
// Return:     float
////////////////////////////////////////////////////////////////////////

float Operaciones::suma(float dato1, float dato2, float dato3)
{
   return dato1+dato2+dato3;
}

////////////////////////////////////////////////////////////////////////
// Name:       Operaciones::suma(float dato1, float dato2, float dato3, float dato4)
// Purpose:    Implementation of Operaciones::suma()
// Parameters:
// - dato1
// - dato2
// - dato3
// - dato4
// Return:     float
////////////////////////////////////////////////////////////////////////

float Operaciones::suma(float dato1, float dato2, float dato3, float dato4)
{
   return dato1+dato2+dato3+dato4;
}
