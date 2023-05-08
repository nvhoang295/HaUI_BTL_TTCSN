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