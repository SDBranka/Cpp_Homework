 /*
  * Programmer: Sam Branka
  * Course: COSC 246, Winter 2016
  * Lab: 6, part 2
  * Due Date: 3/3/2016
  * Description: This program reverses the value of the first parameter 
  *              and returns that value through the second parameter  
  *             
  */

#include <iostream>
using namespace std;
 
void displayHeading();                                             //displays project information
void reverse (int, int&);                                          //this function takes in a number, reverses
                                                                   //  the order of digits, and displays the new number

int main()
{
	int number, revNumber;
	char playAgain;
	
    displayHeading();                                              //displays project information	
	do{
       cout<< "\nEnter a whole number: ";
       cin>> number;   
       
       reverse(number, revNumber);                                 //this function takes in a number, reverses
                                                                   //  the order of digits, and displays the new number
       
       cout<< "\nWould you like to continue? Y (or y) for yes, N (or n) for no: ";
       cin>> playAgain;
    }while(playAgain=='y'||playAgain=='Y');
    return 0;
}


void displayHeading()                                              //Displays the heading to the program
{
	cout<< "Programmer: Sam Branka\n"
        << "Course:     COSC246, Winter 2016\n"
        << "Due Date:   3-3-16\n"
	    << "Lab #:      6, part 2\n";  
}

void reverse(int num, int& result)                                 //this function takes in a number, reverses
{                                                                  //  the order of digits, and displays the new number
	int number=num,
	    n=0;
	
	result=0;    
	do{
		result=result*10+n;
		n=num%10;
		num=num/10;       	 
	}while(n>0);
	
	cout<< "Reverse of " << number << " is: "
	    << result << endl;
}
