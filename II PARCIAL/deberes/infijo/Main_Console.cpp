#include "Main_Console.h"

/**
* @brief :main_menu, Menu principal del sistema, da acceso a todas las funciones del sistema
* 
*
* 
*
* @return void
*/

void Main_Console::main_menu()
{
    bool repeat_menu = true;
    const char* title = "Calculadora de Conversiones";
    const char* options_menu[] = { "Convertir a partir de Infijo", "Convertir a partir de Prefijo", "Convertir a partir de Postfijo", "Salir" };
    int option_selected;

    do {
        system("cls");
        system("COLOR 0E");
        screen.ajust_size();
        option_selected = screen.print_menu(title, options_menu, 4);

        switch (option_selected) {
        case 1:
            infix_menu();
            system("pause>nul");
            break;
        case 2:
            prefix_menu();
            system("pause>nul");
            break;
        case 3:
            postfix_menu();
            system("pause>nul");
            break;
        case 4:
            repeat_menu = false;
            break;
        }
    } while (repeat_menu == true);
}

/**
* @brief Menu infijo
*
* @return void
*/
void Main_Console::infix_menu()
{
    bool repeat_menu = true;
    const char* title = "Conversiones Infijo";
    const char* options_menu[] = { "Convertir Infijo a Prefijo", "Convertir Infijo a Postfijo", "Convertir Infijo a Funcional", "Salir" };
    int option_selected;

    do {
        system("cls");
        system("COLOR 0E");
        screen.ajust_size();
        option_selected = screen.print_menu(title, options_menu, 4);

        switch (option_selected) {
        case 1:
            infix_to_prefix();
            system("pause>nul");
            break;
        case 2:
            infix_to_postfix();
            system("pause>nul");
            break;
        case 3:
            infix_to_functional();
            system("pause>nul");
            break;

        case 4:
            repeat_menu = false;
            break;
        }
    } while (repeat_menu == true);
}

/**
* @brief Menu prefijo
*
* @return void
*/
void Main_Console::prefix_menu()
{
    bool repeat_menu = true;
    const char* title = "Conversiones Prefijo";
    const char* options_menu[] = { "Convertir Prefijo a Infijo", "Convertir Prefijo a Postfijo", "Convertir Prefijo a Funcional", "Salir" };
    int option_selected;

    do {
        system("cls");
        system("COLOR 0E");
        screen.ajust_size();
        option_selected = screen.print_menu(title, options_menu, 4);

        switch (option_selected) {
        case 1:
            prefix_to_infix();
            system("pause>nul");
            break;
        case 2:
            prefix_to_postfix();
            system("pause>nul");
            break;
        case 3:
            prefix_to_functional();
            system("pause>nul");
            break;

        case 4:
            repeat_menu = false;
            break;
        }
    } while (repeat_menu == true);
}

/**
* @brief Menu postfijo
*
* @return void
*/
void Main_Console::postfix_menu()
{
    bool repeat_menu = true;
    const char* title = "Conversiones Postfijo";
    const char* options_menu[] = { "Convertir Postfijo a Infijo", "Convertir Postfijo a Prefijo", "Convertir Postfijo a Funcional", "Salir" };
    int option_selected;

    do {
        system("cls");
        system("COLOR 0E");
        screen.ajust_size();
        option_selected = screen.print_menu(title, options_menu, 4);

        switch (option_selected) {
        case 1:
            postfix_to_infix();
            system("pause>nul");
            break;
        case 2:
            postfix_to_prefix();
            system("pause>nul");
            break;
        case 3:
            postfix_to_functional();
            system("pause>nul");
            break;

        case 4:
            repeat_menu = false;
            break;
        }
    } while (repeat_menu == true);
}

/**
* @brief Menu infijo a prefijo
*
* @return void
*/
void Main_Console::infix_to_prefix()
{
    system("cls");
    screen.print_squart(0, 0, 78, 39);
    screen.print_squart(1, 1, 77, 3);  

    string expresion;

    screen.print_coordinates(15, 2);
    std::cout << "Infijo a Prefijo";    
    screen.print_coordinates(8, 4);
    std::cout << "Ingrese una expresion infija: ";
    std::cin >> expresion;
    expresion = calculator.infix_to_prefix(expresion);
    screen.print_coordinates(8, 6);
    std::cout << "Su expresión en prefijo es:  ";    
    std::cout << expresion;
}
/**
* @brief Menu infijo a postifo
*
* @return void
*/
void Main_Console::infix_to_postfix()
{
    system("cls");
    screen.print_squart(0, 0, 78, 39);
    screen.print_squart(1, 1, 77, 3);
    screen.print_coordinates(15, 2);
    std::cout << "Infijo a Postfijo";
    string expresion;
    screen.print_coordinates(8, 4);
    std::cout << "Ingrese una expresion infija: ";
    std::cin >> expresion;
    expresion = calculator.infix_to_postfix(expresion);
    screen.print_coordinates(8, 6);
    std::cout << "Su expresión en postfijo es:  ";
    std::cout << expresion;
}

/**
* @brief Menu infijo a funcional
*
* @return void
*/
void Main_Console::infix_to_functional()
{
    system("cls");
    screen.print_squart(0, 0, 78, 39);
    screen.print_squart(1, 1, 77, 3);

    string expresion;

    screen.print_coordinates(15, 2);
    std::cout << "Infijo a Funcional";
    screen.print_coordinates(8, 4);
    std::cout << "Ingrese una expresion infija: ";
    std::cin >> expresion;
    expresion = calculator.infix_to_functional(expresion);
    screen.print_coordinates(8, 6);
    std::cout << "Su expresión en funcional es:  ";
    std::cout << expresion;
}

/**
* @brief Menu prefijo a infijo
*
* @return void
*/
void Main_Console::prefix_to_infix()
{
    system("cls");
    screen.print_squart(0, 0, 78, 39);
    screen.print_squart(1, 1, 77, 3);
    screen.print_coordinates(15, 2);
    std::cout << "Prefijo a Infijo";
    string expresion;
    screen.print_coordinates(8, 4);
    std::cout << "Ingrese una expresion prefija: ";
    std::cin >> expresion;
    expresion = calculator.prefix_to_infix(expresion);
    screen.print_coordinates(8, 6);
    std::cout << "Su expresión en infijo es:  ";
    std::cout << expresion;
}

/**
* @brief Menu prefijo a postfijo
*
* @return void
*/
void Main_Console::prefix_to_postfix()
{
    system("cls");
    screen.print_squart(0, 0, 78, 39);
    screen.print_squart(1, 1, 77, 3);
    screen.print_coordinates(15, 2);
    std::cout << "Prefijo a Postfijo";
    string expresion;
    screen.print_coordinates(8, 4);
    std::cout << "Ingrese una expresion prefija: ";
    std::cin >> expresion;
    expresion = calculator.prefix_to_postfix(expresion);
    screen.print_coordinates(8, 6);
    std::cout << "Su expresión en postfijo es:  ";
    std::cout << expresion;
}

/**
* @brief Menu prefijo a funcional
*
* @return void
*/
void Main_Console::prefix_to_functional()
{
    system("cls");
    screen.print_squart(0, 0, 78, 39);
    screen.print_squart(1, 1, 77, 3);

    string expresion;

    screen.print_coordinates(15, 2);
    std::cout << "Prefijo a Funcional";
    screen.print_coordinates(8, 4);
    std::cout << "Ingrese una expresion Prefija: ";
    std::cin >> expresion;
    expresion = calculator.infix_to_functional(expresion);
    screen.print_coordinates(8, 6);
    std::cout << "Su expresión en funcional es:  ";
    std::cout << expresion;
}

/**
* @brief Menu postfijo a infijo
*
* @return void
*/
void Main_Console::postfix_to_infix()
{
    system("cls");
    screen.print_squart(0, 0, 78, 39);
    screen.print_squart(1, 1, 77, 3);
    screen.print_coordinates(15, 2);
    std::cout << "Postfijo a Infijo";
    string expresion;
    screen.print_coordinates(8, 4);
    std::cout << "Ingrese una expresion postfija: ";
    std::cin >> expresion;  
    expresion = calculator.postfix_to_infix(expresion);
    screen.print_coordinates(8, 6);
    std::cout << "Su expresión en infijo es:  ";
    std::cout << expresion;
}
/**
* @brief Menu postfijo a prefijo
*
* @return void
*/
void Main_Console::postfix_to_prefix()
{
    system("cls");
    screen.print_squart(0, 0, 78, 39);
    screen.print_squart(1, 1, 77, 3);
    screen.print_coordinates(15, 2);
    std::cout << "Postfijo a Prefijo";
    string expresion;
    screen.print_coordinates(8, 4);
    std::cout << "Ingrese una expresion postfija: ";
    std::cin >> expresion;
    expresion = calculator.postfix_to_prefix(expresion);
    screen.print_coordinates(8, 6);
    std::cout << "Su expresión en prefijo es:  ";
    std::cout << expresion;
}
/**
* @brief Menu postfijo a funcional
*
* @return void
*/
void Main_Console::postfix_to_functional()
{
    system("cls");
    screen.print_squart(0, 0, 78, 39);
    screen.print_squart(1, 1, 77, 3);

    string expresion;

    screen.print_coordinates(15, 2);
    std::cout << "Postfijo a Funcional";
    screen.print_coordinates(8, 4);
    std::cout << "Ingrese una expresion Postfija: ";
    std::cin >> expresion;
    expresion = calculator.infix_to_functional(expresion);
    screen.print_coordinates(8, 6);
    std::cout << "Su expresión en funcional es:  ";
    std::cout << expresion;
}
