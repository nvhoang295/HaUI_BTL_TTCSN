#pragma once
#include "BasicSort.h"
class QuickSort : private BasicSort {
private:
	static int hoarePartition(bool arr[], int left, int right, function<bool(bool, bool)> cmp);
	static int hoarePartition(int arr[], int left, int right, function<bool(int, int)> cmp);
	static int hoarePartition(float arr[], int left, int right, function<bool(float, float)> cmp);
	static int hoarePartition(string arr[], int left, int right, function<bool(string, string)> cmp);
	static int hoarePartition(vector<Student> &students, int left, int right, function<bool(Student, Student)> cmp);
	static void quickSort(bool arr[], int left, int right, function<bool(bool, bool)> cmp);
	static void quickSort(int arr[], int left, int right, function<bool(int, int)> cmp);
	static void quickSort(float arr[], int left, int right, function<bool(float, float)> cmp);
	static void quickSort(string arr[], int left, int right, function<bool(string, string)> cmp);
	static void quickSort(vector<Student> &students, int left, int right, function<bool(Student, Student)> cmp);

public:
	static void sort(bool arr[], int n, function<bool(bool, bool)> cmp);
	static void sort(int arr[], int n, function<bool(int, int)> cmp);
	static void sort(float arr[], int n, function<bool(float, float)> cmp);
	static void sort(string arr[], int n, function<bool(string, string)> cmp);
	static void sort(vector<Student> &students, function<bool(Student, Student)> cmp);
};

