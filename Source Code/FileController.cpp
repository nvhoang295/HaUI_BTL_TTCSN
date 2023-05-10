#include "FileController.h"
#include "Student.h"
//#include "SortingAlgor.h"

#define track(x) cout << #x << ": " << x << endl

void FileController::createFile(string fileName, int size) {
	srand(time_t(0));
	ofstream file(fileName, ios_base::out);
	file << size << "\n";
	for (int i = 0; i < size; ++i) {
		file << rand() % 2 << " ";
	}
	file.close();
}

void FileController::createFile(string fileName, int size, int begin, int range) {
	srand(time_t(0));
	ofstream file(fileName, ios_base::out);
	file << size << endl;
	for (int i = 0; i < size; ++i) {
		file << rand() % range + begin << " ";
	}
	file.close();
}

void FileController::createFile(string fileName, int size, int begin, int range, int precision) {
	srand(time_t(0));
	float bott = UtilsController::binPow((float)10.0, precision);
	ofstream file(fileName, ios_base::out);
	file << size << endl;
	for (int i = 0; i < size; ++i) {
		file << rand() % range / bott << " ";
	}
	file.close();
}

void FileController::createFile(string fileName, int size, vector<Student> students) {
	ofstream file(fileName, ios_base::out);
	file << size << endl;
	int i = 0;
	for (int i = 0; i < size; ++i) {
		file << students[i].getStudentId() << "|"
			<< students[i].getGpa() << "|"
			<< students[i].getMajorId() << "|"
			<< students[i].getMajorName() << "|"
			<< students[i].getFirstName() << "|"
			<< students[i].getLastName() << "|"
			<< students[i].getGender() << "|"
			<< students[i].getDob() << "\n";
	}
	file.close();
}

void FileController::readFile(string fileName, bool*& arr, int& size) {
	ifstream file(fileName, ios_base::in);
	file >> size;
	arr = new bool[size];
	for (int i = 0; i < size; ++i) {
		file >> arr[i];
	}
	file.close();
}

void FileController::readFile(string fileName, int*& arr, int& size) {
	ifstream file(fileName, ios_base::in);
	file >> size;
	arr = new int[size];
	for (int i = 0; i < size; ++i) {
		file >> arr[i];
	}
	file.close();
}

void FileController::readFile(string fileName, float*& arr, int& size) {
	ifstream file(fileName, ios_base::in);
	file >> size;
	arr = new float[size];
	for (int i = 0; i < size; ++i) {
		file >> arr[i];
	}
	file.close();
}

void FileController::readFile(string fileName, string*& arr, int& size) {
	ifstream file(fileName, ios_base::in);
	file >> size;
	arr = new string[size];
	string line;
	for (int i = 0; i < size; ++i) {
		getline(file, line);
		//arr[i] = UtilsController::removeSpace(line);
		arr[i] = line;
	}
	file.close();
}

void FileController::readFile(string fileName, vector<string>& data) {
	ifstream file(fileName, ios_base::in);
	string line;
	while (!file.eof()) {
		getline(file, line);
		data.push_back(line);
	}
	file.close();
}

void FileController::readFile(string fileName, vector<Major>& majors) {
	ifstream file(fileName, ios_base::in);
	string line;
	while (!file.eof()) {
		getline(file, line);
		vector<string> propVals;
		UtilsController::splitor(line, propVals);
		string majorName = propVals[0];
		int majorId = atoi(propVals[1].c_str());
		Major major = Major(majorId, majorName);
		majors.push_back(major);
	}
	file.close();
}

bool FileController::readFile(string fileName, vector<SortingAlgor>& data) {
	ifstream file(fileName, ios_base::in);
	if (!file.is_open()) return 0;
	string line;
	while (!file.eof()) {
		getline(file, line);
		vector<string> propVals;
		UtilsController::splitor(line, propVals);
		string algorName = propVals[0];
		string bestTime = propVals[1];
		string avgTime = propVals[2];
		string worstTime = propVals[3];
		string auxSpace = propVals[4];
		bool isStable = atoi(propVals[5].c_str());
		track(algorName);
		data.push_back(SortingAlgor(algorName, bestTime, avgTime, worstTime, auxSpace, isStable));
	}
	file.close();
}

void FileController::readFile(string fileName, vector<Student>& students) {
	ifstream file(fileName, ios_base::in);
	string line;
	getline(file, line);
	int size = atoi(line.c_str());
	for (int i = 0; i < size; ++i) {
		vector<string> propVals;
		getline(file, line);
		UtilsController::splitor(line, propVals);
		int studentId = atoi(propVals[0].c_str());
		float gpa = atof(propVals[1].c_str());
		int majorId = atoi(propVals[2].c_str());
		string majorName = propVals[3];
		string firstName = propVals[4];
		string lastName = propVals[5];
		bool gender = atoi(propVals[6].c_str());
		string dob = propVals[7];
		Student student = Student(studentId, gpa, majorId, majorName, firstName, lastName, gender, dob);
		students.push_back(student);
	}
	file.close();
}

void FileController::writeFile(string fileName, int*& arr, int size) {
	ofstream file(fileName, ios_base::out);
	file << size << "\n";
	for (int i = 0; i < size; ++i) {
		file << arr[i] << " ";
	}
	file.close();
	delete[] arr;
}

void FileController::writeFile(string fileName, float*& arr, int size) {
	ofstream file(fileName, ios_base::out);
	file << size << "\n";
	for (int i = 0; i < size; ++i) {
		file << arr[i] << " ";
	}
	file.close();
	delete[] arr;
}

void FileController::writeFile(string fileName, string*& arr, int size) {
	ofstream file(fileName, ios_base::out);
	file << size << "\n";
	for (int i = 0; i < size; ++i) {
		file << arr[i] << "\n";
	}
	file.close();
	delete[] arr;
}

void FileController::writeFile(string fileName, vector<Student>& students, int size) {
	ofstream file(fileName, ios_base::out);
	file << size << "\n";
	for (int i = 0; i < size; ++i) {
		file << students[i].getStudentId() << "|"
			<< students[i].getGpa() << "|"
			<< students[i].getMajorId() << "|"
			<< students[i].getMajorName() << "|"
			<< students[i].getFirstName() << "|"
			<< students[i].getLastName() << "|"
			<< students[i].getGender() << "|"
			<< students[i].getDob() << "\n";
	}
	file.close();
	students.clear();
	students.shrink_to_fit();
}

void FileController::writeLogFile(string fileName, string log) {
	ofstream file(fileName, ios_base::out);
	file << log << "\n";
}
