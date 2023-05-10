#pragma once
//#include <string>
//#include <iostream>
#include "InputController.h"
using namespace std;

class PropFieldSelection {
public:
	static size_t renderMainView();
	static void concatFilePath(string &path, size_t choice);
	static string getPropField(size_t choice);
};

