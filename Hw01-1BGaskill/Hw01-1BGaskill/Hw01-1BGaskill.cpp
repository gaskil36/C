/***************************************************************
* Name: Benjamin Gaskill
* Course: Computer Science & Programming
* Class: CS04103 Section: 2
* Assignment Date: 09/17/2020
* File Name: Hw01-1BGaskill.cpp
*****************************************************************
* ID: Homework 1 Problem 1
* Purpose: This program will calculate how much the East Coast Division
           will generate given its total sales and a generation percentage.
*****************************************************************/

#include <iostream>
using namespace std;

int main()
{
   // Variable Declaration
   float percentage = 0.58;
   int sales = 8600000;

   // Calculations
   int generation = sales * percentage;

   // Results displayed to screen
   cout << "The East Coast division will generate $" << generation << " in sales this year.";
}
