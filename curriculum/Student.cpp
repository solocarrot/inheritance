#include "Student.h"

Student::Student()
	:name("NoName"), subject("noSubject"), phoneNum("noPhoneNum") { }
Student::Student(const string& theName, const string& theKey, const string& theSubject, const string& thePoneNum)
	:name(theName), subject(theSubject), phoneNum(thePoneNum) { }

