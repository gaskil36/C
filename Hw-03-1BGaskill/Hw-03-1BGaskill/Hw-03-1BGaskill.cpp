/***************************************************************
* Name: Benjamin Gaskill
* Course: Computer Science & Programming
* Class: CS04103 Section: 2
* Assignment Date: 10/1/2020
* File Name: Hw-03-1BGaskill.cpp
*****************************************************************
* ID: Homework 3 Problem 1
* Purpose: This program is designed to calculate the area of two 
* rectangles. The user input of lengths and widths are collected,
* and the program compared the areas and displays the result.
*****************************************************************/

#include <iostream>
using namespace std;

int main()
{
	// Variable declarations
	float length1;
	float width1;
	float length2;
	float width2;

	float rectangle1;
	float rectangle2;

	// User input collected
	cout << "\n Enter the length of the first rectangle: ";
		cin >> length1;
	cout << "\n Enter the width of the first rectangle: ";
		cin >> width1;
	cout << "\n Enter the length of the second rectangle: ";
		cin >> length2;
	cout << "\n Enter the width of the second rectangle: ";
		cin >> width2;

	// Calculations performed and results displayed to the screen
	rectangle1 = (length1 * width1);
	rectangle2 = (length2 * width2);

	if (rectangle1 < rectangle2)
	{
		cout << "\n The area of the second rectangle is greater";
	}

	if (rectangle1 > rectangle2)
	{
		cout << "\n The area of the first rectangle is greater";
	}

	else
	{
		cout << "\n The areas of these rectangles are equal";
	}
}