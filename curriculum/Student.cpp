#include "Student.h"

Student::Student()
	:name("NoName"), key("noKey"), subject("noSubject"), phoneNum("noPhoneNum") { }
Student::Student(const string& theName, const string& theKey, const string& theSubject, const string& thePoneNum)
	:name(theName), key(theKey), subject(theSubject), phoneNum(thePoneNum) { }

