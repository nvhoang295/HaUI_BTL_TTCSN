#pragma once
#include "InputController.h"
using namespace std;
class OrderSelection {
public:
	static size_t renderMainView();
	static void concatFilePath(string& path, size_t choice);
	static string getOrder(size_t choice);
};

