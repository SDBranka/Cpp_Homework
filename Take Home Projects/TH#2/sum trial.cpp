#include <iostream>
#include <cmath>                           // includes library that allows sqrt
#include <cstdlib>                         // includes library that allows pow and rand
#include <ctime>                           // includes computer time
#include <fstream>                         // includes i/o stream
#include <cctype>
using namespace std;
 
void displayHeading();                                          //displays project information

int main()
{
    srand(time(0));

	cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
	
	char number[3];
	int sum;
	
	cout<<"Enter a three digit number:";
	cin>>number;
	cout<< "\nSum is " << sum
	    << "num[0] is " << number[0] << endl
	    << "num[1] is " << number[1] << endl
	    << "num[2] is " << number[2]; 
	sum= number[0]+number[1]+number[2];
	
	cout<<"\n\nthe sum is: " << sum;
	
	return 0;
}
