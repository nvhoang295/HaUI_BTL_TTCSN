#include "BubbleSort.h"

void BubbleSort::sort(bool arr[], int n, function<bool(bool, bool)> cmp) {
	for (int i = 0; i < n - 1; ++i) {
		for (int j = n - 1; j > i; --j) {
			if (cmp(arr[j], arr[j - 1])) {
				BasicSort::swap(arr[j - 1], arr[j]);
			}
		}
	}
}

void BubbleSort::sort(int arr[], int n, function<bool(int, int)> cmp) {
	for (int i = 0; i < n - 1; ++i) {
		for (int j = n - 1; j > i; --j) {
			if (cmp(arr[j], arr[j - 1])) {
				BasicSort::swap(arr[j - 1], arr[j]);
			}
		}
	}
}

void BubbleSort::sort(float arr[], int n, function<bool(float, float)> cmp) {
	for (int i = 0; i < n - 1; ++i) {
		for (int j = n - 1; j > i; --j) {
			if (cmp(arr[j], arr[j - 1])) {
				BasicSort::swap(arr[j - 1], arr[j]);
			}
		}
	}
}

void BubbleSort::sort(string arr[], int n, function<bool(string, string)> cmp) {
	for (int i = 0; i < n - 1; ++i) {
		for (int j = n - 1; j > i; --j) {
			if (cmp(arr[j], arr[j - 1])) {
				BasicSort::swap(arr[j - 1], arr[j]);
			}
		}
	}
}

void BubbleSort::sort(vector<Student>& students, function<bool(Student, Student)> cmp) {
	int n = students.size();
	for (int i = 0; i < n - 1; ++i) {
		for (int j = n - 1; j > i; --j) {
			if (cmp(students[j], students[j - 1])) {
				Student::swap(students[j - 1], students[j]);
			}
		}
	}
}
