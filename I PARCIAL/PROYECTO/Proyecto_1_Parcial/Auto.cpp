#include "Auto.h"

Auto::Auto() {
	this->placa = " ";
	this->color = " ";
	this->marca = " ";
	this->modelo = " ";
}

Auto::Auto(string placa, string color, string marca, string modelo) {
	this->placa = placa;
	this->color = color;
	this->marca = marca;
	this->modelo = modelo;
}

string Auto::getPlaca() {
	return this->placa;
}

void Auto::setPlaca(string placa) {
	this->placa = placa;
}

string Auto::getColor() {
	return this->color;
}

void Auto::setColor(string color) {
	this->color = color;
}

string Auto::getMarca() {
	return this->marca;
}

void Auto::setMarca(string marca) {
	this->marca = marca;
}

string Auto::getModelo() {
	return this->modelo;
}

void Auto::setModelo(string modelo) {
	this->modelo = modelo;
}



