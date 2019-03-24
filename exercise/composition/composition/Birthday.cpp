#include "pch.h"
#include <iostream>
#include <string>
#include "Birthday.h"
#include "People.h"

using namespace std;

Birthday::Birthday(int m, int d, int y) {
	month = m;   //05
	day = d;	 //07
	year = y;	 //1988
}


Birthday::~Birthday()
{
}

void Birthday::printDate() {
	cout << "Day: " << day << endl;
	cout << "Monthj: " << month << endl;
	cout << "Year: " << year << endl;
}
