#pragma once
#include "employee.h"

class SalariedEmployee : public Employee
{
private:
	double salary;//weekly

public:
	SalariedEmployee();
	SalariedEmployee(const string& theName, const string& theSsn, double theWeeklySalary);
	double getSalary() const;
	void setSalary(double newSalary);
	void printCheck();
};
