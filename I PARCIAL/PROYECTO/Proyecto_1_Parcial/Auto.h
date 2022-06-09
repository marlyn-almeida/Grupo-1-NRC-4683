#pragma once
#include <iostream>
#include <string>


using namespace std;

class Auto{
private:
	string placa;
	string color;
	string marca;
	string modelo;
public:
	Auto();
	Auto(string, string, string, string);
	string getPlaca();
	void setPlaca(string);
	string getColor();
	void setColor(string);
	string getMarca();
	void setMarca(string);
	string getModelo();
	void setModelo(string);
	
};

