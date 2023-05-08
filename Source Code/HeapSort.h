#pragma once
#include "BasicSort.h"
class HeapSort : private BasicSort {
private:
	static void heapify(bool arr[], int n, int i, function<bool(bool, bool)> cmp);
	static void heapify(int arr[], int n, int i, function<bool(int, int)> cmp);
	static void heapify(float arr[], int n, int i, function<bool(float, float)> cmp);
	static void heapify(string arr[], int n, int i, function<bool(string, string)> cmp);
	static void heapify(vector<Student> &students, int n, int i, function<bool(Student, Student)> cmp);
	static void heapSort(bool arr[], int n, function<bool(bool, bool)> cmp);
	static void heapSort(int arr[], int n, function<bool(int, int)> cmp);
	static void heapSort(float arr[], int n, function<bool(float, float)> cmp);
	static void heapSort(string arr[], int n, function<bool(string, string)> cmp);
	static void heapSort(vector<Student> &students, int n, function<bool(Student, Student)> cmp);

public:
	static void sort(bool arr[], int n, function<bool(bool, bool)> cmp);
	static void sort(int arr[], int n, function<bool(int, int)> cmp);
	static void sort(float arr[], int n, function<bool(float, float)> cmp);
	static void sort(string arr[], int n, function<bool(string, string)> cmp);
	static void sort(vector<Student> &students, function<bool(Student, Student)> cmp);
};

