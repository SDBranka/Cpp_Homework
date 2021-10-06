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

int main()
{
	double area, base, height;
	char doAgain;
	
	cout<< "Programmer: Sam Branka\n"
        << "Course: COSC 246\n"
        << "Due Date: Feb. 18, 2016\n"
	    << "Lab#: 5, part 1\n";
	
    do{
	   	cout<< "\nEnter the base and height of a triangle: ";
	    cin>> base >> height;
        area=(base*height)/2;
	    cout<< "\nThe area is: " << area << endl;
	    
	    cout<< "\nWould you like to find the area of another triangle?"
	        << " Press y(for yes), n(for no): ";
	    cin>> doAgain;
      }while(doAgain=='y'||doAgain=='Y');
      
	return 0;
}
	
	
  