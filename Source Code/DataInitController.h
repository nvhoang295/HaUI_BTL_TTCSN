#pragma once
#include <vector>
#include <string>

#include "UtilsController.h"
#include "Person.h"
#include "Major.h"
#include "Student.h"

using namespace std;

class DataInitController {
public:
	static void initDobData(vector<string> &data);
	static void initPersonData(vector<Person>& persons, int n, vector<string> firstNames0, vector<string> firstNames1, vector<string> lastName, vector<string> dobs);
	static void initStudentData(vector<Student>& students, int n, int year, vector<Person> persons, vector<Major> majors);
	static void initMajorData(vector<Major>& majors);
};

