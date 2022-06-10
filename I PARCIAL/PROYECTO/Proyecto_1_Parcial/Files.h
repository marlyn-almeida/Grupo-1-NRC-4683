
#pragma once
#include "Auto.h"
#include "Persona.h"
#include <iostream>
#include <conio.h>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <fstream>

#include <vector>
#include "TextTable.h"
#include <iomanip>
#include <sstream>


using namespace std;

class Files {
public:
	void save_files(Persona);
	void read_files(Persona);
	void save_files(Auto);
	void read_files(Auto);
	void check_files();
	void create_files();
	void create_pdf(Persona,Auto);
};
