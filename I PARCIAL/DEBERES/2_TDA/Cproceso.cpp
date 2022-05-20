#include "Cproceso.h"
Cproceso::Cproceso(int numerador,int denominador){
	this->num=numerador;
	this->den=denominador;
}
void Cproceso::setNum(int numerador){
	this->num=numerador;
}
void Cproceso::setDen(int denominador){
	this->den=denominador;
}
int Cproceso::getNum(){
	return this->num;
}
int Cproceso::getDen(){
	return this->den;
}
Cproceso Cproceso::racional(Cproceso obj1, Cproceso obj2){
	int a,b,c,d;
	a=obj1.getNum();
	b=obj1.getDen();
	c=obj2.getNum();
	d=obj2.getDen();
	this->setNum((a*d)+(b*c));
	this->setDen(b*d);
	return *this;
}
void Cproceso::imprimirObj(Cproceso obj){
	cout<<obj.getNum()<<"/"<<obj.getDen()<<endl;
}






