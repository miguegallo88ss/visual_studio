// Const-Macro-Enum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#define X 12  // this is not the preffered way to define a variable, because you do not specify a type.

using namespace std;

int main()
{
	const int x = 5;	// When defined like this this is  a read only variable
	// x = 15;	==> this can not be done to a const variable.

	enum {y = 100}; // this assigns 100 to y, and it can not be changed.


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
