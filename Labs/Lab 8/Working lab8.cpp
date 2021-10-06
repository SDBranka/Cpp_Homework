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
#include <cmath>   // includes library that allows sqrt
#include <cstdlib> // includes library that allows pow and rand
#include <ctime>   // includes computer time
#include <fstream> // includes i/o stream
#include <cctype>
#include <string>
using namespace std;

void displayHeading(); //displays project information
void readInput(char, char);

int main()
{
	char convertedVowel, fileName[21], playAgain, symbol, vowel;
	int countLine, countTot, i = 1;

	displayHeading(); //displays project information
	do
	{
		cout << "Enter an input file name: ";
		cin >> fileName;
		cout << "\nEnter a vowel: ";
		cin >> vowel;
		convertedVowel = tolower(vowel);
		vowel = toupper(vowel);

		/*    cout<< "Number of " << vowel 
            << " (or " << convertedVowel
          <<") on each line: \n";*/
		//    cout<< vowel;
		/*		readInput(file, vowel);

               void readInput(char file, char v){
	
	int convV, countLine=0, countTot=0, i=1;
	char symbol;
        */
		//convV=tolower(v);
		cout << "Number of " << vowel
			<< " (or " << convertedVowel
			<< ") on each line: \n";

		ifstream fin;
		fin.open(fileName);
		if (fin.fail())
		{
			cout << "Can't open file";
			exit(1);
		}
		fin.get(symbol);
		symbol = toupper(symbol);
		countLine = 0;
		countTot = 0;
		while (!fin.eof())
		{	// looks for end of file
			// cout<< endl << "Line count: " << countLine << endl
			//	     <<"total count: " << countTot << endl
			//		 << "i: " << i << endl << "Symbol: " << symbol << "\n\n";

			if (vowel == symbol)
			{
				countTot++;
				countLine++;
			}
			if (symbol == '\n')
			{
				cout << i << "-   " << countLine
					<< "\n";
				countLine = 0;
				i++;
			}
			fin.get(symbol);
			symbol = toupper(symbol);
		}
		cout << "\nTotal number of " << vowel
			<< " (or " << convertedVowel << "): "
			<< countTot << "\n";

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
