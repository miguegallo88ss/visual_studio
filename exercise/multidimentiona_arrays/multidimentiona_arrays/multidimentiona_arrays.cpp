// multidimentiona_arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main() {
	//Initializong it
	//2 rows - 3 columns
	//2,3,4
	//5,6,7
	int miguel[2][3] = { {2,3,4}, {5,6,7} };


	for (int i = 0; i < 2; i++){
		for (int j = 0; j < 3; j++) {
			cout << miguel[i][j] << endl;
		}
	}
	system("pause");
	return 0;
}

