#include "employee.h"

Employee::Employee() 
	: name("No name yet"), ssn("No ssn yet"), netPay(0) {}
Employee::Employee(const string& theName, const string& theNumber) 
	: name(theName), ssn(theNumber), netPay(0)  {}
string Employee::getName() const
{
	return name;
}
string Employee::getSsn() const
{
	return ssn;
}
double Employee::getNetPay() const
{
	return netPay;
}
void Employee::setName(const string& newName)
{
	name = newName;
}
void Employee::setSsn(const string& newSsn)
{
	ssn = newSsn;
}
void Employee::setNetPay(double newNetPay)
{
	netPay = newNetPay;
}
