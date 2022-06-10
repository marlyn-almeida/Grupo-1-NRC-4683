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
/**
 * @brief Persona 
 * @param Nombre_
 * @param Apellido_
 * @param Direccion_
 * @param Telefono_
 * @param Correo_
 * @param Placa_

 */
Persona::Persona(std::string Nombre_, std::string Apellido_, std::string Direccion_, long Telefono_, std::string Correo_, std::string Placa_) {
	this->Nombre = Nombre_;
	this->Apellido = Apellido_;
	this->direccion = Direccion_;
	this->telefono = Telefono_;
	this->correo = Correo_;
	this->placa = Placa_;

}
/**
 * @brief getNombre
 * @return Nombre

 */

std::string Persona::getNombre(void)
{
   return this->Nombre;
}

/**
 * @brief setNombre
 * @param newNombre
 * @return newNombre

 */

void Persona::setNombre(std::string newNombre)
{
   this->Nombre = newNombre;
}


/**
 * @brief getApellido
 * @return Apellid

 */
std::string Persona::getApellido(void)
{
   return this->Apellido;
}

/**
 * @brief setApellid
 * @param newApellido

 */
void Persona::setApellido(std::string newApellido)
{
   this->Apellido = newApellido;
}

/**
 * @brief getDireccion
 * @return direccion

 */
std::string Persona::getDireccion(void)
{
   return this->direccion;
}

/**
 * @brief setDireccion
 * @param newDireccion
 * @return newDireccion

 */
void Persona::setDireccion(std::string newDireccion)
{
   this->direccion = newDireccion;
}

/**
 * @brief getTelefono
 * @return telefono

 */
long Persona::getTelefono(void)
{
   return this->telefono;
}
/**
 * @brief setTelefono
 * @param newTelefono
 * @return newTelefono

 *//**
 * @brief setTelefono
 * @param newTelefono
 * @return newTelefono

 */
void Persona::setTelefono(long newTelefono)
{
   this->telefono = newTelefono;
}
/**
 * @brief getCorreo
 * @return correo

 */
std::string Persona::getCorreo(void)
{
   return this->correo;
}
/**
 * @brief setCorreo
 * @param newCorreo
 * @return newCorreo

 */
void Persona::setCorreo(std::string newCorreo)
{
   this->correo = newCorreo;
}



/**
 * @brief setPlaca
 * @param newPlaca
 * @return newPlaca

 */
void Persona::setPlaca(std::string newPlaca)
{
   this->placa = newPlaca;
}

/**
 * @brief getPlaca
 * @return placa

 */
std::string Persona::getPlaca(void)
{
   return this->placa;
}



