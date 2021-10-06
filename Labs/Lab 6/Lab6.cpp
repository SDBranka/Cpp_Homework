/*
  * Programmer: Sam Branka
  * Course: COSC 246, Winter 2016
  * Lab: 6, part 1
  * Due Date: 3/3/2016
  * Description: This program reads the price of an item and the quantities purchased, comutes the  
  *              sales tax, computes the total amount due including the 6% sales tax, and then displays
  *              the result
  */

#include <iostream>
#include <cmath>   // includes library that allows sqrt
#include <cstdlib> // includes library that allows pow and rand
#include <ctime>   // includes computer time
using namespace std;

void displayHeading();                  //displays project information
void priceAndQuantity(double &, int &); //reads in the unit price and quantity desired
void computeAndDisplay(double, int);    //performs computations and displays result

int main()
{
    char playAgain;
    double price;
    int quantity;

    displayHeading(); //displays project information
    do
    {
        priceAndQuantity(price, quantity);  //reads in the unit price and quantity desired
        computeAndDisplay(price, quantity); //performs computations and displays result

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

void priceAndQuantity(double &p, int &q) //reads in the unit price and quantity desired
{
    cout << "\nEnter the price and quantity of the item: ";
    cin >> p >> q;
}

void computeAndDisplay(double p, int q) //performs computations and displays result
{
    double total, tax, taxAndTotal;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    total = p * q;
    tax = total * 0.06;
    taxAndTotal = total + tax;

    cout << "The price of the item purchased is:     $" << p << endl
         << "Number of the item purchased:           " << q << endl
         << "The sales tax:                          " << tax << endl
         << "The total amount:                       $" << taxAndTotal << endl;
}
