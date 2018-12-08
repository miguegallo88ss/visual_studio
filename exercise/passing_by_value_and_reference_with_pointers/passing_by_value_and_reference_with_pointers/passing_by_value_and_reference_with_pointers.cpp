// passing_by_value_and_reference_with_pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

void passby_value(int x);
void passing_by_reference(int *x);

int main() {
	//Passing by value is tha same as passing regular number to a function.
	//if you change the value of that variable in tthe function, you do not change the 
	//original value of the variable byou passes, but a copy of it.

	//Passing byb reference - Passing variable addresses.
	
	
	int betty = 13;
	int sandy = 13;


	cout << "betty - pass by value before change: " << betty << endl;
	passby_value(betty);
	cout << "betty - pass by value after change: " << betty << endl;

	cout << "\nsandy - pass by reference before change: " << sandy << endl;
	passing_by_reference(&sandy);
	cout << "sandy - pass by reference after change: " << sandy << endl;


	system("pause");
	return 0;
}


void passby_value(int x) {
	x = 99;
}

void passing_by_reference(int *x) {

	//to read/change the value of address that pointer
	//is pointing to, we need to put the "*"pointerName in from iof it.

	cout << "Value of pointer before change: " << *x << endl;
	*x = 66;
}