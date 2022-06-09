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

#if !defined(__Banco_Persona_h)
#define __Banco_Persona_h

#include <iostream>
#include <conio.h>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <fstream>
#include "Funciones.cpp"

class Persona{
	private:
		string cedula;
        string nombre;
        string apellido;
        int telefono;
        string correo;
    public:
    	string getNombre(void);
        void setNombre(string newNombre);
        string getApellido(void);
        void setApellido(string newApellido);
        string getCedula(void);
        void setCedula(string newCedula);
        int getTelefono(void);
        void setTelefono(int newTelefono);
        string getCorreo(void);
        void setCorreo(string newCorreo);
        void crearCorreo(Persona *, int);
        void generarCorreo(Persona *, int, int);
        void guardarDatos(Persona *, int );
        void ingresoDatos(Persona *, int*);
        void obtenerDatos(Persona *, int *);
    void imprimir(Persona *, int);
    void crearDirectorio();
    void verificarArchivos();
    void menuTeclas(string [], int , Persona*, int);
    int menu(string [], string , int , Persona *, int );
    Persona();
    ~Persona();
};
