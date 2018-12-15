// using_variables_in_clases.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class miguelClass {
public:

	//this is my contrutor, and it has the name that is the same as the class name
	// A contructor is a finction that gets called inmediately, when you create an object
	miguelClass(string z) {
		//Wahtsever I put in here will be executed when the obect is created.
		//Usually used to initialize variables when object is created.
		cout << "Contructor: This will be printed automatically\n";
		setString(z);
	}

	void setString(string str) {
		good_name = str;
	}
	string getString() {
		return good_name;
	}
	
private:
	string good_name;
};


int main()
{

	miguelClass miguelGoodObject ("Setting name using hte function and the contructor\n");
	cout << miguelGoodObject.getString() << "\n";

	//this creates another object that its own set of variables. so miguelGoodObject has its variables (good_name)
	// and miguelGoodObject2 has its own variables (good_name)
	miguelClass miguelGoodObject2("Seeting the goodname variable for object 2\n");
	cout << miguelGoodObject2.getString() << "\n";
	system("pause");
	return 0;
}
