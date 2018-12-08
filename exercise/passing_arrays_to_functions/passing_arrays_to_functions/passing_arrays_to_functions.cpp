// passing_arrays_to_functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

void printArrary(int theArray[], int sizeOfArray);

int main()
{
	int theArray[10] = {1, 3, 56, 78, 12, 44, 34,33, 23, 45};
	int sizeArr = 10;

	printArrary(theArray, sizeArr);

	system("pause");

	return 0;
}


void printArrary(int theArray[], int sizeOfArray) {
	for (int i = 0; i < sizeOfArray; i++) {
		cout << "Element " << i + 1 << " is " << theArray[i] << endl;
	}


}