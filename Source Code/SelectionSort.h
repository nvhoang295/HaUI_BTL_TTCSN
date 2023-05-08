#pragma once
#include "BasicSort.h"
class SelectionSort : private BasicSort {
public:
	static void sort(bool arr[], int n, function<bool(bool, bool)> cmp);
	static void sort(int arr[], int n, function<bool(int, int)> cmp);
	static void sort(float arr[], int n, function<bool(float, float)> cmp);
	static void sort(string arr[], int n, function<bool(string, string)> cmp);
	static void sort(vector<Student>& students, function<bool(Student, Student)>cmp);
};

