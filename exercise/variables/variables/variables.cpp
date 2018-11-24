// variables.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;


int main()
{
    cout << "All Variables!\n";
		
	cout << " bool\n char\n unsigned short int\n short int\n unsugned long int\n long int\n long long\n int (16bit)\n int (32 bit)\n unsigned int (16bit)\n unsigned int (32 bit)\n flowt\n double\n\n";


	cout << "Size of char : " << sizeof(char) 							<< " byte" << endl;
	cout << "Size of int : " << sizeof(int) 							<< " bytes" << endl;
	cout << "Size of short int : " << sizeof(short int) 				<< " bytes" << endl;
	cout << "Size of long int : " << sizeof(long int) 					<< " bytes" << endl;
	cout << "Size of signed long int : " << sizeof(signed long int) 	<< " bytes" << endl;
	cout << "Size of unsigned long int : " << sizeof(unsigned long int)	<< " bytes" << endl;
	cout << "Size of float : " << sizeof(float) 						<< " bytes" << endl;
	cout << "Size of double : " << sizeof(double) 						<< " bytes" << endl;
	cout << "Size of wchar_t : " << sizeof(wchar_t) 					<< " bytes" << endl;


	// Exmaples
	cout << "Setting a boolean variable\n'";

	string userSelection = "yes";
	bool deleteFile = false;
	deleteFile = (userSelection == "yes");

	cout << "deleteFile content " << deleteFile << "\n";



	//==================================================================================================================
	//Using sizeof() call to determine th esize in bytes of a variable\
	// we can have integer with specific sizes, dependent on the definition:
	//	We have to #include <cstdint>
	// Examples:
	//	int_8 & uint_8     (Signed and Unsigned integers of size 8 bits)
	//	int_16 & utin_16   (Signed and Unsigned integers of size 16 bits)
	//  int_32 & uint_32   (Signed and Unsigned integers of size 32 bits)
	//	int_64 & uint_64   (Signed and Unsigned integers of size 64 bits)

	double myDouble = 0;
	int myInt = 0;

	cout << "Printing the size of myDouble: " << sizeof(myDouble) << "\n";
	cout << "Printing the size of myInt: " << sizeof(myInt) << "\n";

	//==================================================================================================================
	//saving variables that are of a larger type in a variable that is of a smaller type
	//								 int									short
	//Example:
	//	Saving bigger variable in smaller, because the caontenf of thet bigger variable sill fits into the smaller variable
	int largerNum = 5000000;
	short smallNum = largerNum;

	//for (int i = 0; i < 1000000000; i += 1000) {
	for (int i = 0; i < 10; i += 1) {
		largerNum = i;
		smallNum = largerNum;
		cout << "Writting largeNum into shortNUm:\t" << largerNum << "\n";
	}

	//==================================================================================================================
	//Using Auto variable definition
	//This is a type of variable that once defined, the compailer itself defined that size and type of variable that is to use. 
	auto coinFlippingHead = false;
	auto largeNumber = 250000000000000000;

	cout << "\n\ncoinFlippingHead was used as a boolean with size: " << sizeof(coinFlippingHead) << "\n";
	cout << "largeNumber  was defined, as a long long with size: " << sizeof(largeNumber) << "\n";

	//==================================================================================================================



	return 0;
}

