// ApplicationWithArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

void print_array(int array[], int size)
{	// whan you pass an array to a function, the function does not know the size of array unless passed
	for (int i = 0; i < size; i++)
	{
		cout << "element: "<< i+1 << " " << array[i] << endl;
	}

}

int main()
{
	int guesses[] = { 10, 23, 34, 45, 53};
	int size = sizeof(guesses) / sizeof(guesses[0]); // device this because the size of the size of the array in memory is
													// 5 time bigger than the size of each of its elements.
	print_array(guesses, size);


	return 0;
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
