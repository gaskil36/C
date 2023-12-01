/***************************************************************
* Name: Benjamin Gaskill
* Course: Computer Science & Programming
* Class: CS04103 Section: 2
* Assignment Date: 09/22/2020
* File Name: Gaskill-Lab2-2.cpp
*****************************************************************
* ID: Lab 2 Problem 2
* Purpose: This program is designed to calculate the annual property 
* that a senior in Madicon County will pay as part of their quarterly 
* tax bill, given the inital property value and the current tax rate.
*****************************************************************/

#include <iostream>
using namespace std;
#include <iomanip>

int main()
{
	//Variable declarations 
	float exempt = 5000;

	//User input for the assessed value of your property
	float homeValue;
	cout << "Enter the assessed value of your property ";
	cin >> homeValue;

	//User input for the current property tax rate
	float taxRate;
	cout << "Enter the current property tax rate for each $100 of the assessed value ";
	cin >> taxRate;

	//Calculation of property tax
	float exemptCalc = homeValue - exempt;
	float propertyTax = (exemptCalc / 100) * taxRate;

	//Calculation of quarterly payment
	float quarterPay = propertyTax / 4;

	//Total income from the tickets displayed with the correct precision and format
	cout << "Your annual property tax is: $" << setprecision(2) << showpoint << fixed << propertyTax << endl;
	cout << "Your quarterly tax bill is: $" << quarterPay;
}