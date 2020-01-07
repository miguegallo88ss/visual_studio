// HEXOCT.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int numnber = 30;   // Decimal
	int numnber1 = 30;
	cout << "Decimal: " << numnber << endl;
	int number1 = 0X30; // Hex
	cout << "Dex: " << number1 << endl;
	int number2 = 030;  // Octal
	cout << "Octal: " << number2 << endl;


	// decimal to Hex print
	cout << "Print Decimal Num \""<< numnber << "\" in Hex: " << hex << numnber << endl;
	numnber = 30;
	cout << "Print Decimal Num \"" << numnber << "\" in Octal: " << oct << numnber << endl;

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
