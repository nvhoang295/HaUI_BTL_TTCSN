#include "PropFieldSelection.h"

size_t PropFieldSelection::renderMainView() {
	size_t choice;
	do {
		system("cls");
		cout << "DANH SÁCH CÁC TRƯỜNG THUỘC TÍNH: " << endl;
		cout << "1. Student ID (int)\n"
			<< "2. Major ID (int)\n"
			<< "3. Student name (string)\n"
			<< "4. Gpa (float)\n"
			<< "5. Gender (bool)\n"
			<< "6. Date of birth (string)\n";
		InputController::inputChoice(choice, 5);
		break;
	} while (1);
	return choice;
}

void PropFieldSelection::concatFilePath(string& path, size_t choice) {
	switch (choice) {
	case 1:
		path += "//studentId";
		break;
	case 2:
		path += "//majorId";
		break;
	case 3:
		path += "//name";
		break;
	case 4:
		path += "//gpa";
		break;
	case 5:
		path += "//gender";
		break;
	case 6:
		path += "//dob";
		break;
	default:
		break;
	}
}

string PropFieldSelection::getPropField(size_t choice) {
	switch (choice) {
	case 1:
		return "studentId";
	case 2:
		return "majorId";
	case 3:
		return "name";
	case 4:
		return "gpa";
	case 5:
		return "gender";
	case 6:
		return "dob";
	default:
		break;
	}
}
