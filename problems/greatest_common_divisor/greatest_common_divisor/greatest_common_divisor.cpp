// greatest_common_divisor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// This program is intended to show how to get the greatets common divisor from two inetegers

#include "pch.h"
#include <iostream>
#include <numeric>
#include <chrono> 

int gcd(int a, int b);

using namespace std::chrono;
using namespace std;


int main() {

	int in_1 = 0;
	int in_2 = 0;
	int max_cnrt = 0;
	int greatest_div = 1;
	

	cout << "Finding the greates common divisor between two numbers\n";
	cout << "Enter nummber 1: "; 
	cin >> in_1;
	cout << "Enter nummber 2: ";
	cin >> in_2;

	auto start = high_resolution_clock::now();

	if (in_1 > in_2) {
		max_cnrt = in_2;
	}
	else {
		max_cnrt = in_1;
	}

	for (int i = 1; i <= max_cnrt; i++)
	{
		greatest_div = i;

		if ((in_1 % greatest_div == 0) && (in_2 % greatest_div == 0)) {
			if ((greatest_div >=  i - 1) && ( i >= 1)) {
				greatest_div = i;
			}
			else {
				//nothing
			}
		}
	}
    cout << "The greatest Common Divsor is \n" << greatest_div << "\n"; 
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start);
	cout << "\nExecution Time: " << duration.count() << "uS\n\n" << endl;

	
	
	
	
	
	/*********************************************************/
	//another way of doing this using Euclid's Algorithm
	/*********************************************************/
	cout << "Doing it again...\n";
	max_cnrt = 0;
	greatest_div = 1;

	start = high_resolution_clock::now();
	greatest_div = gcd(in_1, in_2);

	cout << "The greatest AGAIN Common Divsor is \n" << greatest_div << "\n";
	stop = high_resolution_clock::now();
	duration = duration_cast<microseconds>(stop - start);
	cout << "\nExecution Time: " << duration.count() << "uS" << endl;

	return 0;

}

int gcd(int a, int b) {
	return b == 0 ? a : gcd(b, a%b);
}
