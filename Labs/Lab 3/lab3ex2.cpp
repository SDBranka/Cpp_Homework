/* practice the switch statement
 *
 * -labels must all be unique
 * -labes must be the same type as the expression
 * -Labels must be constants
 * -Labels must not be decimals
 * -Labels may be characters
 * -Labels must not be strings
 *  
 */

/* 
#include <iostream>
using namespace std;

int main()
{
	int number;
	cout<< "Please enter a whole number: ";
	cin>> number;
	
	switch(number){
		case 1: cout<< "Here is your exam score\n";
		        break;
		case 2: cout<< "Here is your quiz score\n";
		        break;
		case 3: cout<< "Here is your homework score\n";
		        break;
	    case 4: cout<< "Here is your total score\n";
	            break;
	    default:  cout<< "Invalid input, try again later.\n";
	            break;
	            
	}
		
	return 0;
}/*/

#include <iostream>
using namespace std;

	int
	main()
{

	char letter;

	cout << "Enter a character: ";
	cin >> letter;
	switch (letter)
	{
	case 'a':
		cout << "Here is your exam score\n"; //checks only lower case 'a'
		break;
	case 'b':
	case 'B': //checks upper and lower case 'b', 'c', 'd'
		cout << "Here is your quiz score\n";
		break;
	case 'c':
	case 'C':
		cout << "Here is your homework score\n";
		break;
	case 'd':
	case 'D':
		cout << "Here is your total score\n";
		break;
	default:
		cout << "Invalid input, try again later.\n";
	}
}
