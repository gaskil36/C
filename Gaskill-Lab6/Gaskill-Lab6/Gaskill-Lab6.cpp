/***************************************************************
* Name: Benjamin Gaskill
* Course: Computer Science & Programming
* Class: CS04103 Section: 2
* Assignment Date: 10/27/20
* File Name: Gaskill-Lab6.cpp
*****************************************************************
* ID: Lab 6 Problem 1
* Purpose: This program is designed to act as a grade recording
* management system, with the ability to enter, adjust, and display
* student information such as name, id, class id, and grades.
*****************************************************************/

#include <iostream>
#include "RowanGrade.h"
#include <string>
#include <stdlib.h>
#include <iomanip>

using namespace std;

// Struct Creation
struct studentStruct
{
	string studentName;
	int classID;
	float studentGrade;
};

// An object of the struct is created
studentStruct studentInfo[3];

// Function Prototype
void enterInfo(struct studentStruct[]);
void adjustInfo(struct studentStruct[]);
void displayInfo(struct studentStruct[]);

int main()
{
	// Variable declarations
	int option;
	RowanGrade obj;

	// Program will remain in the menu until a valid choice is selected by the user. 
	do
	{
		// Initalization of the menu using the RowanGrade class
		system("clear");
		obj.menuScreen();
		cin >> option;

		// While loop to ensure a valid option is selected
		while (option < 1 || option > 4)
		{
			cout << "\nINVALID OPTION: Valid options are 1 to 4, please press the <c> + <enter> key to try again";
			system("pause");
			obj.menuScreen();
			cin >> option;
		}

		// This switch statement manages the options a user has on the main menu 
		switch (option)
		{
		case 1:
			enterInfo(studentInfo);
			break;
		case 2:
			adjustInfo(studentInfo);
			break;
		case 3:
			displayInfo(studentInfo);
			break;
		}

	} while (option != 4);
	cout << "\nThank you for using the grades recording system!";
}

// Fuction to control the entry of informtion, including name, class ID, and grade
void enterInfo(studentStruct studentInfo[])
{
	cout << "********************************************************************************" << endl;
	cout << "*                          Student Information Module                          *" << endl;
	cout << "********************************************************************************" << endl;

	for (int i = 0; i < 3; i++)
	{
		cout << " " << endl;
		cout << "Student ID: " << i + 1 << endl;
		cin.ignore();
		cout << "Student Full Name: ";
		getline(cin, studentInfo[i].studentName);

		cout << "Class ID: ";
		cin >> studentInfo[i].classID;

		cout << "Student Grade: ";
		cin >> studentInfo[i].studentGrade;
	}
}

// Fuction to control the adjustment of a specific student's grade
void adjustInfo(studentStruct studentInfo[])
{
	int x;

	cout << "********************************************************************************" << endl;
	cout << "*                            Grades Adjustment Module                          *" << endl;
	cout << "********************************************************************************" << endl;

	cout << "Please enter the student ID: ";
	cin >> x;

	cout << "The Student name is: " << studentInfo[x - 1].studentName << endl;
	cout << "The Class ID is: " << studentInfo[x - 1].classID << endl;
	cout << "The Student old grade is: " << studentInfo[x - 1].studentGrade << endl;

	cout << "\nPlease enter the new grade: ";
	cin >> studentInfo[x - 1].studentGrade;
}

// Fuction to display all collected information to the screen
void displayInfo(studentStruct studentInfo[])
{
	cout << "**********************************************************************" << endl;
	cout << "*					     Report of Student Grades					  *" << endl;
	cout << "**********************************************************************" << endl;

	for (int y = 0; y < 3; y++)
	{
		cout << "\nStudent ID: " << y + 1 << endl;
		cout << "Student Full Name: " << studentInfo[y].studentName << endl;
		cout << "Class ID: " << studentInfo[y].classID << endl;
		cout << "Student Grade: " << studentInfo[y].studentGrade << endl;
	}
	cout << "Press the c and enter keys to return to the menu." << endl;
	system("pause");
}