#include "AlgorSelectionView.h"

void AlgorSelectionView::renderAlgorRecord(int index, SortingAlgor data) {
	cout << setw(2) << right << index + 1 << " | "
		<< setw(20) << left << data.getAlgorName() << " | "
		<< setw(10) << right << right << data.getBestTime() << " | "
		<< setw(10) << right << data.getAvgTime() << " | "
		<< setw(10) << right << data.getWorstTime() << " | "
		<< setw(9) << right << data.getAuxSpace() << " | "
		<< setw(6) << right << (data.getIsStable() ? "YES\n" : "NO\n");
}

void AlgorSelectionView::renderAlgorList(vector<SortingAlgor> datas, bool* selectedAlgors, size_t size, bool haveSelected) {
	if (haveSelected) {
		cout << "\n\nDANH SÁCH CÁC THUẬT TOÁN ĐÃ LỰA CHỌN: " << endl;
		Decorator::renderAlgorsHeader();
		for (int i = 0; i < size; ++i) {
			if (selectedAlgors[i]) {
				AlgorSelectionView::renderAlgorRecord(i, datas[i]);
			}
		}
		Decorator::drawHr(85);
	}
	else {
		system("cls");
		cout << "DANH SÁCH CÁC THUẬT TOÁN: " << endl;
		Decorator::renderAlgorsHeader();
		for (int i = 0; i < size; ++i) {
			if (!selectedAlgors[i]) {
				AlgorSelectionView::renderAlgorRecord(i, datas[i]);
			}
		}
		Decorator::drawHr(85);
		cout << setw(2) << size + 1 << ". Next" << endl;
	}
}

bool AlgorSelectionView::renderMainView(bool selectedAlgors[]) {
	vector<SortingAlgor> datas;
	string fileName = "Datas//Viewing_data//Algors_infor.txt";
	if (!FileController::readFile(fileName, datas)) {
		cout << "----------ĐỌC DỮ LIỆU TỪ FILE KHÔNG THÀNH CÔNG----------" << endl;
		return 0;
	}
	size_t size = datas.size(), choice;
	bool haveDisplaySelected = 0;
	do {
		AlgorSelectionView::renderAlgorList(datas, selectedAlgors, size, 0);
		if (haveDisplaySelected) {
			AlgorSelectionView::renderAlgorList(datas, selectedAlgors, size, 1);
		}
		InputController::inputChoice(choice, size);
		selectedAlgors[choice - 1] = true;
		if (UtilsController::isExistAlgorSelected(selectedAlgors, size)) {
			haveDisplaySelected = 1;
		}
		if (UtilsController::isAllAlgorsSelected(selectedAlgors, size)) break;
	} while (choice != size + 1 || !UtilsController::isExistAlgorSelected(selectedAlgors, size));
	return 1;
}

