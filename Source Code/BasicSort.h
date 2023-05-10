#pragma once

#include <string>
#include <functional>
//#include <algorithm>
#include "Student.h"
#include "UtilsController.h"
#include "Complexity.h"
using namespace std;

class BasicSort {
public:
	static void swap(bool& left, bool& right);
	static void swap(int& left, int& right);
	static void swap(float& left, float& right);	
	static void swap(string& left, string& right);
	
	//static void swap(datatype& left, datatype& right);

	// 
	// 
	//static void swap(Student& left, Student& right);
	//virtual void sort(bool arr[], int n, function<bool(bool, bool)> cmp) = 0;
	//virtual void sort(int arr[], int n, function<bool(int, int)> cmp) = 0;
	//virtual void sort(float arr[], int n, function<bool(float, float)> cmp) = 0;
	//virtual void sort(string arr[], int n, function<bool(string, string)> cmp) = 0;
	//virtual void sort(vector<Student>& students, function<bool(Student, Student)> cmp) = 0;
};

