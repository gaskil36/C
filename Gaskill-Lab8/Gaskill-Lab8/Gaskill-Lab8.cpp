/***************************************************************
* Name: Benjamin Gaskill
* Course: Computer Science & Programming
* Class: CS04103 Section: 2
* Assignment Date: 11/10/20
* File Name: Gaskill-Lab6.cpp
*****************************************************************
* ID: Lab 8 Problem 1
* Purpose: This program is designed to take input for a user
* designated amount of speeds. It will store them in a dynamic
* array, sort the values, and display the average of the speeds.
*****************************************************************/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Function prototype declaration
void menuScreen();
void speedSort(int *, int);
void swap(int *, int *);
void calcAverage(int *, int);

// Global variable declaration
int speeds;
float total;
float average;

int main()
{
	// Displays the main menu of the program
	menuScreen();

	// Collects user input to determine the size of the dynamic array
	cout << "\nPlease enter the number of speeds to store: ";
	cin >> speeds;
	cout << "" << endl;

	// Dynamic memory array creation
	int *speedPtr = new int[speeds];

	// For loop to control the amount of speeds entered, based on the size of the dynamic array
	for (int i = 0; i < speeds; i++)
	{
		cout << "Speed " << i + 1 << ": ";
		cin >> *(speedPtr + i);

		// Input validation: will not accept negative speeds
		while (*(speedPtr + i) < 0)
		{
			cout << "Invalid entry. Please enter a positive numerical value: ";
			cin >> *(speedPtr + i);
		}		
	}

	// Call to fuction that will sort the values in the array
	speedSort(speedPtr, speeds);

	// Call to function that will calculate the average of the values in the array
	calcAverage(speedPtr, speeds);

	cout << "\nThank you for using the speed registration system!" << endl;
}

// Displays the main menu of the program
void menuScreen()
{
	cout << "****************************************************************************" << endl;
	cout << "*                          NJ Motor Division Commision                     *" << endl;
	cout << "*                S P E E D   R E G I S T R A T I O N    S Y S T E M        *" << endl;
	cout << "****************************************************************************" << endl;
}

// Checks to ensure that no input value is less than zero. It will ask the user for input again if an invalid value is entered
void speedSort(int *speedPtr, int size)
{
	double temp;

	bool swaps = true;

	// Loop will run until every value is sorted using the for loop and swap function
	while (swaps)
	{
		swaps = false;

		for (int start = 0; start < size - 1; start++)
		{
			if (*(speedPtr + start) > *(speedPtr + start + 1))
			{
				swap(*(speedPtr + start + 1), *(speedPtr + start));
				swaps = true;
			}
		}
	}
	
	// Prints the sorted speeds 
	cout << "\nThe sorted speeds are:" << endl;
	
	for (int i = 0; i < speeds; i++)
	{
		cout << *(speedPtr + i) << " ";
	}
}

// Swaps two values: for use in the speedSort function to swap values in the array
void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

// Calculates the average, using the values in the array and the total amount of values entered
void calcAverage(int *speedPtr, int size)
{
	double total = 0.0;

	// Gathers the total of the values in the array
	for (int counter = 0; counter < size; counter++)
	{
		total += *(speedPtr + counter);
	}

	// Prints the average 
	cout << "\n" << "\nThe average is: " << setprecision(3) << (double)total / size << endl;
}