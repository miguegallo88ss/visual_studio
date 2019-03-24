// sum_of_natural_nums_devisible_by_3_and_5.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 
//Description
//the user neter a natural number and the pgm computes sum of all number from 
// zeto to taht number, that are divisible by 3 & 5

#include "pch.h"
#include <iostream>

using namespace std;

int main() {
	int in_num = 0;
	int loop_ctr = 0;
	int sum = 0;


	cout << " \n Please enter a number: \n";
	cin >> in_num;

	for ( loop_ctr = 3; loop_ctr <= in_num; loop_ctr++) {
		if ((loop_ctr % 5 == 0) && (loop_ctr % 3 == 0)) {
			sum = loop_ctr + sum;
			cout << loop_ctr << " is Divisible by 3 & 5\n";
		}
	}

    cout << "\nThe sum is " << sum << "\n"; 

	// There is abetter way to do this using Euclid's Algorithm
	// go here to find out more: https://github.com/miguegallo88ss/visual_studio/blob/master/exercise/learnedTricks/learnedTricks/learnedTricks.cpp

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
