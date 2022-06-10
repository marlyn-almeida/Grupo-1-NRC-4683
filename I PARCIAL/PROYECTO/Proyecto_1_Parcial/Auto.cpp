#include "Auto.h"

Auto::Auto() {
	this->placa = " ";
	this->color = " ";
	this->marca = " ";
	this->modelo = " ";
}
/**
 * @brief Auto
 * @param placa
 * @param color
 * @param marca
 * @param modelo

 */
Auto::Auto(string placa, string color, string marca, string modelo) {
	this->placa = placa;
	this->color = color;
	this->marca = marca;
	this->modelo = modelo;
}
/**
 * @brief getPlaca
  * @return placa

 */
string Auto::getPlaca() {
	return this->placa;
}

/**
 * @brief setPlaca
  * @param placa
  * @return placa

 */
void Auto::setPlaca(string placa) {
	this->placa = placa;
}
/**
 * @brief getPlaca
  * @return color

 */
string Auto::getColor() {
	return this->color;
}
/**
 * @brief setColor
   * @param color
  * @return color

 */
void Auto::setColor(string color) {
	this->color = color;
}
/**
 * @brief getMarca
  * @return marca

 */
string Auto::getMarca() {
	return this->marca;
}
/**
 * @brief setMarca
 * @param marca
 * @return marca

 */
void Auto::setMarca(string marca) {
	this->marca = marca;
}
/**
 * @brief getModel
 * @return modelo

 */
string Auto::getModelo() {
	return this->modelo;
}
/**
 * @brief setModelo
 * @param modelo
 * @return modelo

 */
void Auto::setModelo(string modelo) {
	this->modelo = modelo;
}



