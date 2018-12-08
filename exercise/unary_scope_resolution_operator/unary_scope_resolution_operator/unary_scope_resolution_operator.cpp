#include "pch.h"
#include <iostream>

using namespace std;

int tune = 90;   //global variable

int main() {

	int tune = 50;  //compile always prefers latest defined variable
	cout << tune << endl;

	//unary scope resolution "::"
	// tells it to use the "global tune variable"
	cout << ::tune << endl;


	return 0;
}

