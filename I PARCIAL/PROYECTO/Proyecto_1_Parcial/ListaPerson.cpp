#include "ListaPerson.h"

ListaPerson::ListaPerson()
{
	primero = NULL;
}
/**
 * @brief insertar Funcion para insertar datos
 * @param  dato

 */
void ListaPerson::insertar(Persona dato) {
	NodoPerson* nuevo = new NodoPerson(dato);
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
 * @brief elimina Funcion para eliminar datos
 * @param  dato

 */

bool ListaPerson::eliminar(string dato) {
	if (primero == NULL) {
		return false;
	}
	else if (primero->getSiguiente() == primero && primero->getDato().getPlaca() == dato) {
		primero = NULL;
		return true;
	}
	else {
		NodoPerson* auxiliar = primero;
		while (auxiliar->getSiguiente() != primero && auxiliar->getDato().getPlaca() != dato) {
			auxiliar = auxiliar->getSiguiente();
		}
		if (auxiliar == primero && auxiliar->getDato().getPlaca() == dato) {
			primero->getSiguiente()->setAnterior(primero->getAnterior());
			primero->getAnterior()->setSiguiente(primero->getSiguiente());
			primero = primero->getSiguiente();
			delete auxiliar;
			return true;
		}
		else if (auxiliar->getDato().getPlaca() == dato) {
			auxiliar->getAnterior()->setSiguiente(auxiliar->getSiguiente());
			auxiliar->getSiguiente()->setAnterior(auxiliar->getAnterior());
			delete auxiliar;
			return true;
		}
		else {
			return false;
		}
	}
}

/**
 * @brief buscar Funcion para buscar datos
 * @param  dato

 */
bool ListaPerson::buscar(string dato) {
	if (primero == NULL) {
		cout << "=======NO SE ENCONTRO INFORMACION=======" << endl;
		system("pause");
		return false;
	}
	else if (primero->getSiguiente() == primero && primero->getDato().getPlaca() == dato) {
		cout << "=======Informacion - Usuario=======1" << endl;
		cout << ">>Nombre: " << primero->getDato().getNombre() << endl;
		cout << ">>Apellido: " << primero->getDato().getApellido() << endl;
		cout << ">>Direccion: " << primero->getDato().getDireccion() << endl;
		cout << ">>Telefono: " << primero->getDato().getTelefono() << endl;
		cout << ">>Correo: " << primero->getDato().getCorreo() << endl;
		cout << ">>Placa: " << primero->getDato().getPlaca() << endl;
		cout << "\n=======Informacion - Vehiculo=======" << endl;
		return true;
	}
	else {
		NodoPerson* auxiliar = primero;
		while (auxiliar->getSiguiente() != primero && auxiliar->getDato().getPlaca() != dato) {
			auxiliar = auxiliar->getSiguiente();
		}
		if (auxiliar->getSiguiente() == primero && auxiliar->getDato().getPlaca() == dato) {
			cout << "=======Informacion - Usuario=======2" << endl;
			cout << ">>Nombre: " << auxiliar->getDato().getNombre() << endl;
			cout << ">>Apellido: " << auxiliar->getDato().getApellido() << endl;
			cout << ">>Direccion: " << auxiliar->getDato().getDireccion() << endl;
			cout << ">>Telefono: " << auxiliar->getDato().getTelefono() << endl;
			cout << ">>Correo: " << auxiliar->getDato().getCorreo() << endl;
			cout << ">>Placa: " << auxiliar->getDato().getPlaca() << endl;
			cout << "\n=======Informacion - Vehiculo=======" << endl;
			return true;
		}
		else if (auxiliar->getDato().getPlaca() == dato) {
			cout << "=======Informacion - Usuario=======3" << endl;
			cout << ">>Nombre: " << auxiliar->getDato().getNombre() << endl;
			cout << ">>Apellido: " << auxiliar->getDato().getApellido() << endl;
			cout << ">>Direccion: " << auxiliar->getDato().getDireccion() << endl;
			cout << ">>Telefono: " << auxiliar->getDato().getTelefono() << endl;
			cout << ">>Correo: " << auxiliar->getDato().getCorreo() << endl;
			cout << ">>Placa: " << auxiliar->getDato().getPlaca() << endl;
			cout << "\n=======Informacion - Vehiculo=======" << endl;
			system("pause");
			return true;
		}
		else {
			cout << "\n=======NO SE ENCONTRO INF. =======" << endl;
			system("pause");
			return false;
		}
	}
}


/**
 * @brief imprimir Funcion para imprimir una lista 
 * @param lista

 */
void ListaPerson::imprimir(ListaCircularDoble lista ){
	int contador = 1;
	if (primero == NULL) {
		cout << "No Existen Datos!!!\n";
		cout << "\t================{ FIN }================" << endl;
		return;
	}
	NodoPerson* auxiliar = primero;
	
	cout << "================{ "<<contador<<" }================" << endl;
	cout << "=======Informacion - Usuario=======" << endl;
	cout << ">>Nombre: " << auxiliar->getDato().getNombre();
	cout << ">>Apellido: " << auxiliar->getDato().getApellido();
	cout << ">>Direccion: " << auxiliar->getDato().getDireccion() << endl;
	cout << ">>Telefono: " << auxiliar->getDato().getTelefono() << endl;
	cout << ">>Correo: " << auxiliar->getDato().getCorreo() << endl;
	cout << ">>Placa: " << auxiliar->getDato().getPlaca() << endl;
	cout << "\t================{ FIN }================" << endl;
	cout << "\n=======Informacion - Vehiculo=======" << endl;
	
	std::ostringstream html;
    
	html << "<html>"
    "<head><title>REPORTE</title></head>"
    "<body>";
    html << "<table><thead><tr>"
    "<th> |NOMBRE|</th>"
    "<th> |APELLIDO|</th>"
    "<th> |DIRECCION|</th>"
    "<th> |CORREO|</th>"
    "<th> |PLACA|</th>"
    "</tr></thead><tbody>";
    html << "<tr>";
    html << "<td> |*|  " +  auxiliar->getDato().getNombre() + "</td>";
    html << "<td> |*|  " +  auxiliar->getDato().getApellido() + "</td>";  
	html << "<td> |*|  " +  auxiliar->getDato().getDireccion() + "</td>";   
    html << "<td> |*|  " +  auxiliar->getDato().getCorreo() + "</td>";
    html << "<td> |*|  " +  auxiliar->getDato().getPlaca() + "</td>";
	html << "<table><thead><tr>\n";

	lista.imprimir(contador);
            
	while (auxiliar->getSiguiente() != primero) {
		contador++;
		auxiliar = auxiliar->getSiguiente();
		cout << "================{ "<<contador<<" }================" << endl;
		cout << "=======Informacion - Usuario=======" << endl;
		cout << ">>Nombre: " << auxiliar->getDato().getNombre() ;
		cout << ">>Apellido: " << auxiliar->getDato().getApellido() ;
		cout << ">>Direccion: " << auxiliar->getDato().getDireccion() << endl;
		cout << ">>Telefono: " << auxiliar->getDato().getTelefono() << endl;
		cout << ">>Correo: " << auxiliar->getDato().getCorreo() << endl;
		cout << ">>Placa: " << auxiliar->getDato().getPlaca() << endl;
		cout << "\t================{ FIN }================" << endl;
		cout << "\n=======Informacion - Vehiculo=======" << endl;
		
		
		html << "<td> |*|  " +  auxiliar->getDato().getNombre() + "</td>";
        html << "<td> |*|  " +  auxiliar->getDato().getApellido() + "</td>";  
		html << "<td> |*|  " +  auxiliar->getDato().getDireccion() + "</td>";   
        html << "<td> |*|  " +  auxiliar->getDato().getCorreo() + "</td>";
        html << "<td> |*|  " +  auxiliar->getDato().getPlaca() + "</td>";
        html << "<table><thead><tr>\n";
        
        lista.imprimir(contador);

	}
	html << "</tbody></table></body></html>";

    std::ostringstream plain;
    std::string html_filename = "Reporte_Clientes.html";
    //std::string pdf_filename = "Reporte_Clientes.pdf";
    std::ofstream out_html(html_filename, std::ios::trunc);
//  std::ofstream out_txt("data.txt", std::ios::trunc);
	out_html << html.str();
//    out_txt.close();
	out_html.close();
	
	lista.imprimir();
}
/**
 * @brief iterar  
 * @param Persona

 */
void ListaPerson::iterar(std::function<void(Persona)> lambda) {
	NodoPerson* tmp = this->primero;
	
	while (tmp != nullptr) {
		lambda(tmp->getDato());
		tmp = tmp->getSiguiente();
	}
}

