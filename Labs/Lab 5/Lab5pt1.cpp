 /*
  * Programmer: Sam Branka
  * Course: COSC 246, Winter 2016
  * Lab: 5, part 1
  * Due Date: 3/1/2016
  * Description: This program computes the area of a triangle 
  *              with a given base and height 
  */



#include <iostream>
using namespace std;


double calcArea(double, double);

int main()
{
	double area, base, height;
	char doAgain;
		
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(1);
	
	cout<< "Programmer: Sam Branka\n"
        << "Course:     COSC 246\n"
        << "Due Date:   Feb. 18, 2016\n"
	    << "Lab#:       5, part 1\n";
	

    do{
	    cout<< "\nEnter the base and height of a triangle: ";
	    cin>> base >> height;
    
	    cout<< "The area is: " << calcArea(base, height);
	    
	    cout<< "\n\nWould you like to find the area of another triangle?"
	        << " Press y(for yes), n(for no): ";
	    cin>> doAgain;
    }while(doAgain=='y'||doAgain=='Y');
     
	return 0;
}
	
double calcArea(double a, double b)
{   
   double area;
   
   area=(a*b)/2;
   
   return area;
}	
	
	
