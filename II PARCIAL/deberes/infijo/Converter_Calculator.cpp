#include "Converter_Calculator.h"


/**
* @brief infix_to_prefix, convierte una expresion infija en prefija
*
* @param Stack* persona permite acceder a los datos de la pila
* 
* @param String_Operations string_operations permite acceder a las funciones propias de string
*
* @return string
*/

string Converter_Calculator::infix_to_prefix(string infix_expresion)//Funcion que convierte de infijo a prefijo
{
    char symbol_null = { ' ' }; //Variable
    string prefix_expresion;    //Variable guarda la expresion en prefija

    string string_reverse = string_operations.turn_around(infix_expresion);    //Creamos un objeto
    
    for (char& paretensis_symbol : string_reverse) //Creamos un ciclo repetitivo para convertir todos los valores
    {
        if (paretensis_symbol == '(') // Comprueba los parentesis
        {
            paretensis_symbol = ')'; //Almacena los parentesis
        }
        else if (paretensis_symbol == ')') // Comprueba los parentesis
        {
            paretensis_symbol = '(';//Almacena los parentesis
        }
    }

    infix_expresion = string_reverse; // Pasa a guardarse la expresion

    for (char& operator_symbol : infix_expresion) { //Creamos un repeticion en infijo para los operadores
      
        if ((
            operator_symbol >= 'a' && operator_symbol <= 'z' || //Validacion de Operadores
            operator_symbol >= 'A' && operator_symbol <= 'Z' || //Validacion de Operadores
            operator_symbol >= '0' && operator_symbol <= '9'))  //Validacion de Operadores
        {
            prefix_expresion += operator_symbol; //Guarda y suma los operadores
        }
        else if (operator_symbol == '(') { //Compara
            stack.insert_stack(operator_symbol); //Inserta los operadores
        }
        else if (operator_symbol == ')') //Compara
        {
            while ((stack.get_first()->get_symbol() != '(') && (!stack.empty_stack()))//Inserta los operadores
            {
                prefix_expresion += stack.get_first()->get_symbol();//Envia por medio de punteros la informacion de los operadores
                stack.delete_stack();//Borra
            }
            if (stack.get_first()->get_symbol() == '(') //Comprueba
            {
                stack.delete_stack();//Borra
            }
        }
        else if (check_operator(operator_symbol)) //Obtenemos otros condicional para los operadores 
        {
            if (stack.empty_stack())//Compara
            {
                stack.insert_stack(operator_symbol);//Inserta
            }
            else 
            {
                if (order_of_precedence(operator_symbol) > order_of_precedence(stack.get_first()->get_symbol()))//Envia informacion por medio de punteros
                {
                    stack.insert_stack(operator_symbol);//inserta la informacion
                }
                else if ((order_of_precedence(operator_symbol) == order_of_precedence(stack.get_first()->get_symbol())) && (operator_symbol == '^')) //tenemos varios condicionales
                {
                    while ((order_of_precedence(operator_symbol) == order_of_precedence(stack.get_first()->get_symbol())) && (operator_symbol == '^')) 
                    {
                        prefix_expresion += stack.get_first()->get_symbol();
                        stack.delete_stack();
                    }
                    stack.insert_stack(operator_symbol);
                }
                else if (order_of_precedence(operator_symbol) == order_of_precedence(stack.get_first()->get_symbol()))
                {
                    stack.insert_stack(operator_symbol);
                }
                else 
                {
                    while ((!stack.empty_stack()) && (order_of_precedence(operator_symbol) < order_of_precedence(stack.get_first()->get_symbol())))
                    {
                        prefix_expresion += stack.get_first()->get_symbol();
                        stack.delete_stack();
                    }
                    stack.insert_stack(operator_symbol);
                }
            }
        }
        symbol_null = operator_symbol;
    }

    while (!stack.empty_stack()) 
    {
        prefix_expresion += stack.get_first()->get_symbol();
        stack.delete_stack();
    }
   // reverse(prefix_expresion.begin(), prefix_expresion.end());

    return prefix_expresion;
}

/**
* @brief infix_to_postfix, convierte una expresion infija en postfijo
*
* @param Stack* persona permite acceder a los datos de la pila
*
* @param String_Operations string_operations permite acceder a las funciones propias de string
*
* @return string
*/


string Converter_Calculator::infix_to_postfix(string infix_expresion)
{
    char symbol_null = { ' ' };
    string postfix_expresion;
    
    for (char& operator_symbol : infix_expresion) 
    {
        if ((operator_symbol >= 'a' && operator_symbol <= 'z' ||
            operator_symbol >= 'A' && operator_symbol <= 'B' ||
            operator_symbol >= 'D' && operator_symbol <= 'R' ||
            operator_symbol >= 'U' && operator_symbol <= 'Z' ||
            operator_symbol >= '0' && operator_symbol <= '9'))
        {
            postfix_expresion += operator_symbol;
        }
        else if (operator_symbol == '(') 
        {
            stack.insert_stack(operator_symbol);
        }
        else if (operator_symbol == ')') 
        {
            while ((stack.get_first()->get_symbol() != '(') && (!stack.empty_stack())) 
            {
                postfix_expresion += stack.get_first()->get_symbol();
                stack.delete_stack();
            }
            if (stack.get_first()->get_symbol() == '(') 
            {
                stack.delete_stack();
            }
        }
        else if (check_operator(operator_symbol))
        {
            if (stack.empty_stack())
            {
                stack.insert_stack(operator_symbol);
            }
            else 
            {
                if (order_of_precedence(operator_symbol) > order_of_precedence(stack.get_first()->get_symbol())) 
                {
                    stack.insert_stack(operator_symbol);
                }
                else if ((order_of_precedence(operator_symbol) == order_of_precedence(stack.get_first()->get_symbol())))
                {
                    while ((order_of_precedence(operator_symbol) == order_of_precedence(stack.get_first()->get_symbol()))) 
                    {
                        postfix_expresion += stack.get_first()->get_symbol();
                        stack.delete_stack();
                    }
                    stack.insert_stack(operator_symbol);
                }
                else if (order_of_precedence(operator_symbol) == order_of_precedence(stack.get_first()->get_symbol()))
                {
                    stack.insert_stack(operator_symbol);
                }
                else 
                {
                    while ((!stack.empty_stack()) && (order_of_precedence(operator_symbol) < order_of_precedence(stack.get_first()->get_symbol())))
                    {
                        postfix_expresion += stack.get_first()->get_symbol();
                        stack.delete_stack();
                    }
                    stack.insert_stack(operator_symbol);
                }
            }
        }
        symbol_null = operator_symbol;
    }

    while (!stack.empty_stack()) {
        postfix_expresion += stack.get_first()->get_symbol();
        stack.delete_stack();
    }
    return postfix_expresion;
}

/**
* @brief prefix_to_infix, convierte una expresion infija en infijo
*
* @param Stack* persona permite acceder a los datos de la pila
*
* @param String_Operations string_operations permite acceder a las funciones propias de string
*
* @return string
*/

string Converter_Calculator::prefix_to_infix(string prefix_expresion)
{      
    string variable_1;
    string variable_2;
    string symbol_null = "";

    string string_reverse = string_operations.turn_around(prefix_expresion);
    for (char& operation_symbol : string_reverse)
    {
        if (check_operation(operation_symbol)) 
        {
            symbol_null.push_back(operation_symbol);            
            stack.insert_stack(symbol_null);
            symbol_null = "";
        }
        else if (operation_symbol == '+' || operation_symbol == '-' || operation_symbol == '=')
        {
            variable_1 = stack.get_first()->get_symbol_str();
            stack.delete_stack();
            variable_2 = stack.get_first()->get_symbol_str();
            stack.delete_stack();
            stack.insert_stack(variable_1 + operation_symbol + variable_2);
        }
        else if (operation_symbol == '*' || operation_symbol == '/' || operation_symbol == '%' ||
            operation_symbol == 'S' || operation_symbol == 'C' || operation_symbol == 'T')
        {
            variable_1 = stack.get_first()->get_symbol_str();
            stack.delete_stack();
            variable_2 = stack.get_first()->get_symbol_str();
            stack.delete_stack();
            if (string_operations.dimension(variable_1) > 1) 
            {
                variable_1 = "(" + variable_1 + ")";
            }
            if (string_operations.dimension(variable_2) > 1) 
            {
                variable_2 = "(" + variable_2 + ")";
            }
            stack.insert_stack( variable_1 + operation_symbol + variable_2 );
        }
        else if (operation_symbol == '%') 
        {
            variable_1 = stack.get_first()->get_symbol_str();
            stack.delete_stack();
            variable_2 = stack.get_first()->get_symbol_str();
            stack.delete_stack();
            if (string_operations.dimension(variable_1) > 1) 
            {
                variable_1 = "(" + variable_1 + ")";
            }
            if (string_operations.dimension(variable_2) > 1) 
            {
                variable_2 = "(" + variable_2 + ")";
            }
            stack.insert_stack( variable_1 + operation_symbol + variable_2 );
        }
        else if (operation_symbol == '^')
        {
            variable_1 = stack.get_first()->get_symbol_str();
            stack.delete_stack();
            variable_2 = stack.get_first()->get_symbol_str();
            stack.delete_stack();
            if (string_operations.dimension(variable_1) > 1)
            {
                variable_1 = "(" + variable_1 + ")";
            }
            if (string_operations.dimension(variable_2) > 1) 
            {
                variable_2 = "(" + variable_2 + ")";
            }
            stack.insert_stack( variable_1 + operation_symbol + variable_2 );
        }
    }
    return stack.get_first()->get_symbol_str();
}

/**
* @brief prefix_to_postfix, convierte una expresion infija en postfijo
*
* @param Stack* persona permite acceder a los datos de la pila
*
* @param String_Operations string_operations permite acceder a las funciones propias de string
*
* @return string
*/

string Converter_Calculator::prefix_to_postfix(string prefix_expresion)
{
    string postfix_expresion;
    postfix_expresion = prefix_to_infix(prefix_expresion);
    postfix_expresion = infix_to_postfix(postfix_expresion);
    return postfix_expresion;
}

/**
* @brief postfix_to_infix, convierte una expresion infija en infijo
*
* @param Stack* persona permite acceder a los datos de la pila
*
* @param String_Operations string_operations permite acceder a las funciones propias de string
*
* @return string
*/

string Converter_Calculator::postfix_to_infix(string postfix_expresion)
{    
    string variable_1;
    string variable_2;
    string symbol_null = "";

    for (char& operation_symbol : postfix_expresion) 
    {
        if (check_operation(operation_symbol)) {
            symbol_null.push_back(operation_symbol);
            stack.insert_stack(symbol_null);
            symbol_null = "";
        }
        else if (operation_symbol == '+' || operation_symbol == '-' || operation_symbol == '=')
        {
            variable_1 = stack.get_first()->get_symbol_str();
            stack.delete_stack();
            variable_2 = stack.get_first()->get_symbol_str();
            stack.delete_stack();
            stack.insert_stack(variable_2 + operation_symbol + variable_1);
        }
        else if (operation_symbol == '*' || operation_symbol == '/' || operation_symbol == '%' ||
            operation_symbol == 'S' || operation_symbol == 'C' || operation_symbol == 'T')
        {
            variable_1 = stack.get_first()->get_symbol_str();
            stack.delete_stack();
            variable_2 = stack.get_first()->get_symbol_str();
            stack.delete_stack();
            if (string_operations.dimension(variable_1) > 1) 
            {
                variable_1 = "(" + variable_1 + ")";
            }
            if (string_operations.dimension(variable_2) > 1) 
            {
                variable_2 = "(" + variable_2 + ")";
            }
            stack.insert_stack( variable_2 + operation_symbol + variable_1 );
        }
        else if (operation_symbol == '^') 
        {
            variable_1 = stack.get_first()->get_symbol_str();
            stack.delete_stack();
            variable_2 = stack.get_first()->get_symbol_str();
            stack.delete_stack();
            if (string_operations.dimension(variable_1) > 1) 
            {
                variable_1 = "(" + variable_1 + ")";
            }
            if (string_operations.dimension(variable_2) > 1) 
            {
                variable_2 = "(" + variable_2 + ")";
            }
            stack.insert_stack( variable_2 + operation_symbol + variable_1 );
        }     
        
    }
    return stack.get_first()->get_symbol_str();
}

/**
* @brief postfix_to_prefix, convierte una expresion infija en prefijo
*
* @param Stack* persona permite acceder a los datos de la pila
*
* @param String_Operations string_operations permite acceder a las funciones propias de string
*
* @return string
*/

string Converter_Calculator::postfix_to_prefix(string postfix_expresion)
{
    string prefix_expresion;
    prefix_expresion = postfix_to_infix(postfix_expresion);
    prefix_expresion = infix_to_prefix(prefix_expresion);
    return prefix_expresion;
}

/**
* @brief order_of_precedence, Orden de presedencia de los operadores
*
*
* @return int
*/

int Converter_Calculator::order_of_precedence(char symbol)
{
    if (symbol == '^')
    {
        return 5;
    }
    else if (symbol == 'S' || symbol == 'C' || symbol == 'T')
    {
        return 4;
    }
    else if (symbol == '*' || symbol == '/')
    {
        return 3;
    }

    else if (symbol == '+' || symbol == '-')
    {
        return 2;
    }

    else if (symbol == '=')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}


/**
* @brief order_of_precedence, Permite checar que tipo de operador se esta usando en la cadena
*
*
* @return bool
*/

bool Converter_Calculator::check_operator(char symbol)
{
    if (symbol == '+' ||
        symbol == '-' ||
        symbol == '*' ||
        symbol == '/' ||
        symbol == '%' ||
        symbol == '^' ||
        symbol == 'S' ||
        symbol == 'C' ||
        symbol == 'T' ||
        symbol == '=')
    {
        return true;
    }
    return false;
}

/**
* @brief order_of_precedence, Permite checar que tipo de variables se estan usando en la cadena
*
*
* @return bool
*/

bool Converter_Calculator::check_operation(char symbol)
{
    if (symbol >= 'a' && symbol <= 'z' ||
        symbol >= 'A' && symbol <= 'Z' ||
        symbol >= '0' && symbol <= '9')
    {
        return true;
    }
    return false;
}

string Converter_Calculator::infix_to_functional(string infix_expression) {

    string aux1_expression;
    string aux2_expression;

    aux1_expression = infix_to_prefix(infix_expression);
    aux2_expression = prefix_to_functional(aux1_expression);

    return aux2_expression;

}

string Converter_Calculator::prefix_to_functional(string prefix_expression) {

    String_Operations str;
    string cad = str.reverse(prefix_expression);
    string aux, aux2;
    string charac = "";
    char anterior = '.';

    for (char& character : cad) {
        if (check_if_is_operand(character)) {
            charac.push_back(character);
            stack.insert_stack(charac);
            charac = "";

        }
        else if (character == '+') {
            aux = stack.get_first()->get_symbol_str();
            stack.delete_stack();
            aux2 = stack.get_first()->get_symbol_str();
            stack.delete_stack();
            stack.insert_stack("Suma(" + aux + " , " + aux2 + ")");

        }
        else if (character == '-') {
            aux = stack.get_first()->get_symbol_str();
            stack.delete_stack();
            aux2 = stack.get_first()->get_symbol_str();
            stack.delete_stack();
            stack.insert_stack("Resta(" + aux + "," + aux2 + ")");

        }
        else if (character == '*') {
            aux = stack.get_first()->get_symbol_str();
            stack.delete_stack();
            aux2 = stack.get_first()->get_symbol_str();
            stack.delete_stack();
            stack.insert_stack("Multiplicacion(" + aux + "," + aux2 + ")");

        }
        else if (character == '/') {
            aux = stack.get_first()->get_symbol_str();
            stack.delete_stack();
            aux2 = stack.get_first()->get_symbol_str();
            stack.delete_stack();
            stack.insert_stack("Division(" + aux + "," + aux2 + ")");

        }
        else if (character == '%') {
            aux = stack.get_first()->get_symbol_str();
            stack.delete_stack();
            aux2 = stack.get_first()->get_symbol_str();
            stack.delete_stack();
            stack.insert_stack("Modulo(" + aux + "," + aux2 + ")");

        }
        else if (character == '^') {
            aux = stack.get_first()->get_symbol_str();
            stack.delete_stack();
            aux2 = stack.get_first()->get_symbol_str();
            stack.delete_stack();
            stack.insert_stack("Potencia(" + aux + "," + aux2 + ")");

        }
        
        else if (character == 'T') {
            aux = stack.get_first()->get_symbol_str();
            stack.delete_stack();
            stack.insert_stack("Tangente(" + aux + ")");

        }
        else if (character == 'S') {
            aux = stack.get_first()->get_symbol_str();
            stack.delete_stack();
            stack.insert_stack("Seno(" + aux + ")");

        }
        else if (character == 'C') {
            aux = stack.get_first()->get_symbol_str();
            stack.delete_stack();
            stack.insert_stack("Coseno(" + aux + ")");
        }
        else if (character == '=') {
            aux = stack.get_first()->get_symbol_str();
            stack.delete_stack();
            stack.insert_stack("Igual(" + aux + ")");
        }
        

    }
    return stack.get_first()->get_symbol_str();

}

string Converter_Calculator::postfix_to_functional(string postfix_expression) {

    string aux1_expression;
    string aux2_expression;
    aux1_expression = postfix_to_prefix(postfix_expression);
    cout << aux1_expression << endl;
    aux2_expression = prefix_to_functional(aux1_expression);
    return aux2_expression;
}

bool Converter_Calculator::check_if_is_operand(char symbol)
{
    if (symbol >= 'a' && symbol <= 'z' ||
        symbol >= 'A' && symbol <= 'B' ||
        symbol >= 'D' && symbol <= 'R' ||
        symbol >= 'U' && symbol <= 'Z' ||
        symbol >= '0' && symbol <= '9')
    {
        return true;
    }
    return false;
}
