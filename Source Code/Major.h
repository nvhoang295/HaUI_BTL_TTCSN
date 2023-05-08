#pragma once
#include <string>
using namespace std;
class Major {
public:
	int DEFAULT_MAJOR_ID = NULL;
	string DEFAULT_MAJOR_NAME = "NULL";

private:
	int majorId;
	string majorName;

public:
	Major();
	Major(int majorId, string majorName);
	int getMajorId();
	string getMajorName();
	void setMajorId(int majorId);
	void setMajorName(string majorName);
};

