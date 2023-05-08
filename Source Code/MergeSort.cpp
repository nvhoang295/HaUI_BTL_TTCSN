#include "MergeSort.h"
//#include <iostream>

#define track(x) cout << #x << ": " << x << endl

void MergeSort::merge(bool arr[], int left, int mid, int right, function<bool(bool, bool)> cmp) {
	int n1 = mid - left + 1;
	int n2 = right - mid;
	bool* L = new bool[n1];
	bool* R = new bool[n2];
	for (int i = 0; i < n1; ++i) {
		L[i] = arr[left + i];
	}
	for (int j = 0; j < n2; ++j) {
		R[j] = arr[mid + 1 + j];
	}
	int i = 0, j = 0;
	while (i < n1 && j < n2)
		cmp(L[i], R[j])
		? arr[left++] = L[i++]
		: arr[left++] = R[j++];
	while (i < n1) arr[left++] = L[i++];
	while (j < n2) arr[left++] = R[j++];
	delete[] L;
	delete[] R;
}

void MergeSort::merge(int arr[], int left, int mid, int right, function<bool(int, int)> cmp) {
	int n1 = mid - left + 1;
	int n2 = right - mid;
	int* L = new int[n1];
	int* R = new int[n2];
	for (int i = 0; i < n1; ++i) {
		L[i] = arr[left + i];
	}
	for (int j = 0; j < n2; ++j) {
		R[j] = arr[mid + 1 + j];
	}
	int i = 0, j = 0;
	while (i < n1 && j < n2) 
		cmp(L[i], R[j]) 
		? arr[left++] = L[i++] 
		: arr[left++] = R[j++];
	while (i < n1) arr[left++] = L[i++];
	while (j < n2) arr[left++] = R[j++];
	delete[] L;
	delete[] R;
}

void MergeSort::merge(float arr[], int left, int mid, int right, function<bool(float, float)> cmp) {
	int n1 = mid - left + 1;
	int n2 = right - mid;
	float* L = new float[n1];
	float* R = new float[n2];
	for (int i = 0; i < n1; ++i) {
		L[i] = arr[left + i];
	}
	for (int j = 0; j < n2; ++j) {
		R[j] = arr[mid + 1 + j];
	}
	int i = 0, j = 0;
	while (i < n1 && j < n2) 
		cmp(L[i], R[j])
		? arr[left++] = L[i++] 
		: arr[left++] = R[j++];
	while (i < n1) arr[left++] = L[i++];
	while (j < n2) arr[left++] = R[j++];
	delete[] L;
	delete[] R;
}

void MergeSort::merge(string arr[], int left, int mid, int right, function<bool(string, string)> cmp) {
	int n1 = mid - left + 1;
	int n2 = right - mid;
	string* L = new string[n1];
	string* R = new string[n2];
	for (int i = 0; i < n1; ++i) {
		L[i] = arr[left + i];
	}
	for (int j = 0; j < n2; ++j) {
		R[j] = arr[mid + 1 + j];
	}
	int i = 0, j = 0;
	while (i < n1 && j < n2)
		cmp(L[i], R[j])
		? arr[left++] = L[i++]
		: arr[left++] = R[j++];
	while (i < n1) arr[left++] = L[i++];
	while (j < n2) arr[left++] = R[j++];
	delete[] L;
	delete[] R;
}

void MergeSort::merge(vector<Student>& students, int left, int mid, int right, function<bool(Student, Student)> cmp) {
	int n1 = mid - left + 1;
	int n2 = right - mid;
	vector<Student> L;
	vector<Student> R;
	copy(students.begin() + left, students.begin() + mid + 1, back_inserter(L));
	copy(students.begin() + mid + 1, students.begin() + right + 1, back_inserter(R));
	int i = 0, j = 0;
	while (i < n1 && j < n2)
		cmp(L[i], R[j])
		? students[left++] = L[i++]
		: students[left++] = R[j++];
	while (i < n1) students[left++] = L[i++];
	while (j < n2) students[left++] = R[j++];
	L.clear();
	L.shrink_to_fit();
	R.clear();
	R.shrink_to_fit();
}

void MergeSort::mergeSort(bool arr[], int left, int right, function<bool(bool, bool)> cmp) {
	if (left >= right) return;
	int mid = (left + right) / 2;
	MergeSort::mergeSort(arr, left, mid, cmp);
	MergeSort::mergeSort(arr, mid + 1, right, cmp);
	MergeSort::merge(arr, left, mid, right, cmp);
}

void MergeSort::mergeSort(int arr[], int left, int right, function<bool(int, int)> cmp) {
	if (left >= right) return;
	int mid = (left + right) / 2;
	MergeSort::mergeSort(arr, left, mid, cmp);
	MergeSort::mergeSort(arr, mid + 1, right, cmp);
	MergeSort::merge(arr, left, mid, right, cmp);
}

void MergeSort::mergeSort(float arr[], int left, int right, function<bool(float, float)> cmp) {
	if (left >= right) return;
	int mid = (left + right) / 2;
	MergeSort::mergeSort(arr, left, mid, cmp);
	MergeSort::mergeSort(arr, mid + 1, right, cmp);
	MergeSort::merge(arr, left, mid, right, cmp);
}

void MergeSort::mergeSort(string arr[], int left, int right, function<bool(string, string)> cmp) {
	if (left >= right) return;
	int mid = (left + right) / 2;
	MergeSort::mergeSort(arr, left, mid, cmp);
	MergeSort::mergeSort(arr, mid + 1, right, cmp);
	MergeSort::merge(arr, left, mid, right, cmp);
}

void MergeSort::mergeSort(vector<Student>& students, int left, int right, function<bool(Student, Student)> cmp) {
	if (left >= right) return;
	int mid = (left + right) / 2;
	MergeSort::mergeSort(students, left, mid, cmp);
	MergeSort::mergeSort(students, mid + 1, right, cmp);
	MergeSort::merge(students, left, mid, right, cmp);
}

void MergeSort::sort(bool arr[], int n, function<bool(bool, bool)> cmp) {
	MergeSort::mergeSort(arr, 0, n - 1, cmp);
}

void MergeSort::sort(int arr[], int n, function<bool(int, int)> cmp) {
	MergeSort::mergeSort(arr, 0, n - 1, cmp);
}

void MergeSort::sort(float arr[], int n, function<bool(float, float)> cmp) {
	MergeSort::mergeSort(arr, 0, n - 1, cmp);
}

void MergeSort::sort(string arr[], int n, function<bool(string, string)> cmp) {
	MergeSort::mergeSort(arr, 0, n - 1, cmp);
}

void MergeSort::sort(vector<Student>& students, function<bool(Student, Student)>cmp) {
	int n = students.size();
	MergeSort::mergeSort(students, 0, n - 1, cmp);
}



