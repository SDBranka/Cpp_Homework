/* user defined functions
 *
 *
 *
 *
 *
 */

#include <iostream>
using namespace std;

int sum(int, int); //function declarations
//int sum_a(int, int);
int runningTotal(int, int);

int main()
{
   cout << sum(10, 15) << endl; //function invocation
   int first = sum(100, 200);   // the "first" in this function is stored separately from the "first" from the sum function
   cout << first << endl;
   cout << runningTotal(1, 10) << endl;

   return 0;
}

//returns the sum of it's  two parameters
int sum(int first, int second) //function heading
{
   return first + second;
}

/*int sum_a(int first, int second)
{
}*/

//retunrn the sum of all the numbers from the first parameter to the second parameter
int runningTotal(int first, int second)
{
   int total = 0;
   for (int i = first; i <= second; i++)
      total = total + i;
   return total;
}
