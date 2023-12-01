/***************************************************************
* Name: Benjamin Gaskill
* Course: Computer Science & Programming
* Class: CS04103 Section: 2
* Assignment Date: 10/8/2020
* File Name: Hw-04-1BGaskill.cpp
*****************************************************************
* ID: Homework 4 Problem 1
* Purpose: This program is designed to display the characters for 
* each ASCII code 32 through 127, with 16 characters on each line.
*****************************************************************/

#include <iostream>
using namespace std;

int main()
{
	// Variable declarations
	int count;
	
	// Loop performed and results displayed to the screen	
	cout << "These are the ASCII values 32 through 127 represented as characters:";

	for (count = 32; count <= 127; count++)
	{
		cout << char(count) << " ";

		if (count % 16 == 00)
			cout << endl;
	}	
}