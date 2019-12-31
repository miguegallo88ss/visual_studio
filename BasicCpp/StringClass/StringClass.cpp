// StringClass.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string greeting = "hello";
	// accessing elements of string
	cout << "Complete string: "<< greeting << endl;
	cout << "string character # 0: " << greeting[0] << endl;
	cout << "string character # 1: " << greeting[1] << endl;
	cout << "string character # 2: " << greeting[2] << endl;
	cout << "string character # 3: " << greeting[3] << endl;
	cout << "string character # 4: " << greeting[4] << endl;

	//concatination
	cout << "\nconcatination: ";
	cout << greeting + " there" << endl;

	// string length
	cout << "length(greeting) = " <<greeting.length() << endl;




	// Using string to get user imput, but not being limited by cin, which only gets the first word of user imput.
	//getline(cin, greeting);
	cout << greeting << endl;

	//if gettign numbers ise the greeting.getline(). It is much better for numbers and not strings
	// the getline() all by itself is better for strings.


	// string methods 
	cout << "\n\n======================================\n";
	string greeting1 = "Hello";
	cout << "Original String: " << greeting1 << endl;

	//size()
	cout <<"size: " << greeting1.size() << endl;

	//appending
	greeting1 += " There";
	cout << "append with += " << greeting1 << endl;
	greeting1.append(" Miguel");
	cout << "append with .append() method" << greeting1 << endl;

	//insert
	greeting1 = "Hello";
	greeting1.insert(2, " SPACE ");
	cout << "string with \" SPACE \" inserted in location 2: " << greeting1 << endl;

	//erase
	greeting1.erase(2, 7);
	cout << "string with \" SPACE \" erased. 7 characters erased: " << greeting1 << endl;




















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
