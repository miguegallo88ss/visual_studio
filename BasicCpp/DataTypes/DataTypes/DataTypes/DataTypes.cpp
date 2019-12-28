// DataTypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <climits>

using namespace std;

int main()
{
	// Size of data types
	short a;
	int b;
	long c;
	long long d;
	
	//Size of integral data types
	cout << "size of a (int) - in bytes: " << sizeof(a) << endl;
	cout << "size of b (int) - in bytes: " << sizeof(b) << endl;
	cout << "size of c (long) - in bytes: " << sizeof(c) << endl;
	cout << "size of d (long long) - in bytes: " << sizeof(d) << endl;

	//Max and Min size of data types (Signed and Unsigned
	cout << "Max size of a: " << SHRT_MAX << endl;
	cout << "Min size of a: " << SHRT_MIN << endl;
	cout << "Max size of b: " << INT_MAX << endl;
	cout << "Min size of b: " << INT_MIN << endl;
	cout << "Max size of c: " << LONG_MAX << endl;
	cout << "Min size of c: " << LONG_MIN << endl;
	cout << "Max size of d: " << LLONG_MAX << endl;
	cout << "Min size of d: " << LLONG_MIN << endl;

	cout << "Unsigned Max size of a: " << USHRT_MAX << endl;
	cout << "Unsigned Max size of b: " << UINT_MAX << endl;
	cout << "Unsigned Max size of c: " << ULONG_MAX << endl;
	cout << "Unsigned Max size of d: " << ULLONG_MAX << endl;

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
