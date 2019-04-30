// abudantNumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int numIn;
	int i = 2;
	int abundantSun = 0;

    cout << "Please enter a number to check if abundant: "; 
	cin >> numIn;

	for (i; i < numIn; i++){
		if (numIn % i == 0) {
			cout << "Abundant " << i << endl;
			abundantSun = abundantSun + i;

			if (abundantSun > numIn) {
				cout << "Abuncdance " << abundantSun - numIn << endl;
				break;
			}
		}
	}
	return 0;
}

