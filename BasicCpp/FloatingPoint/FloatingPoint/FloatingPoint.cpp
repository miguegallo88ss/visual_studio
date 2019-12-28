// FloatingPoint.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <float.h>

using namespace std;


int main()
{
	//Foating point types
	float a;
	double b = 77000; //7.7E4
		cout << b << endl;
	double bb = 7.7E4;
	cout << bb << endl;
	double bbb = 7.7E5;
	cout << bbb << endl;
	long double c = 77000;

	//Float has the least significant digitat that we can trust
		a = 10.0 / 3;
		a = a * 100000000000000;
		// This fixed shows the complete number without rounding it o puting is in scientific notation
		cout << fixed << a << endl;
		cout << FLT_DIG << endl;  // the nax number of digits floating point types are confiables. For float type
		
		b = 10.0 / 3;
		b = b * 100000000000000;
		cout << fixed << b << endl;
		cout << DBL_DIG << endl;  // the nax number of digits floating point types are confiables. For double type

		c = 10.0 / 3.0;
		c = c * 100000000000000;
		cout << fixed << c << endl;
		cout << LDBL_DIG << endl;  // the nax number of digits floating point types are confiables. For long double type

    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
