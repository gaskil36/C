/***************************************************************
* Name: Benjamin Gaskill
* Course: Computer Science & Programming
* Class: CS04103 Section: 2
* Assignment Date: 09/15/2020
* File Name: Gaskill-Lab1-1.cpp
*****************************************************************
* ID: Lab 1 Problem 1
* Purpose: This program is designed to calculate the payment, given a salary, if I am paid every two weeks or twice a month .
*****************************************************************/

#include <iostream>
using namespace std;

int main()
{
	// Declaring variables
	float salary = 39000;
	float twiceMonth = 24;
	float twiceWeek = 26;

	// Making calculations
	float grossTwiceMonth = salary / twiceMonth; 
	float grossTwiceWeek = salary / twiceWeek;

	//Presenting output to the screen
	cout << "The gross salary for checks sent twice a month is $" << grossTwiceMonth << ", and the gross salary for checks sent twice a week is $" << grossTwiceWeek;
}