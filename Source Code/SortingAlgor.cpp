#include "SortingAlgor.h"

SortingAlgor::SortingAlgor() : SortingAlgor(DEFAULT_ALGOR_NAME, DEFAULT_BEST_TIME, DEFAULT_AVG_TIME, DEFAULT_WORST_TIME, DEFAULT_AUX_SPACE, DEFAULT_IS_STABLE) {}

SortingAlgor::SortingAlgor(string algorName, string bestTime, string avgTime, string worstTime, string auxSpace, bool isStable) :
	Complexity(bestTime, avgTime, worstTime, auxSpace) {
	this->algorName = algorName;
	this->isStable = isStable;
}

SortingAlgor::~SortingAlgor() {}

string SortingAlgor::getAlgorName() {
	return this->algorName;
}

bool SortingAlgor::getIsStable() {
	return this->isStable;
}

void SortingAlgor::setAlgorName(string algorName) {
	this->algorName = algorName;
}

void SortingAlgor::setIsStable(bool isStable) {
	this->isStable = isStable;
}


