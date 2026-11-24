#pragma once
#include "Student.h"

class ShrotTermEdu : public Student
{
private:
	string key;
	static int nextNum;
	
public:
	ShrotTermEdu();
	ShrotTermEdu(const string&, const string&, const string&, const string&, const string&);
	void makeKey();
};