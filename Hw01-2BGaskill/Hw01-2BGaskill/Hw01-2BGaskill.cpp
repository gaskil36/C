/***************************************************************
* Name: Benjamin Gaskill
* Course: Computer Science & Programming
* Class: CS04103 Section: 2
* Assignment Date: 09/17/20
* File Name: Hw01-2Bgaskill.cpp
*****************************************************************
* ID: Homework 1 Problem 2
* Purpose: This program will calculate the sales tax, given a total price
*****************************************************************/

#include <iostream>
using namespace std;

int main()
{
	// Variable Declaration
	int purchase = 95;
	float stateTax = 0.065;
	float countyTax = 0.02;

	//* Calculations with new variables to store the values 
	float calcStateTax = purchase * stateTax;
	float calcCountyTax = purchase * countyTax;
	float totalTax = calcStateTax + calcCountyTax;

	// Final calculation of total price including both taxes
	float totalPrice = purchase + totalTax;

	cout << "The purchase price is: $" << purchase << endl;
	cout << "The total tax is: $" << totalTax << endl;
	cout << "The total price is: $" << totalPrice << endl;
}
