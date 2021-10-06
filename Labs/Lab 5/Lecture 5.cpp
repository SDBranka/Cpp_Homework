/*
 * breaking programs into smaller programs
 * writing functions
 */

// There are two types of functions
// Predefined-already written in library
// user defined- we write these ourselves
//     need to know: name and location of the function
//                   how many input(arguments) and their types
//                   does the function return a value
// Page 187 of text book
//

/*example*/
// name of directive cmath, name of function sqrt,
// contains a double, returns a type double

#include <iostream>
#include <cmath>   // includes library that allows sqrt
#include <cstdlib> // includes library that allows pow and rand
#include <ctime>   // includes computer time
using namespace std;

int main()
{

	double number;

	cout << "Enter a number: ";
	cin >> number;

	/* how to call a function
 *  Function_name(input/argument)
 */

	cout << "Square root of number is "
		<< sqrt(number) << endl;
	// cmath, pow, 2 doubles, one double
	double base, exponent;
	cout << "\nEnter the base and exponent values ";
	cin >> base >> exponent;
	double result = pow(base, exponent);
	cout << "Result is " << result;

	//to randomize need to use stdlib, rand, none, between 0 and RAND_MAX
	//limit rand numbers to <100

	int num1, num2;

	//seed the random number generator only once like next like
	srand(time(NULL));
	num1 = rand() % 101;
	num2 = rand() % 101;
	cout << "\n\nnum1 is " << num1
		<< "\nnum2 is " << num2
		<< "\nsum is " << num1 + num2 << endl;

	return 0;
}

// cmath, pow, 2 doubles, one double
