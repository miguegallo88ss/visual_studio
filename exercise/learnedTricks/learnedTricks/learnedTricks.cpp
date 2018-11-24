// learnedTricks.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <cstdint>
#include "pch.h"
#include <iostream>
#include <numeric>
#include <chrono> 

using namespace std;

using namespace std::chrono;	//Euclide's Algorithm
int gcd(int a, int b);   //Euclide's Algorithm


int main()
{
    cout << "Some Tricks!\n"; 
	
	//==================================================================================================================
	//Setting a boolean to true of false depending on whether a  string is withon another string
	//==================================================================================================================
	bool foundString = false;
	//string to look in
	string containginString = "new";
	//string that will be searched in the bigger string
	char shortString[] = "new";

	//setting the boolean depending on the result of the comparison
	foundString = (containginString == "new");

	if (foundString) {
		cout << "shortString[] was found: " << shortString << "\n";
	}
	else {
		cout << "shortString[] was NOT found: " << shortString << "\n\n";
	}
	//==================================================================================================================




	//==================================================================================================================
	//Euclide's Algorithm
	//==================================================================================================================
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
	greatest_div = gcd(in_1, in_2);

	cout << "The greatest Common Divsor is \n" << greatest_div << "\n";
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start);
	cout << "\nExecution Time: " << duration.count() << "uS" << endl;
	//==================================================================================================================
	//==================================================================================================================








	return 0;
}

int gcd(int a, int b) {
	return b == 0 ? a : gcd(b, a%b);
}