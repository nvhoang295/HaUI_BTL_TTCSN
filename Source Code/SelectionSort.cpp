#include "SelectionSort.h"

void SelectionSort::sort(bool arr[], int n, function<bool(bool, bool)> cmp) {
	for (int i = 0; i < n - 1; ++i) {
		int m = i;
		for (int j = i + 1; j < n; ++j) {
			if (cmp(arr[j], arr[m])) m = j;
		}
		BasicSort::swap(arr[m], arr[i]);
	}
}

void SelectionSort::sort(int arr[], int n, function<bool(int, int)> cmp) {
	for (int i = 0; i < n - 1; ++i) {
		int m = i;
		for (int j = i + 1; j < n; ++j) {
			if (cmp(arr[j], arr[m])) m = j;
		}
		BasicSort::swap(arr[m], arr[i]);
	}
}

void SelectionSort::sort(float arr[], int n, function<bool(float, float)> cmp) {
	for (int i = 0; i < n - 1; ++i) {
		int m = i;
		for (int j = i + 1; j < n; ++j) {
			if (cmp(arr[j], arr[m])) m = j;
		}
		BasicSort::swap(arr[m], arr[i]);
	}
}

void SelectionSort::sort(string arr[], int n, function<bool(string, string)> cmp) {
	for (int i = 0; i < n - 1; ++i) {
		int m = i;
		for (int j = i + 1; j < n; ++j) {
			if (cmp(arr[j], arr[m])) m = j;
		}
		BasicSort::swap(arr[m], arr[i]);
	}
}

void SelectionSort::sort(vector<Student>& students, function<bool(Student, Student)>cmp) {
	int n = students.size();
	for (int i = 0; i < n - 1; ++i) {
		int m = i;
		for (int j = i + 1; j < n; ++j) {
			if (cmp(students[j], students[m])) m = j;
		}
		Student::swap(students[m], students[i]);
	}
}
