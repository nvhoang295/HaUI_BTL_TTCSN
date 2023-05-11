#include "Decorator.h"

void Decorator::drawHr(int len) {
	for (int i = 0; i < len; i++) {
		cout << "-";
	}
	cout << endl;
}

void Decorator::renderAlgorsHeader() {
	Decorator::drawHr(85);
	cout << setw(3) << right << "No." << "| "
		<< setw(20) << left << "Algor name" << " | "
		<< setw(10) << right << right << "Best time" << " | "
		<< setw(10) << right << "Avg time" << " | "
		<< setw(10) << right << "Worst time" << " | "
		<< setw(9) << right << "Aux space" << " | "
		<< setw(6) << right << "Stable" << endl;
	Decorator::drawHr(85);
}

void Decorator::renderBenchmarksHeader() {
	Decorator::drawHr(50);
	cout << setw(20) << left << "Algor name"
		<< setw(20) << left << "Execution time (seconds)" << endl;
	Decorator::drawHr(50);
}

void Decorator::renderSortingProcess(int current, int total, string algorName) {
	system("cls");
	if (current % 5 == 1) {
		cout << "Sorting: " << algorName << "\." << endl;
	}
	else if (current % 5 == 2) {
		cout << "Sorting: " << algorName << "\.\." << endl;
	}
	else if (current % 5 == 3) {
		cout << "Sorting: " << algorName << "\.\.\." << endl;
	}
	else if (current % 5 == 4) {
		cout << "Sorting: " << algorName << "\.\.\.\." << endl;
	}
	else {
		cout << "Sorting: " << algorName << "\.\.\.\.\." << endl;
	}
	cout << "[";
	for (int i = 1; i <= current; ++i) {
		cout << "=";
	}
	for (int i = current; i < total; i++) {
		cout << " ";
	}
	cout << "] " << current * 5 << "%" << endl;
}