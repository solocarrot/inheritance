#pragma once
#include "employee.h"

class HourlyEmployee : public Employee
{
private:
	double wageRate;
	double hours;

public:
	HourlyEmployee();
	HourlyEmployee(const string& theName, const string& theSsn, double newWageRate, double theHours);
	void setWageRate(double newWageRate);
	void setHours(double hours);
	double getWageRate() const;
	double getHours() const;
	void printCheck();
};