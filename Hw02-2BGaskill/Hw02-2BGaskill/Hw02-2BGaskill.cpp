/***************************************************************
* Name: Benjamin Gaskill
* Course: Computer Science & Programming
* Class: CS04103 Section: 2
* Assignment Date: 09/24/2020
* File Name: Hw02-1BGaskill.cpp
*****************************************************************
* ID: Homework 2 Problem 2
* Purpose: This program will ask the user to input temperature 
* data in Celsius. It then convert that value to Fehrenheit
*****************************************************************/

#include <iostream>
using namespace std;

int main()
{
	// Variable Declaration
	float fahrenheit;
	float celsius;
	const int b = 32;

	// Collection of User Input
	cout << "Please enter the temperature in Celsius: ";
	cin >> celsius;
	
	// Calculations for Conversion from Celsius to Fahrenheit
	fahrenheit = (1.8 * celsius) + b;

	// Results displayed to screen
	cout << "That temperature in fahrenheit is " << fahrenheit << " degrees";
}