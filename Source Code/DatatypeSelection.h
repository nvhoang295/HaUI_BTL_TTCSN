#pragma once

#include "InputController.h"

class DatatypeSelection {
public:
	static size_t renderMainView();
	static void concatFilePath(string& path, size_t choice);
	static string getDatatype(size_t choice);
};

