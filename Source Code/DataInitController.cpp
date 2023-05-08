#include "DataInitController.h"

void DataInitController::initDobData(vector<string>& data) {
	for (int year = 2000; year < 2005; year++) {
		for (int month = 1; month < 12; month++) {
			for (int day = 1; day < 32; day++) {
				string dob = "";
				dob += to_string(year);
				dob += "/";
				month < 10 ? dob += "0" + to_string(month) : dob += to_string(month);
				dob += "/";
				if (month == 2) {
					if (UtilsController::checkYear(year)) {
						if (day == 30 || day == 31) continue;
					}
					else {
						if (day == 29 || day == 30 || day == 31) continue;
					}
				}
				else if ((month == 4 || month == 6 || month == 9 || month == 11)) {
					if (day == 31) continue;
				}
				day < 10 ? dob += "0" + to_string(day) : dob += to_string(day);
				data.push_back(dob);
			}
		}
	}
}

void DataInitController::initPersonData(vector<Person>& persons, int n, vector<string> firstNames0, vector<string> firstNames1, vector<string> lastNames, vector<string> dobs) {
	srand(time_t(0));
	size_t len1 = firstNames0.size();
	size_t len2 = firstNames1.size();
	size_t len3 = lastNames.size();
	size_t len4 = dobs.size();
	for (int i = 0; i < n; ++i) {
		bool gender = rand() % 2;
		string lastName = lastNames[rand() % len3];
		string firstName;
		!gender ? firstName = firstNames0[rand() % len1] : firstName = firstNames1[rand() % len2];
		string dob = dobs[rand() % len4];
		Person person = Person(firstName, lastName, gender, dob);
		persons.push_back(person);
	}
}

void DataInitController::initStudentData(vector<Student>& students, int n, int year,  vector<Person> persons, vector<Major> majors) {
	srand(time_t(0));
	int len1 = persons.size();
	int len2 = majors.size();
	for (int i = 0; i < n; ++i) {
		int studentId = year * 1e6 + 6 * 1e5 + i;
		//cout << studentId << endl; 
		float gpa = (rand() % 301 + 100) / 100.0;
		int temp = rand() % len2;
		int majorId = majors[temp].getMajorId();
		string majorName = majors[temp].getMajorName();
		Student student = Student(studentId, gpa, majorId, majorName, persons[temp].getFirstName(), persons[temp].getLastName(), persons[temp].getGender(), persons[temp].getDob());
		students.push_back(student);
	}
}