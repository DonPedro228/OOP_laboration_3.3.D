#pragma once
#include <iostream>
#include <string>
#include "Date.h"
using namespace std;


class Closed_Triad : private Date
{
public:
	using Date::getDay;
	using Date::getMonth;
	using Date::getYear;

    Closed_Triad() : Date() {};
    Closed_Triad(int day, int month, int year) : Date(day, month, year) {};
    Closed_Triad(const Closed_Triad& other) : Date(other.getDay(), other.getMonth(), other.getYear()) {};

    Closed_Triad& operator ++();
    Closed_Triad& operator --();
    Closed_Triad operator ++(int);
    Closed_Triad operator --(int);

    void Init(int day, int month, int year);
    operator string() const;

    friend ostream& operator << (ostream& out, const Closed_Triad& m);
    friend istream& operator >> (istream& in, Closed_Triad& m);

    Closed_Triad& operator = (const Closed_Triad& other);
};