// Functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	// printing inf, -inf, nan
    
	cout << sqrt(25) << endl;  // produces regular number
	cout << sqrt(-25) << endl;  // produces imaginary number, referenced as "nan". "nan" = Not a Number
	cout << pow(9, 999) << endl << "\n";  // produces infinity (inf)
	cout << "\tprinting inf ==> " << INFINITY << endl << "\n";
	cout << pow(-9, 999) << endl;  // produces -infinity (-inf)
	cout << "\tprinting -inf ==> " << -INFINITY << endl;

	//remainder
	cout << "Remainder: " << endl;
	cout << remainder(10, 3) << endl;  // gives a floating point value, the actual reminder.

	//fmod
	cout << "\nfmod: " << endl;
	cout << fmod(10, 3.25) << endl;  // the difference between this and reminder() is that on uses rounding and hte other uses truncation.

	//modulus
	cout << "\nModulus: " << endl;
	cout << 10 % 2 << endl;  // gives a "1" is there is reminder, or "0" if ther is no reminder.

	// fmax
	cout << "\nfmax(): " << endl;
	cout << "Miax id: " << fmax(10, 3) << endl; // vived the bigger one ofhte two

	// fmin
	cout << "\nfmin(): " << endl;
	cout << "Min is: "<< fmin(10, 3) << endl; // vived the bigger one ofhte two

	//ceil
	cout << "ceil(): "<< endl;
	cout << ceil(4.25) << endl; //returns the next greater integer when passed a decimal. Eg. ceil(4.25) = 5.

	//floor
	cout << "floor():" << endl;
	cout << floor(4.25) << endl;  // returns the next smaller decimal  number. eg. floor(4.25) = 4

	//trunc
	cout << "trunc() " << endl;
	cout << trunc(-1.5) << endl; //truncates the decimals values

	cout << "foor and trunc are similar, but work diferentrly: " << endl;
	cout << "trunc(-1.5) = " << trunc(-1.5) << endl;
	cout << "floor(-1.5) = " << floor(-1.5) << endl;

	//round
	cout << "round(): " << endl;
	cout << round(1.5) << endl;

	cout << nearbyint(1.456) << endl;
	 
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
