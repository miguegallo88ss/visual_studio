// LargestPrime_SmallerThanGivenNum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;
int main()
{
	unsigned int numIn = 0;
	int i, j;
	bool notPrime = false;
	unsigned int greatest = 0;

    cout << "Please neter a number: "; 
	cin >> numIn;

	for (int j = 2; j <= numIn; ++j)
	{
		int i = 2;
		for (; i <= j - 1; i++)
		{
			if (j%i == 0)
				break;
		}

		if (i == j && i != 2) {
		cout << j << endl;

		//Get greaters
			if (j >= greatest) {
				greatest = j;
			}
		}
	}
	
	cout << "Greaters Number: " << greatest << "\n";
	return 0;
}
