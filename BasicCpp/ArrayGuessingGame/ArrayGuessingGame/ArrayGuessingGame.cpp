// ArrayGuessingGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

void print_Array(int array[], int count)
{
	for (int i = 0; i < count; i++)
	{
		cout << array[i] << "\t";
	}
}

void play_game()
{
	int guesses[251];
	int guesses_count = 0;
	int random = rand() % 251;
	cout << "Guess a number: ";
	
	while (true)
	{
		int guess;
		cin >> guess;
		guesses[guesses_count++] = guess;

		if (guess == random)
		{
			cout << "You Win!" << endl;
			break;
		}
		else if (guess < random)
		{
			cout << "Too Small\n";
		}
		else
		{
			cout << "Too High\n";
		}
	}

	print_Array(guesses, guesses_count);
}


int main()
{
	int num = 0;
	cout << "Enter a number to play:" << endl;
	cout << "1. Play" << endl;
	cout << "0. End Game" << endl;

	cin >> num;

	switch (num)
	{
	case 0:
		cout << "Nothing to do\n";
		break;

	case 1:
		cout << "Let's Play\n";
		play_game();
		break;

	default:
		cin.ignore(numeric_limits<::streamsize>::max(), '\n');
		cout << "Incorrect Choice\n";
		break;	
	}
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
