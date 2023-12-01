/***************************************************************
* Name: Benjamin Gaskill
* Course: Computer Science & Programming
* Class: CS04103 Section: 2
* Assignment Date: 10/15/2020
* File Name: HW-05-1BGaskill.cpp
*****************************************************************
* ID: Homework 5 Problem 1
* Purpose: This program is designed to calculate the projected 
* population at the end of each year, given the starting size, 
* birth and death rates, and the number of years. 
*****************************************************************/

#include <iostream>
using namespace std;

// Function prototype declaration
void dataCollection();
void popCalc(int, float, float);

// Global variable declarations
int years;
int newPop;
int startSize;
float birthRate;
float deathRate;

int main()
{
	// Population data collection fuction called
	dataCollection();

	// New population calculation fuction called
	popCalc(startSize, birthRate, deathRate);
}

// This function will collect, from the user, the starting size, birth rate, death rate, and number of years
void dataCollection()
{
		cout << "Please input the following information to calculate the projected population at the end of each year:" << endl << "\nStarting size of a population: ";
		cin >> startSize;

		cout << "\nAnnual birth rate: ";
		cin >> birthRate;

		cout << "\nAnnual death rate: ";
		cin >> deathRate;
		
		cout << "\nNumber of years: ";
		cin >> years;

		if (startSize < 2)
		{
			cout << "\nInvalid input. " << "Please re-enter a number with a minimum value of 2";
		}

		if (years < 1)
		{
			cout << "\nInvalid input. " << "Please re-enter a number with a minimum value of 1";
		}	
}

// This function will calculate the projected population for each year and display it on the screen 
void popCalc(int P, float B, float D)
{
	if (startSize >= 2 && years >= 1)
	{
		newPop = P * (1 + B) * (1 - D);
		cout << "\nYear: " << (years - years) + 1 << endl;
		cout << "Starting  population: " << P << endl;
		cout << "Projected population: " << newPop << endl;

		if (years > 1)
		{
			for (int i = 2; i <= years; i++)
			{
				cout << "\nYear: " << i << endl;
				cout << "Starting  population: " << newPop << endl;
				newPop = newPop * (1 + B) * (1 - D);
				cout << "Projected population: " << newPop << endl;
			}
		}
	}
}