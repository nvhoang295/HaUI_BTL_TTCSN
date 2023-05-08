#include "BasicSort.h"

void BasicSort::swap(bool& left, bool& right) {
	bool temp = left; 
	left = right;
	right = temp;
}

void BasicSort::swap(int& left, int& right) {
	int temp = left;
	left = right;
	right = temp;
}

void BasicSort::swap(float& left, float& right) {
	float temp = left;
	left = right;
	right = temp;
}

void BasicSort::swap(string& left, string& right) {
	string temp = left;
	left = right;
	right = temp;
}

void Student::swap(Student &left, Student &right) {
	Student temp = left;
	left = right;
	right = temp;
}

//void BasicSort::swap(Student& left, Student& right) {
//	Student temp = left;
//	left = right;
//	right = temp;
//}


