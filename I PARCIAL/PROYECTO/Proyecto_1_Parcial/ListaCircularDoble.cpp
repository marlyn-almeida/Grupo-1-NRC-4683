	#include "ListaCircularDoble.h"
	
	ListaCircularDoble::ListaCircularDoble()
	{
		primero = NULL;
	}
	
	/**
 * @brief insertar Funcion para insertar datos
 * @param dato

 */
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
	
/**
 * @brief eliminar Funcion para insertar cliente
 * @param dato


 */
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
/**
 * @brief buscar Funcion para buscar un dato
 * @param dato


 */	
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

/**
 * @brief imprimir Funcion para imprimior los datos
 * @param evalue

 */	
	void ListaCircularDoble::imprimir(int evalue) {
		int nAuto = 1;
		std::ostringstream html;
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

/**
 * @brief imprimir Funcion para imprimior los datos
 * @param evalue

 */	
void ListaCircularDoble::imprimir() {
		
		std::ostringstream html;
		if (primero == NULL) {
			cout << "La lista esta vacia";
			system("pause");
			return;
		}
		Nodo* auxiliar = primero;
		cout << ">>Placa: " << auxiliar->getDato().getPlaca() ;
		cout << ">>Color: " << auxiliar->getDato().getColor() ;
		cout << ">>Marca: " << auxiliar->getDato().getMarca() ;
		cout << ">>Modelo: " << auxiliar->getDato().getModelo() << endl;
		cout << "\t================{ FIN }================" << endl;
			
		    
		html << "<html>"
	    "<head><title>REPORTE</title></head>"
	    "<body>";
	    html << "<table><thead><tr>"
	    "<th> |PLACA|</th>"
	    "<th> |COLOR|</th>"
	    "<th> |MARCA|</th>"
	    "<th> |MODELO|</th>"
		"</tr></thead><tbody>";
	    html << "<tr>";
	    html << "<td> |*|  " +  auxiliar->getDato().getPlaca() + "</td>";
	    html << "<td> |*|  " +  auxiliar->getDato().getColor() + "</td>";  
		html << "<td> |*|  " +  auxiliar->getDato().getMarca() + "</td>";   
	    html << "<td> |*|  " +  auxiliar->getDato().getModelo() + "</td>";
		html << "<table><thead><tr>\n";
		    
		
		while (auxiliar->getSiguiente() != primero) {
	
			auxiliar = auxiliar->getSiguiente();
			
			cout << ">>Placa: " << auxiliar->getDato().getPlaca() ;
			cout << ">>Color: " << auxiliar->getDato().getColor() ;
			cout << ">>Marca: " << auxiliar->getDato().getMarca() ;
			cout << ">>Modelo: " << auxiliar->getDato().getModelo() << endl;
			cout << "\t================{ FIN }================" << endl;
			
			"<th> |PLACA|</th>"
		    "<th> |COLOR|</th>"
		    "<th> |MARCA|</th>"
		    "<th> |MODELO|</th>"
			"</tr></thead><tbody>";
		    html << "<tr>";
		    html << "<td> |*|   " +  auxiliar->getDato().getPlaca() + "</td>";
		    html << "<td> |*|  " +  auxiliar->getDato().getColor() + "</td>";  
			html << "<td> |*|  " +  auxiliar->getDato().getMarca() + "</td>";   
		    html << "<td> |*|  " +  auxiliar->getDato().getModelo() + "</td>";
			html << "<table><thead><tr>\n";
			
		}
		html << "</tbody></table></body></html>";

	    std::ostringstream plain;
	    std::string html_filename = "Reporte_Autos.html";
	    //std::string pdf_filename = "Reporte_Clientes.pdf";
	    std::ofstream out_html(html_filename, std::ios::trunc);
	//  std::ofstream out_txt("data.txt", std::ios::trunc);
		out_html << html.str();
//	    out_txt.close();
		out_html.close();
		
}

/**
 * @brief iterar
 * @param Auto
 */
void ListaCircularDoble::iterar(std::function<void(Auto)> lambda) {
	Nodo* tmp = this->primero;
	
	while (tmp != nullptr) {
		lambda(tmp->getDato());
		tmp = tmp->getSiguiente();
	}
}
	
	

