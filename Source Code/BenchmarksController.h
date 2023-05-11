#pragma once
#include <string>
#include <chrono>

#include "BubbleSort.h"
#include "SelectionSort.h"
#include "InsertionSort.h"
#include "MergeSort.h"
#include "QuickSort.h"
#include "HeapSort.h"

#include "Student.h"

#include "FileController.h"

using namespace std;
using namespace std::chrono;

class BenchmarksController {
public:
	static float benchmarksBooleans(int choice, string path);
	static float benchmarksIntegers(int choice, string path);
	static float benchmarksFloats(int choice, string path);
	static float benchmarksStudentId(int choice, string path);
	static float benchmarksMajorId(int choice, string path);
	static float benchmarksName(int choice, string path);
	static float benchmarksGpa(int choice, string path);
	static float benchmarksGender(int choice, string path);
	static float benchmarksDob(int choice, string path);
	static float executeBenchmarks(int choice, string path, string datatype);
};

