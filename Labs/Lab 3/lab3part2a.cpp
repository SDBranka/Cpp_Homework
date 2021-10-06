/*
  * Programmer: Sam Branka
  * Course: COSC 246, Winter 2016
  * Lab: 3, part 2a
  * Due Date: 2/1/2016
  * Description: This program computes and then 
  *              displays the number of days in
  *              a month of the users selection 
  */

#include <iostream>
using namespace std;

int main()
{
	int month;
	char do_again;

	cout << "Programmer: Sam Branka\n"
		<< "Course: COSC 246, Winter 2016\n"
		<< "Lab: 3, part 2a\n"
		<< "Due Date: 2/1/2016\n";

	do
	{
		cout << "\nEnter a month (1-12): ";
		cin >> month;

		if (month == 2)
			cout << "28 days";
		else if (month == 4 || month == 6 || month == 9 || month == 11)
			cout << "30 days";
		else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
			cout << "31 days";
		else
			cout << "Invalid input, TRY AGAIN";

		cout << "\n\nDo it again, Y(for yes) and N(for no)?";
		cin >> do_again;
	} while (do_again == 'y' || do_again == 'Y');

	return 0;
}
