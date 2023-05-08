#include "InputController.h"

bool InputController::isValid(size_t choice, size_t left, size_t right) {
	if (choice == 0) return 0;
	while (left <= right) {
		size_t mid = (left + right) / 2;
		if (mid == choice)
			return 1;
		else if (mid < choice)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return 0;
}

void InputController::inputChoice(size_t& choice, size_t size) {
	do {
		cout << ">>> Nhập vào lựa chọn của bạn: ";
		string input;
		fflush(stdin);
		getline(cin, input);
		choice = atoi(input.c_str());
		isValid(choice, 1, size + 1) ? cout << "Lựa chọn của bạn là: " << choice << endl
			: cout << "Nhập sai format, vui lòng nhập lại!" << endl;
	} while (!isValid(choice, 1, size + 1));
	return;
}