#include "Major.h"

Major::Major() : Major(DEFAULT_MAJOR_ID, DEFAULT_MAJOR_NAME) {}

Major::Major(int majorId, string majorName) {
	this->majorId = majorId;
	this->majorName = majorName;
}

int Major::getMajorId() {
	return this->majorId;
}

string Major::getMajorName() {
	return this->majorName;
}

void Major::setMajorId(int majorId) {
	this->majorId = majorId;
}

void Major::setMajorName(string majorName) {
	this->majorName = majorName;
}