// pointers_and_math.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int miguel[5];

	//Prin all memoriy addresses
	int *bp0 = &miguel[0];
	int *bp1 = &miguel[1];
	int *bp2 = &miguel[2];
	int *bp3 = &miguel[3];


	cout << "bp0 is at: " << bp0 << endl;
	cout << "bp1 is at: " << bp1 << endl;
	cout << "bp2 is at: " << bp2 << endl;
	cout << "bp3 is at: " << bp3 << endl;

	//adding an integer to a pointer
	//i basically adds 2 to the location in memoty that oinyer is pointing to:

	bp1 += 2;
	cout << "Adding integer 2 to pointer pb1 to make is point to two elements ahread\nin the array:\n";
	cout << "\nbp1 is now poing to: " << bp1 << endl;;

	system("pause");
	return 0;
}

