#pragma once
#include <string>

using namespace std;
class DataSet {
public:
	string DS_NAME = "NULL";
	int DS_QUANTITY = NULL;
	string DS_DATA_TYPE = "NULL";
	string DS_RANGE = "NULL";
	string DS_DESCRIBE = "NULL";

private:
	string dsName;
	int dsQuantity;
	string dsDataType;
	string dsRange;
	string dsDescribe;

public:
	DataSet();
	DataSet(string dsName, int dsQuantity, string dsDataType, string dsRange, string dsDescribe);
	string getDsName();
	int getDsQuantity();
	string getDsDataType();
	string getDsRange();
	string getDsDescribe();
	void setDsName(string dsName);
	void setDsQuantity(int dsQuantity);
	void setDsDataType(string dsDataType);
	void setDsRange(string dsRange);
	void setDsDescribe(string dsDescribe);
};

