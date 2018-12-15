// const_objects.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Miguel.h"

using namespace std;


int main() {
	//constant object need constant functions

	//this is regular object
	Miguel migRegObject;
	migRegObject.non_constantFunc();
   
	//this is a constant object
	const Miguel migConstObject;
	migConstObject.constantFunc();

	system("pause");
	return 0;

}
