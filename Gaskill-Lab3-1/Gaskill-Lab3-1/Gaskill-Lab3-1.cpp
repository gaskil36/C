/***************************************************************
* Name: Benjamin Gaskill
* Course: Computer Science & Programming
* Class: CS04103 Section: 2
* Assignment Date: 09/29/2020
* File Name: Gaskill-Lab3-1.cpp
*****************************************************************
* ID: Lab 3 Problem 1
* Purpose: This program is a change-counting game that will ask 
* the user to enter what coins to use to make exactly one dollar,
* using pennies, nicke;s, dimes, and quarters.
*****************************************************************/

#include <iostream>
using namespace std;
#include <string>

int main()
{
	// Variable declarations
	const float penny = .01;
	const float nickel = .05;
	const float dime = .1;
	const float quarter = .25;

	int pennyAmt;
	int nickelAmt;
	int dimeAmt;
	int quarterAmt;

	// User input collected
	cout << "The goal of this game is to make exactly one dollar:" << endl;
	cout << "How many pennies? " << endl;
		cin >> pennyAmt;
	cout << "How many nickels?" << endl;
		cin >> nickelAmt;
	cout << "How many dimes?" << endl;
		cin >> dimeAmt;
	cout << "How many quarters?" << endl;
		cin >> quarterAmt;

	// Calculations performed and results displayed to the screen
	float totalValue = (pennyAmt * penny) + (nickelAmt * nickel) + (dimeAmt * dime) + (quarterAmt * quarter);
	
	if (totalValue == 1.00)
	{
		cout << "Congratulations! You have won the game!" << endl;

	}

	else if (totalValue < 1.00)
	{
		cout << "You have lost. The amount entered, " << totalValue << ", totals less than one dollar." << endl;
	}

	else 
	{
	    cout << "You have lost. The amount entered, " << totalValue << ", totals more than one dollar." << endl;
	}		
}