#pragma once
#include <iomanip>
#include "FileController.h"
#include "InputController.h"
#include "Decorator.h"
#include "SortingAlgor.h"

class AlgorSelectionView{
private:
	static void renderAlgorRecord(int index, SortingAlgor data);
	static void renderAlgorList(vector<SortingAlgor> datas, bool *selectedAlgors, size_t size, bool haveSelected);

public:
	static bool renderMainView(bool selectedAlgors[]);
	static void concatFilePath(string& path, size_t choice);
};

