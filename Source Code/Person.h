#pragma once
#include <string>

using namespace std;
class Person {
public:
	string DEFAULT_FIRST_NAME = "NULL";
	string DEFAULT_LAST_NAME = "NULL";
	bool DEFAULT_GENDER = NULL;
	string DEFAULT_DOB = "NULL";

private:
	string firstName;
	string lastName;
	bool gender;
	string dob;

public:
	Person();
	Person(string firstName, string lastName, bool gender, string dob);
	string getFirstName();
	string getLastName();
	bool getGender();
	string getDob();
	void setFirstName(string firstName);
	void setLastName(string lastName);
	void setGender(bool gender);
	void setDob(string dob);
};

