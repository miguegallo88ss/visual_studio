// ReturnBreak.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string sentence = "Hello my name is MIguel";
	for (int i = 0; i < sentence.size(); i++) 
	{
		cout << sentence[i] << endl;
		if (sentence[i] == 'o')
		{
			cout << "gound O \n";
			break;  // breaks out of the for loop
			
		}
	}

	for (int i = 0; i < sentence.size(); i++)
	{
		
		if (sentence[i] == 'o')
		{
			continue;  // continues to the next iteration of loop
			cout << "gound O \n";
		}
		cout << sentence[i] << endl;
	}

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
