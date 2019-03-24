#pragma once
#include "pch.h"
#include <iostream>
#include <string>
#include "Birthday.h"

using namespace std;

class People
{
	public:
		People(string x, Birthday bo);
		void printInfo();
		~People();
	private:
		string name;
		Birthday dateOfBirth;
};

