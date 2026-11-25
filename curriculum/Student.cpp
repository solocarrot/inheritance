#include "Student.h"

Student::Student()
	:name("NoName"), subject("noSubject"), phoneNum("noPhoneNum") { }
Student::Student(const string& theName, const string& theSubject, const string& thePhoneNum, const string& theDegree)
	:name(theName), subject(theSubject), phoneNum(thePhoneNum) ,degree(theDegree) { }

void Student::printSubNName() const
{
	cout << "[" << subject << "] " << name;
}

void Student::printPhoneNum() const		
{
	cout << phoneNum;
}

void Student::printDegree() const
{
	cout << degree;
}