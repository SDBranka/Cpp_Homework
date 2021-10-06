#include <iostream>
#include <cmath>
using namespace std;

void displayHeading();                 //displays heading
void acquireNumber(int&);              //takes a number selected by the user
void computeRoot(int);                //computes and displays the square root of the input

int main(){
 
   int number;
   
   displayHeading();
   acquireNumber(number);
   computeRoot(number);
	
   return 0;	
}


void displayHeading()        //displays heading
{
	cout<< "Programmer: Sam Branka\n"
        << "Course:     COSC 246, Winter 2016\n"
        << "Lab #:      Lecture 6 demo\n"
        << "Due Date:   \n\n";
    
	return;
}

void acquireNumber(int& a)
{
	cout<< "Enter a whole number: ";
	cin>> a;
}

void computeRoot(int b)
{
	for(int i=1; i<=b; i++)
	   cout<< i << "   " << sqrt(i) << endl;
}
