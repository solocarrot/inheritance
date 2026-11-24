#pragma once
#include "Student.h"

class Gifted : public Student
{
private:
	string middleSchool;
	string parentName;
	string parentPhoneNum;

public:
	Gifted();
	Gifted(const string&, const string&, const string&);
	

};