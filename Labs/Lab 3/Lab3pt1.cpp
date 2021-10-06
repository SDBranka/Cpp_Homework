/*
  * Programmer: Sam Branka, Ola Shaikh Mohammed
  * Course: COSC 246, Winter 2016
  * Lab: 3, part 1
  * Due Date: 2/1/2016
  * Description: A program to input a users weight 
  *              and age and then to compute and 
  *              and display their age and weight
  *              on either Mars or Jupiter as the 
  *              user selects.
  */

#include <iostream>
using namespace std;

int main()
{
	double weight, age, computed_weight, new_weight;
	char planet_choice, do_again;

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(1);

	cout << "Programmer: Sam Branka, Ola Shaikh Mohammed\n"
    	<< "Course: COSC 246, Winter 2016\n"
		<< "Lab: 3, part 1\n"
		<< "Due Date: 2/1/2016\n";

	do
	{
		cout << "\nEnter your weight in pounds: ";
		cin >> weight;
		cout << "Enter your age in years: ";
		cin >> age;
		cout << "Enter the first letter of the new planet: ";
		cin >> planet_choice;
		cout << "\nOn Earth you weigh " << weight
			<< " pounds and are " << age << " years old.";

		if (planet_choice == 'M' || planet_choice == 'm')
		{
			age = age / 1.88;
			new_weight = weight * 0.38;

			cout << "\nOn Mars you weigh " << weight
				<< " pounds and are " << age
				<< " year old.\n";
		}
		else
		{
			age = age / 11.9;
			new_weight = weight * 2.36;

			cout << "\nOn Jupiter you weigh " << weight
				<< " pounds and are "
				<< age << " year old.\n";
		}

		if (new_weight < weight)
		{
			cout << "\nweight on Earth - weight on Mars = "
				<< weight - new_weight;
		}
		cout << "\n\nDo it again, Y(for yes) and N(for no)?";
		cin >> do_again;
	} while (do_again == 'y' || do_again == 'Y');

	return 0;
}
