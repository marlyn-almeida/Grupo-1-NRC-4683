/***********************************************************************
 * Module:  Persona.h
 * Author:  George
 * Modified: lunes, 6 de junio de 2022 14:11:23
 * Purpose: Declaration of the class Persona
 ***********************************************************************/

#if !defined(__Proyecto_Persona_h)
#define __Proyecto_Persona_h
#include <iostream>
using namespace std;
class Persona
{
public:
	Persona();
   Persona(std::string, std::string, std::string, long, std::string , std::string);
   std::string getNombre(void);
   void setNombre(std::string newNombre);
   std::string getApellido(void);
   void setApellido(std::string newApellido);
   std::string getDireccion(void);
   void setDireccion(std::string newDireccion);
   long getTelefono(void);
   void setTelefono(long newTelefono);
   std::string getCorreo(void);
   void setCorreo(std::string newCorreo);
   std::string getPlaca(void);
   void setPlaca(std::string newPlaca);
   
   std::string to_string();

protected:
private:
   std::string Nombre;
   std::string Apellido;
   std::string direccion;
   long telefono;
   std::string correo;
   std::string placa;
   

};

#endif
