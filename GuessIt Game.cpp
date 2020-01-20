/*
	Author: Hamza Amjad
	Project: Guess It
	Language: C++

	Copyright © 2019 Hamza Amjad All Rights Reserved
*/


#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

int main()
{
	// for random character
	srand(time(0));


	// Declaring variables to be used in this project
	int x = 99;
	char user;
	char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char letters2[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char specialCh = letters2[rand() % 52];
	

	// Loop
	while (x >= 0)
	{

		char d = letters[rand() % 52];
		if (x % 9 == 0)
		{
			cout << setw(5) << x << ":" << specialCh;
		}
		else
		{
			cout << setw(5) << x << ":" << d;
		}

		if (x % 10 == 0)
		{
			cout << endl;
		}
		--x;
	}
	//Printing Headers
	cout << "1. Choose any two-digit number in the table above (e.g. 73)." << endl;
	cout << "2. Subtract its two digits from itself (e.g. 73 - 7 - 3 = 63)" << endl;
	cout << "3. Find this new number (e.g. 63) and remember the letter next to it." << endl;
	cout << "Now press 'r' and I'll read your mind...";
	cout << endl;
	// Get Input from user
	cin >> user;
	cout << endl;

	// Handling different conditions
	if (user == 'r')
	{
		cout << "You Selected the Character " << "*" <<specialCh << "*" <<endl;
		cout << endl;
		cout << "Press c to continue or press any key to exit: ";
		cin >> user;
		if (user == 'c')
		{
			main();
		}
		else
		{
			exit(0);
		}
	}
	else if (user == 'x')
	{
		cout << "Exiting ...." << endl;
		exit(0);
	}
	else
	{
		cout << endl;
		cout << "Wrong Input.. Try Again" << endl;
		cout << endl;
		main();
	}
	
}