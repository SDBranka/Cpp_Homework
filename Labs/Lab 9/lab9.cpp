/*
  * Programmer: Sam Branka
  * Course: COSC 246, Winter 2016
  * Lab: 9
  * Due Date: 3/31/2016
  * Description:  This program assigns numbers to an array, then displays the array contents, 
  *               then displays the index of the smallest value of the array, then allows the 
  *               user to select a slice of the array to display
  */

#include <iostream>
#include <cmath>   // includes library that allows sqrt
#include <cstdlib> // includes library that allows pow and rand
#include <ctime>   // includes computer time
#include <fstream> // includes i/o stream
#include <cctype>  // includes toupper/tolower
#include <string>
using namespace std;

void displayHeading();			 //displays project information
void print(int[], int, int);	 //displays array content
int indexOfSmallest(int[], int); //returns index of smallest value in array
void slice(int[], int, int, int);

int main()
{
	int array[20], pL = 5, position, s = 20, sliceSize, smallIndex;
	string playAgain;

	srand(time(0));

	displayHeading(); //displays project information
	do
	{
		for (int i = 0; i < 20; i++)
		{
			array[i] = 10 + (rand() % 91);
		}
		print(array, s, pL);					//displays array content
		smallIndex = indexOfSmallest(array, s); //returns index of smallest value in array
		cout << "\nThe index of the smallest element is: "
			 << smallIndex
			 << "\n\nEnter the starting position of the slice: ";
		cin >> position;
		cout << "Enter the size of the slice: ";
		cin >> sliceSize;
		slice(array, s, position, sliceSize);

		cout << "\n\nDo it again, yes (or no)? ";
		cin >> playAgain;

	} while (playAgain == "yes" || playAgain == "Yes" || playAgain == "YES");
	return 0;
}

void displayHeading() //Displays the heading to the program
{
	cout << "Programmer: Sam Branka\n"
		 << "Course:     COSC246, Winter 2016\n"
		 << "Lab #:      9\n"
		 << "Due Date:   3-31-16\n";
}

void print(int array[], int size, int perLine) //displays array content
{
	cout << "\nThe array contains:\n";
	for (int i = 1; i <= size; i++)
	{
		cout << array[i - 1] << "\t";
		if (i % perLine == 0)
			cout << "\n";
	}
}

int indexOfSmallest(int array[], int size) //returns index of smallest value in array
{
	int index, small = 101;

	for (int i = 0; i < size; i++)
	{
		if (array[i] < small)
		{
			small = array[i];
			index = i;
		}
	}
	return index;
}

void slice(int array[], int size, int p, int s)
{
	for (int i = p; i <= p + s; i++)
	{
		if (i > size - 1)
			cout << array[i - (size)] << "\t";
		else
			cout << array[i] << "\t";
	}
}
