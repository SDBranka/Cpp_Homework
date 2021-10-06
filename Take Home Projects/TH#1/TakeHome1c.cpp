#include <iostream>
#include <cmath>   // includes library that allows sqrt
#include <cstdlib> // includes library that allows pow and rand
#include <ctime>   // includes computer time
using namespace std;

void displayHeading();				  //displays project information
void userNumber(int &);				  //allows player to input guess at the number
int computerGuess(int &);			  //establishes the random number used
int checkGuess(int, int &, int);	  //compares the two numbers and returns a score value
void scoreTrack(int &);				  //keeps track of the score
void alterStats(int &, int &, int &); //modifies and monitors game stats
void gameSummary(int, int);			  //displays game stats

int main()
{
	int bestScore = 999,
		gameCount = 0,
		scoreTotal = 1,
		comRandNum, userNum, check;
	char playAgain;

	srand(time(0));

	displayHeading();

	do
	{
		userNumber(userNum);
		cout << "Computer guesses: ";
		do
		{
			cout << computerGuess(comRandNum) << "   "; //establishes the random number used
			if (scoreTotal % 7 == 0)
				cout << "\n                  ";
			check = checkGuess(comRandNum, userNum, scoreTotal); //compares the two numbers and returns a score value
			scoreTrack(scoreTotal);
		} while (check == 0);
		alterStats(gameCount, scoreTotal, bestScore);

		cout << "\nPlay another game, yes (or no): ";
		cin >> playAgain;
	} while (playAgain == 'y' || playAgain == 'Y');

	gameSummary(bestScore, gameCount); //displays game stats

	return 0;
}

void displayHeading() //Displays the heading to the program
{
	cout << "Programmer: Sam Branka\n"
		<< "Course:     COSC246, Winter 2016\n"
		<< "Lab #:      Take Home Project #1\n"
		<< "Due Date:   3-17-16\n";
}

void userNumber(int &uNumber) //allows player to input guess at the number
{
	cout << "\nEnter a target value: ";
	cin >> uNumber;
}

int computerGuess(int &comGuess)
{

	comGuess = 1 + (rand() % 100); //ask about why when set to 100 I got 101

	return comGuess;
}

int checkGuess(int cNum, int &uNum, int scoreT) //compares the two numbers and returns a score value
{
	if (uNum == cNum)
	{
		cout << "\n                  Score: " << scoreT << endl;

		return 1;
	}
	else
		return 0;
}

void scoreTrack(int &score) //keeps track of the score
{
	score++;
}

void alterStats(int &games, int &scores, int &scoreBest) //modifies and monitors game stats
{
	games++;
	if (scores <= scoreBest)
		scoreBest = scores;
	scores = 1;
}

void gameSummary(int scoreBest, int games) //displays game stats
{
	cout << "\nGame summary\n"
		<< "\tNumber of games played:    " << games
		<< "\n\tBest score:                " << scoreBest << endl;
}
