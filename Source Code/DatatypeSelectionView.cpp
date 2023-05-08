#include "DatatypeSelectionView.h"

size_t DatatypeSelectionView::renderMainView() {
	size_t choice;
	do {
		system("cls");
		cout << "DANH SÁCH CÁC KIỂU DỮ LIỆU CÓ SẴN: " << endl;
		cout << "1. Boolean\n"
			<< "2. Integer\n"
			<< "3. Float\n"
			<< "4. Student (int, float, string)\n";
		InputController::inputChoice(choice, 4);
		break;
	} while (1);
	return choice;
}

void DatatypeSelectionView::concatFilePath(string& path, size_t choice) {
	switch (choice) {
	case 1: 
		path += "Datas//Primitive_data_types//Boolean";
		break;
	case 2:
		path += "Datas//Primitive_data_types//Integer";
		break;
	case 3:
		path += "Datas//Primitive_data_types//Float";
		break;
	case 4:
		path += "Datas//Object_data_types//Student";
		break;
	default:
		break;
	}
}