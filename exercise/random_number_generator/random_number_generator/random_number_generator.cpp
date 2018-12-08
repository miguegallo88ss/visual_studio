#include "pch.h"
#include <iostream>
#include <cmath>
#include <cstdlib>  // fandom number generator
#include <stdio.h>
#include <ctime>

using namespace std;

int main() {

	//call function for rnadom number generation
	cout << rand() << endl;

	for (int i = 1; i < 5; i++) {
		//generate 25 random numbers from 1 to 6
		//the 6 can be some other numbers
		//they are not really random :-( if executed more than one time back to back
		cout << 1 + rand() % 6 << "\n";
	}


	//Chaging the algotitm go trully get us a random number
	// if the same number is passed, then the result is not really random
	srand(23);  //will give us the same random number every time we call it passing 23

	//if pass a time in a number format, then the time is fiffernet every second, so s trully randome nmber is generated
	srand(time(0));  //:-)  time(0) callculates the number of seconds simce epoc time
	
	cout << endl;

	for (int j = 1; j < 5; j++) {
		//generate 25 random numbers from 1 to 6
		//the 6 can be some other numbers
		//they are not really random :-( if executed more than one time back to back
		cout << 1 + rand() % 6 << "\n";
	}


	return 0;
}