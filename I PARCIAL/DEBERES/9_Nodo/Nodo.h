/***********************************************************************
 * Module:  Nodo.h
 * Author:  George
 * Modified: miércoles, 25 de mayo de 2022 8:49:38
 * Purpose: Declaration of the class Nodo
 ***********************************************************************/

#if !defined(__Listas_Nodo_h)
#define __Listas_Nodo_h

class Nodo
{
public:
   int getValor(void);
   void setValor(int newValor);
   Nodo getSiguiente(void);
   void setSiguiente(Nodo newSiguiente);
   Nodo(int _valor, Nodo _siguiente);
   ~Nodo();

protected:
private:
   int valor;
   Nodo siguiente;


};

#endif