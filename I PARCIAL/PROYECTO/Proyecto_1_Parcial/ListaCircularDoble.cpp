	#include "ListaCircularDoble.h"
	
	ListaCircularDoble::ListaCircularDoble()
	{
		primero = NULL;
	}
	
	void ListaCircularDoble::insertar(Auto dato) {
		Nodo* nuevo = new Nodo(dato);
		if (primero == NULL) {
			primero = nuevo;
			primero->setSiguiente(primero);
			primero->setAnterior(primero);
		}
		else if (primero->getSiguiente() == primero) {
			ultimo = nuevo;
			ultimo->setSiguiente(primero);
			ultimo->setAnterior(primero);
			primero->setSiguiente(ultimo);
			primero->setAnterior(ultimo);
		}
		else {
			ultimo->setSiguiente(nuevo);
			nuevo->setAnterior(ultimo);
			nuevo->setSiguiente(primero);
			primero->setAnterior(nuevo);
			ultimo = nuevo;
		}
	}
	
	bool ListaCircularDoble::eliminar(string dato) {
		if (primero == NULL) {
			cout<<"\n\t\t No existen Datos del Cliente !! \n"<<endl;
			system("pause");
			return false;
		}
		else if (primero->getSiguiente() == primero && primero->getDato().getPlaca() == dato) {
			primero = NULL;
			cout<<"\n\t\t Datos del Cliente Eliminiado!! \n"<<endl;
			system("pause");
			return true;
		}
		else {
			Nodo* auxiliar = primero;
			while (auxiliar->getSiguiente() != primero && auxiliar->getDato().getPlaca() != dato) {
				auxiliar = auxiliar->getSiguiente();
			}
			if (auxiliar == primero && auxiliar->getDato().getPlaca() == dato) {
				primero->getSiguiente()->setAnterior(primero->getAnterior());
				primero->getAnterior()->setSiguiente(primero->getSiguiente());
				primero = primero->getSiguiente();
				delete auxiliar;
				cout<<"\n\t\t Datos del Cliente Eliminiado!! \n"<<endl;
				system("pause");
				return true;
			}
			else if (auxiliar->getDato().getPlaca() == dato) {
				auxiliar->getAnterior()->setSiguiente(auxiliar->getSiguiente());
				auxiliar->getSiguiente()->setAnterior(auxiliar->getAnterior());
				delete auxiliar;
				cout<<"\n\t\t Datos del Cliente Eliminiado!! \n"<<endl;
				system("pause");
				return true;
			}
			else {
				cout<<"\n\t\t No existen Datos del Cliente !! \n"<<endl;
				system("pause");
				return false;
			}
		}
	}
	
	bool ListaCircularDoble::buscar(string dato) {
		if (primero == NULL) {
			return false;
		}
		else if (primero->getSiguiente() == primero && primero->getDato().getPlaca() == dato) {
				cout << ">>Placa: " << primero->getDato().getPlaca() ;
				cout << ">>Color: " << primero->getDato().getColor() ;
				cout << ">>Marca: " << primero->getDato().getMarca() ;
				cout << ">>Modelo: " << primero->getDato().getModelo() << endl;
				cout << "\t================{ FIN }================" << endl;
				system("pause");
			return true;
		}
		else {
			Nodo* auxiliar = primero;
			while (auxiliar->getSiguiente() != primero && auxiliar->getDato().getPlaca() != dato) {
				auxiliar = auxiliar->getSiguiente();
			}
			if (auxiliar == primero && auxiliar->getDato().getPlaca() == dato) {
				cout << ">>Placa: " << auxiliar->getDato().getPlaca() ;
				cout << ">>Color: " << auxiliar->getDato().getColor() ;
				cout << ">>Marca: " << auxiliar->getDato().getMarca() ;
				cout << ">>Modelo: " << auxiliar->getDato().getModelo() << endl;
				cout << "\t================{ FIN }================" << endl;
				system("pause");
				return true;
			}
			else if (auxiliar->getDato().getPlaca() == dato) {
				cout << ">>Placa: " << auxiliar->getDato().getPlaca() ;
				cout << ">>Color: " << auxiliar->getDato().getColor() ;
				cout << ">>Marca: " << auxiliar->getDato().getMarca() ;
				cout << ">>Modelo: " << auxiliar->getDato().getModelo() << endl;
				cout << "\t================{ FIN }================" << endl;
				system("pause");
				return true;
			}
			else {
				return false;
			}
		}
	}
	
	void ListaCircularDoble::imprimir(int evalue) {
		int nAuto = 1;
		if (primero == NULL) {
			cout << "La lista esta vacia";
			system("pause");
			return;
		}
		Nodo* auxiliar = primero;
		if(evalue==nAuto){
			cout << ">>Placa: " << auxiliar->getDato().getPlaca() ;
			cout << ">>Color: " << auxiliar->getDato().getColor() ;
			cout << ">>Marca: " << auxiliar->getDato().getMarca() ;
			cout << ">>Modelo: " << auxiliar->getDato().getModelo() << endl;
			cout << "\t================{ FIN }================" << endl;
		}
		
		while (auxiliar->getSiguiente() != primero) {
			nAuto++;
			auxiliar = auxiliar->getSiguiente();
			if(evalue==nAuto){
				cout << ">>Placa: " << auxiliar->getDato().getPlaca() ;
				cout << ">>Color: " << auxiliar->getDato().getColor() ;
				cout << ">>Marca: " << auxiliar->getDato().getMarca() ;
				cout << ">>Modelo: " << auxiliar->getDato().getModelo() << endl;
				cout << "\t================{ FIN }================" << endl;
		}
		}
		
}

void ListaCircularDoble::iterar(std::function<void(Auto)> lambda) {
	Nodo* tmp = this->primero;
	
	while (tmp != nullptr) {
		lambda(tmp->getDato());
		tmp = tmp->getSiguiente();
	}
}
	
	

