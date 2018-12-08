// passing_arrays_to_functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

void printArrary(int theArray[], int sizeOfArray);

int main()
{
	int theArray[10] = {1, 3, 56, 78, 12, 44, 34,33, 23, 45};
	
	// For the second arguemnt of of function i device the size (in  bytes) of the array by the size (in bytes) of one of 
	//the elements in the array. This gives me the number of element n the array.
	printArrary(theArray, sizeof(theArray)/sizeof(theArray[0]));

	system("pause");

	return 0;
}


void printArrary(int theArray[], int sizeOfArray) {
	for (int i = 0; i < sizeOfArray; i++) {
		cout << "Element " << i + 1 << " is " << theArray[i] << endl;
	}


}