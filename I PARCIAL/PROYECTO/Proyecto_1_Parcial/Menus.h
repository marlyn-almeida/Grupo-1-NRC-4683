#pragma once
#include <iostream>
#include <conio.h>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "ListaCircularDoble.h"
#include "ListaPerson.h"
#include "Persona.h"
#include <fstream>
#include <sstream>
#include <vector>
#include "Auto.h"
#include "Files.h"
#include <Windows.h>
#include <time.h>



using namespace std;

class Menus{
	private:
    	
	public:
 	   int menu(string [], string, int, int);
  	  void menuTeclas(string [], int, int, ListaPerson, ListaCircularDoble);
    
};

