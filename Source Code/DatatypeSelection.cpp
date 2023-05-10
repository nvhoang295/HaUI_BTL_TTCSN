#include "DatatypeSelection.h"

size_t DatatypeSelection::renderMainView() {
	size_t choice;
	do {
		system("cls");
		cout << "DANH SÁCH CÁC KIỂU DỮ LIỆU CÓ SẴN: " << endl;
		cout << "1. Boolean\n"
			<< "2. Integer\n"
			<< "3. Float\n"
			<< "4. Student (bool, int, float, string)\n";
		InputController::inputChoice(choice, 3);
		break;
	} while (1);
	return choice;
}

void DatatypeSelection::concatFilePath(string& path, size_t choice) {
	switch (choice) {
	case 1: 
		path += "Datas//Primitive_data_types//Bool";
		break;
	case 2:
		path += "Datas//Primitive_data_types//Int";
		break;
	case 3:
		path += "Datas//Primitive_data_types//Float";
		break;
	case 4:
		path += "Datas//Objective_data_types//Student";
		break;
	default:
		break;
	}
}

string DatatypeSelection::getDatatype(size_t choice) {
	switch (choice) {
	case 1:
		return "bool";
	case 2:
		return "int";
	case 3:
		return "float";
	case 4:
		return "Student";
	}
}