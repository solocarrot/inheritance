#pragma once
#include "Student.h"

class ShortTermEdu : public Student
{
private:
	string key;
	static int nextNum;
	
public:
	ShortTermEdu();
	ShortTermEdu(const string& theName, const string& theSubject, const string& thePhoneNum);
	void makeKey();
};