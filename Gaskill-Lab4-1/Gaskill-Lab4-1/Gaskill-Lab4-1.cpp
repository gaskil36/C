/***************************************************************
* Name: Benjamin Gaskill
* Course: Computer Science & Programming
* Class: CS04103 Section: 2
* Assignment Date: 10/06/2020
* File Name: Gaskill-Lab4-1.cpp
*****************************************************************
* ID: Lab 4 Problem 1
* Purpose: This program is designed to collect the votes of the 
* people for the next President of the United States. The user 
* enter integers representing the candidate and the results will
* be displayed to the screen and stored in a file.
*****************************************************************/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	// Variable declarations for speed, distance, time, and user input
	int vote;
	int bidenVote = 0;
	int trumpVote = 0;

	cout << "Welcome to Election Day 2020!";

	do
	{
		cout << "\nPlease select (1) to vote for Donald Trump. Select (2) to vote for Joe Biden:";
		cin >> vote;

		while ((vote < 1 || vote > 2) && vote != 999)
		{
			cout << "The vote is invalid, please enter 1 or 2:";
			cin >> vote;
		}

		if (vote == 1)
		{
			trumpVote = trumpVote + 1;
		}

		else if (vote == 2)
		{
			bidenVote = bidenVote + 1;
		}
	} while (vote != 999);

	cout << "Results: " << "\nJoe Biden: " << bidenVote << "\nDonald Trump: " << trumpVote;

	ofstream writeFile;
	writeFile.open("Votes.txt");
	writeFile << "Results: " << "\n Joe Biden: " << bidenVote << "\n Donald Trump: " << trumpVote;
	writeFile.close();
}