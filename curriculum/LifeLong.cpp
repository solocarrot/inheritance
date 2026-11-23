#include "LifeLong.h"

LifeLong::LifeLong()
	:Student() { }
LifeLong::LifeLong(const string& theName, const string& theKey, const string& theSubject, const string& thePhoneNum, const char* theFee)
	:Student(theName, theKey, theSubject, thePhoneNum) 
{
	int i = 0;
	for (; theFee[i] != '\0';i++)
	{
		fee[i] = theFee[i];
	}
	fee[i] = '\0';
}
