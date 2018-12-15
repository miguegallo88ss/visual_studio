#include "pch.h"

#include <iostream>
#include "Miguel.h"

using namespace std;

Miguel::Miguel()
{
}

Miguel::~Miguel()
{
}

//regular function
void Miguel::non_constantFunc() {
	cout << "This is a regular Fuction." << endl;
}

//contant function
void Miguel::constantFunc() const {
	cout << "This is s Const Function. " << endl;
}


