#pragma once

#include <string>
#include <chrono>
#include <iomanip>

#include "BubbleSort.h"
#include "SelectionSort.h"
#include "InsertionSort.h"
#include "MergeSort.h"
#include "QuickSort.h"
#include "HeapSort.h"

#include "FileController.h"
#include "BenchmarksController.h"
#include "UtilsController.h"

#include "Decorator.h"


using namespace std::chrono;
using namespace std;

class BenchmarksResult {
public:
	static void renderMainView(bool selectedAlgors[], string path, string order, string datatype, bool isObjective, int quantity);
	static void renderInfor(string path, string order, string datatype, bool isObjective, int quantity);
	static void renderBenchmarksProcess(bool selectedAlgors[], float results[], string path, string datatype);
	static void renderBenchmarksResult(int algorIndex, float result);
};

