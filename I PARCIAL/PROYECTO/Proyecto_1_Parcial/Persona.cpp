/***********************************************************************
 * Module:  Persona.cpp
 * Author:  George
 * Modified: lunes, 6 de junio de 2022 14:11:23
 * Purpose: Implementation of the class Persona
 ***********************************************************************/

#include "Persona.h"
std::string Persona::to_string() {
	
return "[",Nombre, " " , Apellido , " (" , correo , ")" , " [" , direccion , "]" , " [" , telefono , "]"  , " [" , placa , "]";
}

Persona::Persona()
 {
	this->Nombre = " ";
	this->Apellido = " ";
	this->direccion  = " ";
	this->telefono = 0;
	this->correo = " ";
	this->placa = " ";
}
////////////////////////////////////////////////////////////////////////
// Name:       Persona::Persona(const Persona& oldPersona)
// Purpose:    Implementation of Persona::Persona()
// Parameters:
// - oldPersona
// Return:     
////////////////////////////////////////////////////////////////////////

Persona::Persona(std::string Nombre_, std::string Apellido_, std::string Direccion_, long Telefono_, std::string Correo_, std::string Placa_) {
	this->Nombre = Nombre_;
	this->Apellido = Apellido_;
	this->direccion = Direccion_;
	this->telefono = Telefono_;
	this->correo = Correo_;
	this->placa = Placa_;

}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::getNombre()
// Purpose:    Implementation of Persona::getNombre()
// Return:     std::string
////////////////////////////////////////////////////////////////////////

std::string Persona::getNombre(void)
{
   return this->Nombre;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::setNombre(std::string newNombre)
// Purpose:    Implementation of Persona::setNombre()
// Parameters:
// - newNombre
// Return:     void
////////////////////////////////////////////////////////////////////////

void Persona::setNombre(std::string newNombre)
{
   this->Nombre = newNombre;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::getApellido()
// Purpose:    Implementation of Persona::getApellido()
// Return:     std::string
////////////////////////////////////////////////////////////////////////

std::string Persona::getApellido(void)
{
   return this->Apellido;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::setApellido(std::string newApellido)
// Purpose:    Implementation of Persona::setApellido()
// Parameters:
// - newApellido
// Return:     void
////////////////////////////////////////////////////////////////////////

void Persona::setApellido(std::string newApellido)
{
   this->Apellido = newApellido;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::getDireccion()
// Purpose:    Implementation of Persona::getDireccion()
// Return:     std::string
////////////////////////////////////////////////////////////////////////

std::string Persona::getDireccion(void)
{
   return this->direccion;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::setDireccion(std::string newDireccion)
// Purpose:    Implementation of Persona::setDireccion()
// Parameters:
// - newDireccion
// Return:     void
////////////////////////////////////////////////////////////////////////

void Persona::setDireccion(std::string newDireccion)
{
   this->direccion = newDireccion;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::getTelefono()
// Purpose:    Implementation of Persona::getTelefono()
// Return:     long
////////////////////////////////////////////////////////////////////////

long Persona::getTelefono(void)
{
   return this->telefono;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::setTelefono(long newTelefono)
// Purpose:    Implementation of Persona::setTelefono()
// Parameters:
// - newTelefono
// Return:     void
////////////////////////////////////////////////////////////////////////

void Persona::setTelefono(long newTelefono)
{
   this->telefono = newTelefono;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::getCorreo()
// Purpose:    Implementation of Persona::getCorreo()
// Return:     std::string
////////////////////////////////////////////////////////////////////////

std::string Persona::getCorreo(void)
{
   return this->correo;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::setCorreo(std::string newCorreo)
// Purpose:    Implementation of Persona::setCorreo()
// Parameters:
// - newCorreo
// Return:     void
////////////////////////////////////////////////////////////////////////

void Persona::setCorreo(std::string newCorreo)
{
   this->correo = newCorreo;
}


////////////////////////////////////////////////////////////////////////
// Name:       Persona::setPlaca(std::string newPlaca)
// Purpose:    Implementation of Persona::setPlaca()
// Parameters:
// - newPlaca
// Return:     void
////////////////////////////////////////////////////////////////////////

void Persona::setPlaca(std::string newPlaca)
{
   this->placa = newPlaca;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::getDireccion()
// Purpose:    Implementation of Persona::getDireccion()
// Return:     std::string
////////////////////////////////////////////////////////////////////////

std::string Persona::getPlaca(void)
{
   return this->placa;
}



