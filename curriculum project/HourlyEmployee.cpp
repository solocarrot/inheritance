#include "HourlyEmployee.h"

HourlyEmployee::HourlyEmployee()
	:Employee(), wageRate(0), hours(0) {}
HourlyEmployee::HourlyEmployee(const string& theName, const string& theNumber, double theWageRate, double theHours)
	:Employee(theName, theNumber), wageRate(theWageRate), hours(theHours) { }
double HourlyEmployee::getWageRate() const
{
	return wageRate;
}
double HourlyEmployee::getHours() const
{
	return hours;
}
void HourlyEmployee::setHours(double hoursWorked)
{
	hours = hoursWorked;
}
void HourlyEmployee::setWageRate(double theNewWageRate)
{
	wageRate = theNewWageRate;
}
void HourlyEmployee::printCheck()
{
	setNetPay(hours * wageRate);

	cout << "\n______________________________________________________\n";
	cout << "Pay to the order of " << getName() << endl;
	cout << "The sum of " << getNetPay() << "Dollars\n";

}