#pragma once
#include <string>
#include<iostream>
#include <istream>
using namespace std;

class Student
{
private:
	string name;
	string phoneNum;
	string subject;
	string degree;

public:
	Student();
	Student(const string& theName, const string& subject, const string& phoneNum, const string& degree);
	
	void printDegree() const;
	void printSubNName() const;
	void printPhoneNum() const;
	string getName() const;
	string getSubject() const;
	string getPhoneNum() const;

};