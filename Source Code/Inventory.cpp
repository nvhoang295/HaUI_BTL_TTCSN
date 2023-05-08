#include <string>
#include <iostream>
#include "FileController.h"
#include "MergeSort.h"
#include "QuickSort.h"
using namespace std;


void autoGenrFiles() {
    string size[11] = {
    "1000", "2000", "3000", "5000", "10000", "20000", "30000", "50000", "100000", "200000", "300000"
    };
    //string fileName = "Datas//int_2000_rand.txt";
    for (int i = 0; i < 11; i++) {
        string path = "Datas//float_";
        path += size[i];
        path += "_desc.txt";
        cout << path << endl;
        int n = atoi(size[i].c_str());
        FileController::createFile(path, n, 0, 20000, 2);
        float* arr;
        FileController::readFile(path, arr, n);
        //MergeSort::sort(arr, n, );
        FileController::writeFile(path, arr, n);
    }
}

// KHỞI TẠO DATA OBJECT
/*vector<string> firstNames0;
vector<string> firstNames1;
vector<string> lastNames;
vector<string> dobs;
vector<Major> majors;
vector<Person> persons;
vector<Student> students;
FileController::readFile("Datas//Basic//data_first-middle_name_female.txt", firstNames0);
FileController::readFile("Datas//Basic//data_first-middle_name_female.txt", firstNames1);
FileController::readFile("Datas//Basic//data_last_name.txt", lastNames);
FileController::readFile("Datas//Basic//data_majors.txt", majors);
DataInitController::initDobData(dobs);
cout << dobs.size() << endl;
cout << majors.size() << endl;
DataInitController::initPersonData(persons, 30000, firstNames0, firstNames1, lastNames, dobs);
DataInitController::initStudentData(students, 7500, 2019, persons, majors);
DataInitController::initStudentData(students, 7500, 2020, persons, majors);
DataInitController::initStudentData(students, 7500, 2021, persons, majors);
DataInitController::initStudentData(students, 7500, 2022, persons, majors);
cout << students.size() << endl;
FileController::createFile("test.txt",30000, students);*/



//template <typename datatype> void sort(datatype arr[], int n);




// TEST SORTING ALGORS
//bool arr1[5]{ 1,0,1,1,0 };
//int arr2[5]{ 1,3,2,5,4 };
//float arr3[5]{ 1.1, 0.9, 2.3, 1.5, 1.4 };
//string arr4[5]{ "John", "Tony", "Anna", "Tom", "Jonny" };
//
//HeapSort::sort(arr1, 5, [](bool left, bool right)->bool {return left < right; });
//HeapSort::sort(arr2, 5, [](int left, int right)->bool {return left < right; });
//HeapSort::sort(arr3, 5, [](float left, float right)->bool {return left < right; });
//HeapSort::sort(arr4, 5, [](string left, string right)->bool {return left < right; });
//
//for (int i = 0; i < 5; i++) {
//	cout << arr1[i] << " ";
//}
//cout << endl;
//
//for (int i = 0; i < 5; i++) {
//	cout << arr2[i] << " ";
//}
//cout << endl;
//
//for (int i = 0; i < 5; i++) {
//	cout << arr3[i] << " ";
//}
//cout << endl;
//
//for (int i = 0; i < 5; i++) {
//	cout << arr4[i] << " ";
//}
//cout << endl;




// LAMBDA EXPRESSION
//int arr[5]{ 1,3,2,5,4 };

//InsertionSort::sort(arr, 5, [](int a, int b)->bool {return a < b; });
//BubbleSort::sort(arr, 5, cmp);







// INIT STUDENT DATA
//vector<string> firstNames0;
//vector<string> firstNames1;
//vector<string> lastNames;
//vector<string> dobs;
//vector<Major> majors;
//vector<Person> persons;
//FileController::readFile("Datas//Basic//data_first-middle_name_female.txt", firstNames0);
//FileController::readFile("Datas//Basic//data_first-middle_name_female.txt", firstNames1);
//FileController::readFile("Datas//Basic//data_last_name.txt", lastNames);
//FileController::readFile("Datas//Basic//data_majors.txt", majors);
//DataInitController::initDobData(dobs);
//cout << dobs.size() << endl;
//cout << majors.size() << endl;
//DataInitController::initPersonData(persons, 30000, firstNames0, firstNames1, lastNames, dobs);
//string size[7] = { "1000", "2000", "3000", "5000", "10000", "20000", "30000" };
//for (int i = 0; i < 7; ++i) {
//	vector<Student> students;
//	int n = atoi(size[i].c_str());
//	DataInitController::initStudentData(students, n / 4, 2019, persons, majors);
//	DataInitController::initStudentData(students, n / 4, 2020, persons, majors);
//	DataInitController::initStudentData(students, n / 4, 2021, persons, majors);
//	DataInitController::initStudentData(students, n / 4, 2022, persons, majors);
//	//cout << students.size() << endl;
//	track(students.size());
//	track(n);
//	//cout << n << endl;
//	string field = "name";
//	string order = "desc";
//
//
//	string path = "Datas//Student_data//";
//	path += field;
//	path += "//";
//	path += order;
//	path += "//";
//	path += field;
//	path += "_";
//	path += size[i];
//	path += "_";
//	path += order;
//	path += ".txt";
//	cout << path << endl;
//	//FileController::readFile(path, students);
//	QuickSort::sort(students, [](Student left, Student right)->bool
//		{
//			string str1 = left.getFirstName() + left.getLastName();
//			string str2 = right.getFirstName() + right.getLastName();
//			return str1 > str2;
//		});
//	FileController::createFile(path, n, students);
//}




// BENCHMARK VỚI KIỂU DỮ LIỆU NGUYÊN THUỶ
//string size[11] = { "1000", "2000", "3000", "5000", "10000", "20000", "30000", "50000", "100000", "200000", "300000"
//};
//string log = "";
//string logPath = "Logs//";
//string datatype = "float";
//string order = "rand";
//string algorName = "HeapSort";
//for (int i = 0; i < 11; i++) {
//	string path = "Datas//";
//	double ans = 0.0;
//	path += datatype;
//	path += "//";
//	path += order;
//	path += "//";
//	path += datatype;
//	path += "_";
//	path += size[i];
//	path += "_";
//	path += order;
//	path += ".txt";
//	cout << path << endl;
//	log += path;
//	log += "\n";
//	int n = atoi(size[i].c_str());
//	for (int i = 0; i < 20; i++) {
//		float* arr;
//		FileController::readFile(path, arr, n);
//		auto startTime = high_resolution_clock::now();
//		HeapSort::sort(arr, n, [](float left, float right)->bool {
//			return left < right;
//			});
//		auto endTime = high_resolution_clock::now();
//		auto duration = duration_cast<microseconds>(endTime - startTime).count();
//		ans += duration;
//	}
//	cout << ans / 1e6 / 20 << " seconds" << endl;
//	log += to_string(ans / 1e6 / 20);
//	log += " seconds\n";
//	cout << "______________________" << endl;
//	log += "______________________\n";
//}
//logPath += datatype;
//logPath += "//";
//logPath += order;
//logPath += "//";
//logPath += algorName;
//logPath += "_";
//logPath += datatype;
//logPath += "_";
//logPath += order;
//logPath += ".txt";
//cout << logPath << endl;
//
//FileController::writeLogFile(logPath, log);








// 
//string size[7] = { "1000", "2000", "3000", "5000", "10000", "20000", "30000" };
//string log = "";
//string logPath = "Logs//";
//
//string group = "Object_data_types";
//string datatype = "Student";
//string field = "dob";
//string order = "desc";
//string algorName = "HeapSort";
//for (int i = 0; i < 7; i++) {
//	string path = "Datas//";
//	double ans = 0.0;
//	path += group;
//	path += "//";
//	path += datatype;
//	path += "//";
//	path += field;
//	path += "//";
//	path += order;
//	path += "//";
//	path += field;
//	path += "_";
//	path += size[i];
//	path += "_";
//	path += order;
//	path += ".txt";
//	cout << path << endl;
//	log += path;
//	log += "\n";
//	int n = atoi(size[i].c_str());
//	//for (int i = 0; i < 20; i++) {
//	vector<Student> students;
//	FileController::readFile(path, students);
//	auto startTime = high_resolution_clock::now();
//	HeapSort::sort(students, [](Student left, Student right)->bool {
//		return left.getDob() < right.getDob();
//		});
//	auto endTime = high_resolution_clock::now();
//	auto duration = duration_cast<microseconds>(endTime - startTime).count();
//	ans += duration;
//	//}
//	cout << ans / 1e6 << " seconds" << endl;
//	log += to_string(ans / 1e6);
//	log += " seconds\n";
//	cout << "______________________" << endl;
//	log += "______________________\n";
//}
//logPath += group;
//logPath += "//";
//logPath += datatype;
//logPath += "//";
//logPath += field;
//logPath += "//";
//logPath += order;
//logPath += "//";
//logPath += algorName;
//logPath += "_";
//logPath += field;
//logPath += "_";
//logPath += order;
//logPath += ".txt";
//cout << logPath << endl;
//
//FileController::writeLogFile(logPath, log);