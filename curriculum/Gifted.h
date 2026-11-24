#pragma once
#include "Student.h"

class Gifted : public Student
{
private:
	string key;
	string middleSchool;
	string parentName;
	string parentPhoneNum;

public:
	Gifted();
	Gifted(const string& theName, const string& theKey, const string& subject, const string& phoneNum, const string&, const string&, const string&);
	

};