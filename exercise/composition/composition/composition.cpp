// composition.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "People.h"
#include "Birthday.h"
#include <string>

using namespace std;

int main() {
	//Compositions - object inside clases
	Birthday birthObject(5, 7, 1988);

	People MiguelNaranjo("Miguel Naranjo", birthObject);
	MiguelNaranjo.printInfo();

	system("pause");
	return 0;
}
