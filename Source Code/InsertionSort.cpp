#include "InsertionSort.h"

void InsertionSort::sort(bool arr[], int n, function<bool(bool, bool)> cmp) {
	for (int i = 1; i < n; ++i) {
		bool key = arr[i];
		int j = i - 1;
		while (j > -1 && cmp(key, arr[j])) {
			arr[j + 1] = arr[j];
			--j;
		}
		arr[j + 1] = key;
	}
}

void InsertionSort::sort(int arr[], int n, function<bool(int, int)> cmp) {
	for (int i = 1; i < n; ++i) {
		int key = arr[i];
		int j = i - 1;
		while (j > -1 && cmp(key, arr[j])) {
			arr[j + 1] = arr[j];
			--j;
		}
		arr[j + 1] = key;
	}
}

void InsertionSort::sort(float arr[], int n, function<bool(float, float)> cmp) {
	for (int i = 1; i < n; ++i) {
		float key = arr[i];
		int j = i - 1;
		while (j > -1 && cmp(key, arr[j])) {
			arr[j + 1] = arr[j];
			--j;
		}
		arr[j + 1] = key;
	}
}

void InsertionSort::sort(string arr[], int n, function<bool(string, string)> cmp) {
	for (int i = 1; i < n; ++i) {
		string key = arr[i];
		int j = i - 1;
		while (j > -1 && cmp(key, arr[j])) {
			arr[j + 1] = arr[j];
			--j;
		}
		arr[j + 1] = arr[i];
	}
}

void InsertionSort::sort(vector<Student>& students, function<bool(Student, Student)>cmp) {
	int n = students.size();
	for (int i = 1; i < n; ++i) {
		Student key = students[i];
		int j = i - 1;
		while (j > -1 && cmp(key, students[j])) {
			students[j + 1] = students[j];
			--j;
		}
		students[j + 1] = key;
	}
}
