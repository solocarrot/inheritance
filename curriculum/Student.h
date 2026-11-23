#pragma once
#include <string>
#include<iostream>
using namespace std;

class Student
{
private:
	string name;
	string key;
	string phoneNum;
	string subject;

public:
	Student();
	Student(const string& theName, const string& theKey, const string& subject, const string& phoneNum);
	string getName() const;
	string getKey() const;
	string getSubject() const;
	string getPhoneNum() const;
};