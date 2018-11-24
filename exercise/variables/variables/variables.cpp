// variables.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <cstdint>
#include "pch.h"
#include <iostream>
#include <numeric>
#include <chrono> 
#include <math.h>
#include <cmath>

using namespace std;

constexpr double GetPi() {return 22.0 / 7; }
constexpr double twicePi() {return 2 * (22.0 / 7); }


int main()
{
    cout << "\nAll Variables!\n";
		
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

	cout << "\nPrinting the size of myDouble: " << sizeof(myDouble) << "\n";
	cout << "Printing the size of myInt: " << sizeof(myInt) << "\n";

	//==================================================================================================================
	//saving variables that are of a larger type in a variable that is of a smaller type
	//								 int									short
	//Example:
	//	Saving bigger variable in smaller, because the caontenf of thet bigger variable sill fits into the smaller variable
	int largerNum = 5000000;
	short smallNum = largerNum;
	
	cout << "\n";
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
	//Using typeedef to Substitute a Variable type
	// it is like defining an "alias" alias ls -lrt "ll"
	typedef unsigned int STRICTLY_POSITIVE_INTEGER;
	typedef unsigned long long STRICTLY_POSITIVE_LONG_LONG;

	//defining an unsigned int sing the typedef
	// if we try to save a neagtive number in tehi variable, it will have some garbage in it, not the actual number we intended
	//EXAMPLE 1:
	STRICTLY_POSITIVE_INTEGER variable_of_that_Type = 3;
	cout << "\nGOOD positive variable int: " << variable_of_that_Type << "\n";
	variable_of_that_Type = -3;
	cout << "GARBAGE positive variable int: " << variable_of_that_Type << "\n";

	//EXAMPLE 2:
	STRICTLY_POSITIVE_LONG_LONG long_long_Num = 1235455135135151351;
	cout << "GOOD positive variable long long: " << long_long_Num << "\n";
	long_long_Num = -1235455135135151351;
	cout << "GARBAGE positive variable long long: " << long_long_Num << "\n";

	//==================================================================================================================
	// Now we are going to define some constants.  These are going to be used through the progrm, but are not going to change

	const double pi = 22.0 / 7;
	cout << "\nThe value of PI is: " << pi << "\n";
	
	//Will not compile if this is attempted
	//	pi = 7;  // Cannot reassign const variables

	//==================================================================================================================
	//  Use of Constant expressions
	// These expressions are defined in a program to used them as if they were predefined functions
	//constexpr double GetPi() {return 22.0 / 7; }
	//constexpr double twicePi() {return 2 * (22.0 / 7); }
	// Go to lines 13 & 14 for definitions
	cout << "\nAdding 5 + Pi from constexpr: Value = " << "5 + GetPi() = " << 5 + GetPi() << "\n";

	//==================================================================================================================
	//Using Enumerated types
	// They are used when youwant a variable to onl accept specific values.
	// these values are defined as enum()
	// This is like defiening a type of variable
	enum rainbowColors {
		Violet = 0,    // This is explicitly defined here, but if not defined as the 0th element of the enum, the compiled will assigne to the element the index 0th
		Indigo,		   // if another numebr is used, then the first element of the emun will be in that element, and the sec ond one will be the following one, and to forth
		Blue,
		Green,
		Yellow,
		Orange,
		Red	
	};
	enum CardinalDirections{
		North = 25,  //Compiler here assumes this is the 0th element of the emun:: "North = 25,"
		South,
		East,
		West
	};

	//Example:
	rainbowColors MyFavColor = Blue;   // Assigneing one of the accepted values (Blue) to the variable MyFavColor
	//Printing the 3th element of rainbowColors emun, which stars at 0
	cout << "\nIndex of color Blue in enum rainbowColors(): " << Blue << "\n";

	//Printing the 3th element of CardinalDirections emun, which stars at 25
	cout << "Index of direction East in enum CardinalDirections(): " << East << "\n";



	return 0;
}

