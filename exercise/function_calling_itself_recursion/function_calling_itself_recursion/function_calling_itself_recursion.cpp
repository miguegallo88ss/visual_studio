// function_calling_itself_recursion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int factorial_function(int x);

int main() {
	cout << factorial_function(10) << endl;
	
	system("pause");
}

int factorial_function(int x) {
	int value;

	if (x == 1) {
		return 1;
	} else {
		return x * factorial_function(x - 1);
	}

}
