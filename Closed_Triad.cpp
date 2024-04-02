#include "Closed_Triad.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void Closed_Triad::Init(int day, int month, int year) {
	setDay(day);
	setMonth(month);
	setYear(year);
}

Closed_Triad& Closed_Triad::operator++()
{
	setDay((getDay() + 1));
	setMonth((getMonth() + 1));
	setYear((getYear() + 1));
	return *this;
}

Closed_Triad& Closed_Triad::operator--()
{
	setDay((getDay() - 1));
	setMonth((getMonth() - 1));
	setYear((getYear() - 1));
	return *this;
}

Closed_Triad Closed_Triad::operator++(int)
{
	setDay((getDay() + 1));
	setMonth((getMonth() + 1));
	setYear((getYear() + 1));
	return *this;
}

Closed_Triad Closed_Triad::operator--(int)
{
	setDay((getDay() - 1));
	setMonth((getMonth() - 1));
	setYear((getYear() - 1));
	return *this;
}

Closed_Triad::operator string() const
{
	stringstream sout;
	sout << getDay() << "/" << getMonth() << "/" << getYear() << endl;
	return sout.str();
}

Closed_Triad& Closed_Triad::operator=(const Closed_Triad& other)
{
	if (this != &other) {
		Date::operator=(other);
	}
	return *this;
}

ostream& operator<<(ostream& out, const Closed_Triad& vec) {
	out << vec.getDay() << "/" << vec.getMonth() << "/" << vec.getYear() << endl;
	return out;
}

istream& operator >> (istream& in, Closed_Triad& m)
{
	int day, month, year;
	cout << "Enter Day: ";
	in >> day;
	cout << "Enter Month: ";
	in >> month;
	cout << "Enter Year: ";
	in >> year;
	m.Init(day, month, year);
	return in;
}