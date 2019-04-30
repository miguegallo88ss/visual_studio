// LeastCommoMultiple.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Author: Miguel A Naranjo
// Date: 03/23/2019
// 
// Problem: Write a Program that will, given 2 or more positive integers, calculates and prints the least common multiple of htem all

#include "pch.h"
#include <iostream>
#include <numeric>
#include <new>
#include <chrono>

using namespace std;

int gcd(int a, int b);
int lcm(int const a, int const b);

int main()
{
	//Solution 1. My Solution
	int numCnt = 0;
	int * ptrToMemAlloc;
	int getNumCtr = 0;

	cout << "How many numbers will you Compare? ";
	cin >> numCnt;

	ptrToMemAlloc = new (nothrow) int[numCnt];
	if (ptrToMemAlloc == nullptr) {
		cout << "Memory coud not be allocated\n";
	}
	else {

		for (getNumCtr = 0; getNumCtr < numCnt; getNumCtr++) {
			cout << "Please enter two or more positive integers: ";
			cin >> ptrToMemAlloc[getNumCtr];
			if (ptrToMemAlloc[getNumCtr] < 0) {
				cout << "The numvber you entered \"" << ptrToMemAlloc[getNumCtr] << "\" is < 0, Try again \n";
				getNumCtr--;
			}
		}
		for (getNumCtr = 0; getNumCtr < numCnt; getNumCtr++) {
			cout << "You have entered: " << ptrToMemAlloc[getNumCtr] << endl;

		}

		cout << "The least Common multiple of " << ptrToMemAlloc[0] << " and " << ptrToMemAlloc[1] << " is " << lcm(ptrToMemAlloc[0], ptrToMemAlloc[1]) << endl;
	}

		delete[] ptrToMemAlloc;
	

	return 0;
}

int gcd(int a, int b) {
	return b == 0 ? a : gcd(b, a%b);
}

int lcm(int const a, int const b) {
	int h = gcd(a, b);
	return h == 1 ? 1 : lcm((a*(b / h)), a);
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
