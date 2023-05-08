#include "HeapSort.h"

void HeapSort::heapify(bool arr[], int n, int i, function<bool(bool, bool)> cmp) {
	int largest = i;
	int left = 2 * i + 1;
	int right = 2 * i + 2;
	if (left < n && cmp(arr[largest], arr[left]))
		largest = left;
	if (right < n && cmp(arr[largest], arr[right]))
		largest = right;
	if (largest != i) {
		BasicSort::swap(arr[i], arr[largest]);
		HeapSort::heapify(arr, n, largest, cmp);
	}
}

void HeapSort::heapify(int arr[], int n, int i, function<bool(int, int)> cmp) {
	int largest = i;
	int left = 2 * i + 1;
	int right = 2 * i + 2;
	if (left < n && cmp(arr[largest], arr[left]))
		largest = left;
	if (right < n && cmp(arr[largest], arr[right]))
		largest = right;
	if (largest != i) {
		BasicSort::swap(arr[i], arr[largest]);
		HeapSort::heapify(arr, n, largest, cmp);
	}
}

void HeapSort::heapify(float arr[], int n, int i, function<bool(float, float)> cmp) {
	int largest = i;
	int left = 2 * i + 1;
	int right = 2 * i + 2;
	if (left < n && cmp(arr[largest], arr[left]))
		largest = left;
	if (right < n && cmp(arr[largest], arr[right]))
		largest = right;
	if (largest != i) {
		BasicSort::swap(arr[i], arr[largest]);
		HeapSort::heapify(arr, n, largest, cmp);
	}
}

void HeapSort::heapify(string arr[], int n, int i, function<bool(string, string)> cmp) {
	int largest = i;
	int left = 2 * i + 1;
	int right = 2 * i + 2;
	if (left < n && cmp(arr[largest], arr[left]))
		largest = left;
	if (right < n && cmp(arr[largest], arr[right]))
		largest = right;
	if (largest != i) {
		BasicSort::swap(arr[i], arr[largest]);
		HeapSort::heapify(arr, n, largest, cmp);
	}
}

void HeapSort::heapify(vector<Student> &students, int n, int i, function<bool(Student, Student)> cmp) {
	int largest = i;
	int left = 2 * i + 1;
	int right = 2 * i + 2;
	if (left < n && cmp(students[largest], students[left]))
		largest = left;
	if (right < n && cmp(students[largest], students[right]))
		largest = right;
	if (largest != i) {
		Student::swap(students[i], students[largest]);
		HeapSort::heapify(students, n, largest, cmp);
	}
}

void HeapSort::heapSort(bool arr[], int n, function<bool(bool, bool)> cmp) {
	for (int i = n / 2 - 1; i >= 0; --i)
		HeapSort::heapify(arr, n, i, cmp);
	for (int i = n - 1; i >= 0; --i) {
		BasicSort::swap(arr[0], arr[i]);
		HeapSort::heapify(arr, i, 0, cmp);
	}
}

void HeapSort::heapSort(int arr[], int n, function<bool(int, int)> cmp) {
	for (int i = n / 2 - 1; i >= 0; --i)
		HeapSort::heapify(arr, n, i, cmp);
	for (int i = n - 1; i >= 0; --i) {
		BasicSort::swap(arr[0], arr[i]);
		HeapSort::heapify(arr, i, 0, cmp);
	}
}

void HeapSort::heapSort(float arr[], int n, function<bool(float, float)> cmp) {
	for (int i = n / 2 - 1; i >= 0; --i)
		HeapSort::heapify(arr, n, i, cmp);
	for (int i = n - 1; i >= 0; --i) {
		BasicSort::swap(arr[0], arr[i]);
		HeapSort::heapify(arr, i, 0, cmp);
	}
}

void HeapSort::heapSort(string arr[], int n, function<bool(string, string)> cmp) {
	for (int i = n / 2 - 1; i >= 0; --i)
		HeapSort::heapify(arr, n, i, cmp);
	for (int i = n - 1; i >= 0; --i) {
		BasicSort::swap(arr[0], arr[i]);
		HeapSort::heapify(arr, i, 0, cmp);
	}
}

void HeapSort::heapSort(vector<Student> &students, int n, function<bool(Student, Student)> cmp) {
	for (int i = n / 2 - 1; i >= 0; --i)
		HeapSort::heapify(students, n, i, cmp);
	for (int i = n - 1; i >= 0; --i) {
		Student::swap(students[0], students[i]);
		HeapSort::heapify(students, i, 0, cmp);
	}
}

void HeapSort::sort(bool arr[], int n, function<bool(bool, bool)> cmp) {
	HeapSort::heapSort(arr, n, cmp);
}

void HeapSort::sort(int arr[], int n, function<bool(int, int)> cmp) {
	HeapSort::heapSort(arr, n, cmp);
}

void HeapSort::sort(float arr[], int n, function<bool(float, float)> cmp) {
	HeapSort::heapSort(arr, n, cmp);
}

void HeapSort::sort(string arr[], int n, function<bool(string, string)> cmp) {
	HeapSort::heapSort(arr, n, cmp);
}

void HeapSort::sort(vector<Student> &students, function<bool(Student, Student)> cmp) {
	int n = students.size();
	HeapSort::heapSort(students, n, cmp);
}