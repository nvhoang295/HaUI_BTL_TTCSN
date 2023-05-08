#include "QuickSort.h"

int QuickSort::hoarePartition(bool arr[], int left, int right, function<bool(bool, bool)> cmp) {
	int pivot = arr[(left + right) / 2];
	int i = left - 1;
	int j = right + 1;
	while (1) {
		do {
			++i;
		} while (cmp(arr[i], pivot));
		do {
			--j;
		} while (cmp(pivot, arr[j]));
		if (i < j) {
			BasicSort::swap(arr[i], arr[j]);
		}
		else {
			return j;
		}
	}
}

int QuickSort::hoarePartition(int arr[], int left, int right, function<bool(int, int)> cmp) {
	int pivot = arr[(left + right) / 2];
	int i = left - 1;
	int j = right + 1;
	while (1) {
		do {
			++i;
		} while (cmp(arr[i], pivot));
		do {
			--j;
		} while (cmp(pivot, arr[j]));
		if (i < j) {
			BasicSort::swap(arr[i], arr[j]);
		}
		else {
			return j;
		}
	}
}

int QuickSort::hoarePartition(float arr[], int left, int right, function<bool(float, float)> cmp) {
	float pivot = arr[(left + right) / 2];
	int i = left - 1;
	int j = right + 1;
	while (1) {
		do {
			++i;
		} while (cmp(arr[i], pivot));
		do {
			--j;
		} while (cmp(pivot, arr[j]));
		if (i < j) {
			BasicSort::swap(arr[i], arr[j]);
		}
		else {
			return j;
		}
	}
}

int QuickSort::hoarePartition(string arr[], int left, int right, function<bool(string, string)> cmp) {
	string pivot = arr[(left + right) / 2];
	int i = left - 1;
	int j = right + 1;
	while (1) {
		do {
			++i;
		} while (cmp(arr[i], pivot));
		do {
			--j;
		} while (cmp(pivot, arr[j]));
		if (i < j) {
			swap(arr[i], arr[j]);
		}
		else {
			return j;
		}
	}
}

int QuickSort::hoarePartition(vector<Student> &students, int left, int right, function<bool(Student, Student)> cmp) {
	Student pivot = students[(left + right) / 2];
	int i = left - 1;
	int j = right + 1;
	while (1) {
		do {
			++i;
		} while (cmp(students[i], pivot));
		do {
			--j;
		} while (cmp(pivot, students[j]));
		if (i < j) {
			Student::swap(students[i], students[j]);
		}
		else {
			return j;
		}
	}
}

void QuickSort::quickSort(bool arr[], int left, int right, function<bool(bool, bool)> cmp) {
	if (left >= right) return;
	int p = QuickSort::hoarePartition(arr, left, right, cmp);
	QuickSort::quickSort(arr, left, p, cmp);
	QuickSort::quickSort(arr, p + 1, right, cmp);
}

void QuickSort::quickSort(int arr[], int left, int right, function<bool(int, int)> cmp) {
	if (left >= right) return;
	int p = QuickSort::hoarePartition(arr, left, right, cmp);
	QuickSort::quickSort(arr, left, p, cmp);
	QuickSort::quickSort(arr, p + 1, right, cmp);
}

void QuickSort::quickSort(float arr[], int left, int right, function<bool(float, float)> cmp) {
	if (left >= right) return;
	int p = QuickSort::hoarePartition(arr, left, right, cmp);
	QuickSort::quickSort(arr, left, p, cmp);
	QuickSort::quickSort(arr, p + 1, right, cmp);
}

void QuickSort::quickSort(string arr[], int left, int right, function<bool(string, string)> cmp) {
	if (left >= right) return;
	int p = QuickSort::hoarePartition(arr, left, right, cmp);
	QuickSort::quickSort(arr, left, p, cmp);
	QuickSort::quickSort(arr, p + 1, right, cmp);
}

void QuickSort::quickSort(vector<Student> &students, int left, int right, function<bool(Student, Student)> cmp) {
	if (left >= right) return;
	int p = QuickSort::hoarePartition(students, left, right, cmp);
	QuickSort::quickSort(students, left, p, cmp);
	QuickSort::quickSort(students, p + 1, right, cmp);
}

void QuickSort::sort(bool arr[], int n, function<bool(bool, bool)> cmp) {
	QuickSort::quickSort(arr, 0, n - 1, cmp);
}

void QuickSort::sort(int arr[], int n, function<bool(int, int)> cmp) {
	QuickSort::quickSort(arr, 0, n - 1, cmp);
}

void QuickSort::sort(float arr[], int n, function<bool(float, float)> cmp) {
	QuickSort::quickSort(arr, 0, n - 1, cmp);
}

void QuickSort::sort(string arr[], int n, function<bool(string, string)> cmp) {
	QuickSort::quickSort(arr, 0, n - 1, cmp);
}

void QuickSort::sort(vector<Student> &students, function<bool(Student, Student)> cmp) {
	int n = students.size();
	QuickSort::quickSort(students, 0, n - 1, cmp);
}