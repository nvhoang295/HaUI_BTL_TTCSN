#include "ElemQuantitySelection.h"

size_t ElemQuantitySelection::renderMainView(bool isObjective) {
	size_t choice;
	string noOfElemArr[]{ "1000", "2000", "3000", "5000", "10000", "20000", "30000", "50000", "100000", "200000", "300000" };
	int len = isObjective ? 7 : 11;
	do {
		system("cls");
		cout << "DANH SÁCH SỐ LƯỢNG PHẦN TỬ: " << endl;
		for (int i = 0; i < len; ++i) {
			cout << setw(2) << right << i + 1 << ". " << noOfElemArr[i] << endl;
		}
		InputController::inputChoice(choice, len - 1);
		return choice;
	} while (1);
}

void ElemQuantitySelection::concatFilePath(string& path, string datatype, string quantity, string order) {
	path += "//" + datatype + "_" + quantity + "_" + order + ".txt";
}

int ElemQuantitySelection::getElemQuantity(size_t choice) {
	switch (choice) {
	case 1: return 1000;
	case 2: return 2000;
	case 3: return 3000;
	case 4: return 5000;
	case 5: return 10000;
	case 6: return 20000;
	case 7: return 30000;
	case 8: return 50000;
	case 9: return 100000;
	case 10: return 200000;
	case 11: return 300000;
	default: break;
	}
}