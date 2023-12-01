/***************************************************************
* Name: Benjamin Gaskill
* Course: Computer Science & Programming
* Class: CS04103 Section: 2
* Assignment Date: 10/13/2020
* File Name: Gaskill-Lab5-1.cpp
*****************************************************************
* ID: Lab 5 Problem 1
* Purpose: This program is designed to calculate the most fuel
* efficient plane out of three planes. The user must input the 
* make, model, fuel consumed, and distance.
*****************************************************************/

#include <iostream>
using namespace std;
#include <string>

// Function Prototype Declarations
float calcMPG(float, float);
void dataCollection();
void mpgComparison();

// Global variable declarations for three airplanes' make, model, and fuel 
string make1, make2, make3;
string model1, model2, model3;
float fuel1, fuel2, fuel3;
float distance1, distance2, distance3;
float mpg1, mpg2, mpg3;

int main()
{
	// Plane Data Collection Fuction Called
	dataCollection();

	// Plane 1 Fuction Called
	mpg1 = calcMPG(distance1, fuel1);

	// Plane 2 Function Called
	mpg2 = calcMPG(distance2, fuel2);

	// Plane 3 Fuction Called
	mpg3 = calcMPG(distance3, fuel3);

	// MPG Comparison Function Called
	mpgComparison;
}

// This function will compare the mpgs and display the most efficient airplane
void mpgComparison()
{
	if (mpg1 > mpg2 && mpg1 > mpg3)

		cout << "\nThe " << make1 << " " << model1 << " is the most fuel efficient at " << mpg1 << " miles per gallon." << endl;

	if (mpg2 > mpg1 && mpg2 > mpg3)
		cout << "\nThe " << make2 << " " << model2 << " is the most fuel efficient at " << mpg2 << " miles per gallon." << endl;

	if (mpg3 > mpg1 && mpg3 > mpg2)
		cout << "\nThe " << make3 << " " << model3 << " is the most fuel efficient at " << mpg3 << " miles per gallon." << endl;
}

// This function will collect the make, model, fuel, and distance for each of the three planes
void dataCollection()
{
	// Plane 1 data collection
	cout << "Please input the following information for the first airplane:" << endl << "\nMake: ";
	cin >> make1;

	cout << "\nModel: ";
	cin >> model1;

	cout << "\nFuel used (gallons): ";
	cin >> fuel1;

	cout << "\nDistance flown (miles): ";
	cin >> distance1;

	// Plane 2 data collection
	cout << "\n" << "\nPlease input the following information for the second airplane:" << endl << "\nMake: ";
	cin >> make2;

	cout << "\nModel: ";
	cin >> model2;

	cout << "\nFuel used (gallons): ";
	cin >> fuel2;

	cout << "\nDistance flown (miles): ";
	cin >> distance2;

	// Plane 3 data collection
		cout << "\n" << "\nPlease input the following information for the third airplane:" << endl << "\nMake: ";
	cin >> make3;

	cout << "\nModel: ";
	cin >> model3;

	cout << "\nFuel used (gallons): ";
	cin >> fuel3;

	cout << "\nDistance flown (miles): ";
	cin >> distance3;
}

// This function will calculate and return the miles per gallon for each plane
float calcMPG(float distance, float fuel)
{
	 float mpg = distance / fuel;
	 return mpg;
}