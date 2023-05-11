#include "BenchmarksController.h"

float BenchmarksController::benchmarksBooleans(int choice, string path) {
	float res = 0.0;
	bool* arr;
	int size;
	FileController::readFile(path, arr, size);
	auto startTime = high_resolution_clock::now();
	switch (choice) {
	case 1:
		BubbleSort::sort(arr, size, [](bool left, bool right)->bool {return left < right; });
		break;
	case 2:
		SelectionSort::sort(arr, size, [](bool left, bool right)->bool {return left < right; });
		break;
	case 3:
		InsertionSort::sort(arr, size, [](bool left, bool right)->bool {return left < right; });
		break;
	case 4:
		MergeSort::sort(arr, size, [](bool left, bool right)->bool {return left < right; });
		break;
	case 5:
		QuickSort::sort(arr, size, [](bool left, bool right)->bool {return left < right; });
		break;
	case 6:
		HeapSort::sort(arr, size, [](bool left, bool right)->bool {return left < right; });
		break;
	default:
		break;
	}
	auto endTime = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(endTime - startTime).count();
	res += duration;
	delete[] arr;
	return res;
}

float BenchmarksController::benchmarksIntegers(int choice, string path) {
	float res = 0.0;
	int* arr;
	int size;
	FileController::readFile(path, arr, size);
	auto startTime = high_resolution_clock::now();
	switch (choice) {
	case 1:
		BubbleSort::sort(arr, size, [](int left, int right)->bool {return left < right; });
		break;
	case 2:
		SelectionSort::sort(arr, size, [](int left, int right)->bool {return left < right; });
		break;
	case 3:
		InsertionSort::sort(arr, size, [](int left, int right)->bool {return left < right; });
		break;
	case 4:
		MergeSort::sort(arr, size, [](int left, int right)->bool {return left < right; });
		break;
	case 5:
		QuickSort::sort(arr, size, [](int left, int right)->bool {return left < right; });
		break;
	case 6:
		HeapSort::sort(arr, size, [](int left, int right)->bool {return left < right; });
		break;
	default:
		break;
	}
	auto endTime = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(endTime - startTime).count();
	res += duration;
	delete[] arr;
	return res;
}

float BenchmarksController::benchmarksFloats(int choice, string path) {
	float res = 0.0;
	float* arr;
	int size;
	FileController::readFile(path, arr, size);
	auto startTime = high_resolution_clock::now();
	switch (choice) {
	case 1:
		BubbleSort::sort(arr, size, [](float left, float right)->bool {return left < right; });
		break;
	case 2:
		SelectionSort::sort(arr, size, [](float left, float right)->bool {return left < right; });
		break;
	case 3:
		InsertionSort::sort(arr, size, [](float left, float right)->bool {return left < right; });
		break;
	case 4:
		MergeSort::sort(arr, size, [](float left, float right)->bool {return left < right; });
		break;
	case 5:
		QuickSort::sort(arr, size, [](float left, float right)->bool {return left < right; });
		break;
	case 6:
		HeapSort::sort(arr, size, [](float left, float right)->bool {return left < right; });
		break;
	default:
		break;
	}
	auto endTime = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(endTime - startTime).count();
	res += duration;
	delete[] arr;
	return res;
}

float BenchmarksController::benchmarksStudentId(int choice, string path) {
	float res = 0.0;
	vector<Student> students;
	FileController::readFile(path, students);
	auto startTime = high_resolution_clock::now();
	switch (choice) {
	case 1:
		BubbleSort::sort(students, [](Student left, Student right)->bool {
			return left.getStudentId() < right.getStudentId();
			});
		break;
	case 2:
		SelectionSort::sort(students, [](Student left, Student right)->bool {
			return left.getStudentId() < right.getStudentId();
			});
		break;
	case 3:
		InsertionSort::sort(students, [](Student left, Student right)->bool {
			return left.getStudentId() < right.getStudentId();
			});
		break;
	case 4:
		MergeSort::sort(students, [](Student left, Student right)->bool {
			return left.getStudentId() < right.getStudentId();
			});
		break;
	case 5:
		QuickSort::sort(students, [](Student left, Student right)->bool {
			return left.getStudentId() < right.getStudentId();
			});
		break;
	case 6:
		HeapSort::sort(students, [](Student left, Student right)->bool {
			return left.getStudentId() < right.getStudentId();
			});
		break;
	default:
		break;
	}
	auto endTime = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(endTime - startTime).count();
	res += duration;
	students.clear();
	students.shrink_to_fit();
	return res;
}

float BenchmarksController::benchmarksMajorId(int choice, string path) {
	float res = 0.0;
	vector<Student> students;
	FileController::readFile(path, students);
	auto startTime = high_resolution_clock::now();
	switch (choice) {
	case 1:
		BubbleSort::sort(students, [](Student left, Student right)->bool {
			return left.getMajorId() < right.getMajorId();
			});
		break;
	case 2:
		SelectionSort::sort(students, [](Student left, Student right)->bool {
			return left.getMajorId() < right.getMajorId();
			});
		break;
	case 3:
		InsertionSort::sort(students, [](Student left, Student right)->bool {
			return left.getMajorId() < right.getMajorId();
			});
		break;
	case 4:
		MergeSort::sort(students, [](Student left, Student right)->bool {
			return left.getMajorId() < right.getMajorId();
			});
		break;
	case 5:
		QuickSort::sort(students, [](Student left, Student right)->bool {
			return left.getMajorId() < right.getMajorId();
			});
		break;
	case 6:
		HeapSort::sort(students, [](Student left, Student right)->bool {
			return left.getMajorId() < right.getMajorId();
			});
		break;
	default:
		break;
	}
	auto endTime = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(endTime - startTime).count();
	res += duration;
	students.clear();
	students.shrink_to_fit();
	return res;
}

float BenchmarksController::benchmarksName(int choice, string path) {
	float res = 0.0;
	vector<Student> students;
	FileController::readFile(path, students);
	auto startTime = high_resolution_clock::now();
	switch (choice) {
	case 1:
		BubbleSort::sort(students, [](Student left, Student right)->bool {
			string leftName = left.getFirstName() + left.getLastName();
			string rightName = right.getFirstName() + right.getLastName();
			return leftName < rightName;
			});
		break;
	case 2:
		SelectionSort::sort(students, [](Student left, Student right)->bool {
			string leftName = left.getFirstName() + left.getLastName();
			string rightName = right.getFirstName() + right.getLastName();
			return leftName < rightName;
			});
		break;
	case 3:
		InsertionSort::sort(students, [](Student left, Student right)->bool {
			string leftName = left.getFirstName() + left.getLastName();
			string rightName = right.getFirstName() + right.getLastName();
			return leftName < rightName;
			});
		break;
	case 4:
		MergeSort::sort(students, [](Student left, Student right)->bool {
			string leftName = left.getFirstName() + left.getLastName();
			string rightName = right.getFirstName() + right.getLastName();
			return leftName < rightName;
			});
		break;
	case 5:
		QuickSort::sort(students, [](Student left, Student right)->bool {
			string leftName = left.getFirstName() + left.getLastName();
			string rightName = right.getFirstName() + right.getLastName();
			return leftName < rightName;
			});
		break;
	case 6:
		HeapSort::sort(students, [](Student left, Student right)->bool {
			string leftName = left.getFirstName() + left.getLastName();
			string rightName = right.getFirstName() + right.getLastName();
			return leftName < rightName;
			});
		break;
	default:
		break;
	}
	auto endTime = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(endTime - startTime).count();
	res += duration;
	students.clear();
	students.shrink_to_fit();
	return res;
}

float BenchmarksController::benchmarksGpa(int choice, string path) {
	float res = 0.0;
	vector<Student> students;
	FileController::readFile(path, students);
	auto startTime = high_resolution_clock::now();
	switch (choice) {
	case 1:
		BubbleSort::sort(students, [](Student left, Student right)->bool {
			return left.getGpa() < right.getGpa();
			});
		break;
	case 2:
		SelectionSort::sort(students, [](Student left, Student right)->bool {
			return left.getGpa() < right.getGpa();
			});
		break;
	case 3:
		InsertionSort::sort(students, [](Student left, Student right)->bool {
			return left.getGpa() < right.getGpa();
			});
		break;
	case 4:
		MergeSort::sort(students, [](Student left, Student right)->bool {
			return left.getGpa() < right.getGpa();
			});
		break;
	case 5:
		QuickSort::sort(students, [](Student left, Student right)->bool {
			return left.getGpa() < right.getGpa();
			});
		break;
	case 6:
		HeapSort::sort(students, [](Student left, Student right)->bool {
			return left.getGpa() < right.getGpa();
			});
		break;
	default:
		break;
	}
	auto endTime = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(endTime - startTime).count();
	res += duration;
	students.clear();
	students.shrink_to_fit();
	return res;
}

float BenchmarksController::benchmarksGender(int choice, string path) {
	float res = 0.0;
	vector<Student> students;
	FileController::readFile(path, students);
	auto startTime = high_resolution_clock::now();
	switch (choice) {
	case 1:
		BubbleSort::sort(students, [](Student left, Student right)->bool {
			return left.getGender() < right.getGender();
			});
		break;
	case 2:
		SelectionSort::sort(students, [](Student left, Student right)->bool {
			return left.getGender() < right.getGender();
			});
		break;
	case 3:
		InsertionSort::sort(students, [](Student left, Student right)->bool {
			return left.getGender() < right.getGender();
			});
		break;
	case 4:
		MergeSort::sort(students, [](Student left, Student right)->bool {
			return left.getGender() < right.getGender();
			});
		break;
	case 5:
		QuickSort::sort(students, [](Student left, Student right)->bool {
			return left.getGender() < right.getGender();
			});
		break;
	case 6:
		HeapSort::sort(students, [](Student left, Student right)->bool {
			return left.getGender() < right.getGender();
			});
		break;
	default:
		break;
	}
	auto endTime = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(endTime - startTime).count();
	res += duration;
	students.clear();
	students.shrink_to_fit();
	return res;
}

float BenchmarksController::benchmarksDob(int choice, string path) {
	float res = 0.0;
	vector<Student> students;
	FileController::readFile(path, students);
	auto startTime = high_resolution_clock::now();
	switch (choice) {
	case 1:
		BubbleSort::sort(students, [](Student left, Student right)->bool {
			return left.getDob() < right.getDob();
			});
		break;
	case 2:
		SelectionSort::sort(students, [](Student left, Student right)->bool {
			return left.getDob() < right.getDob();
			});
		break;
	case 3:
		InsertionSort::sort(students, [](Student left, Student right)->bool {
			return left.getDob() < right.getDob();
			});
		break;
	case 4:
		MergeSort::sort(students, [](Student left, Student right)->bool {
			return left.getDob() < right.getDob();
			});
		break;
	case 5:
		QuickSort::sort(students, [](Student left, Student right)->bool {
			return left.getDob() < right.getDob();
			});
		break;
	case 6:
		HeapSort::sort(students, [](Student left, Student right)->bool {
			return left.getDob() < right.getDob();
			});
		break;
	default:
		break;
	}
	auto endTime = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(endTime - startTime).count();
	res += duration;
	students.clear();
	students.shrink_to_fit();
	return res;
}

float BenchmarksController::executeBenchmarks(int choice, string path, string datatype) {
	float res = 0.0;
	if (datatype == "bool") {
		res = BenchmarksController::benchmarksBooleans(choice, path);
	}
	else if (datatype == "int") {
		res = BenchmarksController::benchmarksIntegers(choice, path);
	}
	else if (datatype == "float") {
		res = BenchmarksController::benchmarksFloats(choice, path);
	}
	else if (datatype == "studentId") {
		res = BenchmarksController::benchmarksStudentId(choice, path);
	}
	else if (datatype == "marjorId") {
		res = BenchmarksController::benchmarksMajorId(choice, path);
	}
	else if (datatype == "name") {
		res = BenchmarksController::benchmarksName(choice, path);
	}
	else if (datatype == "gpa") {
		res = BenchmarksController::benchmarksGpa(choice, path);
	}
	else if (datatype == "gender") {
		res = BenchmarksController::benchmarksGender(choice, path);
	}
	else if (datatype == "dob") {
		res = BenchmarksController::benchmarksDob(choice, path);
	}
	return res;
}