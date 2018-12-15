// arrow_member_selection_operator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cmath>
#include "myclass.h"

using namespace std;

int main()
{
    // Error member selection operator: ->
	myclass miguelObject;
	myclass*miguelPointer = &miguelObject;

	// the period here "." is used to just access the value of that variable in the class
	miguelObject.printCrap();

	// The "->" is used when you are trying to access the address of somthing inside a class.
	miguelPointer->printCrap();
	
	system("pause");
	return 0;
}

