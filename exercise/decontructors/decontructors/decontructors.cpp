// decontructors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class Contructor_deconstructor {
public:
	Contructor_deconstructor(string z) {
		cout << "This is the Contructor printing what is being passed: ";
		cout << z << endl;
	}

	~Contructor_deconstructor() {
		cout << "This is the de-Contructor printing Completion\n";
		system("pause");
	}
};

int main()
{
	Contructor_deconstructor Miguel("Passing Message to Contructor");
    cout << "this is m program!\n";

	system("pause");
	return 0;
}
