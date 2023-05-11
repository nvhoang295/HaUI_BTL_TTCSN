#pragma once
#include "InputController.h"

#include <iomanip>

class ElemQuantitySelection {
public:
	static size_t renderMainView(bool isObjective);
	static void concatFilePath(string& path, string datatype, string quantity, string order);
	static int getElemQuantity(size_t choice);
};

