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
