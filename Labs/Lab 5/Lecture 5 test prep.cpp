#include <iostream>
#include <cmath>
using namespace std;

/*
 * while_loop
 * do_while_loop
 * for_loop
 */

// read numbers type int at the keyboard as long as
// they're sum is less than 100, then print the sum

int sum = 0, number;

cout << "Enter a positive number:";
while (sum < 100)
{
	cin >> number;
	sum = sum + number;
}
cout << "Your sum is " << sum << endl;

// do the same thing using a do_while loop
// a do_while loop will run at least once

int sum = 0, number;

cout << "Enter a positive number";
do
{
	cin >> number;
	sum = sum + number;
} while (sum < 100);
cout << "Your sum is " << sum << endl;

// do this again using while and a break

int sum = 0;
, number

		  cout
	  << "Enter a positive number";
while (true)
{ //true is always true
	cin >> number;
	sum = sum + number;
	if (sum >=)100)                         //checks to see if sum>=100 
	   break;                             // breaks the loop if the sum>=100
}
cout << "Your sum is " << sum < endl;

//change this so that if the entered number is negative it is not added to the sum

int sum = 0, number

					 cout
				 << "Enter a positive number";
while (sum < 100)
{
	cin >> number;
	if (number > 0)
		sum = sum + number;
 )
 cout<< "Your sum is " << sum << endl;

 // do this with a for loop

 int sum, number;

 cout << "Enter a positive number";
 for (sum = 0; sum < 100; sum = sum + number)
 {
	 cin >> number;
	 if (number < 0)
		 number = 0;
 }
