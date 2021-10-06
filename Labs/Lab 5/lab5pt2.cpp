/*
  * Programmer: Sam Branka
  * Course: COSC 246, Winter 2016
  * Lab: 5, part 2
  * Due Date: 3/1/2016
  * Description: This program computes the area of a triangle 
  *              by using the length of its three sides 
  */

#include <iostream>
#include <cmath>
using namespace std;

double calcArea(double, double, double);

int main()
{
	double sideA, sideB, sideC;
	char doAgain;

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(1);

	cout << "Programmer: Sam Branka\n"
		<< "Course:     COSC 246\n"
		<< "Due Date:   Feb. 18, 2016\n"
		<< "Lab#:       5, part 2\n";

	do
	{
		cout << "\nEnter the lengths of the three sides: ";
		cin >> sideA >> sideB >> sideC;
		cout << "The area is: " << calcArea(sideA, sideB, sideC);

		cout << "\n\nWould you like to find the area of another triangle?"
			<< " Press y(for yes), n(for no): ";
		cin >> doAgain;
	} while (doAgain == 'y' || doAgain == 'Y');

	return 0;
}

double calcArea(double a, double b, double c)
{
	double area, s, d, e, f;

	s = (a + b + c) / 2;
	d = s - a;
	e = s - b;
	f = s - c;
	area = sqrt(s * d * e * f);

	return area;
}
