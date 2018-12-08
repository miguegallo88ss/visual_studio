#include "pch.h"
#include <iostream>

using namespace std;

void printNumber(int x) {

	cout << "printing int: " << x << endl;
}

void printNumber(float x) {

	cout << "printing float: " << x << endl;
}

int main() {

	int a = 54;
	float b = 23.44322;

	//it can distinguish what frunction to used based ont he type of funciton
	printNumber(a);
	printNumber(b);
	return 0;
}
