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
	cout << greeting1.find("with") << endl;
	
	//pop_back
	//remove last character
	cout << "\npop_back" << endl;
	greeting1 = "Miguel A Naranjo";
	greeting1.pop_back();
	cout << "After last Char removal: " << greeting1 << endl;
	
	//puch_back
	//remove last character
	cout << "\npuch_back" << endl;
	greeting1 = "Miguel A Naranjo";
	greeting1.push_back(79);  // argument to push_back needs to be in decimal
	cout << "After last Char addition: " << greeting1 << endl;

	// string find
	// find the index of the text passed and return the integer location
	cout << "\nfind(string)" << endl;
	int miguel = 0;
	miguel = greeting1.find("gue");
	cout << "miguel: " << miguel << endl;


	//string replace
	cout << "\nreplace: " << endl;
	greeting1 = "Miguel A Naranjo";
	greeting1.replace(greeting1.find("Miguel"), greeting1.find("Miguel") + 6, "MIGUEL");
	cout << "MIGUEL Replaced: " << greeting1 << endl;

	//substring
	//get part of a string
	greeting1 = "Miguel A Naranjo";
	cout << "\nGetting characters 3 - 7 in string" << endl;
	cout << greeting1.substr(3, 7) << endl;

	//find_first_of
	// find first intance of the characters passed in the string
	greeting1 = "Miguel A Naranjo";
	cout << "\nIndex of First bowel in " << greeting1 << " :" << greeting1.find_first_of("aeiou") << endl;; // first vowel










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
