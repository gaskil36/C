/***************************************************************
* Name: Benjamin Gaskill
* Course: Computer Science & Programming
* Class: CS04103 Section: 2
* Assignment Date: 10/8/2020
* File Name: Hw-04-2BGaskill.cpp
*****************************************************************
* ID: Homework 4 Problem 2
* Purpose: This program is designed to display the total distance
* traveled by a vehicle each hour, given speed and time by user. 
*****************************************************************/

#include <iostream>
using namespace std;

int main()
{
	// Variable declarations
	int count;
	int speed;
	int time;
	int distance;

	int calcTime;
	//int calcDistance;

	// Input collected and assigned to variables

	cout << "Please enter the speed of the vehicle in MPH: ";
	cin >> speed;

	cout << "\nPlease enter the amount of hours the vehicle traveled: ";
	cin >> time;

	// Loop performed and results displayed to the screen	
	cout << endl; 
	cout << "Hour               Miles Traveled" << endl;
	cout << "---------------------------------" << endl;

	for (count = 1; count <= time; count++)
	{
		calcTime = (time - time) + count;
		distance = speed * calcTime;
		//calcDistance = distance;
		cout << calcTime;
		cout << "                       ";
		cout << distance << endl;
	}
}