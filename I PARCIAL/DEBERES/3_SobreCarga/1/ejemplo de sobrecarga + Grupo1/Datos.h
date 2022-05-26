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

#if !defined(__Sobrecarga_1_Datos_h)
#define __Sobrecarga_1_Datos_h

class Datos
{
public:
   float getValor1(void);
   void setValor1(float newValor1);
   float getValor2(void);
   void setValor2(float newValor2);
   float getValor3(void);
   void setValor3(float newValor3);
   float getValor4(void);
   void setValor4(float newValor4);
   Datos();
   ~Datos();

protected:
private:
   float valor1;
   float valor2;
   float valor3;
   float valor4;


};

#endif
