/*
UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE

Programa para Conversion de Tipo de Datos
Autor(es): George Chicango y Marlyn lmeida
Fecha de creación: 12/05/2022
Fecha de modificación:13/05/2022
Grupo #18
Github del grupo: https://github.com/marlyn-almeida/Grupo-18.git
Versión:1
Estructura de Datos 4683


*/

#if !defined(__Validaciones_Ingresar_h)
#define __Validaciones_Ingresar_h

class Ingresar
{
public:
   char* ingresarDatos_Int(char* msg);
   char* ingresarDatos_Float(char* msg);
   char* ingresarDatos_String(char* msg);
   int ingresarDatos_Int_P(char* msg);
   Ingresar();
   ~Ingresar();

protected:
private:

};

#endif
