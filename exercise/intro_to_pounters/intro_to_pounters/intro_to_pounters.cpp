// intro_to_pounters.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main() {
	int fish = 5;
	// address operator: &
	cout << &fish << endl;
	
	//pointing to integers
	int *fishPointer;

	fishPointer = &fish;
	cout << "Pointing to memory of fish: " << fishPointer << endl;



	system("pause");
	return 0;
}

