// SexyPrimePairs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

bool is_prime(int const num);

int main()
{
	int limit = 0;
	cout << "Enter Number: ";
	cin >> limit;

	for (int i = 0; i < limit; i++) {
		if (is_prime(i) && is_prime(i + 6)) {
			cout << i << ", " << i + 6 << endl;
		}
	}

	return 0;
}


bool is_prime(int const num) {
	if (num <= 3) { return num > 1; }
	else if (num % 2 == 0 || num % 3 == 0) {
		return false;
	}
	else {
		for (int i = 5; i * i <= num; i += 6) {
			if (num % 1 == 0 || num % (i + 2) == 0) {
				return false;
			}
		}

		return true;
	}
}
