#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string>
using namespace std;
class Cproceso{
	private:
		int num;
		int den;
	public:
		void setNum(int);
		void setDen(int);
		int getNum();
		int getDen();
		Cproceso(int, int);
		Cproceso racional(Cproceso, Cproceso);
		void imprimirObj(Cproceso);
};
