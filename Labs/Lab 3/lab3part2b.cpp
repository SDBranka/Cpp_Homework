/*
  * Programmer: Sam Branka
  * Course: COSC 246, Winter 2016
  * Lab: 3, part 2b
  * Due Date: 2/1/2016
  * Description: This program computes and then 
  *              displays the number of days in
  *              a month of the users selection 
  *              
  */

#include <iostream>
using namespace std;

int main()
{
	int month;
	char do_again;

	cout << "Programmer: Sam Branka\n"
		<< "Course: COSC 246, Winter 2016\n"
		<< "Lab: 3, part 2b\n"
		<< "Due Date: 2/1/2016\n";

	do
	{
		cout << "\nEnter a month (1-12): ";
		cin >> month;

		switch (month)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			cout << "31 days";
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			cout << "30 days";
			break;
		case 2:
			cout << "28 days";
			break;
		default:
			cout << "Invalid input. TRY AGAIN";
			break;
		}

		cout << "\n\nDo it again, Y(for yes) and N(for no)?";
		cin >> do_again;
	} while (do_again == 'y' || do_again == 'Y');

	return 0;
}
