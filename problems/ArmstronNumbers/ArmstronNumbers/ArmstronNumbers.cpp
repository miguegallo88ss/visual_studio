// ArmstronNumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

int main()
{
	int numIn = 0;
	string strnumIn = "";
	int numOfDigits = 0;
	int sum = 0;
	vector<int> vect;

	cout << "Plase enter a number to see if it is an Armstrong Number: ";
	cin >> numIn;
	
	numOfDigits = to_string(numIn).length();
	strnumIn = to_string(numIn);


	for (auto c : strnumIn)
	{
		vect.push_back(c - '0');
	}

	for (int i = 0; i < numOfDigits; i++)
	{		
		sum += pow(vect[i], numOfDigits);
	}

	if (sum == numIn) {
		cout << "The numbers are the same\n";
	}
	else {
		cout << "The numbers are not the same\n";
	}
	return 0;

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
