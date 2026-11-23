#pragma once
#include <string>
#include <iostream>
using namespace std;

class Employee
{
private:
	string name;
	string ssn;
	double netPay;
public:
	Employee();
	Employee(const string& theName, const string& theNumber);
	string getName() const;
	string getSsn() const;
	double getNetPay() const;
	void setName(const string& newName);
	void setSsn(const string& newSsn);
	void setNetPay(double newNetPay);
	void printCheck() const;
};