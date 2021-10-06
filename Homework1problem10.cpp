/*
 * Programmer: Sam Branka
 * Course: COSC246, Winter 2016
 * Description: This program prompts for and reads
 *              in a whole number from the keyboard,
 *              adds 5 to the value of the number if
 *              it is even, and then displays the 
 *              number on screen. 
 *              adds 5 and then displays the result
 */

#include <iostream>
using namespace std;

int main()
{
   int whole_number;

   cout << "Please enter a whole number: ";
   cin >> whole_number;

   if (whole_number % 2 == 0)
   {
      whole_number = whole_number + 5;
   }
   cout << whole_number;

   return 0;
}
