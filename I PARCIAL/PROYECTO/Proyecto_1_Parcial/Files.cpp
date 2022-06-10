# include "Files.h"
/**
 * @brief save_files Funcion crea un archivo
 * @param persona de donde se obtienen los datos de usuario
 *
 */

void Files::save_files(Persona persona)
{
    fstream archivo;
    fstream usuarios;
    FILE nuevo;
    check_files();
    archivo.open("Usuarios.txt", ios::app);
    if (archivo.fail() || usuarios.fail()) {
        cout << "Ha ocurrido un error al verificar el archivo" << endl;
        exit(1);
    }
    else {
        archivo << "Nombre:"<<persona.getNombre() << 
		"Apellido:" << persona.getApellido() << 
		"Direccion:" << persona.getDireccion() << 
		"\nTelefono:" << persona.getTelefono() <<
        "\nCorreo:" << persona.getCorreo() << 
		"\nPlaca:" << persona.getPlaca() << endl;
    }
}

/**
 * @brief save_files Funcion crea un archivo
 * @param persona de donde se obtienen los datos de usuario
 *
 */

void Files::save_files(Auto vehiculo)
{
    fstream archivo;
    fstream usuarios;
    FILE nuevo;
    check_files();
    archivo.open("Auto.txt", ios::app);
    if (archivo.fail() || usuarios.fail()) {
        cout << "Ha ocurrido un error al verificar el archivo" << endl;
        exit(1);
    }
    else {
        archivo << 
		"Placa:" << vehiculo.getPlaca() << 
		"Color:" << vehiculo.getColor() << 
		"Marca:" << vehiculo.getMarca() << 
		"Modelo:" << vehiculo.getModelo() << endl;
    }
}

/**
 * @brief read_files Funcion que lee el archivo de los Usuarios
 * @param person donde leemos datos del cliente y prestamo
 *
 */

void Files::read_files(Persona persona)
{
    fstream archivo;
    int i = 0;
    std::string auxPalabra = "";
    std::string auxUsuario = "";
    long auxNum = 0;
    double saldoAux = 0;
    check_files();
    archivo.open("Usuarios.txt");
    if (archivo.fail()) {
        cout << "Error, no se pudo encontrar el archivo" << endl;
        exit(1);
    }
    else {
        while (!archivo.eof()) {
        	archivo >> auxPalabra;
        	persona.setNombre(auxPalabra);
            
            archivo >> auxPalabra;
        	persona.setApellido(auxPalabra);
        	
        	archivo >> auxPalabra;
        	persona.setDireccion(auxPalabra);
        	
            archivo >> auxNum;
            persona.setTelefono(auxNum);

			archivo >> auxPalabra;
            persona.setCorreo(auxPalabra);
            
			archivo >> auxPalabra;
            persona.setPlaca(auxPalabra);
        }
    }
    archivo.close();
    system("pause");
}

/**
 * @brief read_files Funcion que lee el archivo de los Usuarios
 * @param person donde leemos datos del cliente y prestamo
 *
 */

void Files::read_files(Auto vehiculo)
{
    fstream archivo;
    int i = 0;
    std::string auxPalabra = "";
    std::string auxUsuario = "";
    long auxNum = 0;
    double saldoAux = 0;
    check_files();
    archivo.open("Auto.txt");
    if (archivo.fail()) {
        cout << "Error, no se pudo encontrar el archivo" << endl;
        exit(1);
    }
    else {
        while (!archivo.eof()) {
        	archivo >> auxPalabra;
        	vehiculo.setPlaca(auxPalabra);
            
            archivo >> auxPalabra;
        	vehiculo.setColor(auxPalabra);
        	
        	archivo >> auxPalabra;
        	vehiculo.setMarca(auxPalabra);
        	
			archivo >> auxPalabra;
            vehiculo.setModelo(auxPalabra);
        }
    }
    archivo.close();
    system("pause");
}


/**
 * @brief check_files Funcion que cierra el archivo de los Usuarios
 *
 *
 */

void Files::check_files()
{
    fstream archivo;
    fstream usuarios;
    archivo.open("U.txt", ios::app);
    if (archivo.fail()) {
        cout << "Error al verificar Banco.txt" << endl;
        system("pause");
        create_files();
        system("cls");
        check_files();
    }
    else {
       
    }
    archivo.close();
    usuarios.close();
}

/**
 * @brief craete_files Funcion que crea archivos a los Usuarios
 *
 *
 */

void Files::create_files()
{
    fstream archivo;
    fstream usuarios;
    string ruta = "Usuarios.txt";
    archivo.open(ruta.c_str(), ios::out);
    if (archivo.fail() || usuarios.fail()) {
        cout << "Ha ocurrido un error creando el archivo" << endl;
        system("cls");
        exit(1);
    }
    archivo.close();
    usuarios.close();

}


void Files::create_pdf(Persona persona,Auto vehiculo)
{   
    std::ostringstream html;
    
    
       		html << "<html>"
            "<head><title>REPORTE</title></head>"
            "<body>";
            html << "<table><thead><tr>"
            "<th> |NOMBRE|</th>"
            "<th> |APELLIDO|</th>"
            "<th> |DIRECCION|</th>"
            //"<th> |TELEFONO|</th>"
            "<th> |CORREO|</th>"
            "<th> |PLACA|</th>"
            "<th> |COLOR|</th>"
            "<th> |MARCA|</th>"
            "<th> |MODELO|</th>"
            "</tr></thead><tbody>";
            html << "<tr>";
            html << "<td>  *   " + persona.getNombre() + "</td>";
            html << "<td>  *   " + persona.getApellido() + "</td>";    
//            html << "<td>" + persona.getTelefono() + "</td>";
            html << "<td>  *   " + persona.getCorreo() + "</td>";
            html << "<td>  *   " + persona.getPlaca() + "</td>";
            html << "<td>  *   " + vehiculo.getColor() + "</td>";
            html << "<td>  *   " + vehiculo.getMarca() + "</td>";
            html << "<td>  *   " + vehiculo.getModelo() + "</td>";
            
//           
//		    html << "</tr></tbody></table>";
//            html <<
//            "<table><thead><tr>"
//            "<th>NO</th>"
//            "<th>FECHAS DE PAGO</th>"
//            "<th>DIA</th>"
//            "<th>CAPITAL</th>"
//            "<th>INTERES</th>"
//            "<th>TOTAL</th>"
//            "</tr></thead><tbody>";
		TextTable table_text('-', '|', '+');
        table_text.add("|NOMBRE|");
        table_text.add("|APELLIDO|");
        table_text.add("|DIRECCION|");
        //table_text.add("|TELEFONO|");
        table_text.add("|CORREO|");
        table_text.add("|PLACA|");
        table_text.add("|COLOR|");
        table_text.add("|MARCA|");
        table_text.add("|MODELO|");
        table_text.endOfRow();
        
        table_text.add(persona.getNombre());
        table_text.add(persona.getApellido());
    	table_text.add(persona.getDireccion());
    	//table_text.add(persona.getTelefono());
        table_text.add(persona.getCorreo());
    	table_text.add(persona.getPlaca());
    	table_text.add(vehiculo.getColor());
        table_text.add(vehiculo.getMarca());
    	table_text.add(vehiculo.getModelo());
       
        table_text.endOfRow();
        
//        Node<Due>* node = due.get_front();
//        int i = 1;
//        while (node)
//        {
//            table_text.add(std::to_string(i++));
//            table_text.add(node->get_data().get_date());
//            table_text.add(node->get_data().get_weekday());
//            table_text.add(Utils::Generator::to_string(node->get_data().get_capital()));
//            table_text.add(Utils::Generator::to_string(node->get_data().get_interest()));
//            table_text.add(Utils::Generator::to_string(node->get_data().get_mounthly_amount()));
//            table_text.endOfRow();
//
//            html << "<tr>"
//                << "<td>" + std::to_string(i-1) + "</td>"
//                << "<td>" + node->get_data().get_date() + "</td>"
//                << "<td>" + node->get_data().get_weekday() + "</td>"
//                << "<td>" + Utils::Generator::to_string(node->get_data().get_capital()) + "</td>"
//                << "<td>" + Utils::Generator::to_string(node->get_data().get_interest()) + "</td>"
//                << "<td>" + Utils::Generator::to_string(node->get_data().get_mounthly_amount()) + "</td>"
//                << "</tr>";
//            node = node->get_next();
//        }
//        table_text.endOfRow();
        table_text.setAlignment(2, TextTable::Alignment::RIGHT);
        std::cout << table_text << std::endl;
        html << "</tbody></table></body></html>";
//        
        std::ostringstream plain;
        std::string html_filename = "data.html";
        std::string pdf_filename = "data.pdf";
        std::ofstream out_html(html_filename, std::ios::trunc);
        std::ofstream out_txt("data.txt", std::ios::trunc);
        

   
        out_html << html.str();
        out_txt.close();
        out_html.close();

        if (std::ifstream(pdf_filename.c_str()).good()) {
            std::remove(pdf_filename.c_str());
        }

        system((std::string("wkhtmltopdf.exe ") + html_filename + " " + pdf_filename).c_str());
        std::cout << std::endl << "archivo pdf generado!";
        system("pause");

}

