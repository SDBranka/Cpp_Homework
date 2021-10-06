/*
  * Programmer: Sam Branka
  * Course: COSC 246, Winter 2016
  * Lab: 6, part 1
  * Due Date: 3/3/2016
  * Description:  for this program the user will designate an input file
  *               and a vowel; the program will then input and read the file
  *               and then display the number of times the vowel appears on 
  *               each line, as well as the total number of times it appears 
  *               in the file
  */

#include <iostream>
#include <fstream> // includes i/o stream
#include <cctype>
#include <string>
using namespace std;

void displayHeading(); //displays project information
void readInput(ifstream &, char);

int main()
{
	char file_name[21], playAgain, vowel;
	ifstream fin;

	displayHeading(); //displays project information
	do
	{
		cout << "\nEnter an input file name: ";
		cin >> file_name;
		fin.open(file_name);
		if (fin.fail())
		{
			cout << "Can't open file";
			exit(1);
		}
		cout << "\nEnter a vowel: ";
		cin >> vowel;
		vowel = toupper(vowel);

		readInput(fin, vowel);
		fin.close();

		cout << "\nWould you like to continue? Y (or y) for yes, N (or n) for no: ";
		cin >> playAgain;
	} while (playAgain == 'y' || playAgain == 'Y');
	return 0;
}

void displayHeading() //Displays the heading to the program
{
	cout << "Programmer: Sam Branka\n"
		<< "Course:     COSC246, Winter 2016\n"
		<< "Due Date:   3-3-16\n"
		<< "Lab #:      6, part1\n";
}

void readInput(ifstream &file, char v)
{

	int countLine, countTot, i = 1;
	char convV, symbol;
	ofstream fout;
	fout.open("lab8AO.txt");

	convV = tolower(v);
	cout << "Number of " << v
		<< " (or " << convV
		<< ") on each line: \n";
	fout << "Number of " << v
		<< " (or " << convV
		<< ") on each line: \n";

	file.get(symbol);
	symbol = toupper(symbol);
	countLine = 0;
	countTot = 0;
	while (!file.eof())
	{ // looks for end of file
		if (v == symbol)
		{
			countTot++;
			countLine++;
		}
		if (symbol == '\n')
		{
			cout << i << "-   " << countLine
				<< "\n";
			fout << i << "-   " << countLine
				<< "\n";
			countLine = 0;
			i++;
		}
		file.get(symbol);
		symbol = toupper(symbol);
	}
	cout << "\nTotal number of " << v
		<< " (or " << convV << "): "
		<< countTot << "\n";
	fout << "\nTotal number of " << v
		<< " (or " << convV << "): "
		<< countTot << "\n";
	fout.close();
}
