#include "UtilsController.h"

#define track(x, y) cout << #x << ": " << x << "| " << #y << ": " << y << endl


int UtilsController::binPow(int a, int n) {
	if (n == 1) return a;
	int x = UtilsController::binPow(a, n / 2);
	return n % 2 ? x * x * a : x * x;
}

float UtilsController::binPow(float a, int n) {
	if (n == 1) return a;
	float x = UtilsController::binPow(a, n / 2);
	return n % 2 ? x * x * a : x * x;
}

void UtilsController::splitor(string str, vector<string> &items) {
	int j = 0;
	unsigned __int64 len = str.length();
	for (int i = 0; i < len; ++i) {
		if (str[i] == '|') {
			items.push_back(str.substr(j, i - j));
			j = i + 1;
		}
	}
	items.push_back(str.substr(j, len - j));
}

string UtilsController::reOrderString(string str) {
	vector<string> words;
	UtilsController::splitor(str, words);
	string ans = "";
	size_t len = words.size();
	for (int i = 0; i < len; ++i) {
		ans += words[i];
	}
	return ans;
}

string UtilsController::removeSpace(string str) {
	stringstream ss(str);
	string temp;
	string ans = "";
	while (ss >> temp) {
		ans += temp;
	}
	return ans;
}

bool UtilsController::checkYear(int year) {
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

bool UtilsController::isAllAlgorsSelected(bool selectedAlgors[], size_t size) {
	for (int i = 0; i < size; ++i) {
		if (!selectedAlgors[i]) return 0;
	}
	return 1;
}

bool UtilsController::isExistAlgorSelected(bool selectedAlgors[], size_t size) {
	for (int i = 0; i < size; ++i) {
		if (selectedAlgors[i]) return 1;
	}
	return 0;
}

string UtilsController::convertAlgorName(int algorIndex) {
	switch (algorIndex) {
	case 0:
		return "Bubble Sort";
	case 1:
		return "Selection Sort";
	case 2:
		return "Insertion Sort";
	case 3:
		return "Merge Sort";
	case 4 :
		return "Quick Sort";
	case 5:
		return "Heap Sort";
	}
	return "";
}