#include "BasicSort.h"
#include "Student.h"
#include "SortingAlgor.h"

#include "BubbleSort.h"
#include "SelectionSort.h"
#include "InsertionSort.h"
#include "MergeSort.h"
#include "QuickSort.h"
#include "HeapSort.h"

#include "FileController.h"
#include "DataInitController.h"

#include "AlgorSelection.h"
#include "DatatypeSelection.h"
#include "PropFieldSelection.h"
#include "OrderSelection.h"
#include "ElemQuantitySelection.h"
#include "BenchmarksResult.h"

#define track(x) cout << #x << ": " << x << endl

int_fast32_t main() {
	ios_base::sync_with_stdio(false);
	size_t choice;
	string path = "", propField;
	bool isObjective = 0;
	bool selectedAlgors[10]{ 0 };
	if(!AlgorSelection::renderMainView(selectedAlgors)) return 0;
	choice = DatatypeSelection::renderMainView();
	string datatype = DatatypeSelection::getDatatype(choice);
	DatatypeSelection::concatFilePath(path, choice);
	if (choice == 4) {
		choice = PropFieldSelection::renderMainView();
		PropFieldSelection::concatFilePath(path, choice);
		datatype = PropFieldSelection::getPropField(choice);
		isObjective = 1;
	}
	choice = OrderSelection::renderMainView();
	OrderSelection::concatFilePath(path, choice);
	string order = OrderSelection::getOrder(choice);
	choice = ElemQuantitySelection::renderMainView(isObjective);
	int quantity = ElemQuantitySelection::getElemQuantity(choice);
	ElemQuantitySelection::concatFilePath(path, datatype, to_string(quantity), order);
	BenchmarksResult::renderMainView(selectedAlgors, path, order, datatype, isObjective, quantity);
	


	//track(path);
	//track(datatype);
	//track(order);


	//system("cls");
	//cout << path;


	//string fileName = "Datas//string_datetime_1000_rand.txt";
	//FileController::createStringFile(fileName, 1000, 1999, 2004);




	//vector<string> firstNames0;
	//vector<string> firstNames1;
	//vector<string> lastNames;
	//FileController::readFile("Datas//data_first-middle_name_female.txt", firstNames0);
	//FileController::readFile("Datas//data_first-middle_name_male.txt", firstNames1);
	//FileController::readFile("Datas//data_last_name.txt", lastNames);
	//string fileName = "Datas//int_2000_rand.txt";


	/*string size[7] = { "1000", "2000", "3000", "5000", "10000", "20000", "30000" };
	string log = "";
	string logPath = "Logs//";

	string group = "Object_data_types";
	string datatype = "Student";
	string field = "dob";
	string order = "rand";
	string algorName = "QuickSort";
	for (int i = 0; i < 7; i++) {
		string path = "Datas//";
		double ans = 0.0;
		path += group;
		path += "//";
		path += datatype;
		path += "//";
		path += field;
		path += "//";
		path += order;
		path += "//";
		path += field;
		path += "_";
		path += size[i];
		path += "_";
		path += order;
		path += ".txt";
		cout << path << endl;
		log += path;
		log += "\n";
		int n = atoi(size[i].c_str());
		for (int i = 0; i < 10; i++) {
			vector<Student> students;
			FileController::readFile(path, students);
			auto startTime = high_resolution_clock::now();
			QuickSort::sort(students, [](Student left, Student right)->bool {
				return left.getDob() < right.getDob();
				});
			auto endTime = high_resolution_clock::now();
			auto duration = duration_cast<microseconds>(endTime - startTime).count();
			ans += duration;
		}
		cout << ans / 1e6 / 10 << " seconds" << endl;
		log += to_string(ans / 1e6 / 10);
		log += " seconds\n";
		cout << "______________________" << endl;
		log += "______________________\n";
	}
	logPath += group;
	logPath += "//";
	logPath += datatype;
	logPath += "//";
	logPath += field;
	logPath += "//";
	logPath += order;
	logPath += "//";
	logPath += algorName;
	logPath += "_";
	logPath += field;
	logPath += "_";
	logPath += order;
	logPath += ".txt";
	cout << logPath << endl;*/

	//FileController::writeLogFile(logPath, log);



		//vector<Student> students;
		//Student::readFile("Datas//student_data.txt", students);
		//cout << students[0].getDob() << endl;
		//cout << students.size() << endl;

	//vector<Student> students;
	//FileController::readFile("Datas//test_sort.txt", students);















	//for (int i = 0; i < 5; ++i) {
	//	cout << students[i].getStudentId() << " | " << students[i].getMajorId() << endl;
	//}

	//cout << endl;

	//HeapSort::sort(students, [](Student left, Student right)->bool {return left.getMajorId() < right.getMajorId(); });
	////InsertionSort::sort(students, [](Student a, Student b)->bool {return a.getMajorId() < b.getMajorId(); });

	//for (int i = 0; i < 5; ++i) {
	//	cout << students[i].getStudentId() << " | " << students[i].getMajorId() << endl;
	//}




}


