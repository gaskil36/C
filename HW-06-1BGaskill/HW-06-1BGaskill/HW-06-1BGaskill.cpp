/***************************************************************
* Name: Benjamin Gaskill
* Course: Computer Science & Programming
* Class: CS04103 Section: 2
* Assignment Date: 11/5/2020
* File Name: HW-06-1BGaskill.cpp
*****************************************************************
* ID: Homework 6 Problem 1
* Purpose: This program is designed to calculate the total price 
* of a hospital stay, depending on whether the patient was an 
* inpatient or an outpatient.
*****************************************************************/

#include <iostream>
#include <string>
using namespace std;

// Function prototype declaration
void menuScreen();
void inPat();
void outPat();
void validate();
float calcTotal(int, float, float, float);
float calcTotal(float, float);

// Global Variable Declarations

int days, answer;
float rate, inService, outService, inMed, outMed;

int main()
{
	// Displays the main menu of the program
	menuScreen();

	// This loop will continue until the user selects an inpatient or out patient, or ends the program using the sentinel value 999
	while (answer != 1 || answer != 2)
	{
		cout << "\nPlease press 1 to admit as an inpatient. Press 2 to admit as an outpatient. ";
		cin >> answer;

		if (answer == 1)
		{
			inPat();
			cout << "\nThe total charge for the inpatient is: $" << calcTotal(days, rate, inService, inMed) << endl;
		}

		if (answer == 2)
		{
			outPat();
			cout << "\nThe total charge for the outpatient is: $" << calcTotal(outService, outMed) << endl;
		}	

		if (answer == 999)
		{
			break;
		}
	}
	cout << "\nThank you for using the hospital patient system!" << endl;
}

// Displays the main menu of the program
void menuScreen()
{
	cout << "****************************************************************************" << endl;
	cout << "*                          Welcome to the hospital                         *" << endl;
	cout << "****************************************************************************" << endl;
}

// Collects input for the inpatient if it is selected by the user
void inPat()
{
	cout << "\nPlease input the following data for the inpatient" << endl;
	cout << "\nNumber of days spent in the hospital: ";
	cin >> days;
	cout << "\nDaily rate: ";
	cin >> rate;
	cout << "\nCharges for the hospital services: ";
	cin >> inService;
	cout << "\nHospital medication charges: ";
	cin >> inMed;

	// Checks to ensure that no input value is less than zero
	validate();
}

// COllects user input for the outpatient if it is selected by the user
void outPat()
{
	cout << "\nPlease input the following data for the outpatient" << endl;
	cout << "\nCharges for the hospital services: ";
	cin >> outService;
	cout << "\nHospital medication charges: ";
	cin >> outMed;
	
	// Checks to ensure that no input value is less than zero
	validate();
}

// Checks to ensure that no input value is less than zero. It will ask the user for input again if an invalid value is entered
void validate()
{
	if (answer == 1 && (days < 0 || rate < 0 || inService < 0 || inMed < 0 || outService < 0 || outMed < 0))
	{
		cout << "\nOne or more of your inputs are invalid. Please ensure that the values are no less than zero." << endl;
		inPat();
	}

	if (answer == 2 && (days < 0 || rate < 0 || inService < 0 || inMed < 0 || outService < 0 || outMed < 0))
	{
		cout << "\nOne or more of your inputs are invalid. Please ensure that the values are no less than zero." << endl;
		outPat();
	}
}

// Calculates the total charges for the inpatient
float calcTotal(int days, float rate, float inService, float inMed)
{
	float total;

	total = (days * rate) + inService + inMed;
	
	return total;
}

// Calculates the total charges for the outpatient
float calcTotal(float outService, float outMed)
{
	float total;
	
	total = outService + outMed;

	return total;
}