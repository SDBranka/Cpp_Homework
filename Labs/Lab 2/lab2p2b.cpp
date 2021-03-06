/*
 * Programmer: Sam Branka
 * Course: COSC 246, Winter 2016
 * Lab: 2, part 2
 * Due Date: 1/21/2016
 * Description: This program takes a user given value of pennies and 
 *              computes it's most efficient conversion into dollars,
 *              quarters, dimes, nickels, and pennies
 */

#include <iostream>
using namespace std;

int main()
{
    int dollar, quarter, dime,
        nickel, penny, counter = 0;

    cout << "Programmer: Sam Branka\n"
        << "Course: COSC 246, Fall 2016\n"
        << "Lab: 2, part #2\n"
        << "Due Date: 1/21/16\n\n";

    while (counter < 3)
    {
        cout << "Enter the number of pennies: ";
        cin >> penny;
        if (penny >= 0)
        {
            dollar = penny / 100;
            cout << dollar << " dollars, ";
            penny = penny - dollar * 100;
            quarter = penny / 25;
            cout << quarter << " quarters, ";
            penny = penny - quarter * 25;
            dime = penny / 10;
            cout << dime << " dimes, ";
            penny = penny - dime * 10;
            nickel = penny / 5;
            cout << nickel << " nickels, ";
            penny = penny - nickel * 5;
            cout << penny << " pennies\n\n\n";
        }
        else
        {
            cout << "Invalid input, TRY AGAIN!\n\n";
        }
        counter++;
    }
    return 0;
}
