#include "OrderSelection.h"

size_t OrderSelection::renderMainView() {
	size_t choice;
	do {
		system("cls");
		cout << "DANH SÁCH CÁC THỨ TỰ CỦA BỘ DỮ LIỆU" << endl;
		cout << "1. Random order\n"
			<< "2. Ascending order\n"
			<< "3. Descending order\n";
		InputController::inputChoice(choice, 2);
		break;
	} while (1);
	return choice;
}

void OrderSelection::concatFilePath(string& path, size_t choice) {
	switch (choice) {
	case 1:
		path += "//rand";
		break;
	case 2:
		path += "//asc";
		break;
	case 3:
		path += "//desc";
		break;
	default:
		break;
	}
}

string OrderSelection::getOrder(size_t choice) {
	switch (choice) {
	case 1:
		return "rand";
	case 2:
		return "asc";
	case 3:
		return "desc";
	default:
		break;
	}
}