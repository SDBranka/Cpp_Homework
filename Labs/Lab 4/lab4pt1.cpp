/*
  * Programmer: Sam Branka
  * Course: COSC 246, Winter 2016
  * Lab: 4
  * Due Date: 2/4/2016
  * Description: This program prompts for and reads 
  *              in a whole number from the keyboard
  *              and then performs the designated actions
  */

#include <iostream>
using namespace std;

int main()
{
   int whole_number, countTwo = 1, oddSquared,
                     countThree = 1, evenSum = 0;
   char doAgain;

   cout << "Programmer: Sam Branka\n"
      << "Course: COSC 246, Winter 2016\n"
      << "Lab:4\n"
      << "Due Date: 2/4/2016\n";

   do
   {
      cout << "\nEnter a whole number: ";
      cin >> whole_number;

      if (whole_number % 2 == 0)
         cout << "\n"
            << whole_number << " is even.\n\n";
      else
         cout << "\n"
            << whole_number << " is odd.\n\n";

      cout << "Numbers from 1 through " << whole_number << " are: \n";
      for (int c = 1; c <= whole_number; c++)
      {
         cout << c << "\t";
      }

      cout << "\n\nSquare of odd numbers from 1 through " << whole_number << " are: \n";
      while (countTwo <= whole_number)
      { // portion to square all odd digits between
         if (countTwo % 2 != 0)
         { // 1 and whole_number
            oddSquared = countTwo * countTwo;
            cout << oddSquared << "\t";
            countTwo++;
         }
         else
            countTwo++;
      }
      countTwo = 1; // returns countTwo =1

      cout << "\n\nSum of even numbers from 1 through " << whole_number << " is: \n";
      while (countThree <= whole_number)
      { // portion to add all even digits between
         if (countThree % 2 == 0)
         { // 1 and whole_number
            evenSum = evenSum + countThree;
            countThree++;
         }
         else
            countThree++;
      }
      cout << evenSum;
      countThree = 1; // returns countThree =1
      evenSum = 0;    // returns evenSum =0

      cout << "\n\nNumbers from 1 through " << whole_number << " (5 numbers per line):\n";
      for (int a = 1; a <= whole_number; a++)
      {
         if (a % 5 == 0)
            cout << a << "\n";
         else
            cout << a << "\t";
      }

      cout << "\n\nDo it again, Y for yes, N for no? ";
      cin >> doAgain;
   } while (doAgain == 'y' || doAgain == 'Y');

   return 0;
}
