/***************************************************************
* Name: Benjamin Gaskill
* Course: Computer Science & Programming
* Class: CS04103 Section: 2
* Assignment Date: 09/15/2020
* File Name: Gaskill-Lab1-2.cpp
*****************************************************************
* ID: Lab 1 Problem 2
* Purpose: This program is designed to calculate the percent of 
* customers, given an itial amount, that purchased one or more 
* energy drinks per week. It then calculates the percentage of 
* those people that have purchased citrus-flavored energy drinks. 
*****************************************************************/

#include <iostream>
using namespace std; 

int main()
{
	//Variable declarations
	float customerCount = 16500;
	float morePercent = 0.15;
	float citrusPercent = 0.52;

	//Calculations performed
	float moreCustomers = customerCount * morePercent;
	float citrusCustomers = moreCustomers * citrusPercent;

	//Results displayed to the screen
	cout << "There are " << moreCustomers << " customers that purchased one or more energy drinks per week." << endl;
	cout << "Of those customers, " << citrusCustomers << " customers purchased citrus-flavored energy drinks.";
}