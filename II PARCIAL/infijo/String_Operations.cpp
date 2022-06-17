#include "String_Operations.h"

/**
* @brief turn_around 
*
*
* @return string_inverse
*/

string String_Operations::turn_around(string word_reverse)
{
    string string_inverse;
    string save_word;
    for (char& word : word_reverse) 
    {
        save_word.push_back(word);
        string_inverse = save_word + string_inverse;
        save_word = "";
    }
    return string_inverse;
}

/**
* @brief dimension
*
*
* @return size
*/

int String_Operations::dimension(string word_size)
{
    int size = 0;
    for (char& save_word : word_size)
    {
        size++;
    }
    return size;
}


/**
* @brief invertir una cadena
*
*
* @return cad_inverse
*/

string String_Operations::reverse(string word) {
    string cad_inverse;
    string aux;
    for (char& c : word) {
        aux.push_back(c);
        cad_inverse = aux + cad_inverse;
        aux = "";

    }
    return cad_inverse;
}


/**
* @brief recortar una cadena
*
*
* @return cad_sub
*/
string String_Operations::acortar_str(string cad, int limit_1, int num_character) {

    string cad_sub;
    int cont = 0;
    int cont_ch = 1;
    for (char& c : cad) {
        if (cont >= limit_1 && cont < (limit_1 + num_character)) {
            if (c == ' ') {
                cad_sub += " ";
            }
            else {
                cad_sub += c;
            }

        }
        cont++;
    }
    return cad_sub;

}
