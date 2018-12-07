// using_variables_in_clases.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class miguelClass {
	//private classes variables are only accessible from within the class, nit from the main()
	//so a functions needs to be written to access them from within ht emain()

	public:
		void setString(string str) {
			good_name = str;
		}
		string getString() {
			return good_name;
		}
	//for good example
	private:
		string good_name;



	//for bad example
	public:
		string name;
	   
};


int main()
{
    //using variable in class incorrectly- not good programming practice
	//Thet is because its of best practice to use variabnles in Classes as priveate, and this variable here is public.
	miguelClass miguelObject;

	miguelObject.name = "Miguel Naranjo";
	cout << miguelObject.name << endl;

	//doing teh same ting again, but in the correct way
	miguelClass miguelGoodObject;
	miguelGoodObject.setString("This is the new name: Miguel A Naranjo");
	cout << miguelGoodObject.getString() << "\n";

	return 0;
}
