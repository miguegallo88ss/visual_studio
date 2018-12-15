#include "pch.h"

#include <iostream>
#include "Miguel.h"

using namespace std;

Miguel::Miguel(int a, int b) : regVar(a), constVar(b) { // this is initialize the variables in constructor

}

Miguel::~Miguel()
{
}

//regular function
void Miguel::print() {
	cout << "Regular Variable is: " << regVar << endl;
	cout << "Constant Variable is: " << constVar << endl;
}

