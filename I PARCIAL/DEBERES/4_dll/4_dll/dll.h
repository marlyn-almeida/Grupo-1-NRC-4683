
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
#ifndef _DLL_H_
#define _DLL_H_

#if BUILDING_DLL
#define DLLIMPORT __declspec(dllexport)
#else
#define DLLIMPORT __declspec(dllimport)
#endif
#include<iostream>
using namespace std;

class DLLIMPORT DllClass
{
	public:
		DllClass();
		virtual ~DllClass();
		
};

#endif
