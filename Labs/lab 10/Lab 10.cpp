/*
  * Programmer: Sam Branka
  * Course: COSC 246, Winter 2016
  * Lab: 10
  * Due Date: 4/7/2016
  * Description: This program reads in data in from a file and organizes it by population 
  *             
  */

#include <iostream> // includes cin/cout
#include <iomanip>	// includes setw
#include <fstream>	// includes i/o stream
#include <stdlib.h> // includes atoi
using namespace std;

void displayHeading();								   //displays project information
void print(char[][20], char[][3], int[], int);		   //display the elements of the arrays
void copyArray(char[], char[], int);				   //exchanges array elements
void selectionSort(char[][20], char[][3], int[], int); //sorts the arrays in descending order based on population size

int main()
{
	ifstream fin;
	char fileName[21], city[50][20], playAgain, popChar[20], sizeChar[9], state[50][3], symbol;
	int a = 0, b, c, i, population[50], size;

	displayHeading(); //displays project information
	do
	{
		cout << "\nEnter a filename: ";
		cin >> fileName;
		fin.open(fileName);
		if (fin.fail())
		{
			cout << "\nThe file failed to open\n";
			exit(1);
		}
		//gets size
		fin.get(symbol);
		while (symbol != '\n')
		{
			sizeChar[a] = symbol;
			fin.get(symbol);
			a++;
		}
		size = atoi(sizeChar);
		//begins section to get city state and population
		fin.get(symbol);
		for (c = 0; c < size; c++)
		{
			//section gets city
			for (i = 0; symbol != ' '; i++)
			{
				city[c][i] = symbol;
				fin.get(symbol);
			}
			city[c][i] = '\0';
			//section gets state
			fin.get(symbol);
			for (i = 0; symbol != ' '; i++)
			{
				state[c][i] = symbol;
				fin.get(symbol);
			}
			state[c][i] = '\0';
			//gets population
			fin.get(symbol);
			for (i = 0; symbol != '\n'; i++)
			{
				popChar[i] = symbol;
				fin.get(symbol);
			}
			population[c] = atoi(popChar);
			fin.get(symbol);
		}
		fin.close();

		selectionSort(city, state, population, size);
		print(city, state, population, size);

		cout << "\nWould you like to continue? Y (or y) for yes, N (or n) for no: ";
		cin >> playAgain;
		cin.ignore(100, '\n');
	} while (playAgain == 'y' || playAgain == 'Y');
	return 0;
}

void displayHeading() //Displays the heading to the program
{
	cout << "Programmer: Sam Branka\n"
		 << "Course:     COSC246, Winter 2016\n"
		 << "Due Date:   4-7-16\n"
		 << "Lab #:      10\n";
}

void copyArray(char arr1[], char arr2[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr1[i] = arr2[i];
	}
}

void print(char city[][20], char state[][3], int population[], int size)
{
	cout << "\nThe data sorted by population is:\n";
	for (int i = 0; i < size; i++)
	{
		cout << left << setw(20) << city[i] << setw(3) << state[i]
			 << "\t\t" << population[i] << endl;
	}
}

void selectionSort(char city[][20], char state[][3], int population[], int size)
{
	char tempC[20], tempD[3];
	int biggest, current, s, temp;

	for (s = 0; s < size; s++)
	{
		biggest = s;
		for (current = s + 1; current < size; current++)
		{
			if (population[current] > population[biggest])
				biggest = current;
		}

		copyArray(tempC, city[s], 20);
		copyArray(city[s], city[biggest], 20);
		copyArray(city[biggest], tempC, 20);

		copyArray(tempD, state[s], 3);
		copyArray(state[s], state[biggest], 3);
		copyArray(state[biggest], tempD, 3);

		temp = population[s];
		population[s] = population[biggest];
		population[biggest] = temp;
	}
}
