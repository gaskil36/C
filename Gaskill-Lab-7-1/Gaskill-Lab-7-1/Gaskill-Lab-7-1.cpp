/***************************************************************
* Name: Benjamin Gaskill
* Course: Computer Science & Programming
* Class: CS04103 Section: 2
* Assignment Date: 11/3/2020
* File Name: Lab 7.cpp
*****************************************************************
* ID: Lab 7 Problem 1
* Purpose: This program is an inventory search system that will 
* help Amazon tell their customers if the SKU # of a certain 
* product is carried. It will also tell them if it is in stock.
*****************************************************************/

#include <iostream>
#include <ctime>
#include <string>
using namespace std;

// Global Variable Declaration
int inputNum;

// Stock Struct Declaration
struct stockStruct
{
	int skuNum;
	int qty;
};

// Array of Struct Creation
stockStruct stock[1000];

// Function Prototypes
void welcomeScreen();
void insertRandom(stockStruct[]);
void selectionSort(stockStruct[]);
void binarySearch(stockStruct[], int);

int main()
{
	insertRandom(stock);
	welcomeScreen();

	cout << "Please insert the SKU # for the product you are looking for: ";
		cin >> inputNum;

	selectionSort(stock);
	binarySearch(stock, inputNum);
}

// This function will display the welcome screen, in addition to a sample SKU value for use with testing
void welcomeScreen()
{
	cout << "**************************************************************************" << endl;
	cout << "*            Welcome to the Amazon.com Inventory Search System           *" << endl;
	cout << "**************************************************************************" << endl;
	cout << "The SKU # of the element with subscript 500 is: " << stock[500].skuNum;
	cout << "" << endl << "" << endl;
}

// This function will use a random number generator to fill all 1000 slots with SKU numbers.
// It will also use the random number generator to fill each SKU quantity with a number between 1 and 100.
void insertRandom(stockStruct stock[])
{
// Random number generator
	srand(time(0));
	for (int x = 0; x < 1000; x++)
	{
		stock[x].skuNum = rand() % 99999999 + 1;
		stock[x].qty = rand() % 100 + 1;
	}
}

// This function uses the selection sort method to sort the array of structs in preparation for sorting. 
void selectionSort(stockStruct stock[])
{
	int minIndex;
	int minValue;
	int temp;
	int size = sizeof(stock);

	// Should the swap function be inside the selection sort function? What is the issue here?
	
	
	for (int start = 0; start < (size - 1); start++)
	{
		minIndex = start;
		minValue = stock[start].skuNum;

		for (int index = start + 1; index < size; index++)
		{
			if (stock[index].skuNum < minValue)
			{
				minValue = stock[index].skuNum;
				minIndex = index;
			}
		}
		//swap(stock[minIndex].skuNum, stock[start].skuNum);  
		temp = stock[minIndex].skuNum;
	    stock[minIndex].skuNum = stock[start].skuNum;
		stock[start].skuNum = temp;
		
		// The min index and start should be integers, so why is the swap function not working??? 
		// The swap function takes integers

		//Tells me local function definitions are illegal
			
	}

	
}



// This function uses the binary search method to determine if the user's SKU value is present in the array of structs. 
void binarySearch(stockStruct stock[], int inputNum)
{
	int first = 0;
	int last = 999;
	int middle = 0;
	int position = -1;

	bool found = false;

	while (!found && first <= last)
	{
		middle = (first + last) / 2;

		if (stock[middle].skuNum == inputNum)
		{
			found = true;
			position = middle;
		}

		else if (stock[middle].skuNum > inputNum)
			last = middle - 1;

		else
			first = middle + 1;
	}
	
	if (found == true)
	{
		cout << " The SKU # " << inputNum << " was found in the inventory and the quantity is: " << stock[position].qty << endl;
		cout << "Plese press the <c> and <enter> key to continue";
		system("pause");
	}

	if (found == false)
	{
		cout << "We are sorry, the product corresponding to the SKU # is not carried by Amazon" << endl;
		cout << "Plese press the <c> and <enter> key to continue";
		system("pause");
	}	
}