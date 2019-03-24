#pragma once
#include "pch.h"
#include <iostream>
#include <string>
#include "People.h"

using namespace std;

class Birthday
{

	public:
		Birthday(int m, int d, int y);
		void printDate();
		~Birthday();
	private:
		int month;
		int day;
		int year;
};

