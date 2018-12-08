// do_while_loop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int i = 1;
	while (i < 5) {
		cout << "value of i (while): " << i << endl;
		i++;
	}
	i = 1;
	do {
		cout << "value of i (do while): " << i << endl;
		i++;
	} while (i < 5);
}

