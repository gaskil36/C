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
#include <iomanip>

int main()
{
	// Variable declarations for speed, distance, time, and user input
	const float air = 1100;
	const float water = 4900;
	const float steel = 16400;

	string input;
	float distance;
	float time;

	// User input collected
	cout << "Please select one of the following: air, water, or steel:" << endl;
	cin >> input;

	cout << "Please enter the number of feet a sound wave will travel in the medium:" << endl;
	cin >> distance;

	// Based on user input, calculations are performed and results are displayed to the screen
	if (input == "air")
	{
		time = distance / air;
		cout << "It will take " << setprecision(4) << time << " seconds for sound to travel " << distance << " feet through air" << endl;
	}

	if (input == "water")
	{
		time = distance / water;
		cout << "It will take " << setprecision(4) << time << " seconds for sound to travel " << distance << " feet through water" << endl;
	}

	if (input == "steel")
	{
		time = distance / steel;
		cout << "It will take " << setprecision(4) << time << " seconds for sound to travel " << distance << " feet through steel" << endl;
	}
}