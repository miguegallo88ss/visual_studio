#include "pch.h"
#include <iostream>

using namespace std;

//those values are the default values if nothing is passed to the function.
int volume(int l = 1, int h = 2, int w = 1);
int main() {

	//volume passing all 3 arguments
	cout << "All 3 arguments: ";
	cout << volume(4, 5, 5) << "\n";

	//volume passing 2 paramater. Assumptio that those 2 poarms got o 2 first variables
	cout << "Only 2 arguments: ";
	cout << volume(2, 3) << "\n";

	//volume passing no values. Usses defaults.
	cout << "No arguments: ";
	cout << volume() << "\n";


	return 0;
}

int volume(int l, int h, int w) {
	return l*h*w;
}