// const_objects.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Miguel.h"

using namespace std;


int main() {
	//constant variables need to be intialized with member initilizers.
	//the variables are set in the contructor
	Miguel so(3, 87);
	so.print();

	system("pause");
	return 0;

}
