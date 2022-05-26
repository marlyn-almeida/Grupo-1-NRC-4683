/*
UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE

Programa para Mostrar fracciones
Autor(es): George Chicango y Marlyn lmeida
Fecha de creación: 12/05/2022
Fecha de modificación:12/05/2022
Grupo #18
Github del grupo: https://github.com/marlyn-almeida/Grupo-18.git
Versión:1
Estructura de Datos 4683


*/


#if !defined(__TDA_Cproceso_h)
#define __TDA_Cproceso_h

class Cproceso
{
public:
   int getNum();
   void setNum(int newNume);
   int getDen();
   void setDen(int newDen);
   Cproceso(int numerador, int denominador);
   ~Cproceso();
   Cproceso racional(Cproceso obj1, Cproceso obj2);
   Cproceso imprimirObj(Cproceso obj);

protected:
private:
   int num;
   int den;


};

#endif
