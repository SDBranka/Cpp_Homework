#include <iostream>
#include <cmath>   // includes library that allows sqrt
#include <cstdlib> // includes library that allows pow and rand
#include <ctime>   // includes computer time
using namespace std;

void displayHeading();				  //displays project information
void makeRandNum(int &);			  //establishes the random number used
void userNumber(int &);				  //allows player to input guess at the number
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

	displayHeading(); //displays project information

	do
	{
		makeRandNum(comRandNum); //establishes the random number used
								 //cout<< "\n*" << comRandNum << endl;                          //editing line
		userNumber(userNum);

		do
		{
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

void makeRandNum(int &rNumber) //establishes the random number used
{
	srand(time(0));
	rNumber = 1 + (rand() & 99); //ask about why when set to 100 I got 101
}

void userNumber(int &uNumber) //allows player to input guess at the number
{
	cout << "\nGuess a number between 1 and 100: ";
	cin >> uNumber;
}

int checkGuess(int cNum, int &uNum, int scoreT) //compares the two numbers and returns a score value
{
	if (uNum == cNum)
	{
		cout << "You guessed correctly!\n"
			<< "Your score is: " << scoreT << endl;

		return 1;
	}
	else if (uNum <= cNum)
	{
		cout << "The number is higher. Try again.\n"
			<< "Guess a number between 1 and 100: ";
		cin >> uNum;
	}
	else
	{
		cout << "The number is lower. Try again.\n"
			<< "Guess a number between 1 and 100: ";
		cin >> uNum;
	}

	return 0;
}

void scoreTrack(int &score) //Keeps track of the score
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
		<< "\n\tBest score:                " << scoreBest - 1 << endl;
}
