#include "BenchmarksResult.h"

#define track(x) cout << #x << ": " << x << endl

void BenchmarksResult::renderMainView(bool selectedAlgors[], string path, string order, string datatype, bool isObjective, int quantity) {
	float results[6]{ 0.0 };
	BenchmarksResult::renderBenchmarksProcess(selectedAlgors, results, path, datatype);
	system("cls");
	BenchmarksResult::renderInfor(path, order, datatype, isObjective, quantity);
	cout << endl << "BẢNG KẾT QUẢ BENCHMARKS: " << endl;
	Decorator::renderBenchmarksHeader();
	for (int i = 0; i < 6; ++i) {
		if (selectedAlgors[i]) {
			BenchmarksResult::renderBenchmarksResult(i + 1, results[i]);
		}
	}
	Decorator::drawHr(50);
}

void BenchmarksResult::renderInfor(string path, string order, string datatype, bool isObjective, int quantity) {
	cout << "Datatype: " << (isObjective ? "Objective datatype\n" : "Primitive datatype\n");
	cout << (isObjective ? "Property field: " : "Datatype name: ") << datatype << endl;
	cout << "Order: " << order << endl;
	cout << "Number of elements: " << quantity << endl;
	cout << "File path: " << path << endl;
}

void BenchmarksResult::renderBenchmarksResult(int algorIndex, float result) {
	switch (algorIndex) {
	case 1:
		cout << setw(20) << left << "Bubble Sort " << result / 1e6 << endl;
		break;
	case 2:
		cout << setw(20) << left << "Selection Sort " << result / 1e6 << endl;
		break;
	case 3:
		cout << setw(20) << left << "Insertion Sort " << result / 1e6 << endl;
		break;
	case 4:
		cout << setw(20) << left << "Merge Sort " << result / 1e6 << endl;
		break;
	case 5:
		cout << setw(20) << left << "Quick Sort " << result / 1e6 << endl;
		break;
	case 6:
		cout << setw(20) << left << "Heap Sort " << result / 1e6 << endl;
		break;
	default: 
		break;
	}
}

void BenchmarksResult::renderBenchmarksProcess(bool selectedAlgors[], float results[], string path, string datatype) {
	for (int i = 0; i < 6; ++i) {
		if (selectedAlgors[i]) {
			string algorName = UtilsController::convertAlgorName(i);
			for (int j = 0; j < 20; ++j) {
				results[i] += BenchmarksController::executeBenchmarks(i + 1, path, datatype);
				Decorator::renderSortingProcess(j + 1, 20, algorName);
			}
			results[i] /= 20;
		}
	}
}