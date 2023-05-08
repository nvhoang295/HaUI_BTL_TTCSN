#pragma once
#include <iterator>
#include "BasicSort.h"
class MergeSort : private BasicSort {
private:
	static void merge(bool arr[], int left, int mid, int right, function<bool(bool, bool)> cmp);
	static void merge(int arr[], int left, int mid, int right, function<bool(int, int)> cmp);
	static void merge(float arr[], int left, int mid, int right, function<bool(float, float)> cmp);
	static void merge(string arr[], int left, int mid, int right, function<bool(string, string)> cmp);
	static void merge(vector<Student>& students, int left, int mid, int right, function<bool(Student, Student)> cmp);
	static void mergeSort(bool arr[], int left, int right, function<bool(bool, bool)> cmp);
	static void mergeSort(int arr[], int left, int right, function<bool(int, int)> cmp);
	static void mergeSort(float arr[], int left, int right, function<bool(float, float)> cmp);
	static void mergeSort(string arr[], int left, int right, function<bool(string, string)> cmp);
	static void mergeSort(vector<Student>& students, int left, int right, function<bool(Student, Student)> cmp);
public:
	static void sort(bool arr[], int n, function<bool(bool, bool)> cmp);
	static void sort(int arr[], int n, function<bool(int, int)> cmp);
	static void sort(float arr[], int n, function<bool(float, float)> cmp);
	static void sort(string arr[], int n, function<bool(string, string)> cmp);
	static void sort(vector<Student>& students, function<bool(Student, Student)>cmp);
};

