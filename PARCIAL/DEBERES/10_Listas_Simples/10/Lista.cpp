/*
UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE

listas simples
Autor(es): George Chicango y Marlyn Almeida
Fecha de creación: 19/05/2022
Fecha de modificación:19/05/2022
Grupo #1
Github del grupo:https://github.com/marlyn-almeida/Grupo-1-NRC-4683.git
Versión:1
Estructura de Datos 4683

*
*/

#include "Lista.h"

template<typename T>
Lista<T>::Lista() {
	_tamanio = 0;
	cabeza = NULL;
}

template<typename T>
Nodo<T>* Lista<T>::insertarFinal(T valor) {
	Nodo<T>* nodo = new Nodo<T>(valor);
	Nodo<T>* ultimo = final();

	if (ultimo == NULL) {
		cabeza = nodo;
		ultimo = cabeza;
	}

	ultimo->definirSiguiente(nodo);
	nodo->definirSiguiente(cabeza);
	_tamanio++;

	return nodo;
}

template<typename T>
Nodo<T>* Lista<T>::insertarInicio(T valor) {
	cabeza = insertarFinal(valor);
	return cabeza;
}

template<typename T>
Nodo<T>* Lista<T>::insertarEn(T valor, int indice) {
	Nodo<T>* nodo;
	Nodo<T>* actual;

	if ((indice + 1 ) > _tamanio) {
		if (_tamanio == 0) {
			return insertarFinal(valor);
		}

		// TODO: arrojar una excepcion aqui podria ser una mejor opcion
		return NULL;
	}

	nodo = new Nodo<T>(valor);
	actual = cabeza;

	for (int i = 0; i < indice - 1; i++) {
		actual = actual->obtenerSiguiente();
	}

	nodo->definirSiguiente(actual->obtenerSiguiente());
	actual->definirSiguiente(nodo);
	_tamanio++;

	return nodo;
}

template<typename T>
int Lista<T>::tamanio() {
	return _tamanio;
}

template<typename T>
Nodo<T>* Lista<T>::inicial() {
	return cabeza;
}

template<typename T>
Nodo<T>* Lista<T>::final() {
	if (cabeza == NULL) {
		return NULL;
	}

	Nodo<T>* ultimo = cabeza;

	while (ultimo->obtenerSiguiente() != cabeza) {
		ultimo = ultimo->obtenerSiguiente();
	}

	return ultimo;
}

template<typename T>
void Lista<T>::imprimir_todo(){
	int contador=0;
	if (_tamanio == 0 || cabeza == NULL) {
		printf("\nNo hay datos\n");
		system("pause");
		return;
	}
	
	//=============================
	
	Nodo<T>* nodo = cabeza;

	do{
		contador= contador+1;
		printf("[%d]= %0.2f \n",contador,nodo->obtenerValor());

		nodo = nodo->obtenerSiguiente();
		
	}while(cabeza!=nodo);
}

template<typename T>
bool Lista<T>::estaVacio() {
	return _tamanio == 0;
}

template<typename T>
void Lista<T>::eliminar(int indice) {
	Nodo<T>* nodo;
	Nodo<T>* temporal;

	// si la lista esta vacia
	if (cabeza == NULL) {
		return;
	}

	// si la lista no tiene ese indice
	if ((indice + 1) > _tamanio) {
		return;
	}

	// si la lista tiene solo 1 elemento
	if (cabeza->obtenerSiguiente() == cabeza && indice == 0 && _tamanio == 1) {
		free(cabeza);
		cabeza = NULL;
		_tamanio--;
		return;
	}

	// si el indice es la cabeza
	if (indice == 0) {
		nodo = final(); // ultimo
		nodo->definirSiguiente(cabeza->obtenerSiguiente());
		temporal = cabeza->obtenerSiguiente();
		free(cabeza);
		cabeza = temporal;
		_tamanio--;
		return;
	}

	nodo = cabeza;

	for (int i = 0; i < indice - 1; i++) {
		nodo = nodo->obtenerSiguiente();
	}

	temporal = nodo->obtenerSiguiente();
	nodo->definirSiguiente(temporal->obtenerSiguiente());
	free(temporal);
	_tamanio--;
}

template<typename T>
void Lista<T>::buscar(float val){
	int contador=0;
	bool verificar=false;
	if (_tamanio == 0 || cabeza == NULL) {
		printf("\nNo hay datos\n");
		system("pause");
		return;
	}
	
	//=============================
	
	Nodo<T>* nodo = cabeza;

	do{
		if(nodo->obtenerValor()==val){
			
			printf("\nEl numero %0.2f se encuentra en la posicion [%d] ",val,contador);
			contador++;
			nodo = nodo->obtenerSiguiente();
			verificar=true;
		}else{
			nodo = nodo->obtenerSiguiente();
			contador++;
		}
	}while(cabeza!=nodo);
	if(!verificar){
			printf("\nEl numero %0.2f No pertenece a la Lista",val);
	}
}

template<typename T>
void Lista<T>::eliminarInicio() {
	eliminar(0);
}

template<typename T>
void Lista<T>::eliminarFinal() {
	eliminar(_tamanio - 1);
	
}

