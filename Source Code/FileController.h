#pragma once
#include <string>
#include <fstream>
#include "UtilsController.h"
#include "SortingAlgor.h"
#include "Student.h"

#include <iostream>

using namespace std;

class FileController {
public:
	static void createFile(string fileName, int size);
	static void createFile(string fileName, int size, int begin, int range);
	static void createFile(string fileName, int size, int begin, int range, int precision);
	static void createFile(string fileName, int size, vector<Student> students);
	static void readFile(string fileName, bool*& arr, int& size);
	static void readFile(string fileName, int *&arr, int &size);
	static void readFile(string fileName, float *&arr, int &size);
	static void readFile(string fileName, string *&arr, int &size);
	static void readFile(string fileName, vector<string> &data);
	static bool readFile(string fileName, vector<SortingAlgor>& data);
	static void readFile(string fileName, vector<Major> &majors);
	static void readFile(string fileName, vector<Student>& students);
	static void writeFile(string fileName, int *&arr, int size);
	static void writeFile(string fileName, float *&arr, int size);
	static void writeFile(string fileName, string *&arr, int size);
	static void writeFile(string fileName, vector<Student> &students, int size);
	static void writeLogFile(string fileName, string content);
};

