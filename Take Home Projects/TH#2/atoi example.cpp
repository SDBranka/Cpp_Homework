/* atoi example */
#include <stdlib.h>     /* atoi */
#include <iostream>
using namespace std;

int main ()
{
  int number;
  char buffer[256];
  cout<< "Enter a number: ";
  cin>> buffer;
  number = atoi (buffer);
  cout<< "The number is " << number << endl;
  int sum=0;
  while(number>0){
   	sum=sum+number%10;
	number=number/10;
  }
  cout<< sum << endl;
    
  return 0;
}
