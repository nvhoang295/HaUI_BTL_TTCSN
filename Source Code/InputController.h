#pragma once
#include <iostream>
#include <string>

using namespace std;
class InputController {
private:
	static bool isValid(size_t choice, size_t left, size_t right);
public:
	static void inputChoice(size_t& choice, size_t size);
};

