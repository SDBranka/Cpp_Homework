/*
  * Programmer: Sam Branka
  * Course: COSC 246, Winter 2016
  * Lab: 7
  * Due Date: 3-7-2016
  * Description: This program reverses the value of the first parameter 
  *              and returns that value through the second parameter  
  *             
  */

#include <iostream>
#include <cmath>   // includes library that allows sqrt
#include <cstdlib> // includes library that allows pow and rand
#include <ctime>   // includes computer time
#include <fstream> // includes i/o stream
using namespace std;

void displayHeading(); //displays project information
void reverse(int, int &);

int main()
{
    int largest = 101, smallest = 0,
        n, randN, total;
    double average;
    char playAgain;

    ifstream in_stream;             //declare an interger stream
    in_stream.open("testdata.txt"); //connect the input file to the stream
    in_stream.close();

    ofstream out_stream;
    out_stream.open("proj7.txt");

    srand(time(0)); //seeds the random number generator

    cout.setf(ios::fixed); //limits the number of decimal places shown
    cout.setf(ios::showpoint);
    cout.precision(1);

    displayHeading(); //displays project information
    do
    {
        cout << "\nHow many numbers you want in \"proj7.txt\": ";
        cin >> n;
        cout << "File \"proj7.txt\" contains:\n";
        for (int i = 1; i <= n; i++)
        {
            randN = 1 + (rand() % 100);
            out_stream << randN << "\t";

            if (i % 3 == 0)
            {
                out_stream << "\n";
            }
        }

        cout << "\nDo it again? Y (or y) for yes, N (or n) for no: ";
        cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');

    out_stream.close();

    return 0;
}

void displayHeading() //Displays the heading to the program
{
    cout << "Programmer: Sam Branka\n"
        << "Course:     COSC246, Winter 2016\n"
        << "Lab #:      7\n"
        << "Due Date:   3-10-16\n";
}
