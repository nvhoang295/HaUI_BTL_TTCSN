#pragma once
#include <vector>

#include "Person.h"
#include "Major.h"
#include "BasicSort.h"

class Student : public Person, public Major {
public:
	int DEFAULT_STUDENT_ID = NULL;
	float DEFAULT_GPA = NULL;

private:
	int studentId;
	float gpa;

public:
	Student();
	Student(int studentId, float gpa, int majorId, string majorName, string firstName, string lastName, bool gender, string dob);
	int getStudentId();
	float getGpa();
	void setStudentId(int studentId);
	void setGpa(float gpa);
	//friend class BasicSort;
	//friend void BasicSort::swap(Student& left, Student& right);
	static void swap(Student& left, Student& right);
	//static void sort(vector<Student>& students, function<bool(Student, Student)> cmp);
};

