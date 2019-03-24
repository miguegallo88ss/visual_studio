#include "pch.h"
#include <iostream>
#include <string>
#include "Birthday.h"
#include "People.h"

using namespace std;

People::People(string x, Birthday bo) : name(x), dateOfBirth(bo) {

}


People::~People()
{
}

void People::printInfo() {
	cout << name << "Was born on ";
	cout << dateOfBirth.printDate << endl;

}