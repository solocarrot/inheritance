#pragma once
#include "Student.h"
class LifeLong : public Student
{
private:
	string key;
	char fee[6];

public:
	LifeLong();
	LifeLong(const string& theName, const string& theKey, const string& theSubject, const string& , const char*);
	char getFee() const;
	void setFee(char);
};