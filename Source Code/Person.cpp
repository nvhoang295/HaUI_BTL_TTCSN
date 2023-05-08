#include "Person.h"

Person::Person() : Person(DEFAULT_FIRST_NAME, DEFAULT_LAST_NAME, DEFAULT_GENDER, DEFAULT_DOB) {}

Person::Person(string firstName, string lastName, bool gender, string dob){
	this->firstName = firstName;
	this->lastName = lastName;
	this->gender = gender;
	this->dob = dob;
}

string Person::getFirstName() {
	return this->firstName;
}

string Person::getLastName() {
	return this->lastName;
}

bool Person::getGender() {
	return this->gender;
}

string Person::getDob() {
	return this->dob;
}

void Person::setFirstName(string firstName) {
	this->firstName = firstName;
}

void Person::setLastName(string lastName) {
	this->lastName = lastName;
}

void Person::setGender(bool gender) {
	this->gender = gender;
}

void Person::setDob(string dob) {
	this->dob = dob;
}