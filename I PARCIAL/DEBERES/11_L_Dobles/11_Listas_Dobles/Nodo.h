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

class Nodo
{
private:
    int dato;
    Nodo *sig;
public:
    Nodo();
    Nodo(int, Nodo*);
    int getDato();
    Nodo* getSig();
    void setDato(int);
    void setSig(Nodo*);
};

