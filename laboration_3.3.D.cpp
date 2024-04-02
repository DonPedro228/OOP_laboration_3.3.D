#include "Triad.h"
#include <iostream>
using namespace std;

int main() {
	Triad date;

	cin >> date;
	cout << "Our date: " << date << endl;

	cout << "Date after increment" << ++date << endl;

	Date date_1 = date + 10;

	cout << "Future date after adding 10 days: " << string(date_1) << endl;

	return 0;

}