/***************************************************************
* Name: Benjamin Gaskill
* Course: Computer Science & Programming
* Class: CS04103 Section: 2
* Assignment Date: 09/24/2020
* File Name: Hw02-1BGaskill.cpp
*****************************************************************
* ID: Homework 2 Problem 1
* Purpose: This program will ask the user to enter their monthly 
* costs for housing related expenses, including rent/mortgage, 
* phones, internet service, and cable. It will display the total
* cost, both monthly and annually.
*****************************************************************/

#include <iostream>
using namespace std;

int main()
{
	// Variable Declaration
	float rent;
	float phone;
	float internet;
	float cable;

	float totalMonthly;
	float totalAnnual;


	// Collection of User Input
	cout << "Please enter your monthly costs for each of the following expenses: " << "\n Rent: ";
		cin >> rent;
	cout << "\n Phones: ";
		cin >> phone;
	cout << "\n Internet: ";
		cin >> internet;
	cout << "\n Cable: ";
		cin >> cable;

	// Calculations for Monthly Total and Annual Total
	totalMonthly = rent + phone + internet + cable;
	totalAnnual = totalMonthly * 12;

	// Results displayed to screen
	cout << "Your total monthly cost is: $" << totalMonthly << " per month" << "\nYour total annual cost is: $" << totalAnnual << " per year";
}
