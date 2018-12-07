// managing_arrays_and_strings.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {

	int normal_array[3];

	normal_array[0] = 34;
	normal_array[1] = 45;
	normal_array[2] = 78;

	cout << "array 0: " << normal_array[0] << "\n";
	cout << "array 1: " << normal_array[1] << "\n";
	cout << "array 2: " << normal_array[2] << "\n";

	//==================================================================================================================
	//Dinamic Array
	//==================================================================================================================
	
	vector<int> dynArray(3); // define array of int

	dynArray[0] = 365;
	dynArray[1] = -56;
	dynArray[2] = 789;

	cout << "Number of integers in Array: " << dynArray.size() << "\n";
	cout << "Changing the size of the array: \n\n";

	int new_size;
	cout << "Please enter the element of array: "; 
	cin >> new_size; 

	dynArray.push_back(new_size);   // Pushes new value and increases the size of array
	cout << "Number of integers in Array: " << dynArray.size() << "\n";

	cout << "dynArray[0]: " << dynArray[0] << "\n";
	cout << "dynArray[1]: " << dynArray[1] << "\n";
	cout << "dynArray[2]: " << dynArray[2] << "\n";
	cout << "dynArray[3]: " << dynArray[3] << "\n";
	
	//==================================================================================================================

	
	return 0;
}

