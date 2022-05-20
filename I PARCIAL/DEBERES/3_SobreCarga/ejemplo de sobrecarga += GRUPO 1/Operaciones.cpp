
#include "Operaciones.h"



float Operaciones::Suma(float _dato1, float _dato2)
{
   return _dato1+=_dato2;
}



float Operaciones::Suma(float _dato1, float _dato2, float _dato3)
{
    _dato1+=_dato2;
    _dato1+=_dato3;

   return _dato1;
}



float Operaciones::Suma(float _dato1, float _dato2, float _dato3, float _dato4)
{
    _dato1+=_dato2;
    _dato1+=_dato3;
    _dato1+=_dato4;

   return _dato1;
}



Operaciones::Operaciones()
{
}

Operaciones::~Operaciones()
{
   // TODO : implement
}
