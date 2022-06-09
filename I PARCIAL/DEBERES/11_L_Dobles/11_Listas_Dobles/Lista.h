
/*
UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE

listas dobles
Autor(es): George Chicango y Marlyn Almeida
Fecha de creaci�n: 19/05/2022
Fecha de modificaci�n:19/05/2022
Grupo #1
Github del grupo:https://github.com/marlyn-almeida/Grupo-1-NRC-4683.git
Versi�n:1
Estructura de Datos 4683


*/

#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include "Nodo.h"
using namespace std;

class Lista
{
private:
    Nodo* pri;
    Nodo* ult;
public:
    Lista();
    Lista(Nodo*, Nodo*);
    Nodo* getPri();
    Nodo* getUlt();
    void setPri(Nodo*);
    void setUlt(Nodo*);
    bool verificar(Lista*);
    Nodo* crearNodo(int);
    Lista* agregarFinal(Lista*, int);
    Lista* agregarInicio(Lista*, int);
    void imprimir(Lista*);
    Lista* eliminarNodo(Lista*);
    Nodo* buscarDesorden(Lista*, int);
    void buscar(Lista*, int);
    Lista* agregarAntes(Lista*, int, int);
    Lista* agregarDespues(Lista*, int, int);
    int tamanioLista(Lista*);
    Lista* eliminarUlt(Lista*);
    Lista* eliminarNodoX(Lista*, int);
    void operaciones(Lista*);
    Lista* eliminarDespues(Lista*);
    Lista* eliminarAntes(Lista*);
};

