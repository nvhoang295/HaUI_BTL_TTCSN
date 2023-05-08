#include "DataSet.h"

DataSet::DataSet() : DataSet(DS_NAME, DS_QUANTITY, DS_DATA_TYPE, DS_RANGE, DS_DESCRIBE) {}

DataSet::DataSet(string dsName, int dsQuantity, string dsDataType, string dsRange, string dsDescribe) {
	this->dsName = dsName;
	this->dsQuantity = dsQuantity;
	this->dsDataType = dsDataType;
	this->dsRange = dsRange;
	this->dsDescribe = dsDescribe;
}

string DataSet::getDsName() {
	return this->dsName;
}

int DataSet::getDsQuantity() {
	return this->dsQuantity;
}

string DataSet::getDsDataType() {
	return this->dsDataType;
}

string DataSet::getDsRange() {
	return this->dsRange;
}

string DataSet::getDsDescribe() {
	return this->dsDescribe;
}

void DataSet::setDsName(string dsName) {
	this->dsName = dsName;
}

void DataSet::setDsQuantity(int dsQuantity) {
	this->dsQuantity = dsQuantity;
}

void DataSet::setDsDataType(string dsDataType) {
	this->dsDataType = dsDataType;
}

void DataSet::setDsRange(string dsRange) {
	this->dsRange = dsRange;
}

void DataSet::setDsDescribe(string dsDescribe) {
	this->dsDescribe = dsDescribe;
}