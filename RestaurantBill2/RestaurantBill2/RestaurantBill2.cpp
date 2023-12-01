/***************************************************************
* Name:  Benjamin Gaskill
* Course: Computer Science & Programming
* Class: CS04103 Section: 2
* Assignment Date: 09/08/20
* File Name: RestaurantBill.cpp
*****************************************************************
* ID: Lab 1 chapter 2
* Purpose: This program acomputes the tax and tip on a restaurant bill for a patron with a $44.50
meal charge. The tax should be 6.75 percent of the meal cost. The tip should be 15 percent of
the total after adding the tax. Display the meal cost, tax amount, tip amount, and total bill on the
screen.
*****************************************************************/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	// Variables declaration 
	const float Tax = 6.75;
	float Tip_Percent = 0;
    float Meal_Cost = 44.30;
	float TotalMeal = 0;
	float TipCalculation = 0;
	float TaxCalculation = 0;

	//Requesting Input from the end user;

	cout << "Please enter value of the meal: ";
	cin >> Meal_cost;
	cout << "Please enter the % of the tip: ";
	cin >> Tip_Percent;



	//Calculations
	TaxCalculation = (((Meal_Cost * Tax) / 100));
	TipCalculation = (((Meal_Cost + TaxCalculation) * Tip_Percent) / 100);
	TotalMeal = Meal_Cost + TaxCalculation + TipCalculation;


	//Displaying results in the screen. 
	cout << "The meal cost is: $" << Meal_Cost << endl << "The Tax amount is: $" << TaxCalculation << endl <<
		"The tip amount is: " << TipCalculation << endl;

	cout setprecision(4) << "The total amount for the meal is: $" << TotalMeal << endl;

	// Calculating odd or even number;
	TotalMeal = round(TotalMeal);
	if (int(TotalMeal) % 2 == 0)
		cout << "The Result is even" << endl;
	else
		cout << "The Result is odd" << endl;


	return 0;
}