// switch_statement.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int age;
	bool done = false;

	cout << "Enter your age: " << endl;
	cin >> age;

	switch (age) {
	case 1:
		cout << "you are very youg\n";
		done = true;
		break;
	case 4:
		cout << "you are youg\n";
		done = true;
		break;
	case 18:
		cout << "buy lottery\n";
		done = true;
		break;
	case 21: 
		cout << "buy beer\n"; break;
		done = true;
	default:
		cout << "Not important age\n";
		done = false;
		break;
	}
	
	
	if (done == false) {
		system("cls");
		return main();
	} else { 
		return 0;
	}
	
}

;